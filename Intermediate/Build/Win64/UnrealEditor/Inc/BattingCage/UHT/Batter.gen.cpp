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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
<<<<<<< Updated upstream
struct Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_Statics
=======
struct Z_CompiledInDeferFile_FID_Users_2304542_Documents_Unreal_Projects_BattingCage_5_4_Source_BattingCage_Batter_h_Statics
>>>>>>> Stashed changes
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABatter, ABatter::StaticClass, TEXT("ABatter"), &Z_Registration_Info_UClass_ABatter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABatter), 2665189258U) },
	};
};
<<<<<<< Updated upstream
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_2436075055(TEXT("/Script/BattingCage"),
	Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_GitHub_BattingCage_5_4_Source_BattingCage_Batter_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2304542_Documents_Unreal_Projects_BattingCage_5_4_Source_BattingCage_Batter_h_2436075055(TEXT("/Script/BattingCage"),
	Z_CompiledInDeferFile_FID_Users_2304542_Documents_Unreal_Projects_BattingCage_5_4_Source_BattingCage_Batter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304542_Documents_Unreal_Projects_BattingCage_5_4_Source_BattingCage_Batter_h_Statics::ClassInfo),
>>>>>>> Stashed changes
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
