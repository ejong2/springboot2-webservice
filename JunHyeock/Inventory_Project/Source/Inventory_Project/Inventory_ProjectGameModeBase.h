// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Inventory_ProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORY_PROJECT_API AInventory_ProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	AInventory_ProjectGameModeBase();

	~AInventory_ProjectGameModeBase();


	void ClassSave();

	void SpawnRandomPoint();


	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTimes) override;



	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> MySpawnActor;
	
};
