#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
private["_shopList","_ind"];

disableSerialization;

lbClear HG_UNITS_UNIT_SWITCH;

_shopList = "true" configClasses (getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER);

{
    _ind = HG_UNITS_UNIT_SWITCH lbAdd (getText(_x >> "displayName"));
	HG_UNITS_UNIT_SWITCH lbSetPicture [_ind,[getText(_x >> "rank"),"texture"] call BIS_fnc_rankParams];
	HG_UNITS_UNIT_SWITCH lbSetData [_ind,(configName _x)];
	HG_UNITS_UNIT_SWITCH lbSetValue [_ind,(getNumber(_x >> "cost"))];
} forEach _shopList;

HG_UNITS_UNIT_SWITCH lbSetCurSel 0;

true;
