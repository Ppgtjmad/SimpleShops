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
    // Refresh
    case 0: 
	{
	    [] call HG_fnc_refreshGarage;
	};
	// Spawn
	case 1: 
	{
		private _spawnPoint = [HG_SPAWN_POINTS] call HG_fnc_isItBusy;
		if(_spawnPoint != "") then
		{
		    hint (localize "STR_HG_GRG_VEHICLE_SPAWNING");
		    closeDialog 0;
	        [1,player,(HG_GARAGE_LIST lbData (lbCurSel HG_GARAGE_LIST)),_spawnPoint,(HG_GARAGE_LIST lbValue (lbCurSel HG_GARAGE_LIST))] remoteExecCall ["HG_fnc_spawnVehicle",2,false];
		} else {
		    hint (localize "STR_HG_SPAWN_POINTS_BUSY");
		};
	};
	// Delete
	case 2: 
	{
	    [] call HG_fnc_delVehicle;
	};
};
