#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_target","_caller","_id","_garage"];
if((typeName _garage) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if(_garage isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};

private["_condition","_isOk"];
_condition = getText(getMissionConfig "CfgClient" >> "HG_GaragesCfg" >> _garage >> "conditionToAccess");
_isOk = (_condition isEqualTo "") OR (call compile _condition);
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
