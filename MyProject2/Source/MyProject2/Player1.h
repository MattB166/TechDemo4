// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyProject2GameModeBase.h"
#include "NiagaraSystem.h"
#include "GameFramework/Character.h"
#include "NiagaraComponent.h"
#include "Sound/SoundBase.h"
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
	//APlayerController* OwningPlayerController; 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void LookUp(float inputValue);
	int MaxRaycastDistance = 2500; 

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Animation Blend Space");
	UBlendSpaceBase* PlayerBlend;
	UPROPERTY(EditAnywhere)UAnimationAsset* PlayerJump;
	UPROPERTY(EditAnywhere, Category = "Aiming/Shooting")UAnimMontage* PlayerAim;
	UPROPERTY(EditAnywhere, Category = "Aiming/Shooting")UAnimMontage* PlayerShoot;
	//UPROPERTY(EditAnywhere,Category = "DEATH")UAnimMontage* PlayerDeath;
	UPROPERTY(EditAnywhere,Category = "DEATH MAIN ANIM")UAnimationAsset* NewDeath;
	UPROPERTY(EditAnywhere,Category = "Sounds")
	class USoundBase* ShotSound;
	UPROPERTY(EditAnywhere,Category = "Sounds")
	class USoundBase* HurtSound; 
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
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,Category = "Player Stats");
	int32 PlayerScore = 0;
	UPROPERTY(VisibleAnywhere,Category = "Position")
	FVector StartPos;
	UPROPERTY(VisibleAnywhere,Category = "Position")
	FRotator StartRot;
	 
	
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
	UUserWidget* HUDOverlayPlayer;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "UI");
	FString PlayerHealthString;
	UFUNCTION(BlueprintCallable,Category = "Player Stats")
	void Reload();
	UFUNCTION()
	void OnActorOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UPROPERTY(EditAnywhere,BlueprintReadOnly,Category = "Pickups")
	class APickups* CurrentPickup;
	UFUNCTION(BlueprintCallable)
	void UpdateScore(int32 ScoreDelta);
	UFUNCTION(BlueprintPure,Category = "Player Stats")
	int32 GetPlayerScore() const;
	UFUNCTION(BlueprintCallable)
	void ResetScore(); 
	UFUNCTION(BlueprintPure, Category = "Player Stats")
	float GetHealthPercentage();
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Player Info")
	int32 PlayerControllerID;
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite, Category = "Dead")
	bool bIsDead;
 //    UFUNCTION()
	// void SetHUDReference(UMyPlayerHUD* HUD);
	UFUNCTION()
	int32 GetControllerID();
	UPROPERTY()
	// UMyPlayerHUD* PlayerHUD;
	



	bool bIsAiming;
	bool bIsShooting; 
	void CustomKeyPress();
	void StartAiming();
	void StopAiming();
	void Shoot(); 
	void HandleAim();
	void TakeDamage(int damage);
	void InitialisePlayer();
	void ResetPlayer(); 
	void AddAmmo(int amount);
	void AddHealth(int amount);
	void Die(); 
	//int PlayerScore = 0;
	// void Pickup();
	// void PerformPickupRaycast(const FVector& StartLocation, const FVector& EndLocation); 
	//
	
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	
private:
     
};
