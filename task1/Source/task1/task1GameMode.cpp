// Copyright Epic Games, Inc. All Rights Reserved.

#include "task1GameMode.h"
#include "task1Character.h"
#include "UObject/ConstructorHelpers.h"

Atask1GameMode::Atask1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
