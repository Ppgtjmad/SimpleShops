/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_unit","_grg","_garage",["_toSend",[],[[]]]];

if(!HG_SAVING_EXTDB) then
{
	_garage = profileNamespace getVariable[format["HG_Garage_%1",(getPlayerUID _unit)],[]];
	_garage = _garage select {(_x select 3) isEqualTo 0};
} else {
    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{
	    format["SELECT Classname, Plate, Color FROM HG_Vehicles WHERE PID = '%1' AND Active = 0 AND Alive = 1",(getPlayerUID _unit)];
	} else {
	    format["HG_vehicleSelect:%1",(getPlayerUID _unit)];
	};
	
	_garage = [2,_query] call HG_fnc_asyncCall;
};
	
if((count _garage) != 0) then
{
    private _types = getArray(getMissionConfig "CfgClient" >> "HG_GaragesCfg" >> _grg >> "allowedTypes");
	
	{
		_type = [_x select 0] call HG_fnc_getType;
		if(_type in _types) then
		{
			_toSend pushBack [(_x select 0),(_x select 1),(_x select 2)];
		};
	} forEach _garage;
};
	
_toSend remoteExecCall ["HG_fnc_fillGarage",(owner _unit),false];
	
true;
