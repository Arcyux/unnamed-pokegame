MysteriousCave_B1F_1R_MapScripts::
# 4 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MysteriousCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MysteriousCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME
# 21 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MysteriousCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MysteriousCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setrespawn HEAL_LOCATION_MYSTERIOUS_CAVE
# 6 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	call RandomArceusStarter
# 7 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setflag FLAG_DEFEATED_FIRST_ENCOUNTER
	return

MysteriousCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME:
# 11 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	goto_if_set FLAG_DEFEATED_FIRST_ENCOUNTER, MysteriousCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME_2
MysteriousCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 15 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	goto_if_set FLAG_SHOW_MYSTERIOUS_CAVE_NAME, MysteriousCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME_4
	return

MysteriousCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 12 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	removeobject 1
	goto MysteriousCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME_1

MysteriousCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_RESUME_4:
# 16 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	special ShowMapNamePopup
# 17 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	clearflag FLAG_SHOW_MYSTERIOUS_CAVE_NAME
	return

MysteriousCave_B1F_1R_MapScripts_MAP_SCRIPT_ON_LOAD:
# 22 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	call OpenCloseExit
	return


OpenCloseExit:
# 27 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	goto_if_set FLAG_DEFEATED_FIRST_ENCOUNTER, OpenCloseExit_2
# 32 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setmetatile 9, 1, METATILE_Cave_Exit_Closed, TRUE
# 33 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setmetatile 9, 2, METATILE_Cave_Exit_Closed, TRUE
OpenCloseExit_1:
# 35 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	special DrawWholeMapView
	return

OpenCloseExit_2:
# 28 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setmetatile 9, 1, METATILE_Cave_Exit_Top, TRUE
# 29 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setmetatile 9, 2, METATILE_Cave_Exit_Bottom, FALSE
	goto OpenCloseExit_1


RandomArceus:
# 39 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	random 18
# 40 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 41 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	subvar VAR_TEMP_0, 1
# 42 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	switch VAR_TEMP_0
# 43 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case -1, RandomArceus_3
# 46 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	addvar VAR_TEMP_0, SPECIES_ARCEUS_FIGHTING
RandomArceus_1:
# 49 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	switch VAR_TEMP_0
# 50 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_NORMAL, RandomArceus_6
# 53 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_FIGHTING, RandomArceus_7
# 56 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_FLYING, RandomArceus_8
# 59 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_POISON, RandomArceus_9
# 62 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_GROUND, RandomArceus_10
# 65 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_ROCK, RandomArceus_11
# 68 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_BUG, RandomArceus_12
# 71 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_GHOST, RandomArceus_13
# 74 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_STEEL, RandomArceus_14
# 77 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_FIRE, RandomArceus_15
# 80 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_WATER, RandomArceus_16
# 83 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_GRASS, RandomArceus_17
# 86 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_ELECTRIC, RandomArceus_18
# 89 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_PSYCHIC, RandomArceus_19
# 92 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_ICE, RandomArceus_20
# 95 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_DRAGON, RandomArceus_21
# 98 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_DARK, RandomArceus_22
# 101 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	case SPECIES_ARCEUS_FAIRY, RandomArceus_23
	return

RandomArceus_3:
# 44 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_ARCEUS_NORMAL
	goto RandomArceus_1

RandomArceus_6:
# 51 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_BLANK_PLATE
# 52 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_NORMAL
	return

RandomArceus_7:
# 54 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_FIST_PLATE
# 55 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_FIGHTING
	return

RandomArceus_8:
# 57 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_SKY_PLATE
# 58 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_FLYING
	return

RandomArceus_9:
# 60 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TOXIC_PLATE
# 61 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_POISON
	return

RandomArceus_10:
# 63 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_EARTH_PLATE
# 64 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_GROUND
	return

RandomArceus_11:
# 66 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_STONE_PLATE
# 67 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_ROCK
	return

RandomArceus_12:
# 69 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_INSECT_PLATE
# 70 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_BUG
	return

RandomArceus_13:
# 72 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_SPOOKY_PLATE
# 73 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_GHOST
	return

RandomArceus_14:
# 75 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_IRON_PLATE
# 76 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_STEEL
	return

RandomArceus_15:
# 78 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_FLAME_PLATE
# 79 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_FIRE
	return

RandomArceus_16:
# 81 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_SPLASH_PLATE
# 82 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_WATER
	return

RandomArceus_17:
# 84 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_MEADOW_PLATE
# 85 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_GRASS
	return

RandomArceus_18:
# 87 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_ZAP_PLATE
# 88 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_ELECTRIC
	return

RandomArceus_19:
# 90 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_MIND_PLATE
# 91 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_PSYCHIC
	return

RandomArceus_20:
# 93 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_ICICLE_PLATE
# 94 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_ICE
	return

RandomArceus_21:
# 96 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_DRACO_PLATE
# 97 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_DRAGON
	return

RandomArceus_22:
# 99 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_DREAD_PLATE
# 100 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_DARK
	return

RandomArceus_23:
# 102 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_1, ITEM_PIXIE_PLATE
# 103 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setvar VAR_TEMP_2, TYPE_FAIRY
	return


RandomArceusStarter:
# 108 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	goto_if_unset FLAG_STARTER_GIVEN, RandomArceusStarter_1
	return

RandomArceusStarter_1:
# 109 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	call RandomArceus
# 111 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	givemon SPECIES_UNOWN, 5, ITEM_NONE, , , , , , , , , , , , , , , , , , MOVE_LEGEND_POWER, , , , , VAR_TEMP_2
# 116 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RandomArceusStarter_4
RandomArceusStarter_3:
# 121 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setflag FLAG_STARTER_GIVEN
# 122 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 123 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
	return

RandomArceusStarter_4:
	goto RandomArceusStarter_3


RandomArceusEncounter::
# 128 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	lock
# 129 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	waitse
# 131 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	call RandomArceusStarter
# 133 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
# 134 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	waitmoncry
# 136 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	call RandomArceus
# 137 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	copyvar VAR_TEMP_3, VAR_TEMP_0
# 138 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	copyvar VAR_TEMP_4, VAR_TEMP_1
# 139 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	call RandomArceus
# 141 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setwildbattle VAR_TEMP_0, 1, VAR_TEMP_1, VAR_TEMP_3, 1, VAR_TEMP_4
# 142 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	dowildbattle
# 144 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq RandomArceusEncounter_2
RandomArceusEncounter_1:
# 153 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	releaseall
	return

RandomArceusEncounter_2:
# 145 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	playse SE_CLICK
# 146 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	removeobject 1
# 148 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setflag FLAG_DEFEATED_FIRST_ENCOUNTER
# 150 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	call OpenCloseExit
	goto RandomArceusEncounter_1


FollowPlayer::
# 157 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	lock
# 158 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	faceplayer
# 159 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	loadword 0, TalkToPlayer
# 160 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	setfollower 2, FOLLOWER_FLAG_ALL | FOLLOWER_FLAG_CUSTOM_FOLLOW_SCRIPT
# 161 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	release
	return


TalkToPlayer::
# 165 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	objectfaceplayer OBJ_EVENT_ID_FOLLOWER
# 166 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	msgbox TalkToPlayer_Text_0, MSGBOX_AUTOCLOSE
	return


TalkToPlayer_Text_0:
# 166 "data/maps/MysteriousCave_B1F_1R/scripts.pory"
	.string "Yo.$"
