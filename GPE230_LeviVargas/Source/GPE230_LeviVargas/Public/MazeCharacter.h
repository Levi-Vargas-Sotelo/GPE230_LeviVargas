// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MazeCharacter.generated.h"

UCLASS()
class GPE230_LEVIVARGAS_API AMazeCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMazeCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	virtual void Die();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:
	UPROPERTY(EditAnywhere)
	float moveSpeed;
	UPROPERTY(EditAnywhere)
	float rotationSpeed;
	UPROPERTY()
	bool jumping;

public:
	//value for the max health 
	UPROPERTY(EditAnywhere)
	float maxHealth;

protected:
	//value for health at all times
	float _currentHealth;
	

private:
	void MoveFB(float value);
	void MoveLR(float value);
	void Rotate(float value);
	void CheckJump();
};
