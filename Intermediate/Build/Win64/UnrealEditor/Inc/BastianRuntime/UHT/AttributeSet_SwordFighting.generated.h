// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttributeSet_SwordFighting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayAttribute;
struct FGameplayAttributeData;
struct FGameplayTag;
#ifdef BASTIANRUNTIME_AttributeSet_SwordFighting_generated_h
#error "AttributeSet_SwordFighting.generated.h already included, missing '#pragma once' in AttributeSet_SwordFighting.h"
#endif
#define BASTIANRUNTIME_AttributeSet_SwordFighting_generated_h

#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_SPARSE_DATA
#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_SwordTechnique); \
	DECLARE_FUNCTION(execOnRep_Swiftness); \
	DECLARE_FUNCTION(execGetGameplayTag_SwordTechnique); \
	DECLARE_FUNCTION(execSetBaseSwordTechnique); \
	DECLARE_FUNCTION(execGetRelativeSwordTechnique); \
	DECLARE_FUNCTION(execGetCurrentSwordTechnique); \
	DECLARE_FUNCTION(execGetBaseSwordTechnique); \
	DECLARE_FUNCTION(execGetSwordTechniqueAttribute); \
	DECLARE_FUNCTION(execGetGameplayTag_Swiftness); \
	DECLARE_FUNCTION(execSetBaseSwiftness); \
	DECLARE_FUNCTION(execGetRelativeSwiftness); \
	DECLARE_FUNCTION(execGetCurrentSwiftness); \
	DECLARE_FUNCTION(execGetBaseSwiftness); \
	DECLARE_FUNCTION(execGetSwiftnessAttribute);


#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_SwordTechnique); \
	DECLARE_FUNCTION(execOnRep_Swiftness); \
	DECLARE_FUNCTION(execGetGameplayTag_SwordTechnique); \
	DECLARE_FUNCTION(execSetBaseSwordTechnique); \
	DECLARE_FUNCTION(execGetRelativeSwordTechnique); \
	DECLARE_FUNCTION(execGetCurrentSwordTechnique); \
	DECLARE_FUNCTION(execGetBaseSwordTechnique); \
	DECLARE_FUNCTION(execGetSwordTechniqueAttribute); \
	DECLARE_FUNCTION(execGetGameplayTag_Swiftness); \
	DECLARE_FUNCTION(execSetBaseSwiftness); \
	DECLARE_FUNCTION(execGetRelativeSwiftness); \
	DECLARE_FUNCTION(execGetCurrentSwiftness); \
	DECLARE_FUNCTION(execGetBaseSwiftness); \
	DECLARE_FUNCTION(execGetSwiftnessAttribute);


#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_ACCESSORS
#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeSet_SwordFighting(); \
	friend struct Z_Construct_UClass_UAttributeSet_SwordFighting_Statics; \
public: \
	DECLARE_CLASS(UAttributeSet_SwordFighting, UGameAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BastianRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAttributeSet_SwordFighting) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Swiftness=NETFIELD_REP_START, \
		SwordTechnique, \
		NETFIELD_REP_END=SwordTechnique	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAttributeSet_SwordFighting) \
public:


#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAttributeSet_SwordFighting(); \
	friend struct Z_Construct_UClass_UAttributeSet_SwordFighting_Statics; \
public: \
	DECLARE_CLASS(UAttributeSet_SwordFighting, UGameAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BastianRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAttributeSet_SwordFighting) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Swiftness=NETFIELD_REP_START, \
		SwordTechnique, \
		NETFIELD_REP_END=SwordTechnique	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAttributeSet_SwordFighting) \
public:


#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeSet_SwordFighting(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeSet_SwordFighting) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeSet_SwordFighting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeSet_SwordFighting); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeSet_SwordFighting(UAttributeSet_SwordFighting&&); \
	NO_API UAttributeSet_SwordFighting(const UAttributeSet_SwordFighting&); \
public: \
	NO_API virtual ~UAttributeSet_SwordFighting();


#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeSet_SwordFighting(UAttributeSet_SwordFighting&&); \
	NO_API UAttributeSet_SwordFighting(const UAttributeSet_SwordFighting&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeSet_SwordFighting); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeSet_SwordFighting); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributeSet_SwordFighting) \
	NO_API virtual ~UAttributeSet_SwordFighting();


#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_24_PROLOG
#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_SPARSE_DATA \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_RPC_WRAPPERS \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_ACCESSORS \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_INCLASS \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_SPARSE_DATA \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_ACCESSORS \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASTIANRUNTIME_API UClass* StaticClass<class UAttributeSet_SwordFighting>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGameTest_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_SwordFighting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
