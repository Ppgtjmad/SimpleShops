/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_mode","_newVal"];

_newVal = switch(_mode) do
{
    case 0: 
	{
		HG_KILL_COUNT + 1;
	};
	case 1:
	{
		HG_KILL_COUNT - 1;
	};
};

if(_newVal < 0) then 
{
    _newVal = 0
};

HG_CLIENT = [_newVal,(getPlayerUID player),2];
if(isServer AND hasInterface) then
{
	[HG_CLIENT] call HG_fnc_pvarLocal;
} else {
    publicVariableServer "HG_CLIENT";
};
HG_CLIENT = nil;
HG_KILL_COUNT = _newVal; 

[4] call HG_fnc_HUD;

true;
