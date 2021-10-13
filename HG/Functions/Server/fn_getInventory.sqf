/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_vehicle","_owner","_uid","_plate","_inventory"];

_owner = _vehicle getVariable "HG_Owner";
_uid = _owner select 0;
_plate = _owner select 1;
_inventory = [(getItemCargo _vehicle),(getMagazineCargo _vehicle),(getWeaponCargo _vehicle),(getBackpackCargo _vehicle)];

if(!HG_SAVING_EXTDB) then
{
    profileNamespace setVariable[format["HG_Inventory_%1_%2",_uid,_plate],_inventory];
    saveProfileNamespace;
} else {
    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{
	    format["UPDATE HG_Vehicles SET Inventory = '%1' WHERE PID = '%2' AND Plate = '%3'",_inventory,_uid,_plate];
	} else {
	    format["HG_vehicleUpdateInventory:%1:%2:%3",_inventory,_uid,_plate];
	};
	
    [1,_query] call HG_fnc_asyncCall;
};
	
true;
