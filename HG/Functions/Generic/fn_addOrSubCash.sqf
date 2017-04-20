/*
    Author - HoverGuy
    Description - Used to add or substract money from the money variable
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_amount","_mode","_oldVal","_newVal"];

if(HG_SAVE_ENABLED) then
{
    _oldVal = HG_CASH;
} else {
    _oldVal = player getVariable "HG_myCash";
};

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
    HG_CLIENT = [_newVal,(getPlayerUID player),1];
	if(isServer) then
	{
	    [HG_CLIENT] call HG_fnc_pvarLocal;
	} else {
        publicVariableServer "HG_CLIENT";
	};
	HG_CLIENT = nil;
	HG_CASH = _newVal;
} else {
    player setVariable ["HG_myCash",_newVal];
};

if(HG_HUD_ENABLED) then
{
    [1] call HG_fnc_HUD;
};

true;
