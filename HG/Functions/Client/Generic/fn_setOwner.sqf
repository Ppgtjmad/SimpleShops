/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_vehicle",["_unit",player,[objNull]],["_plate",round(random(9999))],["_color",(localize "STR_HG_DEFAULT")]];

_vehicle setVariable["HG_Owner",[(getPlayerUID _unit),_plate,_color,[]],true];
[_vehicle] call HG_fnc_addActions;
_classname = typeOf _vehicle;

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

hint format[(localize "STR_HG_NOW_OWNER"),(getText(configFile >> "CfgVehicles" >> _classname >> "displayName"))];

true;
