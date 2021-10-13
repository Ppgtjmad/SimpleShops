#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
private["_owners","_ind"];

disableSerialization;

lbClear HG_GK_OWNERS_LIST;

_owners = (HG_CURSOR_OBJECT getVariable "HG_Owner") select 3;

if((count _owners) != 0) then
{
    {
	    _ind = HG_GK_OWNERS_LIST lbAdd _x;
	    HG_GK_OWNERS_LIST lbSetData [_ind,_x];
	} forEach _owners;
	
	HG_GK_REMOVE_BTN ctrlEnable true;
} else {
    _ind = HG_GK_OWNERS_LIST lbAdd (localize "STR_HG_NOTHING_TO_DISPLAY");
	HG_GK_OWNERS_LIST lbSetData [_ind,(localize "STR_HG_NONE")];
	
	HG_GK_REMOVE_BTN ctrlEnable false;
};

HG_GK_OWNERS_LIST lbSetCurSel 0;

true;
