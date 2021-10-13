/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_spawnPoints",["_sp",[false,""]],["_pos",[]],["_near",[]]];

{
    _pos = switch(typeName _x) do
	{
		case "STRING": 
		{
		    markerPos _x;
		};
		case "ARRAY": 
		{
		    _x;
		};
	};
	
    _near = nearestObjects [_pos,["Car","Truck","Air","Tank","Ship","Submarine"],5];
	if((count _near) isEqualTo 0) exitWith
	{
	    _sp = [true,_x];
	};
} forEach _spawnPoints;  

_sp;
