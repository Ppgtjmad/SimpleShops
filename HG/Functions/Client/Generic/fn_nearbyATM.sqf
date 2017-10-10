/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_objs",["_return",false]];
_objs = nearestObjects [player,[],3];

{
	if(((str _x) find "atm_") != -1) exitWith 
	{
	    _return = true;
	};
} forEach _objs;

_return;
