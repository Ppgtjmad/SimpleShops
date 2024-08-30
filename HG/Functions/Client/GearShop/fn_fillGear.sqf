/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
*/
params["_ind","_item","_itemType","_cat","_type",["_cargo",objNull],"_items"];

{
    _ind = _forEachIndex;
	_itemA = _x select 0;
	_itemB = (HG_GEAR_SAVED select _ind) select 0;
	
	if(_itemA != "" AND _itemB != "") then
	{
	    _itemType = [_itemA] call BIS_fnc_itemType;
		_cat = _itemType select 0;
		_type = _itemType select 1;
		
		if(_cat isEqualTo "Equipment") then
		{
			if(_itemA != _itemB) then
			{
				_cargo = HG_PLAYER_BOX;
				if(_type isEqualTo "Backpack") then
				{
				    // Handle backpacks with default loadouts
					[_itemB] call HG_fnc_dummy;
				} else {
					_cargo addItemCargo [_itemB,1];
				};
			} else {
			    _cargo = switch(_type) do
				{
			        case "Uniform": {uniformContainer player;};
				    case "Vest": {vestContainer player;};
				    case "Backpack": {backpackContainer player;};
					default {objNull};
			    };
				if(!isNull _cargo) then
				{
				    clearItemCargo _cargo;
				    clearWeaponCargo _cargo;
				    clearMagazineCargo _cargo;
				    clearItemCargo _cargo;
				}
			};
			if(_type in ["Uniform","Vest","Backpack"]) then
			{
				_items = (HG_GEAR_SAVED select _ind) select 1;
				if((count _items) != 0) then
			    {
		            {
                        _cargo addItemCargo [_x,1];
                    } forEach _items;
			    };
			};
		} else {
		    if(_cat isEqualTo "Weapon") then
			{
			    _items = (HG_GEAR_SAVED select _ind) select 2;
				_mags = (HG_GEAR_SAVED select _ind) select 1;
				if(_itemA != _itemB) then
				{
				    HG_PLAYER_BOX addWeaponCargo [_itemB,1];
					if((count _mags) != 0) then
				    {
					    {
					        HG_PLAYER_BOX addMagazineCargo [((HG_GEAR_SAVED select _ind) select 1),1];
						} forEach _mags;
				    };
					
					{
					    if(_x != "") then
					    {
						    HG_PLAYER_BOX addItemCargo [_x,1];
					    };
                    } forEach _items;
				} else {
				    if((count _mags) != 0) then
				    {
					    player addMagazine [_mags select 0,(HG_GEAR_SAVED select _ind) select 3];
					};
					
			        {
		                if(_x != "") then
		                {
					        if(_ind isEqualTo 5) then {player addPrimaryWeaponItem _x;};
						    if(_ind isEqualTo 6) then {player addSecondaryWeaponItem _x;};
						    if(_ind isEqualTo 7) then {player addHandgunItem _x;};
		                };
                    } forEach _items;
				};
			};
		};
	};
} forEach HG_GEAR_PREVIEW;

true;
