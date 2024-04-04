MysteriousCave_1F_1R_MapScripts::
	.byte 0


MakeHole::
# 4 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	lock
# 6 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	setvar VAR_0x8004, 1
# 7 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	setvar VAR_0x8005, 1
# 8 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	setvar VAR_0x8006, 8
# 9 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	setvar VAR_0x8007, 5
# 10 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	special ShakeCamera
# 11 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	waitstate
# 13 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	setmetatile 9, 9, METATILE_Cave_CrackedFloor_Hole, FALSE
# 14 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	special DrawWholeMapView
# 15 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	playse SE_CLICK
# 16 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	waitse
# 17 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	delay 20
# 19 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	setflag FLAG_SHOW_MYSTERIOUS_CAVE_NAME
# 20 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	warphole MAP_MYSTERIOUS_CAVE_B1F_1R
# 22 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	setvar VAR_TEMP_0, 1
# 23 "data/maps/MysteriousCave_1F_1R/scripts.pory"
	release
	return

