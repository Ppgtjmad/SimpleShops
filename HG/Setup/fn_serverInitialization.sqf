/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

HG_SAVING_EXTDB = (getText(getMissionConfig "CfgClient" >> "savingMethod")) isEqualTo "extDB";

if(HG_SAVING_EXTDB) then
{
	if(isNil "extDB3_var_loaded") exitWith 
	{
	    diag_log (localize "STR_HG_EXTDB_NOT_LOADED");
		HG_SAVING_EXTDB = false;
	};
	
	if(!([] call extDB3_var_loaded)) exitWith
	{
	    diag_log (localize "STR_HG_EXTDB_NOT_LOADED");
		HG_SAVING_EXTDB = false;
	};
	
	HG_fnc_asyncCall = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_asyncCall.sqf";
	HG_fnc_extDBInit = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_extDBInit.sqf";
	
	private["_protocol","_ok"];
	
	_protocol = getText(getMissionConfig "CfgClient" >> "extDBProtocol");
	_ok = [getText(getMissionConfig "CfgClient" >> "extDBDatabase"),_protocol,getText(getMissionConfig "CfgClient" >> "extDBCustomFile")] call HG_fnc_extDBInit;
	
	if(!_ok) exitWith
	{
	    HG_SAVING_EXTDB = false;
	};
	
	HG_SAVING_PROTOCOL = _protocol;
};

private "_compile";

{
    _compile = compileFinal preprocessFileLineNumbers (_x select 1);
    missionNamespace setVariable[(_x select 0),_compile];
} forEach 
[
	["HG_fnc_activeReset","HG\Functions\Server\fn_activeReset.sqf"],
	["HG_fnc_deleteVehicle","HG\Functions\Server\fn_deleteVehicle.sqf"],
	["HG_fnc_disconnect","HG\Functions\Server\fn_disconnect.sqf"],
	["HG_fnc_findIndex","HG\Functions\Server\fn_findIndex.sqf"],
	["HG_fnc_getGear","HG\Functions\Server\fn_getGear.sqf"],
	["HG_fnc_getInventory","HG\Functions\Server\fn_getInventory.sqf"],
	["HG_fnc_getType","HG\Functions\Server\fn_getType.sqf"],
	["HG_fnc_lock","HG\Functions\Server\fn_lock.sqf"],
	["HG_fnc_clientToServer","HG\Functions\Server\fn_clientToServer.sqf"],
	["HG_fnc_requestGarage","HG\Functions\Server\fn_requestGarage.sqf"],
	["HG_fnc_resetGarages","HG\Functions\Server\fn_resetGarages.sqf"],
	["HG_fnc_setInventory","HG\Functions\Server\fn_setInventory.sqf"],
	["HG_fnc_spawnVehicle","HG\Functions\Server\fn_spawnVehicle.sqf"],
	["HG_fnc_storeVehicleServer","HG\Functions\Server\fn_storeVehicleServer.sqf"]
];

if((getNumber(getMissionConfig "CfgClient" >> "storeVehiclesOnDisconnect")) isEqualTo 1) then
{
    addMissionEventHandler ["HandleDisconnect",{_this call HG_fnc_disconnect; false;}];
};

if((getNumber(getMissionConfig "CfgClient" >> "resetGaragesOnServerStart")) isEqualTo 1) then
{
    [] call HG_fnc_resetGarages;
} else {
    [] call HG_fnc_activeReset;
};

"HG_CLIENT" addPublicVariableEventHandler {[(_this select 1)] call HG_fnc_clientToServer;};
