// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Player1.h"
#include "GameFramework/GameModeBase.h"
#include "MyProject2GameModeBase.generated.h"
class UMyPlayerHUD;
class APlayer1; 


UCLASS()
class MYPROJECT2_API AMyProject2GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AMyProject2GameModeBase();
	virtual void Tick(float DeltaTime) override;
	
	void DecrementPickUpCount();
	void SetHUDReference(UMyPlayerHUD* HUD); 

	virtual void PostLogin(APlayerController* NewPlayer) override;
	int32 NumSpawnedPickups = 0;
	int32 RoundNumber = 1; 

	UFUNCTION(BlueprintCallable)
	void RemoveSpawnedLocation(const FVector& Location);

	void EndRound();
	void DecideOverallWinner(); 
protected:
	UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Pickup")
	TArray<FVector> PickupLocations;

	FTimerHandle PickupSpawnTimerHandle;

	TArray<FVector> SpawnedLocations; 
	

	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Pickup")
	TArray<TSubclassOf<class AActor>> PickupClasses; 

	UPROPERTY(EditAnywhere,BlueprintReadOnly,category = "Pickup")
	float PickUpSpawnInterval;

	virtual void BeginPlay() override;

	void SpawnPickup(); 
    UPROPERTY()
	UMyPlayerHUD* HUDREF;
	UMyPlayerHUD* HUDREF2; 

	APlayer1* Player1Character;
	APlayer1* Player2Character;

 
};
