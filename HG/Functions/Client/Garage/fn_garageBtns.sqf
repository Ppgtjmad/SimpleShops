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
	    private["_index","_spawnPoint","_isBusy"];
		
		_index = HG_GARAGE_SP lbValue (lbCurSel HG_GARAGE_SP);
		_spawnPoint = (HG_SPAWN_POINTS select _index) select 1;
		_isBusy = nearestObjects [(markerPos _spawnPoint),["Car","Truck","Air","Tank","Ship","Submarine"],5];
		
		if((count _isBusy) isEqualTo 0) then
		{
		    hint (localize "STR_HG_GRG_VEHICLE_SPAWNING");
		    closeDialog 0;
	        [1,player,(HG_GARAGE_LIST lbData (lbCurSel HG_GARAGE_LIST)),_spawnPoint,(HG_GARAGE_LIST lbValue (lbCurSel HG_GARAGE_LIST))] remoteExecCall ["HG_fnc_spawnVehicle",2,false];
		} else {
		    hint (localize "STR_HG_SPAWN_POINT_BUSY");
		};
	};
	// Delete
	case 2: 
	{
	    [] call HG_fnc_delVehicle;
	};
};
