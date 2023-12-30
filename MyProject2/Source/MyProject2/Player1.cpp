// Fill out your copyright notice in the Description page of Project Settings.


#include "Player1.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerState.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
APlayer1::APlayer1()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APlayer1::BeginPlay()
{
	Super::BeginPlay();
	
	
	
	
	InitialisePlayer();
	
	
}

// Called every frame
void APlayer1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//HandleAim();
	////if player presses shift or left button in, sprint. GetPlayercontroller->max speed or smth like that 
}

// Called to bind functionality to input
void APlayer1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"),this,&APlayer1::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"),this,&APlayer1::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Turn"),this,&APlayer1::AddControllerYawInput);
	PlayerInputComponent->BindAxis(TEXT("LookUp"),this,&APlayer1::AddControllerPitchInput);
	PlayerInputComponent->BindAction(TEXT("Jump"),IE_Pressed,this, &APlayer1::Jump);
	PlayerInputComponent->BindAction("CustomKey",IE_Pressed,this,&APlayer1::CustomKeyPress);
	PlayerInputComponent->BindAction("PlayerAim",IE_Pressed,this,&APlayer1::StartAiming);
	PlayerInputComponent->BindAction("PlayerAim", IE_Released,this,&APlayer1::StopAiming);
	PlayerInputComponent->BindAction("PlayerShoot",IE_Pressed,this, &APlayer1::Shoot);

	GetCharacterMovement()->bOrientRotationToMovement = false; 

}

void APlayer1::InitialisePlayer()
{
	PlayerHealth = 200;
	TotalAmmo = 20;
	ClipSize = 10;
	AmmoInClip = 10;
	
	
	
}



void APlayer1::MoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector()* AxisValue);
	 UE_LOG(LogTemp, Warning, TEXT("MoveForward AxisValue: %f"), AxisValue);
	
}

void APlayer1::MoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector()* AxisValue);
	 
}
 void APlayer1::LookUp(float inputValue)
 {
 	
 	AddControllerPitchInput(inputValue);
 	
 }


void APlayer1::CustomKeyPress()
{
	PlayerHealth-=1; 
}
void APlayer1::StartAiming()
{
	GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("STARTED AIMING"));
	bIsAiming = true;
	HandleAim(); 
}
void APlayer1::StopAiming()
{
	GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("STOPPED AIMING"));
	StopAnimMontage(PlayerAim); 
	bIsAiming = false;
	//bIsShooting = false; 
}


void APlayer1::HandleAim()
{
	
	if(bIsAiming && !bIsShooting)
	{
		//GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Yellow,TEXT("Aiming"));
		PlayAnimMontage(PlayerAim);
		
		
		
		
	}
	else if(bIsShooting || !bIsAiming)
	{
		bIsAiming = false;
		StopAnimMontage(PlayerAim); 
	}
	else if(bIsShooting)
	{
        	Shoot(); 
	}
		
	
}
void APlayer1::Shoot()
{

	if(bIsAiming && !bIsShooting)
	{
		bIsShooting = true;
		StopAnimMontage(PlayerAim); 
		PlayAnimMontage(PlayerShoot);
		if(AmmoInClip > 0)
		{
			//GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("SHOOTING"));
			AmmoInClip-=1; 
			bIsShooting = false;
		}
		else if(AmmoInClip == 0 && TotalAmmo >= 10)
		{
			Reload();
			bIsShooting = false; 
		}
		else if(AmmoInClip == 0 && TotalAmmo == 0)
		{
			GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("NO AMMO REMAINING"));
			bIsShooting = false;
			
			
		}
		
		HandleAim(); 
	}
	else
	{
		//GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,TEXT("NOT SHOOTING"));
	}
	
}
void APlayer1::Reload()
{

	if(TotalAmmo > 0 && AmmoInClip < ClipSize)
	{
		int32 AmmoToReload = FMath::Min(ClipSize-AmmoInClip,TotalAmmo);

		TotalAmmo -= AmmoToReload;
		AmmoInClip +=AmmoToReload;
		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,TEXT("RELOADED"));
	}
}








	
    












