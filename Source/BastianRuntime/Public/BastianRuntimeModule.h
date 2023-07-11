// Developer Bastian - MIT license - https://www.youtube.com/@bastiandev

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "AbilitySystemComponent.h"
#include "NativeGameplayTags.h"

#pragma region BA GameplayTags

// Teleport
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_Gameplay_TeleportImmunity);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_GameplayEvent_Teleport);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_Ability_Teleport_Duration_Message);
// Skin Change
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_Ability_SkinChange_Duration_Message);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_GameplayCue_Character_SkinChange);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_Gameplay_SkinChangeImmunity);
// Interact
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_InputTag_Ability_Interact);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_InputTag_Ability_ToggleTarget);
// FingerShot
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_InputTag_Ability_Fingershot);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_Ability_Emote_Fingershot);
// Targeting
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_Ability_Targeting);
// BreakDance
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_Ability_Emote_BreakDance1990);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_InputTag_Ability_Emote_BreakDance1990);
// Debug Menu
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_Ability_DebugButtons);
UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_BA_InputTag_Ability_DebugButtons);

#pragma endregion 

class FBastianRuntimeModule : public IModuleInterface
{	
public:
	static inline TSharedPtr<FSlateStyleSet> StyleSetInstance = nullptr;
	//~IModuleInterface
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	//~End of IModuleInterface
};
