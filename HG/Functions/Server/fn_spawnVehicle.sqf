/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_mode","_unit","_classname","_sp",["_plate",round(random(100000))],["_color",(localize "STR_HG_DEFAULT")],"_vehicle"];

if(!HG_SAVING_EXTDB) then
{
    private["_garage","_index"];
	
    _garage = profileNamespace getVariable[format["HG_Garage_%1",(getPlayerUID _unit)],[]];
    _index = [_plate,_garage] call HG_fnc_findIndex;
	
    if(_index != -1) then
    {
	    (_garage select _index) set [3,1];
		_color = (_garage select _index) select 2;
    } else {
	    _garage pushBack [_classname,_plate,_color,1];
    };
	
    profileNamespace setVariable[format["HG_Garage_%1",(getPlayerUID _unit)],_garage];
	saveProfileNamespace;
} else {
	private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{
		[
			format["INSERT INTO HG_Vehicles (PID, Classname, Plate, Inventory, Active, Color) VALUES ('%1','%2','%3','%4','%5','%6')",(getPlayerUID _unit),_classname,_plate,[],1,_color],
			format["UPDATE HG_Vehicles SET Active = '%1' WHERE PID = '%2' AND Plate = '%3'",1,(getPlayerUID _unit),_plate]
		] select _mode;
	} else {
		[
		    format["HG_vehicleInsert:%1:%2:%3:%4:%5:%6",(getPlayerUID _unit),_classname,_plate,[],1,_color],
			format["HG_vehicleActiveUpdate:%1:%2:%3",1,(getPlayerUID _unit),_plate]
		] select _mode;
	};
	
	[1,_query] call HG_fnc_asyncCall;
};

if((typeName _sp) isEqualTo "ARRAY") then
{
	_vehicle = createVehicle [_classname,_sp,[],0,"NONE"];
} else {
	_vehicle = _classname createVehicle (markerPos _sp);
	_vehicle setVectorUp (surfaceNormal (markerPos _sp));
	_vehicle setDir (markerDir _sp);
};

_vehicle allowDamage false;
_vehicle setVariable["HG_Owner",[(getPlayerUID _unit),_plate,_color],true];
[_vehicle,2] call HG_fnc_lock;

if((getNumber(getMissionConfig "CfgClient" >> "clearInventory")) isEqualTo 1) then
{
	clearItemCargoGlobal _vehicle;
	clearMagazineCargoGlobal _vehicle;
	clearWeaponCargoGlobal _vehicle;
	clearBackpackCargoGlobal _vehicle;
};

if(_color != (localize "STR_HG_DEFAULT")) then
{
    private _textures = getArray(configFile >> "CfgVehicles" >> _classname >> "TextureSources" >> _color >> "textures");
	
	for "_i" from 0 to (count _textures)-1 do
	{
	    _vehicle setObjectTextureGlobal [_i,(_textures select _i)];
	};
};

_vehicle allowDamage true;
[_vehicle] remoteExecCall ["HG_fnc_addActions",(owner _unit),false];

if(((getNumber(getMissionConfig "CfgClient" >> "enableVehicleInventorySave")) isEqualTo 1) AND (_mode isEqualTo 1)) then
{
	[_vehicle] call HG_fnc_setInventory;
};

if(_mode isEqualTo 1) then
{
	(localize "STR_HG_GRG_VEHICLE_SPAWNED") remoteExecCall ["hint",(owner _unit),false];
};

true;
