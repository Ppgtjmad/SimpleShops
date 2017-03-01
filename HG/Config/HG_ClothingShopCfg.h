/*
    Author - HoverGuy
    © All Fucks Reserved
	
    Defines available clothing shops
	
	class HG_ClothingShopCfg
    {
		class YourShopClass - Used as a param for the call, basically the shop you want to display
		{
			whitelisted - BOOL - Is the shop whitelisted?
		    whitelistRank - STRING - Can be PRIVATE/CORPORAL/SERGEANT/LIEUTENANT/CAPTAIN/MAJOR/COLONEL, not used when whitelisted is set to false
			
			class YourShopCategory - Shop category, can be whatever you want (Facewear, Uniforms, etc...)
			{
				displayName - STRING - Category display name
				cameraType - INTEGER - Camera type - Used for the camera positioning - MANDATORY / 0 = Headgear / Facewear - 1 = Backpack - 2 = Uniform / Vest
				content - ARRAY OF ARRAYS - Shop content
				|- 0 - STRING - Classname
				|- 1 - INTEGER - Price
			};
		};
	};
*/

class HG_ClothingShopCfg // Has to be left untouched
{
	class HG_DefaultShop // Default shop is just a placeholder for testing purposes, you can delete it completely and make your own
	{
		whitelisted = false;
		whitelistRank = "";
		
		class Facewear
		{
			displayName = "$STR_HG_SHOP_FACEWEAR";
			cameraType = 0;
			content[] =
			{
				{"G_Balaclava_blk",50},
				{"G_Bandanna_shades",50}
			};
		};
		
		class Headgear
		{
			displayName = "$STR_HG_SHOP_HEADGEAR";
			cameraType = 0;
			content[] =
			{
				{"H_HelmetB_light_grass",1500}
			};
		};
		
		class Vests
	    {
	        displayName = "$STR_HG_SHOP_VESTS";
			cameraType = 2;
		    content[] =
		    {
		        {"V_PlateCarrierGL_mtp",500}
		    };
	    };
		
        class Uniforms
	    {
	        displayName = "$STR_HG_SHOP_UNIFORMS";
			cameraType = 2;
		    content[] =
		    {
		        {"U_B_FullGhillie_ard",150}
		    };
	    };
		
		class Backpacks
		{
			displayName = "$STR_HG_SHOP_BACKPACKS";
			cameraType = 1;
			content[] =
			{
				{"B_Carryall_oucamo",800}
			};
		};
	};
};
