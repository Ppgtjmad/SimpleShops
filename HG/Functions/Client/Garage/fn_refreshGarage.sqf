#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

disableSerialization;

HG_GARAGE_BACK ctrlSetText (localize "STR_HG_DLG_QUERYING_SERVER");

lbClear HG_GARAGE_LIST;

{
    _x ctrlShow false;
} forEach [HG_GARAGE_LIST,HG_GARAGE_REFRESH_BTN,HG_GARAGE_SPAWN_BTN,HG_GARAGE_DELETE_BTN];

[player,(getArray(missionConfigFile >> "CfgClient" >> "HG_GaragesCfg" >> HG_STRING_HANDLER >> "allowedTypes"))] remoteExecCall ["HG_fnc_requestGarage",2,false];

true;
