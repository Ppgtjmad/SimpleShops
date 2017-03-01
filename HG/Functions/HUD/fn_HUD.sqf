#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
*/
params["_mode"];

switch(_mode) do
{
    // HUD On
    case 0: 
	{
	    ("HG_HUD" call BIS_fnc_rscLayer) cutRsc ["HG_HUD","PLAIN"];
		[1] call HG_fnc_HUD;
	};
	// HUD Update
	case 1:
	{
	    private "_cash";
	    if((getNumber(missionConfigFile >> "CfgClient" >> "enableSave")) isEqualTo 1) then
		{
		    _cash = profileNamespace getVariable "HG_Save";
		} else {
		    _cash = player getVariable "HG_myCash";
		};
		
		HG_HUD_TEXT ctrlSetText format["%1",([_cash] call BIS_fnc_numberText)];
	};
	// HUD Off
	case 2:
	{
	    ("HG_HUD" call BIS_fnc_rscLayer) cutText ["","PLAIN"];
	};
};

true;
