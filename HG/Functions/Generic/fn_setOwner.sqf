/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_vehicle",["_unit",player,[objNull]]];

_vehicle setVariable["HG_Owner",[(getPlayerUID _unit),round(random(100000))],true];
[_vehicle] call HG_fnc_addActions;

hint format[(localize "STR_HG_NOW_OWNER"),(getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName"))];

true;
