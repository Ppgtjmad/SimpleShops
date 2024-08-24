/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
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
