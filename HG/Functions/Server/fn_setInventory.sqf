/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_vehicle","_uid ","_plate","_inventory"];
	
_uid = (_vehicle getVariable "HG_Owner") select 0;
_plate = (_vehicle getVariable "HG_Owner") select 1;

if(!HG_SAVING_EXTDB) then
{
    _inventory = profileNamespace getVariable [format["HG_Inventory_%1_%2",_uid ,_plate],[]];
} else {
    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{
		format["SELECT Inventory FROM HG_Vehicles WHERE PID = '%1' AND Plate = '%2'",_uid,_plate];
	} else {
		format["HG_vehicleGetInventory:%1:%2",_uid,_plate];
	};
	
	_inventory = [2,_query,false] call HG_fnc_asyncCall;
	_inventory = _inventory select 0;
};
	
if((count _inventory) != 0) then
{
    _inventory params ["_items","_mags","_weapons","_backpacks"];

	for "_i" from 0 to ((count (_items select 0)) - 1) do 
	{
		_vehicle addItemCargoGlobal [((_items select 0) select _i), ((_items select 1) select _i)];
	};
	for "_i" from 0 to ((count (_mags select 0)) - 1) do 
	{
		_vehicle addMagazineCargoGlobal [((_mags select 0) select _i), ((_mags select 1) select _i)];
	};
	for "_i" from 0 to ((count (_weapons select 0)) - 1) do 
	{
		_vehicle addWeaponCargoGlobal [((_weapons select 0) select _i), ((_weapons select 1) select _i)];
	};
	for "_i" from 0 to ((count (_backpacks select 0)) - 1) do 
	{
		_vehicle addBackpackCargoGlobal [((_backpacks select 0) select _i), ((_backpacks select 1) select _i)];
	};
};
	
true;
