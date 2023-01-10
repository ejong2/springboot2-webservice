// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCubeActor.h"

// Sets default values
AMyCubeActor::AMyCubeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		sm_Cube(TEXT("StaticMesh'/Engine/VREditor/BasicMeshes/SM_Cube_01.SM_Cube_01'"));
	UStaticMeshComponent* Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));
	Cube->SetStaticMesh(sm_Cube.Object);
	Cube->AttachTo(RootComponent);

}

// Called when the game starts or when spawned
void AMyCubeActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCubeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

