// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "Practice.h"
#include "PracticeGameMode.h"
#include "PracticeCharacter.h"

APracticeGameMode::APracticeGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
