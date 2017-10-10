/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_value","_mode","_uid","_val"];

_mode = _value select 0;
_uid = _value select 1;
_val = _value select 2;

if(!HG_SAVING_EXTDB) then
{
    private _var = 
	[
	    [format["HG_Cash_%1",_uid],_val],
		[format["HG_Kills_%1",_uid],_val],
		[format["HG_XP_%1",_uid],_val],
		[format["HG_Bank_%1",_uid],_val]
	] select _mode;
    
	profileNamespace setVariable _var;
	saveProfileNamespace;
} else {
    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{ 
		[
		    format["UPDATE HG_Players SET Money = '%1' WHERE PID = '%2'",_val,_uid],
			format["UPDATE HG_Players SET Kills = '%1' WHERE PID = '%2'",_val,_uid],
			format["UPDATE HG_Players SET XP = '%1' WHERE PID = '%2'",_val,_uid],
			format["UPDATE HG_Players SET Bank = '%1' WHERE PID = '%2'",_val,_uid]
		] select _mode;
	} else {
	    [
		    format["HG_updateMoney:%1:%2",_val,_uid],
			format["HG_updateKills:%1:%2",_val,_uid],
			format["HG_updateXP:%1:%2",_val,_uid],
			format["HG_updateBank:%1:%2",_val,_uid]
		] select _mode;
	};
	
	[1,_query] call HG_fnc_asyncCall;
};	

true;
	