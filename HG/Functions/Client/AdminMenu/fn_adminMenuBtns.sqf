#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_mode"];

disableSerialization;

switch(_mode) do
{
	// Kill
	case 0:
	{
	    HG_OBJECT setDamage 1;
		if(HG_OBJECT != player) then
		{
		    [(localize "STR_HG_KILLED_BY_ADMIN")] remoteExecCall ["hint",HG_OBJECT,false];
		};
	};
	// Set rank
	case 1:
	{
	    private _rank = HG_ADM_COMBO lbData (lbCurSel HG_ADM_COMBO);
		[HG_OBJECT,_rank] remoteExecCall ["HG_fnc_setRank",HG_OBJECT,false];
	};
	// Set XP
	case 2:
	{
	    private _value = parseNumber(ctrlText HG_ADM_XP_EDIT);
	    if(!([_value] call HG_fnc_isNumeric)) exitWith {hint (localize "STR_HG_NOT_A_NUMBER");};
		if(_value <= 0) exitWith {hint (localize "STR_HG_NEGATIVE_OR_ZERO");};
		
		if(cbChecked HG_ADM_XP_SUB) then
		{
		    [_value,1] remoteExecCall ["HG_fnc_addOrSubXP",HG_OBJECT,false];
		} else {
		    [_value,0] remoteExecCall ["HG_fnc_addOrSubXP",HG_OBJECT,false];
		};
		
		HG_ADM_XP_EDIT ctrlSetText "1";
	};
	// Set kills
	case 3:
	{
	    private _value = parseNumber(ctrlText HG_ADM_KILLS_EDIT);
		if(!([_value] call HG_fnc_isNumeric)) exitWith {hint (localize "STR_HG_NOT_A_NUMBER");};
		if(_value <= 0) exitWith {hint (localize "STR_HG_NEGATIVE_OR_ZERO");};
		
		if(cbChecked HG_ADM_KILLS_SUB) then
		{
		    [1,_value] remoteExecCall ["HG_fnc_addOrSubKills",HG_OBJECT,false];
		} else {
		    [0,_value] remoteExecCall ["HG_fnc_addOrSubKills",HG_OBJECT,false];
		};
		
		HG_ADM_KILLS_EDIT ctrlSetText "1";
	};
	// Set cash
	case 4:
	{
	    private _value = parseNumber(ctrlText HG_ADM_CASH_EDIT);
		if(!([_value] call HG_fnc_isNumeric)) exitWith {hint (localize "STR_HG_NOT_A_NUMBER");};
		if(_value <= 0) exitWith {hint (localize "STR_HG_NEGATIVE_OR_ZERO");};
		
		if(cbChecked HG_ADM_CASH_SUB) then
		{
		    [_value,1] remoteExecCall ["HG_fnc_addOrSubCash",HG_OBJECT,false];
		} else {
		    [_value,0] remoteExecCall ["HG_fnc_addOrSubCash",HG_OBJECT,false];
		};
		
		HG_ADM_CASH_EDIT ctrlSetText "1";
	};
};

[] call HG_fnc_refreshPlayers;

true;
