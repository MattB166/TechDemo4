// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyPlayerHUD.generated.h"
class APlayer1;

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
	
	void SetOwningPlayer(APlayer1* Player); 
	
};
