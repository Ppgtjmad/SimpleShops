#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when selection in xListbox has changed
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_ctrl","_index","_cat","_shopItems","_ind","_itemConfig","_itemName"];

disableSerialization;
	
_cat = _ctrl lbData _index;
_shopItems = getArray(missionConfigFile >> "CfgClient" >> "HG_ClothingShopCfg" >> HG_STRING_HANDLER >> _cat >> "content");

lbClear HG_CLOTHING_LIST;

_ind = HG_CLOTHING_LIST lbAdd format[(localize "STR_HG_DLG_CS_REMOVE"),(HG_CLOTHING_SWITCH lbText (lbCurSel HG_CLOTHING_SWITCH))];
HG_CLOTHING_LIST lbSetData [_ind,_cat];
HG_CLOTHING_LIST lbSetValue [_ind,0];

{
    _itemConfig = [(_x select 0)] call HG_fnc_getConfig;
    _itemName = getText(configFile >> _itemConfig >> (_x select 0) >> "displayName");
    _ind = HG_CLOTHING_LIST lbAdd _itemName;
    HG_CLOTHING_LIST lbSetData[_ind,(_x select 0)];
    HG_CLOTHING_LIST lbSetValue[_ind,(_x select 1)];
	HG_CLOTHING_LIST lbSetTooltip[_ind,format[(localize "STR_HG_DLG_PRICE_TAG"),if((_x select 1) <= 0) then {(localize "STR_HG_DLG_FREE")} else {([(_x select 1),true] call HG_fnc_currencyToText)}]];
} forEach _shopItems;

//HG_CLOTHING_LIST lbSetCurSel -1;

true;
