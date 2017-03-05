/*
    Author - HoverGuy
    © All Fucks Reserved
*/

/*
    Add give money action to player (if applicable)
*/
if((getNumber(missionConfigFile >> "CfgClient" >> "enableGiveMoney")) isEqualTo 1) then
{
    player addAction["<img image='HG_SWSS\UI\money.paa' size='1.5'/><t color='#FF0000'>Give Money</t>",{HG_CURSOR_OBJECT = cursorObject; createDialog "HG_GiveMoney"},"",0,false,false,"",'(alive player) AND (cursorObject isKindOf "Man") AND (alive cursorObject) AND (player distance cursorObject < 2) AND !dialog'];
};
	
/*
    Init money variable
*/
if((getNumber(missionConfigFile >> "CfgClient" >> "enableSave")) isEqualTo 1) then
{
    if((isNil {profileNamespace getVariable "HG_Save"}) OR ((getNumber(missionConfigFile >> "CfgClient" >> "resetSavedMoney")) isEqualTo 1)) then
	{
	    profileNamespace setVariable["HG_Save",(getNumber(missionConfigFile >> "CfgClient" >> "HG_MoneyCfg" >> (rank player) >> "startCash"))];
	};
} else {
    player setVariable["HG_myCash",(getNumber(missionConfigFile >> "CfgClient" >> "HG_MoneyCfg" >> (rank player) >> "startCash"))];
};

/*
    Init HUD (if applicable)
*/
if((getNumber(missionConfigFile >> "CfgClient" >> "enableHUD")) isEqualTo 1) then
{
    [0] call HG_fnc_HUD;
};

/*
    Init paycheck thread (if applicable)
*/
if((getNumber(missionConfigFile >> "CfgClient" >> "enablePaycheck")) isEqualTo 1) then
{
	HG_PAYCHECK_THREAD = [] spawn HG_fnc_paycheck;
	HG_RESPAWN_EVH = player addEventHandler
    [
        "Respawn",
        {
            if(scriptDone HG_PAYCHECK_THREAD) then 
	        {
	            HG_PAYCHECK_THREAD = [] spawn HG_fnc_paycheck;
	        }
	    }
    ];
};

/*
    Killed EVH for money reward (if applicable)
*/
if((getNumber(missionConfigFile >> "CfgClient" >> "enableKillReward")) isEqualTo 1) then
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
				    if((getNumber(missionConfigFile >> "CfgClient" >> "enableTeamKillPenalty")) isEqualTo 1) then
				    {
				        [(getNumber(missionConfigFile >> "CfgClient" >> "HG_MoneyCfg" >> (rank player) >> "tkPenalty")),1] remoteExecCall ["HG_fnc_addOrSubCash",_killer,false];
					};
				} else {
				    [(getNumber(missionConfigFile >> "CfgClient" >> "HG_MoneyCfg" >> (rank player) >> "killedReward")),0] remoteExecCall ["HG_fnc_addOrSubCash",_killer,false];
				};
			};			
		}
	];
};
