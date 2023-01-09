// Copyright Epic Games, Inc. All Rights Reserved.


#include "Tenth_PracticeGameModeBase.h"
#include "PC_SocketPlayerController.h"
#include "PC_SocketControllerWinVer.h"
#include "SocketPawn.h"

ATenth_PracticeGameModeBase::ATenth_PracticeGameModeBase()
{
	PlayerControllerClass = APC_SocketControllerWinVer::StaticClass();
	DefaultPawnClass = ASocketPawn::StaticClass();
}

void ATenth_PracticeGameModeBase::BeginPlay()
{
}
