#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
*/
params["_target","_caller","_id","_spawnPoints"];
if((typeName _spawnPoints) != "ARRAY") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_3");};
if((count _spawnPoints) isEqualTo 0) exitWith {hint (localize "STR_HG_ERR_ON_LOAD_4");};

disableSerialization;

createDialog "HG_Garage";

HG_SPAWN_POINTS = _spawnPoints;

[] call HG_fnc_refreshGarage;
