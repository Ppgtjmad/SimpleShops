/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
	
    Defines available traders
	
	class YourDealerClass - Used as a param for the call, basically the dealer you want to display
	{
		whitelistRanks - ARRAY OF STRINGS - Can be "PRIVATE"/"CORPORAL"/"SERGEANT"/"LIEUTENANT"/"CAPTAIN"/"MAJOR"/"COLONEL" or mixed
		interestedIn - ARRAY OF ARRAYS - Vehicles that the dealer is interested in buying
		|- 0 - STRING - Vehicle classname
		|- 1 - INTEGER - Vehicle sell price
	};
*/

class HG_DefaultDealer  // HG_DefaultDealer is just a placeholder for testing purposes, you can delete it completely and make your own
{
	whitelistRanks[] = {};
	interestedIn[] = 
	{
		{"C_SUV_01_F",2500},
		{"B_MRAP_01_F",4500}
	};
};
