// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Player1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer1() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_APlayer1_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_APlayer1();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_APickups_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayer1::execGetControllerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetControllerID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayer1::execGetHealthPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayer1::execResetScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayer1::execGetPlayerScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlayerScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayer1::execUpdateScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ScoreDelta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateScore(Z_Param_ScoreDelta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayer1::execOnActorOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayer1::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	void APlayer1::StaticRegisterNativesAPlayer1()
	{
		UClass* Class = APlayer1::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetControllerID", &APlayer1::execGetControllerID },
			{ "GetHealthPercentage", &APlayer1::execGetHealthPercentage },
			{ "GetPlayerScore", &APlayer1::execGetPlayerScore },
			{ "OnActorOverlap", &APlayer1::execOnActorOverlap },
			{ "Reload", &APlayer1::execReload },
			{ "ResetScore", &APlayer1::execResetScore },
			{ "UpdateScore", &APlayer1::execUpdateScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayer1_GetControllerID_Statics
	{
		struct Player1_eventGetControllerID_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayer1_GetControllerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player1_eventGetControllerID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer1_GetControllerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer1_GetControllerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer1_GetControllerID_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//    UFUNCTION()\n// void SetHUDReference(UMyPlayerHUD* HUD);\n" },
		{ "ModuleRelativePath", "Player1.h" },
		{ "ToolTip", "UFUNCTION()\nvoid SetHUDReference(UMyPlayerHUD* HUD);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer1_GetControllerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer1, nullptr, "GetControllerID", nullptr, nullptr, sizeof(Player1_eventGetControllerID_Parms), Z_Construct_UFunction_APlayer1_GetControllerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer1_GetControllerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer1_GetControllerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer1_GetControllerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer1_GetControllerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer1_GetControllerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer1_GetHealthPercentage_Statics
	{
		struct Player1_eventGetHealthPercentage_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer1_GetHealthPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player1_eventGetHealthPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer1_GetHealthPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer1_GetHealthPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer1_GetHealthPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer1_GetHealthPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer1, nullptr, "GetHealthPercentage", nullptr, nullptr, sizeof(Player1_eventGetHealthPercentage_Parms), Z_Construct_UFunction_APlayer1_GetHealthPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer1_GetHealthPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer1_GetHealthPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer1_GetHealthPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer1_GetHealthPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer1_GetHealthPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer1_GetPlayerScore_Statics
	{
		struct Player1_eventGetPlayerScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayer1_GetPlayerScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player1_eventGetPlayerScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer1_GetPlayerScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer1_GetPlayerScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer1_GetPlayerScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer1_GetPlayerScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer1, nullptr, "GetPlayerScore", nullptr, nullptr, sizeof(Player1_eventGetPlayerScore_Parms), Z_Construct_UFunction_APlayer1_GetPlayerScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer1_GetPlayerScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer1_GetPlayerScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer1_GetPlayerScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer1_GetPlayerScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer1_GetPlayerScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer1_OnActorOverlap_Statics
	{
		struct Player1_eventOnActorOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer1_OnActorOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player1_eventOnActorOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayer1_OnActorOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player1_eventOnActorOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer1_OnActorOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer1_OnActorOverlap_Statics::NewProp_OverlappedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer1_OnActorOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer1_OnActorOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer1_OnActorOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer1, nullptr, "OnActorOverlap", nullptr, nullptr, sizeof(Player1_eventOnActorOverlap_Parms), Z_Construct_UFunction_APlayer1_OnActorOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer1_OnActorOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer1_OnActorOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer1_OnActorOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer1_OnActorOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer1_OnActorOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer1_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer1_Reload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer1_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer1, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer1_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer1_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer1_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer1_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer1_ResetScore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer1_ResetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer1_ResetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer1, nullptr, "ResetScore", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer1_ResetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer1_ResetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer1_ResetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer1_ResetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer1_UpdateScore_Statics
	{
		struct Player1_eventUpdateScore_Parms
		{
			int32 ScoreDelta;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreDelta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayer1_UpdateScore_Statics::NewProp_ScoreDelta = { "ScoreDelta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player1_eventUpdateScore_Parms, ScoreDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer1_UpdateScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer1_UpdateScore_Statics::NewProp_ScoreDelta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer1_UpdateScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer1_UpdateScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer1, nullptr, "UpdateScore", nullptr, nullptr, sizeof(Player1_eventUpdateScore_Parms), Z_Construct_UFunction_APlayer1_UpdateScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer1_UpdateScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer1_UpdateScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayer1_UpdateScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer1_UpdateScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer1_UpdateScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayer1_NoRegister()
	{
		return APlayer1::StaticClass();
	}
	struct Z_Construct_UClass_APlayer1_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerJump_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerAim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerShoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerShoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewDeath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShotSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HurtSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HurtSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSMC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerSMC;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClipSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoInClip_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoInClip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartRot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartRot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunNiagara_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunNiagara;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MySpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MySpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDOverlayAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDOverlayAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDOverlayPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDOverlayPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHealthString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerHealthString;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPickup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentPickup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerControllerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerControllerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAiming_MetaData[];
#endif
		static void NewProp_bIsAiming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAiming;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayer1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayer1_GetControllerID, "GetControllerID" }, // 3662368860
		{ &Z_Construct_UFunction_APlayer1_GetHealthPercentage, "GetHealthPercentage" }, // 3509394923
		{ &Z_Construct_UFunction_APlayer1_GetPlayerScore, "GetPlayerScore" }, // 156973615
		{ &Z_Construct_UFunction_APlayer1_OnActorOverlap, "OnActorOverlap" }, // 3318064063
		{ &Z_Construct_UFunction_APlayer1_Reload, "Reload" }, // 1278131382
		{ &Z_Construct_UFunction_APlayer1_ResetScore, "ResetScore" }, // 321078520
		{ &Z_Construct_UFunction_APlayer1_UpdateScore, "UpdateScore" }, // 3485810985
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player1.h" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerBlend_MetaData[] = {
		{ "Category", "Animation Blend Space" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerBlend = { "PlayerBlend", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, PlayerBlend), Z_Construct_UClass_UBlendSpaceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerJump_MetaData[] = {
		{ "Category", "Player1" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerJump = { "PlayerJump", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, PlayerJump), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerAim_MetaData[] = {
		{ "Category", "Aiming/Shooting" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerAim = { "PlayerAim", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, PlayerAim), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerShoot_MetaData[] = {
		{ "Category", "Aiming/Shooting" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerShoot = { "PlayerShoot", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, PlayerShoot), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerShoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerShoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_NewDeath_MetaData[] = {
		{ "Category", "DEATH MAIN ANIM" },
		{ "Comment", "//UPROPERTY(EditAnywhere,Category = \"DEATH\")UAnimMontage* PlayerDeath;\n" },
		{ "ModuleRelativePath", "Player1.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere,Category = \"DEATH\")UAnimMontage* PlayerDeath;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_NewDeath = { "NewDeath", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, NewDeath), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_NewDeath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_NewDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_ShotSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_ShotSound = { "ShotSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, ShotSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_ShotSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_ShotSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_HurtSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_HurtSound = { "HurtSound", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, HurtSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_HurtSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_HurtSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerSMC_MetaData[] = {
		{ "Category", "MESH" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerSMC = { "PlayerSMC", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, PlayerSMC), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerSMC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerSMC_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealth_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, PlayerHealth), METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_TotalAmmo_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_TotalAmmo = { "TotalAmmo", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, TotalAmmo), METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_TotalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_TotalAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_ClipSize_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_ClipSize = { "ClipSize", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, ClipSize), METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_ClipSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_ClipSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_AmmoInClip_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_AmmoInClip = { "AmmoInClip", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, AmmoInClip), METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_AmmoInClip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_AmmoInClip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0020080000020015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, PlayerScore), METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_StartPos_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_StartPos = { "StartPos", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, StartPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_StartPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_StartPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_StartRot_MetaData[] = {
		{ "Category", "Position" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_StartRot = { "StartRot", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, StartRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_StartRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_StartRot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_GunNiagara_MetaData[] = {
		{ "Category", "Niagara" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_GunNiagara = { "GunNiagara", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, GunNiagara), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_GunNiagara_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_GunNiagara_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_MySpringArm_MetaData[] = {
		{ "Category", "Aiming" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_MySpringArm = { "MySpringArm", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, MySpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_MySpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_MySpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_GunMesh_MetaData[] = {
		{ "Category", "Gun" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, GunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_GunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_GunMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayAsset_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayAsset = { "HUDOverlayAsset", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, HUDOverlayAsset), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer = { "HUDOverlayPlayer", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, HUDOverlayPlayer), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealthString_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealthString = { "PlayerHealthString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, PlayerHealthString), METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealthString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealthString_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_CurrentPickup_MetaData[] = {
		{ "Category", "Pickups" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_CurrentPickup = { "CurrentPickup", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, CurrentPickup), Z_Construct_UClass_APickups_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_CurrentPickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_CurrentPickup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerControllerID_MetaData[] = {
		{ "Category", "Player Info" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerControllerID = { "PlayerControllerID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, PlayerControllerID), METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerControllerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerControllerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_bIsDead_MetaData[] = {
		{ "Category", "Dead" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	void Z_Construct_UClass_APlayer1_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((APlayer1*)Obj)->bIsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayer1), &Z_Construct_UClass_APlayer1_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_bIsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_bIsAiming_MetaData[] = {
		{ "Comment", "// UMyPlayerHUD* PlayerHUD;\n" },
		{ "ModuleRelativePath", "Player1.h" },
		{ "ToolTip", "UMyPlayerHUD* PlayerHUD;" },
	};
#endif
	void Z_Construct_UClass_APlayer1_Statics::NewProp_bIsAiming_SetBit(void* Obj)
	{
		((APlayer1*)Obj)->bIsAiming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_bIsAiming = { "bIsAiming", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayer1), &Z_Construct_UClass_APlayer1_Statics::NewProp_bIsAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_bIsAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_bIsAiming_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerShoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_NewDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_ShotSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_HurtSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerSMC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_TotalAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_ClipSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_AmmoInClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_StartPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_StartRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_GunNiagara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_MySpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_GunMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealthString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_CurrentPickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerControllerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_bIsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_bIsAiming,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer1_Statics::ClassParams = {
		&APlayer1::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayer1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer1, 3296460344);
	template<> MYPROJECT2_API UClass* StaticClass<APlayer1>()
	{
		return APlayer1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer1(Z_Construct_UClass_APlayer1, &APlayer1::StaticClass, TEXT("/Script/MyProject2"), TEXT("APlayer1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
