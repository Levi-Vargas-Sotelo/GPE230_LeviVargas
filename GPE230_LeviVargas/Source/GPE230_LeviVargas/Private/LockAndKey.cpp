// Fill out your copyright notice in the Description page of Project Settings.

#include "LockAndKey.h"
#include "MazeCharacter.h"

ALockAndKey::ALockAndKey()
{
	//add the custom functions to the begin collission event function
	OnActorBeginOverlap.AddDynamic(this, &ALockAndKey::CheckActorType);
}

void ALockAndKey::CheckActorType(AActor* OverlappedActor, AActor* OtherActor)
{
	//check if the collided actor is the player. open the door if it is
	if (OtherActor->IsA(AMazeCharacter::StaticClass()))
		OpenTheDoor();
}

void ALockAndKey::OpenTheDoor()
{
	//open the door by destroying its game object
	this->Destroy();
}
