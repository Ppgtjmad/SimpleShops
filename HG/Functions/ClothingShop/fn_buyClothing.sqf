#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when you click "Buy" button in dialog
    © All Fucks Reserved
*/
params[["_price",0]];

{
    if((count _x) != 0) then
    {
        _price = _price + (_x select 1);
	};
} forEach HG_GEAR_PREVIEW;

[_price,1] call HG_fnc_addOrSubCash;

if((getNumber(missionConfigFile >> "CfgClient" >> "enableCrate")) isEqualTo 1) then
{
    [] call HG_fnc_fillBox;
};

HG_CLOTHING_BOUGHT = true;
HG_GEAR_SAVED = [(goggles player),(headgear player),(vest player),(vestItems player),(uniform player),(uniformItems player),(backpack player),(backpackItems player)];
HG_GEAR_PREVIEW = [[],[],[],[],[]];

closeDialog 0;

titleText [format[(localize "STR_HG_CLOTHING_BOUGHT"),([_price,true] call HG_fnc_currencyToText)],"PLAIN DOWN",1];

true;
