/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
	
    Defines available vehicle shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		whitelistRanks - ARRAY OF STRINGS - Can be PRIVATE/CORPORAL/SERGEANT/LIEUTENANT/CAPTAIN/MAJOR/COLONEL or mixed
		
		class YourShopCategory - Shop category, can be whatever you want
		{
			displayName - STRING - Category display name
			vehicles - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
			spawnPoints - ARRAY OF ARRAYS - Spawn pos (markers/positions)
			|- 0 - STRING - Display name in the dialog
			|- 1 - ARRAY OF MIXED - Markers/positions
		};
	};
*/

class HG_DefaultShop // Default shop is just a placeholder for testing purposes, you can delete it completely and make your own
{
    whitelistRanks[] = {};
	
    class Civilian
	{
	    displayName = "$STR_HG_SHOP_CIVILIAN";
		vehicles[] =
		{
		    {"C_SUV_01_F",15000}
		};
	    spawnPoints[] =
		{
			{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class Military
	{
	    displayName = "$STR_HG_SHOP_MILITARY";
		vehicles[] =
		{
		    {"B_MRAP_01_F",45000}
	    };
		spawnPoints[] =
		{
			{"$STR_HG_MARKER_2",{"military_vehicles_spawn_1"}}
		};
	};
};
