/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

HG_SAVING_METHOD = getText(missionConfigFile >> "CfgClient" >> "savingMethod");

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

HG_fnc_getType = compileFinal
"
    params['_class',['_type','',['']]];

    {
        if(_class isKindOf _x) then
	    {
	        _type = _x;
	    } else {};
    } forEach ['Car','Truck','Tank','Air','Ship','Submarine'];
	
	_type;
";

HG_fnc_resetGarages = compileFinal
"
    private _vars = parsingNamespace getVariable 'HG_Profile';

    {
        if(['hg_garage_',_x,false] call BIS_fnc_inString) then
        {
            _vehicles = profileNamespace getVariable _x;
			
            if((count _vehicles) != 0) then
            {
                profileNamespace setVariable [_x,[]];
                saveProfileNamespace;
            };
        };
    } forEach _vars;
	
    true;
";

HG_fnc_activeReset = compileFinal
"
    private _vars = parsingNamespace getVariable 'HG_Profile';
	
    {
	    if(['hg_garage_',_x,false] call BIS_fnc_inString) then
		{
		    _vehicles = profileNamespace getVariable _x;
			
			if((count _vehicles) != 0) then
			{
			    {
				    (_vehicles select _forEachIndex) set [2,0];
			    } forEach _vehicles;
			};
			
			profileNamespace setVariable [_x,_vehicles];
			saveProfileNamespace;
		};
	} forEach _vars;
	
	true;
";

HG_fnc_getInventory = compileFinal
"
    params['_vehicle','_owner','_uid','_plate','_inventory'];
	
	_owner = _vehicle getVariable 'HG_Owner';
	_uid = _owner select 0;
	_plate = _owner select 1;
	_inventory = [(getItemCargo _vehicle),(getMagazineCargo _vehicle),(getWeaponCargo _vehicle),(getBackpackCargo _vehicle)];
	
	profileNamespace setVariable[format['HG_Inventory_%1_%2',_uid,_plate],_inventory];
	saveProfileNamespace;
	
	true;
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
    params['_unit','_types','_garage',['_toSend',[],[[]]]];
	
	_garage = profileNamespace getVariable[format['HG_Garage_%1',(getPlayerUID _unit)],[]];
	
	if((count _garage) != 0) then
	{
	    {
		    _type = [_x select 0] call HG_fnc_getType;
			if(_type in _types) then
			{
			    _active = _x select 2;
			    if(_active isEqualTo 0) then
			    {
			        _toSend pushBack [(_x select 0),(_x select 1)];
			    };
			};
	    } forEach _garage;
	};
	
    _toSend remoteExecCall ['HG_fnc_fillGarage',(owner _unit),false];
	
	true;
";

HG_fnc_spawnVehicle = compileFinal
"
    params['_mode','_unit','_classname','_sp',['_plate',round(random(100000)),[0]],'_vehicle','_garage','_index'];
	
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
	if(_index != -1) then
	{
	    (_garage select _index) set [2,1];
	} else {
	    _garage pushBack [_classname,_plate,1];
	};
	profileNamespace setVariable[format['HG_Garage_%1',(getPlayerUID _unit)],_garage];
	if(((getNumber(missionConfigFile >> 'CfgClient' >> 'enableVehicleInventorySave')) isEqualTo 1) AND (_mode isEqualTo 1)) then
	{
	    [_vehicle] call HG_fnc_setInventory;
	};
	saveProfileNamespace;
	if(_mode isEqualTo 1) then
	{
	    (localize 'STR_HG_GRG_VEHICLE_SPAWNED') remoteExecCall ['hint',(owner _unit),false];
	};
	
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
    params['_unit','_vehicle','_plate','_garage','_index'];
	
	_garage = profileNamespace getVariable[format['HG_Garage_%1',(getPlayerUID _unit)],[]];
	_index = [_plate,_garage] call HG_fnc_findIndex;
	(_garage select _index) set [2,0];
	profileNamespace setVariable[format['HG_Garage_%1',(getPlayerUID _unit)],_garage];
	saveProfileNamespace;
	if((getNumber(missionConfigFile >> 'CfgClient' >> 'enableVehicleInventorySave')) isEqualTo 1) then
	{
	    [_vehicle] call HG_fnc_getInventory;
	};
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
				_index = [_plate,_garage] call HG_fnc_findIndex;
			    (_garage select _index) set [2,0];
			    if(_saveInv) then
				{
				    [_x] call HG_fnc_getInventory;
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
    params['_value'];
	
	profileNamespace setVariable _value;
	saveProfileNamespace;
";

if((getNumber(missionConfigFile >> "CfgClient" >> "storeVehiclesOnDisconnect")) isEqualTo 1) then
{
    addMissionEventHandler ["HandleDisconnect",{_this call HG_fnc_disconnect; false;}];
};

if((getNumber(missionConfigFile >> "CfgClient" >> "resetGaragesOnServerStart")) isEqualTo 1) then
{
    [] call HG_fnc_resetGarages;
} else {
    [] call HG_fnc_activeReset;
};

"HG_CLIENT" addPublicVariableEventHandler {[(_this select 1)] call HG_fnc_pvarLocal;};
