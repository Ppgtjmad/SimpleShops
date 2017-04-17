#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when selection in listbox has changed
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_ctrl","_index","_item","_itemClass","_itemPicture","_itemDescription"];

disableSerialization;

_item = _ctrl lbData _index;
_itemClass = [_item] call HG_fnc_getConfig;
_itemPicture = getText(configFile >> _itemClass >> _item >> "Picture");
_itemDescription = getText(configFile >> _itemClass >> _item >> "descriptionShort");
	
HG_WEAPONS_ITEM_PICTURE ctrlSetText _itemPicture;
HG_WEAPONS_ITEM_TEXT ctrlSetStructuredText parseText format
[
	"
		<t align='center' size='1'><br />%1</t>
	"
	,_itemDescription
];

true;
