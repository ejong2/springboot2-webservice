// Copyright Epic Games, Inc. All Rights Reserved.


#include "Tenth_TCPConnect_OneGameModeBase.h"
#include "PC_SocketPC.h"
#include "MyPawn.h"
ATenth_TCPConnect_OneGameModeBase::ATenth_TCPConnect_OneGameModeBase()
{
	//PlayerControllerClass = APC_SocketPC::StaticClass();
	//DefaultPawnClass = AMyPawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;
}

void ATenth_TCPConnect_OneGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	MyThreadObject = new RecvThreadClass;

	MyActor = GWorld->SpawnActor<AMyCubeActor>(FVector(0, 0, 0), FRotator(0, 0, 0));
}

void ATenth_TCPConnect_OneGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("%d"), GameModePacket.Header));
	ProcessPacket();
}

void ATenth_TCPConnect_OneGameModeBase::ProcessPacket()
{
	if (!bIsActivate)
	{
		return;
	}

	switch (GameModePacket.Header)
	{
	case 1:
		if (MyActor)
		{
			MyActor->ApplyWorldOffset(FVector(GameModePacket.X, GameModePacket.Y, GameModePacket.Z), false);
		}

		break;
	case 2:
		break;
	case 3:
		break;
	default:
		break;
	}
}