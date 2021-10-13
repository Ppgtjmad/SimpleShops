#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
private["_v","_ind"];

disableSerialization;

HG_DEALER_REFRESH_BTN ctrlEnable false;

HG_VEHICLES_HANDLER = [];
lbClear HG_DEALER_V_LIST;

_v = (nearestObjects [player,["Car","Truck","Tank","Air","Ship","Submarine"],50]) select {(alive _x) AND (((_x getVariable "HG_Owner") select 0) isEqualTo (getPlayerUID player))};

if((count _v) != 0) then
{
    {
	    _ind = HG_DEALER_V_LIST lbAdd (getText(configFile >> "CfgVehicles" >> (typeOf _x) >> "displayName"));
		HG_DEALER_V_LIST lbSetData [_ind,(typeOf _x)];
		HG_DEALER_V_LIST lbSetValue [_ind,_forEachIndex];
		HG_VEHICLES_HANDLER pushBack _x;
	} forEach _v;
} else {
    _ind = HG_DEALER_V_LIST lbAdd (localize "STR_HG_NOTHING_TO_DISPLAY");
	HG_DEALER_V_LIST lbSetData [_ind,(localize "STR_HG_NONE")];
};

HG_DEALER_V_LIST lbSetCurSel 0;
HG_DEALER_REFRESH_BTN ctrlEnable true;

true;
