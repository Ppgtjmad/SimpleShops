#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when you click "Buy" button in dialog
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

disableSerialization;

private _price = HG_WEAPONS_ITEM_LIST lbValue (lbCurSel HG_WEAPONS_ITEM_LIST);

if([_price] call HG_fnc_hasEnoughMoney) then
{
    private _selectedItem = HG_WEAPONS_ITEM_LIST lbData (lbCurSel HG_WEAPONS_ITEM_LIST);
	if([_selectedItem,true] call HG_fnc_handleItems) then
	{
	    private["_itemClass","_displayName"];
	    _itemClass = [_selectedItem] call HG_fnc_getConfig;
	    _displayName = getText(configFile >> _itemClass >> _selectedItem >> "displayName");
		if(_price > 0) then
		{
		    [_price,1] call HG_fnc_addOrSubCash;
		};
        hint format[(localize "STR_HG_ITEM_BOUGHT"),_displayName,if(_price <= 0) then {(localize "STR_HG_DLG_FREE")} else {([_price,true] call HG_fnc_currencyToText)}];
	};
} else {
    hint format[(localize "STR_HG_NOT_ENOUGH_MONEY"),([_price,true] call HG_fnc_currencyToText)];
};

true;
