// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Tenth_PracticeGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TENTH_PRACTICE_API ATenth_PracticeGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATenth_PracticeGameModeBase();

	virtual void BeginPlay() override;

};
