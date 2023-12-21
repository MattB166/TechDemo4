// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyShooterGameMode.generated.h"


UCLASS()
class MYPROJECT2_API AMyShooterGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMyShooterGameMode();

protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Widgets")
	TSubclassOf<class UUserWidget> SharedHUDWidgetClass;

	UUserWidget* SharedHUDWidget;

	virtual void BeginPlay() override;
public:
	UFUNCTION(BlueprintCallable)
	UUserWidget* GetSharedHUDWidget() const {return SharedHUDWidget;}
	
};
