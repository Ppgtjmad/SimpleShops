/*
    Author - HoverGuy
    © All Fucks Reserved
    Website - http://www.sunrise-production.com
*/
private "_itemType";

{
    if(count _x != 0) then
	{
        _itemType = [_x select 0] call BIS_fnc_itemType;
	
	    switch(_itemType select 1) do
        {
		    case "Glasses": 
	        {
	            if((HG_GEAR_SAVED select 0) != "") then
                {
                    HG_PLAYER_BOX addItemCargo [(HG_GEAR_SAVED select 0),1];
                };
	        };
	        case "Headgear": 
	        {
	            if((HG_GEAR_SAVED select 1) != "") then
                {
                    HG_PLAYER_BOX addItemCargo [(HG_GEAR_SAVED select 1),1];
                };
	        };
	        case "Vest": 
	        {
		        if(count (HG_GEAR_SAVED select 3) != 0) then 
	            {
	                {
                        HG_PLAYER_BOX addItemCargo [_x,1];
                    } forEach (HG_GEAR_SAVED select 3);
	            };
	        };
            case "Uniform": 
	        {
	            if(count (HG_GEAR_SAVED select 5) != 0) then
                {
	                {
                        HG_PLAYER_BOX addItemCargo [_x,1];
                    } forEach (HG_GEAR_SAVED select 5);
	            };
	        };
	        case "Backpack": 
	        {
	            if(count (HG_GEAR_SAVED select 7) != 0) then 
	            {
	                {
                        HG_PLAYER_BOX addItemCargo [_x,1];
                    } forEach (HG_GEAR_SAVED select 7);
                };
		    };
		};
	};
} forEach HG_GEAR_PREVIEW;

true;
