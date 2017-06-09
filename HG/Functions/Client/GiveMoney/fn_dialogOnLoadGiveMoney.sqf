/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_unit"];

if(isNull _unit) exitWith {true};
if(!(_unit isKindOf "Man")) exitWith {true};

HG_CURSOR_OBJECT = _unit;

createDialog "HG_GiveMoney";

true;
