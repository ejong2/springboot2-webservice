#define _WINSOCK_DEPRECATED_NO_WARNINGS 

#include <iostream>
#include <WinSock2.h>

#pragma comment(lib, "WS2_32.lib")

using namespace std;

int main()
{
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
					SOCKET CS = accept(LS, (SOCKADDR*)&CA, &sizeCA);

					FD_SET(CS, &Reads);
					cout << "CONNECT : " << CS << '\n';

					int SendBytes = send(CS, MoveBuffer, sizeof(MoveBuffer), 0);
				}
				else
				{
					char RecvBuffer[] = { 0, };
					int RecvBytes = recv(Reads.fd_array[i], RecvBuffer, sizeof(RecvBuffer) - 1, 0);
					if (RecvBytes <= 0 || RecvBuffer == "EndBuffer")
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