// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef MYPROJECT2_Pickups_generated_h
#error "Pickups.generated.h already included, missing '#pragma once' in Pickups.h"
#endif
#define MYPROJECT2_Pickups_generated_h

#define MyProject2_Source_MyProject2_Pickups_h_19_SPARSE_DATA
#define MyProject2_Source_MyProject2_Pickups_h_19_RPC_WRAPPERS \
	virtual void OnPickupCollected_Implementation(); \
 \
	DECLARE_FUNCTION(execOnActorOverlap); \
	DECLARE_FUNCTION(execOnPickupCollected);


#define MyProject2_Source_MyProject2_Pickups_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnPickupCollected_Implementation(); \
 \
	DECLARE_FUNCTION(execOnActorOverlap); \
	DECLARE_FUNCTION(execOnPickupCollected);


#define MyProject2_Source_MyProject2_Pickups_h_19_EVENT_PARMS
#define MyProject2_Source_MyProject2_Pickups_h_19_CALLBACK_WRAPPERS
#define MyProject2_Source_MyProject2_Pickups_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickups(); \
	friend struct Z_Construct_UClass_APickups_Statics; \
public: \
	DECLARE_CLASS(APickups, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(APickups)


#define MyProject2_Source_MyProject2_Pickups_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAPickups(); \
	friend struct Z_Construct_UClass_APickups_Statics; \
public: \
	DECLARE_CLASS(APickups, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(APickups)


#define MyProject2_Source_MyProject2_Pickups_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickups(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickups) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickups); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickups); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickups(APickups&&); \
	NO_API APickups(const APickups&); \
public:


#define MyProject2_Source_MyProject2_Pickups_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickups(APickups&&); \
	NO_API APickups(const APickups&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickups); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickups); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickups)


#define MyProject2_Source_MyProject2_Pickups_h_19_PRIVATE_PROPERTY_OFFSET
#define MyProject2_Source_MyProject2_Pickups_h_16_PROLOG \
	MyProject2_Source_MyProject2_Pickups_h_19_EVENT_PARMS


#define MyProject2_Source_MyProject2_Pickups_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_Pickups_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_Pickups_h_19_SPARSE_DATA \
	MyProject2_Source_MyProject2_Pickups_h_19_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_Pickups_h_19_CALLBACK_WRAPPERS \
	MyProject2_Source_MyProject2_Pickups_h_19_INCLASS \
	MyProject2_Source_MyProject2_Pickups_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_Pickups_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_Pickups_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_Pickups_h_19_SPARSE_DATA \
	MyProject2_Source_MyProject2_Pickups_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_Pickups_h_19_CALLBACK_WRAPPERS \
	MyProject2_Source_MyProject2_Pickups_h_19_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_Pickups_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class APickups>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_Pickups_h


#define FOREACH_ENUM_EPICKUPTYPE(op) \
	op(EPickUpType::Ammo) \
	op(EPickUpType::Health) \
	op(EPickUpType::DamageMultiplier) 

enum class EPickUpType : uint8;
template<> MYPROJECT2_API UEnum* StaticEnum<EPickUpType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
