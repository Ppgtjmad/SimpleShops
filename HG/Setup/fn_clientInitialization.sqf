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
HG_STORE_VEHICLES_ON_DC = (getNumber(missionConfigFile >> "CfgClient" >> "storeVehiclesOnDisconnect")) isEqualTo 1;
HG_PLAYER_INVENTORY_SAVE_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enablePlayerInventorySave")) isEqualTo 1;
HG_VEHICLE_INVENTORY_SAVE_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableVehicleInventorySave")) isEqualTo 1;
HG_XP_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableXP")) isEqualTo 1;
HG_KILL_COUNT_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableKillCount")) isEqualTo 1;
HG_TAGS_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableTags")) isEqualTo 1;
HG_MARKERS_ENABLED = (getNumber(missionConfigFile >> "CfgClient" >> "enableMarkers")) isEqualTo 1;
HG_ADMINS = getArray(missionConfigFile >> "CfgClient" >> "admins");

/*
    Init EVHs
*/
HG_RESPAWN_EVH = player addEventHandler["Respawn",{_this call HG_fnc_respawn}];
HG_KILLED_EVH = player addEventHandler["Killed",{_this call HG_fnc_killed}];
HG_RATING_EVH = player addEventHandler["HandleRating",{_this call HG_fnc_handleRating}];
HG_INVENTORY_OPENED_EVH = player addEventHandler["InventoryOpened",{_this call HG_fnc_inventoryOpened}];
HG_INVENTORY_CLOSED_EVH = player addEventHandler["InventoryClosed",{_this call HG_fnc_inventoryClosed}];

if((getPlayerUID player) in HG_ADMINS) then
{
    waitUntil {!isNull (findDisplay 46)};
    HG_KEY_DOWN_EVH = (findDisplay 46) displayAddEventHandler 
	[
	    "KeyDown",
		{
	        if(((_this select 1) isEqualTo (getNumber(missionConfigFile >> "CfgClient" >> "adminKey"))) AND ((getPlayerUID player) in HG_ADMINS) AND !dialog) then
			{
			    [] call HG_fnc_dialogOnLoadAdminMenu;
			};
		}
	];
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
	    player addAction ["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>Give Money</t>",{HG_CURSOR_OBJECT = cursorObject; createDialog "HG_GiveMoney"},"",0,false,false,"",'(alive player) AND (cursorObject isKindOf "Man") AND (isPlayer cursorObject) AND (alive cursorObject) AND (player distance cursorObject < 2) AND !dialog'];
	};
	if(HG_PAYCHECK_ENABLED) then
	{
	    HG_PAYCHECK_THREAD = [] spawn HG_fnc_paycheck;
	};
};
