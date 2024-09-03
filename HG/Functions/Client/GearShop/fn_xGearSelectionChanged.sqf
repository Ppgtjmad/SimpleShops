#include "HG_Macros.h"
/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_ctrl","_index","_cat","_shopItems","_discount","_equipped","_ind","_itemConfig","_condition","_itemName","_itemPrice"];

disableSerialization;

_cat = _ctrl lbData _index;
_shopItems = getArray(getMissionConfig "CfgClient" >> "HG_GearShopCfg" >> HG_STRING_HANDLER >> _cat >> "content");

lbClear HG_GEAR_LIST;

_discount = getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "gShopDiscount") > 0;

_equipped = [_cat] call HG_fnc_getCurrentGear;
_ind = HG_GEAR_LIST lbAdd (localize "STR_HG_DLG_GS_LIST_CURRENT");
HG_GEAR_LIST lbSetData [_ind,_equipped];
HG_GEAR_LIST lbSetValue [_ind,-1];

{
    _itemConfig = [(_x select 0)] call HG_fnc_getConfig;
	_condition = call compile (_x select 2);
	if(((_x select 0) != _equipped) AND (_itemConfig != "") AND (_condition)) then
	{
	    _itemName = getText(configFile >> _itemConfig >> (_x select 0) >> "displayName");
		_itemPrice = if(_discount AND (_x select 1) > 0) then {round((_x select 1) - ((_x select 1) * ((getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "gShopDiscount")) / 100)))} else {(_x select 1)};
		_ind = HG_GEAR_LIST lbAdd _itemName;
        HG_GEAR_LIST lbSetData[_ind,(_x select 0)];
        HG_GEAR_LIST lbSetValue[_ind,_itemPrice];
	    HG_GEAR_LIST lbSetTooltip[_ind,format[(localize "STR_HG_DLG_PRICE_TAG"),if((_x select 1) <= 0) then {(localize "STR_HG_DLG_FREE")} else {([_itemPrice,true] call HG_fnc_currencyToText)}]];
	};
} forEach _shopItems;

HG_GEAR_LIST lbSetCurSel 0;

true;
