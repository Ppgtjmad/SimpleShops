/*
    Author - HoverGuy
    Description - Spawned when a vehicle is loaded
    © All Fucks Reserved
*/
params["_vehicle","_oldDir"];
    
while {!isNull _vehicle} do
{
	_oldDir = getDir _vehicle;
	_vehicle setDir (_oldDir + 0.5);
	uiSleep 0.01;
};
