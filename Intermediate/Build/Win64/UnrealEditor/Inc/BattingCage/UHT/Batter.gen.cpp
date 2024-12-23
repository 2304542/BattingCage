// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattingCage/Batter.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatter() {}

// Begin Cross Module References
BATTINGCAGE_API UClass* Z_Construct_UClass_ABatter();
BATTINGCAGE_API UClass* Z_Construct_UClass_ABatter_NoRegister();
BATTINGCAGE_API UClass* Z_Construct_UClass_UInputDataConfig();
BATTINGCAGE_API UClass* Z_Construct_UClass_UInputDataConfig_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_BattingCage();
// End Cross Module References

// Begin Class ABatter Function Swing
struct Z_Construct_UFunction_ABatter_Swing_Statics
{
	struct Batter_eventSwing_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adding the UFUNCTION() macro before the function you want to bind seems to be important, even if it's empty.\n" },
#endif
		{ "ModuleRelativePath", "Batter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adding the UFUNCTION() macro before the function you want to bind seems to be important, even if it's empty." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABatter_Swing_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Batter_eventSwing_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatter_Swing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatter_Swing_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABatter_Swing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatter_Swing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatter, nullptr, "Swing", nullptr, nullptr, Z_Construct_UFunction_ABatter_Swing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatter_Swing_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABatter_Swing_Statics::Batter_eventSwing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABatter_Swing_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABatter_Swing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABatter_Swing_Statics::Batter_eventSwing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABatter_Swing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABatter_Swing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABatter::execSwing)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Swing(Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class ABatter Function Swing

// Begin Class ABatter
void ABatter::StaticRegisterNativesABatter()
{
	UClass* Class = ABatter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Swing", &ABatter::execSwing },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABatter);
UClass* Z_Construct_UClass_ABatter_NoRegister()
{
	return ABatter::StaticClass();
}
struct Z_Construct_UClass_ABatter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Batter.h" },
		{ "ModuleRelativePath", "Batter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "Category", "EnhancedInput" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext for player input. */" },
#endif
		{ "ModuleRelativePath", "Batter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext for player input." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SwingAction_MetaData[] = {
		{ "Category", "Batter" },
		{ "ModuleRelativePath", "Batter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputActions_MetaData[] = {
		{ "Category", "EnhancedInput" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Config for avaiable input actions - create custom InputDataConfig object to insert here. */" },
#endif
		{ "ModuleRelativePath", "Batter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Config for avaiable input actions - create custom InputDataConfig object to insert here." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SwingAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABatter_Swing, "Swing" }, // 877471503
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatter_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatter, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatter_Statics::NewProp_SwingAction = { "SwingAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatter, SwingAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SwingAction_MetaData), NewProp_SwingAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatter_Statics::NewProp_InputActions = { "InputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatter, InputActions), Z_Construct_UClass_UInputDataConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputActions_MetaData), NewProp_InputActions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatter_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatter_Statics::NewProp_SwingAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatter_Statics::NewProp_InputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABatter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BattingCage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABatter_Statics::ClassParams = {
	&ABatter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABatter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABatter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABatter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABatter()
{
	if (!Z_Registration_Info_UClass_ABatter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABatter.OuterSingleton, Z_Construct_UClass_ABatter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABatter.OuterSingleton;
}
template<> BATTINGCAGE_API UClass* StaticClass<ABatter>()
{
	return ABatter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABatter);
ABatter::~ABatter() {}
// End Class ABatter

// Begin Class UInputDataConfig
void UInputDataConfig::StaticRegisterNativesUInputDataConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputDataConfig);
UClass* Z_Construct_UClass_UInputDataConfig_NoRegister()
{
	return UInputDataConfig::StaticClass();
}
struct Z_Construct_UClass_UInputDataConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Batter.h" },
		{ "ModuleRelativePath", "Batter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Move_MetaData[] = {
		{ "Category", "InputDataConfig" },
		{ "ModuleRelativePath", "Batter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Look_MetaData[] = {
		{ "Category", "InputDataConfig" },
		{ "ModuleRelativePath", "Batter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shoot_MetaData[] = {
		{ "Category", "InputDataConfig" },
		{ "ModuleRelativePath", "Batter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Look;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Shoot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputDataConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputDataConfig_Statics::NewProp_Move = { "Move", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDataConfig, Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Move_MetaData), NewProp_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputDataConfig_Statics::NewProp_Look = { "Look", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDataConfig, Look), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Look_MetaData), NewProp_Look_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputDataConfig_Statics::NewProp_Shoot = { "Shoot", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInputDataConfig, Shoot), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shoot_MetaData), NewProp_Shoot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputDataConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDataConfig_Statics::NewProp_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDataConfig_Statics::NewProp_Look,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputDataConfig_Statics::NewProp_Shoot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDataConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInputDataConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_BattingCage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDataConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputDataConfig_Statics::ClassParams = {
	&UInputDataConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UInputDataConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UInputDataConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInputDataConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UInputDataConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInputDataConfig()
{
	if (!Z_Registration_Info_UClass_UInputDataConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputDataConfig.OuterSingleton, Z_Construct_UClass_UInputDataConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInputDataConfig.OuterSingleton;
}
template<> BATTINGCAGE_API UClass* StaticClass<UInputDataConfig>()
{
	return UInputDataConfig::StaticClass();
}
UInputDataConfig::UInputDataConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInputDataConfig);
UInputDataConfig::~UInputDataConfig() {}
// End Class UInputDataConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABatter, ABatter::StaticClass, TEXT("ABatter"), &Z_Registration_Info_UClass_ABatter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABatter), 2913893578U) },
		{ Z_Construct_UClass_UInputDataConfig, UInputDataConfig::StaticClass, TEXT("UInputDataConfig"), &Z_Registration_Info_UClass_UInputDataConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputDataConfig), 1993219014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_470321328(TEXT("/Script/BattingCage"),
	Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
