// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "GamejamUA7.h"
#include "GamejamUA7GameMode.h"
#include "GamejamUA7Character.h"

AGamejamUA7GameMode::AGamejamUA7GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
