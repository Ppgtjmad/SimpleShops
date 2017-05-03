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
    HG_CLIENT = [format["HG_XP_%1",(getPlayerUID player)],[_rank,0]];
	if(isServer) then
	{
	    [HG_CLIENT] call HG_fnc_pvarLocal;
	} else {
	    publicVariableServer "HG_CLIENT";
	};
	HG_CLIENT = nil;
	HG_XP = [_rank,0];
	player setVariable ["HG_XP",HG_XP,true];
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
