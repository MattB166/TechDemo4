// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/Pickups.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickups() {}
// Cross Module References
	MYPROJECT2_API UEnum* Z_Construct_UEnum_MyProject2_EPickUpType();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	MYPROJECT2_API UClass* Z_Construct_UClass_APickups_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_APickups();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYPROJECT2_API UClass* Z_Construct_UClass_APlayer1_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	static UEnum* EPickUpType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MyProject2_EPickUpType, Z_Construct_UPackage__Script_MyProject2(), TEXT("EPickUpType"));
		}
		return Singleton;
	}
	template<> MYPROJECT2_API UEnum* StaticEnum<EPickUpType>()
	{
		return EPickUpType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPickUpType(EPickUpType_StaticEnum, TEXT("/Script/MyProject2"), TEXT("EPickUpType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MyProject2_EPickUpType_Hash() { return 905515649U; }
	UEnum* Z_Construct_UEnum_MyProject2_EPickUpType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MyProject2();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPickUpType"), 0, Get_Z_Construct_UEnum_MyProject2_EPickUpType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPickUpType::Ammo", (int64)EPickUpType::Ammo },
				{ "EPickUpType::Health", (int64)EPickUpType::Health },
				{ "EPickUpType::DamageMultiplier", (int64)EPickUpType::DamageMultiplier },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ammo.Name", "EPickUpType::Ammo" },
				{ "BlueprintType", "true" },
				{ "DamageMultiplier.Name", "EPickUpType::DamageMultiplier" },
				{ "Health.Name", "EPickUpType::Health" },
				{ "ModuleRelativePath", "Pickups.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MyProject2,
				nullptr,
				"EPickUpType",
				"EPickUpType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(APickups::execOnPickupCollected)
	{
		P_GET_OBJECT(APlayer1,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickupCollected_Implementation(Z_Param_Player);
		P_NATIVE_END;
	}
	static FName NAME_APickups_OnPickupCollected = FName(TEXT("OnPickupCollected"));
	void APickups::OnPickupCollected(APlayer1* Player)
	{
		Pickups_eventOnPickupCollected_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_APickups_OnPickupCollected),&Parms);
	}
	void APickups::StaticRegisterNativesAPickups()
	{
		UClass* Class = APickups::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPickupCollected", &APickups::execOnPickupCollected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickups_OnPickupCollected_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickups_OnPickupCollected_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pickups_eventOnPickupCollected_Parms, Player), Z_Construct_UClass_APlayer1_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickups_OnPickupCollected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickups_OnPickupCollected_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickups_OnPickupCollected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Pickups.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickups_OnPickupCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickups, nullptr, "OnPickupCollected", nullptr, nullptr, sizeof(Pickups_eventOnPickupCollected_Parms), Z_Construct_UFunction_APickups_OnPickupCollected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickups_OnPickupCollected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickups_OnPickupCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickups_OnPickupCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickups_OnPickupCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickups_OnPickupCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickups_NoRegister()
	{
		return APickups::StaticClass();
	}
	struct Z_Construct_UClass_APickups_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PickUp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PickUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickups_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickups_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickups_OnPickupCollected, "OnPickupCollected" }, // 2511694923
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickups_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickups.h" },
		{ "ModuleRelativePath", "Pickups.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APickups_Statics::NewProp_PickUp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickups_Statics::NewProp_PickUp_MetaData[] = {
		{ "Category", "Pickups" },
		{ "Comment", "// UFUNCTION()\n// void OnActorOverlap(AActor* OverlappedActor, AActor* OtherActor);\n" },
		{ "ModuleRelativePath", "Pickups.h" },
		{ "ToolTip", "UFUNCTION()\nvoid OnActorOverlap(AActor* OverlappedActor, AActor* OtherActor);" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APickups_Statics::NewProp_PickUp = { "PickUp", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickups, PickUp), Z_Construct_UEnum_MyProject2_EPickUpType, METADATA_PARAMS(Z_Construct_UClass_APickups_Statics::NewProp_PickUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickups_Statics::NewProp_PickUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickups_Statics::NewProp_amount_MetaData[] = {
		{ "Category", "Pickups" },
		{ "ModuleRelativePath", "Pickups.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickups_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickups, amount), METADATA_PARAMS(Z_Construct_UClass_APickups_Statics::NewProp_amount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickups_Statics::NewProp_amount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickups_Statics::NewProp_PickupSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Pickups.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickups_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickups, PickupSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickups_Statics::NewProp_PickupSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickups_Statics::NewProp_PickupSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickups_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickups_Statics::NewProp_PickUp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickups_Statics::NewProp_PickUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickups_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickups_Statics::NewProp_PickupSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickups_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickups>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickups_Statics::ClassParams = {
		&APickups::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickups_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickups_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickups_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickups_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickups()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickups_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickups, 1985633786);
	template<> MYPROJECT2_API UClass* StaticClass<APickups>()
	{
		return APickups::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickups(Z_Construct_UClass_APickups, &APickups::StaticClass, TEXT("/Script/MyProject2"), TEXT("APickups"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickups);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
