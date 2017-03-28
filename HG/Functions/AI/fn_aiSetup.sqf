/*
    Author - HoverGuy
    © All Fucks Reserved
*/
params["_ai"];

// _ai represents the passed AI to the function
if(_ai != "OBJECT") exitWith {diag_log (localize "STR_HG_ERR_NOT_OBJECT");};

if(HG_KILL_REWARD_ENABLED) then
{
    _ai addEventHandler
    [
        "Killed",
        {
            params ["_unit","_killer"];

            if(isPlayer _killer) then
            {
                if((side _killer) isEqualTo (side _unit)) then
                {
                    if(HG_TEAM_KILL_PENALTY_ENABLED) then
                    {
                        [(getNumber(missionConfigFile >> "CfgClient" >> "HG_MoneyCfg" >> (rank _unit) >> "tkPenalty")),1] remoteExecCall ["HG_fnc_addOrSubCash",_killer,false];
                    };
                } else {
                    [(getNumber(missionConfigFile >> "CfgClient" >> "HG_MoneyCfg" >> (rank _unit) >> "killedReward")),0] remoteExecCall ["HG_fnc_addOrSubCash",_killer,false];
                };
            };
        }
    ];

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
};

true;
