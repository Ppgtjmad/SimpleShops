#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
private "_ind";

disableSerialization;

HG_GARAGE_INFO ctrlShow false;
lbClear HG_GARAGE_LIST;

{
    _x ctrlEnable true;
} forEach [HG_GARAGE_LIST,HG_GARAGE_REFRESH_BTN,HG_GARAGE_SPAWN_BTN,HG_GARAGE_DELETE_BTN];

if((count _this) != 0) then
{
    private "_color";
	
    {
	    _color = if((_x select 2) isEqualTo "") then {(localize "STR_HG_DEFAULT")} else {(getText(configFile >> "CfgVehicles" >> (_x select 0) >> "TextureSources" >> (_x select 2) >> "displayName"))};
        _ind = HG_GARAGE_LIST lbAdd format[(localize "STR_HG_GRG_LIST"),(getText(configFile >> "CfgVehicles" >> (_x select 0) >> "displayName")),_color];
		HG_GARAGE_LIST lbSetData[_ind,format["%1/%2",(_x select 0),(_x select 2)]];
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
