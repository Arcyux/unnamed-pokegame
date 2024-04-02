MysteriousCave_1F_2R_MapScripts::
# 2 "data/maps/MysteriousCave_1F_2R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MysteriousCave_1F_2R_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MysteriousCave_1F_2R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/MysteriousCave_1F_2R/scripts.pory"
	setflag FLAG_SYS_DEXNAV_GET
# 4 "data/maps/MysteriousCave_1F_2R/scripts.pory"
	setflag FLAG_SYS_DETECTOR_MODE
	return

