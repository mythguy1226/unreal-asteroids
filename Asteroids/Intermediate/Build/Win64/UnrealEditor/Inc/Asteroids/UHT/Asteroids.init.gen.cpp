// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsteroids_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Asteroids;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Asteroids()
	{
		if (!Z_Registration_Info_UPackage__Script_Asteroids.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Asteroids",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xD4AACB6A,
				0x4D83A87C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Asteroids.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Asteroids.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Asteroids(Z_Construct_UPackage__Script_Asteroids, TEXT("/Script/Asteroids"), Z_Registration_Info_UPackage__Script_Asteroids, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD4AACB6A, 0x4D83A87C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
