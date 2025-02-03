// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Asteroids/AsteroidsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroidsGameMode() {}

// Begin Cross Module References
ASTEROIDS_API UClass* Z_Construct_UClass_AAsteroidsGameMode();
ASTEROIDS_API UClass* Z_Construct_UClass_AAsteroidsGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Asteroids();
// End Cross Module References

// Begin Class AAsteroidsGameMode
void AAsteroidsGameMode::StaticRegisterNativesAAsteroidsGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAsteroidsGameMode);
UClass* Z_Construct_UClass_AAsteroidsGameMode_NoRegister()
{
	return AAsteroidsGameMode::StaticClass();
}
struct Z_Construct_UClass_AAsteroidsGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AsteroidsGameMode.h" },
		{ "ModuleRelativePath", "AsteroidsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsteroidsGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAsteroidsGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Asteroids,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidsGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsteroidsGameMode_Statics::ClassParams = {
	&AAsteroidsGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsteroidsGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAsteroidsGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAsteroidsGameMode()
{
	if (!Z_Registration_Info_UClass_AAsteroidsGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAsteroidsGameMode.OuterSingleton, Z_Construct_UClass_AAsteroidsGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAsteroidsGameMode.OuterSingleton;
}
template<> ASTEROIDS_API UClass* StaticClass<AAsteroidsGameMode>()
{
	return AAsteroidsGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAsteroidsGameMode);
AAsteroidsGameMode::~AAsteroidsGameMode() {}
// End Class AAsteroidsGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_robbi_source_unreal_asteroids_Asteroids_Source_Asteroids_AsteroidsGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAsteroidsGameMode, AAsteroidsGameMode::StaticClass, TEXT("AAsteroidsGameMode"), &Z_Registration_Info_UClass_AAsteroidsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsteroidsGameMode), 2312978822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_robbi_source_unreal_asteroids_Asteroids_Source_Asteroids_AsteroidsGameMode_h_3676294403(TEXT("/Script/Asteroids"),
	Z_CompiledInDeferFile_FID_Users_robbi_source_unreal_asteroids_Asteroids_Source_Asteroids_AsteroidsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_robbi_source_unreal_asteroids_Asteroids_Source_Asteroids_AsteroidsGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
