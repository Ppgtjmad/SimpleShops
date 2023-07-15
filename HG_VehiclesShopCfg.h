/*
    Author - HoverGuy
    Website - https://northernimpulse.com
	
    Defines available vehicle shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the shop
		
		class YourShopCategory - Shop category, can be whatever you want
		{
			displayName - STRING - Category display name
			vehicles - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
			|- 2 - STRING - Condition that must return either true or false, if true the vehicle appears in the list else no
			spawnPoints - ARRAY OF ARRAYS - Spawn positions (markers/positions)
			|- 0 - STRING - Display name in the dialog
			|- 1 - ARRAY OF MIXED - Markers/positions
		};
	};

	======PRICING TABLE======
	HOW ARE WE GOING TO PRICE VEHICLES?
	(Flat rate for type) + (Additional Weapon Costs)
	
	===FLAT RATES===
	ANTI_AIR = 150000
	APCS = 120000
	Cars = 15000
	Helicopters = 300000
	Planes = 500000
	Tanks = 200000

	===Additional Weapon Costs=== 
	(added to total cost based on weapon types available to vehicle)

	Armor = +10000
	HMG = +10000
	GMG = +20000
	AT = +30000	

	======INSTRUCTIONS======

	1. Every vehicle MUST be put in class HG_DefaultShop AND the specific faction class (i.e. HG_VEHICLES_NATO)
	2. Every vehicle type MUST have the display name above the line with two slashes in front of it (i.e. //BM-2T Stalker)
	3. Using the display names, every vehicle must be arranged alphabetically in it's category
*/

//=======================================================================================
class HG_DefaultShop // Add ALL vehicles here
{
    conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
//ALL ANTI_AIR
			class ANTI_AIR
			{
				displayName = "$STR_HG_VEHICLESHOP_ANTI_AIR";
				vehicles[] =
				{
		//Bardelas
					{"B_APC_Tracked_01_AA_F",125000,"true"},
		//ZSU-35 Tigris
					{"O_APC_Tracked_02_AA_F",125000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//ALL APCS
			class APCS
			{
				displayName = "$STR_HG_VEHICLESHOP_APCS";
				vehicles[] =
				{
		//Badger IFV
					{"B_APC_Wheeled_01_cannon_F",125000,"true"},
		//BM-2T Stalker
					{"O_APC_Tracked_02_cannon_F",125000,"true"},
		//Namer
					{"B_APC_Tracked_01_rcws_F",125000,"true"},
		//Nemmera
					{"B_APC_Tracked_01_CRV_F",125000,"true"},
		//Otokar ARMA
					{"O_APC_Wheeled_02_rcws_v2_F",90000,"true"},
		//Rooikat 120
					{"B_AFV_Wheeled_01_cannon_F",125000,"true"},
		//Rooikat 120 UP
					{"B_AFV_Wheeled_01_up_cannon_F",125000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//ALL ARTILLERY
			class ARTILLERY
			{
				displayName = "$STR_HG_VEHICLESHOP_ARTILLERY";
				vehicles[] =
				{
		//2S9 Sochor
					{"O_MBT_02_arty_F",125000,"true"},
		//Seara
					{"B_MBT_01_mlrs_F",125000,"true"},
		//Sholef
					{"B_MBT_01_arty_F",125000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//ALL BOATS
			class BOATS
			{
				displayName = "$STR_HG_VEHICLESHOP_BOATS";
				vehicles[] =
				{				
		//Assault Boat
					{"B_Boat_Transport_01_F",125000,"true"},
					{"O_Boat_Transport_01_F",125000,"true"},
		            {"I_G_Boat_Transport_01_F",125000,"true"},
					{"I_C_Boat_Transport_01_F",6000,"true"},
		//Motorboat
					{"C_Boat_Civil_01_F",125000,"true"},	
		//Motorboat (Police)
					{"C_Boat_Civil_01_police_F",125000,"true"},		
		//Motorboat (Rescue)
					{"C_Boat_Civil_01_rescue_F",125000,"true"},	
		//Rescue Boat
					{"B_Lifeboat",125000,"true"},
					{"O_Lifeboat",125000,"true"},
		//Rescue Boat
					{"C_Rubberboat",125000,"true"},		
		//RHIB
					{"I_C_Boat_Transport_02_F",6000,"true"},
					{"C_Boat_Transport_02_F",125000,"true"},
		//Speedboat HMG
					{"B_Boat_Armed_01_minigun_F",125000,"true"},
					{"O_Boat_Armed_01_hmg_F",125000,"true"},
		//Water Scooter
					{"C_Scooter_Transport_01_F",125000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//ALL CARS
			class CARS
			{
				displayName = "$STR_HG_VEHICLESHOP_CARS";
				vehicles[] =
				{		
		//Fuel Truck
					{"I_G_Van_01_fuel_F",6000,"true"},
					{"C_Van_01_fuel_F",6000,"true"},
		//Hatchback
					{"C_Hatchback_01_F",6000,"true"},
		//Hatchback(Sport)
					{"C_Hatchback_01_sport_F",6000,"true"},
		//HEMTT
					{"B_Truck_01_mover_F",6000,"true"},
		//HEMTT Ammo
					{"B_Truck_01_ammo_F",6000,"true"},
		//HEMTT Cargo
					{"B_Truck_01_cargo_F",6000,"true"},
		//HEMTT Container
					{"B_Truck_01_box_F",6000,"true"},
		//HEMTT Flatbed
					{"B_Truck_01_flatbed_F",6000,"true"},
		//HEMTT Fuel
					{"B_Truck_01_fuel_F",6000,"true"},
		//HEMTT Medical
					{"B_Truck_01_medical_F",6000,"true"},
		//HEMTT Repair
					{"B_Truck_01_repair_F",6000,"true"},
		//HEMTT Transport
					{"B_Truck_01_transport_F",6000,"true"},
		//HEMTT Transport (covered)
					{"B_Truck_01_covered_F",6000,"true"},
		//Jeep Wrangler
					{"I_C_Offroad_02_unarmed_F",6000,"true"},
					{"C_Offroad_02_unarmed_F",6000,"true"},
		//Jeep Wrangler (LMG)
					{"I_C_Offroad_02_LMG_F",6000,"true"},
		//Jeep Wrangler (SPG-9)
					{"I_C_Offroad_02_AT_F",6000,"true"},
		//KamAZ Ammo
					{"O_Truck_02_Ammo_F",30000,"true"},		
		//KamAZ Fuel
					{"O_Truck_02_fuel_F",30000,"true"},
					{"C_Truck_02_fuel_F",6000,"true"},
		//KamAZ Medical
					{"O_Truck_02_medical_F",30000,"true"},
		//KamAZ Repair
					{"O_Truck_02_box_F",30000,"true"},
					{"C_Truck_02_box_F",6000,"true"},
		//KamAZ Transport
					{"O_Truck_02_transport_F",25000,"true"},
					{"C_Truck_02_transport_F",6000,"true"},
		//KamAZ Transport (covered)
					{"O_Truck_02_covered_F",25000,"true"},
					{"C_Truck_02_covered_F",6000,"true"},
		//Kart
					{"C_Kart_01_F",6000,"true"},
		//Karatel
					{"O_MRAP_02_F",45000,"true"},
		//Karatel (GMG)
					{"O_MRAP_02_gmg_F",55000,"true"},
		//Karatel (HMG)
					{"O_MRAP_02_hmg_F",65000,"true"},
		//LSV Mk.II
					{"O_LSV_02_unarmed_F",40000,"true"},
		//LSV Mk.II (M134)
					{"O_LSV_02_armed_F",50000,"true"},
		//LSV Mk.II (Metis-M)
					{"O_LSV_02_AT_F",60000,"true"},
		//M-ATV
					{"B_MRAP_01_F",6000,"true"},
		//M-ATV (GMG)
					{"B_MRAP_gmg_01_F",6000,"true"},
		//M-ATV (HMG)
					{"B_MRAP_hmg_01_F",6000,"true"},
		//Offroad
					{"I_G_Offroad_01_F",6000,"true"},
					{"C_Offroad_01_F",6000,"true"},
		//Offroad (AT)
					{"I_G_Offroad_01_AT_F",6000,"true"},
		//Offroad (Comms)
					{"C_Offroad_01_comms_F",6000,"true"},
		//Offroad (Covered)
					{"C_Offroad_01_covered_F",6000,"true"},
		//Offroad (HMG)
					{"I_G_Offroad_01_armed_F",6000,"true"},
		//Offroad (Repair)
					{"I_G_Offroad_01_repair_F",6000,"true"},
		//Offroad (Services)
					{"C_Offroad_01_repair_F",6000,"true"},
		//Polaris DAGOR
					{"B_LSV_01_unarmed_F",6000,"true"},
		//Polaris DAGOR (Mini-Spike AT)
					{"B_LSV_01_AT_F",6000,"true"},
		//Polaris DAGOR (XM312)
					{"B_LSV_01_armed_F",6000,"true"},
		//Quadbike
					{"B_Quadbike_01_F",6000,"true"},
					{"O_Quadbike_01_F",6000,"true"},
					{"I_G_Quadbike_01_F",6000,"true"},
					{"C_Quadbike_01_F",6000,"true"},
		//SUV
					{"C_SUV_01_F",6000,"true"},
		//Tractor
					{"C_Tractor_01_F",6000,"true"},
		//Truck
					{"I_G_Van_01_Transport_F",6000,"true"},
					{"C_Van_01_transport_F",6000,"true"},
		//Truck Boxer
					{"C_Van_01_box_F",6000,"true"},
		//Typhoon Ammo
					{"O_Truck_03_ammo_F",30000,"true"},
		//Typhoon Fuel
					{"O_Truck_03_fuel_F",30000,"true"},
		//Typhoon Medical
					{"O_Truck_03_medical_F",30000,"true"},
		//Typhoon Repair
					{"O_Truck_03_repair_F",30000,"true"},
		//Typhoon Transport
					{"O_Truck_03_transport_F",25000,"true"},
		//Typhoon Transport (Covered)
					{"O_Truck_03_covered_F",25000,"true"},
		//Van (Ambulance)
					{"C_Van_02_medevac_F",6000,"true"},
		//Van (Cargo)
					{"I_G_Van_02_vehicle_F",6000,"true"},
					{"C_Van_02_vehicle_F",6000,"true"},
		//Van (Fuel)
					{"I_G_Van_01_fuel_F",6000,"true"},
		//Van (Services)
					{"C_Van_02_service_F",6000,"true"},
		//Van Transport
					{"I_G_Van_01_transport_F",6000,"true"},
					{"C_Van_02_transport_F",6000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//ALL DRONES
			class DRONES
			{
				displayName = "$STR_HG_VEHICLESHOP_DRONES";
				vehicles[] =
				{
		//MQ-12 Falcon
					{"B_T_UAV_03_dynamicLoadout_F",6000,"true"},
		//UCAV Sentinel
					{"B_UAV_05_F",6000,"true"},
		//UGV Saif
					{"B_UGV_01_F",15000,"true"},
					{"O_UGV_01_F",15000,"true"},
					{"I_UGV_01_F",15000,"true"},
		//UGV Saif RCWS
					{"B_UGV_01_rcws_F",35000,"true"},
					{"O_UGV_01_rcws_F",35000,"true"},
					{"I_UGV_01_rcws_F",35000,"true"},					
		//YABHON-R3
					{"B_UAV_02_dynamicLoadout_F",6000,"true"},
					{"O_UAV_02_dynamicLoadout_F",35000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//ALL HELICOPTERS
			class HELICOPTERS
			{
				displayName = "$STR_HG_VEHICLESHOP_HELICOPTERS";
				vehicles[] =
				{
		//AH-6 Little Bird
					{"B_Heli_Light_01_dynamicLoadout_F",6000,"true"},
		//CH-47I Chinook
					{"B_Heli_Transport_03_F",6000,"true"},
		//CH-47I Chinook (unarmed)
					{"B_Heli_Transport_03_unarmed_F",6000,"true"},				
		//Ka-60 Kasatka (unarmed)
					{"O_Heli_Light_02_unarmed_F",150000,"true"},
		//Ka-60 Kasatka
					{"O_Heli_Light_02_dynamicLoadout_F",150000,"true"},
		//MD 500
					{"I_C_Heli_Light_01_civil_F",150000,"true"},
					{"C_Heli_Light_01_civil_F",150000,"true"},
		//MH-6 Little Bird
					{"B_Heli_Light_01_F",6000,"true"},
		//Mi-290 Taru
					{"O_Heli_Transport_04_F",150000,"true"},
		//Mi-290 Taru (Ammo)
					{"O_Heli_Transport_04_ammo_F",150000,"true"},
		//Mi-290 Taru (Bench)
					{"O_Heli_Transport_04_bench_F",150000,"true"},
		//Mi-290 Taru (Cargo)
					{"O_Heli_Transport_04_box_F",150000,"true"},
		//Mi-290 Taru (Fuel)
					{"O_Heli_Transport_04_fuel_F",150000,"true"},
		//Mi-290 Taru (Medical)
					{"O_Heli_Transport_04_medevac_F",150000,"true"},
		//Mi-290 Taru (Repair)
					{"O_Heli_Transport_04_repair_F",150000,"true"},
		//Mi-290 Taru (Transport)
					{"O_Heli_Transport_04_covered_F",150000,"true"},
		//Mi-48 Kajman
					{"O_Heli_Attack_02_dynamicLoadout_F",150000,"true"},
		//RAH-66 Comanche
					{"B_Heli_Attack_01_dynamicLoadout_F",6000,"true"},
		//UH-80 Ghost Hawk
					{"B_Heli_transport_01_F",6000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//ALL PLANES
			class PLANES
			{
				displayName = "$STR_HG_VEHICLESHOP_PLANES";
				vehicles[] =
				{
		//A-10D Thunderbolt II
					{"B_Plane_CAS_01_dynamicLoadout_F",6000,"true"},		
		//Cessna TTx
					{"I_C_Plane_Civil_01_F",150000,"true"},
					{"C_Plane_Civil_01_F",150000,"true"},
		//Cessna TTx (Racing)
					{"C_Plane_Civil_01_racing_F",150000,"true"},
		//F/A-181 Black Wasp II
					{"B_Plane_Fighter_01_F",6000,"true"},
		//F/A-181 Black Wasp II (Stealth)
					{"B_Plane_Fighter_01_Stealth_F",6000,"true"},
		//To-201 Shikra
					{"O_Plane_Fighter_02_F",150000,"true"},
		//To-201 Shikra (Stealth)
					{"O_Plane_Fighter_02_Stealth_F",150000,"true"},
		//V-44 Blackfish (Armed)
					{"B_T_VTOL_01_armed_F",6000,"true"},
		//V-44 Blackfish (Infantry Transport)
					{"B_T_VTOL_01_infantry_F",6000,"true"},
		//V-44 Blackfish (Vehicle Transport)
					{"B_T_VTOL_01_vehicle_F",6000,"true"},
		//Yak-130
					{"O_Plane_CAS_02_dynamicLoadout_F",150000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
// ALL SUBMERSIBLES
			class SUBMERSIBLES
			{
				displayName = "$STR_HG_VEHICLESHOP_SUBMERSIBLES";
				vehicles[] =
				{
		//SDV
					{"B_SDV_01_F",125000,"true"},
					{"O_SDV_01_F",125000,"true"},
					{"I_SDV_01_F",125000,"true"},					
				};
			};
//ALL TANKS
			class TANKS
			{
				displayName = "$STR_HG_VEHICLESHOP_TANKS";
				vehicles[] =
				{
		//Merkava MK IV LIC
					{"B_MBT_01_TUSK_F",125000,"true"},
		//Merkava MK IV M
					{"B_MBT_01_cannon_F",125000,"true"},
		//T-14 Armata			
					{"O_MBT_04_cannon_F",150000,"true"},
		//T-14K Armata			
					{"O_MBT_04_command_F",150000,"true"},
		//T100 Black Eagle			
					{"O_MBT_02_cannon_F",150000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
};
//=======================================================================================




//=======================================================================================
class HG_VEHICLES_NATO // Add NATO vehicles here
{
    conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
//NATO ANTI_AIR
			class ANTI_AIR
			{
				displayName = "$STR_HG_VEHICLESHOP_ANTI_AIR";
				vehicles[] =
				{
		//Bardelas
					{"B_APC_Tracked_01_AA_F",125000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//NATO APCS
			class APCS
			{
				displayName = "$STR_HG_VEHICLESHOP_APCS";
				vehicles[] =
				{
		//Badger IFV
					{"B_APC_Wheeled_01_cannon_F",125000,"true"},
		//Namer
					{"B_APC_Tracked_01_rcws_F",125000,"true"},
		//Nemmera
					{"B_APC_Tracked_01_CRV_F",125000,"true"},
		//Rooikat 120
					{"B_AFV_Wheeled_01_cannon_F",125000,"true"},
		//Rooikat 120 UP
					{"B_AFV_Wheeled_01_up_cannon_F",125000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//NATO ARTILLERY
			class ARTILLERY
			{
				displayName = "$STR_HG_VEHICLESHOP_ARTILLERY";
				vehicles[] =
				{
		//Seara
					{"B_MBT_01_mlrs_F",125000,"true"},
		//Sholef
					{"B_MBT_01_arty_F",125000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//NATO BOATS
			class BOATS
			{
				displayName = "$STR_HG_VEHICLESHOP_BOATS";
				vehicles[] =
				{
		//Assault Boat
					{"B_Boat_transport_01_F",125000,"true"},
		//Rescue Boat
					{"B_Lifeboat",125000,"true"},
		//Speedboat Minigun
					{"B_Boat_Armed_01_minigun_F",125000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//NATO CARS
			class CARS
			{
				displayName = "$STR_HG_VEHICLESHOP_CARS";
				vehicles[] =
				{
		//HEMTT
					{"B_Truck_01_mover_F",6000,"true"},
		//HEMTT Ammo
					{"B_Truck_01_ammo_F",6000,"true"},
		//HEMTT Cargo
					{"B_Truck_01_cargo_F",6000,"true"},
		//HEMTT Container
					{"B_Truck_01_box_F",6000,"true"},
		//HEMTT Flatbed
					{"B_Truck_01_flatbed_F",6000,"true"},
		//HEMTT Fuel
					{"B_Truck_01_fuel_F",6000,"true"},
		//HEMTT Medical
					{"B_Truck_01_medical_F",6000,"true"},
		//HEMTT Repair
					{"B_Truck_01_repair_F",6000,"true"},
		//HEMTT Transport
					{"B_Truck_01_transport_F",6000,"true"},
		//HEMTT Transport (covered)
					{"B_Truck_01_covered_F",6000,"true"},
		//M-ATV
					{"B_MRAP_01_F",6000,"true"},
		//M-ATV (GMG)
					{"B_MRAP_gmg_01_F",6000,"true"},
		//M-ATV (HMG)
					{"B_MRAP_hmg_01_F",6000,"true"},
		//Polaris DAGOR
					{"B_LSV_01_unarmed_F",6000,"true"},
		//Polaris DAGOR (Mini-Spike AT)
					{"B_LSV_01_AT_F",6000,"true"},
		//Polaris DAGOR (XM312)
					{"B_LSV_01_armed_F",6000,"true"},
		//Quadbike
					{"B_Quadbike_01_F",6000,"true"},

				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//NATO DRONES
			class DRONES
			{
				displayName = "$STR_HG_VEHICLESHOP_DRONES";
				vehicles[] =
				{
		//ED-1D Pelter
					{"B_UGV_02_Demining_F",6000,"true"},
		//ED-1E Roller
					{"B_UGV_02_Science_F",6000,"true"},
		//UCAV Sentinel
					{"B_UAV_05_F",6000,"true"},
		//UGV Stomper
					{"B_UGV_01_F",6000,"true"},
		//UGV Stomper RCWS
					{"B_UGV_01_rcws_F",6000,"true"},
		//YABHON-R3
					{"B_UAV_02_dynamicLoadout_F",6000,"true"},
		//MQ-12 Falcon
					{"B_T_UAV_03_dynamicLoadout_F",6000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//NATO HELICOPTERS
			class HELICOPTERS
			{
				displayName = "$STR_HG_VEHICLESHOP_HELICOPTERS";
				vehicles[] =
				{
		//AH-6 Little Bird
					{"B_Heli_Light_01_dynamicLoadout_F",6000,"true"},
		//CH-47I Chinook
					{"B_Heli_Transport_03_F",6000,"true"},
		//CH-47I Chinook (unarmed)
					{"B_Heli_Transport_03_unarmed_F",6000,"true"},
		//MH-6 Little Bird
					{"B_Heli_Light_01_F",6000,"true"},
		//RAH-66 Comanche
					{"B_Heli_Attack_01_dynamicLoadout_F",6000,"true"},
		//UH-80 Ghost Hawk
					{"B_Heli_transport_01_F",6000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//NATO PLANES
			class PLANES
			{
				displayName = "$STR_HG_VEHICLESHOP_PLANES";
				vehicles[] =
				{
		//A-10D Thunderbolt II
					{"B_Plane_CAS_01_dynamicLoadout_F",6000,"true"},
		//F/A-181 Black Wasp II
					{"B_Plane_Fighter_01_F",6000,"true"},
		//F/A-181 Black Wasp II (Stealth)
					{"B_Plane_Fighter_01_Stealth_F",6000,"true"},
		//V-44 Blackfish (Armed)
					{"B_T_VTOL_01_armed_F",6000,"true"},
		//V-44 Blackfish (Infantry Transport)
					{"B_T_VTOL_01_infantry_F",6000,"true"},
		//V-44 Blackfish (Vehicle Transport)
					{"B_T_VTOL_01_vehicle_F",6000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//NATO SUBMERSIBLES
			class SUBMERSIBLES
			{
				displayName = "$STR_HG_VEHICLESHOP_SUBMERSIBLES";
				vehicles[] =
				{
		//SDV
					{"B_SDV_01_F",125000,"true"},

				};
			};
//NATO TANKS
			class TANKS
			{
				displayName = "$STR_HG_VEHICLESHOP_TANKS";
				vehicles[] =
				{
		//Merkava MK IV LIC
					{"B_MBT_01_TUSK_F",125000,"true"},
		//Merkava MK IV M
					{"B_MBT_01_cannon_F",125000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
};
//=======================================================================================



//=======================================================================================
class HG_VEHICLES_CSAT // Add CSAT vehicles here
{
    conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
//CSAT ANTI_AIR
			class ANTI_AIR
			{
				displayName = "$STR_HG_VEHICLESHOP_ANTI_AIR";
				vehicles[] =
				{
		//ZSU-35 Tigris
					{"O_APC_Tracked_02_AA_F",125000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//CSAT APCS
			class APCS
			{
				displayName = "$STR_HG_VEHICLESHOP_APCS";
				vehicles[] =
				{
		//BM-2T Stalker
					{"O_APC_Tracked_02_cannon_F",125000,"true"},
		//Otokar ARMA
					{"O_APC_Wheeled_02_rcws_v2_F",90000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//CSAT ARTILLERY
			class ARTILLERY
			{
				displayName = "$STR_HG_VEHICLESHOP_ARTILLERY";
				vehicles[] =
				{
		//2S9 Sochor
					{"O_MBT_02_arty_F",125000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//CSAT BOATS
			class BOATS
			{
				displayName = "$STR_HG_VEHICLESHOP_BOATS";
				vehicles[] =
				{
		//Assault Boat
					{"O_Boat_Transport_01_F",125000,"true"},
		//Rescue Boat
					{"O_Lifeboat",125000,"true"},
		//Speedboat HMG
					{"O_Boat_Armed_01_hmg_F",125000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//CSAT CARS
			class CARS
			{
				displayName = "$STR_HG_VEHICLESHOP_CARS";
				vehicles[] =
				{
		//KamAZ Ammo
					{"O_Truck_02_Ammo_F",30000,"true"},
		//KamAZ Fuel
					{"O_Truck_02_fuel_F",30000,"true"},
		//KamAZ Medical
					{"O_Truck_02_medical_F",30000,"true"},
		//KamAZ Repair
					{"O_Truck_02_box_F",30000,"true"},
		//KamAZ Transport
					{"O_Truck_02_transport_F",25000,"true"},
		//KamAZ Transport (Covered)
					{"O_Truck_02_covered_F",25000,"true"},
		//Karatel
					{"O_MRAP_02_F",45000,"true"},
		//Karatel (GMG)
					{"O_MRAP_02_gmg_F",55000,"true"},
		//Karatel (HMG)
					{"O_MRAP_02_hmg_F",65000,"true"},
		//LSV Mk.II
					{"O_LSV_02_unarmed_F",40000,"true"},
		//LSV Mk.II (M134)
					{"O_LSV_02_armed_F",50000,"true"},
		//LSV Mk.II (Metis-M)
					{"O_LSV_02_AT_F",60000,"true"},
		//Typhoon Ammo
					{"O_Truck_03_ammo_F",30000,"true"},
		//Typhoon Fuel
					{"O_Truck_03_fuel_F",30000,"true"},
		//Typhoon Medical
					{"O_Truck_03_medical_F",30000,"true"},
		//Typhoon Repair
					{"O_Truck_03_repair_F",30000,"true"},
		//Typhoon Transport
					{"O_Truck_03_transport_F",25000,"true"},
		//Typhoon Transport (Covered)
					{"O_Truck_03_covered_F",25000,"true"},
		//Quadbike
					{"O_Quadbike_01_F",6000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//CSAT DRONES
			class DRONES
			{
				displayName = "$STR_HG_VEHICLESHOP_DRONES";
				vehicles[] =
				{
		//UGV Saif
					{"O_UGV_01_F",15000,"true"},
		//UGV Saif RCWS
					{"O_UGV_01_rcws_F",35000,"true"},
		//YABHON-R3
					{"O_UAV_02_dynamicLoadout_F",35000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//CSAT HELICOPTERS
			class HELICOPTERS
			{
				displayName = "$STR_HG_VEHICLESHOP_HELICOPTERS";
				vehicles[] =
				{
		//Ka-60 Kasatka (unarmed)
					{"O_Heli_Light_02_unarmed_F",150000,"true"},
		//Ka-60 Kasatka
					{"O_Heli_Light_02_dynamicLoadout_F",150000,"true"},
		//Mi-290 Taru
					{"O_Heli_Transport_04_F",150000,"true"},
		//Mi-290 Taru (Ammo)
					{"O_Heli_Transport_04_ammo_F",150000,"true"},
		//Mi-290 Taru (Bench)
					{"O_Heli_Transport_04_bench_F",150000,"true"},
		//Mi-290 Taru (Cargo)
					{"O_Heli_Transport_04_box_F",150000,"true"},
		//Mi-290 Taru (Fuel)
					{"O_Heli_Transport_04_fuel_F",150000,"true"},
		//Mi-290 Taru (Medical)
					{"O_Heli_Transport_04_medevac_F",150000,"true"},
		//Mi-290 Taru (Repair)
					{"O_Heli_Transport_04_repair_F",150000,"true"},
		//Mi-290 Taru (Transport)
					{"O_Heli_Transport_04_covered_F",150000,"true"},
		//Mi-48 Kajman
					{"O_Heli_Attack_02_dynamicLoadout_F",150000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//CSAT PLANES
			class PLANES
			{
				displayName = "$STR_HG_VEHICLESHOP_PLANES";
				vehicles[] =
				{
		//To-201 Shikra
					{"O_Plane_Fighter_02_F",150000,"true"},
		//To-201 Shikra (Stealth)
					{"O_Plane_Fighter_02_Stealth_F",150000,"true"},
		//Yak-130
					{"O_Plane_CAS_02_dynamicLoadout_F",150000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//CSAT SUBMERSIBLES
			class SUBMERSIBLES
			{
				displayName = "$STR_HG_VEHICLESHOP_SUBMERSIBLES";
				vehicles[] =
				{
		//SDV
					{"O_SDV_01_F",125000,"true"},
				};
			};
//CSAT TANKS
			class TANKS
			{
				displayName = "$STR_HG_VEHICLESHOP_TANKS";
				vehicles[] =
				{
		//T-14 Armata			
					{"O_MBT_04_cannon_F",150000,"true"},
		//T-14K Armata			
					{"O_MBT_04_command_F",150000,"true"},
		//T100 Black Eagle			
					{"O_MBT_02_cannon_F",150000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
};
//=======================================================================================



//=======================================================================================
class HG_VEHICLES_FIA // Add CSAT vehicles here
{
    conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
//FIA ANTI_AIR
			class ANTI_AIR
			{
				displayName = "$STR_HG_VEHICLESHOP_ANTI_AIR";
				vehicles[] =
				{

				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//FIA APCS
			class APCS
			{
				displayName = "$STR_HG_VEHICLESHOP_APCS";
				vehicles[] =
				{

				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//FIA ARTILLERY
			class ARTILLERY
			{
				displayName = "$STR_HG_VEHICLESHOP_ARTILLERY";
				vehicles[] =
				{

				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//FIA BOATS
			class BOATS
			{
				displayName = "$STR_HG_VEHICLESHOP_BOATS";
				vehicles[] =
				{
		//Assault Boat
					{"I_G_Boat_Transport_01_F",6000,"true"},
					{"I_C_Boat_Transport_01_F",6000,"true"},
		//RHIB
					{"I_C_Boat_Transport_02_F",6000,"true"},						
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//FIA CARS
			class CARS
			{
				displayName = "$STR_HG_VEHICLESHOP_CARS";
				vehicles[] =
				{
		//Fuel Truck
					{"I_G_Van_01_Transport_F",6000,"true"},
		//Jeep Wrangler
					{"I_C_Offroad_02_unarmed_F",6000,"true"},
		//Jeep Wrangler (LMG)
					{"I_C_Offroad_02_LMG_F",6000,"true"},
		//Jeep Wrangler (SPG-9)
					{"I_C_Offroad_02_AT_F",6000,"true"},
		//Offroad
					{"I_G_Offroad_01_F",6000,"true"},
		//Offroad (AT)
					{"I_G_Offroad_01_AT_F",6000,"true"},
		//Offroad (HMG)
					{"I_G_Offroad_01_armed_F",6000,"true"},
		//Offroad (Repair)
					{"I_G_Offroad_01_repair_F",6000,"true"},
		//Quad Bike
					{"I_G_Quadbike_01_F",6000,"true"},
		//Truck
					{"I_G_Van_01_Transport_F",6000,"true"},
					{"I_C_Van_01_Transport_F",6000,"true"},
		//Van (Cargo)
					{"I_G_Van_02_vehicle_F",6000,"true"},
					{"I_C_Van_02_vehicle_F",6000,"true"},
		//Van Transport
					{"I_G_Van_02_vehicle_F",6000,"true"},
					{"I_C_Van_02_vehicle_F",6000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//FIA DRONES
			class DRONES
			{
				displayName = "$STR_HG_VEHICLESHOP_DRONES";
				vehicles[] =
				{

				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};

			class HELICOPTERS
			{
				displayName = "$STR_HG_VEHICLESHOP_HELICOPTERS";
				vehicles[] =
				{

				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//FIA PLANES
			class PLANES
			{
				displayName = "$STR_HG_VEHICLESHOP_PLANES";
				vehicles[] =
				{
		//Cessna TTx
					{"I_C_Plane_Civil_01_F",150000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//FIA SUBMERSIBLES
			class SUBMERSIBLES
			{
				displayName = "$STR_HG_VEHICLESHOP_SUBMERSIBLES";
				vehicles[] =
				{

				};
			};
//FIA TANKS
			class TANKS
			{
				displayName = "$STR_HG_VEHICLESHOP_TANKS";
				vehicles[] =
				{

				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
};
//=======================================================================================



//=======================================================================================
class HG_VEHICLES_CIV // Add Civilian vehicles here
{
    conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
//CIV ANTI_AIR
			class ANTI_AIR
			{
				displayName = "$STR_HG_VEHICLESHOP_ANTI_AIR";
				vehicles[] =
				{

				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//CIV APCS
			class APCS
			{
				displayName = "$STR_HG_VEHICLESHOP_APCS";
				vehicles[] =
				{

				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
// CIV ARTILLERY
			class ARTILLERY
			{
				displayName = "$STR_HG_VEHICLESHOP_ARTILLERY";
				vehicles[] =
				{

				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//CIV BOATS
			class BOATS
			{
				displayName = "$STR_HG_VEHICLESHOP_BOATS";
				vehicles[] =
				{
		//Motorboat
					{"C_Boat_Civil_01_F",125000,"true"},	
		//Motorboat (Police)
					{"C_Boat_Civil_01_police_F",125000,"true"},		
		//Motorboat (Rescue)
					{"C_Boat_Civil_01_rescue_F",125000,"true"},	
		//Rescue Boat
					{"C_Rubberboat",125000,"true"},				
		//RHIB
					{"C_Boat_Transport_02_F",125000,"true"},
		//Water Scooter
					{"C_Scooter_Transport_01_F",125000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//CIV CARS
			class CARS
			{
				displayName = "$STR_HG_VEHICLESHOP_CARS";
				vehicles[] =
				{
		//Fuel Truck
					{"C_Van_01_fuel_F",6000,"true"},
		//Hatchback
					{"C_Hatchback_01_F",6000,"true"},
		//Hatchback(Sport)
					{"C_Hatchback_01_sport_F",6000,"true"},
		//Jeep Wrangler
					{"C_Offroad_02_unarmed_F",6000,"true"},
		//KamAZ Fuel
					{"C_Truck_02_fuel_F",6000,"true"},
		//KamAZ Repair
					{"C_Truck_02_box_F",6000,"true"},
		//KamAZ Transport
					{"C_Truck_02_transport_F",6000,"true"},
		//KamAZ Transport (covered)
					{"C_Truck_02_covered_F",6000,"true"},
		//Kart
					{"C_Kart_01_F",6000,"true"},
		//Offroad
					{"C_Offroad_01_F",6000,"true"},
		//Offroad (Comms)
					{"C_Offroad_01_comms_F",6000,"true"},
		//Offroad (Covered)
					{"C_Offroad_01_covered_F",6000,"true"},
		//Offroad (Services)
					{"C_Offroad_01_repair_F",6000,"true"},
		//Quad bike
					{"C_Quadbike_01_F",6000,"true"},
		//SUV
					{"C_SUV_01_F",6000,"true"},
		//Tractor
					{"C_Tractor_01_F",6000,"true"},
		//Truck
					{"I_C_Van_01_transport_F",6000,"true"},
					{"C_Van_01_transport_F",6000,"true"},
		//Truck Boxer
					{"C_Van_01_box_F",6000,"true"},
		//Van (Ambulance)
					{"C_Van_02_medevac_F",6000,"true"},
		//Van (Cargo)
					{"C_Van_02_transport_F",6000,"true"},
		//Van (Services)
					{"C_Van_02_service_F",6000,"true"},
		//Van Transport
					{"C_Van_02_transport_F",6000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};

//CIV DRONES
			class DRONES
			{
				displayName = "$STR_HG_VEHICLESHOP_DRONES";
				vehicles[] =
				{

				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//CIV HELICOPTERS
			class HELICOPTERS
			{
				displayName = "$STR_HG_VEHICLESHOP_HELICOPTERS";
				vehicles[] =
				{
		//MD 500
					{"C_Heli_Light_01_civil_F",150000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//CIV PLANES
			class PLANES
			{
				displayName = "$STR_HG_VEHICLESHOP_PLANES";
				vehicles[] =
				{
		//Cessna TTx
					{"C_Plane_Civil_01_F",150000,"true"},
		//Cessna TTx (Racing)
					{"C_Plane_Civil_01_racing_F",150000,"true"},
				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
//CIV SUBMERSIBLES
			class SUBMERSIBLES
			{
				displayName = "$STR_HG_VEHICLESHOP_SUBMERSIBLES";
				vehicles[] =
				{

				};
			};
//CIV TANKS
			class TANKS
			{
				displayName = "$STR_HG_VEHICLESHOP_TANKS";
				vehicles[] =
				{

				};
				spawnPoints[] =
				{
					{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
				};
			};
};
//=======================================================================================



























/*
Everything below here is obsolete, do not edit past here

    class WHEELED
	{
	    displayName = "$STR_HG_VEHICLESHOP_WHEELED";
		vehicles[] =
		{
		    {"C_Offroad_01_F",15000,"true"},
		    {"C_SUV_01_F",18000,"true"},
		    {"dvk_tcv_truck_cov_B",30000,"true"},
		    {"rhsusf_m998_w_4dr_fulltop",30000,"true"},
		    {"rhsusf_m1025_w_m2",40000,"true"},
		    {"rhsusf_m1025_w_mk19",60000,"true"},
		    {"B_G_Offroad_01_F",15000,"true"},
		    {"B_G_Offroad_01_armed_F",25000,"true"},
		    {"B_G_Offroad_01_AT_F",35000,"true"},
		    {"RHS_UAZ_MSV_01",15000,"true"},
		    {"rhs_tigr_msv",45000,"true"},
		    {"rhs_tigr_sts_msv",75000,"true"},
		    {"O_APC_Wheeled_02_rcws_v2_F",90000,"true"},
		    {"rhs_btr80_msv",125000,"true"},
		    {"rhsusf_stryker_m1127_m2_wd",90000,"true"},
		    {"rhsusf_stryker_m1126_mk19_wd",125000,"true"},

//Quadbike (CSAT)
		    {"O_Quadbike_01_F",6000,"true"},
//UGV Saif
		    {"B_UGV_01_F",15000,"true"},
//UGV Saif RCWS
		    {"B_UGV_01_rcws_F",35000,"true"},
//KamAZ
		    {"O_Truck_02_transport_F",25000,"true"},
		    {"O_Truck_02_covered_F",25000,"true"},
		    {"O_Truck_02_Ammo_F",30000,"true"},
		    {"O_Truck_02_fuel_F",30000,"true"},
		    {"O_Truck_02_medical_F",30000,"true"},
		    {"O_Truck_02_box_F",30000,"true"},
//Typhoon
		    {"O_Truck_03_transport_F",25000,"true"},
		    {"O_Truck_03_covered_F",25000,"true"},
		    {"O_Truck_03_ammo_F",30000,"true"},
		    {"O_Truck_03_fuel_F",30000,"true"},
		    {"O_Truck_03_medical_F",30000,"true"},
		    {"O_Truck_03_repair_F",30000,"true"},
//LSV Mk.II
		    {"O_LSV_02_unarmed_F",40000,"true"},
		    {"O_LSV_02_armed_F",50000,"true"},
		    {"O_LSV_02_AT_F",60000,"true"},
//Karatel
		    {"O_MRAP_02_F",45000,"true"},
		    {"O_MRAP_02_hmg_F",55000,"true"},
		    {"O_MRAP_02_gmg_F",65000,"true"},

//Otokar ARMA
		    {"O_APC_Wheeled_02_rcws_v2_F",90000,"true"},
		};
	    spawnPoints[] =
		{
			{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
		};
	};

    class TRACKED
	{
	    displayName = "$STR_HG_VEHICLESHOP_TRACKED";
		vehicles[] =
		{
//Otokar ARMA
		    {"O_APC_Wheeled_02_rcws_v2_F",90000,"true"},
		    {"O_APC_Tracked_02_AA_F",125000,"true"},
		    {"O_APC_Tracked_02_cannon_F",125000,"true"},
		    {"rhsusf_stryker_m1127_m2_wd",115000,"true"},
		};
	    spawnPoints[] =
		{
			{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
		};
	};

    class AIR
	{
	    displayName = "$STR_HG_VEHICLESHOP_AIR";
		vehicles[] =
		{
		    {"B_Heli_Attack_01_dynamicLoadout_F",150000,"true"},
		};
	    spawnPoints[] =
		{
			{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
		};
	};


    class CSAT
	{
	    displayName = "$STR_HG_VEHICLESHOP_CSAT";
		vehicles[] =
		{

//Quadbike (CSAT)
		    {"O_Quadbike_01_F",6000,"true"},
//UGV Saif
		    {"O_UGV_01_F",15000,"true"},
//UGV Saif RCWS
		    {"O_UGV_01_rcws_F",35000,"true"},
//KamAZ
		    {"O_Truck_02_transport_F",25000,"true"},
		    {"O_Truck_02_covered_F",25000,"true"},
		    {"O_Truck_02_Ammo_F",30000,"true"},
		    {"O_Truck_02_fuel_F",30000,"true"},
		    {"O_Truck_02_medical_F",30000,"true"},
		    {"O_Truck_02_box_F",30000,"true"},
//Typhoon
		    {"O_Truck_03_transport_F",25000,"true"},
		    {"O_Truck_03_covered_F",25000,"true"},
		    {"O_Truck_03_ammo_F",30000,"true"},
		    {"O_Truck_03_fuel_F",30000,"true"},
		    {"O_Truck_03_medical_F",30000,"true"},
		    {"O_Truck_03_repair_F",30000,"true"},
//LSV Mk.II
		    {"O_LSV_02_unarmed_F",40000,"true"},
		    {"O_LSV_02_armed_F",50000,"true"},
		    {"O_LSV_02_AT_F",60000,"true"},
//Karatel
		    {"O_MRAP_02_F",45000,"true"},
		    {"O_MRAP_02_hmg_F",55000,"true"},
		    {"O_MRAP_02_gmg_F",65000,"true"},

//Otokar ARMA
		    {"O_APC_Wheeled_02_rcws_v2_F",90000,"true"},
//ZSU-35 Tigris
		    {"O_APC_Tracked_02_AA_F",125000,"true"},
//BM-2T Stalker
		    {"O_APC_Tracked_02_cannon_F",125000,"true"},

		    {"O_MBT_02_cannon_F",200000,"true"},
		    {"O_MBT_04_cannon_F",225000,"true"},
		    {"O_MBT_04_command_F",250000,"true"}

		};
	    spawnPoints[] =
		{
			{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
		};
	};


//JEFF ADD FOLLOWING FACTIONS SHIT LIKE CSAT IS ABOVE, the quadbike lines are where you add shit
    class NATO
	{
	    displayName = "$STR_HG_VEHICLESHOP_NATO";
		vehicles[] =
		{


		    {"O_Quadbike_01_F",6000,"true"},


		};
	    spawnPoints[] =
		{
			{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
		};
	};

    class FIA
	{
	    displayName = "$STR_HG_VEHICLESHOP_FIA";
		vehicles[] =
		{


		    {"O_Quadbike_01_F",6000,"true"},


		};
	    spawnPoints[] =
		{
			{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
		};
	};

    class US
	{
	    displayName = "$STR_HG_VEHICLESHOP_US";
		vehicles[] =
		{


		    {"O_Quadbike_01_F",6000,"true"},


		};
	    spawnPoints[] =
		{
			{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
		};
	};

    class RUSSIAN
	{
	    displayName = "$STR_HG_VEHICLESHOP_RUSSIAN";
		vehicles[] =
		{


		    {"O_Quadbike_01_F",6000,"true"},

		};
	    spawnPoints[] =
		{
			{"$STR_HG_MARKER_1",{"civilian_vehicles_spawn_1"}}
		};
	};

};
*/
