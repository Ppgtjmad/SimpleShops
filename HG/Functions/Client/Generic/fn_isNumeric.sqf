/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_value","_in",["_out",[]],["_valid",["0","1","2","3","4","5","6","7","8","9"]],["_return",true]];

_in = str _value; 
_out = _in splitString ""; 

{
    if(!(_x in _valid)) then
	{
	    _return = false;
	};
} forEach _out;

_return;
