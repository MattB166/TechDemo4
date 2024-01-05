// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerHUD.h"

#include "EngineUtils.h"
#include "MyProject2GameModeBase.h"
#include "Kismet/GameplayStatics.h"

void UMyPlayerHUD::SetOwningPlayer(APlayer1* Player)
{
	OwningPlayer = Player; 
}

void UMyPlayerHUD::CompareForWinner()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("COMPARING WINNER"));
	
	if(OwningPlayer)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("GETS INSIDE FIRST CHECK"));
		TArray<AActor*> AllActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(),APlayer1::StaticClass(),AllActors);

		TArray<APlayer1*> AllPlayers;
		for(AActor* Actor: AllActors)
		{
			APlayer1* Player = Cast<APlayer1>(Actor);
			if(Player)
			{
				AllPlayers.Add(Player);
			}
		}
		if(AllPlayers.Num()==2)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("CONFIRMATION OF 2 PLAYERS"));
			APlayer1* Player1 = AllPlayers[0];
			APlayer1* Player2 = AllPlayers[1];

			int32 Player1ControllerID = Player1->GetControllerID();
			int32 Player2ControllerID = Player2->GetControllerID();
			

			float Player1HealthPercentage = Player1->GetHealthPercentage();
			float Player2HealthPercentage = Player2->GetHealthPercentage();

			if(Player1HealthPercentage > Player2HealthPercentage)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Player 1 wins!"));
			}
			else if(Player2HealthPercentage > Player1HealthPercentage)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Player 2 wins!"));
			}
			else
			{
				
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("It's a tie!"));
			}
		}
  
		
			
		
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("NO OWNING PLAYER"));
	}
}


void UMyPlayerHUD::StartTimer()
{
	RoundDuration = 180.0f;
	RemainingTime = RoundDuration;

	GetWorld()->GetTimerManager().SetTimer(RoundTimerHandle,this,&UMyPlayerHUD::OnRoundTimerTick,1.0f,true);
}
void UMyPlayerHUD::StopTimer()
{
	GetWorld()->GetTimerManager().ClearTimer(RoundTimerHandle);
}
FString UMyPlayerHUD::GetFormattedTime()
{
	int32 mins = FMath::FloorToInt(RemainingTime/60);
	int32 seconds = FMath::FloorToInt(RemainingTime) % 60;
return FString::Printf(TEXT("%02d:%02d"),mins,seconds);
}
void UMyPlayerHUD::OnRoundTimerTick()
{
	RemainingTime -= 1.0f;
	if(RemainingTime <= 0.0f)
	{
		OnRoundExpired();
		StopTimer(); 
	}
}
void UMyPlayerHUD::OnRoundExpired()
{
	CompareForWinner(); 
}
void UMyPlayerHUD::UpdatePlayerScore(int32 NewScore)
{
	PlayerScore = NewScore; 
}

float UMyPlayerHUD::GetRemainingTime() const
{
	return RemainingTime; 
}









