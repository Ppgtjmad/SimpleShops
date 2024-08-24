/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_unit"];

if(isNull _unit) exitWith {true};
if(!(_unit isKindOf "Man")) exitWith {true};

HG_CURSOR_OBJECT = _unit;

createDialog "HG_GiveMoney";

true;
