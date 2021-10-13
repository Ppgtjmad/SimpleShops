#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
private["_val","_whitelist"];

disableSerialization;

if(ctrlShown HG_WL_INFO_TEXT) then
{
    HG_WL_UID_EDIT ctrlSetText "";
    HG_WL_INFO_TEXT ctrlShow false;
	HG_WL_UID_LIST ctrlEnable true;
	HG_WL_SIDE_COMBO ctrlEnable true;
	HG_WL_UID_ADD ctrlEnable true;
};

_val = HG_WL_SIDE_COMBO lbValue (lbCurSel HG_WL_SIDE_COMBO);
_whitelist = HG_WHITELIST select _val;

lbClear HG_WL_UID_LIST;

if((count _whitelist) != 0) then
{
    private "_ind";
	
    {
	    _ind = HG_WL_UID_LIST lbAdd _x;
		HG_WL_UID_LIST lbSetData [_ind,_x];
	} forEach _whitelist;
	
    HG_WL_UID_REMOVE ctrlEnable true;
} else {
    HG_WL_UID_LIST lbAdd (localize "STR_HG_NOTHING_TO_DISPLAY");
    HG_WL_UID_REMOVE ctrlEnable false;
};

HG_WL_UID_LIST lbSetCurSel 0;

true;

