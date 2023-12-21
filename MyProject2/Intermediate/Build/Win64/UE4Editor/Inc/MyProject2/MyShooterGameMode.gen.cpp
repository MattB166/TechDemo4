// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/MyShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyShooterGameMode() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyShooterGameMode_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
// End Cross Module References
	void AMyShooterGameMode::StaticRegisterNativesAMyShooterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMyShooterGameMode_NoRegister()
	{
		return AMyShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyShooterGameMode.h" },
		{ "ModuleRelativePath", "MyShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyShooterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyShooterGameMode_Statics::ClassParams = {
		&AMyShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyShooterGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyShooterGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyShooterGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyShooterGameMode, 1747528617);
	template<> MYPROJECT2_API UClass* StaticClass<AMyShooterGameMode>()
	{
		return AMyShooterGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyShooterGameMode(Z_Construct_UClass_AMyShooterGameMode, &AMyShooterGameMode::StaticClass, TEXT("/Script/MyProject2"), TEXT("AMyShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
