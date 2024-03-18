// Fill out your copyright notice in the Description page of Project Settings.


#include "NPCEnemy.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/DamageType.h"
#include "Sound/SoundWave.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ANPCEnemy::ANPCEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ANPCEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANPCEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANPCEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANPCEnemy::DetectHit()
{
	bool canDamage = true;

	//Obtain fist of armature
	const FVector PunchLocation = GetMesh()->GetSocketLocation(_PunchingHandSocketName);

	//gameobjects to ignore in the OverlapSphere
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);
	ActorsToIgnore.Add(GetOwner());

	//Array for gameobjects hit by the sphere
	TArray<FHitResult> HitArray;

	//create overlapsphere around the fist of the enemy. return true if any and false if nothing
	const bool Hit = UKismetSystemLibrary::SphereTraceMulti(GetWorld(), PunchLocation, PunchLocation, _TraceRadius, UEngineTypes::ConvertToTraceType(ECC_Camera), false, ActorsToIgnore, EDrawDebugTrace::None, HitArray, true, FLinearColor::Red, FLinearColor::Green, 2.0f);

	//save actor name
	FString ownerName = this->GetName();

	if (Hit)
	{
		for (const FHitResult HitResult : HitArray)
		{
			if (canDamage)
			{
				FString hitActorName = HitResult.GetActor()->GetName();

				UE_LOG(LogTemp, Log, TEXT("NPCEnemy actor \"%s\" hit other actor \"%s\", dealing %f damage."), *ownerName, *hitActorName, _HitDamage);

				//Apply generic damage type
				UGameplayStatics::ApplyDamage(HitResult.GetActor(), _HitDamage, GetController(), this, UDamageType::StaticClass());

				//play sound
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), _punchSound, GetActorLocation());

				canDamage = false;
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("NPCEnemy actor \"%s\" did not detect any valid hits on its last attack"), *ownerName);
	}
}

