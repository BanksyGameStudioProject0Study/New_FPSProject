// Copyright Epic Games, Inc. All Rights Reserved.

#include "New_FPSProjectGameMode.h"
#include "New_FPSProjectHUD.h"
#include "New_FPSProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANew_FPSProjectGameMode::ANew_FPSProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANew_FPSProjectHUD::StaticClass();
}
