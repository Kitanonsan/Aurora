// Copyright Epic Games, Inc. All Rights Reserved.

#include "AuroraGameMode.h"
#include "AuroraPlayerController.h"
#include "AuroraCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAuroraGameMode::AAuroraGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAuroraPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}