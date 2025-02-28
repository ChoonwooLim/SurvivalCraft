// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SurvivalCraftProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef SURVIVALCRAFT_SurvivalCraftProjectile_generated_h
#error "SurvivalCraftProjectile.generated.h already included, missing '#pragma once' in SurvivalCraftProjectile.h"
#endif
#define SURVIVALCRAFT_SurvivalCraftProjectile_generated_h

#define FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_SPARSE_DATA
#define FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_ACCESSORS
#define FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASurvivalCraftProjectile(); \
	friend struct Z_Construct_UClass_ASurvivalCraftProjectile_Statics; \
public: \
	DECLARE_CLASS(ASurvivalCraftProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SurvivalCraft"), NO_API) \
	DECLARE_SERIALIZER(ASurvivalCraftProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASurvivalCraftProjectile(ASurvivalCraftProjectile&&); \
	NO_API ASurvivalCraftProjectile(const ASurvivalCraftProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASurvivalCraftProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASurvivalCraftProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASurvivalCraftProjectile) \
	NO_API virtual ~ASurvivalCraftProjectile();


#define FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_12_PROLOG
#define FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_SPARSE_DATA \
	FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_ACCESSORS \
	FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SURVIVALCRAFT_API UClass* StaticClass<class ASurvivalCraftProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
