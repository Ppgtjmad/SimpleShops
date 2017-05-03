/*
    Author - HoverGuy
    Description - Used to add or substract money from the money variable
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params[["_amount",1,[0]],["_mode",0,[0]],"_newVal"];

_newVal = switch(_mode) do
{
    case 0: 
	{
		HG_CASH + _amount;
	};
	case 1:
	{
		HG_CASH - _amount;
	};
};

if(HG_SAVE_ENABLED) then
{
    HG_CLIENT = [format["HG_Cash_%1",(getPlayerUID player)],_newVal];
	if(isServer) then
	{
	    [HG_CLIENT] call HG_fnc_pvarLocal;
	} else {
        publicVariableServer "HG_CLIENT";
	};
	HG_CLIENT = nil;
};

HG_CASH = _newVal;
player setVariable ["HG_Cash",HG_CASH,true];

if(HG_HUD_ENABLED) then
{
    [1] call HG_fnc_HUD;
};

true;
