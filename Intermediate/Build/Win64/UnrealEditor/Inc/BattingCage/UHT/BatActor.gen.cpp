// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattingCage/BatActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatActor() {}

// Begin Cross Module References
BATTINGCAGE_API UClass* Z_Construct_UClass_ABatActor();
BATTINGCAGE_API UClass* Z_Construct_UClass_ABatActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BattingCage();
// End Cross Module References

// Begin Class ABatActor
void ABatActor::StaticRegisterNativesABatActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABatActor);
UClass* Z_Construct_UClass_ABatActor_NoRegister()
{
	return ABatActor::StaticClass();
}
struct Z_Construct_UClass_ABatActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BatActor.h" },
		{ "ModuleRelativePath", "BatActor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABatActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BattingCage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABatActor_Statics::ClassParams = {
	&ABatActor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABatActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABatActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABatActor()
{
	if (!Z_Registration_Info_UClass_ABatActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABatActor.OuterSingleton, Z_Construct_UClass_ABatActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABatActor.OuterSingleton;
}
template<> BATTINGCAGE_API UClass* StaticClass<ABatActor>()
{
	return ABatActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABatActor);
ABatActor::~ABatActor() {}
// End Class ABatActor

// Begin Registration
<<<<<<< Updated upstream
struct Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_GitHub_BattingCage_5_4_Source_BattingCage_BatActor_h_Statics
=======
struct Z_CompiledInDeferFile_FID_Users_2304542_Documents_Unreal_Projects_BattingCage_5_4_Source_BattingCage_BatActor_h_Statics
>>>>>>> Stashed changes
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABatActor, ABatActor::StaticClass, TEXT("ABatActor"), &Z_Registration_Info_UClass_ABatActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABatActor), 314521781U) },
	};
};
<<<<<<< Updated upstream
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_GitHub_BattingCage_5_4_Source_BattingCage_BatActor_h_2705884381(TEXT("/Script/BattingCage"),
	Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_GitHub_BattingCage_5_4_Source_BattingCage_BatActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_GitHub_BattingCage_5_4_Source_BattingCage_BatActor_h_Statics::ClassInfo),
=======
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2304542_Documents_Unreal_Projects_BattingCage_5_4_Source_BattingCage_BatActor_h_2705884381(TEXT("/Script/BattingCage"),
	Z_CompiledInDeferFile_FID_Users_2304542_Documents_Unreal_Projects_BattingCage_5_4_Source_BattingCage_BatActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304542_Documents_Unreal_Projects_BattingCage_5_4_Source_BattingCage_BatActor_h_Statics::ClassInfo),
>>>>>>> Stashed changes
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
