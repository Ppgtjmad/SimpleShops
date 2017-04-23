/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_ai"];

// _ai represents the passed AI unit to the function
if((typeName _ai) != "OBJECT") exitWith {diag_log format[(localize "STR_HG_ERR_NOT_OBJECT"),"HG\Functions\AI\fn_aiUnitSetup.sqf"];};
if(!(_ai isKindOf "Man")) exitWith {diag_log format[(localize "STR_HG_ERR_NOT_MAN"),"HG\Functions\AI\fn_aiUnitSetup.sqf"];};

if((getNumber(missionConfigFile >> "CfgClient" >> "enableKillReward")) isEqualTo 1) then
{
    _ai addEventHandler
    [
        "Killed",
        {
            params ["_unit","_killer"];

            if(isPlayer _killer) then
            {
                if((side (group _unit)) isEqualTo (side (group _killer))) then
                {
                    if((getNumber(missionConfigFile >> "CfgClient" >> "enableTeamKillPenalty")) isEqualTo 1) then
                    {
                        [(getNumber(missionConfigFile >> "CfgClient" >> "HG_MasterCfg" >> (rank _unit) >> "tkPenalty")),1] remoteExecCall ["HG_fnc_addOrSubCash",_killer,false];
						if((getNumber(missionConfigFile >> "CfgClient" >> "enableXP")) isEqualTo 1) then
						{
						    [(getNumber(missionConfigFile >> "CfgClient" >> "HG_MasterCfg" >> (rank _unit) >> "xpPenalty")),1] remoteExecCall ["HG_fnc_addOrSubXP",_killer,false];
						};
                    };
                } else {
                    [(getNumber(missionConfigFile >> "CfgClient" >> "HG_MasterCfg" >> (rank _unit) >> "killedReward")),0] remoteExecCall ["HG_fnc_addOrSubCash",_killer,false];
					if((getNumber(missionConfigFile >> "CfgClient" >> "enableXP")) isEqualTo 1) then
					{
					    [(getNumber(missionConfigFile >> "CfgClient" >> "HG_MasterCfg" >> (rank _unit) >> "xpReward")),0] remoteExecCall ["HG_fnc_addOrSubXP",_killer,false];
					};
					if(((getNumber(missionConfigFile >> "CfgClient" >> "enableKillCount")) isEqualTo 1) AND ((getNumber(missionConfigFile >> "CfgClient" >> "enableHUD")) isEqualTo 1)) then
					{
					    [0] remoteExecCall ["HG_fnc_addOrSubKills",_killer,false];
					};
                };
            };
        }
    ];
};

_ai addEventHandler
[
    "HandleRating",
    {
        params["_unit","_rating"];

        if(_rating <= 0) then
        {
            _rating = 0;
        };

        _rating;
    }
];

true;
