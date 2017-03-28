/*
    Author - HoverGuy
    © All Fucks Reserved
*/

HG_fnc_findIndex =
{
    params["_value","_array","_return"];

    _return = -1;

    {
	    if(_value in _x) exitWith 
	    {
		    _return = _forEachIndex;
	    };
    } forEach _array;

    _return;
};

HG_fnc_requestGarage =
{
    params["_unit","_garage"];
	
    _garage = profileNamespace getVariable[format["HG_Garage_%1",(getPlayerUID _unit)],[]];
    _garage remoteExecCall ["HG_fnc_fillGarage",(owner _unit),false];
};

HG_fnc_spawnVehicle =
{
    params["_unit","_classname","_plate","_sp","_vehicle","_garage","_index"];
	
	_vehicle = _classname createVehicle (markerPos _sp);
	_vehicle allowDamage false;
	_vehicle setVectorUp (surfaceNormal (markerPos _sp));
	_vehicle setDir (markerDir _sp);
	_vehicle setVariable["HG_Owner",[(getPlayerUID _unit),_plate],true];
	_vehicle lock 2;
	if((getNumber(missionConfigFile >> "CfgClient" >> "clearInventory")) isEqualTo 1) then
	{
		clearItemCargoGlobal _vehicle;
	    clearMagazineCargoGlobal _vehicle;
		clearWeaponCargoGlobal _vehicle;
		clearBackpackCargoGlobal _vehicle;
	};
	_vehicle allowDamage true;
	[_vehicle] remoteExecCall ["HG_fnc_addActions",(owner _unit),false];
	_garage = profileNamespace getVariable[format["HG_Garage_%1",(getPlayerUID _unit)],[]];
	_index = [_plate,_garage] call HG_fnc_findIndex;
	_garage deleteAt _index;
	profileNamespace setVariable[format["HG_Garage_%1",(getPlayerUID _unit)],_garage];
	saveProfileNamespace;
	(localize "STR_HG_GRG_VEHICLE_SPAWNED") remoteExecCall ["hint",(owner _unit),false];
};

HG_fnc_deleteVehicle =
{
    params["_unit","_plate","_garage","_index"];
	
	_garage = profileNamespace getVariable[format["HG_Garage_%1",(getPlayerUID _unit)],[]];
	_index = [_plate,_garage] call HG_fnc_findIndex;
	_garage deleteAt _index;
	profileNamespace setVariable[format["HG_Garage_%1",(getPlayerUID _unit)],_garage];
	saveProfileNamespace;
	(localize "STR_HG_GRG_VEHICLE_DELETED") remoteExecCall ["hint",(owner _unit),false];
};

HG_fnc_storeVehicleS =
{
    params["_unit","_vehicle","_plate","_garage"];
	
	_garage = profileNamespace getVariable[format["HG_Garage_%1",(getPlayerUID _unit)],[]];
	_garage pushBack [(typeOf _vehicle),_plate];
	profileNamespace setVariable[format["HG_Garage_%1",(getPlayerUID _unit)],_garage];
	saveProfileNamespace;
	deleteVehicle _vehicle;
	(localize "STR_HG_GRG_VEHICLE_STORED") remoteExecCall ["hint",(owner _unit),false];
};

HG_fnc_disconnect =
{
    params["_unit","_id","_uid","_name","_garage","_owner"];
	
	_garage = profileNamespace getVariable[format["HG_Garage_%1",_uid],[]];
	
    {
	    if(alive _x) then
		{
		    _owner = _x getVariable "HG_Owner";
			if((_owner select 0) isEqualTo _uid) then
			{
			    _garage pushBack [(typeOf _x),(_owner select 1)];
				deleteVehicle _x;
			};
		};
	} forEach (allMissionObjects "LandVehicle") + (allMissionObjects "Air") + (allMissionObjects "Ship");
	
	profileNamespace setVariable[format["HG_Garage_%1",_uid],_garage];
	saveProfileNamespace;
};

addMissionEventHandler ["HandleDisconnect",{_this call HG_fnc_disconnect; false;}];
