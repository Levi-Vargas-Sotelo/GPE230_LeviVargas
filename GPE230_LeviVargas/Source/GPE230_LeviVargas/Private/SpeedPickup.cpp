// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedPickup.h"
#include "MazeCharacter.h"
#include "Sound/SoundWave.h"
#include "Kismet/GameplayStatics.h"

void ASpeedPickup::ApplyPickupEffect(AMazeCharacter* Player)
{
	bool canChangeSpeed = true;

	//if we can heal, heal the player the set amount then delete pickup
	if (canChangeSpeed)
	{
		(*Player).ChangeSpeed(speedMultiplier);

		canChangeSpeed = false;

		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Speed increased"));

		UGameplayStatics::PlaySound2D(GetWorld(), _pickSound);

		DeletePickup();
	}
}