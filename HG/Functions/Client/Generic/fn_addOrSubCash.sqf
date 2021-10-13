/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params[["_amount",1,[0]],["_mode",0,[0]],["_where",0,[0]],"_oldVal","_newVal"];

if(!([_amount] call HG_fnc_isNumeric)) exitWith {hint (localize "STR_HG_NOT_A_NUMBER");};
if(_amount isEqualTo 0) exitWith {true;};

_oldVal = if(_where isEqualTo 0) then {(player getVariable HG_CASH_VAR)} else {(player getVariable HG_BANK_VAR)};
_newVal = if(_mode isEqualTo 0) then {(_oldVal + _amount)} else {(_oldVal - _amount)};
if(_newVal < 0) then {_newVal = 0};

HG_CLIENT = [[0,(getPlayerUID player),_newVal],[3,(getPlayerUID player),_newVal]] select _where;
	
if(isServer) then
{
	[HG_CLIENT] call HG_fnc_clientToServer;
} else {
    publicVariableServer "HG_CLIENT";
};
	
HG_CLIENT = nil;

if(_where isEqualTo 0) then
{
    player setVariable [HG_CASH_VAR,_newVal,true];
	
	if(HG_HUD_ENABLED) then
    {
	    if(HG_HUD_TOGGLED) then
		{
            [1] call HG_fnc_HUD;
		};
    };
} else {
    player setVariable [HG_BANK_VAR,_newVal,true];
};

if(HG_ATM_ENABLED) then
{
	[] call HG_fnc_atmRefresh;
};

true;
