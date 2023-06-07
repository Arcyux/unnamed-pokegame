NewMap1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewMap1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NewMap1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setweather WEATHER_SNOW
	return


NewMap1_EventScript_EncounterRandomMon::
	lock
	random NUM_SPECIES - 1
	copyvar VAR_TEMP_0, VAR_RESULT
	addvar VAR_TEMP_0, 1
	random 100
	copyvar VAR_TEMP_1, VAR_RESULT
	addvar VAR_TEMP_1, 1
	setwildbattle VAR_TEMP_0, VAR_TEMP_1
	waitse
	playmoncry VAR_TEMP_0, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	release
	end

