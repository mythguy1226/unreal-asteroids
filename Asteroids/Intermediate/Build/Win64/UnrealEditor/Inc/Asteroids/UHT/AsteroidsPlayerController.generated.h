// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsteroidsPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTEROIDS_AsteroidsPlayerController_generated_h
#error "AsteroidsPlayerController.generated.h already included, missing '#pragma once' in AsteroidsPlayerController.h"
#endif
#define ASTEROIDS_AsteroidsPlayerController_generated_h

#define FID_Asteroids_Source_Asteroids_AsteroidsPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAsteroidsPlayerController(); \
	friend struct Z_Construct_UClass_AAsteroidsPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAsteroidsPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Asteroids"), NO_API) \
	DECLARE_SERIALIZER(AAsteroidsPlayerController)


#define FID_Asteroids_Source_Asteroids_AsteroidsPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAsteroidsPlayerController(AAsteroidsPlayerController&&); \
	AAsteroidsPlayerController(const AAsteroidsPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAsteroidsPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAsteroidsPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAsteroidsPlayerController) \
	NO_API virtual ~AAsteroidsPlayerController();


#define FID_Asteroids_Source_Asteroids_AsteroidsPlayerController_h_17_PROLOG
#define FID_Asteroids_Source_Asteroids_AsteroidsPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Asteroids_Source_Asteroids_AsteroidsPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_Asteroids_Source_Asteroids_AsteroidsPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTEROIDS_API UClass* StaticClass<class AAsteroidsPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Asteroids_Source_Asteroids_AsteroidsPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
