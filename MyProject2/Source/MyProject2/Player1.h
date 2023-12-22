// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player1.generated.h"

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
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Animation Blend Space");
	UBlendSpaceBase* PlayerBlend;
	UPROPERTY(EditAnywhere)UAnimationAsset* PlayerJump;
	UPROPERTY(EditAnywhere, Category = "Aiming/Shooting")UAnimMontage* PlayerAim;
	UPROPERTY(EditAnywhere, Category = "Aiming/Shooting")UAnimMontage* PlayerShoot; 
	USkeletalMeshComponent* PlayerSMC;
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category = "Player Stats");
	float PlayerHealth;
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category = "Player Stats");
	float PlayerAmmo;
	// UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category = "Player Stats");
	// float ClipAmount; 
	
	
public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "UI");
	TSubclassOf<class UUserWidget>HUDOverlayAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI");
	UUserWidget* HUDOverlayPlayer1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI");
	UUserWidget* HUDOverlayPlayer2;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "UI");
	FString PlayerHealthString;
	
	
	

	
	bool bIsAiming;
	bool bIsShooting; 
	void CustomKeyPress();
	void StartAiming();
	void StopAiming();
	void Shoot(); 
	void HandleAim();
	void InitialisePlayer();
	
	
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
