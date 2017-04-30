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

if(HG_GIVE_MONEY_ENABLED) then
{
	player addAction ["<img image='HG\UI\Icons\money.paa' size='1.5'/><t color='#FF0000'>Give Money</t>",{HG_CURSOR_OBJECT = cursorObject; createDialog "HG_GiveMoney"},"",0,false,false,"",'(alive player) AND (cursorObject isKindOf "Man") AND (isPlayer cursorObject) AND (alive cursorObject) AND (player distance cursorObject < 2) AND !dialog'];
};

if(HG_TAGS_ENABLED) then
{
    ("HG_Tags" call BIS_fnc_rscLayer) cutRsc ["HG_Tags","PLAIN"];
    HG_DRAW_3D_MEVH = addMissionEventHandler ["Draw3D",{[] call HG_fnc_playerTags}];
};

if(HG_MARKERS_ENABLED) then
{
    HG_MAP_MEVH = addMissionEventHandler ["Map",{if(((_this select 0) OR (_this select 1)) AND ("ItemMap" in (assignedItems player))) then {[] spawn HG_fnc_markers};}];
};
