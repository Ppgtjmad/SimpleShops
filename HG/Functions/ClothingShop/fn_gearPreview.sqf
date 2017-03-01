/*
    Author - HoverGuy
    © All Fucks Reserved
*/
params["_item","_price","_itemType"];

_itemType = [_item] call BIS_fnc_itemType;

switch(_itemType select 1) do
{
    case "Glasses": 
	{
	    removeGoggles player;
		player addGoggles _item;
		HG_GEAR_PREVIEW set[0,[_item,_price]];
	};
	case "Headgear": 
	{
	    removeHeadgear player;
		player addHeadgear _item;
		HG_GEAR_PREVIEW set[1,[_item,_price]];
	};
	case "Vest": 
	{
	    removeVest player;
		player addVest _item;
		HG_GEAR_PREVIEW set[2,[_item,_price]];
    };
    case "Uniform": 
	{
	    removeUniform player;
		player addUniform _item;
		HG_GEAR_PREVIEW set[3,[_item,_price]];
	};
	case "Backpack": 
	{
	    removeBackpack player;
		player addBackpack _item;
		HG_GEAR_PREVIEW set[4,[_item,_price]];
	};
};

true;
