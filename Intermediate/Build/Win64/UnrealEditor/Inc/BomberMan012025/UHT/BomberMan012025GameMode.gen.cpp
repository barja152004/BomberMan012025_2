// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan012025/BomberMan012025GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan012025GameMode() {}

// Begin Cross Module References
BOMBERMAN012025_API UClass* Z_Construct_UClass_ABomberMan012025GameMode();
BOMBERMAN012025_API UClass* Z_Construct_UClass_ABomberMan012025GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan012025();
// End Cross Module References

// Begin Class ABomberMan012025GameMode
void ABomberMan012025GameMode::StaticRegisterNativesABomberMan012025GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan012025GameMode);
UClass* Z_Construct_UClass_ABomberMan012025GameMode_NoRegister()
{
	return ABomberMan012025GameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan012025GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declaraci\xef\xbf\xbdn adelantada\n" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan012025GameMode.h" },
		{ "ModuleRelativePath", "BomberMan012025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declaraci\xef\xbf\xbdn adelantada" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan012025GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABomberMan012025GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan012025GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan012025GameMode_Statics::ClassParams = {
	&ABomberMan012025GameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan012025GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan012025GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan012025GameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan012025GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan012025GameMode.OuterSingleton, Z_Construct_UClass_ABomberMan012025GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan012025GameMode.OuterSingleton;
}
template<> BOMBERMAN012025_API UClass* StaticClass<ABomberMan012025GameMode>()
{
	return ABomberMan012025GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan012025GameMode);
ABomberMan012025GameMode::~ABomberMan012025GameMode() {}
// End Class ABomberMan012025GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_BomberMan012025GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan012025GameMode, ABomberMan012025GameMode::StaticClass, TEXT("ABomberMan012025GameMode"), &Z_Registration_Info_UClass_ABomberMan012025GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan012025GameMode), 3799885416U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_BomberMan012025GameMode_h_1542033278(TEXT("/Script/BomberMan012025"),
	Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_BomberMan012025GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_BomberMan012025GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
