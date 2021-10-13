#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
private["_price","_discount"];

disableSerialization;

_price = HG_VEHICLES_LIST lbValue (lbCurSel HG_VEHICLES_LIST);
_discount = ((getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "vShopDiscount")) != 0) AND (_price != 0);

if(_discount) then
{
	_price = round(_price - (_price * ((getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "vShopDiscount")) / 100)));
};

if([_price] call HG_fnc_hasEnoughMoney) then
{
    private["_classname","_color"];
    [_price,1] call HG_fnc_addOrSubCash;
	_classname = HG_VEHICLES_LIST lbData (lbCurSel HG_VEHICLES_LIST);
	_color = HG_VEHICLES_COLORS lbData (lbCurSel HG_VEHICLES_COLORS);
	closeDialog 0;
	hint format[(localize "STR_HG_VEHICLE_BOUGHT_TO_GARAGE"),(getText(configFile >> "CfgVehicles" >> _classname >> "displayName")),if(_price <= 0) then {(localize "STR_HG_DLG_FREE")} else {([_price,true] call HG_fnc_currencyToText)}];
	[0,player,_classname,nil,_color] remoteExecCall ["HG_fnc_storeVehicleServer",2,false];
} else {
    titleText [format[(localize "STR_HG_NOT_ENOUGH_MONEY"),([_price,true] call HG_fnc_currencyToText)],"PLAIN DOWN",1];
};

true;
