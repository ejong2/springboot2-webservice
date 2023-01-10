#define _WINSOCK_DEPRECATED_NO_WARNINGS 

#include <iostream>
#include <WinSock2.h>

#include "jdbc/mysql_connection.h"
#include "jdbc/cppconn/driver.h"
#include "jdbc/cppconn/exception.h"
#include "jdbc/cppconn/prepared_statement.h"

#pragma comment(lib, "WS2_32.lib")
#pragma comment (lib, "mysqlcppconn.lib")

using namespace std;

const string server = "tcp://127.0.0.1:3306";
const string username = "root";
const string password = "1234";

sql::Driver* driver = nullptr;
sql::Connection* con = nullptr;
sql::Statement* stmt = nullptr;
sql::PreparedStatement* pstmt = nullptr;
sql::ResultSet* rs = nullptr;

SOCKET CS;

void LoginProcess(SOCKET ClientSocket)
{
	cout << "LoginProcess 함수 실행" << '\n';

	char IdBuffer[60] = { 0, };
	char PwdBuffer[60] = { 0, };

	int RecvBytes = recv(CS, IdBuffer, sizeof(IdBuffer), 0);
	string strID = IdBuffer;

	RecvBytes = recv(CS, PwdBuffer, sizeof(PwdBuffer), 0);
	string strPWD = PwdBuffer;

	pstmt = con->prepareStatement("INSERT INTO PlayerTable(`ID`,`PWD`) VALUES(?, ?)");
	pstmt->setString(1, strID);
	pstmt->setString(2, strPWD);
	pstmt->execute();
}

int main()
{
	driver = get_driver_instance();
	con = driver->connect(server, username, password);
	con->setSchema("UE4SERVER");

	WSADATA WSAData;
	WSAStartup(MAKEWORD(2, 2), &WSAData);
	SOCKET LS = socket(AF_INET, SOCK_STREAM, 0);

	SOCKADDR_IN LA;
	memset(&LA, 0, sizeof(LA));
	LA.sin_family = AF_INET;
	LA.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	LA.sin_port = htons(19934);

	bind(LS, (SOCKADDR*)&LA, sizeof(LA));
	listen(LS, 0);

	cout << "클라이언트를 기다리는 중입니다....." << '\n';

	fd_set Reads;
	fd_set Copys;
	FD_ZERO(&Reads);

	FD_SET(LS, &Reads);

	TIMEVAL TimeOut;
	TimeOut.tv_sec = 1;
	TimeOut.tv_usec = 10;

	char MoveBuffer[1024] = "Move";

	while (true)
	{
		Copys = Reads;

		int fd_num = select(0, &Copys, 0, 0, &TimeOut);

		for (int i = 0; i < (int)Reads.fd_count; i++)
		{
			if (FD_ISSET(Reads.fd_array[i], &Copys))
			{
				if (Reads.fd_array[i] == LS)
				{
					SOCKADDR_IN CA;
					memset(&CA, 0, sizeof(CA));
					int sizeCA = sizeof(CA);
					CS = accept(LS, (SOCKADDR*)&CA, &sizeCA);

					FD_SET(CS, &Reads);
					cout << "CONNECT : " << CS << '\n';

					int SendBytes = send(CS, MoveBuffer, sizeof(MoveBuffer), 0);
				}
				else
				{
					char RecvBuffer[10] = { 0, };
					int RecvBytes = recv(Reads.fd_array[i], RecvBuffer, sizeof(RecvBuffer) - 1, 0);

					string str = RecvBuffer;

					cout << str << '\n';

					if (str == "LoginPack")
					{
						LoginProcess(CS);
					}

					if (RecvBytes < 0 || str == "EndBuffer")
					{
						cout << "DISCONNECT : " << Reads.fd_array[i] << '\n';
						SOCKET DS = Reads.fd_array[i];
						FD_CLR(DS, &Reads);
						closesocket(DS);
					}
				}
			}
		}
	}

	WSACleanup();
}