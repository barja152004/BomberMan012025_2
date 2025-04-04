// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan012025/Public/BloqueAgua.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloqueAgua() {}

// Begin Cross Module References
BOMBERMAN012025_API UClass* Z_Construct_UClass_ABloque();
BOMBERMAN012025_API UClass* Z_Construct_UClass_ABloqueAgua();
BOMBERMAN012025_API UClass* Z_Construct_UClass_ABloqueAgua_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan012025();
// End Cross Module References

// Begin Class ABloqueAgua
void ABloqueAgua::StaticRegisterNativesABloqueAgua()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloqueAgua);
UClass* Z_Construct_UClass_ABloqueAgua_NoRegister()
{
	return ABloqueAgua::StaticClass();
}
struct Z_Construct_UClass_ABloqueAgua_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BloqueAgua.h" },
		{ "ModuleRelativePath", "Public/BloqueAgua.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloqueAgua>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloqueAgua_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABloque,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAgua_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloqueAgua_Statics::ClassParams = {
	&ABloqueAgua::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloqueAgua_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloqueAgua_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloqueAgua()
{
	if (!Z_Registration_Info_UClass_ABloqueAgua.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloqueAgua.OuterSingleton, Z_Construct_UClass_ABloqueAgua_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloqueAgua.OuterSingleton;
}
template<> BOMBERMAN012025_API UClass* StaticClass<ABloqueAgua>()
{
	return ABloqueAgua::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloqueAgua);
ABloqueAgua::~ABloqueAgua() {}
// End Class ABloqueAgua

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_Public_BloqueAgua_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloqueAgua, ABloqueAgua::StaticClass, TEXT("ABloqueAgua"), &Z_Registration_Info_UClass_ABloqueAgua, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloqueAgua), 2248788742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_Public_BloqueAgua_h_1051572811(TEXT("/Script/BomberMan012025"),
	Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_Public_BloqueAgua_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_Public_BloqueAgua_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
