// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Labyrinth.h"
#include "LabyrinthHUD.h"
#include "Engine/Canvas.h"
#include "TextureResource.h"
#include "CanvasItem.h"

ALabyrinthHUD::ALabyrinthHUD()
{
	// Set the crosshair texture
	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshiarTexObj(TEXT("/Game/FirstPerson/Textures/FirstPersonCrosshair"));
	CrosshairTex = CrosshiarTexObj.Object;
}


void ALabyrinthHUD::DrawHUD()
{
	Super::DrawHUD();

	
}

