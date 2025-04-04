// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan012025/Public/BloqueAcero.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueAcero() {}

// Begin Cross Module References
BOMBERMAN012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN012025_API UClass* Z_Construct_UClass_ABloqueAcero();
BOMBERMAN012025_API UClass* Z_Construct_UClass_ABloqueAcero_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan012025();
// End Cross Module References

// Begin Class ABloqueAcero
void ABloqueAcero::StaticRegisterNativesABloqueAcero()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueAcero);
UClass* Z_Construct_UClass_ABloqueAcero_NoRegister()
{
	return ABloqueAcero::StaticClass();
}
struct Z_Construct_UClass_ABloqueAcero_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueAcero.h" },
		{ "ModuleRelativePath", "Public/BloqueAcero.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueAcero>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueAcero_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAcero_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueAcero_Statics::ClassParams = {
	&ABloqueAcero::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAcero_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueAcero_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueAcero()
{
	if (!Z_Registration_Info_UClass_ABloqueAcero.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueAcero.OuterSingleton, Z_Construct_UClass_ABloqueAcero_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueAcero.OuterSingleton;
}
template<> BOMBERMAN012025_API UClass* StaticClass<ABloqueAcero>()
{
	return ABloqueAcero::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueAcero);
ABloqueAcero::~ABloqueAcero() {}
// End Class ABloqueAcero

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_Public_BloqueAcero_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueAcero, ABloqueAcero::StaticClass, TEXT("ABloqueAcero"), &Z_Registration_Info_UClass_ABloqueAcero, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueAcero), 298636488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_Public_BloqueAcero_h_4039884295(TEXT("/Script/BomberMan012025"),
	Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_Public_BloqueAcero_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_Public_BloqueAcero_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
