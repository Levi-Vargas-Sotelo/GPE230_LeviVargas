// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeGameMode.h"

void AMazeGameMode::InitGameState()
{
	Super::InitGameState();

	//Check if there is no default Pawn class
	if (DefaultPawnClass == ADefaultPawn::StaticClass())
	{
		//Set default pawn to MazeCharacter
		DefaultPawnClass = DefaultPlayerCharacter;
	}
}