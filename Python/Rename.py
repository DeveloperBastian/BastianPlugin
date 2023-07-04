# Bastian Developer. MIT license. 2023

import unreal
import numpy as np	# needs Plugin "Python Foundation Packages"
from enum import Enum, auto

@unreal.uclass()
class GetEditorUtility(unreal.GlobalEditorUtilityBase):
    pass

@unreal.uclass()
class GetEditorAssetLibrary(unreal.EditorAssetLibrary):
    pass

@unreal.uclass()
class GetAnimationLibrary(unreal.AnimationLibrary):
    pass

editorUtility = GetEditorUtility()
animLib = GetAnimationLibrary()
assetLib = GetEditorAssetLibrary()


def get_assets(*args, **kwargs):
	"""
    Builds an ARFilter to return a set of assets filtered by it
    """
	return unreal.AssetRegistryHelpers.get_asset_registry().get_assets(unreal.ARFilter(*args, **kwargs))

def IsAnimation(asset):
	"""
    Builds an ARFilter to return a set of assets filtered by it
    """
	assetClass = asset.get_class().get_name()
	return (assetClass == 'AnimSequence')
	

	
# Main
selectedAssets = editorUtility.get_selected_assets()
if len(selectedAssets) == 0:
        unreal.log_error("No assets were selected to process... exiting")
        exit
# make progress bar
with unreal.ScopedSlowTask(len(selectedAssets), 'Renaming...') as task:
	task.make_dialog(True)
		
	for selectedAsset in selectedAssets:
		if task.should_cancel():
				break
		if IsAnimation(selectedAsset):
			task.enter_progress_frame(1, "Processing asset: '{asset}'".format(asset = selectedAsset.get_name()))
			assetPathName = selectedAsset.get_path_name()
			assetPathOnly = assetPathName.replace((selectedAsset.get_name() + "." + selectedAsset.get_name()), "")
			asset_name = assetPathOnly + selectedAsset.get_name().replace("AS_", "AS_Locomotion")
			assetLib.rename_asset(assetPathName, asset_name)
		else:
			unreal.log_error("Skipping selected asset {name}. Only AnimSequences can be processed, asset is class '{className}'".format(name = selectedAsset.get_name(), className = selectedAsset.get_class().get_name()))


