/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_player","_jip","_uid","_cash"];
_uid = getPlayerUID _player;

if(!HG_SAVING_EXTDB) then
{
    if(isNil {profileNamespace getVariable [format["HG_Garage_%1",_uid],[]]}) then
    {
        profileNamespace setVariable[format["HG_Garage_%1",_uid],[]];
	    saveProfileNamespace;
    };

    if((getNumber(missionConfigFile >> "CfgClient" >> "enableXP")) isEqualTo 1) then
    {
        private _xp = profileNamespace getVariable format["HG_XP_%1",_uid];
        if(isNil "_xp") then
	    {
		    _xp = [(rank _player),0];
	        profileNamespace setVariable [format["HG_XP_%1",_uid],_xp];
		    saveProfileNamespace;
	    } else {
	        _player setUnitRank (_xp select 0);
	    };
	
	    _player setVariable ["HG_XP",_xp,true];
    };
	
    if((getNumber(missionConfigFile >> "CfgClient" >> "enableSave")) isEqualTo 1) then
    {
        _cash = profileNamespace getVariable format["HG_Cash_%1",_uid];
        if((isNil "_cash") OR ((getNumber(missionConfigFile >> "CfgClient" >> "resetSavedMoney")) isEqualTo 1)) then
	    {
		    _cash = getNumber(missionConfigFile >> "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startCash");
	        profileNamespace setVariable [format["HG_Cash_%1",_uid],_cash];
		    saveProfileNamespace;
	    };
    } else {
        _cash = getNumber(missionConfigFile >> "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startCash");
    };

    _player setVariable ["HG_Cash",_cash,true];

    if((getNumber(missionConfigFile >> "CfgClient" >> "enableKillCount")) isEqualTo 1) then
    {
        private _kc = profileNamespace getVariable format["HG_Kills_%1",_uid];
        if(isNil "_kc") then
	    {
		    _kc = 0;
	        profileNamespace setVariable [format["HG_Kills_%1",_uid],_kc];
		    saveProfileNamespace;
	    };
	
	    _kc = profileNamespace getVariable format["HG_Kills_%1",_uid];
	    _player setVariable ["HG_Kills",_kc,true];
    };

    if((getNumber(missionConfigFile >> "CfgClient" >> "enablePlayerInventorySave")) isEqualTo 1) then
    {
        private _gear = profileNamespace getVariable format["HG_Gear_%1",_uid];
        if(isNil "_gear") then
	    {
	        [_player] call HG_fnc_getGear;
	    } else {
	        _gear remoteExecCall ["HG_fnc_parseGear",(owner _player),false];
	    };
    };
} else {
    private["_query","_exists","_result"];

    _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{
	    format["SELECT CASE WHEN EXISTS (SELECT PID FROM HG_Players WHERE PID = '%1') THEN 'true' ELSE 'false' END",_uid];
	} else {
	    format["HG_playerExist:%1",_uid];
	};
	
	// Send query here _exists = 
	
	if(_exists) then
	{
	    _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
		{
		    format["SELECT Money, XP, Kills, Gear FROM HG_Players WHERE PID = '%1'",_uid];
		} else {
		    format["HG_playerSelect:%1",_uid];
		};
		
		// Send query here _result = 
	} else {
		
	    _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
		{
		    format["INSERT INTO HG_Players (PID, XP, Gear) VALUES(?,?,?)",_uid,[(rank player),0],[]];
		} else {
		    format["HG_playerInsert:%1:%2:%3",_uid,[(rank player),0],[]];
		};
		
		// Send query here
		_result = [getNumber(missionConfigFile >> "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startCash"),[(rank player),0],0,[]];
	};
	
	if((getNumber(missionConfigFile >> "CfgClient" >> "enableSave")) isEqualTo 1) then
    {
	    _cash = _result select 0;
	    if((getNumber(missionConfigFile >> "CfgClient" >> "resetSavedMoney")) isEqualTo 1) then
	    {
		    _cash = getNumber(missionConfigFile >> "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startCash");
		};
	} else {
	    _cash = getNumber(missionConfigFile >> "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startCash");
	};
	
	_player setVariable ["HG_Cash",_cash,true];
	
	if((getNumber(missionConfigFile >> "CfgClient" >> "enableXP")) isEqualTo 1) then
    {
	    private _xp = _result select 1;
	    _player setVariable ["HG_XP",_xp,true];
		_player setUnitRank (_xp select 0);
	};
	
    if((getNumber(missionConfigFile >> "CfgClient" >> "enableKillCount")) isEqualTo 1) then
    {
	    private _kc = _result select 2;
	    _player setVariable ["HG_Kills",_kc,true];
	};
	
    if((getNumber(missionConfigFile >> "CfgClient" >> "enablePlayerInventorySave")) isEqualTo 1) then
    {
	    private _gear = _result select 3;
	    if((count _gear) isEqualTo 0) then
		{
	        [_player] call HG_fnc_getGear;
	    } else {
	        _gear remoteExecCall ["HG_fnc_parseGear",(owner _player),false];
	    };
	};
};

/*
    Init HUD (if applicable)
*/
if((getNumber(missionConfigFile >> "CfgClient" >> "enableHUD")) isEqualTo 1) then
{
    [0] remoteExecCall ["HG_fnc_HUD",(owner _player),false];
};
