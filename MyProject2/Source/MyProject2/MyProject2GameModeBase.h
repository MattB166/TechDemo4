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
	void DecrementPickUpCount(); 

	virtual void PostLogin(APlayerController* NewPlayer) override;
	int32 NumSpawnedPickups = 0;  
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
