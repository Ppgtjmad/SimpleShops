/*
    Author - HoverGuy
    Website - https://northernimpulse.com
	
    Defines available traders
	
	class YourTraderClass - Used as a param for the call, basically the trader you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the trader
		
		interestedIn - ARRAY OF ARRAYS - Stuff that the trader is interested in buying
		|- 0 - STRING - Item classname
		|- 1 - INTEGER - Item sell price
	};
*/

class HG_DefaultTrader // HG_DefaultTrader is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	interestedIn[] = 
	{
		{"ItemMap",50},
		{"ItemRadio",50},
		{"ItemCompass",50}
	};
};
