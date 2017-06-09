#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_target","_caller","_id","_garage"];
if((typeName _garage) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if(_garage isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};

disableSerialization;

createDialog "HG_Garage";

HG_STRING_HANDLER = _garage;
HG_SPAWN_POINTS = getArray(missionConfigFile >> "CfgClient" >> "HG_GaragesCfg" >> _garage >> "spawnPoints");

[] call HG_fnc_refreshGarage;
