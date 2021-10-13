/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_vehicle","_oldDir"];
    
while {!isNull _vehicle} do
{
	_oldDir = getDir _vehicle;
	_vehicle setDir (_oldDir + 0.5);
	uiSleep 0.01;
};
