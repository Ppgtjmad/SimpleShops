#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when selection in xListbox has changed
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_ctrl","_index","_cat","_shopItems","_ind","_itemConfig","_condition","_itemName"];

disableSerialization;
	
_cat = _ctrl lbData _index;
_shopItems = getArray(getMissionConfig "CfgClient" >> "HG_GearShopCfg" >> HG_STRING_HANDLER >> _cat >> "content");

lbClear HG_GEAR_LIST;

_ind = HG_GEAR_LIST lbAdd (localize "STR_HG_DLG_GS_REMOVE");
HG_GEAR_LIST lbSetData [_ind,(localize "STR_HG_NONE")];
HG_GEAR_LIST lbSetValue [_ind,0];

{
    _itemConfig = [(_x select 0)] call HG_fnc_getConfig;
	_condition = call compile (_x select 2);
	if((_itemConfig != "") AND (_condition)) then
	{
	    _itemName = getText(configFile >> _itemConfig >> (_x select 0) >> "displayName");
        _ind = HG_GEAR_LIST lbAdd _itemName;
        HG_GEAR_LIST lbSetData[_ind,(_x select 0)];
        HG_GEAR_LIST lbSetValue[_ind,(_x select 1)];
	    HG_GEAR_LIST lbSetTooltip[_ind,format[(localize "STR_HG_DLG_PRICE_TAG"),if((_x select 1) <= 0) then {(localize "STR_HG_DLG_FREE")} else {([(_x select 1),true] call HG_fnc_currencyToText)}]];
	};
} forEach _shopItems;

//HG_GEAR_LIST lbSetCurSel -1;

true;
