/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_amount","_mode",["_ranks",["PRIVATE","CORPORAL","SERGEANT","LIEUTENANT","CAPTAIN","MAJOR","COLONEL"]]];

if((rank player) isEqualTo "COLONEL") exitWith {};

private["_curXp","_rankIndex","_newXp"];
_curXp = (profileNamespace getVariable "HG_XP") select 1;
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
	        player setRank _newRank;
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
		player setRank _newRank;
	};
};

profileNamespace setVariable ["HG_XP",[(rank player),_newXp]];
saveProfilenamespace;

if(HG_HUD_ENABLED) then
{
    [2] call HG_fnc_HUD;
	[3] call HG_fnc_HUD;
};

true;
