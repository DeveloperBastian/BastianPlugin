// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AttributeSet_BA_CharBaseStats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULyraAbilitySystemComponent;
struct FGameplayAttribute;
struct FGameplayAttributeData;
struct FGameplayTag;
#ifdef BASTIANRUNTIME_AttributeSet_BA_CharBaseStats_generated_h
#error "AttributeSet_BA_CharBaseStats.generated.h already included, missing '#pragma once' in AttributeSet_BA_CharBaseStats.h"
#endif
#define BASTIANRUNTIME_AttributeSet_BA_CharBaseStats_generated_h

#define FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_SPARSE_DATA
#define FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Dexterity); \
	DECLARE_FUNCTION(execOnRep_Intelligence); \
	DECLARE_FUNCTION(execOnRep_Endurance); \
	DECLARE_FUNCTION(execOnRep_Strength); \
	DECLARE_FUNCTION(execGetGameplayTag_Dexterity); \
	DECLARE_FUNCTION(execSetBaseDexterity); \
	DECLARE_FUNCTION(execGetRelativeDexterity); \
	DECLARE_FUNCTION(execGetCurrentDexterity); \
	DECLARE_FUNCTION(execGetBaseDexterity); \
	DECLARE_FUNCTION(execGetDexterityAttribute); \
	DECLARE_FUNCTION(execGetGameplayTag_Intelligence); \
	DECLARE_FUNCTION(execSetBaseIntelligence); \
	DECLARE_FUNCTION(execGetRelativeIntelligence); \
	DECLARE_FUNCTION(execGetCurrentIntelligence); \
	DECLARE_FUNCTION(execGetBaseIntelligence); \
	DECLARE_FUNCTION(execGetIntelligenceAttribute); \
	DECLARE_FUNCTION(execGetGameplayTag_Endurance); \
	DECLARE_FUNCTION(execSetBaseEndurance); \
	DECLARE_FUNCTION(execGetRelativeEndurance); \
	DECLARE_FUNCTION(execGetCurrentEndurance); \
	DECLARE_FUNCTION(execGetBaseEndurance); \
	DECLARE_FUNCTION(execGetEnduranceAttribute); \
	DECLARE_FUNCTION(execGetGameplayTag_Strength); \
	DECLARE_FUNCTION(execSetBaseStrength); \
	DECLARE_FUNCTION(execGetRelativeStrength); \
	DECLARE_FUNCTION(execGetCurrentStrength); \
	DECLARE_FUNCTION(execGetBaseStrength); \
	DECLARE_FUNCTION(execGetStrengthAttribute); \
	DECLARE_FUNCTION(execRemoveFromASC); \
	DECLARE_FUNCTION(execAttachToASC);


#define FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Dexterity); \
	DECLARE_FUNCTION(execOnRep_Intelligence); \
	DECLARE_FUNCTION(execOnRep_Endurance); \
	DECLARE_FUNCTION(execOnRep_Strength); \
	DECLARE_FUNCTION(execGetGameplayTag_Dexterity); \
	DECLARE_FUNCTION(execSetBaseDexterity); \
	DECLARE_FUNCTION(execGetRelativeDexterity); \
	DECLARE_FUNCTION(execGetCurrentDexterity); \
	DECLARE_FUNCTION(execGetBaseDexterity); \
	DECLARE_FUNCTION(execGetDexterityAttribute); \
	DECLARE_FUNCTION(execGetGameplayTag_Intelligence); \
	DECLARE_FUNCTION(execSetBaseIntelligence); \
	DECLARE_FUNCTION(execGetRelativeIntelligence); \
	DECLARE_FUNCTION(execGetCurrentIntelligence); \
	DECLARE_FUNCTION(execGetBaseIntelligence); \
	DECLARE_FUNCTION(execGetIntelligenceAttribute); \
	DECLARE_FUNCTION(execGetGameplayTag_Endurance); \
	DECLARE_FUNCTION(execSetBaseEndurance); \
	DECLARE_FUNCTION(execGetRelativeEndurance); \
	DECLARE_FUNCTION(execGetCurrentEndurance); \
	DECLARE_FUNCTION(execGetBaseEndurance); \
	DECLARE_FUNCTION(execGetEnduranceAttribute); \
	DECLARE_FUNCTION(execGetGameplayTag_Strength); \
	DECLARE_FUNCTION(execSetBaseStrength); \
	DECLARE_FUNCTION(execGetRelativeStrength); \
	DECLARE_FUNCTION(execGetCurrentStrength); \
	DECLARE_FUNCTION(execGetBaseStrength); \
	DECLARE_FUNCTION(execGetStrengthAttribute); \
	DECLARE_FUNCTION(execRemoveFromASC); \
	DECLARE_FUNCTION(execAttachToASC);


#define FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_ACCESSORS
#define FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeSet_BA_CharBaseStats(); \
	friend struct Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics; \
public: \
	DECLARE_CLASS(UAttributeSet_BA_CharBaseStats, ULyraAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BastianRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAttributeSet_BA_CharBaseStats) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Strength=NETFIELD_REP_START, \
		Endurance, \
		Intelligence, \
		Dexterity, \
		NETFIELD_REP_END=Dexterity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAttributeSet_BA_CharBaseStats) \
public:


#define FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUAttributeSet_BA_CharBaseStats(); \
	friend struct Z_Construct_UClass_UAttributeSet_BA_CharBaseStats_Statics; \
public: \
	DECLARE_CLASS(UAttributeSet_BA_CharBaseStats, ULyraAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BastianRuntime"), NO_API) \
	DECLARE_SERIALIZER(UAttributeSet_BA_CharBaseStats) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Strength=NETFIELD_REP_START, \
		Endurance, \
		Intelligence, \
		Dexterity, \
		NETFIELD_REP_END=Dexterity	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UAttributeSet_BA_CharBaseStats) \
public:


#define FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeSet_BA_CharBaseStats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeSet_BA_CharBaseStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeSet_BA_CharBaseStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeSet_BA_CharBaseStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeSet_BA_CharBaseStats(UAttributeSet_BA_CharBaseStats&&); \
	NO_API UAttributeSet_BA_CharBaseStats(const UAttributeSet_BA_CharBaseStats&); \
public: \
	NO_API virtual ~UAttributeSet_BA_CharBaseStats();


#define FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAttributeSet_BA_CharBaseStats(UAttributeSet_BA_CharBaseStats&&); \
	NO_API UAttributeSet_BA_CharBaseStats(const UAttributeSet_BA_CharBaseStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeSet_BA_CharBaseStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeSet_BA_CharBaseStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttributeSet_BA_CharBaseStats) \
	NO_API virtual ~UAttributeSet_BA_CharBaseStats();


#define FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_25_PROLOG
#define FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_SPARSE_DATA \
	FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_RPC_WRAPPERS \
	FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_ACCESSORS \
	FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_INCLASS \
	FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_SPARSE_DATA \
	FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_ACCESSORS \
	FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_INCLASS_NO_PURE_DECLS \
	FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASTIANRUNTIME_API UClass* StaticClass<class UAttributeSet_BA_CharBaseStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LyraStarterGameNew_Plugins_GameFeatures_BastianPlugin_Source_BastianRuntime_Public_AttributeSet_BA_CharBaseStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
