# Bastian Developer. MIT license
#
# Will search selected Animation assets to contain three animation notifier tracks used by Lyra: LeftFootFX, RightFootFX, ContextFX
# If the tracks are not found, they will be added

import unreal
from numpy import * # needs Plugin "Python Foundation Packages"

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

# get all assets that have been selected
selectedAssets = editorUtility.get_selected_assets()
if len(selectedAssets) == 0:
	unreal.log_error("No assets have been selected to check for NotifyTracks - exiting scipt!")
	exit()

# define and log array of tracks we want to have in each animation
TracksNeeded = ['LeftFootFX', 'RightFootFX', 'ContextFX','FootSyncMarkers']
for track in TracksNeeded:
	unreal.log("Track to be expected: [%s]" % (track))

# open selected assets and compare tracks found with our predefined array 'TracksNeeded'
for selectedAsset in selectedAssets:
	unreal.log("Checking '%s'..." % selectedAsset.get_name())
	# copy array to remove what we find and only create all the surviving tracks
	tmpTracksNeeded = TracksNeeded.copy()
	try:
		allNotifyTracksForSelectedAsset = animLib.get_animation_notify_track_names(selectedAsset)
	except:
		# exception getting tracks - maybe thisis not an animation asset?
		unreal.log_error("'{asset}' has no tracks - maybe you selected an non-animation asset here?".format(asset = selectedAsset.get_name()))
		continue
	for existingTrack in allNotifyTracksForSelectedAsset:
		unreal.log("{asset}: Found track '{track}'".format(asset = selectedAsset.get_name(), track = existingTrack))
		# if name found is already in our tmpArray, remove it from there
		try :
			tmpTracksNeeded.index(existingTrack) # this will throw an exception if not found
			tmpTracksNeeded.remove(existingTrack)
		except ValueError :
			unreal.log_warning("Unknown track '{track}' already exists in asset '{asset}'".format(track = existingTrack, asset = selectedAsset.get_name()))
    # if nothing remains, we continue to the next iteration
	if len(tmpTracksNeeded) == 0:
		unreal.log_warning("Nothing to do in asset '{asset}'".format(asset = selectedAsset.get_name()))
		continue
	# now we have pruned the tmpTracksNeeded - but its not empty - let's add what is missing
	for remainingTrack in tmpTracksNeeded:
		animLib.add_animation_notify_track(selectedAsset, remainingTrack)
		unreal.log_warning("I ADDED track '{track}'".format(track = remainingTrack))
		selectedAsset.modify(True)
