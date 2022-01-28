// Copyright Epic Games, Inc. All Rights Reserved.

#include "TownOfContractsGameMode.h"
#include "TownOfContractsPlayerController.h"
#include "TownOfContractsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATownOfContractsGameMode::ATownOfContractsGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATownOfContractsPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}