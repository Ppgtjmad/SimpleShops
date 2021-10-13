#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/

createDialog "HG_AdminMenu";

disableSerialization;

HG_OBJECT = objNull;

[] call HG_fnc_refreshPlayers;

if(HG_WHITELISTED_ENABLED) then
{
    {
	    _x ctrlShow true;
	} forEach [HG_WL_HEADER,HG_WL_HEADER_TEXT,HG_WL_BACK,HG_WL_BACK_FRAME,HG_WL_LINE,HG_WL_UID_ADD_PIC,HG_WL_UID_REMOVE_PIC,HG_WL_SIDE_COMBO,HG_WL_UID_LIST,HG_WL_UID_EDIT,HG_WL_UID_ADD,HG_WL_UID_REMOVE];

	lbClear HG_WL_SIDE_COMBO;
	
	private["_sides","_side","_ind"];
	
	_sides = getArray(getMissionConfig "CfgClient" >> "whitelistSides");
	
	{
		_side = switch(toLower _x) do
		{
		    case "civilian": {(localize "STR_HG_DLG_WL_SIDE_CIV")};
		    case "west": {(localize "STR_HG_DLG_WL_SIDE_WEST")};
		    case "resistance": {(localize "STR_HG_DLG_WL_SIDE_GUER")};
		    case "east": {(localize "STR_HG_DLG_WL_SIDE_EAST")};
	    };
        _ind = HG_WL_SIDE_COMBO lbAdd _side;
	    HG_WL_SIDE_COMBO lbSetData [_ind,(toLower _x)];
	    HG_WL_SIDE_COMBO lbSetValue [_ind,_forEachIndex];
    } forEach _sides;
	
	HG_WL_SIDE_COMBO lbSetCurSel 0;
};

true;
