// Fill out your copyright notice in the Description page of Project Settings.

//#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "MainGameCharacter.h"

// Sets default values
AMainGameCharacter::AMainGameCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AttachComponents();
}

// Called when the game starts or when spawned
void AMainGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMainGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AMainGameCharacter::GoForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AMainGameCharacter::GoRight);

}


void AMainGameCharacter::AttachComponents()
{

	//Mesh
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> M_Mesh(TEXT("SkeletalMesh'/Engine/EditorMeshes/SkeletalMesh/DefaultSkeletalMesh.DefaultSkeletalMesh'"));

	if (M_Mesh.Succeeded())
	GetMesh()->SetSkeletalMesh(M_Mesh.Object);



	//======================================================

	//Camera
	USpringArmComponent* CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	if (CameraArm)
	{
		CameraArm->AttachTo(RootComponent);
		CameraArm->SetRelativeLocationAndRotation(FVector(0, 0, 50.f), FRotator(-60.f, 0, 0));
		CameraArm->TargetArmLength = 400.f;
		CameraArm->bEnableCameraLag = false;
		CameraArm->CameraLagSpeed = 3.f;
		CameraArm->bDoCollisionTest = false;

		UCameraComponent* FollowCamera =
			CreateDefaultSubobject<UCameraComponent>(TEXT("GameCamera"));
		FollowCamera->AttachTo(CameraArm);
	}




	//======================================================




}

void GetItem()
{
	
}

void AMainGameCharacter::GoForward(float Axis)
{

	//GEngine->AddOnScreenDebugMessage(-1, 0.1f, FColor::Blue, FString::Printf(TEXT("Gorforward : %f"), Axis));


	AddMovementInput(GetActorForwardVector(), Axis);



}


void AMainGameCharacter::GoRight(float Axis)
{
	AddMovementInput(GetActorRightVector(), Axis);
}

