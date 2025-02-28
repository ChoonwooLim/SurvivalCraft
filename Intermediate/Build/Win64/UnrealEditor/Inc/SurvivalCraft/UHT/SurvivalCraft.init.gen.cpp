// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvivalCraft_init() {}
	SURVIVALCRAFT_API UFunction* Z_Construct_UDelegateFunction_SurvivalCraft_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SurvivalCraft;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SurvivalCraft()
	{
		if (!Z_Registration_Info_UPackage__Script_SurvivalCraft.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SurvivalCraft_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SurvivalCraft",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFD9D3137,
				0x37F6EF10,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SurvivalCraft.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SurvivalCraft.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SurvivalCraft(Z_Construct_UPackage__Script_SurvivalCraft, TEXT("/Script/SurvivalCraft"), Z_Registration_Info_UPackage__Script_SurvivalCraft, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFD9D3137, 0x37F6EF10));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
