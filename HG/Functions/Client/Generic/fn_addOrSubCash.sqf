/*
    Author - HoverGuy
    Description - Used to add or subtract money from the money variable
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params[["_amount",1,[0]],["_mode",0,[0]],"_oldVal","_newVal"];

if(!([_amount] call HG_fnc_isNumeric)) exitWith {hint (localize "STR_HG_NOT_A_NUMBER");};

_oldVal = player getVariable "HG_Cash";
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

if(HG_SAVE_ENABLED) then
{
    HG_CLIENT = [0,(getPlayerUID player),_newVal];
	if(isServer) then
	{
	    [HG_CLIENT] call HG_fnc_clientToServer;
	} else {
        publicVariableServer "HG_CLIENT";
	};
	HG_CLIENT = nil;
};

player setVariable ["HG_Cash",_newVal,true];

if(HG_HUD_ENABLED) then
{
    [1] call HG_fnc_HUD;
};

true;
