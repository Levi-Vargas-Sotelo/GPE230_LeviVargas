// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/Character.h"
#include "MazeCharacter.generated.h"

UCLASS()
class GPE230_LEVIVARGAS_API AMazeCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMazeCharacter();

	void HealPlayer(float HealAmount);

	void ChangeSpeed(float multAmount);

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

	UPROPERTY(EditAnywhere)
	UAnimSequence* _deathAnim;
	bool _isDead = false;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* _stunSystem;

	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> _gameOverScreenTemplate;
	UUserWidget* _gameOverScreenInstance;

	UPROPERTY(EditAnywhere)
		TSubclassOf<UUserWidget> _victoryScreenTemplate;
	UUserWidget* _victoryScreenInstance;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> _HUDTemplate;
	UUserWidget* _HUDInstance;

	UFUNCTION(BlueprintCallable)
	void ActivateStunParticleSystem();

public:
	//value for the max health 
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float maxHealth;
	UPROPERTY(EditAnywhere)
		float defaultMoveSpeed;

	virtual void OpenVictoryScreen();

	UFUNCTION(BlueprintCallable)
	float GetCurrentHealth();

protected:
	//value for health at all times
	float _currentHealth;

	APlayerController* _controller;

	virtual void OpenGameOverScreen();
	virtual void PauseGameplay(bool bIsPaused);
	virtual void ShowMouseCursor();
	

private:
	void MoveFB(float value);
	void MoveLR(float value);
	void Rotate(float value);
	void CheckJump();
	void SetDefaultMoveSpeed();
};
