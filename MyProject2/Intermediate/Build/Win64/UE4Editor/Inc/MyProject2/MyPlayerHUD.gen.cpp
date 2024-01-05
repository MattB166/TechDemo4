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
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMyPlayerHUD::execGetRemainingTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRemainingTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyPlayerHUD::execUpdatePlayerScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePlayerScore(Z_Param_NewScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyPlayerHUD::execGetFormattedTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetFormattedTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyPlayerHUD::execStopTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyPlayerHUD::execStartTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyPlayerHUD::execPlayDamageAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDamageAnim();
		P_NATIVE_END;
	}
	void UMyPlayerHUD::StaticRegisterNativesUMyPlayerHUD()
	{
		UClass* Class = UMyPlayerHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFormattedTime", &UMyPlayerHUD::execGetFormattedTime },
			{ "GetRemainingTime", &UMyPlayerHUD::execGetRemainingTime },
			{ "PlayDamageAnim", &UMyPlayerHUD::execPlayDamageAnim },
			{ "StartTimer", &UMyPlayerHUD::execStartTimer },
			{ "StopTimer", &UMyPlayerHUD::execStopTimer },
			{ "UpdatePlayerScore", &UMyPlayerHUD::execUpdatePlayerScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyPlayerHUD_GetFormattedTime_Statics
	{
		struct MyPlayerHUD_eventGetFormattedTime_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyPlayerHUD_GetFormattedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayerHUD_eventGetFormattedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyPlayerHUD_GetFormattedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyPlayerHUD_GetFormattedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyPlayerHUD_GetFormattedTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MyPlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPlayerHUD_GetFormattedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPlayerHUD, nullptr, "GetFormattedTime", nullptr, nullptr, sizeof(MyPlayerHUD_eventGetFormattedTime_Parms), Z_Construct_UFunction_UMyPlayerHUD_GetFormattedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPlayerHUD_GetFormattedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyPlayerHUD_GetFormattedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPlayerHUD_GetFormattedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyPlayerHUD_GetFormattedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyPlayerHUD_GetFormattedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyPlayerHUD_GetRemainingTime_Statics
	{
		struct MyPlayerHUD_eventGetRemainingTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyPlayerHUD_GetRemainingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayerHUD_eventGetRemainingTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyPlayerHUD_GetRemainingTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyPlayerHUD_GetRemainingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyPlayerHUD_GetRemainingTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MyPlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPlayerHUD_GetRemainingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPlayerHUD, nullptr, "GetRemainingTime", nullptr, nullptr, sizeof(MyPlayerHUD_eventGetRemainingTime_Parms), Z_Construct_UFunction_UMyPlayerHUD_GetRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPlayerHUD_GetRemainingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyPlayerHUD_GetRemainingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPlayerHUD_GetRemainingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyPlayerHUD_GetRemainingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyPlayerHUD_GetRemainingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyPlayerHUD_PlayDamageAnim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyPlayerHUD_PlayDamageAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Anims" },
		{ "ModuleRelativePath", "MyPlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPlayerHUD_PlayDamageAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPlayerHUD, nullptr, "PlayDamageAnim", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyPlayerHUD_PlayDamageAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPlayerHUD_PlayDamageAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyPlayerHUD_PlayDamageAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyPlayerHUD_PlayDamageAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyPlayerHUD_StartTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyPlayerHUD_StartTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MyPlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPlayerHUD_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPlayerHUD, nullptr, "StartTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyPlayerHUD_StartTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPlayerHUD_StartTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyPlayerHUD_StartTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyPlayerHUD_StartTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyPlayerHUD_StopTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyPlayerHUD_StopTimer_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MyPlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPlayerHUD_StopTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPlayerHUD, nullptr, "StopTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyPlayerHUD_StopTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPlayerHUD_StopTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyPlayerHUD_StopTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyPlayerHUD_StopTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyPlayerHUD_UpdatePlayerScore_Statics
	{
		struct MyPlayerHUD_eventUpdatePlayerScore_Parms
		{
			int32 NewScore;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyPlayerHUD_UpdatePlayerScore_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyPlayerHUD_eventUpdatePlayerScore_Parms, NewScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyPlayerHUD_UpdatePlayerScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyPlayerHUD_UpdatePlayerScore_Statics::NewProp_NewScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyPlayerHUD_UpdatePlayerScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "MyPlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPlayerHUD_UpdatePlayerScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPlayerHUD, nullptr, "UpdatePlayerScore", nullptr, nullptr, sizeof(MyPlayerHUD_eventUpdatePlayerScore_Parms), Z_Construct_UFunction_UMyPlayerHUD_UpdatePlayerScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPlayerHUD_UpdatePlayerScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyPlayerHUD_UpdatePlayerScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPlayerHUD_UpdatePlayerScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyPlayerHUD_UpdatePlayerScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyPlayerHUD_UpdatePlayerScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyPlayerHUD_NoRegister()
	{
		return UMyPlayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_UMyPlayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyPlayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyPlayerHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyPlayerHUD_GetFormattedTime, "GetFormattedTime" }, // 569472456
		{ &Z_Construct_UFunction_UMyPlayerHUD_GetRemainingTime, "GetRemainingTime" }, // 3675637249
		{ &Z_Construct_UFunction_UMyPlayerHUD_PlayDamageAnim, "PlayDamageAnim" }, // 1551835839
		{ &Z_Construct_UFunction_UMyPlayerHUD_StartTimer, "StartTimer" }, // 1114946206
		{ &Z_Construct_UFunction_UMyPlayerHUD_StopTimer, "StopTimer" }, // 1317343255
		{ &Z_Construct_UFunction_UMyPlayerHUD_UpdatePlayerScore, "UpdatePlayerScore" }, // 780682506
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_HitTrack_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "MyPlayerHUD" },
		{ "ModuleRelativePath", "MyPlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_HitTrack = { "HitTrack", nullptr, (EPropertyFlags)0x0010000000022015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPlayerHUD, HitTrack), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_HitTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_HitTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_PlayerScore_MetaData[] = {
		{ "Category", "Score" },
		{ "ModuleRelativePath", "MyPlayerHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyPlayerHUD, PlayerScore), METADATA_PARAMS(Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_PlayerScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_PlayerScore_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyPlayerHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_OwningPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_HitTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPlayerHUD_Statics::NewProp_PlayerScore,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyPlayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyPlayerHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyPlayerHUD_Statics::ClassParams = {
		&UMyPlayerHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyPlayerHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UMyPlayerHUD, 1406090706);
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
