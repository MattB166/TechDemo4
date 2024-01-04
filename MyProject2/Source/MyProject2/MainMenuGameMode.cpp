// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"

#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

AMainMenuGameMode::AMainMenuGameMode()
{
	DefaultPawnClass = nullptr;
	HUDOverlay = nullptr; 
}
void AMainMenuGameMode::BeginPlay()
{
	Super::BeginPlay();

	

	if(HUDOverlayAsset)
	{
		HUDOverlay = CreateWidget<UUserWidget>(GetWorld(),HUDOverlayAsset);
		if(HUDOverlay)
		{
			HUDOverlay->AddToViewport(); 
		}
	}
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if(PlayerController)
	{
		FInputModeUIOnly InputMode;
		InputMode.SetWidgetToFocus(HUDOverlay->TakeWidget());
		PlayerController->SetInputMode(InputMode);
		PlayerController->bShowMouseCursor = true;
	}
}
void AMainMenuGameMode::PlayGame()
{
	///play game
	 GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,TEXT("GAME PLAYING"));
	GLog->Log("It works!");
	UE_LOG(LogTemp, Warning, TEXT("PlayGame function called"));
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(),0);
	if(PlayerController)
	{
		FInputModeGameOnly InputMode;
		PlayerController->SetInputMode(InputMode);
		PlayerController->bShowMouseCursor = false;
		PlayerController->bEnableClickEvents = false;
		PlayerController->bEnableMouseOverEvents = false;
	}
	UGameplayStatics::OpenLevel(GetWorld(),"TechDemo4Level1"); 
}





