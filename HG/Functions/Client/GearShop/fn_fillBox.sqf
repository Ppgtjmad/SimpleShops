/*
    Author - HoverGuy
    Website - https://northernimpulse.com
*/
private["_itemType","_type"];

{
    if((count _x) != 0) then
	{
        _itemType = [_x select 0] call BIS_fnc_itemType;
		_type = _itemType select 1;
	
	    switch(_type) do
        {
		    case "Uniform": 
	        {
	            if(((HG_GEAR_SAVED select 0) select 0) != "") then
                {
				    HG_PLAYER_BOX addItemCargo [((HG_GEAR_SAVED select 0) select 0),1];
					
				    if((count ((HG_GEAR_SAVED select 0) select 1)) != 0) then
					{
					    {
                            HG_PLAYER_BOX addItemCargo [_x,1];
                        } forEach ((HG_GEAR_SAVED select 0) select 1);
					};
	            };
	        };
			case "Vest": 
	        {
		        if(((HG_GEAR_SAVED select 1) select 0) != "") then 
	            {
				    HG_PLAYER_BOX addItemCargo [((HG_GEAR_SAVED select 1) select 0),1];
					
	                if((count ((HG_GEAR_SAVED select 1) select 1)) != 0) then
					{
					    {
                            HG_PLAYER_BOX addItemCargo [_x,1];
                        } forEach ((HG_GEAR_SAVED select 1) select 1);
					};
	            };
	        };
	        case "Backpack": 
	        {
	            if(((HG_GEAR_SAVED select 2) select 0) != "") then 
	            {
				    HG_PLAYER_BOX addBackpackCargo [((HG_GEAR_SAVED select 2) select 0),1];
					
	                if((count ((HG_GEAR_SAVED select 2) select 1)) != 0) then
					{
					    {
                            HG_PLAYER_BOX addItemCargo [_x,1];
                        } forEach ((HG_GEAR_SAVED select 2) select 1);
					};
                };
		    };
		    case "Glasses": 
	        {
	            if((HG_GEAR_SAVED select 3) != "") then
                {
                    HG_PLAYER_BOX addItemCargo [(HG_GEAR_SAVED select 3),1];
                };
	        };
	        case "Headgear": 
	        {
	            if((HG_GEAR_SAVED select 4) != "") then
                {
                    HG_PLAYER_BOX addItemCargo [(HG_GEAR_SAVED select 4),1];
                };
	        };
			case "MissileLauncher":
			{
			    if(((HG_GEAR_SAVED select 6) select 0) != "") then
				{
				    HG_PLAYER_BOX addWeaponCargo [((HG_GEAR_SAVED select 6) select 0),1];
					
					if(count ((HG_GEAR_SAVED select 6) select 1) != 0) then
					{
					    player addItemCargo ((HG_GEAR_SAVED select 6) select 1);
					};
					
					{
                        if(_x != "") then
						{
						    HG_PLAYER_BOX addItemCargo [_x,1];
						};
                    } forEach ((HG_GEAR_SAVED select 6) select 2);
				};
			};
			case "RocketLauncher":
			{
			    if(((HG_GEAR_SAVED select 6) select 0) != "") then
				{
				    HG_PLAYER_BOX addWeaponCargo [((HG_GEAR_SAVED select 6) select 0),1];
					
					if(count ((HG_GEAR_SAVED select 6) select 1) != 0) then
					{
					    player addItemCargo ((HG_GEAR_SAVED select 6) select 1);
					};
					
					{
                        if(_x != "") then
						{
						    HG_PLAYER_BOX addItemCargo [_x,1];
						};
                    } forEach ((HG_GEAR_SAVED select 6) select 2);
				};
			};
			case "Handgun":
			{
			    if(((HG_GEAR_SAVED select 7) select 0) != "") then
				{
				    HG_PLAYER_BOX addWeaponCargo [((HG_GEAR_SAVED select 7) select 0),1];
					
					if(count ((HG_GEAR_SAVED select 7) select 1) != 0) then
					{
					    player addItemCargo ((HG_GEAR_SAVED select 7) select 1);
					};
	
					{
                        if(_x != "") then
						{
						    HG_PLAYER_BOX addItemCargo [_x,1];
						};
                    } forEach ((HG_GEAR_SAVED select 7) select 2);
				};
			};
			default
			{
			    if(((HG_GEAR_SAVED select 5) select 0) != "") then
				{
				    HG_PLAYER_BOX addWeaponCargo [((HG_GEAR_SAVED select 5) select 0),1];
					
					if(count ((HG_GEAR_SAVED select 5) select 1) != 0) then
					{
					    player addItemCargo ((HG_GEAR_SAVED select 5) select 1);
					};
					
					{
					    if(_x != "") then
						{
						    HG_PLAYER_BOX addItemCargo [_x,1];
						};
                    } forEach ((HG_GEAR_SAVED select 5) select 2);
				};
			};
		};
	};
} forEach HG_GEAR_PREVIEW;

true;
