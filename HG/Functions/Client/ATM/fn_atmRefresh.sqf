#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
if(isNull HG_ATM_DISP) exitWith {true};

disableSerialization;

HG_ATM_REFRESH_BTN ctrlEnable false;
lbClear HG_ATM_PLAYERS_COMBO;

HG_ATM_ACC_TEXT ctrlSetText ([(player getVariable HG_BANK_VAR),true] call HG_fnc_currencyToText);
HG_ATM_CASH_TEXT ctrlSetText ([(player getVariable HG_CASH_VAR),true] call HG_fnc_currencyToText);

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
    HG_ATM_PLAYERS_COMBO lbAdd (localize "STR_HG_NO_ONLINE_PLAYERS");
	
	HG_ATM_TRANSFER_BTN ctrlEnable false;
};

HG_ATM_REFRESH_BTN ctrlEnable true;
HG_ATM_PLAYERS_COMBO lbSetCurSel 0;

true;
