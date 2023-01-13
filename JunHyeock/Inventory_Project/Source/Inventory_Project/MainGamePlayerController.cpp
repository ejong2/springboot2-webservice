// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGamePlayerController.h"


AMainGamePlayerController::AMainGamePlayerController()
{
	PrimaryActorTick.bCanEverTick = true;
}

AMainGamePlayerController::~AMainGamePlayerController()
{
}

void AMainGamePlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	//Widget Must Be Created On PlayerController
	CreateMaingameWidget();

}

void AMainGamePlayerController::Tick(float DeltaSecond)
{
	Super::Tick(DeltaSecond);
}

void AMainGamePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction(TEXT("InventoryToggle"), IE_Pressed, this, &AMainGamePlayerController::InventoryToggle);

}

void AMainGamePlayerController::MoveForward(float Axis)
{
	
}

void AMainGamePlayerController::MoveRight(float Axis)
{

}

void AMainGamePlayerController::CreateMaingameWidget()
{
	if (IsValid(WidgetClass))
	{
		InvenWidget = Cast<UUMG_Inventory>(CreateWidget(GetWorld(), WidgetClass));
		InvenWidget->MYTEXT->SetText(FText::FromString(ItemTagText));

		if (InvenWidget != nullptr)
		{
			InvenWidget->AddToViewport(); 

			//Widget contstructor Set
			InvenWidget->SetVisibility(ESlateVisibility::Collapsed);
		}
	}

}

void AMainGamePlayerController::InventoryToggle()
{
	if (InvenWidget == nullptr)
		return;

	if (InvenWidget->GetVisibility() == ESlateVisibility::Collapsed)
	{
		InvenWidget->SetVisibility(ESlateVisibility::Visible);
	}

	else if (InvenWidget->GetVisibility() == ESlateVisibility::Visible)
	{
		InvenWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void AMainGamePlayerController::AddItemToInventory()
{
	if (InvenWidget == nullptr)
		return;

	InvenWidget->AddItemtoInventory();


}