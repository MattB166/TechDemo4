// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraSystem.h"
#include "GameFramework/Character.h"
#include "NiagaraComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Player1.generated.h"
class USkeletalMeshComponent;

UCLASS()
class MYPROJECT2_API APlayer1 : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayer1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void LookUp(float inputValue);
	int MaxRaycastDistance = 1500; 

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Animation Blend Space");
	UBlendSpaceBase* PlayerBlend;
	UPROPERTY(EditAnywhere)UAnimationAsset* PlayerJump;
	UPROPERTY(EditAnywhere, Category = "Aiming/Shooting")UAnimMontage* PlayerAim;
	UPROPERTY(EditAnywhere, Category = "Aiming/Shooting")UAnimMontage* PlayerShoot; 
    UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category = "MESH");
	USkeletalMeshComponent* PlayerSMC;
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category = "Player Stats");
	float PlayerHealth;
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category = "Player Stats");
	float TotalAmmo;
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category = "Player Stats");
	float ClipSize;
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite, Category = "Player Stats");
	int32 AmmoInClip;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category = "Niagara");
	UNiagaraComponent* GunNiagara;

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category = "Aiming");
	USpringArmComponent* MySpringArm; 

	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category = "Gun");
	USkeletalMeshComponent* GunMesh; 
	
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "UI");
	TSubclassOf<class UUserWidget>HUDOverlayAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI");
	UUserWidget* HUDOverlayPlayer1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI");
	UUserWidget* HUDOverlayPlayer2;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "UI");
	FString PlayerHealthString;
	UFUNCTION(BlueprintCallable,Category = "Player Stats")
	void Reload();
	
	
	
	
	
	

	
	bool bIsAiming;
	bool bIsShooting; 
	void CustomKeyPress();
	void StartAiming();
	void StopAiming();
	void Shoot(); 
	void HandleAim();
	void TakeDamage(int damage);
	void InitialisePlayer();
	void Pickup();
	void PerformPickupRaycast(const FVector& StartLocation, const FVector& EndLocation); 
	
	
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
