#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
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
	// Add UID to whitelist
	case 6:
	{
	    private _uid = ctrlText HG_WL_UID_EDIT;
		if(_uid isEqualTo "") exitWith {hint (localize "STR_HG_DLG_WL_UID_EMPTY");};
		if(!([_uid] call HG_fnc_isNumeric)) exitWith {hint (localize "STR_HG_DLG_WL_UID_NOT_NUMBER");};
		
		private _length = count _uid;
		if(_length != 17) exitWith {hint format[(localize "STR_HG_DLG_WL_UID_NOT_VALID"),_length];};
		
		private["_val","_sel"];
		_val = HG_WL_SIDE_COMBO lbValue (lbCurSel HG_WL_SIDE_COMBO);
		_sel = HG_WHITELIST select _val;
		if(_uid in _sel) exitWith {hint (localize "STR_HG_DLG_WL_UID_ALREADY");};
		
		HG_WL_UID_LIST ctrlEnable false;
		HG_WL_SIDE_COMBO ctrlEnable false;
		HG_WL_INFO_TEXT ctrlShow true;
		HG_WL_UID_ADD ctrlEnable false; 
		HG_WL_UID_REMOVE ctrlEnable false;
		
		hint format[(localize "STR_HG_DLG_WL_ADDED"),_uid,(HG_WL_SIDE_COMBO lbText (lbCurSel HG_WL_SIDE_COMBO))];
		[(HG_WL_SIDE_COMBO lbData (lbCurSel HG_WL_SIDE_COMBO)),(HG_WL_SIDE_COMBO lbValue (lbCurSel HG_WL_SIDE_COMBO)),_uid] remoteExecCall ["HG_fnc_updateWhitelist",2,false];
	};
	// Remove UID from whitelist
	case 7:
	{
	    HG_WL_UID_LIST ctrlEnable false;
		HG_WL_SIDE_COMBO ctrlEnable false;
	    HG_WL_INFO_TEXT ctrlShow true;
		HG_WL_UID_ADD ctrlEnable false; 
		HG_WL_UID_REMOVE ctrlEnable false;
		
		hint format[(localize "STR_HG_DLG_WL_REMOVED"),(HG_WL_UID_LIST lbData (lbCurSel HG_WL_UID_LIST)),(HG_WL_SIDE_COMBO lbText (lbCurSel HG_WL_SIDE_COMBO))];
		[(HG_WL_SIDE_COMBO lbData (lbCurSel HG_WL_SIDE_COMBO)),(HG_WL_SIDE_COMBO lbValue (lbCurSel HG_WL_SIDE_COMBO)),(HG_WL_UID_LIST lbData (lbCurSel HG_WL_UID_LIST))] remoteExecCall ["HG_fnc_updateWhitelist",2,false];
	};
};

if(!(_mode in [6,7])) then
{
    [] call HG_fnc_refreshPlayers;
};

true;
