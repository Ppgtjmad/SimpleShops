#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when selection in listbox has changed
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_ctrl","_index","_sel",["_price",0],["_count",0]];
	
disableSerialization;
	
_sel = _ctrl lbData _index;

if(_sel in ["Glasses","Headgear","Vest","Uniform","Backpack"]) then
{
    switch(_sel) do
    {
        case "Glasses": 
	    {
		    removeGoggles player;
	        HG_GEAR_PREVIEW set[0,[]];
	    };
	    case "Headgear": 
	    {
		    removeHeadgear player;
	        HG_GEAR_PREVIEW set[1,[]];
	    };
	    case "Vest": 
	    {
		    removeVest player;
	        HG_GEAR_PREVIEW set[2,[]];
	    };
	    case "Uniform": 
	    {
		    removeUniform player;
	        HG_GEAR_PREVIEW set[3,[]];
	    };
	    case "Backpack": 
	    {
		    removeBackpack player;
	        HG_GEAR_PREVIEW set[4,[]];
	    };
    };

    HG_CLOTHING_BUY ctrlEnable false;
} else {
    private["_cat","_val"];
    _cat = HG_CLOTHING_SWITCH lbData (lbCurSel HG_CLOTHING_SWITCH);
	_val = _ctrl lbValue _index;

	switch(_cat) do
    {
        case "Glasses": 
	    {
	        removeGoggles player;
		    player addGoggles _sel;
		    HG_GEAR_PREVIEW set[0,[_sel,_val]];
	    };
	    case "Headgear": 
	    {
	        removeHeadgear player;
		    player addHeadgear _sel;
		    HG_GEAR_PREVIEW set[1,[_sel,_val]];
	    };
	    case "Vest": 
	    {
	        removeVest player;
		    player addVest _sel;
		    HG_GEAR_PREVIEW set[2,[_sel,_val]];
        };
        case "Uniform": 
	    {
	        removeUniform player;
		    player forceAddUniform _sel;
		    HG_GEAR_PREVIEW set[3,[_sel,_val]];
	    };
	    case "Backpack": 
	    {
	        removeBackpack player;
		    player addBackpack _sel;
		    HG_GEAR_PREVIEW set[4,[_sel,_val]];
	    };
	};
	
    HG_CLOTHING_BUY ctrlEnable true;
};

{
    if((count _x) != 0) then
    {
        _price = _price + (_x select 1);
    } else {
	    _count = _count + 1;
	};
} forEach HG_GEAR_PREVIEW;

if(((count HG_GEAR_PREVIEW) isEqualTo _count) OR (!([_price] call HG_fnc_hasEnoughMoney))) then 
{
    HG_CLOTHING_BUY ctrlEnable false;
} else {
    HG_CLOTHING_BUY ctrlEnable true;
};

HG_CLOTHING_TOTAL ctrlSetText format[(localize "STR_HG_DLG_CS_TOTAL_TEXT"),([_price,true] call HG_fnc_currencyToText)];

true;
