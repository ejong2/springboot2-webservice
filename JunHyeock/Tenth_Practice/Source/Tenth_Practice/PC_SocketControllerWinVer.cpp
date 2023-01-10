// Fill out your copyright notice in the Description page of Project Settings.


#include "PC_SocketControllerWinVer.h"
#include "SocketPawn.h"

void APC_SocketControllerWinVer::BeginPlay()
{
	Super::BeginPlay();

	SocketObject = new ClientSocketObject;

}

void APC_SocketControllerWinVer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (bDoOnce)
	{
		if (SocketObject && SocketObject->NewPlayer != nullptr)
		{
			SpawnMyAvatar();
			bDoOnce = false;
		}
	}


}

void APC_SocketControllerWinVer::SetupInputComponent()
{
}



APC_SocketControllerWinVer::~APC_SocketControllerWinVer()
{
}

void APC_SocketControllerWinVer::SpawnMyAvatar()
{
	if (SocketObject)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("SpawnMyAvatar")));
		MySpawnActor = GWorld->SpawnActor<ASocketPawn>(FVector(0, 0, 0), FRotator(0, 0, 0));
	}

}


