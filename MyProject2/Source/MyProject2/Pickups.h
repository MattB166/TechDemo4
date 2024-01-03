// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Player1.h"
#include "GameFramework/Actor.h"
#include "Pickups.generated.h"
UENUM(BlueprintType)
enum class EPickUpType: uint8
{
	Ammo,
	Health,
	DamageMultiplier
};

UCLASS()
class MYPROJECT2_API APickups : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickups();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintNativeEvent,Category = "Pickup")
	void OnPickupCollected(APlayer1* Player);
	virtual void OnPickUpCollected_Implementation();
	// UFUNCTION()
	// void OnActorOverlap(AActor* OverlappedActor, AActor* OtherActor);

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Pickups")
	EPickUpType PickUp;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Pickups")
	float amount;

private:
	
};
