// Copyright Epic Games, Inc. All Rights Reserved.


#include "Tenth_PracticeGameModeBase.h"
#include "PC_SocketPlayerController.h"

ATenth_PracticeGameModeBase::ATenth_PracticeGameModeBase()
{
	PlayerControllerClass = APC_SocketPlayerController::StaticClass();
}

void ATenth_PracticeGameModeBase::BeginPlay()
{
}
