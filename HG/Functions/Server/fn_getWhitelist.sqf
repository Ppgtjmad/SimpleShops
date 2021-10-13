/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
private["_whitelist","_sides"];

HG_WHITELIST = [];

private _query = if(HG_SAVING_PROTOCOL isEqualTo "SQL") then
{
	"SELECT Civilian, West, Resistance, East FROM HG_Whitelist";
} else {
	"HG_whitelistSelect";
};
	
_whitelist = [2,_query,false] call HG_fnc_asyncCall;

_sides = getArray(getMissionConfig "CfgClient" >> "whitelistSides");
   
{
    switch(toLower _x) do
	{
		case "civilian": {HG_WHITELIST pushBack (_whitelist select 0);};
		case "west": {HG_WHITELIST pushBack (_whitelist select 1);};
		case "resistance": {HG_WHITELIST pushBack (_whitelist select 2);};
		case "east": {HG_WHITELIST pushBack (_whitelist select 3);};
	};
} forEach _sides;

true;
