// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBastianRuntime_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BastianRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BastianRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_BastianRuntime.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BastianRuntime",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE042C1BF,
				0x4B850224,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BastianRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BastianRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BastianRuntime(Z_Construct_UPackage__Script_BastianRuntime, TEXT("/Script/BastianRuntime"), Z_Registration_Info_UPackage__Script_BastianRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE042C1BF, 0x4B850224));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
