#include "HG_Macros.h"
/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
params["_slot","_item","_qty"];

switch(_slot) do
{
    case(uniform player): 
	{
	    for "_i" from 1 to _qty do
		{
	        player removeItemFromUniform _item;
		};
	};
	case(vest player): 
	{
	    for "_i" from 1 to _qty do
		{
	        player removeItemFromVest _item;
		};
	};
	case(backpack player): 
	{
	    for "_i" from 1 to _qty do
		{
	        player removeItemFromBackpack _item;
		};
	};
};

true;
 