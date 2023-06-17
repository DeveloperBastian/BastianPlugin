// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BastianRuntime : ModuleRules
{
	public BastianRuntime(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		 // SetupIrisSupport(Target);
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "LyraGame",
                "ModularGameplay",
                "CommonGame"
			}
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "GameplayTags",
                "GameplayTasks",
                "GameplayAbilities",
                "GameplayMessageRuntime",
                "CommonUI",
                "UMG",
                "DataRegistry",
                "AsyncMixin",
                "EnhancedInput",
                "GameSubtitles",
                "DeveloperSettings",
                "AIModule"
            }
            );
    }
}
