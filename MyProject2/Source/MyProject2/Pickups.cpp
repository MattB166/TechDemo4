// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickups.h"

#include "MyProject2GameModeBase.h"
#include "Player1.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APickups::APickups()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APickups::BeginPlay()
{
	Super::BeginPlay();
	//OnActorBeginOverlap.AddDynamic(this,&APickups::OnActorOverlap);
}

// Called every frame
void APickups::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void APickups::OnPickUpCollected_Implementation()
{
	
}

void APickups::PlayPickUpSound()
{
	UGameplayStatics::SpawnSound2D(this,PickupSound); 
}

void APickups::OnPickupCollected_Implementation(APlayer1* Player)
{
	switch (PickUp)
	{
	case EPickUpType::Ammo:
		//GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Orange,TEXT("PICKED UP AMMO"));
		PlayPickUpSound();
		Player->AddAmmo(amount);
		break;
	case EPickUpType::Health:
		//GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Orange,TEXT("PICKED UP HEALTH"));
		PlayPickUpSound(); 
		Player->AddHealth(amount); 
		break;
	case EPickUpType::DamageMultiplier:
		//GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Orange,TEXT("PICKED UP MULTIPLIER"));
		break;
		default:
			break; 
	}
	if(GetWorld())
	{
		AMyProject2GameModeBase* GameModeBase = Cast<AMyProject2GameModeBase>(GetWorld()->GetAuthGameMode());
		if(GameModeBase)
		{
			GameModeBase->RemoveSpawnedLocation(GetActorLocation()); 
		}
	}
	AMyProject2GameModeBase* GameMode = GetWorld()->GetAuthGameMode<AMyProject2GameModeBase>();
	if(GameMode)
	{
		GameMode->DecrementPickUpCount(); 
	}
	Destroy(); 
}

// void APickups::OnActorOverlap(AActor* OverlappedActor, AActor* OtherActor)
// {
// 	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("ACTOR ON OVERLAP CALLED"));
// 	if(OtherActor && OtherActor->IsA(APlayer1::StaticClass()))
// 	{
// 		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Player overlapped with Pickup!"));
// 		APlayer1* Player = Cast<APlayer1>(OtherActor);
// 		if(Player)
// 		{
// 			switch (PickUp)
// 			{
// 			case EPickUpType::Ammo:
// 				GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Orange,TEXT("Adding Ammo"));
// 				Player->AddAmmo(amount); 
// 				///player->addammo;
// 				break;
// 			case EPickUpType::Health:
// 				//Player->PlayerHealthString;
// 				break;
// 				//player ->add health;
// 			case EPickUpType::DamageMultiplier:
// 				//Player->Reload();
// 				break;
// 			default:
// 				break;
// 			}
// 		}
// 	}
// }




