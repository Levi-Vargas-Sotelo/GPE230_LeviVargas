// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "SpeedPickup.generated.h"

/**
 * 
 */
UCLASS()
class GPE230_LEVIVARGAS_API ASpeedPickup : public APickup
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	float speedMultiplier;
	virtual void ApplyPickupEffect(AMazeCharacter* Player) override;
};
