/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params[["_mode",0,[0]],["_amount",1,[0]],"_oldVal","_newVal"];

_oldVal = player getVariable "HG_Kills";
_newVal = switch(_mode) do
{
    case 0: 
	{
		_oldVal + _amount;
	};
	case 1:
	{
		_oldVal - _amount;
	};
};

if(_newVal < 0) then 
{
    _newVal = 0
};

HG_CLIENT = [1,(getPlayerUID player),_newVal];
if(isServer) then
{
	[HG_CLIENT] call HG_fnc_clientToServer;
} else {
    publicVariableServer "HG_CLIENT";
};
HG_CLIENT = nil;
player setVariable ["HG_Kills",_newVal,true];

[4] call HG_fnc_HUD;

true;
