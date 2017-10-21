/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_unit","_killer"];

if(HG_KILL_REWARD_ENABLED) then
{
    if((!isPlayer _killer) OR {_killer isEqualTo _unit}) exitWith {};
	
	if((side _killer) isEqualTo playerSide) then
	{
	    if(HG_TEAM_KILL_PENALTY_ENABLED) then
		{
			[(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "tkPenaltyPlayer")),1] remoteExecCall ["HG_fnc_addOrSubCash",_killer,false];
			if(HG_XP_ENABLED) then
			{
				[(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "xpPenaltyPlayer")),1] remoteExecCall ["HG_fnc_addOrSubXP",_killer,false];
			};
		};
	} else {
		[(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "killedReward")),0] remoteExecCall ["HG_fnc_addOrSubCash",_killer,false];
		if(HG_XP_ENABLED) then
		{
			[(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "xpReward")),0] remoteExecCall ["HG_fnc_addOrSubXP",_killer,false];
		};
		if(HG_KILL_COUNT_ENABLED AND HG_HUD_ENABLED) then
		{
			[0] remoteExecCall ["HG_fnc_addOrSubKills",_killer,false];
		};
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
