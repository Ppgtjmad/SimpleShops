#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_ctrl","_index",["_price",0],["_count",0],"_discount"];
	
disableSerialization;

[(_ctrl lbData _index)] call HG_fnc_handleGear;

{
    if((count _x) != 0) then
    {
        _price = _price + (_x select 1);
    } else {
	    _count = _count + 1;
	};
} forEach HG_GEAR_PREVIEW;

_discount = ((getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "gShopDiscount")) != 0) AND (_price != 0);

if(_discount) then
{
    _price = round(_price - (_price * ((getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "gShopDiscount")) / 100)));
};

if(((count HG_GEAR_PREVIEW) isEqualTo _count) OR (!([_price] call HG_fnc_hasEnoughMoney))) then 
{
    HG_GEAR_BUY ctrlEnable false;
} else {
    HG_GEAR_BUY ctrlEnable true;
};

HG_GEAR_TOTAL ctrlSetText format[(localize "STR_HG_DLG_GS_TOTAL_TEXT"),([_price,true] call HG_fnc_currencyToText)];

true;
