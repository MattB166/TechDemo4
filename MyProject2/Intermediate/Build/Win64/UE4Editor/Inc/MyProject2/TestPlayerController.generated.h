// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_TestPlayerController_generated_h
#error "TestPlayerController.generated.h already included, missing '#pragma once' in TestPlayerController.h"
#endif
#define MYPROJECT2_TestPlayerController_generated_h

#define MyProject2_Source_MyProject2_TestPlayerController_h_15_SPARSE_DATA
#define MyProject2_Source_MyProject2_TestPlayerController_h_15_RPC_WRAPPERS
#define MyProject2_Source_MyProject2_TestPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject2_Source_MyProject2_TestPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestPlayerController(); \
	friend struct Z_Construct_UClass_ATestPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATestPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(ATestPlayerController)


#define MyProject2_Source_MyProject2_TestPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATestPlayerController(); \
	friend struct Z_Construct_UClass_ATestPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATestPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(ATestPlayerController)


#define MyProject2_Source_MyProject2_TestPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestPlayerController(ATestPlayerController&&); \
	NO_API ATestPlayerController(const ATestPlayerController&); \
public:


#define MyProject2_Source_MyProject2_TestPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestPlayerController(ATestPlayerController&&); \
	NO_API ATestPlayerController(const ATestPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestPlayerController)


#define MyProject2_Source_MyProject2_TestPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define MyProject2_Source_MyProject2_TestPlayerController_h_12_PROLOG
#define MyProject2_Source_MyProject2_TestPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_TestPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_TestPlayerController_h_15_SPARSE_DATA \
	MyProject2_Source_MyProject2_TestPlayerController_h_15_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_TestPlayerController_h_15_INCLASS \
	MyProject2_Source_MyProject2_TestPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_TestPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_TestPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_TestPlayerController_h_15_SPARSE_DATA \
	MyProject2_Source_MyProject2_TestPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_TestPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_TestPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class ATestPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_TestPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
