#include "HG_Macros.h"
/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/

disableSerialization;

HG_GARAGE_INFO ctrlSetText (localize "STR_HG_GRG_VEHICLE_DELETING");
HG_GARAGE_INFO ctrlShow true;

{
    _x ctrlEnable false;
} forEach [HG_GARAGE_LIST,HG_GARAGE_REFRESH_BTN,HG_GARAGE_SPAWN_BTN,HG_GARAGE_DELETE_BTN];

[player,(HG_GARAGE_LIST lbValue (lbCurSel HG_GARAGE_LIST)),HG_STRING_HANDLER] remoteExec ["HG_fnc_deleteVehicle",2,false];

true;
