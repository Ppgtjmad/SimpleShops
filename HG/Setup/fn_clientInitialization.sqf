/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/

/*
    Init constants
*/
HG_SAVE_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "enableSave")) isEqualTo 1;
HG_RESET_SAVED_MONEY_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "resetSavedMoney")) isEqualTo 1;
HG_HUD_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "enableHUD")) isEqualTo 1;
HG_PAYCHECK_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "enablePaycheck")) isEqualTo 1;
HG_GIVE_MONEY_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "enableGiveMoney")) isEqualTo 1;
HG_BUY_TO_GARAGE_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "enableBuyToGarage")) isEqualTo 1;
HG_KILL_REWARD_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "enableKillReward")) isEqualTo 1;
HG_TEAM_KILL_PENALTY_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "enableTeamKillPenalty")) isEqualTo 1;
HG_CRATE_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "enableCrate")) isEqualTo 1;
HG_CLEAR_INVENTORY_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "clearInventory")) isEqualTo 1;
HG_STORE_VEHICLES_ON_DC = (getNumber(getMissionConfig "CfgClient" >> "storeVehiclesOnDisconnect")) isEqualTo 1;
HG_PLAYER_INVENTORY_SAVE_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "enablePlayerInventorySave")) isEqualTo 1;
HG_XP_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "enableXP")) isEqualTo 1;
HG_KILL_COUNT_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "enableKillCount")) isEqualTo 1;
HG_TAGS_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "enableTags")) isEqualTo 1;
HG_MARKERS_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "enableMarkers")) isEqualTo 1;
HG_ATM_ENABLED = (getNumber(getMissionConfig "CfgClient" >> "enableATM")) isEqualTo 1;
HG_ADMINS = getArray(getMissionConfig "CfgClient" >> "admins");

/*
    Init EVHs
*/
HG_RESPAWN_EVH = player addEventHandler["Respawn",{_this call HG_fnc_respawn}];
HG_KILLED_EVH = player addEventHandler["Killed",{_this call HG_fnc_killed}];
HG_RATING_EVH = player addEventHandler["HandleRating",{_this call HG_fnc_handleRating}];
HG_INVENTORY_OPENED_EVH = player addEventHandler["InventoryOpened",{_this call HG_fnc_inventoryOpened}];
HG_INVENTORY_CLOSED_EVH = player addEventHandler["InventoryClosed",{_this call HG_fnc_inventoryClosed}];

waitUntil {!isNull (findDisplay 46)};
HG_KEY_DOWN_EVH = (findDisplay 46) displayAddEventHandler["KeyDown",{_this call HG_fnc_keyDown}];

/*
    Init tags (if applicable)
*/
if(HG_TAGS_ENABLED) then
{
    ("HG_Tags" call BIS_fnc_rscLayer) cutRsc ["HG_Tags","PLAIN",-1,false];
    HG_DRAW_3D_MEVH = addMissionEventHandler ["Draw3D",{[] call HG_fnc_playerTags}];
};

/*
    Init markers (if applicable)
*/
if(HG_MARKERS_ENABLED) then
{
    HG_MAP_MEVH = addMissionEventHandler ["Map",{if(((_this select 0) OR (_this select 1)) AND ("ItemMap" in (assignedItems player))) then {[] spawn HG_fnc_markers};}];
};

/*
    Init paycheck thread (if applicable)
*/
if(HG_PAYCHECK_ENABLED) then
{
	HG_PAYCHECK_THREAD = [] spawn HG_fnc_paycheck;
};
