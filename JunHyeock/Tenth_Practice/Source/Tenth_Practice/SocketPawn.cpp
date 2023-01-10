// Fill out your copyright notice in the Description page of Project Settings.


#include "SocketPawn.h"
#include "ClientSocketObject.h"
#include "PC_SocketControllerWinVer.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ASocketPawn::ASocketPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationPitch = true;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		sm_Cube(TEXT("StaticMesh'/Engine/VREditor/BasicMeshes/SM_Cube_01.SM_Cube_01'"));
	UStaticMeshComponent* Cube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cube"));

	Cube->SetStaticMesh(sm_Cube.Object);
	Cube->AttachTo(RootComponent);

}

// Called when the game starts or when spawned
void ASocketPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASocketPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASocketPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &ASocketPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ASocketPawn::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ASocketPawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &ASocketPawn::AddControllerPitchInput);
}

void ASocketPawn::MoveForward(float input)
{
	//APC_SocketControllerWinVer* MyController = Cast<APC_SocketControllerWinVer>(UGameplayStatics::GetPlayerController(GetWorld(), 0));


	//if (MyController)
	//{
	//	if (input > 0)
	//	{
	//		MyController->MoveProcess(1);
	//	}
	//	else if (input < 0)
	//	{
	//		MyController->MoveProcess(2);
	//	}
	//}
}

void ASocketPawn::MoveRight(float input)
{
	//APC_SocketControllerWinVer* MyController = Cast<APC_SocketControllerWinVer>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	//if (MyController)
	//{
	//	if (input > 0)
	//	{
	//		MyController->MoveProcess(3);
	//	}
	//	else if (input < 0)
	//	{
	//		MyController->MoveProcess(4);
	//	}
	//}
}

