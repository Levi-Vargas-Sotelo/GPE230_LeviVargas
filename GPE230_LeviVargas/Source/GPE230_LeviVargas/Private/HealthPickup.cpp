// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthPickup.h"
#include "MazeCharacter.h"
#include "Sound/SoundWave.h"
#include "Kismet/GameplayStatics.h"

void AHealthPickup::ApplyPickupEffect(AMazeCharacter* Player)
{
	bool canHeal = true;

	//if we can heal, heal the player the set amount then delete pickup
	if (canHeal)
	{
		(*Player).HealPlayer(healAmount);

		canHeal = false;

		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Picked up Health"));

		UGameplayStatics::PlaySound2D(GetWorld(), _pickSound);

		DeletePickup();
	}
}

