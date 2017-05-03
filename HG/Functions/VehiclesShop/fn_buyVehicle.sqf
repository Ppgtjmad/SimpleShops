#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when you click "Buy" button in dialog
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

disableSerialization;

private _price = HG_VEHICLES_LIST lbValue (lbCurSel HG_VEHICLES_LIST);

if([_price] call HG_fnc_hasEnoughMoney) then
{
    private["_shopType","_spawnPoints","_spawnPoint"];
	_shopType = HG_VEHICLES_SWITCH lbData (lbCurSel HG_VEHICLES_SWITCH);
	_shopType = _shopType splitString "/";
	_spawnPoints = getArray(missionConfigFile >> "CfgClient" >> "HG_VehiclesShopCfg" >> (_shopType select 0) >> (_shopType select 1) >> "spawnPoints");
    _spawnPoint = [((_spawnPoints select (HG_VEHICLES_SP lbValue (lbCurSel HG_VEHICLES_SP))) select 1)] call HG_fnc_isItBusy;
	if(_spawnPoint != "") then
	{
	    private["_classname","_displayName"];
		_classname = HG_VEHICLES_LIST lbData (lbCurSel HG_VEHICLES_LIST);
	    _displayName = getText(configFile >> "CfgVehicles" >> _classname >> "displayName");
		[_price,1] call HG_fnc_addOrSubCash;
		closeDialog 0;
		hint format[(localize "STR_HG_VEHICLE_BOUGHT"),_displayName,if(_price <= 0) then {(localize "STR_HG_DLG_FREE")} else {([_price,true] call HG_fnc_currencyToText)}];
		[0,player,_classname,_spawnPoint] remoteExecCall ["HG_fnc_spawnVehicle",2,false];
	} else {
	    titleText [(localize "STR_HG_SPAWN_POINTS_BUSY"),"PLAIN DOWN",1];
	};
} else {
    titleText [format[(localize "STR_HG_NOT_ENOUGH_MONEY"),([_price,true] call HG_fnc_currencyToText)],"PLAIN DOWN",1];
};

true;
