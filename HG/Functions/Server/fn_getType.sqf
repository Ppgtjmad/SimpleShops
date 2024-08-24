/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_class",["_type","",[""]]];

{
    if(_class isKindOf _x) then
	{
	    _type = _x;
	} else {};
} forEach ["Car","Truck","Tank","Air","Ship","Submarine"];
	
_type;
	