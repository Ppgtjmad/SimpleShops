/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_value","_array","_return"];

_return = -1;

{
	if(_value in _x) exitWith 
	{
		_return = _forEachIndex;
	};
} forEach _array;

_return;
