#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_target","_caller","_id","_garage"];
if((typeName _garage) != "STRING") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_1");};
if(_garage isEqualTo "") exitWith {hint (localize "STR_HG_ERR_ON_LOAD_2");};

private["_condition","_isOk"];
_condition = getText(getMissionConfig "CfgClient" >> "HG_GaragesCfg" >> _garage >> "conditionToAccess");
_isOk = (_condition isEqualTo "") OR (call compile _condition);
if(!_isOk) exitWith {hint (localize "STR_HG_ACCESS_DENIED");};

private["_allowedTypes","_storePoint","_pos","_near"];
_allowedTypes = getArray(getMissionConfig "CfgClient" >> "HG_GaragesCfg" >> _garage >> "allowedTypes");
_storePoint = getText(getMissionConfig "CfgClient" >> "HG_GaragesCfg" >> _garage >> "storePoint");

if(_storePoint isEqualTo "") then
{
    _pos = player;
} else {
    _pos = markerPos _storePoint;
};

_near = (nearestObjects [_pos,_allowedTypes,8]) select {alive _x};

if((count _near) > 0) then
{
    private["_vehicle","_owner"];
	_vehicle = _near select 0;
    _owner = _vehicle getVariable "HG_Owner";
	if((_owner select 0) isEqualTo (getPlayerUID player)) then
	{
	    [1,player,_vehicle,(_owner select 1)] remoteExecCall ["HG_fnc_storeVehicleServer",2,false];
	} else {
	    hint (localize "STR_HG_NO_OWNED_VEHICLES");
	};
} else {
    hint (localize "STR_HG_NO_VEHICLES");
};

true;
