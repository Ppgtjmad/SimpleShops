#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when you click "Buy" button in dialog
    © All Fucks Reserved
*/
params[["_price",0],["_count",0]];

disableSerialization;

{
    if(count _x != 0) then
    {
        _price = _price + (_x select 1);
    } else {
	    _count = _count + 1;
	};
} forEach HG_GEAR_PREVIEW;

if(count HG_GEAR_PREVIEW isEqualTo _count) exitWith {titleText [(localize "STR_HG_NOTHING_TO_BUY"),"PLAIN DOWN",1];};

if([_price] call HG_fnc_hasEnoughMoney) then
{
    [] call HG_fnc_fillBox;
	HG_CLOTHING_BOUGHT = true;
    [_price,1] call HG_fnc_addOrSubCash;
	titleText [format[(localize "STR_HG_CLOTHING_BOUGHT"),([_price,true] call HG_fnc_currencyToText)],"PLAIN DOWN",1];
	HG_GEAR_SAVED = [(goggles player),(headgear player),(vest player),(vestItems player),(uniform player),(uniformItems player),(backpack player),(backpackItems player)];
	HG_GEAR_PREVIEW = [[],[],[],[],[]];
} else {
    titleText [format[(localize "STR_HG_NOT_ENOUGH_MONEY"),([_price,true] call HG_fnc_currencyToText)],"PLAIN DOWN",1];
};

true;
