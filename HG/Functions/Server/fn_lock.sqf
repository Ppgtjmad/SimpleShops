/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_vehicle","_lock"];
	
if(local _vehicle) then
{
	_vehicle lock _lock;
} else {
	[_vehicle,_lock] remoteExecCall ["lock",(owner _vehicle),false];
};
	
true;
	