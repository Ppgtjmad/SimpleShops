#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when you click "Buy" button in dialog
    © All Fucks Reserved
*/
private "_price";

disableSerialization;

_price = HG_VEHICLES_LIST lbValue (lbCurSel HG_VEHICLES_LIST);

if([_price] call HG_fnc_hasEnoughMoney) then
{
    private["_shopType","_spawnPoints","_spawnPoint"];
	_shopType = HG_VEHICLES_SWITCH lbData (lbCurSel HG_VEHICLES_SWITCH);
	_shopType = _shopType splitString "/";
	_spawnPoints = getArray(missionConfigFile >> "CfgClient" >> "HG_VehiclesShopCfg" >> (_shopType select 0) >> (_shopType select 1) >> "spawnPoints");
    _spawnPoint = [((_spawnPoints select (HG_VEHICLES_SP lbValue (lbCurSel HG_VEHICLES_SP))) select 1)] call HG_fnc_isItBusy;
	if(_spawnPoint != "") then
	{
	    private["_vehicle","_displayName"];
		_vehicle = HG_VEHICLES_LIST lbData (lbCurSel HG_VEHICLES_LIST);
	    _displayName = getText(configFile >> "CfgVehicles" >> _vehicle >> "displayName");
	    _vehicle = _vehicle createVehicle (markerPos _spawnPoint);
		_vehicle allowDamage false;
		_vehicle setVectorUp (surfaceNormal (markerPos _spawnPoint));
		_vehicle setVariable["HG_Owner",[(getPlayerUID player),round(random(100000))],true];
		_vehicle lock 2;
		[_vehicle] call HG_fnc_addActions;
		if((getNumber(missionConfigFile >> "CfgClient" >> "clearInventory")) isEqualTo 1) then
		{
		    clearItemCargoGlobal _vehicle;
			clearMagazineCargoGlobal _vehicle;
			clearWeaponCargoGlobal _vehicle;
			clearBackpackCargoGlobal _vehicle;
		};
		_vehicle setDir (markerDir _spawnPoint);
		_vehicle allowDamage true;
		[_price,1] call HG_fnc_addOrSubCash;
		closeDialog 0;
		hint format[(localize "STR_HG_VEHICLE_BOUGHT"),_displayName,([_price,true] call HG_fnc_currencyToText)];
	} else {
	    titleText [(localize "STR_HG_SPAWN_POINTS_BUSY"),"PLAIN DOWN",1];
	};
} else {
    titleText [format[(localize "STR_HG_NOT_ENOUGH_MONEY"),([_price,true] call HG_fnc_currencyToText)],"PLAIN DOWN",1];
};

true;
