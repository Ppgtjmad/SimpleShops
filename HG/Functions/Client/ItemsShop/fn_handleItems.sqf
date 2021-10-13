/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params["_item",["_mode",false],["_qty",1],"_itemType","_cat",["_handled",true]];
_itemType = [_item] call BIS_fnc_itemType;
_cat = _itemType select 0;
	
if(_cat isEqualTo "Weapon") then
{
    private _type = _itemType select 1;
	
    switch(_type) do
	{
	    case "MissileLauncher":
	    {
	        player removeWeapon (secondaryWeapon player);
	    };
		case "RocketLauncher":
		{
		    player removeWeapon (secondaryWeapon player);
		};
	    case "Handgun":
	    {
	        player removeWeapon (handgunWeapon player);
	    };
		default
		{
		    player removeWeapon (primaryWeapon player);
		};
	};
	
	if(_mode) then
	{
	    player addWeapon _item;
	};
};

if(_cat in ["Magazine","Mine","Item","Grenade"]) then
{
	if(_mode) then
	{
		if(player canAdd [_item,_qty]) then
		{
			if(_cat isEqualTo "Item") then
			{
				for "_i" from 1 to _qty do
				{
				    player addItem _item;
				};
			} else {
				player addMagazines [_item,_qty];
			};
		} else {
		    _handled = false;
		};
    } else {
		for "_i" from 1 to _qty do
		{
			player removeItem _item;
		};
	};
};

_handled;
	