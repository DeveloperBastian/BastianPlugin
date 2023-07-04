import unreal
import logging

logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

@unreal.uclass()
class EditorUtility(unreal.GlobalEditorUtilityBase):
    pass

@unreal.uclass()
class EditorAssetLibrary(unreal.EditorAssetLibrary):
    pass

@unreal.uclass()
class AnimationLibrary(unreal.AnimationLibrary):
    pass
	
editor_utility = EditorUtility()
asset_lib = EditorAssetLibrary()
anim_lib = AnimationLibrary()

def add_notifier_tracks_and_curves():
    """
    Adds notifier tracks and curves to selected animation assets if they do not exist.
    """
    notifier_tracks = ['LeftFootFX', 'RightFootFX', 'ContextFX', 'FootSyncMarkers']
    curves = ['Distance', 'GroundDistance', 'DisableLegIK']
    
    selected_assets = editor_utility.get_selected_assets()
    if len(selected_assets) == 0:
        logger.error("No assets have been selected to check for NotifyTracks - exiting script!")
        return
    
    for selected_asset in selected_assets:
        for curve in curves:
            curve_exists = anim_lib.does_curve_exist(selected_asset, curve, unreal.RawCurveTrackTypes.RCT_FLOAT)
            if not curve_exists:
                try:
                    anim_lib.add_curve(selected_asset, curve, unreal.RawCurveTrackTypes.RCT_FLOAT)
                    logger.warning("[{asset}]: ADDED curve '{curve}'".format(asset=selected_asset, curve=curve))
                    selected_asset.modify(True)
                except:
                    logger.error("[{asset}]: Creation of curve '{curve}' failed".format(asset=selected_asset, curve=curve))
        
        for track in notifier_tracks:
            if track not in anim_lib.get_animation_notify_track_names(selected_asset):
                try:
                    anim_lib.add_animation_notify_track(selected_asset, track)
                    logger.warning("[{asset}]: ADDED track '{track}'".format(asset=selected_asset, track=track))
                    selected_asset.modify(True)
                except:
                    logger.error("[{asset}]: Creation of track '{track}' failed".format(asset=selected_asset, track=track))

def track_feet_bones(root_bone, left_foot, right_foot, feet_zero_point):
    """
    Tracks the feet bones touching the ground in selected animation assets.
    
    :param root_bone: Name of the root bone.
    :type root_bone: str
    :param left_foot: Name of the left foot bone.
    :type left_foot: str
    :param right_foot: Name of the right foot bone.
    :type right_foot: str
    :param feet_zero_point: Zero point for the feet.
    :type feet_zero_point: float
    """
    selected_assets = editor_utility.get_selected_assets()
    with unreal.ScopedSlowTask(len(selected_assets), 'Calculating curves') as task:
        task.make_dialog(True)
        i = 0
        for selected_asset in selected_assets:
            if task.should_cancel():
                break
            i += 1
            task.enter_progress_frame(1, 'Processing ' + str(i) + ' / ' + str(len(selected_assets)))
            logger.info("Processing asset: '{asset}'".format(asset=selected_asset.get_name()))
            
            for frame in range(anim_lib.get_num_frames(selected_asset)):
                root_transform = anim_lib.get_bone_pose_for_frame(selected_asset, root_bone, frame, 0)
                l_foot_transform = anim_lib.get_bone_pose_for_frame(selected_asset, left_foot, frame, 0)
                r_foot_transform = anim_lib.get_bone_pose_for_frame(selected_asset, right_foot, frame, 0)
                
                root_bone_path = anim_lib.find_bone_path_to_root(selected_asset, root_bone)
                left_foot_path = anim_lib.find_bone_path_to_root(selected_asset, left_foot)
                right_foot_path = anim_lib.find_bone_path_to_root(selected_asset, right_foot)
                
                for bone in root_bone_path:
                    root_transform = root_transform.multiply(anim_lib.get_bone_pose_for_frame(selected_asset, bone, frame, 0))
                for bone in left_foot_path:
                    if bone != 'root':
                        l_foot_transform = l_foot_transform.multiply(anim_lib.get_bone_pose_for_frame(selected_asset, bone, frame, 0))
                for bone in right_foot_path:
                    if bone != 'root':
                        r_foot_transform = r_foot_transform.multiply(anim_lib.get_bone_pose_for_frame(selected_asset, bone, frame, 0))
                
                correction = 0
                if frame == 1:
                    correction = round(root_transform.translation.y, 0) * -1
                time_at_frame = anim_lib.get_time_at_frame(selected_asset, frame)
                anim_lib.add_float_curve_key(selected_asset, 'Distance', time_at_frame, round(root_transform.translation.y, 0) + correction)
                
                distance_considered_in_air = 20
                both_feet_in_air = (l_foot_transform.translation.z - feet_zero_point > distance_considered_in_air 
                                    and r_foot_transform.translation.z - feet_zero_point > distance_considered_in_air)
                anim_lib.add_float_curve_key(selected_asset, 'DisableLegIK', time_at_frame, float(both_feet_in_air))


def get_assets(*args, **kwargs):
	"""
    Builds an ARFilter to return a set of assets filtered by it
    """
    return unreal.AssetRegistryHelpers.get_asset_registry().get_assets(unreal.ARFilter(*args, **kwargs))
	

def set_compression_setting(asset, target):
    """
    Sets the compression settings for a specified asset.

    :param asset: The asset to set the compression settings for.
    :type asset: unreal.Asset
    :param target: The name of the compression setting to apply.
    :type target: str
    """
    
    # Determine the class name based on the target
    class_name = 'AnimCurveCompressionSettings'
    if 'Bone' in target:
        class_name = 'AnimBoneCompressionSettings'
    
    # Get all assets of the specified class
    search_target = get_assets(
        class_names=[class_name],
        recursive_paths=True,
    )
    
    # Find the compression setting asset with the specified name
    setting = next((obj for obj in search_target if obj.asset_name == target), None)
    
    if setting is not None:
        if 'Bone' in target:
            anim_lib.set_bone_compression_settings(asset, setting)
            unreal.log_warning("Set {target} to '{comp}'".format(target=target, comp=setting))
        elif 'Curve' in target:
            anim_lib.set_curve_compression_settings(asset, setting)
            unreal.log_warning("Set {target} to '{comp}'".format(target=target, comp=setting))
        else:
            unreal.log_error("Neither 'Bone' nor 'Curve' was specified - no compression settings were changed for '{assetPath}'".format(assetPath=asset))
        
        asset.modify(True)
    else:
        unreal.log_error("Could not find '{assetPath}' - please create that first with that exact name".format(assetPath=target))


# Main
selectedAssets = editor_utility.get_selected_assets()
for selectedAsset in selectedAssets:
	# look at array 'NotifierTracks' to change tracks to add
	# look at array 'Curves' to change float curves to add
	add_notifier_tracks_and_curves()
	
	# we set the compression to a very simple, fast compression to speed up time to process each animation
	# this SimpleAnimBoneCompressionSettings setting needs to be created (or use Dev Bastian plugin)
	set_compression_setting(selectedAsset, 'SimpleAnimBoneCompressionSettings')
	# this SimpleAnimCurveCompressionSettings setting needs to be created (or use Dev Bastian plugin)
	set_compression_setting(selectedAsset, 'SimpleAnimCurveCompressionSettings')
	
	# parameter: root bone, left foot bone, right feet bone, zero point for foot (-33.86 for Manny)
	track_feet_bones('root', 'foot_l', 'foot_r', -33.86)
	
	# reset to the standard compression
	set_compression_setting(selectedAsset, 'DefaultAnimBoneCompressionSettings')
	set_compression_setting(selectedAsset, 'DefaultAnimCurveCompressionSettings')
	

