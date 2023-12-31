// Copyright Epic Games, Inc. All Rights Reserved.


#include "MyProject2GameModeBase.h"
#include "MyPlayerHUD.h"
#include "Player1.h"
#include "Blueprint/UserWidget.h"
#include "Components/AudioComponent.h"
#include "Kismet/GameplayStatics.h"

AMyProject2GameModeBase::AMyProject2GameModeBase()
{
   DefaultPawnClass = APlayer1::StaticClass();
   PrimaryActorTick.bCanEverTick = true;
   
}

void AMyProject2GameModeBase::Tick(float DeltaTime)
{
   Super::Tick(DeltaTime);
   //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("TICKING"));
   if(HUDREF->GetRemainingTime()==0)
   {
      //GetWorldTimerManager().SetTimer(EndRoundTimerHandle,this,&AMyProject2GameModeBase::EndRound,5.0f,false); 
      EndRound();
      HUDREF->StartTimer();
      HUDREF2->StartTimer(); 
   }
   // else if(Player1Character->GetHealthPercentage() == 0 || Player2Character->GetHealthPercentage() == 0)
   // {
   //   // GetWorldTimerManager().SetTimer(EndRoundTimerHandle,this,&AMyProject2GameModeBase::EndRound,5.0f,false); 
   //    EndRound();
   //    HUDREF->StartTimer();
   //    HUDREF2->StartTimer(); 
   // }

   // if(BackGroundMusicComponent)
   // {
   //    BackGroundMusicComponent->OnAudioFinished.AddDynamic(this,&AMyProject2GameModeBase::OnMusicFinished);
   // }  crashes game
  else if(Player1Character->bIsDead || Player2Character->bIsDead)
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
               Player1Character->HUDOverlayPlayer = CreateWidget<UUserWidget>(Cast<APlayerController>(Player1Character->GetController()), Player1Character->HUDOverlayAsset);
               if (Player1Character->HUDOverlayPlayer)
               {
                  APlayerController* PlayerController = Cast<APlayerController>(Player1Character->GetController());
                  if(PlayerController)
                  {
                     Player1Character->HUDOverlayPlayer->SetOwningPlayer(PlayerController);
                     HUDREF = Cast<UMyPlayerHUD>(Player1Character->HUDOverlayPlayer);
                  }
                  Player1Character->HUDOverlayPlayer->AddToPlayerScreen();
                  Player1Character->HUDOverlayPlayer->SetVisibility(ESlateVisibility::Visible);
                  //GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("P1 HUD Set"));
                  FVector2D WidgetPos = Player1Character->HUDOverlayPlayer->GetCachedGeometry().ToPaintGeometry().GetAccumulatedRenderTransform().GetTranslation();
                 // GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("P1 HUD Position: X=%.2f, Y=%.2f"), WidgetPos.X, WidgetPos.Y));
               }
            }
         }
         else
         {
            
              Player2Character = Cast<APlayer1>(NewPlayer->GetPawn());
            if (Player2Character)
            {
               Player2Character->PlayerControllerID = LocalPlayer->GetControllerId(); 
               Player2Character->HUDOverlayPlayer = CreateWidget<UUserWidget>(Cast<APlayerController>(Player2Character->GetController()), Player2Character->HUDOverlayAsset);
               if (Player2Character->HUDOverlayPlayer)
               {
                  APlayerController* PlayerController = Cast<APlayerController>(Player2Character->GetController());
                  if(PlayerController)
                  {
                     Player2Character->HUDOverlayPlayer->SetOwningPlayer(PlayerController);
                     HUDREF2 = Cast<UMyPlayerHUD>(Player2Character->HUDOverlayPlayer);
                  }
                  Player2Character->HUDOverlayPlayer->AddToPlayerScreen();
                  Player2Character->HUDOverlayPlayer->SetVisibility(ESlateVisibility::Visible);
                 
                  
                  //GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("P2 HUD Set"));
               }
            }
         }
      }
   }
   
}
void AMyProject2GameModeBase::BeginPlay()
{
  if(!BackGroundMusicComponent)
  {
     BackGroundMusicComponent =  UGameplayStatics::SpawnSound2D(this,BackGroundMusic);
     if(BackGroundMusicComponent)
     {
        BackGroundMusicComponent->SetVolumeMultiplier(BackGroundMusicVolume);
        bShouldLoop = true; 
       
        
     }
  }
  
   
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
      //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, SpawnLoc);

      ++NumSpawnedPickups; 
   }
}

void AMyProject2GameModeBase::StopBackGroundMusic()
{
   if(BackGroundMusicComponent)
   {
      bShouldLoop = false; 
      BackGroundMusicComponent->Stop(); 
   }
      
}

void AMyProject2GameModeBase::OnMusicFinished()
{
   if(BackGroundMusicComponent && bShouldLoop)
   {
     
      BackGroundMusicComponent->Play(); 
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
   //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("ROUND ENDED"));
   if(Player1Character->GetHealthPercentage() > Player2Character->GetHealthPercentage())
   {
      Player1Character->UpdateScore(1);
    
   }
   else if(Player2Character->GetHealthPercentage() > Player1Character->GetHealthPercentage())
   {
      Player2Character->UpdateScore(1);
     
   }
   else if(Player1Character->GetHealthPercentage() == Player2Character->GetHealthPercentage())
   {
      ///tie 
   }
   
   Player1Character->ResetPlayer();
   Player2Character->ResetPlayer();
   if(RoundNumber < 5)
   {
      ++RoundNumber; 
   }
   else if(RoundNumber == 5)
   {
      DecideOverallWinner(); 
   }
   
   
}

void AMyProject2GameModeBase::DecideOverallWinner()
{
   int32 P1Score = Player1Character->GetPlayerScore();
   int32 P2Score = Player2Character->GetPlayerScore();

   if(P2Score > P1Score)
   {
      HUDREF2->DisplayWinnerText("WINNER!");
      HUDREF->DisplayWinnerText("LOSER!");
      RoundNumber = 0;
      Player1Character->ResetScore();
      Player2Character->ResetScore(); 
   }
   else if(P1Score > P2Score)
   {
      HUDREF->DisplayWinnerText("WINNER!");
      HUDREF2->DisplayWinnerText("LOSER!");
      RoundNumber = 0;
      Player1Character->ResetScore();
      Player2Character->ResetScore(); 
      
      
   }

   EndRound(); 
}






