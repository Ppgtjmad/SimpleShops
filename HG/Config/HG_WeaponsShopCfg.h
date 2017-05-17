/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com

    Defines available weapon shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		whitelistRanks - ARRAY OF STRINGS - Can be PRIVATE/CORPORAL/SERGEANT/LIEUTENANT/CAPTAIN/MAJOR/COLONEL or mixed
		
		class YourShopCategory - Shop category, can be whatever you want
		{
			displayName - STRING - Category display name
			items - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
		};
	};
*/

class HG_DefaultShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	whitelistRanks[] = {};
	
    class Weapons
	{
	    displayName = "$STR_HG_SHOP_WEAPONS";
		items[] =
		{
		    {"arifle_MXC_F",12000},
            {"arifle_MXM_F",13000},
            {"hgun_P07_F",1500}
		};
	};
	
	class Items
	{
	    displayName = "$STR_HG_SHOP_ITEMS";
		items[] =
		{
		    {"ItemWatch",50},
			{"ItemCompass",50},
			{"ItemGPS",50},
			{"ItemRadio",50},
			{"ItemMap",50}
		};
	};
	
	class Magazines
	{
	    displayName = "$STR_HG_SHOP_MAGAZINES";
		items[] =
		{
		    {"30Rnd_65x39_caseless_mag",250},
            {"16Rnd_9x21_Mag",75},
	        {"30Rnd_9x21_Mag",150}
		};
	};
	
	class Scopes
	{
	    displayName = "$STR_HG_SHOP_SCOPES";
		items[] =
		{
		    {"optic_Arco",1000},
			{"optic_Hamr",1000}
		};
	};
};
