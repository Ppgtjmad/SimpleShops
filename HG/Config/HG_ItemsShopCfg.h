/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com

    Defines available items shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		whitelistRanks - ARRAY OF STRINGS - Can be "PRIVATE"/"CORPORAL"/"SERGEANT"/"LIEUTENANT"/"CAPTAIN"/"MAJOR"/"COLONEL" or mixed
		
		class YourShopCategory - Shop category, can be whatever you want
		{
			displayName - STRING - Category display name
			items - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
			|- 2 - STRING - Condition that must return either true or false, if true the item appears in the list else no
		};
	};
*/

class HG_DefaultShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	whitelistRanks[] = {};
	
	class Items
	{
	    displayName = "$STR_HG_SHOP_ITEMS";
		items[] =
		{
		    {"ItemWatch",50,"true"},
			{"ItemCompass",50,"true"},
			{"ItemGPS",50,"true"},
			{"ItemRadio",50,"true"},
			{"ItemMap",50,"true"}
		};
	};
	
	class Magazines
	{
	    displayName = "$STR_HG_SHOP_MAGAZINES";
		items[] =
		{
		    {"30Rnd_65x39_caseless_mag",250,"true"},
            {"16Rnd_9x21_Mag",75,"true"},
	        {"30Rnd_9x21_Mag",150,"true"}
		};
	};
	
	class Scopes
	{
	    displayName = "$STR_HG_SHOP_SCOPES";
		items[] =
		{
		    {"optic_Arco",1000,"true"},
			{"optic_Hamr",1000,"true"}
		};
	};
};
