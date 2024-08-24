#include "HG_Macros.h"
/*
    Author - HoverGuy
	GitHub - https://github.com/Ppgtjmad/SimpleShops
	Steam - https://steamcommunity.com/id/HoverGuy/
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
 