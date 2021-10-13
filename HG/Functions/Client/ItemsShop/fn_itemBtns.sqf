#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_mode","_price","_qty"];

disableSerialization;

_price = HG_ITEMS_ITEM_LIST lbValue (lbCurSel HG_ITEMS_ITEM_LIST);
_qty = parseNumber(ctrlText HG_ITEMS_AMOUNT);

switch(_mode) do
{
    // Add
    case 0: 
	{
	    _qty = _qty + 1;
		
		HG_ITEMS_AMOUNT ctrlSetText str _qty;
		HG_ITEMS_TOTAL ctrlSetText format[(localize "STR_HG_DLG_IS_TOTAL"),([(_price * _qty),true] call HG_fnc_currencyToText)];
	};
	// Sub
	case 1:
	{
	    _qty = _qty - 1;
		if(_qty <= 0) then {_qty = 1;};
		
		HG_ITEMS_AMOUNT ctrlSetText str _qty;
		HG_ITEMS_TOTAL ctrlSetText format[(localize "STR_HG_DLG_IS_TOTAL"),([(_price * _qty),true] call HG_fnc_currencyToText)];
	};
	// Buy
	case 2:
	{
	    _price = _price * _qty;
	    private _discount = ((getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "iShopDiscount")) != 0) AND (_price != 0);
		
		if(_discount) then
		{ 
		    _price = round(_price - (_price * ((getNumber(getMissionConfig "CfgClient" >> "HG_MasterCfg" >> (rank player) >> "iShopDiscount")) / 100)));
	    };
		
		if([_price] call HG_fnc_hasEnoughMoney) then
		{
		    private _selectedItem = HG_ITEMS_ITEM_LIST lbData (lbCurSel HG_ITEMS_ITEM_LIST);
			
		    if([_selectedItem,true,_qty] call HG_fnc_handleItems) then
			{
			    private["_config","_displayName"];
				_config = [_selectedItem] call HG_fnc_getConfig;
				_displayName = getText(configFile >> _config >> _selectedItem >> "displayName");
				if(_price > 0) then
				{
				    [_price,1] call HG_fnc_addOrSubCash;
				};
				hint format[(localize "STR_HG_ITEM_BOUGHT"),_qty,_displayName,if(_price <= 0) then {(localize "STR_HG_DLG_FREE")} else {([_price,true] call HG_fnc_currencyToText)}];
			    HG_ITEMS_BOUGHT = true;
			} else {
			    hint (localize "STR_HG_INVENTORY_FULL");
			};
		} else {
		    hint format[(localize "STR_HG_NOT_ENOUGH_MONEY"),([_price,true] call HG_fnc_currencyToText)];
		};
	};
};

true;
