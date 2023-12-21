// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/MyPlayerHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayerHUD() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_UMyPlayerHUD_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UMyPlayerHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	MYPROJECT2_API UClass* Z_Construct_UClass_APlayer1_NoRegister();
// End Cross Module References
	void UMyPlayerHUD::StaticRegisterNativesUMyPlayerHUD()
	{
	}
	UClass* Z_Construct_UClass_UMyPlayerHUD_NoRegister()
	{
		return UMyPlayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_UMyPlayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyPlayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyPlayerHUD.h" },
		{ "ModuleRelativePath", "MyPlayerHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_OwningPlayer_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "MyPlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPlayerHUD, OwningPlayer), Z_Construct_UClass_APlayer1_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_OwningPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_OwningPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyPlayerHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_OwningPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyPlayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyPlayerHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyPlayerHUD_Statics::ClassParams = {
		&UMyPlayerHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyPlayerHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyPlayerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyPlayerHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyPlayerHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyPlayerHUD, 1827398319);
	template<> MYPROJECT2_API UClass* StaticClass<UMyPlayerHUD>()
	{
		return UMyPlayerHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyPlayerHUD(Z_Construct_UClass_UMyPlayerHUD, &UMyPlayerHUD::StaticClass, TEXT("/Script/MyProject2"), TEXT("UMyPlayerHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyPlayerHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
