/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_unit","_corpse"];

if(HG_PAYCHECK_ENABLED) then
{
	if(scriptDone HG_PAYCHECK_THREAD) then 
	{
	    HG_PAYCHECK_THREAD = [] spawn HG_fnc_paycheck;
	};
};

if(HG_TAGS_ENABLED) then
{
    ("HG_Tags" call BIS_fnc_rscLayer) cutRsc ["HG_Tags","PLAIN",-1,false];
    HG_DRAW_3D_MEVH = addMissionEventHandler ["Draw3D",{[] call HG_fnc_playerTags}];
};

if(HG_MARKERS_ENABLED) then
{
    HG_MAP_MEVH = addMissionEventHandler ["Map",{if(((_this select 0) OR (_this select 1)) AND ("ItemMap" in (assignedItems player))) then {[] spawn HG_fnc_markers};}];
};
