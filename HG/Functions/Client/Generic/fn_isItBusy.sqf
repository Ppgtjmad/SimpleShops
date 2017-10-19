/*
    Author - HoverGuy
    Description - Called when you click "Buy" button in dialog
    Returns - Empty array if all spawn positions are busy else first empty position
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
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
