/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_side","_index","_uid","_whitelist","_mode","_query"];
	
_whitelist = HG_WHITELIST select _index;

if(_uid in _whitelist) then
{
    _whitelist deleteAt (_whitelist find _uid);
} else {
    _whitelist pushBack _uid;
};

HG_WHITELIST set [_index,_whitelist];

_mode = switch(_side) do
{
    case "civilian": {0};
	case "west": {1};
	case "resistance": {2};
	case "east": {3};
};

_query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
{
    [
	    format["UPDATE HG_Whitelist SET Civilian = '%1'",_whitelist],
		format["UPDATE HG_Whitelist SET West = '%1'",_whitelist],
		format["UPDATE HG_Whitelist SET Resistance = '%1'",_whitelist],
		format["UPDATE HG_Whitelist SET East = '%1'",_whitelist]
	] select _mode;
} else {
    
	[
	    format["HG_whitelistUpdateCiv:%1",_whitelist],
	    format["HG_whitelistUpdateWest:%1",_whitelist],
	    format["HG_whitelistUpdateGuer:%1",_whitelist],
	    format["HG_whitelistUpdateEast:%1",_whitelist]
	] select _mode;
};
	
[1,_query] call HG_fnc_asyncCall;

if(hasInterface) then
{
    if(remoteExecutedOwner isEqualTo (owner player)) then
	{
	    [] call HG_fnc_refreshWhitelist;
	} else {
	    remoteExecutedOwner publicVariableClient "HG_WHITELIST";
	};
} else {
    {
        (owner _x) publicVariableClient "HG_WHITELIST";
    } forEach HG_ADMINS;
};

true;
