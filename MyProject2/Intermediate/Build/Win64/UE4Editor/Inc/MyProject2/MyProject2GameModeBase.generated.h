// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MYPROJECT2_MyProject2GameModeBase_generated_h
#error "MyProject2GameModeBase.generated.h already included, missing '#pragma once' in MyProject2GameModeBase.h"
#endif
#define MYPROJECT2_MyProject2GameModeBase_generated_h

#define MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_SPARSE_DATA
#define MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveSpawnedLocation);


#define MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveSpawnedLocation);


#define MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject2GameModeBase(); \
	friend struct Z_Construct_UClass_AMyProject2GameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyProject2GameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMyProject2GameModeBase)


#define MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject2GameModeBase(); \
	friend struct Z_Construct_UClass_AMyProject2GameModeBase_Statics; \
public: \
	DECLARE_CLASS(AMyProject2GameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMyProject2GameModeBase)


#define MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject2GameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject2GameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject2GameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject2GameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject2GameModeBase(AMyProject2GameModeBase&&); \
	NO_API AMyProject2GameModeBase(const AMyProject2GameModeBase&); \
public:


#define MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject2GameModeBase(AMyProject2GameModeBase&&); \
	NO_API AMyProject2GameModeBase(const AMyProject2GameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject2GameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject2GameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject2GameModeBase)


#define MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickupLocations() { return STRUCT_OFFSET(AMyProject2GameModeBase, PickupLocations); } \
	FORCEINLINE static uint32 __PPO__PickupClasses() { return STRUCT_OFFSET(AMyProject2GameModeBase, PickupClasses); } \
	FORCEINLINE static uint32 __PPO__PickUpSpawnInterval() { return STRUCT_OFFSET(AMyProject2GameModeBase, PickUpSpawnInterval); } \
	FORCEINLINE static uint32 __PPO__HUDREF() { return STRUCT_OFFSET(AMyProject2GameModeBase, HUDREF); } \
	FORCEINLINE static uint32 __PPO__BackGroundMusic() { return STRUCT_OFFSET(AMyProject2GameModeBase, BackGroundMusic); } \
	FORCEINLINE static uint32 __PPO__BackGroundMusicVolume() { return STRUCT_OFFSET(AMyProject2GameModeBase, BackGroundMusicVolume); } \
	FORCEINLINE static uint32 __PPO__BackGroundMusicComponent() { return STRUCT_OFFSET(AMyProject2GameModeBase, BackGroundMusicComponent); }


#define MyProject2_Source_MyProject2_MyProject2GameModeBase_h_13_PROLOG
#define MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_SPARSE_DATA \
	MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_INCLASS \
	MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_SPARSE_DATA \
	MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_MyProject2GameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class AMyProject2GameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_MyProject2GameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
