// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MYPROJECT2_Player1_generated_h
#error "Player1.generated.h already included, missing '#pragma once' in Player1.h"
#endif
#define MYPROJECT2_Player1_generated_h

#define MyProject2_Source_MyProject2_Player1_h_19_SPARSE_DATA
#define MyProject2_Source_MyProject2_Player1_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetControllerID); \
	DECLARE_FUNCTION(execGetHealthPercentage); \
	DECLARE_FUNCTION(execResetScore); \
	DECLARE_FUNCTION(execGetPlayerScore); \
	DECLARE_FUNCTION(execUpdateScore); \
	DECLARE_FUNCTION(execOnActorOverlap); \
	DECLARE_FUNCTION(execReload);


#define MyProject2_Source_MyProject2_Player1_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetControllerID); \
	DECLARE_FUNCTION(execGetHealthPercentage); \
	DECLARE_FUNCTION(execResetScore); \
	DECLARE_FUNCTION(execGetPlayerScore); \
	DECLARE_FUNCTION(execUpdateScore); \
	DECLARE_FUNCTION(execOnActorOverlap); \
	DECLARE_FUNCTION(execReload);


#define MyProject2_Source_MyProject2_Player1_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer1(); \
	friend struct Z_Construct_UClass_APlayer1_Statics; \
public: \
	DECLARE_CLASS(APlayer1, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(APlayer1)


#define MyProject2_Source_MyProject2_Player1_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer1(); \
	friend struct Z_Construct_UClass_APlayer1_Statics; \
public: \
	DECLARE_CLASS(APlayer1, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(APlayer1)


#define MyProject2_Source_MyProject2_Player1_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer1(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer1); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer1(APlayer1&&); \
	NO_API APlayer1(const APlayer1&); \
public:


#define MyProject2_Source_MyProject2_Player1_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer1(APlayer1&&); \
	NO_API APlayer1(const APlayer1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer1); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer1); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer1)


#define MyProject2_Source_MyProject2_Player1_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerBlend() { return STRUCT_OFFSET(APlayer1, PlayerBlend); } \
	FORCEINLINE static uint32 __PPO__PlayerJump() { return STRUCT_OFFSET(APlayer1, PlayerJump); } \
	FORCEINLINE static uint32 __PPO__PlayerAim() { return STRUCT_OFFSET(APlayer1, PlayerAim); } \
	FORCEINLINE static uint32 __PPO__PlayerShoot() { return STRUCT_OFFSET(APlayer1, PlayerShoot); } \
	FORCEINLINE static uint32 __PPO__NewDeath() { return STRUCT_OFFSET(APlayer1, NewDeath); } \
	FORCEINLINE static uint32 __PPO__ShotSound() { return STRUCT_OFFSET(APlayer1, ShotSound); } \
	FORCEINLINE static uint32 __PPO__HurtSound() { return STRUCT_OFFSET(APlayer1, HurtSound); } \
	FORCEINLINE static uint32 __PPO__PlayerSMC() { return STRUCT_OFFSET(APlayer1, PlayerSMC); } \
	FORCEINLINE static uint32 __PPO__PlayerHealth() { return STRUCT_OFFSET(APlayer1, PlayerHealth); } \
	FORCEINLINE static uint32 __PPO__TotalAmmo() { return STRUCT_OFFSET(APlayer1, TotalAmmo); } \
	FORCEINLINE static uint32 __PPO__ClipSize() { return STRUCT_OFFSET(APlayer1, ClipSize); } \
	FORCEINLINE static uint32 __PPO__AmmoInClip() { return STRUCT_OFFSET(APlayer1, AmmoInClip); } \
	FORCEINLINE static uint32 __PPO__PlayerScore() { return STRUCT_OFFSET(APlayer1, PlayerScore); } \
	FORCEINLINE static uint32 __PPO__StartPos() { return STRUCT_OFFSET(APlayer1, StartPos); } \
	FORCEINLINE static uint32 __PPO__StartRot() { return STRUCT_OFFSET(APlayer1, StartRot); } \
	FORCEINLINE static uint32 __PPO__GunNiagara() { return STRUCT_OFFSET(APlayer1, GunNiagara); } \
	FORCEINLINE static uint32 __PPO__MySpringArm() { return STRUCT_OFFSET(APlayer1, MySpringArm); } \
	FORCEINLINE static uint32 __PPO__GunMesh() { return STRUCT_OFFSET(APlayer1, GunMesh); }


#define MyProject2_Source_MyProject2_Player1_h_16_PROLOG
#define MyProject2_Source_MyProject2_Player1_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_Player1_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_Player1_h_19_SPARSE_DATA \
	MyProject2_Source_MyProject2_Player1_h_19_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_Player1_h_19_INCLASS \
	MyProject2_Source_MyProject2_Player1_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_Player1_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_Player1_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_Player1_h_19_SPARSE_DATA \
	MyProject2_Source_MyProject2_Player1_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_Player1_h_19_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_Player1_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class APlayer1>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_Player1_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
