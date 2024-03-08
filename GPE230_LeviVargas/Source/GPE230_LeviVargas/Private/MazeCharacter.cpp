// Fill out your copyright notice in the Description page of Project Settings.


#include "MazeCharacter.h"

// Sets default values
AMazeCharacter::AMazeCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//start out game not jumping
	jumping = false;
}

// Called when the game starts or when spawned
void AMazeCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	//make the player health the max it can be at the start of the game
	_currentHealth = maxHealth;

	//make the default move speed the set value
	SetDefaultMoveSpeed();
}

//function to take damage from enemies and to kill player if health is 0
float AMazeCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (!_isDead)
	{
		//Take damage
		_currentHealth -= DamageAmount;

		//debug log to test the math and values
		UE_LOG(LogTemp, Log, TEXT("Player took %f damage. %f health remaining."), DamageAmount, _currentHealth);

		//kill player if health drops to 0
		if (_currentHealth <= 0)
		{
			_currentHealth = 0;
			Die();
		}

		//we have to play by Unreal's rules
		return DamageAmount;
	}
	else
		return 0;
}

void AMazeCharacter::SetDefaultMoveSpeed()
{
	//make the default move speed the set value
	moveSpeed = defaultMoveSpeed;
}

//function for killing player
void AMazeCharacter::Die()
{
	//stop player from moving
	_isDead = true;
	_currentHealth = 0;
	moveSpeed = 0;
	rotationSpeed = 0;

	GetMesh()->PlayAnimation(_deathAnim, false);
}

void AMazeCharacter::HealPlayer(float HealAmount)
{
	//add healed amount to current health
	_currentHealth += HealAmount;

	//if current health goes over the max then bring it down to be the max
	if (_currentHealth > maxHealth)
	{
		_currentHealth = maxHealth;

		
	}
}

void AMazeCharacter::ChangeSpeed(float multAmount)
{
	//set new speed
	moveSpeed = multAmount;
	//start timer or something to reset it back
}

// Called every frame
void AMazeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//if we are jumping, call character jump function 
	if (jumping)
	{
		Jump();
	}
}

// Called to bind functionality to input
void AMazeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//bind movementt commands
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveFB", this, &AMazeCharacter::MoveFB);
	PlayerInputComponent->BindAxis("MoveLR", this, &AMazeCharacter::MoveLR);
	PlayerInputComponent->BindAxis("Rotate", this, &AMazeCharacter::Rotate);

	//bind actions
	InputComponent->BindAction("Jump", IE_Pressed, this, &AMazeCharacter::CheckJump);
	InputComponent->BindAction("Jump", IE_Released, this, &AMazeCharacter::CheckJump);
}

void AMazeCharacter::ActivateStunParticleSystem()
{
	//Spawn a particle system and play it once
	if (_stunSystem)
	{
		USceneComponent* AttachComp = GetDefaultAttachComponent();

		UNiagaraComponent* NiagaraComp = UNiagaraFunctionLibrary::SpawnSystemAttached(_stunSystem, AttachComp, NAME_None, FVector(0), FRotator(0), EAttachLocation::Type::KeepRelativeOffset, true);

		NiagaraComp->Activate();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("No particle system was found"));
	}
}

void AMazeCharacter::MoveFB(float value)
{
	AddMovementInput(GetActorForwardVector(), value * moveSpeed);
	
}

void AMazeCharacter::MoveLR(float value)
{
	AddMovementInput(-GetActorRightVector(), value * moveSpeed);
}

void AMazeCharacter::Rotate(float value)
{
	AddControllerYawInput(value * rotationSpeed);
}

void AMazeCharacter::CheckJump()
{
	//check if jumping variable state
	if (jumping)
	{
		jumping = false;
	}
	else
	{
		jumping = true;
	}
}

