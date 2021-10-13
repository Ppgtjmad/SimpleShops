/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_unit","_killer","_instigator"];

if(HG_KILL_REWARD_ENABLED) then
{
    if((!isPlayer _instigator) OR {_instigator isEqualTo _unit}) exitWith {};
	
	if((side _instigator) isEqualTo playerSide) then
	{
	    if(HG_TEAM_KILL_PENALTY_ENABLED) then
		{
			[(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "tkPenaltyPlayer")),1] remoteExecCall ["HG_fnc_addOrSubCash",_instigator,false];
			if(HG_XP_ENABLED) then
			{
				[(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "xpPenaltyPlayer")),1] remoteExecCall ["HG_fnc_addOrSubXP",_instigator,false];
			};
		};
	} else {
	    if(395180 in (getDLCs 1)) then
		{
		    [(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "killedReward")),player] call HG_fnc_moneyItem;
		} else {
		    [(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "killedReward")),0] remoteExecCall ["HG_fnc_addOrSubCash",_instigator,false];
		};
		if(HG_XP_ENABLED) then
		{
			[(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "xpReward")),0] remoteExecCall ["HG_fnc_addOrSubXP",_instigator,false];
		};
		if(HG_KILL_COUNT_ENABLED) then
		{
			[0] remoteExecCall ["HG_fnc_addOrSubKills",_instigator,false];
		};
	};
	
	if(HG_DEATH_PENALTY_ENABLED) then
	{
	    [(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "xpPenaltyDeath")),1] call HG_fnc_addOrSubXP;
	};
};

if(HG_TAGS_ENABLED) then
{
    ("HG_Tags" call BIS_fnc_rscLayer) cutText ["","PLAIN"];
	removeMissionEventhandler ["Draw3D",HG_DRAW_3D_MEVH];
};

if(HG_MARKERS_ENABLED) then
{
    removeMissionEventhandler ["Map",HG_MAP_MEVH];
};
