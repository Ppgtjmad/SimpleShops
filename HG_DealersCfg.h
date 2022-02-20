/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
	
    Defines available traders
	
	class YourDealerClass - Used as a param for the call, basically the dealer you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the dealer
		
		interestedIn - ARRAY OF ARRAYS - Vehicles that the dealer is interested in buying
		|- 0 - STRING - Vehicle classname
		|- 1 - INTEGER - Vehicle sell price
	};
*/

class HG_DefaultDealer // HG_DefaultDealer is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	interestedIn[] = 
	{
//Wheeled
		{"C_Offroad_01_F",3000},
		{"C_SUV_01_F",3600},
		{"dvk_tcv_truck_cov_B",30000},
		{"rhsusf_m998_w_4dr_fulltop",2500},
		{"rhsusf_m1025_w_m2",8000},
		{"rhsusf_m1025_w_mk19",12000},
		{"B_G_Offroad_01_F",3000},
		{"B_G_Offroad_01_armed_F",5000},
		{"B_G_Offroad_01_AT_F",7000},
		{"RHS_UAZ_MSV_01",3000},
		{"rhs_tigr_msv",9000},
		{"rhs_tigr_sts_msv",15000},
//Tracked
		{"rhs_btr80_msv",18000},
		{"rhsusf_stryker_m1127_m2_wd",18000},
//Air
		{"B_Heli_Attack_01_dynamicLoadout_F",30000},
		{"B_Heli_Light_01_dynamicLoadout_F",18000,"true"},

//CSAT
		    {"O_Quadbike_01_F",6000,"true"},

		    {"O_Truck_02_transport_F",25000,"true"},
		    {"O_Truck_02_covered_F",25000,"true"},
		    {"O_Truck_02_Ammo_F",30000,"true"},
		    {"O_Truck_02_fuel_F",30000,"true"},
		    {"O_Truck_02_medical_F",30000,"true"},
		    {"O_Truck_02_box_F",30000,"true"},


		    {"O_Truck_03_transport_F",25000,"true"},
		    {"O_Truck_03_covered_F",25000,"true"},
		    {"O_Truck_03_ammo_F",30000,"true"},
		    {"O_Truck_03_fuel_F",30000,"true"},
		    {"O_Truck_03_medical_F",30000,"true"},
		    {"O_Truck_03_repair_F",30000,"true"},

		    {"O_LSV_02_unarmed_F",40000,"true"},
		    {"O_LSV_02_armed_F",50000,"true"},
		    {"O_LSV_02_AT_F",60000,"true"},

		    {"O_MRAP_02_F",45000,"true"},
		    {"O_MRAP_02_hmg_F",55000,"true"},
		    {"O_MRAP_02_gmg_F",65000,"true"},

		    {"O_APC_Wheeled_02_rcws_v2_F",90000,"true"},
		    {"O_APC_Tracked_02_AA_F",125000,"true"},
		    {"O_APC_Tracked_02_cannon_F",125000,"true"},

		    {"O_MBT_02_cannon_F",200000,"true"},
		    {"O_MBT_04_cannon_F",225000,"true"},
		    {"O_MBT_04_command_F",250000,"true"}

	};
};
