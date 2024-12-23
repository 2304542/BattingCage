// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Batter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef BATTINGCAGE_Batter_generated_h
#error "Batter.generated.h already included, missing '#pragma once' in Batter.h"
#endif
#define BATTINGCAGE_Batter_generated_h

#define FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwing);


#define FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatter(); \
	friend struct Z_Construct_UClass_ABatter_Statics; \
public: \
	DECLARE_CLASS(ABatter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BattingCage"), NO_API) \
	DECLARE_SERIALIZER(ABatter)


#define FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABatter(ABatter&&); \
	ABatter(const ABatter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatter) \
	NO_API virtual ~ABatter();


#define FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_9_PROLOG
#define FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTINGCAGE_API UClass* StaticClass<class ABatter>();

#define FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDataConfig(); \
	friend struct Z_Construct_UClass_UInputDataConfig_Statics; \
public: \
	DECLARE_CLASS(UInputDataConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BattingCage"), NO_API) \
	DECLARE_SERIALIZER(UInputDataConfig)


#define FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_56_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDataConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputDataConfig(UInputDataConfig&&); \
	UInputDataConfig(const UInputDataConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDataConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDataConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDataConfig) \
	NO_API virtual ~UInputDataConfig();


#define FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_53_PROLOG
#define FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_56_INCLASS_NO_PURE_DECLS \
	FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTINGCAGE_API UClass* StaticClass<class UInputDataConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
