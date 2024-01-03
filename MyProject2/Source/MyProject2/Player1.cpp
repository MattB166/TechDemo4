// Fill out your copyright notice in the Description page of Project Settings.


#include "Player1.h"

#include <RenderMeshActor.h>

//#include "DrawDebugHelpers.h"
#include "DrawDebugHelpers.h"
#include "MyProject2.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"
#include "Pickups.h"
#include "GameFramework/PlayerState.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
APlayer1::APlayer1()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GunNiagara = nullptr;
	MySpringArm = nullptr;
	PlayerSMC = nullptr; 
	GunMesh = nullptr; 
}

// Called when the game starts or when spawned
void APlayer1::BeginPlay()
{
	Super::BeginPlay();
	
	OnActorBeginOverlap.AddDynamic(this,&APlayer1::OnActorOverlap);
	
	
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
	//PlayerInputComponent->BindAction("Pickup",IE_Pressed,this,&APlayer1::Pickup); 

	GetCharacterMovement()->bOrientRotationToMovement = false; 

}

void APlayer1::InitialisePlayer()
{
	PlayerHealth = 200;
	TotalAmmo = 20;
	ClipSize = 10;
	AmmoInClip = 10;
	PlayerSMC = GetMesh();
	if(UNiagaraComponent* NiagaraComponent = FindComponentByClass<UNiagaraComponent>())
	{
		GunNiagara = NiagaraComponent;
		GunNiagara->SetVisibility(false); 
		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("Found Niagara Component"));
	}

	if(USpringArmComponent* SpringArmComponent = FindComponentByClass<USpringArmComponent>())
	{
		MySpringArm = SpringArmComponent;
		MySpringArm->TargetArmLength = 100; 
	}

	if(PlayerSMC)
	{
		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("Searching through SMC"));
		FString GunNameString(TEXT("GUN"));
		for(USceneComponent* ChildComponent : PlayerSMC->GetAttachChildren())
		{
           
			if(ChildComponent && ChildComponent->GetName() == GunNameString)
			{
				if(ChildComponent->IsA(USkeletalMeshComponent::StaticClass()))
				{
					GunMesh = Cast<USkeletalMeshComponent>(ChildComponent);
					GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("Found GUN Component"));
					
				}
				else
				{
					GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("Have Not Found GUN Component"));
				}
			}
		}
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("NO PLAYER SMC"));
	}
	// TArray<USkeletalMeshComponent*> SkeletalMeshComponents;
	// GetComponents<USkeletalMeshComponent>(SkeletalMeshComponents);
	// for(USkeletalMeshComponent* SkeletalMeshComponent : SkeletalMeshComponents)
	// {
	// 	FString MeshName = LexToString(SkeletalMeshComponent->SkeletalMesh->GetName());
	// 	FName GunName(TEXT("GUN"));
	// 	if(MeshName.Equals(GunName.ToString()))
	// 	{
	// 		GunMesh = SkeletalMeshComponent;
	// 		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("Found GUN Component"));
	// 	}
	// 	if(GunMesh)
	// 	{
	// 		FVector GunLocation = GunMesh->GetSocketLocation("RightHand");
	// 		FRotator GunRotation = GunMesh->GetSocketRotation("RightHand");
	// 	}
	// }
	// if(USkeletalMeshComponent* SkeletalMeshComponent = FindComponentByClass<USkeletalMeshComponent>())
	// {
 //      
	// 	FString MeshName = LexToString(SkeletalMeshComponent->SkeletalMesh->GetName());
	//     FName GunName(TEXT("GUN"));
	// 	if(MeshName.Equals(GunName.ToString()))
	// 	{
	// 		GunMesh = SkeletalMeshComponent;
	// 		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("Found GUN Component"));
	// 	}
	// 	else
	// 	{
	// 		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("Have not found GUN"));
	// 	}
	// 	
	// 	if(GunMesh)
	// 	{
	// 		FVector GunLocation = GunMesh->GetSocketLocation("RightHand");
	// 		FRotator GunRotation = GunMesh->GetSocketRotation("RightHand"); 
	// 	}
	// }
	
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
	MySpringArm->TargetArmLength = 5;
	GunNiagara->SetVisibility(true);
}
void APlayer1::StopAiming()
{
	GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("STOPPED AIMING"));
	StopAnimMontage(PlayerAim);
	MySpringArm->TargetArmLength = 100; 
	bIsAiming = false;
	GunNiagara->SetVisibility(false);
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
            bool bHit;
			FHitResult Hit;
			//GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("SHOOTING"));
			if(GunMesh)
			{
				FVector GunLocation = GunMesh->GetSocketLocation("RightHand");
				FRotator GunRotation = GunMesh->GetSocketRotation("RightHand");

				

				FVector StartLocation = GunLocation;
				FVector EndLocation = StartLocation + GunRotation.Vector() * MaxRaycastDistance;
				FCollisionQueryParams CollisionParams;
				CollisionParams.AddIgnoredActor(this);

				TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
				ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));
				ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Visibility));
				bHit = GetWorld()->LineTraceSingleByObjectType(Hit,StartLocation,EndLocation,FCollisionObjectQueryParams(ObjectTypes),CollisionParams);


				DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Green,true,-1,0,1.f);

			}
			if(bHit)
			{
				APlayer1* HitPlayer = Cast<APlayer1>(Hit.GetActor());
				if(HitPlayer && HitPlayer != this)
				{
                   FName HitBoneName = Hit.BoneName;
					GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Hit Bone: %s"), *HitBoneName.ToString()));
					if(HitBoneName == FName("Head"))
					{
						GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("HEADSHOT"));
						HitPlayer->TakeDamage(50);
					}
					else
					{
						GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Blue,TEXT("HIT ENEMY On Body"));
						HitPlayer->TakeDamage(10); 
					}
					
					
				}
			}
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
void APlayer1::TakeDamage(int damage)
{
    if(PlayerHealth > 0)
    {
    	PlayerHealth -= damage; 
    }
	else if(PlayerHealth <= 0)
	{
		PlayerHealth = 0;
		///player die
		///next level 
	}
	
}
void APlayer1::OnActorOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Player overlapped with Pickup from player function!"));
	if(OtherActor && OtherActor->IsA(APickups::StaticClass()))
	{
		CurrentPickup = Cast<APickups>(OtherActor);
		if(CurrentPickup)
		{
			CurrentPickup->OnPickupCollected(); 
		}
	}
}
void APlayer1::AddAmmo(int amount)
{
	TotalAmmo+= amount;
	GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Green,TEXT("AMMO INCREASED"));
}


// void APlayer1::Pickup()
// {
// 	if(MySpringArm && MySpringArm->GetChildComponent(0))
// 	{
// 		USceneComponent* CameraComp = MySpringArm->GetChildComponent(0);
// 		FVector CameraLocation = CameraComp->GetComponentLocation();
// 		FVector CameraForwardVector = CameraComp->GetForwardVector();
//
// 		FVector EndLocation = CameraLocation + CameraForwardVector * 600;
// 		PerformPickupRaycast(CameraLocation,EndLocation);
// 		
// 	}
// }
// void APlayer1::PerformPickupRaycast(const FVector& StartLocation, const FVector& EndLocation)
// {
// 	FHitResult PickupHitResult;
// 	FCollisionQueryParams CollisionQueryParams;
// 	CollisionQueryParams.AddIgnoredActor(this);
// 	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
// 	ObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pickup));
//
//
// 	bool bHit = GetWorld()->LineTraceSingleByObjectType(PickupHitResult,StartLocation,EndLocation,FCollisionObjectQueryParams(ObjectTypes),CollisionQueryParams);
// 	DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Blue,true,-1,0,1.f);
// 	if(bHit)
// 	{
// 		GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,TEXT("HIT A PICKUP"));
// 		AActor* HitActor = PickupHitResult.GetActor();
// 		if(HitActor)
// 		{
// 			FString ActorName = HitActor->GetName();
// 			if(ActorName.Equals(TEXT("AmmoPickup")))
// 			{
// 				GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,TEXT("Picking Up Ammo"));
// 			}
// 		}
// 		
// 	}
// 	
// 	
// 	
// }
//










	
    












