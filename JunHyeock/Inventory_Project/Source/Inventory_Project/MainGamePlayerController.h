// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "UMG_Inventory.h"
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

	void SetupInputComponent() override;

public:

	//move
	void MoveForward(float Axis);
	void MoveRight(float Axis);

	//inventory
	void CreateMaingameWidget();
	void InventoryToggle();

	UFUNCTION(BlueprintCallable)
	void AddItemToInventory();




public:

	UPROPERTY(EditAnywhere, Category = "Widget")
	TSubclassOf<UUserWidget> WidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UUMG_Inventory* InvenWidget = nullptr;

	FString ItemTagText = TEXT("TEXT Sample");



};


