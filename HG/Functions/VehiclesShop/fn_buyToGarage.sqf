#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

disableSerialization;

private _price = HG_VEHICLES_LIST lbValue (lbCurSel HG_VEHICLES_LIST);

if([_price] call HG_fnc_hasEnoughMoney) then
{
    [_price,1] call HG_fnc_addOrSubCash;
	closeDialog 0;
	private _classname = HG_VEHICLES_LIST lbData (lbCurSel HG_VEHICLES_LIST);
	hint format[(localize "STR_HG_VEHICLE_BOUGHT"),(getText(configFile >> "CfgVehicles" >> _classname >> "displayName")),if(_price <= 0) then {(localize "STR_HG_DLG_FREE")} else {([_price,true] call HG_fnc_currencyToText)}];
	[player,_classname] remoteExecCall ["HG_fnc_storeVehicleS",2,false];
} else {
    titleText [format[(localize "STR_HG_NOT_ENOUGH_MONEY"),([_price,true] call HG_fnc_currencyToText)],"PLAIN DOWN",1];
};

true;
