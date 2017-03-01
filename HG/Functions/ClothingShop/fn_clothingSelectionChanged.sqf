#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when selection in listbox has changed
    © All Fucks Reserved
*/
params["_ctrl","_index","_item","_price","_itemClass"];
	
disableSerialization;
	
_item = _ctrl lbData _index;
_price = _ctrl lbValue _index;
_itemClass = [_item] call HG_fnc_getConfig;
[_item,_price] call HG_fnc_gearPreview;

true;
