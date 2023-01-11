// Copyright Epic Games, Inc. All Rights Reserved.


#include "Inventory_ProjectGameModeBase.h"
#include "MainGamePawn.h"
#include "MainGamePlayerController.h"

AInventory_ProjectGameModeBase::AInventory_ProjectGameModeBase()
{
	PlayerControllerClass = AMainGamePlayerController::StaticClass();
	DefaultPawnClass = AMainGamePawn::StaticClass();

}

AInventory_ProjectGameModeBase::~AInventory_ProjectGameModeBase()
{
}

void AInventory_ProjectGameModeBase::BeginPlay()
{
	Super::BeginPlay();
}

void AInventory_ProjectGameModeBase::Tick(float DeltaTimes)
{
	Super::Tick(DeltaTimes);
}
