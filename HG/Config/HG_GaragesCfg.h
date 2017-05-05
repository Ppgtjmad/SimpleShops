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
			allowedTypes - ARRAY OF STRINGS - Allowed vehicle types to be retrieved from the garage, can be Car/Truck/Tank/Air/Ship/Submarine or mixed
			spawnPoints - ARRAY OF MIXED - Spawn positions (markers/positions)
			|- 0 - STRINGS/ARRAYS - Markers/positions
			storePoint - STRING - Point (marker) where the vehicle should be placed to be able to store it
		};
	};
*/

class HG_DefaultGarage // Default shop is just a placeholder for testing purposes, you can delete it completely and make your own
{
    allowedTypes[] = {"Car","Truck","Tank","Air"};
	spawnPoints[] = 
	{
		"garage_spawn_1"
	};
	storePoint = "garage_store";
};
