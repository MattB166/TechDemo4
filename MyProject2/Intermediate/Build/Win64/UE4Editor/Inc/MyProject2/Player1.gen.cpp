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
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpaceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
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
			{ "Reload", &APlayer1::execReload },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDOverlayPlayer1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDOverlayPlayer1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDOverlayPlayer2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDOverlayPlayer2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHealthString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerHealthString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayer1_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayer1_Reload, "Reload" }, // 1278131382
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer1_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer1 = { "HUDOverlayPlayer1", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, HUDOverlayPlayer1), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer2_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer2 = { "HUDOverlayPlayer2", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, HUDOverlayPlayer2), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealthString_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Player1.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealthString = { "PlayerHealthString", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer1, PlayerHealthString), METADATA_PARAMS(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealthString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealthString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerShoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerSMC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_TotalAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_ClipSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_AmmoInClip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_GunNiagara,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_MySpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_GunMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_HUDOverlayPlayer2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer1_Statics::NewProp_PlayerHealthString,
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
	IMPLEMENT_CLASS(APlayer1, 3833688445);
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
