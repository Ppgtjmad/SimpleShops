#include "HG_Macros.h"
/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params[["_price",0],"_discount"];

{
    if((_x select 1) != -1) then
    {
        _price = _price + (_x select 1);
	};
} forEach HG_GEAR_PREVIEW;

if(_price > 0) then
{
    [_price,1] call HG_fnc_addOrSubCash;
};

[] call HG_fnc_fillGear;

HG_GEAR_BOUGHT = true;

closeDialog 0;

titleText [format[(localize "STR_HG_GEAR_BOUGHT"),if(_price <= 0) then {(localize "STR_HG_DLG_FREE")} else {([_price,true] call HG_fnc_currencyToText)}],"PLAIN DOWN",1];

true;
