/*
    Author - HoverGuy
    Description - Used to add or substract money from the money variable
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_amount","_mode","_oldVal","_newVal"];

if(HG_SAVE_ENABLED) then
{
    _oldVal = profileNamespace getVariable "HG_Save";
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
    profileNamespace setVariable["HG_Save",_newVal];
	saveProfileNamespace;
} else {
    player setVariable["HG_myCash",_newVal];
};

if(HG_HUD_ENABLED) then
{
    [1] call HG_fnc_HUD;
};

true;
