// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BA_NeuralNetworkAdapter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBA_NeuralNetworkAdapter;
class UCameraComponent;
class UNNEModelData;
class UObject;
struct FNeuralNetworkTensor;
#ifdef BASTIANRUNTIME_BA_NeuralNetworkAdapter_generated_h
#error "BA_NeuralNetworkAdapter.generated.h already included, missing '#pragma once' in BA_NeuralNetworkAdapter.h"
#endif
#define BASTIANRUNTIME_BA_NeuralNetworkAdapter_generated_h

#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNeuralNetworkTensor_Statics; \
	BASTIANRUNTIME_API static class UScriptStruct* StaticStruct();


template<> BASTIANRUNTIME_API UScriptStruct* StaticStruct<struct FNeuralNetworkTensor>();

#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_SPARSE_DATA
#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeScreenshot); \
	DECLARE_FUNCTION(execRunSync); \
	DECLARE_FUNCTION(execSetInputs); \
	DECLARE_FUNCTION(execGetOutputShape); \
	DECLARE_FUNCTION(execGetInputShape); \
	DECLARE_FUNCTION(execNumOutputs); \
	DECLARE_FUNCTION(execNumInputs); \
	DECLARE_FUNCTION(execCreateTensor); \
	DECLARE_FUNCTION(execCreateModel); \
	DECLARE_FUNCTION(execGetRuntimeNames);


#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeScreenshot); \
	DECLARE_FUNCTION(execRunSync); \
	DECLARE_FUNCTION(execSetInputs); \
	DECLARE_FUNCTION(execGetOutputShape); \
	DECLARE_FUNCTION(execGetInputShape); \
	DECLARE_FUNCTION(execNumOutputs); \
	DECLARE_FUNCTION(execNumInputs); \
	DECLARE_FUNCTION(execCreateTensor); \
	DECLARE_FUNCTION(execCreateModel); \
	DECLARE_FUNCTION(execGetRuntimeNames);


#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_ACCESSORS
#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBA_NeuralNetworkAdapter(); \
	friend struct Z_Construct_UClass_UBA_NeuralNetworkAdapter_Statics; \
public: \
	DECLARE_CLASS(UBA_NeuralNetworkAdapter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BastianRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBA_NeuralNetworkAdapter)


#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUBA_NeuralNetworkAdapter(); \
	friend struct Z_Construct_UClass_UBA_NeuralNetworkAdapter_Statics; \
public: \
	DECLARE_CLASS(UBA_NeuralNetworkAdapter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BastianRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBA_NeuralNetworkAdapter)


#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBA_NeuralNetworkAdapter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBA_NeuralNetworkAdapter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBA_NeuralNetworkAdapter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBA_NeuralNetworkAdapter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBA_NeuralNetworkAdapter(UBA_NeuralNetworkAdapter&&); \
	NO_API UBA_NeuralNetworkAdapter(const UBA_NeuralNetworkAdapter&); \
public: \
	NO_API virtual ~UBA_NeuralNetworkAdapter();


#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBA_NeuralNetworkAdapter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBA_NeuralNetworkAdapter(UBA_NeuralNetworkAdapter&&); \
	NO_API UBA_NeuralNetworkAdapter(const UBA_NeuralNetworkAdapter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBA_NeuralNetworkAdapter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBA_NeuralNetworkAdapter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBA_NeuralNetworkAdapter) \
	NO_API virtual ~UBA_NeuralNetworkAdapter();


#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_30_PROLOG
#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_SPARSE_DATA \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_RPC_WRAPPERS \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_ACCESSORS \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_INCLASS \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_SPARSE_DATA \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_ACCESSORS \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASTIANRUNTIME_API UClass* StaticClass<class UBA_NeuralNetworkAdapter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_BA_NeuralNetworkAdapter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
