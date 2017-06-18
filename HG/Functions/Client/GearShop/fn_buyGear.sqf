#include "HG_Macros.h"
/*
    Author - HoverGuy
    Description - Called when you click "Buy" button in dialog
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params[["_price",0]];

{
    if((count _x) != 0) then
    {
        _price = _price + (_x select 1);
	};
} forEach HG_GEAR_PREVIEW;

if(_price > 0) then
{
    [_price,1] call HG_fnc_addOrSubCash;
};

if(HG_CRATE_ENABLED) then
{
    [] call HG_fnc_fillBox;
};

HG_GEAR_BOUGHT = true;
HG_GEAR_SAVED = 
[
    [(uniform player),(uniformItems player)],
    [(vest player),(vestItems player)],
    [(backpack player),(backpackItems player)],
    (goggles player),
    (headgear player),
    [(primaryWeapon player),(primaryWeaponMagazine player),(primaryWeaponItems player)],
    [(secondaryWeapon player),(secondaryWeaponMagazine player),(secondaryWeaponItems player)],
    [(handgunWeapon player),(handgunMagazine player),(handgunItems player)]
];
HG_GEAR_PREVIEW = [[],[],[],[],[],[],[],[]];

closeDialog 0;

titleText [format[(localize "STR_HG_GEAR_BOUGHT"),if(_price <= 0) then {(localize "STR_HG_DLG_FREE")} else {([_price,true] call HG_fnc_currencyToText)}],"PLAIN DOWN",1];

true;
