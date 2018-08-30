// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TG_ShootingGameMode.h"
#include "TG_ShootingHUD.h"
#include "TG_ShootingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATG_ShootingGameMode::ATG_ShootingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATG_ShootingHUD::StaticClass();
}
