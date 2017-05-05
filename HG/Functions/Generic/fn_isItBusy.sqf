/*
    Author - HoverGuy
    Description - Called when you click "Buy" button in dialog
    Returns - Empty string if all spawn points are busy else first empty spawn point
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_spawnPoints",["_sp",""],["_pos",[]],["_isBusy",[],[[]]]];

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
	
    _isBusy = nearestObjects [_pos,["Car","Truck","Air","Tank","Ship","Submarine"],5];
	if((count _isBusy) isEqualTo 0) exitWith
	{
	    _sp = _x;
	};
} forEach _spawnPoints;  

_sp;
