/*
    Author - HoverGuy
    Website - https://northernimpulse.com
	
    Defines available units shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the shop
		spawnPosition - STRING - Marker name
		
		class UnitClassname
		{
			displayName - STRING - Unit display name
			rank - STRING - Unit rank, can be PRIVATE/CORPORAL/SERGEANT/LIEUTENANT/CAPTAIN/MAJOR/COLONEL
			cost - INTEGER - Unit cost in money, -1 means free
			unit - STRING - Has to be an existing class from CfgVehicles of the same player side (B_Soldier_F, O_Soldier_F etc...)
			
			class Loadout - Unit loadout, follows this format https://community.bistudio.com/wiki/getUnitLoadout
			{
				uniformClass - STRING - Uniform classname
				backpack - STRING - Backpack classname
				linkedItems - ARRAY OF STRING - Linked items classnames
				weapons - ARRAY OF STRING - Primary/secondary/handgun classnames
				items - ARRAY OF STRING - Items classnames
				magazines - ARRAY OF STRING - Magazines classnames
			};
		};
	};
*/

class HG_DefaultShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
    conditionToAccess = "playerSide isEqualTo west"; // Example: "true" OR "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	spawnPosition = "units_spawn";
	
	class Rifleman
	{
		displayName = "Rifleman";
		rank = "PRIVATE";
		cost = -1;
		unit = "B_Soldier_F";
		
		class Loadout
		{
			uniformClass = "U_B_CombatUniform_mcam";
			backpack = "B_AssaultPack_mcamo";
			linkedItems[] = {"V_PlateCarrier1_rgr","H_HelmetB","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
			weapons[] = {"arifle_MX_ACO_pointer_F","hgun_P07_F"};
			items[] = {"FirstAidKit","FirstAidKit","FirstAidKit"};
			magazines[] = {"30Rnd_65x39_caseless_mag", "16Rnd_9x21_Mag","SmokeShell",
			"HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade",
			"HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade",
			"HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade", "HandGrenade"};
		};
	};
};
