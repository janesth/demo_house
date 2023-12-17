// Copyright Epic Games, Inc. All Rights Reserved.

#include "demo_houseGameMode.h"
#include "demo_houseCharacter.h"
#include "UObject/ConstructorHelpers.h"

Ademo_houseGameMode::Ademo_houseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
