// Fill out your copyright notice in the Description page of Project Settings

#include "VictoryTriggerVolume.h"
#include "MazeCharacter.h"

AVictoryTriggerVolume::AVictoryTriggerVolume()
{
	//add the custom functions to the begin collission event function
	OnActorBeginOverlap.AddDynamic(this, &AVictoryTriggerVolume::CheckActorType);
}

void AVictoryTriggerVolume::CheckActorType(AActor* OverlappedActor, AActor* OtherActor)
{
	//check if the collided actor is the player. do pickup effect if it is
	if (OtherActor->IsA(AMazeCharacter::StaticClass()))
	{
		AMazeCharacter* PlayerChar = Cast<AMazeCharacter>(OtherActor);
		OpenVictoryScreen(PlayerChar);
	}
}

void AVictoryTriggerVolume::OpenVictoryScreen(AMazeCharacter* player)
{
	(*player).OpenVictoryScreen();
}

