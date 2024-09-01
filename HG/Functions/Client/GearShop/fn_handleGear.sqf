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
		if(_sel != "") then 
		{
		    player forceAddUniform _sel;
			clearItemCargo uniformContainer player;
			clearWeaponCargo uniformContainer player;
			clearMagazineCargo uniformContainer player;
			clearItemCargo uniformContainer player;
		};
		HG_GEAR_PREVIEW set[0,[_sel,_val,true]];
	};
	case "Vest": 
	{
	    removeVest player;
		if(_sel != "") then
		{
		    player addVest vestContainer player;
			clearItemCargo vestContainer player;
			clearWeaponCargo vestContainer player;
			clearMagazineCargo vestContainer player;
			clearItemCargo vestContainer player;
		};
		HG_GEAR_PREVIEW set[1,[_sel,_val,true]];
    };
	case "Backpack": 
	{
	    removeBackpack player;
		if(_sel != "") then 
		{
		    player addBackpack _sel;
			clearItemCargo backpackContainer player;
			clearWeaponCargo backpackContainer player;
			clearMagazineCargo backpackContainer player;
			clearItemCargo backpackContainer player;
		};
		HG_GEAR_PREVIEW set[2,[_sel,_val,true]];
	};
    case "Glasses": 
	{
	    removeGoggles player;
		if(_sel != "") then {player addGoggles _sel;};
		HG_GEAR_PREVIEW set[3,[_sel,_val,true]];
	};
	case "Headgear": 
	{
	    removeHeadgear player;
		if(_sel != "") then {player addHeadgear _sel;};
		HG_GEAR_PREVIEW set[4,[_sel,_val,true]];
	};
	case "MissileLauncher":
	{
	    player removeWeapon (secondaryWeapon player);
		if(_sel != "") then {player addWeapon _sel;};
		HG_GEAR_PREVIEW set[6,[_sel,_val,true]];
	};
	case "RocketLauncher":
	{
		player removeWeapon (secondaryWeapon player);
		if(_sel != "") then {player addWeapon _sel;};
		HG_GEAR_PREVIEW set[6,[_sel,_val,true]];
	};
	case "Handgun":
	{
	    player removeWeapon (handgunWeapon player);
		if(_sel != "") then {player addWeapon _sel;};
		HG_GEAR_PREVIEW set[7,[_sel,_val,true]];
	};
	default
	{
		player removeWeapon (primaryWeapon player);
		if(_sel != "") then {player addWeapon _sel;};
		HG_GEAR_PREVIEW set[5,[_sel,_val,true]];
	};
};

true;
