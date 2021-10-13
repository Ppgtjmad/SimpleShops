/*
    Author - HoverGuy
    Website - https://northernimpulse.com
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

if(((getNumber(getMissionConfig "CfgClient" >> "storeVehiclesOnDisconnect")) isEqualTo 1) OR (getNumber(getMissionConfig "CfgClient" >> "deleteBodyOnDisconnect") isEqualTo 1) OR (getNumber(getMissionConfig "CfgClient" >> "enableWhitelist") isEqualTo 1)) then
{
    addMissionEventHandler ["HandleDisconnect",{_this call HG_fnc_disconnect; false;}];
};

if((getNumber(getMissionConfig "CfgClient" >> "resetGaragesOnServerStart")) isEqualTo 1) then
{
    [] call HG_fnc_resetGarages;
} else {
    [] call HG_fnc_activeReset;
};

if((getNumber(getMissionConfig "CfgClient" >> "resetSavedMoney")) isEqualTo 1) then
{
    [] call HG_fnc_resetMoney;
};

if((getNumber(getMissionConfig "CfgClient" >> "enableWhitelist")) isEqualTo 1 AND HG_SAVING_EXTDB) then
{
    [] call HG_fnc_getWhitelist;
};

"HG_CLIENT" addPublicVariableEventHandler {[(_this select 1)] call HG_fnc_clientToServer;};

HG_CLEANUP_THREAD = [] spawn HG_fnc_cleanup;
