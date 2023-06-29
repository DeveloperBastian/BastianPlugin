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

	
def get_distance_array(selectedAsset, rootBone):
	distance_array = []		# array to store distance y per frame
	time_array = []
	# iterate all frames to set various curves and notifiers
	for frame in range(animLib.get_num_frames(selectedAsset)):
		# get all current transforms
		root_transform = animLib.get_bone_pose_for_frame(selectedAsset, rootBone, frame, 0)	
		# get path from bone to root
		root_bone_path = animLib.find_bone_path_to_root(selectedAsset, rootBone)
		# add all root_transforms of the bone path to starter root_transform
		for bone in root_bone_path:
			root_transform = root_transform.multiply(animLib.get_bone_pose_for_frame(selectedAsset, bone, frame, 0))	
		# Set Distance curve - y axis
		# Normalize distance to start with zero: add frame zero y value to all other values. Curve: Distance
		correction = 0
		if frame == 1:
			correction = round(root_transform.translation.y, 0) * -1
		distance_array.append(round(root_transform.translation.y, 0) + correction)
		time_array.append(animLib.get_time_at_frame(selectedAsset, frame))
	return [time_array, distance_array]


def get_disable_IK_array(selectedAsset, leftFoot, rightFoot, feetZeroPoint):
	disable_IK_array = []
	time_array = []
	i = 0
	for frame in range(animLib.get_num_frames(selectedAsset)):
		i += 1
		# get all current transforms
		l_foot_transform = animLib.get_bone_pose_for_frame(selectedAsset, leftFoot, frame, 0)
		r_foot_transform = animLib.get_bone_pose_for_frame(selectedAsset, rightFoot, frame, 0)
		
		# get path from bone to root
		left_foot_path = animLib.find_bone_path_to_root(selectedAsset, leftFoot)
		right_foot_path = animLib.find_bone_path_to_root(selectedAsset, rightFoot)
		
		# add all root_transforms of the bone path to starter root_transform
		for bone in left_foot_path:
			if not bone == 'root':
				l_foot_transform = l_foot_transform.multiply(animLib.get_bone_pose_for_frame(selectedAsset, bone, frame, 0))
		for bone in right_foot_path:
			if not bone == 'root':
				r_foot_transform = r_foot_transform.multiply(animLib.get_bone_pose_for_frame(selectedAsset, bone, frame, 0))
		
		# we consider both feet 20 cm in the air to disable the FootIK there
		distanceConsideredInAir = 20
		bothFeetInAir = (l_foot_transform.translation.z - feetZeroPoint > distanceConsideredInAir 
			and r_foot_transform.translation.z - feetZeroPoint > distanceConsideredInAir)
		# 3 conditions:
		# first frame always add
		# every 10. frame at least
		# if last array value != new value
		if (len(disable_IK_array) == 0) or (i % 10 == 0) or (disable_IK_array[-1] != float(bothFeetInAir)):	
			time_array.append(animLib.get_time_at_frame(selectedAsset, frame))
			disable_IK_array.append(float(bothFeetInAir))
			i = 0
	
	return [time_array, disable_IK_array]
	
def get_assets(*args, **kwargs):
	"""
    Builds an ARFilter to return a set of assets filtered by it
    """
	return unreal.AssetRegistryHelpers.get_asset_registry().get_assets(unreal.ARFilter(*args, **kwargs))

def SetCompressionSetting(asset, target):
	"""
    Sets the compression settings for a specified asset.

    :param asset: The asset to set the compression settings for.
    :type asset: unreal.Asset
    :param target: The name of the compression setting to apply.
    :type target: str
    """
	# get all assets of type AnimBoneCompressionSettings
	className = 'AnimCurveCompressionSettings'
	if target.find('Bone') > -1:
		className = 'AnimBoneCompressionSettings'
	searchTarget = get_assets(
        class_names=[className],
        recursive_paths=True,
    )
	# Construct asset name search term 
	setting = next((obj for obj in searchTarget if obj.asset_name == target), 0)
	if not setting == 0:
		if target.find('Bone') > -1:
			animLib.set_bone_compression_settings(asset, setting.get_asset())
			unreal.log_warning("Set {target} to '{comp}' ".format(target = target, comp = setting.get_asset()))
		elif target.find('Curve') > -1:
			animLib.set_curve_compression_settings(asset, setting.get_asset())
			unreal.log_warning("Set {target} to '{comp}' ".format(target = target, comp = setting.get_asset()))
		else:
			unreal.log_error("Neither 'Bone' nor 'Curve' was specified - no compression settings were changed for '{assetPath}'".format(assetPath = asset))
		
		asset.modify(True)
	else:
		unreal.log_error("Could not find '{assetPath}' - please create that first with that exact name".format(assetPath = target))

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
			
			# # we set the compression to a very simple, fast compression to speed up time to process each animation
			# task.enter_progress_frame(1, "[{asset}]: Setting simple compression".format(asset = selectedAsset.get_name()))
			# # this SimpleAnimBoneCompressionSettings setting needs to be created (or use Dev Bastian plugin)
			# SetCompressionSetting(selectedAsset, 'SimpleAnimBoneCompressionSettings')
			# # this SimpleAnimCurveCompressionSettings setting needs to be created (or use Dev Bastian plugin)
			# SetCompressionSetting(selectedAsset, 'SimpleAnimCurveCompressionSettings')
				
			# # Distance calculation and curve:
			# task.enter_progress_frame(1, "[{asset}]: Getting root distance on y axis per frame".format(asset = selectedAsset.get_name()))
			# distance_arrays = get_distance_array(selectedAsset, 'root')
			# task.enter_progress_frame(1, "[{asset}]: Filling distance curve".format(asset = selectedAsset.get_name()))
			# animLib.add_float_curve_keys(selectedAsset, 'Distance', distance_arrays[0], distance_arrays[1])
			
			# # getting Leg IK
			# task.enter_progress_frame(1, "[{asset}]: Getting LegIK status per frame".format(asset = selectedAsset.get_name()))
			# disable_IK_arrays = get_disable_IK_array(selectedAsset, 'foot_l', 'foot_r', -33.86)
			# task.enter_progress_frame(1, "[{asset}]: Filling LegIK curve".format(asset = selectedAsset.get_name()))
			# animLib.add_float_curve_keys(selectedAsset, 'DisableLegIK', disable_IK_arrays[0], disable_IK_arrays[1])			
		
			# # reset to the standard compression
			# task.enter_progress_frame(1, "[{asset}]: Reset to default compression".format(asset = selectedAsset.get_name()))
			# SetCompressionSetting(selectedAsset, 'DefaultAnimBoneCompressionSettings')
			# SetCompressionSetting(selectedAsset, 'DefaultAnimCurveCompressionSettings')
		else:
			unreal.log_error("Skipping selected asset {name}. Only AnimSequences can be processed, asset is class '{className}'".format(name = selectedAsset.get_name(), className = selectedAsset.get_class().get_name()))


