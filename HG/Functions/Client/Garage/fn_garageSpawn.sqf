#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
private "_spawnPoint";

disableSerialization;
	
_spawnPoint = [((HG_SPAWN_POINTS select (HG_GARAGE_SP lbValue (lbCurSel HG_GARAGE_SP))) select 1)] call HG_fnc_isItBusy;

if(_spawnPoint select 0) then
{
	hint (localize "STR_HG_GRG_VEHICLE_SPAWNING");
	private _sel = (HG_GARAGE_LIST lbData (lbCurSel HG_GARAGE_LIST)) splitString "/";
	closeDialog 0;
	[1,player,(_sel select 0),(_spawnPoint select 1),(HG_GARAGE_LIST lbValue (lbCurSel HG_GARAGE_LIST)),(_sel select 1)] remoteExecCall ["HG_fnc_spawnVehicle",2,false];
} else {
	hint (localize "STR_HG_SPAWN_POINT_BUSY");
};

true;
