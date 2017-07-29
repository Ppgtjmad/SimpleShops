/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

HG_SAVING_EXTDB = (getText(getMissionConfig "CfgClient" >> "savingMethod")) isEqualTo "extDB";

if(HG_SAVING_EXTDB) then
{
    waitUntil {!isNil "extDB3_var_loaded"};
	if(!extDB3_var_loaded) exitWith 
	{
	    diag_log (localize "STR_HG_EXTDB_NOT_LOADED");
		HG_SAVING_EXTDB = false;
	};
	
	// Double check just to be sure
	private _result = "extDB3" callExtension "9:VERSION";
	if(_result isEqualTo "") exitWith 
	{
	    diag_log (localize "STR_HG_EXTDB_NOT_LOADED");
		HG_SAVING_EXTDB = false;
	};
	
	private _protocol = getText(getMissionConfig "CfgClient" >> "savingProtocol");
	if(_protocol isEqualTo "") exitWith
	{
	    diag_log (localize "STR_HG_EXTDB_NO_PROTOCOL");
		HG_SAVING_EXTDB = false;
	};
	
	HG_SAVING_PROTOCOL = _protocol;
};

HG_fnc_aiUnitSetup = compileFinal preprocessFileLineNumbers "HG\Functions\Server\AI\fn_aiUnitSetup.sqf";
HG_fnc_activeReset = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_activeReset.sqf";
HG_fnc_deleteVehicle = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_deleteVehicle.sqf";
HG_fnc_disconnect = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_disconnect.sqf";
HG_fnc_findIndex = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_findIndex.sqf";
HG_fnc_getGear = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_getGear.sqf";
HG_fnc_getInventory = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_getInventory.sqf";
HG_fnc_getType = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_getType.sqf";
HG_fnc_lock = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_lock.sqf";
HG_fnc_clientToServer = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_clientToServer.sqf";
HG_fnc_requestGarage = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_requestGarage.sqf";
HG_fnc_resetGarages = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_resetGarages.sqf";
HG_fnc_setInventory = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_setInventory.sqf";
HG_fnc_spawnVehicle = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_spawnVehicle.sqf";
HG_fnc_storeVehicleServer = compileFinal preprocessFileLineNumbers "HG\Functions\Server\fn_storeVehicleServer.sqf";

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
