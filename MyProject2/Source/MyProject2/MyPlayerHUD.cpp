// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerHUD.h"
void UMyPlayerHUD::SetOwningPlayer(APlayer1* Player)
{
	OwningPlayer = Player; 
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
	///expire round 
}








