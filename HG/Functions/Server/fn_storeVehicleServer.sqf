/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_mode","_unit","_vehicle",["_plate",round(random(9999))],["_color",""]];

if(!HG_SAVING_EXTDB) then
{
    private _garage = profileNamespace getVariable[format["HG_Garage_%1",(getPlayerUID _unit)],[]];
	
	if(_mode isEqualTo 0) then
    {
	    _garage pushBack [_vehicle,_plate,_color,0];
    } else {
	   private _index = [_plate,_garage] call HG_fnc_findIndex;
		
	    if(_index != -1) then
	    {
	        (_garage select _index) set [3,0];
	    } else {
		    private _color = (_vehicle getVariable "HG_Owner") select 2;
	        _garage pushBack [(typeOf _vehicle),_plate,_color,0];
	    };
	};
	
	profileNamespace setVariable[format["HG_Garage_%1",(getPlayerUID _unit)],_garage];
	saveProfileNamespace;
} else {
    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{
	    [
		    format["INSERT INTO HG_Vehicles (PID, Classname, Plate, Inventory, Active, Color) VALUES ('%1','%2','%3','%4','%5','%6')",(getPlayerUID _unit),_vehicle,_plate,[],0,_color],
			format["UPDATE HG_Vehicles SET Active = '%1' WHERE PID = '%2' AND Plate = '%3'",0,(getPlayerUID _unit),_plate]
		] select _mode;
	} else {
		[
			format["HG_vehicleInsert:%1:%2:%3:%4:%5:%6",(getPlayerUID _unit),_vehicle,_plate,[],0,_color],
			format["HG_vehicleActiveUpdate:%1:%2:%3",0,(getPlayerUID _unit),_plate]
		] select _mode;
	};
	
	[1,_query] call HG_fnc_asyncCall;
};

if(_mode isEqualTo 1) then
{
    if((getNumber(getMissionConfig "CfgClient" >> "enableVehicleInventorySave")) isEqualTo 1) then
    {
	    [_vehicle] call HG_fnc_getInventory;
    };
	
    deleteVehicle _vehicle;
	
	(localize "STR_HG_GRG_VEHICLE_STORED") remoteExecCall ["hint",(owner _unit),false];
};
	
true;
	