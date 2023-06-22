# Bastian Developer. MIT license
#
# Will search selected Animation assets to contain three animation otifier tracks used by Lyra: LeftFootFX, RightFootFX, ContextFX
# If the tracks are not found, they will be added

import unreal

@unreal.uclass()
class GetEditorUtility(unreal.GlobalEditorUtilityBase):
    pass

@unreal.uclass()
class GetEditorAssetLibrary(unreal.EditorAssetLibrary):
    pass

@unreal.uclass()
class GetAnimationLibrary(unreal.AnimationLibrary):
    pass

print("Hello World from Python")