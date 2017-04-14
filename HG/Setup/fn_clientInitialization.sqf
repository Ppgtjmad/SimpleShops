/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

/*
    Init constants
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
HG_PLAYER_INVENTORY_SAVE_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enablePlayerInventorySave")) isEqualTo 1;
HG_VEHICLE_INVENTORY_SAVE_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableVehicleInventorySave")) isEqualTo 1;
HG_XP_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableXP")) isEqualTo 1;
HG_KILL_COUNT_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableKillCount")) isEqualTo 1;
HG_TAGS_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableTags")) isEqualTo 1;
HG_MARKERS_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableMarkers")) isEqualTo 1;

/*
    Init EVHs
*/
HG_RESPAWN_EVH = player addEventHandler["Respawn",{_this call HG_fnc_respawn}];
HG_KILLED_EVH = player addEventHandler["Killed",{_this call HG_fnc_killed}];
HG_RATING_EVH = player addEventHandler["HandleRating",{_this call HG_fnc_handleRating}];
HG_INVENTORY_OPENED_EVH = player addEventHandler["InventoryOpened",{_this call HG_fnc_inventoryOpened}];
HG_INVENTORY_CLOSED_EVH = player addEventHandler["InventoryClosed",{_this call HG_fnc_inventoryClosed}];

/*
    Init money variable
*/
if(HG_SAVE_ENABLED) then
{
    if((isNil {profileNamespace getVariable "HG_Save"}) OR HG_RESET_SAVED_MONEY_ENABLED) then
	{
	    profileNamespace setVariable["HG_Save",(getNumber(missionConfigFile >> "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "startCash"))];
	};
} else {
    player setVariable["HG_myCash",(getNumber(missionConfigFile >> "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "startCash"))];
};

/*
    Init XP variable (if applicable)
*/
if(HG_XP_ENABLED) then
{
    if(isNil {profileNamespace getVariable "HG_XP"}) then
	{
	    profileNamespace setVariable["HG_XP",0];
	};
};

/*
    Init kill count variable (if applicable)
*/
if(HG_KILL_COUNT_ENABLED) then
{
    if(isNil {profileNamespace getVariable "HG_KillCount"}) then
	{
	    profileNamespace setVariable["HG_KillCount",0];
	};
};

/*
    Init gear (if applicable)
*/
if(HG_PLAYER_INVENTORY_SAVE_ENABLED) then
{
    if(isNil {profileNamespace getVariable "HG_Gear"}) then
	{
	    [] call HG_fnc_getGear;
	} else {
	    (profileNamespace getVariable "HG_Gear") call HG_fnc_parseGear;
	};
};

/*
    Init HUD (if applicable)
*/
if(HG_HUD_ENABLED) then
{
    [0] call HG_fnc_HUD;
};

/*
    Init Tags (if applicable)
*/
if(HG_TAGS_ENABLED) then
{
    ("HG_Tags" call BIS_fnc_rscLayer) cutRsc ["HG_Tags","PLAIN"];
    HG_DRAW_3D_MEVH = addMissionEventHandler ["Draw3D",{[] call HG_fnc_playerTags}];
};

/*
    Init Markers (if applicable)
*/
if(HG_MARKERS_ENABLED) then
{
    HG_MAP_MEVH = addMissionEventHandler ["Map",{if(((_this select 0) OR (_this select 1)) AND ("ItemMap" in (assignedItems player))) then {[] spawn HG_fnc_markers};}];
};

/*
    Init paycheck thread & add give money action to player (if applicable)
*/
if(HG_PAYCHECK_ENABLED OR HG_GIVE_MONEY_ENABLED) then
{
    if(HG_GIVE_MONEY_ENABLED) then
	{
	    player addAction ["<img image='HG\UI\money.paa' size='1.5'/><t color='#FF0000'>Give Money</t>",{HG_CURSOR_OBJECT = cursorObject; createDialog "HG_GiveMoney"},"",0,false,false,"",'(alive player) AND (cursorObject isKindOf "Man") AND (alive cursorObject) AND (player distance cursorObject < 2) AND !dialog'];
	};
	if(HG_PAYCHECK_ENABLED) then
	{
	    HG_PAYCHECK_THREAD = [] spawn HG_fnc_paycheck;
	};
};
