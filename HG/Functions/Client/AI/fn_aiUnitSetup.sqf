/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
if(!isServer) exitWith {true};

params["_ai"];

// _ai represents the passed AI unit to the function
if((typeName _ai) != "OBJECT") exitWith {diag_log format[(localize "STR_HG_ERR_NOT_OBJECT"),"HG\Functions\Client\AI\fn_aiUnitSetup.sqf"];};
if(!(_ai isKindOf "Man")) exitWith {diag_log format[(localize "STR_HG_ERR_NOT_MAN"),"HG\Functions\Client\AI\fn_aiUnitSetup.sqf"];};
if(isPlayer _ai) exitWith {diag_log format[(localize "STR_HG_ERR_PLAYER"),"HG\Functions\Client\AI\fn_aiUnitSetup.sqf"];};

if((getNumber(getMissionConfig "CfgClient" >> "enableKillReward")) isEqualTo 1) then
{
    _ai addEventHandler
    [
        "Killed",
        {
            params ["_unit","_killer","_instigator"];

			if((!isPlayer _instigator) OR {_instigator isEqualTo _unit}) exitWith {};
			
            if((side (group _unit)) isEqualTo (side (group _instigator))) then
            {
                if((getNumber(getMissionConfig "CfgClient" >> "enableTeamKillPenalty")) isEqualTo 1) then
                {
                    [(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _unit) >> "tkPenaltyAI")),1] remoteExecCall ["HG_fnc_addOrSubCash",_instigator,false];
					if((getNumber(getMissionConfig "CfgClient" >> "enableXP")) isEqualTo 1) then
					{
						[(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _unit) >> "xpPenaltyAI")),1] remoteExecCall ["HG_fnc_addOrSubXP",_instigator,false];
					};
                };
            } else {
			    if(395180 in (getDLCs 1)) then
				{
				    [(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _unit) >> "killedReward")),_unit] call HG_fnc_moneyItem;
				} else {
                    [(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _unit) >> "killedReward")),0] remoteExecCall ["HG_fnc_addOrSubCash",_instigator,false];
				};
				if((getNumber(getMissionConfig "CfgClient" >> "enableXP")) isEqualTo 1) then
				{
					[(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _unit) >> "xpReward")),0] remoteExecCall ["HG_fnc_addOrSubXP",_instigator,false];
				};
				if(((getNumber(getMissionConfig "CfgClient" >> "enableKillCount")) isEqualTo 1) AND ((getNumber(getMissionConfig "CfgClient" >> "enableHUD")) isEqualTo 1)) then
				{
					[0] remoteExecCall ["HG_fnc_addOrSubKills",_instigator,false];
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
