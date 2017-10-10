/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params[["_value","",["",0]],"_in",["_valid",["0","1","2","3","4","5","6","7","8","9"]],["_return",true]];

if((typeName _value) isEqualTo "SCALAR") exitWith {_return;};

_in = _value splitString ""; 

{
    if(!(_x in _valid)) then
	{
	    _return = false;
	};
} forEach _in;

_return;
