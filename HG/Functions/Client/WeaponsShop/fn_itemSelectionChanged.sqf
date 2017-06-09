#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when selection in listbox has changed
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_ctrl","_index","_item","_price","_itemClass","_itemType","_cat","_itemPicture","_itemDescription"];

disableSerialization;

HG_WEAPONS_AMOUNT ctrlSetText "1";

_item = _ctrl lbData _index;
_price = _ctrl lbValue _index;
_itemClass = [_item] call HG_fnc_getConfig;
_itemType = [_item] call BIS_fnc_itemType;
_cat = _itemType select 0;
_itemPicture = getText(configFile >> _itemClass >> _item >> "Picture");
_itemDescription = getText(configFile >> _itemClass >> _item >> "descriptionShort");

if(_cat in ["Magazine","Mine","Item"]) then
{
    {
	    _x ctrlEnable true;
	} forEach [HG_WEAPONS_ADD,HG_WEAPONS_SUB];
} else {
    {
	    _x ctrlEnable false;
	} forEach [HG_WEAPONS_ADD,HG_WEAPONS_SUB];
};

HG_WEAPONS_TOTAL ctrlSetText format[(localize "STR_HG_DLG_WS_TOTAL"),([_price,true] call HG_fnc_currencyToText)];
	
HG_WEAPONS_ITEM_PICTURE ctrlSetText _itemPicture;
HG_WEAPONS_ITEM_TEXT ctrlSetStructuredText parseText format
[
	"
		<t align='center' size='1'><br />%1</t>
	"
	,_itemDescription
];

true;
