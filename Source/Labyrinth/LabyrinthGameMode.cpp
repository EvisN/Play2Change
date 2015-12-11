// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Labyrinth.h"
#include "LabyrinthGameMode.h"
#include "LabyrinthHUD.h"
#include "LabyrinthCharacter.h"

ALabyrinthGameMode::ALabyrinthGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALabyrinthHUD::StaticClass();
}
