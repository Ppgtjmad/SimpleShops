/*
    Author - HoverGuy
    © All Fucks Reserved
*/
params["_ai"];

if(_ai != "OBJECT") exitWith {diag_log (localize "STR_HG_ERR_NOT_OBJECT");};

if((getNumber(missionConfigFile >> "CfgClient" >> "enableKillReward")) isEqualTo 1) then
{
    // _ai represents the passed AI to the function
    _ai addEventHandler
    [
        "Killed",
        {
            params ["_unit","_killer"];

            if(isPlayer _killer) then
            {
                if((side _killer) isEqualTo (side _unit)) then
                {
                    if((getNumber(missionConfigFile >> "CfgClient" >> "enableTeamKillPenalty")) isEqualTo 1) then
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
