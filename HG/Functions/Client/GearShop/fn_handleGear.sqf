#include "HG_Macros.h"
/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_sel","_val","_cat"];

_cat = HG_GEAR_SWITCH lbData (lbCurSel HG_GEAR_SWITCH);

switch(_cat) do
{
	case "Uniform": 
	{
	    removeUniform player;
		if(_sel != "") then {player forceAddUniform _sel;};
		HG_GEAR_PREVIEW set[0,[_sel,_val]];
	};
	case "Vest": 
	{
	    removeVest player;
		if(_sel != "") then {player addVest _sel;};
		HG_GEAR_PREVIEW set[1,[_sel,_val]];
    };
	case "Backpack": 
	{
	    removeBackpack player;
		if(_sel != "") then {player addBackpack _sel;};
		HG_GEAR_PREVIEW set[2,[_sel,_val]];
	};
    case "Glasses": 
	{
	    removeGoggles player;
		if(_sel != "") then {player addGoggles _sel;};
		HG_GEAR_PREVIEW set[3,[_sel,_val]];
	};
	case "Headgear": 
	{
	    removeHeadgear player;
		if(_sel != "") then {player addHeadgear _sel;};
		HG_GEAR_PREVIEW set[4,[_sel,_val]];
	};
	case "MissileLauncher":
	{
	    player removeWeapon (secondaryWeapon player);
		if(_sel != "") then {player addWeapon _sel;};
		HG_GEAR_PREVIEW set[6,[_sel,_val]];
	};
	case "RocketLauncher":
	{
		player removeWeapon (secondaryWeapon player);
		if(_sel != "") then {player addWeapon _sel;};
		HG_GEAR_PREVIEW set[6,[_sel,_val]];
	};
	case "Handgun":
	{
	    player removeWeapon (handgunWeapon player);
		if(_sel != "") then {player addWeapon _sel;};
		HG_GEAR_PREVIEW set[7,[_sel,_val]];
	};
	default
	{
		player removeWeapon (primaryWeapon player);
		if(_sel != "") then {player addWeapon _sel;};
		HG_GEAR_PREVIEW set[5,[_sel,_val]];
	};
};

true;
