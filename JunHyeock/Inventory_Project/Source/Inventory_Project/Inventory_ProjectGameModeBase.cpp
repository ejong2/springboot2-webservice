// Copyright Epic Games, Inc. All Rights Reserved.


#include "Inventory_ProjectGameModeBase.h"
#include "MainGamePawn.h"
#include "MainGamePlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "MainGameCharacter.h"

AInventory_ProjectGameModeBase::AInventory_ProjectGameModeBase()
{
	PlayerControllerClass = AMainGamePlayerController::StaticClass();
	DefaultPawnClass = AMainGamePawn::StaticClass();

	ClassSave();


}

AInventory_ProjectGameModeBase::~AInventory_ProjectGameModeBase()
{
}

void AInventory_ProjectGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < 4; i++)
	{
		SpawnRandomPoint();
	}

}

void AInventory_ProjectGameModeBase::Tick(float DeltaTimes)
{
	Super::Tick(DeltaTimes);
}

void AInventory_ProjectGameModeBase::ClassSave()
{
	static ConstructorHelpers::FObjectFinder<UBlueprint> MyActor(TEXT("Blueprint'/Game/InventoryProject_Blueprints/BP_MyItem.BP_MyItem'"));
	if (MyActor.Object)
	{
		MySpawnActor = (UClass*)MyActor.Object->GeneratedClass;
	}
}

void AInventory_ProjectGameModeBase::SpawnRandomPoint()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	FRotator rotator;



	AActor* FindActor = UGameplayStatics::GetActorOfClass(GetWorld(), AMainGameCharacter::StaticClass());
	FVector SpawnLocation = FindActor->GetActorLocation();
	SpawnLocation.X += FMath::RandRange(-500.f, 500.f);
	SpawnLocation.Y += FMath::RandRange(-500.f, 500.f);
	GWorld->SpawnActor<AActor>(MySpawnActor, SpawnLocation, rotator, SpawnParams);
}