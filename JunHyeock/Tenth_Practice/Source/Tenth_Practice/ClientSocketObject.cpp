// Fill out your copyright notice in the Description page of Project Settings.


#include "ClientSocketObject.h"
#include "Kismet/GameplayStatics.h"
#include "PC_SocketControllerWinVer.h"

ClientSocketObject::ClientSocketObject()
{
    Thread = FRunnableThread::Create(this, TEXT("Network Thread"));
}

ClientSocketObject::~ClientSocketObject()
{
	if (Thread)
	{
		//Shutdown thread
		Thread->WaitForCompletion();
		Thread->Kill();
		delete Thread;
	}
}

bool ClientSocketObject::Init()
{
	//Connect Socket
	ConnectToServer();



	return true;
}

uint32 ClientSocketObject::Run()
{
	UE_LOG(LogTemp, Warning, TEXT("Running"));


	while (true)
	{
		int RecvBytes = 0;
		int TotalRecvBytes = 0;
		//do
		//{
		//	RecvBytes = recv(ServerSocket, &Buffer[TotalRecvBytes], sizeof(Buffer) - TotalRecvBytes, 0);
		//	TotalRecvBytes += RecvBytes;
		//} while (TotalRecvBytes < sizeof(Buffer));

		RecvBytes = recv(ServerSocket, Buffer, sizeof(Buffer), 0);

		if (RecvBytes <= 0)
		{
			//disconnect
			break;
		}
		else
		{
			//ProcessPacket
			ProcessPacket(Buffer);
		}

	}

	return 0;
}


void ClientSocketObject::Exit()
{
	if (ServerSocket)
	{
		//Socket Disconnect
		closesocket(ServerSocket);
		WSACleanup();
	}
}


void ClientSocketObject::ConnectToServer()
{
	UE_LOG(LogTemp, Warning, TEXT("Try to Connect"));

	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);

	ServerSocket = socket(AF_INET, SOCK_STREAM, 0);

	SOCKADDR_IN ServerSocketAddr;
	memset(&ServerSocketAddr, 0, sizeof(ServerSocketAddr));
	ServerSocketAddr.sin_family = PF_INET;
	ServerSocketAddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	ServerSocketAddr.sin_port = htons(7476);

	connect(ServerSocket, (SOCKADDR*)&ServerSocketAddr, sizeof(ServerSocketAddr));

}

void ClientSocketObject::ProcessPacket(char* Data)
{
	UE_LOG(LogNet, Warning, TEXT("ProcessPacket : %d"), Data);
	Code = 0;
	memcpy(&Code, &Data[0], sizeof(Code));
	SOCKET FromID = 0;
	memcpy(&FromID, &Data[2], sizeof(FromID));

	//Code = ntohs(Code);
	//FromID = ntohll(FromID)
	NewPlayer = nullptr;

	switch (EMessagePacket(Code))
	{
	case EMessagePacket::S2C_RegisterID:


			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("RegisterID")));
			NewPlayer = new PlayerData();
			if (NewPlayer)
			{
				NewPlayer->MySocket = FromID;
				MySocketID = FromID;
				PlayerList.Add(FromID, NewPlayer);
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("FromID : %d"), FromID));
				if (PlayerList.Find(FromID))
				{
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("FindSucess")));
				}
				
			}


		break;
	case EMessagePacket::S2C_Spawn:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Spawn")));

		//NewPlayer = new PlayerData();
		//NewPlayer->MySocket = FromID;
		//PlayerList[FromID] = NewPlayer;
		break;
	case EMessagePacket::S2C_Destroy:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Destroy")));

		PlayerList.Remove(FromID);
		
		break;
	case EMessagePacket::S2C_Move:
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Move")));
		//int X;
		//int Y;
		//int Z;
		//memcpy(&X, &Data[10], sizeof(X));
		//memcpy(&Y, &Data[14], sizeof(Y));
		//memcpy(&Z, &Data[18], sizeof(Z));

		////update PlayerList
		//auto UpdatePlayer = PlayerList.FindRef(FromID);
		//UpdatePlayer->X = X;
		//UpdatePlayer->Y = Y;
		//UpdatePlayer->Z = Z;


	}
		
		break;
	default:
		break;

	}


}

void ClientSocketObject::MoveProcess(int Input)
{
	auto MyPlayer = PlayerList.FindRef(MySocketID);

	if(MyPlayer)
	{
		switch (Input)
		{
		case 1:
			MyPlayer->X++;
			break;
		case 2:
			MyPlayer->X--;
			break;
		case 3:
			MyPlayer->Y++;
			break;
		case 4:
			MyPlayer->Y--;
			break;

		}
		Code = ((unsigned short)EMessagePacket::C2S_Move);
		memcpy(&Buffer[0], &Code, sizeof(Code));
		SOCKET SendID = MyPlayer->MySocket;
		memcpy(&Buffer[2], &SendID, sizeof(SendID));
		int Temp = MyPlayer->X;
		memcpy(&Buffer[10], &Temp, sizeof(Temp));
		Temp = MyPlayer->Y;
		memcpy(&Buffer[14], &Temp, sizeof(Temp));
		Temp = MyPlayer->Z;
		memcpy(&Buffer[18], &Temp, sizeof(Temp));

		int SentBytes = 0;
		int TotalSentBytes = 0;
		do
		{
			SentBytes = send(ServerSocket, &Buffer[TotalSentBytes], sizeof(Buffer) - TotalSentBytes, 0);
			TotalSentBytes += SentBytes;
			GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, FString::Printf(TEXT("SentBytes : %d"), SentBytes));

		} while (TotalSentBytes < sizeof(Buffer));


	}
	
}


