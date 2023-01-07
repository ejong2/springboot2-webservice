// Fill out your copyright notice in the Description page of Project Settings.


#include "PC_SocketPlayerController.h"

void APC_SocketPlayerController::BeginPlay()
{
	ConnectToServer();
}



bool APC_SocketPlayerController::ConnectToServer()
{
	FSocket* Socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);

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
