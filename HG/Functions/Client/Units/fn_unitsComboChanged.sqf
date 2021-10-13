#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_ctrl","_index","_class","_price","_arr","_cfg","_path"];

disableSerialization;

tvClear HG_UNITS_TREE;

HG_UNITS_ITEM_PIC ctrlSetText "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Prop.jpg";
HG_UNITS_ITEM_TEXT ctrlSetStructuredText parseText format["<t align='center' size='1'>%1</t>",(localize "STR_HG_NOTHING_TO_DISPLAY")];

_class = _ctrl lbData _index;
_price = getNumber(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "cost");
_arr = 
[
    getText(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "uniformClass"),
	getText(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "backpack"),
	getArray(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "linkedItems"),
	getArray(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "weapons"),
	[getArray(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "items")] call HG_fnc_arrayCount,
	[getArray(getMissionConfig "CfgClient" >> "HG_UnitsShopCfg" >> HG_STRING_HANDLER >> _class >> "Loadout" >> "magazines")] call HG_fnc_arrayCount
];

if(_price < 0) then
{
    HG_UNITS_PRICE ctrlSetText (localize "STR_HG_DLG_FREE");
} else {
    HG_UNITS_PRICE ctrlSetText ([_price,true] call HG_fnc_currencyToText);
};

if([_price,0] call HG_fnc_hasEnoughMoney) then
{
    HG_UNITS_BUY_BTN ctrlEnable true;
	HG_UNITS_PRICE ctrlSetBackgroundColor [0,1,0,1];
} else {
    HG_UNITS_BUY_BTN ctrlEnable false;
	HG_UNITS_PRICE ctrlSetBackgroundColor [1,0,0,1];
};

{
    if(_forEachIndex in [0,1]) then
	{
	    if(_x != "") then
		{
		    _cfg = [_x] call HG_fnc_getConfig;
			_path = HG_UNITS_TREE tvAdd [[],(getText(configFile >> _cfg >> _x >> "displayName"))];
			HG_UNITS_TREE tvSetData[[_path],_x];
		};
	};
	if(_forEachIndex in [2,3]) then
	{
	    if((count _x) != 0) then 
		{
	        {
		        _cfg = [_x] call HG_fnc_getConfig;
			    _path = HG_UNITS_TREE tvAdd [[],(getText(configFile >> _cfg >> _x >> "displayName"))];
				HG_UNITS_TREE tvSetData[[_path],_x];
		    } forEach _x;
		};
	};
	if(_forEachIndex in [4,5]) then
	{
	    {
		    _cfg = [(_x select 0)] call HG_fnc_getConfig;
			_path = HG_UNITS_TREE tvAdd [[],format["%1 x %2",(_x select 1),(getText(configFile >> _cfg >> (_x select 0) >> "displayName"))]];
			HG_UNITS_TREE tvSetData[[_path],(_x select 0)];
		} forEach _x;
	};
} forEach _arr;

true;
