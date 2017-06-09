#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
private "_ind";

disableSerialization;

HG_GARAGE_BACK ctrlSetText "";

{
    _x ctrlShow true;
} forEach [HG_GARAGE_LIST,HG_GARAGE_REFRESH_BTN,HG_GARAGE_SPAWN_BTN,HG_GARAGE_DELETE_BTN];

if((count _this) != 0) then
{
    {
        _ind = HG_GARAGE_LIST lbAdd (getText(configFile >> "CfgVehicles" >> (_x select 0) >> "displayName"));
		HG_GARAGE_LIST lbSetData[_ind,(_x select 0)];
		HG_GARAGE_LIST lbSetValue[_ind,(_x select 1)];
    } forEach _this;
	
	{
	    _x ctrlEnable true;
	} forEach [HG_GARAGE_REFRESH_BTN,HG_GARAGE_SPAWN_BTN,HG_GARAGE_DELETE_BTN];
} else {
    _ind = HG_GARAGE_LIST lbAdd (localize "STR_HG_NOTHING_TO_DISPLAY");
	HG_GARAGE_LIST lbSetData[_ind,(localize "STR_HG_NONE")];
	
	HG_GARAGE_REFRESH_BTN ctrlEnable true;
	
	{
	    _x ctrlEnable false;
	} forEach [HG_GARAGE_SPAWN_BTN,HG_GARAGE_DELETE_BTN];
};

HG_GARAGE_LIST lbSetCurSel 0;

true;
