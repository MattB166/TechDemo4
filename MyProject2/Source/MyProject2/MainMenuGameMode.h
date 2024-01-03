// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT2_API AMainMenuGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMainMenuGameMode();
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable)
	void PlayGame();

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "UI");
	TSubclassOf<class UUserWidget>HUDOverlayAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI");
	UUserWidget* HUDOverlay;
	
	
};
