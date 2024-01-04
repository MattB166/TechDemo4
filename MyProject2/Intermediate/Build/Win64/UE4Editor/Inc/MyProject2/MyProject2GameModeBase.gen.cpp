// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject2/MyProject2GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyProject2GameModeBase() {}
// Cross Module References
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyProject2GameModeBase_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_AMyProject2GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyProject2();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MYPROJECT2_API UClass* Z_Construct_UClass_UMyPlayerHUD_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMyProject2GameModeBase::execRemoveSpawnedLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSpawnedLocation(Z_Param_Out_Location);
		P_NATIVE_END;
	}
	void AMyProject2GameModeBase::StaticRegisterNativesAMyProject2GameModeBase()
	{
		UClass* Class = AMyProject2GameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveSpawnedLocation", &AMyProject2GameModeBase::execRemoveSpawnedLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation_Statics
	{
		struct MyProject2GameModeBase_eventRemoveSpawnedLocation_Parms
		{
			FVector Location;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyProject2GameModeBase_eventRemoveSpawnedLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyProject2GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyProject2GameModeBase, nullptr, "RemoveSpawnedLocation", nullptr, nullptr, sizeof(MyProject2GameModeBase_eventRemoveSpawnedLocation_Parms), Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyProject2GameModeBase_NoRegister()
	{
		return AMyProject2GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMyProject2GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PickupLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PickupLocations;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PickupClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PickupClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickUpSpawnInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PickUpSpawnInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDREF_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDREF;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyProject2GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyProject2GameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyProject2GameModeBase_RemoveSpawnedLocation, "RemoveSpawnedLocation" }, // 3521907264
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject2GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MyProject2GameModeBase.h" },
		{ "ModuleRelativePath", "MyProject2GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickupLocations_Inner = { "PickupLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickupLocations_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "MyProject2GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickupLocations = { "PickupLocations", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProject2GameModeBase, PickupLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickupLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickupLocations_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickupClasses_Inner = { "PickupClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickupClasses_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "MyProject2GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickupClasses = { "PickupClasses", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProject2GameModeBase, PickupClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickupClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickupClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickUpSpawnInterval_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "MyProject2GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickUpSpawnInterval = { "PickUpSpawnInterval", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProject2GameModeBase, PickUpSpawnInterval), METADATA_PARAMS(Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickUpSpawnInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickUpSpawnInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_HUDREF_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyProject2GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_HUDREF = { "HUDREF", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyProject2GameModeBase, HUDREF), Z_Construct_UClass_UMyPlayerHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_HUDREF_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_HUDREF_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyProject2GameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickupLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickupLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickupClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickupClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_PickUpSpawnInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyProject2GameModeBase_Statics::NewProp_HUDREF,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyProject2GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyProject2GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyProject2GameModeBase_Statics::ClassParams = {
		&AMyProject2GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyProject2GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject2GameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyProject2GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyProject2GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyProject2GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyProject2GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyProject2GameModeBase, 3368672426);
	template<> MYPROJECT2_API UClass* StaticClass<AMyProject2GameModeBase>()
	{
		return AMyProject2GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyProject2GameModeBase(Z_Construct_UClass_AMyProject2GameModeBase, &AMyProject2GameModeBase::StaticClass, TEXT("/Script/MyProject2"), TEXT("AMyProject2GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyProject2GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
