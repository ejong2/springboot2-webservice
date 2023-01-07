#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <iostream>
#include <WinSock2.h>
#include <process.h>
#include <Windows.h>
#include <string>

#pragma comment(lib, "ws2_32.lib")

using namespace std;

int main()
{
	//init WSA
	WSAData wsaData;

	WSAStartup(MAKEWORD(2, 2), &wsaData);

	//using TCP Protocol
	SOCKET ListenSocket = socket(AF_INET, SOCK_STREAM, 0); 

	//set SocketAddr
	SOCKADDR_IN ListenSocketAddr;
	memset(&ListenSocketAddr, 0, sizeof(ListenSocketAddr));	// zeromem
	ListenSocketAddr.sin_family = PF_INET;
	ListenSocketAddr.sin_port = htons(7476);
	ListenSocketAddr.sin_addr.S_un.S_addr = INADDR_ANY;

	//Bind
	bind(ListenSocket, reinterpret_cast<SOCKADDR*>(&ListenSocketAddr), sizeof(ListenSocketAddr));

	//Listen
	listen(ListenSocket, 0);

	while (true)
	{
		//Connect
		SOCKADDR_IN ClientSockAddr;
		memset(&ClientSockAddr, 0, sizeof(ClientSockAddr));	// zeromem
		int ClientSockAddrLength = sizeof(ClientSockAddr);
		SOCKET NewClientSocket = accept(ListenSocket, reinterpret_cast<SOCKADDR*>(&ClientSockAddr), &ClientSockAddrLength);

		cout << "Connected : " << NewClientSocket << endl;
		

		//send
		//recv

	}
	
	closesocket(ListenSocket);

	WSACleanup();


}