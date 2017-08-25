#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when selection in xListbox has changed
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_ctrl","_index","_shopType","_shopItems","_itemConfig","_condition","_itemName","_ind"];

disableSerialization;

_shopType = _ctrl lbData _index;
_shopType = _shopType splitString "/";
_shopItems = getArray(getMissionConfig "CfgClient" >> "HG_ItemsShopCfg" >> (_shopType select 0) >> (_shopType select 1) >> "items");
	
lbClear HG_ITEMS_ITEM_LIST;
	
{
	_itemConfig = [(_x select 0)] call HG_fnc_getConfig;
	_condition = call compile (_x select 2);
	if((_itemConfig != "") AND _condition) then
	{
	    _itemName = getText(configFile >> _itemConfig >> (_x select 0) >> "displayName");
        _ind = HG_ITEMS_ITEM_LIST lbAdd _itemName;
        HG_ITEMS_ITEM_LIST lbSetData[_ind,(_x select 0)];
        HG_ITEMS_ITEM_LIST lbSetValue[_ind,(_x select 1)];
	    HG_ITEMS_ITEM_LIST lbSetTooltip[_ind,format[(localize "STR_HG_DLG_PRICE_TAG"),if((_x select 1) <= 0) then {(localize "STR_HG_DLG_FREE")} else {([(_x select 1),true] call HG_fnc_currencyToText)}]];
	};
} forEach _shopItems;

if((lbSize HG_ITEMS_ITEM_LIST) isEqualTo 0) then
{
    _ind = HG_ITEMS_ITEM_LIST lbAdd (localize "STR_HG_NOTHING_TO_DISPLAY");
	HG_ITEMS_ITEM_LIST lbSetData[_ind,(localize "STR_HG_NONE")];
};
	
HG_ITEMS_ITEM_LIST lbSetCurSel 0;

true;
