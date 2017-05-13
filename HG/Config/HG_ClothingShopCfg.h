/*
    Author - HoverGuy
    © All Fucks Reserved
	Website - http://www.sunrise-production.com
	
    Defines available clothing shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		whitelistRanks - ARRAY OF STRINGS - Can be PRIVATE/CORPORAL/SERGEANT/LIEUTENANT/CAPTAIN/MAJOR/COLONEL or mixed
		
		class ShopCategory - Shop category, can only be Glasses/Headgear/Uniform/Vest/Backpack
		{
			content - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
		};
	};
*/

class HG_DefaultShop // Default shop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	whitelistRanks[] = {};
	
	class Glasses
	{
		content[] =
		{
			{"G_Balaclava_blk",50},
			{"G_Bandanna_shades",50}
		};
	};
	
	class Headgear
	{
		content[] =
		{
			{"H_HelmetB_light_grass",1500}
	    };
	};
	
	class Vest
	{
		content[] =
		{
		    {"V_PlateCarrierGL_mtp",500}
		};
	};
	
    class Uniform
	{
		content[] =
		{
		    {"U_B_FullGhillie_ard",150}
		};
	};
	
	class Backpack
	{
		content[] =
		{
			{"B_Carryall_oucamo",800}
		};
	};
};
