// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tenth_ProjectGameMode.h"
#include "Tenth_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATenth_ProjectGameMode::ATenth_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
