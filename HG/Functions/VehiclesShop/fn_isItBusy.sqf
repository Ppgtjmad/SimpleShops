/*
    Author - HoverGuy
    Description - Called when you click "Buy" button in dialog
    Returns - Empty string if all spawn points are busy else first empty spawn point
    © All Fucks Reserved
*/
params["_spawnPoints",["_sp",""]];

{
    _isBusy = nearestObjects [(markerPos _x),["Car","Truck","Air","Tank","Ship"],5];
	if((count _isBusy) isEqualTo 0) exitWith
	{
	    _sp = _x;
	};
} forEach _spawnPoints;  

_sp;
