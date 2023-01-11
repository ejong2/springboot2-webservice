// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MainGamePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORY_PROJECT_API AMainGamePlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AMainGamePlayerController();
	~AMainGamePlayerController();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSecond) override;

	void CreateMaingameWidget();

	UUserWidget* UserInterface;



};


