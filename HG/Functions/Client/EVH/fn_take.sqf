/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
params ["_unit","_container","_item",["_handled",false]];

if(_item in ["Money_bunch","Money_roll","Money_stack","Money"]) then
{
    private _amount = switch _item do
	{
	    case "Money_bunch": {5};
		case "Money": {10000};
		case "Money_roll": {100};
		case "Money_stack": {1000};
	    default {1};
	};
	
	[_amount,0] call HG_fnc_addOrSubCash;
	player removeMagazine _item;
};

_handled;
