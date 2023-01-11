// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGamePawn.h"

// Sets default values
AMainGamePawn::AMainGamePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainGamePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainGamePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainGamePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AMainGamePawn::GoForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AMainGamePawn::GoRight);

}

void AMainGamePawn::GoForward(float Axis)
{
	AddMovementInput(GetActorForwardVector(), Axis);
}

void AMainGamePawn::GoRight(float Axis)
{
	AddMovementInput(GetActorRightVector(), Axis);
}

