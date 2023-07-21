# BastianPlugin
Repository for channel https://www.youtube.com/@bastiandev/videos

## Installation
*	Check out this repository into YourLyraFolder/Plugins/GameFeatures/. Open, recomile on request.
*	Set the default map in the project settings to "M_DemoPlane"
*	Add the plugins: "Text 3D", "HttpBlueprint", Blueprint Stats", "Tool Palette for the Widget Editor" and "Targeting System", "Python Foundation Packages", restart
*	Open Project Settings and 
	*	change "Loading Screen Widget" to your customized version - "W_BA_LoadingScreenHost" in my example
	*	Go to "Game > Asset Referencing Policy > Project Content > Can reference these domains" and add another element and select your "Bastian" as the plugin name reference
*	Gameplay Tags: I tried to "Add New Tag Source" on the gameplay tags and also refined a DataTable to be read - both are not reliable in Plugins at the moment. So currently, all tags are defined in the Bastian.Runtime.h - so you don't have to add anything manually
*	Only develop and test the game as "Client". Only debug from Visual Studio as either "Development Editor" or "Debug Editor"
		
## Lyra base fixes
*	Open GA_Interact from ShooterExplorer and remove the "Hello on press" PrintString node
*	Search Lyra directory for "ABP_UnarmedAnimLayers". You will find 2: Open both and look bottom right in the Anim Preview Editor and switch to "Edit Defaults". Look for "Jump Fall Land" and change to "MM_Unarmed_Jump_Fall_Land". Do the same for "ABP_UnarmedAnimLayers_Feminine"


# Mixamo animations
Mixamo animation are used within this Lyra plugin. All rights belong to Adobe, usage is covered by https://helpx.adobe.com/creative-cloud/faq/mixamo-faq.html
I use https://terribilisstudio.fr/ free Mixamo converter to convert the animations into Unreal - this fixes root motion and some finger/hand problems
I added several dozen Mixamo animations to be used in the plugin already retargeted to Manny Skeleton

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

# Epic Unreal components
I use various assets under license from Epic Games and bundle parts of them them with this repository:
*	[Unreal Lyra](https://www.unrealengine.com/marketplace/en-US/product/lyra) as the base for this Plugin
*	[UI Material Lab](https://www.unrealengine.com/marketplace/en-US/product/ui-material-lab)

# Various open source components
-	[UE4 Grid Material](https://github.com/techarthub/ue4-grid-material) from [Nick Mower - techarthub](https://github.com/techarthub)
-	Icons by [Lorc](https://lorcblog.blogspot.com/) from [Game Icons](https://game-icons.net/) are under [Creative Commons 3.0](https://creativecommons.org/licenses/by/3.0/)
- 	Sound from [freesound.org](https://freesound.org/)
	- S: [hip hop Beat Loop7.wav](https://freesound.org/people/Spol/sounds/77199/) by Spol | License: Attribution 3.0





	
