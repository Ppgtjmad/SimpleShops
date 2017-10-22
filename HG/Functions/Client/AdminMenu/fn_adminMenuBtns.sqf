#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_mode","_value"];

disableSerialization;

if(_mode in [0,1,2,3]) then
{
    _value = [(ctrlText HG_ADM_XP_EDIT),(ctrlText HG_ADM_KILLS_EDIT),(ctrlText HG_ADM_CASH_EDIT),(ctrlText HG_ADM_BANK_EDIT)] select _mode;
	if(_value isEqualTo "") exitWith {hint (localize "STR_HG_VALUE_EMPTY");};
	if(!([_value] call HG_fnc_isNumeric)) exitWith {hint (localize "STR_HG_NOT_A_NUMBER");};
	_value = parseNumber _value;
	if(_value <= 0) exitWith {hint (localize "STR_HG_NEGATIVE_OR_ZERO");};
};

switch(_mode) do
{
	// Set XP
	case 0:
	{
	    if(!HG_XP_ENABLED) exitWith {hint (localize "STR_HG_DLG_XP_DISABLED");};
		
		if(cbChecked HG_ADM_XP_SUB) then
		{
		    [_value,1] remoteExecCall ["HG_fnc_addOrSubXP",HG_OBJECT,false];
		} else {
		    [_value,0] remoteExecCall ["HG_fnc_addOrSubXP",HG_OBJECT,false];
		};
		
		HG_ADM_XP_EDIT ctrlSetText "1";
	};
	// Set kills
	case 1:
	{
	    if(!HG_KILL_COUNT_ENABLED) exitWith {hint (localize "STR_HG_DLG_KILLS_DISABLED");};
	   
		if(cbChecked HG_ADM_KILLS_SUB) then
		{
		    [1,_value] remoteExecCall ["HG_fnc_addOrSubKills",HG_OBJECT,false];
		} else {
		    [0,_value] remoteExecCall ["HG_fnc_addOrSubKills",HG_OBJECT,false];
		};
		
		HG_ADM_KILLS_EDIT ctrlSetText "1";
	};
	// Set cash
	case 2:
	{
		if(cbChecked HG_ADM_CASH_SUB) then
		{
		    [_value,1] remoteExecCall ["HG_fnc_addOrSubCash",HG_OBJECT,false];
		} else {
		    [_value,0] remoteExecCall ["HG_fnc_addOrSubCash",HG_OBJECT,false];
		};
		
		HG_ADM_CASH_EDIT ctrlSetText "1";
	};
	// Set bank
	case 3:
	{
		if(cbChecked HG_ADM_BANK_SUB) then
		{
		    [_value,1,1] remoteExecCall ["HG_fnc_addOrSubCash",HG_OBJECT,false];
		} else {
		    [_value,0,1] remoteExecCall ["HG_fnc_addOrSubCash",HG_OBJECT,false];
		};
		
		HG_ADM_BANK_EDIT ctrlSetText "1";
	};
	// Kill
	case 4:
	{
	    HG_OBJECT setDamage 1;
		if(HG_OBJECT != player) then
		{
		    [(localize "STR_HG_KILLED_BY_ADMIN")] remoteExecCall ["hint",HG_OBJECT,false];
		};
	};
	// Set rank
	case 5:
	{
	    private _rank = HG_ADM_COMBO lbData (lbCurSel HG_ADM_COMBO);
		[HG_OBJECT,_rank] remoteExecCall ["HG_fnc_setRank",HG_OBJECT,false];
	};
};

[] call HG_fnc_refreshPlayers;

true;
