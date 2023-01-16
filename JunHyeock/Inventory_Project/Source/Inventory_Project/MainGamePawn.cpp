// Fill out your copyright notice in the Description page of Project Settings.

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include <GameFramework/FloatingPawnMovement.h>
#include "GameFramework/CharacterMovementComponent.h"
#include "MainGamePawn.h"

// Sets default values
AMainGamePawn::AMainGamePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InitComponents();



}

// Called when the game starts or when spawned
void AMainGamePawn::BeginPlay()
{
	Super::BeginPlay();
	
	EnableInput(Cast<APlayerController>(GetController()));

	//CreateMaingameWidget();
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

void AMainGamePawn::InitComponents()
{

	//Mesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh> M_Mesh(TEXT("StaticMesh'/Engine/VREditor/BasicMeshes/SM_Cube_01.SM_Cube_01'"));
	UStaticMeshComponent* Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Box"));
	RootComponent = Mesh;

	if (M_Mesh.Succeeded())
		Mesh->SetStaticMesh(M_Mesh.Object);

	Mesh->SetCollisionObjectType(ECC_Pawn);
	Mesh->SetGenerateOverlapEvents(true);

	//======================================================

	//Camera
	USpringArmComponent* CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	CameraArm->AttachTo(Mesh);
	CameraArm->SetRelativeLocationAndRotation(FVector(0, 0, 50.f), FRotator(-60.f, 0, 0));
	CameraArm->TargetArmLength = 400.f;
	CameraArm->bEnableCameraLag = true;
	CameraArm->CameraLagSpeed = 3.f;
	CameraArm->bDoCollisionTest = false;

	UCameraComponent* FollowCamera =
		CreateDefaultSubobject<UCameraComponent>(TEXT("GameCamera"));
	FollowCamera->AttachTo(CameraArm);

	//======================================================

	//Movement
	//UCharacterMovementComponent* MovementComponent =
	//	CreateDefaultSubobject<UCharacterMovementComponent>(TEXT("MovementComponent"));
	//MovementComponent->SetMovementMode(EMovementMode::MOVE_Flying);
	CreateDefaultSubobject<UFloatingPawnMovement>("PawnMovement");


}


void AMainGamePawn::GoForward(float Axis)
{

	//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Blue, FString::Printf(TEXT("Gorforward : %f"), Axis));

	
	AddMovementInput(GetActorForwardVector(), Axis);

	
}

void AMainGamePawn::GoRight(float Axis)
{
	AddMovementInput(GetActorRightVector(), Axis);
}


