// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattingCage/BaseballActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseballActor() {}

// Begin Cross Module References
BATTINGCAGE_API UClass* Z_Construct_UClass_ABaseballActor();
BATTINGCAGE_API UClass* Z_Construct_UClass_ABaseballActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BattingCage();
// End Cross Module References

// Begin Class ABaseballActor
void ABaseballActor::StaticRegisterNativesABaseballActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseballActor);
UClass* Z_Construct_UClass_ABaseballActor_NoRegister()
{
	return ABaseballActor::StaticClass();
}
struct Z_Construct_UClass_ABaseballActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BaseballActor.h" },
		{ "ModuleRelativePath", "BaseballActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseballActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseballActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BattingCage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseballActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseballActor_Statics::ClassParams = {
	&ABaseballActor::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseballActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseballActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseballActor()
{
	if (!Z_Registration_Info_UClass_ABaseballActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseballActor.OuterSingleton, Z_Construct_UClass_ABaseballActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseballActor.OuterSingleton;
}
template<> BATTINGCAGE_API UClass* StaticClass<ABaseballActor>()
{
	return ABaseballActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseballActor);
ABaseballActor::~ABaseballActor() {}
// End Class ABaseballActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_Source_BattingCage_BaseballActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseballActor, ABaseballActor::StaticClass, TEXT("ABaseballActor"), &Z_Registration_Info_UClass_ABaseballActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseballActor), 2092042982U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_Source_BattingCage_BaseballActor_h_639433147(TEXT("/Script/BattingCage"),
	Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_Source_BattingCage_BaseballActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_Source_BattingCage_BaseballActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
