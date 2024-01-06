// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
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

   virtual void NativeConstruct() override;
	
	UPROPERTY(BlueprintReadOnly,Category = "Player")
	APlayer1* OwningPlayer;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Transient, meta = (BindWidgetAnim))
	UWidgetAnimation* HitTrack;

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Transient,meta = (BindWidget))
	UTextBlock* WinnerTextBlock; 

	UFUNCTION(BlueprintCallable,Category = "Anims")
	void PlayDamageAnim();
	

	UFUNCTION(BlueprintCallable,Category = "HUD")
	void StartTimer();

	UFUNCTION(BlueprintCallable,Category = "HUD")
	void StopTimer();

	UFUNCTION(BlueprintCallable,Category = "HUD")
	FString GetFormattedTime();

	UFUNCTION(BlueprintCallable,Category = "HUD")
	void DisplayWinnerText(const FString& WinnerText);

	UFUNCTION(BlueprintCallable,Category = "HUD")
	void ClearWinnerText();

	void SetWinnerText(const FText& WinnerText); 

	UPROPERTY(BlueprintReadOnly,Category = "Score")
	int32 PlayerScore;

	UPROPERTY(BlueprintReadOnly,Category = "Winner")
	FText Winner; 

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
