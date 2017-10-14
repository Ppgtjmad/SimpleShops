/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_player","_jip","_uid","_result","_cash","_bank"];
_uid = getPlayerUID _player;

if(HG_SAVING_EXTDB) then
{
    _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{
	    format["SELECT CASE WHEN EXISTS (SELECT PID FROM HG_Players WHERE PID = '%1') THEN 'true' ELSE 'false' END",_uid];
	} else {
	    format["HG_playerExist:%1",_uid];
	};
	
	_exists = [2,_query,false] call HG_fnc_asyncCall;
	_exists = _exists select 0;
	
	if(_exists) then
	{
	    _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
		{
		    format["SELECT Money, Bank, XP, Kills, Gear FROM HG_Players WHERE PID = '%1'",_uid];
		} else {
		    format["HG_playerSelect:%1",_uid];
		};
		
		_result = [2,_query,false] call HG_fnc_asyncCall;
	} else {
	    _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
		{
		    format["INSERT INTO HG_Players (PID, XP, Gear, Money, Bank) VALUES('%1','%2','%3','%4','%5')",_uid,[(rank _player),0],[],(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startCash")),(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startBank"))];
		} else {
		    format["HG_playerInsert:%1:%2:%3:%4:%5",_uid,[(rank _player),0],[],(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startCash")),(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startBank"))];
		};
		
		[1,_query] call HG_fnc_asyncCall;
		
		_result = 
		[
		    getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startCash"),
			getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startBank"),
		    [(rank _player),0],
			0,
			[]
		];
	};
};

if((getNumber(getMissionConfig "CfgClient" >> "enableSave")) isEqualTo 1) then
{
	if(HG_SAVING_EXTDB) then
	{
		_cash = _result select 0;
		_bank = _result select 1;
	} else {
		_cash = profileNamespace getVariable format["HG_Cash_%1",_uid];
		_bank = profileNamespace getVariable format["HG_Bank_%1",_uid];
	};
	
    if((isNil "_cash") OR (isNil "_bank") OR ((getNumber(getMissionConfig "CfgClient" >> "resetSavedMoney")) isEqualTo 1)) then
	{
		_cash = getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startCash");
		_bank = getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startBank");
		
		if(!HG_SAVING_EXTDB) then
		{
	        profileNamespace setVariable [format["HG_Cash_%1",_uid],_cash];
			profileNamespace setVariable [format["HG_Bank_%1",_uid],_bank];
		    saveProfileNamespace;
		};
	};
} else {
    _cash = getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startCash");
	_bank = getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank _player) >> "startBank");
};

_player setVariable ["HG_Cash",_cash,true];
_player setVariable ["HG_Bank",_bank,true];

if((getNumber(getMissionConfig "CfgClient" >> "enableXP")) isEqualTo 1) then
{
    private "_xp";
	
    if(HG_SAVING_EXTDB) then
	{
	    _xp = _result select 2;
	} else {
	    _xp = profileNamespace getVariable format["HG_XP_%1",_uid];
	};
	
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

if((getNumber(getMissionConfig "CfgClient" >> "enableKillCount")) isEqualTo 1) then
{
    private "_kc";
	
    if(HG_SAVING_EXTDB) then
	{
	    _kc = _result select 3;
	} else {
	    _kc = profileNamespace getVariable format["HG_Kills_%1",_uid];
	};
	
    if(isNil "_kc") then
	{
		_kc = 0;
	    profileNamespace setVariable [format["HG_Kills_%1",_uid],_kc];
		saveProfileNamespace;
	};
	
	_player setVariable ["HG_Kills",_kc,true];
};

if((getNumber(getMissionConfig "CfgClient" >> "enablePlayerInventorySave")) isEqualTo 1) then
{
    private "_gear";
	
    if(HG_SAVING_EXTDB) then
	{
	    _gear = _result select 4;
	} else {
	    _gear = profileNamespace getVariable [format["HG_Gear_%1",_uid],[]];
	};

    if((count _gear) != 0) then
	{
		[_gear] remoteExecCall ["HG_fnc_parseGear",(owner _player),false];
	};
};

if(!HG_SAVING_EXTDB) then
{
    if(isNil {profileNamespace getVariable [format["HG_Garage_%1",_uid],[]]}) then
    {
        profileNamespace setVariable[format["HG_Garage_%1",_uid],[]];
	    saveProfileNamespace;
    };
};

/*
    Init HUD (if applicable)
*/
if((getNumber(getMissionConfig "CfgClient" >> "enableHUD")) isEqualTo 1) then
{
    [0] remoteExecCall ["HG_fnc_HUD",(owner _player),false];
};
