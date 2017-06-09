/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_unit",["_rank","PRIVATE",[""]]];
if(_rank isEqualTo "") exitWith {};

_unit setUnitRank _rank;

if(HG_XP_ENABLED) then
{
    HG_CLIENT = [2,(getPlayerUID player),[_rank,0]];
	if(isServer) then
	{
	    [HG_CLIENT] call HG_fnc_clientToServer;
	} else {
	    publicVariableServer "HG_CLIENT";
	};
	HG_CLIENT = nil;
	player setVariable ["HG_XP",[_rank,0],true];
};

if(HG_HUD_ENABLED) then
{
    if(HG_XP_ENABLED) then
	{
        [2] call HG_fnc_HUD;
	};
	[3] call HG_fnc_HUD;
};

true;
