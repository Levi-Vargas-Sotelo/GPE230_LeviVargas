// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"
#include "MazeCharacter.h"

APickup::APickup()
{
	//add the custom functions to the begin collission event function
	OnActorBeginOverlap.AddDynamic(this, &APickup::CheckActorType);
}

void APickup::CheckActorType(AActor* OverlappedActor, AActor* OtherActor)
{
	//check if the collided actor is the player. do pickup effect if it is
	if (OtherActor->IsA(AMazeCharacter::StaticClass()))
		ApplyPickupEffect(Cast<AMazeCharacter>(OtherActor));
}

void APickup::ApplyPickupEffect(AMazeCharacter* Player)
{

}

void APickup::DeletePickup()
{
	//delete the pickup
	this->Destroy();
}