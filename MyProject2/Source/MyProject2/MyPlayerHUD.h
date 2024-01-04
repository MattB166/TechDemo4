// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyPlayerHUD.generated.h"
class APlayer1;
class AMyProject2GameModeBase;


/**
 * 
 */
UCLASS()
class MYPROJECT2_API UMyPlayerHUD : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly,Category = "Player")
	APlayer1* OwningPlayer;

	
	

	

	UFUNCTION(BlueprintCallable,Category = "HUD")
	void StartTimer();

	UFUNCTION(BlueprintCallable,Category = "HUD")
	void StopTimer();

	UFUNCTION(BlueprintCallable,Category = "HUD")
	FString GetFormattedTime();

	UPROPERTY(BlueprintReadOnly,Category = "Score")
	int32 PlayerScore;

	UFUNCTION(BlueprintCallable,Category = "HUD")
	void UpdatePlayerScore(int32 NewScore);

	UFUNCTION(BlueprintPure,Category = "HUD")
	float GetRemainingTime()const;
	
	void SetOwningPlayer(APlayer1* Player);
	void CompareForWinner();
	void UpdateHUDForWinner(APlayer1* WinningPlayer);
private:

    
	FTimerHandle RoundTimerHandle;
	float RemainingTime;
	float RoundDuration;

	void OnRoundTimerTick();
	void OnRoundExpired();

	
	
};
