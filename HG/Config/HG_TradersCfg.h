/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
	
    Defines available traders
	
	class YourTraderClass - Used as a param for the call, basically the trader you want to display
	{
		whitelistRanks - ARRAY OF STRINGS - Can be "PRIVATE"/"CORPORAL"/"SERGEANT"/"LIEUTENANT"/"CAPTAIN"/"MAJOR"/"COLONEL" or mixed
		interestedIn - ARRAY OF ARRAYS - Stuff that the trader is interested in
		|- 0 - STRING - Item classname
		|- 1 - INTEGER - Item sell price
	};
*/

class HG_DefaultTrader // HG_DefaultTrader is just a placeholder for testing purposes, you can delete it completely and make your own
{
	whitelistRanks[] = {};
	interestedIn[] = 
	{
		{"ItemMap",50},
		{"ItemRadio",50},
		{"ItemCompass",50}
	};
};
