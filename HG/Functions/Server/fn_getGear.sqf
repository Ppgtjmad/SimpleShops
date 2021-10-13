/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/

params["_unit",["_return",false,[true]],"_gear"];

_gear = getUnitLoadout _unit;

if(!HG_SAVING_EXTDB) then
{
    profileNamespace setVariable [format["HG_Gear_%1",(getPlayerUID _unit)],_gear];
    saveProfileNamespace;
} else {
    private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
	{
	    format["UPDATE HG_Players SET Gear = '%1' WHERE PID = '%2'",_gear,(getPlayerUID _unit)];
	} else {
	    format["HG_updateGear:%1:%2",_gear,(getPlayerUID _unit)];
	};
	
	[1,_query] call HG_fnc_asyncCall;
};

if(_return) then 
{
    _gear;
} else {
    true;
};
