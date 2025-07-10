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
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "BaseballActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// declaration of static mesh \n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseballActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "declaration of static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "Category", "BaseballActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Declaration of sphere collision\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseballActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declaration of sphere collision" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseballActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseballActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseballActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseballActor_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseballActor, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseballActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseballActor_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseballActor_Statics::NewProp_SphereComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseballActor_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ABaseballActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseballActor_Statics::PropPointers),
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
		{ Z_Construct_UClass_ABaseballActor, ABaseballActor::StaticClass, TEXT("ABaseballActor"), &Z_Registration_Info_UClass_ABaseballActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseballActor), 3951416583U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_Source_BattingCage_BaseballActor_h_875683275(TEXT("/Script/BattingCage"),
	Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_Source_BattingCage_BaseballActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_Source_BattingCage_BaseballActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
