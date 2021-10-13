#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_mode","_uid","_infos","_owners"];

disableSerialization;

_uid = HG_GK_PLAYERS_COMBO lbData (lbCurSel HG_GK_PLAYERS_COMBO);
_infos = HG_CURSOR_OBJECT getVariable "HG_Owner";
_owners = _infos select 3;

if(_mode isEqualTo 0) then
{
	_owners deleteAt (_owners find _uid);
	
    [] call HG_fnc_refreshKeyCombo;
} else {
	_owners pushBack _uid;
	private _unit = HG_ARRAY_HANDLER select (HG_GK_PLAYERS_COMBO lbValue (lbCurSel HG_GK_PLAYERS_COMBO));
	
    hint format[(localize "STR_HG_DLG_GK_GIVE"),(getText(configFile >> "CfgVehicles" >> (typeOf HG_CURSOR_OBJECT) >> "displayName")),(name _unit)];
	[format[(localize "STR_HG_DLG_GK_GIVEN"),profileName,(getText(configFile >> "CfgVehicles" >> (typeOf HG_CURSOR_OBJECT) >> "displayName"))]] remoteExecCall ["hint",_unit,false];
};

_infos set [3,_owners];
HG_CURSOR_OBJECT setVariable ["HG_Owner",_infos,true];

[] call HG_fnc_refreshKeyList;

true;
