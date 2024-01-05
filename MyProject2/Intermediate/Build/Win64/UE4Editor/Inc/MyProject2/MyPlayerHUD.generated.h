// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_MyPlayerHUD_generated_h
#error "MyPlayerHUD.generated.h already included, missing '#pragma once' in MyPlayerHUD.h"
#endif
#define MYPROJECT2_MyPlayerHUD_generated_h

#define MyProject2_Source_MyProject2_MyPlayerHUD_h_19_SPARSE_DATA
#define MyProject2_Source_MyProject2_MyPlayerHUD_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRemainingTime); \
	DECLARE_FUNCTION(execUpdatePlayerScore); \
	DECLARE_FUNCTION(execGetFormattedTime); \
	DECLARE_FUNCTION(execStopTimer); \
	DECLARE_FUNCTION(execStartTimer);


#define MyProject2_Source_MyProject2_MyPlayerHUD_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRemainingTime); \
	DECLARE_FUNCTION(execUpdatePlayerScore); \
	DECLARE_FUNCTION(execGetFormattedTime); \
	DECLARE_FUNCTION(execStopTimer); \
	DECLARE_FUNCTION(execStartTimer);


#define MyProject2_Source_MyProject2_MyPlayerHUD_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyPlayerHUD(); \
	friend struct Z_Construct_UClass_UMyPlayerHUD_Statics; \
public: \
	DECLARE_CLASS(UMyPlayerHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(UMyPlayerHUD)


#define MyProject2_Source_MyProject2_MyPlayerHUD_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUMyPlayerHUD(); \
	friend struct Z_Construct_UClass_UMyPlayerHUD_Statics; \
public: \
	DECLARE_CLASS(UMyPlayerHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(UMyPlayerHUD)


#define MyProject2_Source_MyProject2_MyPlayerHUD_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPlayerHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPlayerHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPlayerHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPlayerHUD(UMyPlayerHUD&&); \
	NO_API UMyPlayerHUD(const UMyPlayerHUD&); \
public:


#define MyProject2_Source_MyProject2_MyPlayerHUD_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyPlayerHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyPlayerHUD(UMyPlayerHUD&&); \
	NO_API UMyPlayerHUD(const UMyPlayerHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyPlayerHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyPlayerHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyPlayerHUD)


#define MyProject2_Source_MyProject2_MyPlayerHUD_h_19_PRIVATE_PROPERTY_OFFSET
#define MyProject2_Source_MyProject2_MyPlayerHUD_h_16_PROLOG
#define MyProject2_Source_MyProject2_MyPlayerHUD_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_MyPlayerHUD_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_MyPlayerHUD_h_19_SPARSE_DATA \
	MyProject2_Source_MyProject2_MyPlayerHUD_h_19_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_MyPlayerHUD_h_19_INCLASS \
	MyProject2_Source_MyProject2_MyPlayerHUD_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_MyPlayerHUD_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_MyPlayerHUD_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_MyPlayerHUD_h_19_SPARSE_DATA \
	MyProject2_Source_MyProject2_MyPlayerHUD_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_MyPlayerHUD_h_19_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_MyPlayerHUD_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class UMyPlayerHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_MyPlayerHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
