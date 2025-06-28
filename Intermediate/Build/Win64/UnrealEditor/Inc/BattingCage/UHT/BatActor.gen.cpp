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
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "BatActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Declaration of StaticMeshComponent\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declaration of StaticMeshComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[] = {
		{ "Category", "BatActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Declaration of SphereCollisionComponent\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declaration of SphereCollisionComponent" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatActor_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABatActor, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComponent_MetaData), NewProp_SphereComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatActor_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatActor_Statics::NewProp_SphereComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABatActor_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ABatActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABatActor_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_Source_BattingCage_BatActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABatActor, ABatActor::StaticClass, TEXT("ABatActor"), &Z_Registration_Info_UClass_ABatActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABatActor), 3508417398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_Source_BattingCage_BatActor_h_1784044974(TEXT("/Script/BattingCage"),
	Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_Source_BattingCage_BatActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_2304542_Documents_GitHub_BattingCage_Source_BattingCage_BatActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
