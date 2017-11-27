#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_ctrl","_path","_sel","_val","_find"];

HG_TRADER_QTY ctrlSetText "1";

_sel = _ctrl tvData _path;
_val = _ctrl tvValue _path;
_find = HG_TRADER_HANDLER find _sel;

if(_find != -1) then
{
    private _price = HG_TRADER_LIST lbValue _find;
	HG_PRICE_HANDLER = _price;
	HG_TOTAL_HANDLER = _price;
	HG_TRADER_PRICE ctrlSetText format[(localize "STR_HG_DLG_TR_PRICE"),[_price,true] call HG_fnc_currencyToText];
	HG_TRADER_TOTAL ctrlSetText format[(localize "STR_HG_DLG_TR_TOTAL"),[HG_TOTAL_HANDLER,true] call HG_fnc_currencyToText];
} else {
	HG_PRICE_HANDLER = 0;
	HG_TOTAL_HANDLER = 0;
	HG_TRADER_PRICE ctrlSetText (localize "STR_HG_DLG_TR_NOT_INTERESTED");
	HG_TRADER_TOTAL ctrlSetText ([0,true] call HG_fnc_currencyToText);
};

if(_val isEqualTo 0) then
{
    {
		_x ctrlEnable false;
	} forEach [HG_TRADER_SUB_BTN,HG_TRADER_ADD_BTN];
	
    HG_TRADER_SELL_BTN ctrlEnable false;
} else {
	if(_val isEqualTo 1) then
	{
	    {
		    _x ctrlEnable false;
		} forEach [HG_TRADER_SUB_BTN,HG_TRADER_ADD_BTN];
	} else {
	    {
		    _x ctrlEnable true;
		} forEach [HG_TRADER_SUB_BTN,HG_TRADER_ADD_BTN];
	};
	
	HG_TRADER_SELL_BTN ctrlEnable true;
};

true;
