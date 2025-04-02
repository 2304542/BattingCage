// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattingCage/Batter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatter() {}

// Begin Cross Module References
BATTINGCAGE_API UClass* Z_Construct_UClass_ABatter();
BATTINGCAGE_API UClass* Z_Construct_UClass_ABatter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_BattingCage();
// End Cross Module References

// Begin Class ABatter
void ABatter::StaticRegisterNativesABatter()
{
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
		{ "ModuleRelativePath", "Batter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatter_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatter, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatter_Statics::NewProp_InputMapping,
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
	nullptr,
	Z_Construct_UClass_ABatter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_GitHub_BattingCage_5_4___3_Source_BattingCage_Batter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABatter, ABatter::StaticClass, TEXT("ABatter"), &Z_Registration_Info_UClass_ABatter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABatter), 859549628U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_GitHub_BattingCage_5_4___3_Source_BattingCage_Batter_h_3685836713(TEXT("/Script/BattingCage"),
	Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_GitHub_BattingCage_5_4___3_Source_BattingCage_Batter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_GitHub_BattingCage_5_4___3_Source_BattingCage_Batter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
