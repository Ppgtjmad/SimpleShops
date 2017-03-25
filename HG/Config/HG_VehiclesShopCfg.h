/*
    Author - HoverGuy
	© All Fucks Reserved
	
    Defines available vehicle shops
	
	class HG_VehiclesShopCfg
    {
		class YourShopClass - Used as a param for the call, basically the shop you want to display
		{
			whitelisted - BOOL - Is the shop whitelisted?
		    whitelistRank - STRING - Can be PRIVATE/CORPORAL/SERGEANT/LIEUTENANT/CAPTAIN/MAJOR/COLONEL, not used when whitelisted is set to false
			
			class YourShopCategory - Shop category, can be whatever you want (Tanks, Jets, Bananas, etc...)
			{
				displayName - STRING - Category display name
				vehicles - ARRAY OF ARRAYS - Shop content
				|- 0 - STRING - Classname
				|- 1 - INTEGER - Price
				spawnPoints - ARRAY OF ARRAYS - Spawn pos (markers)
				|- 0 - STRING - Display name in the dialog
				|- 1 - ARRAY - Markers variables
			};
		};
	};
*/

class HG_VehiclesShopCfg // Has to be left untouched
{
	class HG_DefaultShop // Default shop is just a placeholder for testing purposes, you can delete it completely and make your own
	{
		whitelisted = false;
		whitelistRank = "";
		
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
};
