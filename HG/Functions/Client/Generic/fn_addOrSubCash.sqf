#define ATM_DISPLAY getNumber(getMissionConfig "HG_ATM" >> "idd")
/*
    Author - HoverGuy
    Description - Used to add or subtract money from the money variable
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params[["_amount",1,[0]],["_mode",0,[0]],["_where",0,[0]],"_oldVal","_newVal"];

if(!([_amount] call HG_fnc_isNumeric)) exitWith {hint (localize "STR_HG_NOT_A_NUMBER");};
if(_amount isEqualTo 0) exitWith {true;};

if(_where isEqualTo 0) then
{
    _oldVal = player getVariable "HG_Cash";
} else {
    _oldVal = player getVariable "HG_Bank";
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

if(_newVal < 0) then {_newVal = 0};

if(HG_SAVE_ENABLED) then
{
    if(_where isEqualTo 0) then
	{
        HG_CLIENT = [0,(getPlayerUID player),_newVal];
	} else {
        HG_CLIENT = [3,(getPlayerUID player),_newVal];
	};
	
	if(isServer) then
	{
	    [HG_CLIENT] call HG_fnc_clientToServer;
	} else {
        publicVariableServer "HG_CLIENT";
	};
	
	HG_CLIENT = nil;
};

if(_where isEqualTo 0) then
{
    player setVariable ["HG_Cash",_newVal,true];
	
	if(HG_HUD_ENABLED) then
    {
        [1] call HG_fnc_HUD;
    };
} else {
    player setVariable ["HG_Bank",_newVal,true];
};

if(!isNull (findDisplay ATM_DISPLAY)) then
{
    [] call HG_fnc_atmRefresh;
};

true;
