#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when selection in xListbox has changed
    © All Fucks Reserved
*/
params["_ctrl","_index","_shopType","_camera","_shopItems","_itemClass","_itemName","_ind"];

disableSerialization;
	
_shopType = _ctrl lbData _index;
_shopType = _shopType splitString "/";
_camera = _ctrl lbValue _index;
_shopItems = getArray(missionConfigFile >> "CfgClient" >> "HG_ClothingShopCfg" >> (_shopType select 0) >> (_shopType select 1) >> "content");

lbClear HG_CLOTHING_LIST;

{
    _itemClass = [(_x select 0)] call HG_fnc_getConfig;
    _itemName = getText(configFile >> _itemClass >> (_x select 0) >> "displayName");
    _ind = HG_CLOTHING_LIST lbAdd _itemName;
    HG_CLOTHING_LIST lbSetData[_ind,(_x select 0)];
    HG_CLOTHING_LIST lbSetValue[_ind,(_x select 1)];
	HG_CLOTHING_LIST lbSetTooltip[_ind,format[(localize "STR_HG_DLG_PRICE_TAG"),([(_x select 1),true] call HG_fnc_currencyToText)]];
} forEach _shopItems;

[_camera] call HG_fnc_setCamPos;

HG_CLOTHING_LIST lbSetCurSel 0;

true;
