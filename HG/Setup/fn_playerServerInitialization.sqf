/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_player"];
private _uid = getPlayerUID _player;

/*
    Init Garage variable
*/
if(isNil {profileNamespace getVariable [format["HG_Garage_%1",_uid],[]]}) then
{
    profileNamespace setVariable[format["HG_Garage_%1",_uid],[]];
	saveProfileNamespace;
};

/*
    Init XP variable (if applicable)
*/
if((getNumber(missionConfigFile >> "CfgClient" >> "enableXP")) isEqualTo 1) then
{
    private _xp = profileNamespace getVariable format["HG_XP_%1",_uid];
    if(isNil "_xp") then
	{
	    profileNamespace setVariable [format["HG_XP_%1",_uid],[(rank _player),0]];
		saveProfileNamespace;
	} else {
	    private _rank = (profileNamespace getVariable format["HG_XP_%1",_uid]) select 0;
	    _player setRank _rank
	};
	
	HG_XP = profileNamespace getVariable format["HG_XP_%1",_uid];
	(owner _player) publicVariableClient "HG_XP";
	if(isServer AND !hasInterface) then
	{
	    HG_XP = nil;
	};
};

/*
    Init money variable
*/
if((getNumber(missionConfigFile >> "CfgClient" >> "enableSave")) isEqualTo 1) then
{
    private _save = profileNamespace getVariable format["HG_Cash_%1",_uid];
    if((isNil "_save") OR ((getNumber(missionConfigFile >> "CfgClient" >> "resetSavedMoney")) isEqualTo 1)) then
	{
	    profileNamespace setVariable [format["HG_Cash_%1",_uid],(getNumber(missionConfigFile >> "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startCash"))];
		saveProfileNamespace;
	};
	
	HG_CASH = profileNamespace getVariable format["HG_Cash_%1",_uid];
	(owner _player) publicVariableClient "HG_CASH";
	if(isServer AND !hasInterface) then
	{
	    HG_CASH = nil;
	};
} else {
    _player setVariable["HG_myCash",(getNumber(missionConfigFile >> "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startCash"))];
};

/*
    Init kill count variable (if applicable)
*/
if((getNumber(missionConfigFile >> "CfgClient" >> "enableKillCount")) isEqualTo 1) then
{
    private _kc = profileNamespace getVariable format["HG_KillCount_%1",_uid];
    if(isNil "_kc") then
	{
	    profileNamespace setVariable [format["HG_KillCount_%1",_uid],0];
		saveProfileNamespace;
	};
	
	HG_KILL_COUNT = profileNamespace getVariable format["HG_KillCount_%1",_uid];
	(owner _player) publicVariableClient "HG_KILL_COUNT";
	if(isServer AND !hasInterface) then
	{
	    HG_KILL_COUNT = nil;
	};
};

/*
    Init gear (if applicable)
*/
if((getNumber(missionConfigFile >> "CfgClient" >> "enablePlayerInventorySave")) isEqualTo 1) then
{
    private _gear = profileNamespace getVariable format["HG_Gear_%1",_uid];
    if(isNil "_gear") then
	{
	    [_player] call HG_fnc_getGear;
	} else {
	    _gear pushBack _player;
	    _gear call HG_fnc_parseGear;
	};
};

/*
    Init HUD (if applicable)
*/
if((getNumber(missionConfigFile >> "CfgClient" >> "enableHUD")) isEqualTo 1) then
{
    [0] remoteExecCall ["HG_fnc_HUD",(owner _player),false];
};
