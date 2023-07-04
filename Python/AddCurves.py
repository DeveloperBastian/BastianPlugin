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

def add_track_and_curves():
	# define array of tracks and curves we want to have in each animation
	NotifierTracks = ['LeftFootFX', 'RightFootFX', 'ContextFX','FootSyncMarkers']
	# Distance: Y axis, GroundDistance: Z axis, DisableLegIK: true if both feet leaving the ground
	Curves = ['Distance', 'GroundDistance', 'DisableLegIK']
		
	for curve in Curves:
		curveExists = animLib.does_curve_exist(selectedAsset, curve, unreal.RawCurveTrackTypes.RCT_FLOAT)
		if not curveExists:
			try:
				animLib.add_curve(selectedAsset, curve, unreal.RawCurveTrackTypes.RCT_FLOAT)
				unreal.log_warning("[{asset}]: ADDED curve '{curve}'".format(asset = selectedAsset, curve = curve))
			except:
				unreal.log_error("[{asset}]:Creation of curve '{curve}' failed".format(asset = selectedAsset, curve = curve))
	
	# if track does not exist, add it
	for track in NotifierTracks:
		if track not in animLib.get_animation_notify_track_names(selectedAsset):
			try:
				animLib.add_animation_notify_track(selectedAsset, track)
				unreal.log_warning("[{asset}]: ADDED track '{track}'".format(asset = selectedAsset, track = track))
			except:
				unreal.log_error("[{asset}]: Creation of track '{track}' failed".format(asset = selectedAsset, track = track))	
	selectedAsset.modify(True)				

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
with unreal.ScopedSlowTask(len(selectedAssets) * 8, 'Calculating curves') as task:
	task.make_dialog(True)
		
	for selectedAsset in selectedAssets:
		if task.should_cancel():
				break
		if IsAnimation(selectedAsset):
			task.enter_progress_frame(1, "Processing asset: '{asset}'".format(asset = selectedAsset.get_name()))
			unreal.log("Processing asset: '{asset}'".format(asset = selectedAsset.get_name()))
			
			# look at array 'NotifierTracks' to change tracks to add
			# look at array 'Curves	' to change float curves to add
			task.enter_progress_frame(1, "[{asset}]: Adding tracks and curves".format(asset = selectedAsset.get_name()))
			add_track_and_curves()
			
		else:
			unreal.log_error("Skipping selected asset {name}. Only AnimSequences can be processed, asset is class '{className}'".format(name = selectedAsset.get_name(), className = selectedAsset.get_class().get_name()))


