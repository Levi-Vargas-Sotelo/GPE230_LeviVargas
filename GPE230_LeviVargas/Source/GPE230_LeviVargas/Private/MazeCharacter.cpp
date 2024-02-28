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
}

//function to take damage from enemies and to kill player if health is 0
float AMazeCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
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

//function for killing player
void AMazeCharacter::Die()
{
	//stop player from moving
	moveSpeed = 0;
	rotationSpeed = 0;
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

