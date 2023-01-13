#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <iostream>
#include <stdlib.h>

#include <WinSock2.h>
#include "mysql-connector-c++-8.0.31-winx64/include/jdbc/cppconn/driver.h"
#include "mysql-connector-c++-8.0.31-winx64/include/jdbc/mysql_connection.h"
#include "mysql-connector-c++-8.0.31-winx64/include/jdbc/cppconn/prepared_statement.h"
#include "mysql-connector-c++-8.0.31-winx64/include/jdbc/cppconn/exception.h"


//#include "mysql_connection.h"
//#include <cppconn/driver.h>
//#include <cppconn/exception.h>
//#include <cppconn/prepared_statement.h>



#pragma comment(lib, "ws2_32.lib")
//#pragma comment(lib, "mysql-connector/lib64/vs14/debug/mysqlcppconn.lib")


//Linker




using namespace std;

struct packet 
{
	//spawn , move = 1 , destroy
	int header = 1;
	int x = 1;
	int y = 0;
	int z = 0;
};	

const string server = "tcp://127.0.0.1:3306";
const string username = "root";
const string password = "zms134";

sql::Driver* driver;
sql::Connection* con;
sql::Statement* stmt;
sql::PreparedStatement* pstmt;


int main()
{

	//try
	//{
	//	driver = get_driver_instance();
	//	con = driver->connect(server, username, password);
	//}
	//catch (sql::SQLException e)
	//{
	//	cout << "Could not connect to server. Error message: " << e.what() << endl;
	//	system("pause");
	//	exit(1);
	//}




	packet mypack;



	WSADATA wsaData;

	SOCKET ServerSocket;
	SOCKET ClientSocket;

	sockaddr_in ServerSocketAddr;
	sockaddr_in ClientSockAddr;

	

	WSAStartup(MAKEWORD(2, 2), &wsaData);
	ServerSocket = socket(AF_INET, SOCK_STREAM, 0);
	memset(&ServerSocketAddr, 0, sizeof(ServerSocketAddr));

	//ServerSocketAddr.sin_addr.S_un.S_addr = INADDR_ANY;
	ServerSocketAddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	ServerSocketAddr.sin_family = PF_INET;
	ServerSocketAddr.sin_port = htons(7476);

	bind(ServerSocket, reinterpret_cast<sockaddr*>(&ServerSocketAddr), sizeof(ServerSocketAddr));
	listen(ServerSocket, 0);

	cout << "now Listenning..." << endl;
	int ClientSockAddrLength = sizeof(ClientSockAddr);
	

	ClientSocket = accept(ServerSocket, reinterpret_cast<sockaddr*>(&ClientSockAddr), &ClientSockAddrLength);
	cout << "======accept======" << endl;
	
	//char Buffer[32] = { 0, };

	while (0)
	{
		recv(ClientSocket, (char*)&mypack, sizeof(mypack), 0);
		switch (mypack.header)
		{
		case 1:
			//sign in
			//SQL 들어가서 ID중복인지 검사
			//없으면 -> 생성
			//send()
			//있으면 -> 비생성
			//send()
			break;
		case 2:
			//log in
			//SQL 들어가서 ID있는지 검사
			// 없으면 -> 실패
			// send()
			// 있으면 -> 해당 ID와 column Password가 일치하는지 검사
			// 일치하지않으면 -> 실패
			// send()
			// 일치하면 -> 성공
			// send()
			break;
		case 3:
			//move
			//send()
			break;
		default:
			break;
		}



		//Buffer 직렬화 ? 
		send(ClientSocket, (char*)&mypack, sizeof(mypack), 0);
		cout << "Send Once" << endl;


	}

	return 0;
}