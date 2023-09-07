# BastianPlugin
Repository for channel https://www.youtube.com/@bastiandev/videos

## Installation
*	Check out this repository into YourLyraFolder/Plugins/GameFeatures/. Open, recompile on request.
*	Set the default map in the project settings to "M_DemoPlane"
*	Add the Unreal plugins: "Text 3D", "HttpBlueprint", Blueprint Stats", "Targeting System", "Python Foundation Packages", "Pose Search", restart
*	Open Project Settings and 
	*	change "Loading Screen Widget" to your customized version - "W_BA_LoadingScreenHost" in my example
	*	Go to "Game > Asset Referencing Policy > Project Content > Can reference these domains" and add another element and select your "Bastian" as the plugin name reference
*	Only develop and test the game as "Client". Only debug from Visual Studio as either "Development Editor" or "Debug Editor"
*	There are some changes necessary in the ABP_Mannequin_Base if you follow the [weapon video]()
*	*	Add two Transform variables named "Weapon Socket Right Hand Transform" and "Weapon Socket Left Hand Transform"
*	*	Add a Boolean variable named "GameplayTag_WeaponIsTwoHand"
*	*	Add a property mapping (Class Defaults) GameplayTag_WeaponIsTwoHand->Weapons.IsTwoHand. The gameplay tag is set in the weapon specific Gameplay Effect
*	*	Per weapon:
*	*	*	Add a Boolean variable to set if weapon is in use, e.g. GameplayTag_IsLongSword
*	*	*	This variable is set by a property mapping to a Gameplay Tag - e.g. Weapons.LongSword. The gameplay tag is set in the weapon specific Gameplay Effect
*	Optionally - to follow the weapon video: Add one socket named 'Weapon_r_preview' to your SK_Mannequin as child of socket 'weapon_r'
		
## Lyra base fixes
*	Open GA_Interact from ShooterExplorer and remove the "Hello on press" PrintString node
*	Search Lyra directory for "ABP_UnarmedAnimLayers". You will find 2: Open both and look bottom right in the Anim Preview Editor and switch to "Edit Defaults". Look for "Jump Fall Land" and change to "MM_Unarmed_Jump_Fall_Land". Do the same for "ABP_UnarmedAnimLayers_Feminine"

# Mixamo animations
Mixamo animation are used within this Lyra plugin. All rights belong to Adobe, usage is covered by https://helpx.adobe.com/creative-cloud/faq/mixamo-faq.html
I use https://terribilisstudio.fr/ free Mixamo converter to convert the animations into Unreal - this fixes root motion and some finger/hand problems
I added several dozen Mixamo animations to be used in the plugin already retargeted to Manny Skeleton

# Gameplay Tags
All plugin specific tags can be found in YOUR_LYRA_INSTALL_DIRECTORY\Plugins\GameFeatures\BastianPlugin\Config\Tags\BastianPluginTags.ini
On a general note, you have to follow with your own plugins exactly this pattern, naming your tag config file eactly as the plugin directory name for Lyra to load them

# Creative Commons materials in this repository
I use assets here from [Sketchfab](https://sketchfab.com/) that are licensed under [Creative Commons](https://creativecommons.org/licenses/by/4.0/)
Some recreate Fortnite skins: All rights on the original Fortnite skins are owned by Epic Games and are used here within the [Epic Games Fan Art Policy](https://www.epicgames.com/site/de/fan-art-policy)
If there is any asset that shouzld never have ended up on SketchFab, please immediately contact me to delete it at developer.bastian@gmail.com

All assets are individually presented on the Demo Map here in this plugin:

## Characters
*	[Benedettta Street Blow](https://sketchfab.com/3d-models/benedetta-street-blow-3caa088a69fe4023bade4360e9c68fff) by [Kyy.Mp4](https://sketchfab.com/skyzoofficial122)
*	[Fortnite: Lara Croft](https://sketchfab.com/3d-models/fortnite-lara-croft-784511309e42495b8c4b592e476c7cd1) by [EWTube0](https://sketchfab.com/EWTube0)
*	[Travis Scott](https://sketchfab.com/3d-models/fortnite-travis-scott-42af15222ab14f819708a32972a1d2c8) by [EWTube0](https://sketchfab.com/EWTube0)
*	[Spartan](https://sketchfab.com/3d-models/rigged-for-ue4-spartan-free-666f485199db43488b14035f2a3840bf) by [Andy Woodhead](https://sketchfab.com/Andywoodhead)
*	[Starlie](https://sketchfab.com/3d-models/starlie-fortnite-f78aa69d7ef0450991910b7ec8dd8188) by [1FENIL](https://sketchfab.com/1FENIL)


## Assets
*	[Stylized plants 3d models](https://sketchfab.com/3d-models/stylized-plants-3d-models-b6f9cb5d5b074e809f68bee108f2cdc3) by [inter_net](https://sketchfab.com/inter_net)
*	[Desert | Rocks | Stones | Pack](https://sketchfab.com/3d-models/desert-rocks-stones-pack-c2208f5ccc004f1681d27de67fe75799) by [YadroGames](https://sketchfab.com/yadrogames)
*	[Palm Trees](https://sketchfab.com/3d-models/palm-trees-55690379305145488e20afb05fc687e6) by [YadroGames](https://sketchfab.com/yadrogames)
*	[Chevalier Sword](https://sketchfab.com/3d-models/chevalier-sword-b2662f2666a844e8a1bd0e7c4a7672d8) by [rubenve](https://sketchfab.com/rubenve)
*	[Argonian Mace](https://skfb.ly/6sAEF) by [Lexi4](https://sketchfab.com/mr.alyxey13)

# Epic Unreal components
I use various assets under license from Epic Games and bundle parts of them them with this repository:
*	[Unreal Lyra](https://www.unrealengine.com/marketplace/en-US/product/lyra) as the base for this Plugin
*	[UI Material Lab](https://www.unrealengine.com/marketplace/en-US/product/ui-material-lab)

# Various open source components
-	[UE4 Grid Material](https://github.com/techarthub/ue4-grid-material) from [Nick Mower - techarthub](https://github.com/techarthub)
-	Icons by [Lorc](https://lorcblog.blogspot.com/) from [Game Icons](https://game-icons.net/) are under [Creative Commons 3.0](https://creativecommons.org/licenses/by/3.0/)
- 	Sound from [freesound.org](https://freesound.org/)
	- [hip hop Beat Loop7.wav](https://freesound.org/people/Spol/sounds/77199/) by Spol | License: Attribution 3.0


# License

This work itself is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by/3.0/">Creative Commons Attribution 3.0 Unported License</a>


<a rel="license" href="http://creativecommons.org/licenses/by/3.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by/3.0/88x31.png" /></a>
	

	
