// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UMG_Inventory.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MainGamePawn.generated.h"

UCLASS()
class INVENTORY_PROJECT_API AMainGamePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMainGamePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void InitComponents();

	void ItemLeftToCenter();

	//movement
	void GoForward(float Axis);
	void GoRight(float Axis);



public:


};
