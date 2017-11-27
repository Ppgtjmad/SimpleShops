#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called by the player to open and feed the dialog with data
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_target","_caller","_id","_whatShop"];
if((typeName _whatShop) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if(_whatShop isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};

private _shopList = "true" configClasses (getMissionConfig "CfgClient" >> "HG_ItemsShopCfg" >> _whatShop);
if((count _shopList) isEqualTo 0) exitWith {hint (localize "STR_HG_SHOP_EMPTY");};

private["_whitelist","_isOk"];
_whitelist = getArray(getMissionConfig "CfgClient" >> "HG_ItemsShopCfg" >> _whatShop >> "whitelistRanks");
_isOk = ((count _whitelist) isEqualTo 0) OR ((rank player) in _whitelist);
if(!_isOk) exitWith {hint (localize "STR_HG_ACCESS_DENIED");};

disableSerialization;

createDialog "HG_ItemsShop";

lbClear HG_ITEMS_ITEM_SWITCH;

HG_ITEMS_BOUGHT = false;

private "_ind";

{
	_ind = HG_ITEMS_ITEM_SWITCH lbAdd (getText(_x >> "displayName"));
	HG_ITEMS_ITEM_SWITCH lbSetData [_ind,format["%1/%2",_whatShop,(configName _x)]];
} forEach _shopList;
	
HG_ITEMS_ITEM_SWITCH lbSetCurSel 0;

true;
