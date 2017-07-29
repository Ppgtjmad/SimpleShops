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

private["_whitelist","_isOk"];
_whitelist = getArray(getMissionConfig "CfgClient" >> "HG_ItemsShopCfg" >> _whatShop >> "whitelistRanks");
_isOk = ((count _whitelist) isEqualTo 0) OR ((rank player) in _whitelist);
if(!_isOk) exitWith {hint (localize "STR_HG_ACCESS_DENIED");};

disableSerialization;

createDialog "HG_ItemsShop";

private["_shopList","_ind"];

_shopList = "true" configClasses (getMissionConfig "CfgClient" >> "HG_ItemsShopCfg" >> _whatShop);

lbClear HG_ITEMS_ITEM_SWITCH;

{
	_ind = HG_ITEMS_ITEM_SWITCH lbAdd (getText(_x >> "displayName"));
	HG_ITEMS_ITEM_SWITCH lbSetData [_ind,format["%1/%2",_whatShop,(configName _x)]];
} forEach _shopList;
	
HG_ITEMS_ITEM_SWITCH lbSetCurSel 0;

true;
