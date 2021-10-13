#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_sel","_cat"];

_cat = HG_GEAR_SWITCH lbData (lbCurSel HG_GEAR_SWITCH);

if(_sel isEqualTo (localize "STR_HG_NONE")) then
{
	switch(_cat) do
    {
	    case "Uniform": 
	    {
		    removeUniform player;
	        HG_GEAR_PREVIEW set[0,[]];
	    };
		case "Vest": 
	    {
		    removeVest player;
	        HG_GEAR_PREVIEW set[1,[]];
	    };
	    case "Backpack": 
	    {
		    removeBackpack player;
	        HG_GEAR_PREVIEW set[2,[]];
	    };
        case "Glasses": 
	    {
		    removeGoggles player;
	        HG_GEAR_PREVIEW set[3,[]];
	    };
	    case "Headgear": 
	    {
		    removeHeadgear player;
	        HG_GEAR_PREVIEW set[4,[]];
	    };
		case "MissileLauncher":
	    {
	        player removeWeapon (secondaryWeapon player);
			HG_GEAR_PREVIEW set[6,[]];
	    };
		case "RocketLauncher":
		{
		    player removeWeapon (secondaryWeapon player);
			HG_GEAR_PREVIEW set[6,[]];
		};
	    case "Handgun":
	    {
	        player removeWeapon (handgunWeapon player);
			HG_GEAR_PREVIEW set[7,[]];
	    };
		default
		{
		    player removeWeapon (primaryWeapon player);
			HG_GEAR_PREVIEW set[5,[]];
		};
    };
	
	HG_GEAR_BUY ctrlEnable false;
} else {
    private "_val";
	_val = _ctrl lbValue _index;

	switch(_cat) do
    {
	    case "Uniform": 
	    {
	        removeUniform player;
		    player forceAddUniform _sel;
		    HG_GEAR_PREVIEW set[0,[_sel,_val]];
	    };
		case "Vest": 
	    {
	        removeVest player;
		    player addVest _sel;
		    HG_GEAR_PREVIEW set[1,[_sel,_val]];
        };
	    case "Backpack": 
	    {
	        removeBackpack player;
		    player addBackpack _sel;
		    HG_GEAR_PREVIEW set[2,[_sel,_val]];
	    };
        case "Glasses": 
	    {
	        removeGoggles player;
		    player addGoggles _sel;
		    HG_GEAR_PREVIEW set[3,[_sel,_val]];
	    };
	    case "Headgear": 
	    {
	        removeHeadgear player;
		    player addHeadgear _sel;
		    HG_GEAR_PREVIEW set[4,[_sel,_val]];
	    };
		case "MissileLauncher":
	    {
	        player removeWeapon (secondaryWeapon player);
			player addWeapon _sel;
			HG_GEAR_PREVIEW set[6,[_sel,_val]];
	    };
		case "RocketLauncher":
		{
		    player removeWeapon (secondaryWeapon player);
			player addWeapon _sel;
			HG_GEAR_PREVIEW set[6,[_sel,_val]];
		};
	    case "Handgun":
	    {
	        player removeWeapon (handgunWeapon player);
			player addWeapon _sel;
			HG_GEAR_PREVIEW set[7,[_sel,_val]];
	    };
		default
		{
		    player removeWeapon (primaryWeapon player);
			player addWeapon _sel;
			HG_GEAR_PREVIEW set[5,[_sel,_val]];
		};
	};
	
    HG_GEAR_BUY ctrlEnable true;
};

true;
