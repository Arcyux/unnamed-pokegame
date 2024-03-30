MossdeepCity_House1_MapScripts::
	.byte 0

MossdeepCity_House1_EventScript_BlackBelt::
	lock
	faceplayer
	bufferleadmonspeciesname STR_VAR_1
	msgbox MossdeepCity_House1_Text_HmmYourPokemon, MSGBOX_DEFAULT
	goto_if_eq VAR_RESULT, 0, MossdeepCity_House1_EventScript_NeutralNature
	release
	end

MossdeepCity_House1_EventScript_NeutralNature::
	release
	end

MossdeepCity_House1_EventScript_Woman::
	end

MossdeepCity_House1_Text_HmmYourPokemon:
	.string "Hmm!\n"
	.string "Your {STR_VAR_1}…$"
