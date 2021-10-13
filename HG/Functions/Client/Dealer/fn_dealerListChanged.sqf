#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_ctrl","_index","_sel"];

disableSerialization;

_sel = _ctrl lbData _index;

if(_sel != (localize "STR_HG_NONE")) then
{
    private _ind = HG_DEALER_HANDLER find _sel;
	
    HG_PRICE_HANDLER = HG_DEALER_D_LIST lbValue _ind;
    HG_DEALER_SELL_BTN ctrlEnable true;
} else {
    HG_PRICE_HANDLER = 0;
	HG_DEALER_SELL_BTN ctrlEnable false;
};

HG_DEALER_PRICE ctrlSetText format[(localize "STR_HG_DLG_DE_PRICE"),[HG_PRICE_HANDLER,true] call HG_fnc_currencyToText];

true;
