#include "HG_Macros.h"
/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_mode","_gear","_index","_gearSelection","_path","_config","_subPath","_weapon","_items","_mags","_stuff","_item","_qty"];

disableSerialization;

tvClear HG_TRADER_TREE;

_gear = getUnitLoadout player;

{
    _index = _x select 1;
	_gearSelection = _gear select _index;
	
	if((typeName _gearSelection) isEqualTo "ARRAY") then
	{
	    // Primary, Secondary, Handgun, Uniform + items, Vest + items, Backpack + items, Assigned items
		if((count _gearSelection) != 0) then
		{
			_path = HG_TRADER_TREE tvAdd [[],(_x select 0)];
			HG_TRADER_TREE tvSetData [[_path],(_x select 0)];
			HG_TRADER_TREE tvSetValue [[_path],0];
			
			// Primary, Secondary, Handgun
			if(_index in [0,1,2]) then
			{
				_weapon = _gearSelection select 0;
				_items = [(_gearSelection select 1),(_gearSelection select 2),(_gearSelection select 3),(_gearSelection select 6)];
				_mags = [(_gearSelection select 4),(_gearSelection select 5)];
				
				_config = [_weapon] call HG_fnc_getConfig;
				_subPath = HG_TRADER_TREE tvAdd [[_path],(getText(configFile >> _config >> _weapon >> "displayName"))];
				HG_TRADER_TREE tvSetData [[_path,_subPath],_weapon];
				HG_TRADER_TREE tvSetValue [[_path,_subPath],1];

				{
				    if((count _x) != 0) then
				    {
					    _config = [_x select 0] call HG_fnc_getConfig;
					    _subSubPath = HG_TRADER_TREE tvAdd [[_path,_subPath],(getText(configFile >> _config >> _x select 0 >> "displayName"))];
					    HG_TRADER_TREE tvSetData [[_path,_subPath,_subSubPath],_x select 0];
					    HG_TRADER_TREE tvSetValue [[_path,_subPath,_subSubPath],1];
				    };
				} forEach _mags;
				
				{
					if(_x != "") then
					{
						_config = [_x] call HG_fnc_getConfig;
						_subSubPath = HG_TRADER_TREE tvAdd [[_path,_subPath],(getText(configFile >> _config >> _x >> "displayName"))];
						HG_TRADER_TREE tvSetData [[_path,_subPath,_subSubPath],_x];
						HG_TRADER_TREE tvSetValue [[_path,_subPath,_subSubPath],1];
					};
				} forEach _items;
		    };
			
			// Uniform + items, Vest + items, Backpack + items
			if(_index in [3,4,5]) then
			{
				_stuff = _gearSelection select 0;
				
				if(_stuff != "") then
				{
				    _config = [_stuff] call HG_fnc_getConfig;
				    _subPath = HG_TRADER_TREE tvAdd [[_path],(getText(configFile >> _config >> _stuff >> "displayName"))];
				    HG_TRADER_TREE tvSetData [[_path,_subPath],_stuff];
				    HG_TRADER_TREE tvSetValue [[_path,_subPath],1];
					
					_items = _gearSelection select 1;
				
				    if((count _items) != 0) then
				    {
					    {
						    _item = _x select 0;
							
							if((typeName _item) isEqualTo "ARRAY") then
							{
							    _item = _item select 0;
							};
							
							_qty = _x select 1;
						    _config = [_item] call HG_fnc_getConfig;
						    _subSubPath = HG_TRADER_TREE tvAdd [[_path,_subPath],format["%1x %2",_qty,(getText(configFile >> _config >> _item >> "displayName"))]];
						    HG_TRADER_TREE tvSetData [[_path,_subPath,_subSubPath],_item];
						    HG_TRADER_TREE tvSetValue [[_path,_subPath,_subSubPath],_qty];
						} forEach _items;
				    };
				};
			};
			
			// Assigned items
			if(_index isEqualTo 9) then
			{
				{
				    if(_x != "") then
					{
					    _config = [_x] call HG_fnc_getConfig;
					    _subPath = HG_TRADER_TREE tvAdd [[_path],(getText(configFile >> _config >> _x >> "displayName"))];
					    HG_TRADER_TREE tvSetData [[_path,_subPath],_x];
					    HG_TRADER_TREE tvSetValue [[_path,_subPath],1];
					};
				} forEach _gearSelection;
				
				if((HG_TRADER_TREE tvCount [_path]) isEqualTo 0) then
				{
				    HG_TRADER_TREE tvDelete [_path];
				};
			};
		};
	} else {
	    // Facewear, Headgear
		if(_gearSelection != "") then
		{
			_path = HG_TRADER_TREE tvAdd [[],(_x select 0)];
			HG_TRADER_TREE tvSetData [[_path],(_x select 0)];
			HG_TRADER_TREE tvSetValue [[_path],0];
			
			_config = [_gearSelection] call HG_fnc_getConfig;
			_subPath = HG_TRADER_TREE tvAdd [[_path],(getText(configFile >> _config >> _gearSelection >> "displayName"))];
			HG_TRADER_TREE tvSetData [[_path,_subPath],_gearSelection];
			HG_TRADER_TREE tvSetValue [[_path,_subPath],1];
		};
	};
} forEach [[(localize "STR_HG_SHOP_FACEWEAR"),7],[(localize "STR_HG_SHOP_HEADGEAR"),6],[(localize "STR_HG_SHOP_ASSIGNED"),9],[(localize "STR_HG_SHOP_PRIM_WEAPON"),0],[(localize "STR_HG_SHOP_SEC_WEAPON"),1],[(localize "STR_HG_SHOP_HANDGUN"),2],[(localize "STR_HG_SHOP_UNIFORM"),3],[(localize "STR_HG_SHOP_VEST"),4],[(localize "STR_HG_SHOP_BACKPACK"),5]];

if((HG_TRADER_TREE tvCount []) isEqualTo 0) then
{
	_path = HG_TRADER_TREE tvAdd [[],(localize "STR_HG_NOTHING_TO_DISPLAY")];
	HG_TRADER_TREE tvSetData [[_path],(localize "STR_HG_NONE")];
	HG_TRADER_TREE tvSetValue [[_path],0];
};

HG_TRADER_TREE tvSetCurSel HG_SELECTION_HANDLER;

if((count HG_SELECTION_HANDLER) != 1) then
{
	HG_TRADER_TREE tvExpand HG_SELECTION_HANDLER;
};

true;
