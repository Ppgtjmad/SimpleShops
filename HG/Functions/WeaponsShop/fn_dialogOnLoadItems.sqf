#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called by the player to open and feed the dialog with data
    © All Fucks Reserved
*/
params["_target","_caller","_id","_whatShop"];
if((typeName _whatShop) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if(_whatShop isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};
if((getNumber(missionConfigFile >> "CfgClient" >> "HG_WeaponsShopCfg" >> _whatShop >> "whitelisted") isEqualTo 1) AND ((rank player) != (getText(missionConfigFile >> "CfgClient" >> "HG_WeaponsShopCfg" >> _whatShop >> "whitelistRank")))) exitWith {hint (localize "STR_HG_ACCESS_DENIED");};

disableSerialization;

createDialog "HG_WeaponsShop";

private["_shopList","_ind"];

_shopList = "true" configClasses (missionConfigFile >> "CfgClient" >> "HG_WeaponsShopCfg" >> _whatShop);
	
lbClear HG_WEAPONS_ITEM_SWITCH;

{
	_ind = HG_WEAPONS_ITEM_SWITCH lbAdd (getText(_x >> "displayName"));
	HG_WEAPONS_ITEM_SWITCH lbSetData [_ind,format["%1/%2",_whatShop,(configName _x)]];
} forEach _shopList;
	
HG_WEAPONS_ITEM_SWITCH lbSetCurSel 0;

true;
