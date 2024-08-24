/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_vehicle","_lock"];
	
if(local _vehicle) then
{
	_vehicle lock _lock;
} else {
	[_vehicle,_lock] remoteExecCall ["lock",(owner _vehicle),false];
};
	
true;
	