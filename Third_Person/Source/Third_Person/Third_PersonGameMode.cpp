// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Third_PersonGameMode.h"
#include "Third_PersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThird_PersonGameMode::AThird_PersonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
