// Fill out your copyright notice in the Description page of Project Settings.


#include "PC_SocketPlayerController.h"

void APC_SocketPlayerController::BeginPlay()
{
	ConnectToServer();
}

void APC_SocketPlayerController::Tick(float DeltaTime)
{

	if (Socket)
	{
		int32 SentBytes = 0;
		int32 TotalSentBytes = 0;
		Socket->Send(reinterpret_cast<const uint8*>(Data), 1, TotalSentBytes);
	}
}



bool APC_SocketPlayerController::ConnectToServer()
{


	FString address = TEXT("127.0.0.1");
	int32 port = 7476;
	FIPv4Address ip;
	FIPv4Address::Parse(address, ip);

	TSharedRef<FInternetAddr> addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	addr->SetIp(GetTypeHash(ip));
	addr->SetPort(port);

	//Check Socket
	if (Socket)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Trying to Connect ")));
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Socket could't be created")));

		return false;
	}

	bool connected = Socket->Connect(*addr);

	//Check Connect
	if (connected)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Connect Success")));

		return true;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Connect Failed")));

		return false;
	}

}

void APC_SocketPlayerController::ProcessPacket(char* Pakcet)
{
	//Parse
	unsigned short Code = 0;
	memcpy(&Code, &Data[0], sizeof(Code));
	FSocket* FromID = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);
	memcpy(FromID, &Data[2], sizeof(FromID));
	
	//Code = ntohs(Code)
	//FormID = ntohll(FromID)
	PlayerData* NewPlayer = nullptr;
	switch (static_cast<EMessagePacket>(Code))
	{
	case EMessagePacket::S2C_RegisterID:

		NewPlayer = new PlayerData();
		NewPlayer->Socket = FromID;
		MySocketID = FromID;
		PlayerList[FromID] = NewPlayer;

				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("S2C_RegisterID")));

		break;
	case EMessagePacket::S2C_Spawn:

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("S2C_Spawn")));
		break;
	case EMessagePacket::S2C_Destroy:
		PlayerList.Remove(reinterpret_cast<FSocket*>(PlayerList.Find(FromID)));

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("S2C_Destroy")));

		break;
	case EMessagePacket::S2C_Move:
	{
		int X;
		int Y;
		int Z;
		memcpy(&X, &Data[10], sizeof(X));
		//X = ntohl(X);
		memcpy(&Y, &Data[14], sizeof(Y));
		//Y = ntohl(Y);
		memcpy(&Z, &Data[18], sizeof(Z));

		//update PlayerList
		//auto UpdatePlayer = *(PlayerList.Find(FromID));
		auto UpdatePlayer = PlayerList.Find(FromID);
		(*UpdatePlayer)->X = X;
		(*UpdatePlayer)->Y = Y;
		(*UpdatePlayer)->Z = Z;



		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("S2C_Move")));
	}
		break;

	default:
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Not Found Code")));
		break;

	}


}
