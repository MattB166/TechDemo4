// Fill out your copyright notice in the Description page of Project Settings.


#include "MyShooterGameMode.h"

#include "../../../../../../../../../Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.33.31629/include/utility"
#include "Blueprint/UserWidget.h"

AMyShooterGameMode::AMyShooterGameMode()
{
	static ConstructorHelpers::FClassFinder<UUserWidget> HUDWidgetClassFinder(TEXT("Game/UI/SharedHUDWidget"));
	SharedHUDWidgetClass = HUDWidgetClassFinder.Class;
}
void AMyShooterGameMode::BeginPlay()
{
	Super::BeginPlay();
	if(SharedHUDWidgetClass)
	{
        UUserWidget* Player1HUD = CreateWidget<UUserWidget>(GetWorld(),SharedHUDWidgetClass);
		if(Player1HUD)
		{
			Player1HUD->AddToViewport();
			Player1HUD->SetVisibility(ESlateVisibility::Visible); 
		}
		UUserWidget* Player2HUD = CreateWidget<UUserWidget>(GetWorld(),SharedHUDWidgetClass);
		if(Player2HUD)
		{
			Player2HUD->AddToViewport();
			Player2HUD->SetVisibility(ESlateVisibility::Visible); 
		}
	}
}



