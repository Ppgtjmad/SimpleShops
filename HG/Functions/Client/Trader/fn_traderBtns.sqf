#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_mode"];

switch(_mode) do
{
    // Sub
    case 0:
	{
	    private _qty = parseNumber(ctrlText HG_TRADER_QTY);
		_qty = _qty - 1;
		if(_qty <= 0) then {_qty = 1;};
		
		HG_TOTAL_HANDLER = _qty * HG_PRICE_HANDLER;
		
		HG_TRADER_QTY ctrlSetText str _qty;
		HG_TRADER_TOTAL ctrlSetText format[(localize "STR_HG_DLG_TR_TOTAL"),([HG_TOTAL_HANDLER,true] call HG_fnc_currencyToText)];
	};
	// Add
	case 1:
	{
	    private["_qty","_max"];
	
	    _qty = parseNumber(ctrlText HG_TRADER_QTY);
		_max = HG_TRADER_TREE tvValue (tvCurSel HG_TRADER_TREE);
		_qty = _qty + 1;
		if(_qty > _max) then {_qty = _max;};
		
		HG_TOTAL_HANDLER = _qty * HG_PRICE_HANDLER;
		
		HG_TRADER_QTY ctrlSetText str _qty;
		HG_TRADER_TOTAL ctrlSetText format[(localize "STR_HG_DLG_TR_TOTAL"),([HG_TOTAL_HANDLER,true] call HG_fnc_currencyToText)];
	};
	// Sell
	case 2:
	{
		//if(HG_TOTAL_HANDLER isEqualTo 0) exitWith {hint (localize "STR_HG_DLG_TR_NOT_INTERESTED_BIS");};
	
	    private["_path","_item","_qty"];
		
		_path = tvCurSel HG_TRADER_TREE;
	    _item = HG_TRADER_TREE tvData _path;
		_qty = parseNumber(ctrlText HG_TRADER_QTY);
		_cfg = [_item] call HG_fnc_getConfig;
		
		if((count _path) isEqualTo 3) then
		{
		    if((HG_TRADER_TREE tvCount _path) isEqualTo 0) then
		    {
			    _path deleteAt 2;
		        private _parentItem = HG_TRADER_TREE tvData _path;
				
		        switch(_parentItem) do
			    {
			        case(primaryWeapon player): 
					{
					    player removePrimaryWeaponItem _item;
					};
				    case(secondaryWeapon player): 
					{
					    player removeSecondaryWeaponItem _item;
					};
				    case(handgunWeapon player): 
					{
					    player removeHandgunItem _item;
					};
					default 
					{
					    [_parentItem,_item,_qty] call HG_fnc_gearItem;
					};
			    };
			};
		} else {
		    [_item,_qty] call HG_fnc_gearHandler;
		};
		
		[HG_TOTAL_HANDLER,0] call HG_fnc_addOrSubCash;
		hint format[(localize "STR_HG_DLG_TR_SOLD"),_qty,(getText(configFile >> _cfg >> _item >> "displayName")),[HG_TOTAL_HANDLER,true] call HG_fnc_currencyToText];
		
		HG_GEAR_SOLD = true;
		HG_SELECTION_HANDLER = _path;
		[] call HG_fnc_refreshTrader;
	};
};

true;
