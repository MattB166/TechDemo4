// Fill out your copyright notice in the Description page of Project Settings.


#include "Player1.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"

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
	
}

// Called every frame
void APlayer1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//HandleAim();
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

void APlayer1::MoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector()* AxisValue);
	
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
	PlayerSMC = FindComponentByClass<USkeletalMeshComponent>();

	if(PlayerSMC)
	{
		PlayerSMC->PlayAnimation(PlayerJump,false); 
	}
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
		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("SHOOTING"));
		bIsShooting = false;
		HandleAim(); 
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,TEXT("NOT SHOOTING"));
	}
	
}

	
    












