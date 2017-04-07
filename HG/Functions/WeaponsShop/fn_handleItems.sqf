/*
    Author - HoverGuy
    Description - Called when you click "Buy" button in dialog
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_item","_mode","_itemType","_cat",["_handled",true]];

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
} else {
    if(_cat in ["Magazine","Mine","Item"]) then
    {
	    if(_mode) then
	    {
		    if(player canAdd _item) then
		    {
			    player addItem _item;
		    } else {
		        _handled = false;
		    };
        } else {
	        player removeItem _item;
	    };
    };
};

_handled;
	