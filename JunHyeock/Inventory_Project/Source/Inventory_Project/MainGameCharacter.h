// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainGameCharacter.generated.h"

UCLASS()
class INVENTORY_PROJECT_API AMainGameCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainGameCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void AttachComponents();

	void ClassSave();

	void SpawnMyLocation();


	//movement
	void GoForward(float Axis);
	void GoRight(float Axis);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> MySpawnActor;
};
