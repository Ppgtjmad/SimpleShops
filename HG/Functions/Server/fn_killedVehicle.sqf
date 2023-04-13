/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_unit","_killer","_instigator","_useEffects","_owner","_uid","_plate"];

_owner = _unit getVariable "HG_Owner";
_uid = _owner select 0;
_plate = _owner select 1;

if(!HG_SAVING_EXTDB) then
{
    private["_garage","_index"];
	
    _garage = profileNamespace getVariable[format["HG_Garage_%1",_uid],[]];
    _index = [_plate,_garage] call HG_fnc_findIndex;
    _garage deleteAt _index;
	
	profileNamespace setVariable[format["HG_Garage_%1",_uid],_garage];
	
	if((getNumber(getMissionConfig "CfgClient" >> "enableVehicleInventorySave")) isEqualTo 1) then
    {
	    profileNamespace setVariable[format["HG_Inventory_%1_%2",_uid,_plate],nil];
    };
	
	saveProfileNamespace;
} else {

    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{
		format["UPDATE HG_Vehicles SET Active = '%1', Alive = '%2' WHERE PID = '%3' AND Plate = '%4'",0,0,_uid,_plate]
	} else {
	    format["HG_vehicleAliveUpdate:%1:%2:%3:%4",0,0,_uid,_plate]
	};
	
	[1,_query] call HG_fnc_asyncCall;
};
