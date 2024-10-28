// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnicycleUpGameMode.h"
#include "UnicycleUpCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnicycleUpGameMode::AUnicycleUpGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
