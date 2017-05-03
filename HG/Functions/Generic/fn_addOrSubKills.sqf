/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params[["_mode",0,[0]],["_amount",1,[0]],"_newVal"];

_newVal = switch(_mode) do
{
    case 0: 
	{
		HG_KILLS + _amount;
	};
	case 1:
	{
		HG_KILLS - _amount;
	};
};

if(_newVal < 0) then 
{
    _newVal = 0
};

HG_CLIENT = [format["HG_Kills_%1",(getPlayerUID player)],_newVal];
if(isServer) then
{
	[HG_CLIENT] call HG_fnc_pvarLocal;
} else {
    publicVariableServer "HG_CLIENT";
};
HG_CLIENT = nil;
HG_KILLS = _newVal; 
player setVariable ["HG_Kills",HG_KILLS,true];

[4] call HG_fnc_HUD;

true;
