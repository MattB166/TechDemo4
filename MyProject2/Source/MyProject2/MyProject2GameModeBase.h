// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyProject2GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API AMyProject2GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AMyProject2GameModeBase();

	virtual void PostLogin(APlayerController* NewPlayer) override;

protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Pickup")
	TArray<FVector> PickupLocations;

	FTimerHandle PickupSpawnTimerHandle;

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Pickup")
	TArray<TSubclassOf<class AActor>> PickupClasses; 

	UPROPERTY(EditAnywhere,BlueprintReadOnly,category = "Pickup")
	float PickUpSpawnInterval;

	virtual void BeginPlay() override;

	void SpawnPickup(); 
	
};
