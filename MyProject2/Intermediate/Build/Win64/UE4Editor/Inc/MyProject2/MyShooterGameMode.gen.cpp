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
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(AMyShooterGameMode::execGetSharedHUDWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetSharedHUDWidget();
		P_NATIVE_END;
	}
	void AMyShooterGameMode::StaticRegisterNativesAMyShooterGameMode()
	{
		UClass* Class = AMyShooterGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSharedHUDWidget", &AMyShooterGameMode::execGetSharedHUDWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget_Statics
	{
		struct MyShooterGameMode_eventGetSharedHUDWidget_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyShooterGameMode_eventGetSharedHUDWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyShooterGameMode, nullptr, "GetSharedHUDWidget", nullptr, nullptr, sizeof(MyShooterGameMode_eventGetSharedHUDWidget_Parms), Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyShooterGameMode_NoRegister()
	{
		return AMyShooterGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyShooterGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedHUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SharedHUDWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyShooterGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyShooterGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyShooterGameMode_GetSharedHUDWidget, "GetSharedHUDWidget" }, // 1825433038
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyShooterGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyShooterGameMode.h" },
		{ "ModuleRelativePath", "MyShooterGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyShooterGameMode_Statics::NewProp_SharedHUDWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "MyShooterGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyShooterGameMode_Statics::NewProp_SharedHUDWidgetClass = { "SharedHUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyShooterGameMode, SharedHUDWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMyShooterGameMode_Statics::NewProp_SharedHUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyShooterGameMode_Statics::NewProp_SharedHUDWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyShooterGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyShooterGameMode_Statics::NewProp_SharedHUDWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyShooterGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyShooterGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyShooterGameMode_Statics::ClassParams = {
		&AMyShooterGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyShooterGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyShooterGameMode_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AMyShooterGameMode, 1631631393);
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
