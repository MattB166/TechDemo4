// Copyright Epic Games, Inc. All Rights Reserved.


#include "MyProject2GameModeBase.h"
#include "MyPlayerHUD.h"
#include "Player1.h"
#include "Blueprint/UserWidget.h"
AMyProject2GameModeBase::AMyProject2GameModeBase()
{
   DefaultPawnClass = APlayer1::StaticClass();
   PrimaryActorTick.bCanEverTick = true;
}

void AMyProject2GameModeBase::Tick(float DeltaTime)
{
   Super::Tick(DeltaTime);
   GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("TICKING"));
   if(HUDREF->GetRemainingTime()==0)
   {
      EndRound();
      HUDREF->StartTimer();
      HUDREF2->StartTimer(); 
   }
  
   
}

void AMyProject2GameModeBase::PostLogin(APlayerController* NewPlayer)
{
   Super::PostLogin(NewPlayer);

   if(NewPlayer)
   {
      ULocalPlayer* LocalPlayer = Cast<ULocalPlayer>(NewPlayer->Player);
      if(LocalPlayer)
      {
         int32 PlayerIndex = LocalPlayer->GetControllerId();
         if (PlayerIndex == 0)
         {
            
             Player1Character = Cast<APlayer1>(NewPlayer->GetPawn());
            if (Player1Character)
            {
               Player1Character->PlayerControllerID = LocalPlayer->GetControllerId();
               Player1Character->HUDOverlayPlayer1 = CreateWidget<UUserWidget>(Cast<APlayerController>(Player1Character->GetController()), Player1Character->HUDOverlayAsset);
               if (Player1Character->HUDOverlayPlayer1)
               {
                 APlayerController* PlayerController = Cast<APlayerController>(Player1Character->GetController());
                  if(PlayerController)
                  {
                     Player1Character->HUDOverlayPlayer1->SetOwningPlayer(PlayerController);
                     HUDREF = Cast<UMyPlayerHUD>(Player1Character->HUDOverlayPlayer1);
                  }
                  Player1Character->HUDOverlayPlayer1->AddToPlayerScreen();
                  Player1Character->HUDOverlayPlayer1->SetVisibility(ESlateVisibility::Visible);
                  GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("P1 HUD Set"));
                  FVector2D WidgetPos = Player1Character->HUDOverlayPlayer1->GetCachedGeometry().ToPaintGeometry().GetAccumulatedRenderTransform().GetTranslation();
                  GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("P1 HUD Position: X=%.2f, Y=%.2f"), WidgetPos.X, WidgetPos.Y));
               }
            }
         }
         else
         {
            
              Player2Character = Cast<APlayer1>(NewPlayer->GetPawn());
            if (Player2Character)
            {
               Player2Character->PlayerControllerID = LocalPlayer->GetControllerId(); 
               Player2Character->HUDOverlayPlayer2 = CreateWidget<UUserWidget>(Cast<APlayerController>(Player2Character->GetController()), Player2Character->HUDOverlayAsset);
               if (Player2Character->HUDOverlayPlayer2)
               {
                  APlayerController* PlayerController = Cast<APlayerController>(Player2Character->GetController());
                  if(PlayerController)
                  {
                     Player2Character->HUDOverlayPlayer2->SetOwningPlayer(PlayerController);
                     HUDREF2 = Cast<UMyPlayerHUD>(Player2Character->HUDOverlayPlayer2);
                  }
                  Player2Character->HUDOverlayPlayer2->AddToPlayerScreen();
                  Player2Character->HUDOverlayPlayer2->SetVisibility(ESlateVisibility::Visible);
                 
                  
                  GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("P2 HUD Set"));
               }
            }
         }
      }
   }
   
}
void AMyProject2GameModeBase::BeginPlay()
{
  

   SpawnPickup();
   GetWorldTimerManager().SetTimer(PickupSpawnTimerHandle,this,&AMyProject2GameModeBase::SpawnPickup,PickUpSpawnInterval,true); 
}
void AMyProject2GameModeBase::SpawnPickup()
{
   if(NumSpawnedPickups < 4 && PickupLocations.Num() > 0 && PickupClasses.Num() > 0)
   {
      int32 RandomClassIndex = FMath::RandRange(0,PickupClasses.Num()-1);
      TSubclassOf<AActor> ChosenPickupClass = PickupClasses[RandomClassIndex];

      FVector SpawnLocation;
      do
      {
         int32 RandomLocationIndex = FMath::RandRange(0,PickupLocations.Num() - 1);
         SpawnLocation = PickupLocations[RandomLocationIndex];
      }
      while (SpawnedLocations.Contains(SpawnLocation));

      SpawnedLocations.Add(SpawnLocation); 

      AActor* NewPickup = GetWorld()->SpawnActor<AActor>(ChosenPickupClass,SpawnLocation,FRotator::ZeroRotator);

      FString SpawnLoc = FString::Printf(TEXT("PICKUP SPAWNED AT: %S"),*SpawnLocation.ToString());
      GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, SpawnLoc);

      ++NumSpawnedPickups; 
   }
}
void AMyProject2GameModeBase::DecrementPickUpCount()
{
   --NumSpawnedPickups;
   if(NumSpawnedPickups < 0)
   {
      NumSpawnedPickups = 0; 
   }
}

void AMyProject2GameModeBase::SetHUDReference(UMyPlayerHUD* HUD)
{
   HUDREF = HUD; 
}

void AMyProject2GameModeBase::RemoveSpawnedLocation(const FVector& Location)
{
   SpawnedLocations.Remove(Location); 
}

void AMyProject2GameModeBase::EndRound()
{
   GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("ROUND ENDED"));

   if(Player1Character->GetHealthPercentage() > Player2Character->GetHealthPercentage())
   {
      Player1Character->UpdateScore(1);
   }
   else if(Player2Character->GetHealthPercentage() > Player1Character->GetHealthPercentage())
   {
      Player2Character->UpdateScore(2); 
   }
   else if(Player1Character->GetHealthPercentage() == Player2Character->GetHealthPercentage())
   {
      ///tie 
   }

   Player1Character->ResetPlayer();
   Player2Character->ResetPlayer();

   
   
}






