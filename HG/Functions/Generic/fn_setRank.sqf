/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_unit",["_rank","PRIVATE",[""]]];
if(_rank isEqualTo "") exitWith {};

_unit setRank _rank;

if(HG_XP_ENABLED) then
{
	profileNamespace setVariable["HG_XP",0];
	saveProfileNamespace;
};

true;
