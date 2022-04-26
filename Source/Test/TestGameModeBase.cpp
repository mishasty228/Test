// Copyright Epic Games, Inc. All Rights Reserved.


#include "TestGameModeBase.h"



ATestGameModeBase::ATestGameModeBase()
{
	DefaultPawnClass = ATestPawn::StaticClass();
	PlayerControllerClass = ATestPlayerController::StaticClass();
}
