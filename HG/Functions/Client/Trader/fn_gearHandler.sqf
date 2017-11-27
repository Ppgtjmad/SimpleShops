/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_item",["_qty",1],"_itemType","_cat",["_handled",true]];
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
};

if(_cat in ["Magazine","Mine","Item","Grenade"]) then
{
	if(_item in (assignedItems player)) then
	{
		player unAssignItem _item;
		player removeItem _item;
	} else {
		for "_i" from 1 to _qty do
		{
			player removeItem _item;
		};
	};
};

if(_cat isEqualTo "Equipment") then
{
    private _type = _itemType select 1;
	
    switch(_type) do
	{
	    case "Glasses":
		{
		    removeGoggles player;
		};
		case "Headgear":
		{
		    removeHeadgear player;
		};
	    case "Uniform":
		{
		    removeUniform player;
		};
		case "Vest":
		{
		    removeVest player;
		};
		case "Backpack":
		{
		    removeBackpack player;
		};
	};
};

_handled;
	