// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "HealthPickup.generated.h"

/**
 * 
 */
UCLASS()
class GPE230_LEVIVARGAS_API AHealthPickup : public APickup
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	float healAmount;
	virtual void ApplyPickupEffect(AMazeCharacter* Player) override;
};
