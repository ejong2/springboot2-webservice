#define _WINSOCK_DEPRECATED_NO_WARNINGS

#include <iostream>
#include <WinSock2.h>
#include <process.h>
#include <Windows.h>
#include <string>
#include <map>
#include "PlayerData.h"
#include "MessagePacket.h"

#pragma comment(lib, "ws2_32.lib")

using namespace std;

map<SOCKET, PlayerData*> ConnectPlayerList;

CRITICAL_SECTION ServerCS;


//	2			8				4			4			4		
//Code		SocketID			X			Y			Z
//[][]	[][][][][][][][]	[][][][]	[][][][]	[][][][]

char Data[22] = { 0, };

unsigned WINAPI WorkThread(void* Arg)
{
	SOCKET ClientSocket = *(SOCKET*)Arg;
	while (true)
	{
		int RecvBytes = 0;
		int TotalRecvBytes = 0;

		//pakcet
		do
		{
			RecvBytes = recv(ClientSocket, &Data[TotalRecvBytes], sizeof(Data) - TotalRecvBytes, 0);
			TotalRecvBytes += RecvBytes;
		} while (TotalRecvBytes < sizeof(Data));

		cout << "RecvBytes : " << RecvBytes << endl;

		if (RecvBytes <= 0)
		{
			//disconnect
			closesocket(ClientSocket);
			EnterCriticalSection(&ServerCS);
			ConnectPlayerList.erase(ConnectPlayerList.find(ClientSocket));
			for (auto Player : ConnectPlayerList)
			{
				unsigned short Code = htons(static_cast<unsigned short>(MessagePacket::S2C_Destroy));
				memcpy(&Data[0], &Code, sizeof(Code));
				SOCKET SendID = htonll(ClientSocket);
				memcpy(&Data[2], &SendID, sizeof(SendID));

				int SentBytes = 0;
				int TotalSentBytes = 0;
				//packet
				do
				{
					SentBytes = send(Player.second->MySocket, &Data[TotalSentBytes], sizeof(Data) - TotalSentBytes, 0);
					TotalSentBytes += SentBytes;
				} while (TotalSentBytes < sizeof(Data));

			}
			LeaveCriticalSection(&ServerCS);

			cout << "MessagePacket::S2C_Destroy " << endl;
			break;
		}

		else
		{
			//packet parse
			unsigned short Code = 0;
			memcpy(&Code, &Data[0], sizeof(Code));
			SOCKET FromID = 0;
			memcpy(&FromID, &Data[2], sizeof(FromID));

			Code = ntohs(Code);
			FromID = ntohll(FromID);
			
			int X = 0;
			int Y = 0;
			int Z = 0;

			switch (static_cast<MessagePacket>(Code))
			{
				case MessagePacket::C2S_Move:
				{
					memcpy(&X, &Data[10], sizeof(X));
					X = ntohl(X);
					memcpy(&Y, &Data[14], sizeof(Y));
					X = ntohl(X);
					memcpy(&Z, &Data[18], sizeof(Z));
					X = ntohl(Z);

					//update PlayerList
					auto UpdatePlayer = ConnectPlayerList.find(FromID);
					UpdatePlayer->second->X = X;
					UpdatePlayer->second->Y = Y;
					UpdatePlayer->second->Z = Z;

					//parse
					unsigned short Code = htons(static_cast<unsigned short>(MessagePacket::S2C_Move));
					memcpy(&Data[0], &Code, sizeof(Code));
					SOCKET SendID = htonll(FromID);
					memcpy(&Data[2], &SendID, sizeof(SendID));
					int Temp = htonl(X);
					memcpy(&Data[10], &Temp, sizeof(Temp));
					Temp = htonl(Y);
					memcpy(&Data[14], &Temp, sizeof(Temp));
					Temp = htonl(Z);
					memcpy(&Data[18], &Temp, sizeof(Temp));

					//send
					for (auto Player : ConnectPlayerList)
					{
						//Packet
						int SentBytes = 0;
						int TotalSentBytes = 0;
						do
						{
							SentBytes = send(Player.second->MySocket, &Data[TotalSentBytes], sizeof(Data) - TotalSentBytes, 0);
							TotalSentBytes += SentBytes;
						} while (TotalSentBytes < sizeof(Data));
					}
					break;

				}
				default:
					break;

			}
		}
	}
	return 0;
}

int main()
{
	InitializeCriticalSection(&ServerCS);

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

	bind(ListenSocket, reinterpret_cast<SOCKADDR*>(&ListenSocketAddr), sizeof(ListenSocketAddr));

	listen(ListenSocket, 0);

	while (true)
	{
		//Connection
		SOCKADDR_IN ClientSockAddr;
		memset(&ClientSockAddr, 0, sizeof(ClientSockAddr));	// zeromem
		int ClientSockAddrLength = sizeof(ClientSockAddr);
		SOCKET NewClientSocket = accept(ListenSocket, reinterpret_cast<SOCKADDR*>(&ClientSockAddr), &ClientSockAddrLength);

		cout << "Connected : " << NewClientSocket << endl;
		
		//Setting Connected PlayerData
		EnterCriticalSection(&ServerCS);
		PlayerData* NewPlayer = new PlayerData();
		NewPlayer->MySocket = NewClientSocket;
		ConnectPlayerList[NewClientSocket] = NewPlayer;
		LeaveCriticalSection(&ServerCS);

		//S2C_RegisterID
		unsigned short Code = htons(static_cast<unsigned>(MessagePacket::S2C_RegisterID));
		memcpy(&Data[0], &Code, sizeof(Code));
		SOCKET SendID = htonll(NewClientSocket);
		memcpy(&Data[2], &SendID, sizeof(SendID));
		int SentBytes = send(NewClientSocket, Data, sizeof(Data), 0);
		cout << "MessagePacket::S2C_RegisterID " << endl;


		EnterCriticalSection(&ServerCS);
		//신규접속유저를 다른모든유저에게
		for (auto Player : ConnectPlayerList)
		{
			//S2CSpawn
			if (Player.first != NewClientSocket)
			{
				unsigned short Code = htons(static_cast<unsigned short>(MessagePacket::S2C_Spawn));
				memcpy(&Data[0], &Code, sizeof(Code));
				SOCKET SpawnID = htonll(NewClientSocket);
				memcpy(&Data[2], &SpawnID, sizeof(SpawnID));

				//packet
				int SentBytes = 0;
				int TotalSentBytes = 0;
				do
				{
					SentBytes = send(Player.second->MySocket, &Data[TotalSentBytes], sizeof(Data) - TotalSentBytes, 0);
					TotalSentBytes += SentBytes;
				} while (TotalSentBytes < sizeof(Data));
			}
		}

		//다른 모든유저를 신규접속유저에게
		for (auto Player : ConnectPlayerList)
		{
			if (Player.first != NewClientSocket)
			{
				//S2CSpawn
				unsigned short Code = htons(static_cast<unsigned short>(MessagePacket::S2C_Spawn));
				memcpy(&Data[0], &Code, sizeof(Code));
				SOCKET SpawnID = htonll(Player.second->MySocket);
				memcpy(&Data[2], &SpawnID, sizeof(SpawnID));
				send(NewClientSocket, Data, sizeof(Data), 0);
		 	}
		}

		cout << "Player Count : " << ConnectPlayerList.size() << endl;
		for (auto Player : ConnectPlayerList)
		{
			cout << "Player Id : " << Player.second->MySocket << ", ";
		}
		cout << endl;
		LeaveCriticalSection(&ServerCS);

			HANDLE ThreadHandle = (HANDLE)_beginthreadex(nullptr, 0, WorkThread, (void*)&NewClientSocket, 0, nullptr);




	}
	
	closesocket(ListenSocket);

	WSACleanup();


}