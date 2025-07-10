// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BattingCage/TargetOuterActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetOuterActor() {}

// Begin Cross Module References
BATTINGCAGE_API UClass* Z_Construct_UClass_ATargetOuterActor();
BATTINGCAGE_API UClass* Z_Construct_UClass_ATargetOuterActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BattingCage();
// End Cross Module References

// Begin Class ATargetOuterActor
void ATargetOuterActor::StaticRegisterNativesATargetOuterActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATargetOuterActor);
UClass* Z_Construct_UClass_ATargetOuterActor_NoRegister()
{
	return ATargetOuterActor::StaticClass();
}
struct Z_Construct_UClass_ATargetOuterActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TargetOuterActor.h" },
		{ "ModuleRelativePath", "TargetOuterActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_scoreIncrement_MetaData[] = {
		{ "Category", "TargetOuterActor" },
		{ "ModuleRelativePath", "TargetOuterActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_scoreIncrement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetOuterActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATargetOuterActor_Statics::NewProp_scoreIncrement = { "scoreIncrement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATargetOuterActor, scoreIncrement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_scoreIncrement_MetaData), NewProp_scoreIncrement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetOuterActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetOuterActor_Statics::NewProp_scoreIncrement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetOuterActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATargetOuterActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BattingCage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetOuterActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetOuterActor_Statics::ClassParams = {
	&ATargetOuterActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATargetOuterActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATargetOuterActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetOuterActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATargetOuterActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATargetOuterActor()
{
	if (!Z_Registration_Info_UClass_ATargetOuterActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATargetOuterActor.OuterSingleton, Z_Construct_UClass_ATargetOuterActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATargetOuterActor.OuterSingleton;
}
template<> BATTINGCAGE_API UClass* StaticClass<ATargetOuterActor>()
{
	return ATargetOuterActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetOuterActor);
ATargetOuterActor::~ATargetOuterActor() {}
// End Class ATargetOuterActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_BattingCage_BattingCage_Source_BattingCage_TargetOuterActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATargetOuterActor, ATargetOuterActor::StaticClass, TEXT("ATargetOuterActor"), &Z_Registration_Info_UClass_ATargetOuterActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetOuterActor), 3211918015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_BattingCage_BattingCage_Source_BattingCage_TargetOuterActor_h_1497701466(TEXT("/Script/BattingCage"),
	Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_BattingCage_BattingCage_Source_BattingCage_TargetOuterActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304542_OneDrive___Abertay_University_Documents_BattingCage_BattingCage_Source_BattingCage_TargetOuterActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
