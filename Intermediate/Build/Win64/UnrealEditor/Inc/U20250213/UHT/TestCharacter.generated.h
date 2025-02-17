// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef U20250213_TestCharacter_generated_h
#error "TestCharacter.generated.h already included, missing '#pragma once' in TestCharacter.h"
#endif
#define U20250213_TestCharacter_generated_h

#define FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPureFunc); \
	DECLARE_FUNCTION(execCallTestFunc);


#define FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h_18_CALLBACK_WRAPPERS
#define FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestCharacter(); \
	friend struct Z_Construct_UClass_ATestCharacter_Statics; \
public: \
	DECLARE_CLASS(ATestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U20250213"), NO_API) \
	DECLARE_SERIALIZER(ATestCharacter)


#define FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATestCharacter(ATestCharacter&&); \
	ATestCharacter(const ATestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestCharacter) \
	NO_API virtual ~ATestCharacter();


#define FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h_15_PROLOG
#define FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h_18_CALLBACK_WRAPPERS \
	FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U20250213_API UClass* StaticClass<class ATestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE_Project_U20250213_Source_U20250213_Public_TestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
