/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params[["_amount",1,[0]],["_mode",0,[0]],["_ranks",["PRIVATE","CORPORAL","SERGEANT","LIEUTENANT","CAPTAIN","MAJOR","COLONEL"]]];

if((rank player) isEqualTo "COLONEL") exitWith {};

private["_curXp","_rankIndex","_newXp"];
_curXp = HG_XP select 1;
_rankIndex = _ranks find (rank player);

if(_mode isEqualTo 1) then
{
	_newXp = _curXp - _amount;
	
	if(_newXp < 0) then
	{
	    _newXp = 0;
		
		if((rank player) != "PRIVATE") then
		{
		    private _newRank = (_ranks select (_rankIndex - 1));
			hint format[(localize "STR_HG_DEMOTED"),_newRank,(rank player)];
	        player setUnitRank _newRank;
		};
	};
} else {
    private _reqXp = getNumber(missionConfigFile >> "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "xpToLvlUp");
	_newXp = _curXp + _amount;
	
	if(_newXp >= _reqXp) then
	{
	    _newXp = 0;
		private _newRank = (_ranks select (_rankIndex + 1));
		hint format[(localize "STR_HG_PROMOTED"),_newRank,(rank player)];
		player setUnitRank _newRank;
	};
};

HG_CLIENT = [format["HG_XP_%1",(getPlayerUID player)],[(rank player),_newXp]];
if(isServer) then
{
	[HG_CLIENT] call HG_fnc_pvarLocal;
} else {
    publicVariableServer "HG_CLIENT";
};
HG_CLIENT = nil;
HG_XP = [(rank player),_newXp];
player setVariable ["HG_XP",HG_XP,true];

if(HG_HUD_ENABLED) then
{
    [2] call HG_fnc_HUD;
	[3] call HG_fnc_HUD;
};

true;
