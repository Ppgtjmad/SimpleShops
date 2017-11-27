#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_target","_caller","_id","_garage"];
if((typeName _garage) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if(_garage isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};

private["_whitelist","_isOk"];
_whitelist = getArray(getMissionConfig "CfgClient" >> "HG_GaragesCfg" >> _garage >> "whitelistRanks");
_isOk = ((count _whitelist) isEqualTo 0) OR ((rank player) in _whitelist);
if(!_isOk) exitWith {hint (localize "STR_HG_ACCESS_DENIED");};

disableSerialization;

createDialog "HG_Garage";

HG_STRING_HANDLER = _garage;
HG_SPAWN_POINTS = getArray(getMissionConfig "CfgClient" >> "HG_GaragesCfg" >> _garage >> "spawnPoints");

lbClear HG_GARAGE_SP;

{
    _ind = HG_GARAGE_SP lbAdd (_x select 0);
	HG_GARAGE_SP lbSetValue [_ind,_forEachIndex];
} forEach HG_SPAWN_POINTS;

HG_GARAGE_SP lbSetCurSel 0;

[] call HG_fnc_refreshGarage;

true;
