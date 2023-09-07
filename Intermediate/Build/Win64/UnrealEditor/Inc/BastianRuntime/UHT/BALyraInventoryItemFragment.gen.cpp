// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BastianRuntime/Public/BALyraInventoryItemFragment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBALyraInventoryItemFragment() {}
// Cross Module References
	BASTIANRUNTIME_API UClass* Z_Construct_UClass_UBALyraInventoryItemFragment();
	BASTIANRUNTIME_API UClass* Z_Construct_UClass_UBALyraInventoryItemFragment_NoRegister();
	LYRAGAME_API UClass* Z_Construct_UClass_ULyraInventoryItemFragment();
	UPackage* Z_Construct_UPackage__Script_BastianRuntime();
// End Cross Module References
	void UBALyraInventoryItemFragment::StaticRegisterNativesUBALyraInventoryItemFragment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBALyraInventoryItemFragment);
	UClass* Z_Construct_UClass_UBALyraInventoryItemFragment_NoRegister()
	{
		return UBALyraInventoryItemFragment::StaticClass();
	}
	struct Z_Construct_UClass_UBALyraInventoryItemFragment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBALyraInventoryItemFragment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULyraInventoryItemFragment,
		(UObject* (*)())Z_Construct_UPackage__Script_BastianRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBALyraInventoryItemFragment_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Bastian Dev" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Base class for Inventory Fragments" },
		{ "IncludePath", "BALyraInventoryItemFragment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BALyraInventoryItemFragment.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBALyraInventoryItemFragment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBALyraInventoryItemFragment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBALyraInventoryItemFragment_Statics::ClassParams = {
		&UBALyraInventoryItemFragment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBALyraInventoryItemFragment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBALyraInventoryItemFragment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBALyraInventoryItemFragment()
	{
		if (!Z_Registration_Info_UClass_UBALyraInventoryItemFragment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBALyraInventoryItemFragment.OuterSingleton, Z_Construct_UClass_UBALyraInventoryItemFragment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBALyraInventoryItemFragment.OuterSingleton;
	}
	template<> BASTIANRUNTIME_API UClass* StaticClass<UBALyraInventoryItemFragment>()
	{
		return UBALyraInventoryItemFragment::StaticClass();
	}
	UBALyraInventoryItemFragment::UBALyraInventoryItemFragment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBALyraInventoryItemFragment);
	UBALyraInventoryItemFragment::~UBALyraInventoryItemFragment() {}
	struct Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BALyraInventoryItemFragment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BALyraInventoryItemFragment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBALyraInventoryItemFragment, UBALyraInventoryItemFragment::StaticClass, TEXT("UBALyraInventoryItemFragment"), &Z_Registration_Info_UClass_UBALyraInventoryItemFragment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBALyraInventoryItemFragment), 474797155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BALyraInventoryItemFragment_h_428379740(TEXT("/Script/BastianRuntime"),
		Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BALyraInventoryItemFragment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BALyraInventoryItemFragment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
