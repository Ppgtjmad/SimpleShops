/*
    Author - HoverGuy
    Website - https://northernimpulse.com
	
    Defines available garages
	
	class YourGarageClass - Used as a param for the call
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the garage
		allowedTypes - ARRAY OF STRINGS - Allowed vehicle types to be retrieved from the garage, can be "Car"/"Truck"/"Tank"/"Air"/"Ship"/"Submarine" or mixed
		spawnPoints - ARRAY OF ARRAYS - Spawn positions (markers/positions)
		|- 0 - STRING - Display name in the dialog
		|- 1 - ARRAY OF MIXED - Markers/positions
		storePoint - STRING - Point (marker) where the vehicle should be placed to be able to store it, if left empty it will detect the nearest owned vehicle inside a 8m radius around the player
	};
*/

class HG_DefaultGarage // HG_DefaultGarage is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
    allowedTypes[] = {"Car","Truck","Tank","Air"};
	spawnPoints[] = 
	{
		{"Spawn 1",{"garage_spawn_1"}},
		{"Spawn 2",{"garage_spawn_2","garage_spawn_3"}}
	};
	storePoint = "garage_store";
};
