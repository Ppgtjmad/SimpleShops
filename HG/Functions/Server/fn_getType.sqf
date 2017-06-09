/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_class",["_type","",[""]]];

{
    if(_class isKindOf _x) then
	{
	    _type = _x;
	} else {};
} forEach ["Car","Truck","Tank","Air","Ship","Submarine"];
	
_type;
	