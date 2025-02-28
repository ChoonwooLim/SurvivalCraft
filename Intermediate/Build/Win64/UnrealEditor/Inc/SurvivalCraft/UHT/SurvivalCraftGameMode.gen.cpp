// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SurvivalCraft/SurvivalCraftGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalCraftGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SURVIVALCRAFT_API UClass* Z_Construct_UClass_ASurvivalCraftGameMode();
	SURVIVALCRAFT_API UClass* Z_Construct_UClass_ASurvivalCraftGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SurvivalCraft();
// End Cross Module References
	void ASurvivalCraftGameMode::StaticRegisterNativesASurvivalCraftGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASurvivalCraftGameMode);
	UClass* Z_Construct_UClass_ASurvivalCraftGameMode_NoRegister()
	{
		return ASurvivalCraftGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ASurvivalCraftGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASurvivalCraftGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SurvivalCraft,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalCraftGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASurvivalCraftGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SurvivalCraftGameMode.h" },
		{ "ModuleRelativePath", "SurvivalCraftGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASurvivalCraftGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASurvivalCraftGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASurvivalCraftGameMode_Statics::ClassParams = {
		&ASurvivalCraftGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASurvivalCraftGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASurvivalCraftGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ASurvivalCraftGameMode()
	{
		if (!Z_Registration_Info_UClass_ASurvivalCraftGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASurvivalCraftGameMode.OuterSingleton, Z_Construct_UClass_ASurvivalCraftGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASurvivalCraftGameMode.OuterSingleton;
	}
	template<> SURVIVALCRAFT_API UClass* StaticClass<ASurvivalCraftGameMode>()
	{
		return ASurvivalCraftGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASurvivalCraftGameMode);
	ASurvivalCraftGameMode::~ASurvivalCraftGameMode() {}
	struct Z_CompiledInDeferFile_FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASurvivalCraftGameMode, ASurvivalCraftGameMode::StaticClass, TEXT("ASurvivalCraftGameMode"), &Z_Registration_Info_UClass_ASurvivalCraftGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASurvivalCraftGameMode), 2918501151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftGameMode_h_350247771(TEXT("/Script/SurvivalCraft"),
		Z_CompiledInDeferFile_FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SurvivalCraft_Source_SurvivalCraft_SurvivalCraftGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
