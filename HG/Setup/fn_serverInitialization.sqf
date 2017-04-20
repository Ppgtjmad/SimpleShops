/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

HG_fnc_findIndex = compileFinal 
"
    params['_value','_array','_return'];

    _return = -1;

    {
	    if(_value in _x) exitWith 
	    {
		    _return = _forEachIndex;
	    };
    } forEach _array;

    _return;
";

HG_fnc_setInventory = compileFinal
"
    params['_vehicle','_ownerUID','_plate','_inventory'];
	
	_ownerUID = (_vehicle getVariable 'HG_Owner') select 0;
	_plate = (_vehicle getVariable 'HG_Owner') select 1;
	_inventory = profileNamespace getVariable [format['HG_Inventory_%1_%2',_ownerUID,_plate],[]];
	
	if((count _inventory) != 0) then
    {
        _inventory params ['_items','_mags','_weapons','_backpacks'];

	    for '_i' from 0 to ((count (_items select 0)) - 1) do 
	    {
		    _vehicle addItemCargoGlobal [((_items select 0) select _i), ((_items select 1) select _i)];
	    };
	    for '_i' from 0 to ((count (_mags select 0)) - 1) do 
	    {
		    _vehicle addMagazineCargoGlobal [((_mags select 0) select _i), ((_mags select 1) select _i)];
	    };
	    for '_i' from 0 to ((count (_weapons select 0)) - 1) do 
	    {
		    _vehicle addWeaponCargoGlobal [((_weapons select 0) select _i), ((_weapons select 1) select _i)];
	    };
	    for '_i' from 0 to ((count (_backpacks select 0)) - 1) do 
	    {
		    _vehicle addBackpackCargoGlobal [((_backpacks select 0) select _i), ((_backpacks select 1) select _i)];
	    };
    };
	
	true;
";

HG_fnc_requestGarage = compileFinal
"
    params['_unit','_garage'];
	
    _garage = profileNamespace getVariable[format['HG_Garage_%1',(getPlayerUID _unit)],[]];
    _garage remoteExecCall ['HG_fnc_fillGarage',(owner _unit),false];
	
	true;
";

HG_fnc_spawnVehicle = compileFinal
"
    params['_unit','_classname','_plate','_sp','_vehicle','_garage','_index'];
	
	_vehicle = _classname createVehicle (markerPos _sp);
	_vehicle allowDamage false;
	_vehicle setVectorUp (surfaceNormal (markerPos _sp));
	_vehicle setDir (markerDir _sp);
	_vehicle setVariable['HG_Owner',[(getPlayerUID _unit),_plate],true];
	_vehicle lock 2;
	if((getNumber(missionConfigFile >> 'CfgClient' >> 'clearInventory')) isEqualTo 1) then
	{
		clearItemCargoGlobal _vehicle;
	    clearMagazineCargoGlobal _vehicle;
		clearWeaponCargoGlobal _vehicle;
		clearBackpackCargoGlobal _vehicle;
	};
	_vehicle allowDamage true;
	[_vehicle] remoteExecCall ['HG_fnc_addActions',(owner _unit),false];
	_garage = profileNamespace getVariable[format['HG_Garage_%1',(getPlayerUID _unit)],[]];
	_index = [_plate,_garage] call HG_fnc_findIndex;
	_garage deleteAt _index;
	profileNamespace setVariable[format['HG_Garage_%1',(getPlayerUID _unit)],_garage];
	if((getNumber(missionConfigFile >> 'CfgClient' >> 'enableVehicleInventorySave')) isEqualTo 1) then
	{
	    [_vehicle] call HG_fnc_setInventory;
	};
	saveProfileNamespace;
	(localize 'STR_HG_GRG_VEHICLE_SPAWNED') remoteExecCall ['hint',(owner _unit),false];
	
	true;
";

HG_fnc_deleteVehicle = compileFinal
"
    params['_unit','_plate','_garage','_index'];
	
	_garage = profileNamespace getVariable[format['HG_Garage_%1',(getPlayerUID _unit)],[]];
	_index = [_plate,_garage] call HG_fnc_findIndex;
	_garage deleteAt _index;
	profileNamespace setVariable[format['HG_Garage_%1',(getPlayerUID _unit)],_garage];
	if((getNumber(missionConfigFile >> 'CfgClient' >> 'enableVehicleInventorySave')) isEqualTo 1) then
	{
	    profileNamespace setVariable[format['HG_Inventory_%1_%2',(getPlayerUID _unit),_plate],nil];
	};
	saveProfileNamespace;
	(localize 'STR_HG_GRG_VEHICLE_DELETED') remoteExecCall ['hint',(owner _unit),false];
	
	true;
";

HG_fnc_storeVehicleS = compileFinal
"
    params['_unit','_vehicle','_plate','_garage'];
	
	_garage = profileNamespace getVariable[format['HG_Garage_%1',(getPlayerUID _unit)],[]];
	_garage pushBack [(typeOf _vehicle),_plate];
	profileNamespace setVariable[format['HG_Garage_%1',(getPlayerUID _unit)],_garage];
	if((getNumber(missionConfigFile >> 'CfgClient' >> 'enableVehicleInventorySave')) isEqualTo 1) then
	{
	    private _inventory = [(getItemCargo _vehicle),(getMagazineCargo _vehicle),(getWeaponCargo _vehicle),(getBackpackCargo _vehicle)];
	    profileNamespace setVariable[format['HG_Inventory_%1_%2',(getPlayerUID _unit),_plate],_inventory];
	};
	saveProfileNamespace;
	deleteVehicle _vehicle;
	(localize 'STR_HG_GRG_VEHICLE_STORED') remoteExecCall ['hint',(owner _unit),false];
	
	true;
";

HG_fnc_disconnect = compileFinal
"
    params['_unit','_id','_uid','_name','_garage','_saveInv'];
	
	_garage = profileNamespace getVariable[format['HG_Garage_%1',_uid],[]];
    _saveInv = (getNumber(missionConfigFile >> 'CfgClient' >> 'enableVehicleInventorySave')) isEqualTo 1;
	
    {
	    if(alive _x) then
		{
		    _owner = _x getVariable 'HG_Owner';
			if((_owner select 0) isEqualTo _uid) then
			{
			    _plate = _owner select 1;
			    _garage pushBack [(typeOf _x),_plate];
			    if(_saveInv) then
				{
				    _inventory = [(getItemCargo _x),(getMagazineCargo _x),(getWeaponCargo _x),(getBackpackCargo _x)];
					profileNamespace setVariable[format['HG_Inventory_%1_%2',_uid,_plate],_inventory];
				};
				deleteVehicle _x;
			};
		};
	} forEach (allMissionObjects 'LandVehicle') + (allMissionObjects 'Air') + (allMissionObjects 'Ship') + (allMissionObjects 'Submarine');
	
	profileNamespace setVariable[format['HG_Garage_%1',_uid],_garage];
	saveProfileNamespace;
";

HG_fnc_pvarLocal = compileFinal
"
    params['_value','_val','_puid','_mode','_var'];
	
	_val = _value select 0;
	_puid = _value select 1;
	_mode = _value select 2;
	
	_var = switch(_mode) do
	{
	    case 0:
		{
		    'HG_XP';
		};
		case 1:
		{
		    'HG_Save';
		};
		case 2:
		{
		    'HG_KillCount';
		};
	};
	
	profileNamespace setVariable [format['%1_%2',_var,_puid],_val];
	saveProfileNamespace;
";

addMissionEventHandler ["HandleDisconnect",{_this call HG_fnc_disconnect; false;}];
"HG_CLIENT" addPublicVariableEventHandler {(_this select 1) call HG_fnc_pvarLocal;};
