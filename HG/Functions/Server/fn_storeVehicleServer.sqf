/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_mode","_unit","_vehicle",["_plate",round(random(100000)),[0]]];

if(!HG_SAVING_EXTDB) then
{
    private _garage = profileNamespace getVariable[format["HG_Garage_%1",(getPlayerUID _unit)],[]];
	
	if(_mode isEqualTo 0) then
    {
	    _garage pushBack [_vehicle,_plate,0];
    } else {
	    private _index = [_plate,_garage] call HG_fnc_findIndex;
		
	    if(_index != -1) then
	    {
	        (_garage select _index) set [2,0];
	    } else {
	        _garage pushBack [(typeOf _vehicle),_plate,0];
	    };
	};
	
	profileNamespace setVariable[format["HG_Garage_%1",(getPlayerUID _unit)],_garage];
	saveProfileNamespace;
} else {
    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{
	    [
		    format["INSERT INTO HG_Vehicles (PID, Classname, Plate, Inventory, Active) VALUES ('%1','%2','%3','%4','%5')",(getPlayerUID _unit),_vehicle,_plate,[],0],
			format["UPDATE HG_Vehicles SET Active = '%1' WHERE PID = '%2' AND Plate = '%3'",0,(getPlayerUID _unit),_plate]
		] select _mode;
	} else {
		[
			format["HG_vehicleInsert:%1:%2:%3:%4:%5",(getPlayerUID _unit),_vehicle,_plate,[],0],
			format["HG_vehicleActiveUpdate:%1:%2:%3",0,(getPlayerUID _unit),_plate]
		] select _mode;
	};
	
	// Send update/insert query here
};

if(_mode isEqualTo 1) then
{
    if((getNumber(missionConfigFile >> "CfgClient" >> "enableVehicleInventorySave")) isEqualTo 1) then
    {
	    [_vehicle] call HG_fnc_getInventory;
    };
	
    deleteVehicle _vehicle;
	
	(localize "STR_HG_GRG_VEHICLE_STORED") remoteExecCall ["hint",(owner _unit),false];
};
	
true;
	