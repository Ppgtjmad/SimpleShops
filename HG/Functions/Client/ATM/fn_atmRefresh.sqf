#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

disableSerialization;

HG_ATM_REFRESH_BTN ctrlEnable false;
lbClear HG_ATM_PLAYERS_COMBO;

HG_ATM_ACC_TEXT ctrlSetText ([(player getVariable "HG_Bank"),true] call HG_fnc_currencyToText);
HG_ATM_CASH_TEXT ctrlSetText ([(player getVariable "HG_Cash"),true] call HG_fnc_currencyToText);

{
    _x ctrlSetText "0";
} forEach [HG_ATM_ACC_EDIT,HG_ATM_CASH_EDIT];

HG_TEMP_ARRAY = allPlayers - entities "HeadlessClient_F" - [player];

if((count HG_TEMP_ARRAY) != 0) then
{
    private "_ind";
	
    {
	    _ind = HG_ATM_PLAYERS_COMBO lbAdd (name _x);
		HG_ATM_PLAYERS_COMBO lbSetValue [_ind,_forEachIndex];
	} forEach HG_TEMP_ARRAY;
	
	HG_ATM_TRANSFER_BTN ctrlEnable true;
} else {
    HG_ATM_PLAYERS_COMBO lbAdd (localize "STR_HG_ATM_NO_PLAYERS");
	
	HG_ATM_TRANSFER_BTN ctrlEnable false;
};

HG_ATM_REFRESH_BTN ctrlEnable true;
HG_ATM_PLAYERS_COMBO lbSetCurSel 0;

true;
