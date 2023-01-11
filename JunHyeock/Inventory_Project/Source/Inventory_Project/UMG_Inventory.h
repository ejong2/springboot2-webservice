// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UMG_Inventory.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORY_PROJECT_API UUMG_Inventory : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UUMG_Inventory(const FObjectInitializer &ObjectInitializer);
	~UUMG_Inventory();


	virtual void NativeConstruct() override;

	

	UPROPERTY()
	class UButton* ExampleButton;

	//class UPanelWidget* RootWidget = Cast<UPanelWidget>(GetRootWidget());


	
};
