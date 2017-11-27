/*
    Author - HoverGuy
    © All Fucks Reserved
	Website - http://www.sunrise-production.com
	
    Defines available gear shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		whitelistRanks - ARRAY OF STRINGS - Can be "PRIVATE"/"CORPORAL"/"SERGEANT"/"LIEUTENANT"/"CAPTAIN"/"MAJOR"/"COLONEL" or mixed
		
		class ShopCategory - Shop category, can only be Glasses/Headgear/Uniform/Vest/Backpack/MissileLauncher/RocketLauncher/Handgun/AssaultRifle/MachineGun/SubmachineGun/SniperRifle
		{
			content - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
			|- 2 - STRING - Condition that must return either true or false, if true the item appears in the list else no
		};
	};
*/

class HG_DefaultShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	whitelistRanks[] = {};
	
	class Glasses
	{
		displayName = "$STR_HG_SHOP_FACEWEARS";
		content[] =
		{
			{"G_Balaclava_blk",50,"true"},
			{"G_Bandanna_shades",50,"true"}
		};
	};
	
	class Headgear
	{
		displayName = "$STR_HG_SHOP_HEADGEARS";
		content[] =
		{
			{"H_HelmetB_light_grass",1500,"true"}
	    };
	};
	
	class Uniform
	{
		displayName = "$STR_HG_SHOP_UNIFORMS";
		content[] =
		{
		    {"U_B_FullGhillie_ard",150,"true"}
		};
	};
	
	class Vest
	{
		displayName = "$STR_HG_SHOP_VESTS";
		content[] =
		{
		    {"V_PlateCarrierGL_mtp",500,"true"}
		};
	};
	
	class Backpack
	{
		displayName = "$STR_HG_SHOP_BACKPACKS";
		content[] =
		{
			{"B_Carryall_oucamo",800,"true"}
		};
	};
	
	class MissileLauncher
	{
		displayName = "$STR_HG_SHOP_MISSILE_LAUNCHER";
		content[] =
		{
			{"launch_B_Titan_F",50000,"true"}
		};
	};
	
	class RocketLauncher
	{
		displayName = "$STR_HG_SHOP_ROCKET_LAUNCHER";
		content[] =
		{
			{"launch_RPG7_F",50000,"true"}
		};
	};
	
	class Handgun
	{
		displayName = "$STR_HG_SHOP_HANDGUN";
		content[] =
		{
			{"hgun_P07_F",1500,"true"}
		};
	};
	
	class AssaultRifle
	{
		displayName = "$STR_HG_SHOP_ASSAULT_RIFLE";
		content[] =
		{
			{"arifle_AKM_F",12000,"true"}
		};
	};
	
	class MachineGun
	{
		displayName = "$STR_HG_SHOP_MACHINE_GUN";
		content[] =
		{
			{"arifle_MX_SW_F",35000,"true"}
		};
	};
	
	class SubmachineGun
	{
		displayName = "$STR_HG_SHOP_SUB_MACHINE_GUN";
		content[] =
		{
			{"SMG_02_f",5000,"true"}
		};
	};
	
	class SniperRifle
	{
		displayName = "$STR_HG_SHOP_SNIPER_RIFLE";
		content[] =
		{
			{"srifle_dmr_04_f",25000,"true"}
		};
	};
};
