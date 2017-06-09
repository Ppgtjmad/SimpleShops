/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_unit","_types","_garage",["_toSend",[],[[]]]];

if(!HG_SAVING_EXTDB) then
{
    _garage = profileNamespace getVariable[format["HG_Garage_%1",(getPlayerUID _unit)],[]];
} else {
    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{
	    format["SELECT Classname, Plate, Active FROM HG_Players WHERE PID = '%1' AND Active = 0 AND Alive = 1",(getPlayerUID _unit)];
	} else {
	    format["HG_vehicleSelect:%1",(getPlayerUID _unit)];
	};
	
	// Send select query here _garage =
};
	
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
	
_toSend remoteExecCall ["HG_fnc_fillGarage",(owner _unit),false];
	
true;
