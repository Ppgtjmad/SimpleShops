/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_unit"];

if(isNull _unit) exitWith {true};
if(!(_unit isKindOf "Man")) exitWith {true};

HG_CURSOR_OBJECT = _unit;

createDialog "HG_GiveMoney";

true;
