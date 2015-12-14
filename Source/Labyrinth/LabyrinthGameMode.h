// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "LabyrinthGameMode.generated.h"

UCLASS(minimalapi)
class ALabyrinthGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ALabyrinthGameMode();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AlarmMode")
	bool IsAlarmModeOn;
};



