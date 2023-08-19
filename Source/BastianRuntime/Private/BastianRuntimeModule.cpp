// Developer Bastian - MIT license - https://www.youtube.com/@bastiandev

#include "BastianRuntimeModule.h"
#include "Modules/ModuleManager.h"
#include "Modules/ModuleInterface.h"
#include "Editor/UnrealEdEngine.h"
#include "ClassIconFinder.h"
#include "Styling/SlateStyle.h"
#include "Styling/SlateStyleRegistry.h"

#define LOCTEXT_NAMESPACE "FBastianRuntimeModule"

void FBastianRuntimeModule::StartupModule()
{
	// here we set custom icons for the classess we create in this module
	// idea from https://www.quodsoler.com/blog/customize-your-unreal-class-icons
	// Create the new style set
	StyleSetInstance = MakeShareable(new FSlateStyleSet("BastianDevEditorStyle"));
	// Assign the content root of this style set
	StyleSetInstance->SetContentRoot(FPaths::ProjectPluginsDir() / TEXT("GameFeatures/BastianPlugin/Resources"));
	
	// repeat the below region for each icon you want to register for your classes
#pragma region icon for GameAttributeSet
	auto ImageBrush = new FSlateImageBrush(StyleSetInstance->RootToContentDir("/icons/sword-spade.png"), FVector2D(18, 18));
	StyleSetInstance->Set("ClassIcon.GameAttributeSet", ImageBrush);
	UE_LOG(LogTemp, Display, TEXT("FBastianRuntimeModule: Registered ClassIcon for 'GameAttributeSet' to 'GameFeatures/BastianPlugin/Resources/icons/sword-spade.png'"));
#pragma endregion

	// Finally register the style set so it is actually used
	FSlateStyleRegistry::RegisterSlateStyle(*StyleSetInstance);
}

void FBastianRuntimeModule::ShutdownModule()
{
	//FModuleManager::Get().OnModulesChanged().RemoveAll(this);

	// Unregister the style set and reset the pointer
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleSetInstance.Get());
	StyleSetInstance.Reset();
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FBastianRuntimeModule, BastianRuntime)
