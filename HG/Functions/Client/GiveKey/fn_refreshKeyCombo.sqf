#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
private["_owners","_all"];

disableSerialization;

HG_GK_REFRESH_BTN ctrlEnable false;
lbClear HG_GK_PLAYERS_COMBO;
HG_ARRAY_HANDLER = [];

_owners = (HG_CURSOR_OBJECT getVariable "HG_Owner") select 3;
_all = (allPlayers - entities "HeadlessClient_F" - [player]) select {!((getPlayerUID _x) in _owners)};

if((count _all) != 0) then
{
    private "_ind";
	
    {
	    _ind = HG_GK_PLAYERS_COMBO lbAdd format["%1 - %2",(name _x),(getPlayerUID _x)];
		HG_GK_PLAYERS_COMBO lbSetData [_ind,(getPlayerUID _x)];
		HG_GK_PLAYERS_COMBO lbSetValue [_ind,_forEachIndex];
		HG_ARRAY_HANDLER pushBack _x;
	} forEach _all;
	
	HG_GK_GIVE_BTN ctrlEnable true;
} else {
    HG_GK_PLAYERS_COMBO lbAdd (localize "STR_HG_NOTHING_TO_DISPLAY");
	HG_GK_GIVE_BTN ctrlEnable false;
};

HG_GK_PLAYERS_COMBO lbSetCurSel 0;
HG_GK_REFRESH_BTN ctrlEnable true;

true;
