/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_vehicle","_oldDir"];
    
while {!isNull _vehicle} do
{
	_oldDir = getDir _vehicle;
	_vehicle setDir (_oldDir + 0.5);
	uiSleep 0.01;
};
