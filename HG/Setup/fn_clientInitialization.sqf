/*
    Author - HoverGuy
    © All Fucks Reserved
*/

/*
    Init variables
*/
HG_SAVE_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableSave")) isEqualTo 1;
HG_RESET_SAVED_MONEY_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "resetSavedMoney")) isEqualTo 1;
HG_HUD_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableHUD")) isEqualTo 1;
HG_PAYCHECK_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enablePaycheck")) isEqualTo 1;
HG_GIVE_MONEY_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableGiveMoney")) isEqualTo 1;
HG_KILL_REWARD_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableKillReward")) isEqualTo 1;
HG_TEAM_KILL_PENALTY_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableTeamKillPenalty")) isEqualTo 1;
HG_CRATE_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableCrate")) isEqualTo 1;
HG_CLEAR_INVENTORY_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "clearInventory")) isEqualTo 1;

/*
    Init money variable
*/
if(HG_SAVE_ENABLED) then
{
    if((isNil {profileNamespace getVariable "HG_Save"}) OR HG_RESET_SAVED_MONEY_ENABLED) then
	{
	    profileNamespace setVariable["HG_Save",(getNumber(missionConfigFile >> "CfgClient" >> "HG_MoneyCfg" >> (rank player) >> "startCash"))];
	};
} else {
    player setVariable["HG_myCash",(getNumber(missionConfigFile >> "CfgClient" >> "HG_MoneyCfg" >> (rank player) >> "startCash"))];
};

/*
    Init HUD (if applicable)
*/
if(HG_HUD_ENABLED) then
{
    [0] call HG_fnc_HUD;
};

/*
    Init paycheck thread & add give money action to player (if applicable)
*/
if(HG_PAYCHECK_ENABLED OR HG_GIVE_MONEY_ENABLED) then
{
    if(HG_GIVE_MONEY_ENABLED) then
	{
	    player addAction["<img image='HG_SWSS\UI\money.paa' size='1.5'/><t color='#FF0000'>Give Money</t>",{HG_CURSOR_OBJECT = cursorObject; createDialog "HG_GiveMoney"},"",0,false,false,"",'(alive player) AND (cursorObject isKindOf "Man") AND (alive cursorObject) AND (player distance cursorObject < 2) AND !dialog'];
	};
	if(HG_PAYCHECK_ENABLED) then
	{
	    HG_PAYCHECK_THREAD = [] spawn HG_fnc_paycheck;
	};
	
	HG_RESPAWN_EVH = player addEventHandler
    [
        "Respawn",
        {
		    if(HG_PAYCHECK_ENABLED) then
			{
			    if(scriptDone HG_PAYCHECK_THREAD) then 
	            {
	                HG_PAYCHECK_THREAD = [] spawn HG_fnc_paycheck;
	            };
			};
			if(HG_GIVE_MONEY_ENABLED) then
	        {
	            player addAction["<img image='HG_SWSS\UI\money.paa' size='1.5'/><t color='#FF0000'>Give Money</t>",{HG_CURSOR_OBJECT = cursorObject; createDialog "HG_GiveMoney"},"",0,false,false,"",'(alive player) AND (cursorObject isKindOf "Man") AND (alive cursorObject) AND (player distance cursorObject < 2) AND !dialog'];
	        };
	    }
    ];
};

/*
    Killed EVH for money reward (if applicable)
*/
if(HG_KILL_REWARD_ENABLED) then
{
    HG_KILLED_EVH = player addEventHandler
	[
	    "Killed",
		{
		    params["_unit","_killer"];
			
			if((isPlayer _killer) AND {_killer != _unit}) then
            {
				if((side _killer) isEqualTo playerSide) then
			    {
				    if(HG_TEAM_KILL_PENALTY_ENABLED) then
				    {
				        [(getNumber(missionConfigFile >> "CfgClient" >> "HG_MoneyCfg" >> (rank player) >> "tkPenalty")),1] remoteExecCall ["HG_fnc_addOrSubCash",_killer,false];
					};
				} else {
				    [(getNumber(missionConfigFile >> "CfgClient" >> "HG_MoneyCfg" >> (rank player) >> "killedReward")),0] remoteExecCall ["HG_fnc_addOrSubCash",_killer,false];
				};
			};			
		}
	];
	
	HG_RATING_EVH = player addEventHandler
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
