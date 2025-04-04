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
BOMBERMAN012025_API UClass* Z_Construct_UClass_ABloque_NoRegister();
BOMBERMAN012025_API UClass* Z_Construct_UClass_ABomberMan012025GameMode();
BOMBERMAN012025_API UClass* Z_Construct_UClass_ABomberMan012025GameMode_NoRegister();
BOMBERMAN012025_API UClass* Z_Construct_UClass_AEnemigo_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Enemigos_MetaData[] = {
		{ "Category", "Gesti\xef\xbf\xbdn de Objetos" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Arrays para almacenar enemigos y bloques\n" },
#endif
		{ "ModuleRelativePath", "BomberMan012025GameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Arrays para almacenar enemigos y bloques" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bloques_MetaData[] = {
		{ "Category", "Gesti\xef\xbf\xbdn de Objetos" },
		{ "ModuleRelativePath", "BomberMan012025GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Enemigos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Enemigos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Bloques_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bloques;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan012025GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan012025GameMode_Statics::NewProp_Enemigos_Inner = { "Enemigos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemigo_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABomberMan012025GameMode_Statics::NewProp_Enemigos = { "Enemigos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan012025GameMode, Enemigos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Enemigos_MetaData), NewProp_Enemigos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberMan012025GameMode_Statics::NewProp_Bloques_Inner = { "Bloques", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABloque_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABomberMan012025GameMode_Statics::NewProp_Bloques = { "Bloques", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABomberMan012025GameMode, Bloques), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bloques_MetaData), NewProp_Bloques_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberMan012025GameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan012025GameMode_Statics::NewProp_Enemigos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan012025GameMode_Statics::NewProp_Enemigos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan012025GameMode_Statics::NewProp_Bloques_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberMan012025GameMode_Statics::NewProp_Bloques,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan012025GameMode_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ABomberMan012025GameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan012025GameMode_Statics::PropPointers),
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
		{ Z_Construct_UClass_ABomberMan012025GameMode, ABomberMan012025GameMode::StaticClass, TEXT("ABomberMan012025GameMode"), &Z_Registration_Info_UClass_ABomberMan012025GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan012025GameMode), 3455843167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_BomberMan012025GameMode_h_3560326851(TEXT("/Script/BomberMan012025"),
	Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_BomberMan012025GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BomberMan012025_Source_BomberMan012025_BomberMan012025GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
