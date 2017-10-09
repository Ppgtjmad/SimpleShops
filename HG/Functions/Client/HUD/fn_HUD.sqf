#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_mode"];

disableSerialization;

switch(_mode) do
{
    // HUD On
    case 0: 
	{
	    ("HG_HUD" call BIS_fnc_rscLayer) cutRsc ["HG_HUD","PLAIN",-1,false];
		
		if((getNumber(getMissionConfig "CfgClient" >> "enableXP")) isEqualTo 1) then
		{
		    {
			    _x ctrlShow true;
			} forEach [HG_HUD_XP_BACK,HG_HUD_XP_PIC,HG_HUD_XP_TEXT];
			[2] call HG_fnc_HUD;
		};
		if((getNumber(getMissionConfig "CfgClient" >> "enableKillCount")) isEqualTo 1) then
		{
		    {
			    _x ctrlShow true;
			} forEach [HG_HUD_KILL_COUNT_BACK,HG_HUD_KILL_COUNT_PIC,HG_HUD_KILL_COUNT_TEXT];
			[4] call HG_fnc_HUD;
		};
		
		[1] call HG_fnc_HUD;
		[3] call HG_fnc_HUD;
	};
	// HUD Cash Update
	case 1:
	{
		HG_HUD_MONEY_TEXT ctrlSetText format["%1",([(player getVariable "HG_Cash")] call BIS_fnc_numberText)];
	};
	// HUD XP Update
	case 2:
	{
	    private "_text";
		
		if((rank player) != "COLONEL") then 
		{
		    _text = format["%1/%2",((player getVariable "HG_XP") select 1),(getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "xpToLvlUp"))];
		} else {
		    _text = (localize "STR_HG_XP_MAXED");
		};
		
		HG_HUD_XP_TEXT ctrlSetText _text;
	};
	// HUD Rank Update
	case 3:
	{
	    HG_HUD_RANK_PIC ctrlSetText ([(rank player),"texture"] call BIS_fnc_rankParams);
		HG_HUD_RANK_TEXT ctrlSetText ([(rank player),"displayName"] call BIS_fnc_rankParams);
	};
	// HUD Kill Count Update
	case 4:
	{
	    HG_HUD_KILL_COUNT_TEXT ctrlSetText format["%1",(player getVariable "HG_Kills")];
	};
	// HUD Off
	case 5:
	{
	    ("HG_HUD" call BIS_fnc_rscLayer) cutText ["","PLAIN"];
	};
};

true;
