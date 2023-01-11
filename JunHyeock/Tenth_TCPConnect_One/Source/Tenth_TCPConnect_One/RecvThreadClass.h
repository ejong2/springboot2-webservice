// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <Networking/Public/Networking.h>
#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "Tenth_TCPConnect_OneGameModeBase.h"
#include "CoreMinimal.h"

/**
 * 
 */
class TENTH_TCPCONNECT_ONE_API RecvThreadClass : public FRunnable
{
public:
	RecvThreadClass();
	~RecvThreadClass();

	bool Init() override;
	uint32 Run() override;
	void Exit() override;

	bool ConnectToServer();



	FRunnableThread* Thread;

	FSocket* Socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);






	struct	Packet
	{
		int Header = 0;
		int X = 1;
		int Y = 1;
		int Z = 1;
	};

	Packet MyPacket;

	class ATenth_TCPConnect_OneGameModeBase* MyGameModeBase;
	//= Cast<ATenth_TCPConnect_OneGameModeBase>(GWorld->GetAuthGameMode());

	void PacketToGameMode(Packet pack);

};
