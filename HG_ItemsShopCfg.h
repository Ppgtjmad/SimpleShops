/*
    Author - HoverGuy
    Website - https://northernimpulse.com

    Defines available items shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the shop
		
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

//VANILLA ========================================================================================================================================
class HG_ItemShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class Items
	{
	    displayName = "$STR_HG_ITEMSHOP_ITEMS";
		items[] =
		{
		    {"ItemWatch",75,"true"},
			{"ItemCompass",75,"true"},
			{"ItemGPS",75,"true"},
			{"ItemRadio",75,"true"},
			{"ItemMap",75,"true"},
			{"MineDetector",75,"true"},
			{"rvg_canOpener",10,"true"},
			{"rvg_plasticBottlePurified",75,"true"},
			{"rvg_spirit",60,"true"},
			{"rvg_franta",60,"true"},
			{"rvg_beans",67,"true"},
			{"rvg_bacon",67,"true"},
			{"rvg_milk",30,"true"},
			{"rvg_rice",30,"true"},
			{"rvg_hose",37,"true"},
			{"rvg_tire",300,"true"},
			{"rvg_purificationTablets",37,"true"},
			{"rvg_flare",97,"true"},
			{"rvg_matches",37,"true"},
			{"rvg_canisterFuel",750,"true"},
			{"rvg_Geiger",787,"true"},
			{"rvg_toolkit",1200,"true"},
			{"rvg_sleepingBag_Blue",300,"true"},
			{"rvg_foldedTent",300,"true"},
			{"B_UavTerminal",75,"true"},
			{"O_UavTerminal",75,"true"},
			{"I_UavTerminal",75,"true"},
			{"ACE_Kestrel4500",450,"true"},
			{"ACE_ATragMX",450,"true"},
			{"ACE_RangeCard",7,"true"},
			{"ACE_DAGR",450,"true"},
			{"ACE_CableTie",7,"true"},
		};
	};

	class MedicalItems
	{
	    displayName = "$STR_HG_ITEMSHOP_MEDICALITEMS";
		items[] =
		{
			{"rvg_antiRad",112,"true"},
			{"ACE_bloodIV",150,"true"},
			{"ACE_bloodIV_250",37,"true"},
			{"ACE_bloodIV_500",112,"true"},
			{"ACE_fieldDressing",7,"true"},
			{"ACE_elasticBandage",15,"true"},
			{"ACE_packingBandage",18,"true"},
			{"ACE_quikclot",22,"true"},
			{"ACE_epinephrine",112,"true"},
			{"ACE_morphine",112,"true"},
			{"ACE_personalAidKit",450,"true"},
			{"ACE_salineIV",150,"true"},
			{"ACE_salineIV_250",37,"true"},
			{"ACE_salineIV_500",112,"true"},
			{"ACE_splint",22,"true"},
			{"ACE_tourniquet",7,"true"},
		};
	};

	class Nightvision
	{
	    displayName = "$STR_HG_ITEMSHOP_NIGHTVISION";
		items[] =
		{
		    {"NVGoggles",750,"true"},
			{"NVGoggles_OPFOR",750,"true"},
			{"NVGoggles_INDEP",750,"true"},
			{"NVGoggles_tna_F",750,"true"},
			{"O_NVGoggles_hex_F",750,"true"},
			{"O_NVGoggles_urb_F",750,"true"},
			{"O_NVGoggles_ghex_F",750,"true"},
			{"O_NVGoggles_grn_F",750,"true"},
			{"NVGogglesB_blk_F",3000,"true"},
			{"NVGogglesB_grn_F",3000,"true"},
			{"NVGogglesB_gry_F",3000,"true"},
			{"rhsusf_ANPVS_15",3000,"true"},
		};
	};

	class Binocular
	{
	    displayName = "$STR_HG_ITEMSHOP_BINOCULARS";
		items[] =
		{
			{"Binocular",30,"true"},
			{"Rangefinder",750,"true"},
			{"Laserdesignator",750,"true"},
			{"Laserdesignator_02",750,"true"},
			{"Laserdesignator_03",750,"true"},
			{"Laserbatteries",37,"true"},
			{"ACE_VectorDay",750,"true"},
		};
	};

	class Throwables
	{
	    displayName = "$STR_HG_ITEMSHOP_THROWABLES";
		items[] =
		{
		    	{"Chemlight_blue",3,"true"},
		    	{"Chemlight_green",3,"true"},
		    	{"Chemlight_red",3,"true"},
		    	{"Chemlight_yellow",3,"true"},

		    	{"ACE_Chemlight_orange",3,"true"},
		    	{"ACE_Chemlight_white",3,"true"},

		    	{"ACE_Chemlight_HiBlue",7,"true"},
		    	{"ACE_Chemlight_HiGreen",7,"true"},
		    	{"ACE_Chemlight_HiRed",7,"true"},
		    	{"ACE_Chemlight_HiWhite",7,"true"},
		    	{"ACE_Chemlight_HiYellow",7,"true"},
		    	{"ACE_Chemlight_IR",7,"true"},

		    	{"ACE_HandFlare_Green",37,"true"},
		    	{"ACE_HandFlare_Red",37,"true"},
		    	{"ACE_HandFlare_White",37,"true"},
		    	{"ACE_HandFlare_Yellow",37,"true"},



		    	{"rhs_mag_npsd",37,"true"},
		    	{"rhs_mag_npsd_green",37,"true"},
		    	{"rhs_mag_npsd_red",37,"true"},
		    	{"rhs_mag_npsd_yellow",37,"true"},

		    	{"rvg_flare",37,"true"},




		};
	};
};

class HG_AttachmentsShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class Scopes
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_SCOPES";
		items[] =
		{
//A
			{"optic_Aco",100,"true"},
			{"optic_ACO_grn",100,"true"},
			{"optic_Aco_smg",100,"true"},
			{"optic_ACO_grn_smg",100,"true"},
		    	{"optic_AMS",400,"true"},
		    	{"optic_AMS_khk",400,"true"},
		    	{"optic_AMS_snd",400,"true"},
		    	{"optic_Arco",125,"true"},
		    	{"optic_Arco_blk_F",125,"true"},
		    	{"optic_Arco_ghex_F",125,"true"},
		    	{"optic_Arco_lush_F",125,"true"},
		    	{"optic_Arco_arid_F",125,"true"},
		    	{"optic_Arco_AK_blk_F",125,"true"},
		    	{"optic_Arco_AK_lush_F",125,"true"},
		    	{"optic_Arco_AK_arid_F",125,"true"},
//D
		    	{"optic_DMS",150,"true"},
		   	{"optic_DMS_ghex_F",150,"true"},
		   	{"optic_DMS_weathered_F",150,"true"},
		   	{"optic_DMS_weathered_Kir_F",150,"true"},
//E
	    		{"optic_ERCO_blk_F",125,"true"},
	    		{"optic_ERCO_khk_F",125,"true"},
	    		{"optic_ERCO_snd_F",125,"true"},
//K
	    		{"optic_KHS_blk",550,"true"},
	    		{"optic_KHS_blk",550,"true"},
	    		{"optic_KHS_old",550,"true"},
	    		{"optic_KHS_tan",550,"true"},
//L
	    		{"optic_LRPS",750,"true"},
	    		{"optic_LRPS_tna_F",750,"true"},
	    		{"optic_LRPS_ghex_F",750,"true"},
//M
	    		{"optic_Holosight",125,"true"},
	    		{"optic_Holosight_blk_F",125,"true"},
	    		{"optic_Holosight_khk_F",125,"true"},
	    		{"optic_Holosight_smg",125,"true"},
	    		{"optic_Holosight_smg_blk_F",125,"true"},
	    		{"optic_Holosight_smg_khk_F",125,"true"},
			{"optic_SOS",200,"true"},
			{"optic_SOS_khk_F",200,"true"},
			{"optic_MRCO",125,"true"},
			{"optic_MRD",100,"true"},
			{"optic_MRD_black",100,"true"},
//N
			{"optic_Nightstalker",750,"true"},
			{"optic_NVS",750,"true"},
//R
			{"optic_Hamr",125,"true"},
			{"optic_Hamr_khk_F",125,"true"},
//T
			{"optic_tws",1250,"true"},
			{"optic_tws_mg",1250,"true"},
//Y
			{"optic_Yorris",100,"true"},

		};
	};

	class Suppressors
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_SUPPRESSORS";
		items[] =
		{
//5.56 Suppressors
			{"muzzle_snds_M",1000,"true"},
			{"muzzle_snds_m_khk_F",1000,"true"},
			{"muzzle_snds_m_snd_F",1000,"true"},
			{"ace_muzzle_mzls_l",1000,"true"},

//5.8 Suppressors
			{"muzzle_snds_58_blk_F",1000,"true"},
			{"muzzle_snds_58_wdm_F",1000,"true"},
			{"muzzle_snds_58_ghex_F",1000,"true"},
			{"muzzle_snds_58_hex_F",1000,"true"},
//6.5 Suppressors
			{"muzzle_snds_H",1000,"true"},
			{"muzzle_snds_H_khk_F",1000,"true"},
			{"muzzle_snds_H_snd_F",1000,"true"},
			{"muzzle_snds_65_TI_blk_F",1000,"true"},
			{"muzzle_snds_65_TI_hex_F",1000,"true"},
			{"muzzle_snds_65_TI_ghex_F",1000,"true"},
//7.62 Suppressors
			{"muzzle_snds_B",1000,"true"},
			{"muzzle_snds_B_khk_F",1000,"true"},
			{"muzzle_snds_B_snd_F",1000,"true"},
//9mm Suppressors
			{"muzzle_snds_L",1000,"true"},
//LMG Suppressors
			{"muzzle_snds_H_MG",1000,"true"},
			{"muzzle_snds_H_MG_blk_F",1000,"true"},
			{"muzzle_snds_H_MG_khk_F",1000,"true"},
			{"muzzle_snds_338_black",1000,"true"},
			{"muzzle_snds_338_green",1000,"true"},
			{"muzzle_snds_338_sand",1000,"true"},
			{"muzzle_snds_93mmg",1000,"true"},
			{"muzzle_snds_93mmg_tan",1000,"true"},
		};
	};

	class Flashlights
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_FLASHLIGHTS";
		items[] =
		{
			{"acc_flashlight",25,"true"},
			{"acc_flashlight_smg_01",25,"true"},
			{"acc_flashlight_pistol",25,"true"},
			{"acc_pointer_IR",2000,"true"},
			{"ace_acc_pointer_green",2000,"true"},
		};
	};

	class Underbarrel
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_UNDERBARREL";
		items[] =
		{
			{"bipod_01_F_snd",175,"true"},
			{"bipod_01_F_blk",175,"true"},
			{"bipod_01_F_mtp",175,"true"},
			{"bipod_02_F_blk",175,"true"},
			{"bipod_02_F_tan",175,"true"},
			{"bipod_02_F_hex",175,"true"},
			{"bipod_03_F_blk",175,"true"},
			{"bipod_03_F_oli",175,"true"},
			{"bipod_02_F_lush",175,"true"},
			{"bipod_02_F_arid",175,"true"},
			{"bipod_01_F_khk",175,"true"},
		};
	};
};

class HG_AmmoShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class 12Gauge
	{
	    displayName = "$STR_HG_AMMOSHOP_12GAUGE";
		items[] =
		{
//vanilla 12 Gauge
		    	{"2Rnd_12Gauge_Pellets",8,"true"},
		    	{"2Rnd_12Gauge_Slug",8,"true"},
		    	{"6Rnd_12Gauge_Pellets",32,"true"},
		    	{"6Rnd_12Gauge_Slug",32,"true"},
		    	{"15Rnd_12Gauge_Pellets",160,"true"},
		    	{"15Rnd_12Gauge_Slug",160,"true"},
		};
	};

	class 12point7
	{
	    displayName = "$STR_HG_AMMOSHOP_12POINT7";
		items[] =
		{
//vanilla 12.7mm (GM6 Lynx)
		    	{"5Rnd_127x108_Mag",125,"true"},
		    	{"5Rnd_127x108_APDS_Mag",150,"true"},
//vanilla 12.7mm (ASP-1 Kir)
		    	{"10Rnd_127x54_Mag",150,"true"},
		};
	};

	class 300
	{
	    displayName = "$STR_HG_AMMOSHOP_300";
		items[] =
		{

		};
	};

	class 338
	{
	    displayName = "$STR_HG_AMMOSHOP_338";
		items[] =
		{
//vanilla 338 (MAR-10)
		    	{"10Rnd_338_Mag",140,"true"},
//vanilla 338 (SPMG)
		    	{"130Rnd_338_Mag",50,"true"},
		};
	};

	class 408
	{
	    displayName = "$STR_HG_AMMOSHOP_408";
		items[] =
		{
//vanilla 408 (M320 LRR)
		    	{"7Rnd_408_Mag",135,"true"},
		};
	};

	class 45ACP
	{
	    displayName = "$STR_HG_AMMOSHOP_45ACP";
		items[] =
		{
//vanilla 45ACP (Vermin SMG)
		    	{"30Rnd_45ACP_Mag_SMG_01",130,"true"},
		    	{"30Rnd_45ACP_Mag_SMG_01_Tracer_Green",130,"true"},
		    	{"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",130,"true"},
		    	{"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",130,"true"},

//vanilla 45ACP (ACP-C2)
		    	{"9Rnd_45ACP_Mag",109,"true"},

//vanilla 45ACP (4-five)
		    	{"11Rnd_45ACP_Mag",111,"true"},

//vanilla 45ACP (Zubr)
		    	{"6Rnd_45ACP_Cylinder",106,"true"},

		};
	};

	class 46x30
	{
	    displayName = "$STR_HG_AMMOSHOP_46x30";
		items[] =
		{

		};
	};

	class 50BW
	{
	    displayName = "$STR_HG_AMMOSHOP_50BW";
		items[] =
		{
//vanilla 50BW (Type 115)
		    	{"10Rnd_50BW_Mag_F",110,"true"},
		};
	};

	class 545x39
	{
	    displayName = "$STR_HG_AMMOSHOP_545x39";
		items[] =
		{
//vanilla 5.45x39 (AKS-74U)
		    	{"30Rnd_545x39_Mag_F",190,"true"},
		    	{"30Rnd_545x39_Mag_Green_F",190,"true"},
		    	{"30Rnd_545x39_Mag_Tracer_F",190,"true"},
		    	{"30Rnd_545x39_Mag_Tracer_Green_F",190,"true"},
		};
	};

	class 556x45
	{
	    displayName = "$STR_HG_AMMOSHOP_556x45";
		items[] =
		{
//vanilla 5.56x45 (TRG-20, TRG-21/EGLM, Mk20/C/EGLM, SDAR, SPAR-16/S)
		    	{"20Rnd_556x45_UW_mag",190,"true"},
		    	{"30Rnd_556x45_Stanag",190,"true"},
		    	{"30Rnd_556x45_Stanag_green",190,"true"},
		    	{"30Rnd_556x45_Stanag_red",190,"true"},
		    	{"30Rnd_556x45_Stanag_Tracer_Red",190,"true"},
		    	{"30Rnd_556x45_Stanag_Tracer_Green",190,"true"},
		    	{"30Rnd_556x45_Stanag_Tracer_Yellow",190,"true"},
		    	{"30Rnd_556x45_Stanag_Sand",190,"true"},
		    	{"30Rnd_556x45_Stanag_Sand_green",190,"true"},
		    	{"30Rnd_556x45_Stanag_Sand_red",190,"true"},
		    	{"30Rnd_556x45_Stanag_Sand_Tracer_Red",190,"true"},
		    	{"30Rnd_556x45_Stanag_Sand_Tracer_Green",190,"true"},
		    	{"30Rnd_556x45_Stanag_Sand_Tracer_Yellow",190,"true"},
//vanilla 5.56x45 (SPAR-16/S)
		    	{"150Rnd_556x45_Drum_Mag_F",550,"true"},
		    	{"150Rnd_556x45_Drum_Sand_Mag_F",550,"true"},
		    	{"150Rnd_556x45_Drum_Sand_Mag_Tracer_F",550,"true"},
		    	{"150Rnd_556x45_Drum_Green_Mag_F",550,"true"},
		    	{"150Rnd_556x45_Drum_Green_Mag_Tracer_F",550,"true"},
		    	{"150Rnd_556x45_Drum_Mag_Tracer_F",550,"true"},
//vanilla 5.56x45 (LIM-85)
		    	{"200Rnd_556x45_Box_F",700,"true"},
		    	{"200Rnd_556x45_Box_Red_F",700,"true"},
		    	{"200Rnd_556x45_Box_Tracer_F",700,"true"},
		    	{"200Rnd_556x45_Box_Tracer_Red_F",700,"true"},
		};
	};

	class 570x28
	{
	    displayName = "$STR_HG_AMMOSHOP_570x28";
		items[] =
		{
//vanilla 5.7mm (ADR-97)
		    	{"50Rnd_570x28_SMG_03",150,"true"},
		};
	};

	class 580x42
	{
	    displayName = "$STR_HG_AMMOSHOP_580x42";
		items[] =
		{
//vanilla 5.8mm (CAR-95, CAR-95-1, CAR-95 GL)
		    	{"30Rnd_580x42_Mag_F",190,"true"},
		    	{"30Rnd_580x42_Mag_Tracer_F",190,"true"},
		    	{"100Rnd_580x42_Mag_F",400,"true"},
		    	{"100Rnd_580x42_Mag_Tracer_F",400,"true"},
		    	{"100Rnd_580x42_hex_Mag_F",400,"true"},
		    	{"100Rnd_580x42_hex_Mag_Tracer_F",400,"true"},
		    	{"100Rnd_580x42_ghex_Mag_F",400,"true"},
		    	{"100Rnd_580x42_ghex_Mag_Tracer_F",400,"true"},

//vanilla 5.8mm (CAR-95, CAR-95-1, CAR-95 GL)
		    	{"30Rnd_580x42_Mag_F",190,"true"},
		    	{"30Rnd_580x42_Mag_Tracer_F",190,"true"},

		    	{"100Rnd_580x42_Mag_F",400,"true"},
		    	{"100Rnd_580x42_Mag_Tracer_F",400,"true"},
		    	{"100Rnd_580x42_hex_Mag_F",400,"true"},
		    	{"100Rnd_580x42_hex_Mag_Tracer_F",400,"true"},
		    	{"100Rnd_580x42_ghex_Mag_F",400,"true"},
		    	{"100Rnd_580x42_ghex_Mag_Tracer_F",400,"true"},
		};
	};

	class 65x39
	{
	    displayName = "$STR_HG_AMMOSHOP_65x39";
		items[] =
		{
//vanilla 6.5x39 (MX/C/M/SW/3GL)
		    	{"30Rnd_65x39_caseless_mag",120,"true"},
		    	{"30Rnd_65x39_caseless_khaki_mag",120,"true"},
		    	{"30Rnd_65x39_caseless_black_mag",120,"true"},
		    	{"30Rnd_65x39_caseless_mag_Tracer",50,"true"},
		    	{"30Rnd_65x39_caseless_khaki_mag_Tracer",120,"true"},
		    	{"30Rnd_65x39_caseless_black_mag_Tracer",120,"true"},
		    	{"30Rnd_65x39_caseless_msbs_mag",120,"true"},
		    	{"30Rnd_65x39_caseless_msbs_mag_Tracer",120,"true"},
		    	{"100Rnd_65x39_caseless_mag",500,"true"},
		    	{"100Rnd_65x39_caseless_khaki_mag",500,"true"},
		    	{"100Rnd_65x39_caseless_black_mag",500,"true"},
		    	{"100Rnd_65x39_caseless_mag_Tracer",500,"true"},
		    	{"100Rnd_65x39_caseless_khaki_mag_tracer",500,"true"},
		    	{"100Rnd_65x39_caseless_black_mag_tracer",500,"true"},
//vanilla 6.5x39 (Mk200)
		    	{"200Rnd_65x39_cased_Box",900,"true"},
		    	{"200Rnd_65x39_cased_Box_Tracer",900,"true"},
		    	{"200Rnd_65x39_cased_Box_Red",900,"true"},
		    	{"200Rnd_65x39_cased_Box_Tracer_Red",900,"true"},
		    	{"200Rnd_65x39_Belt_Tracer_Red",900,"true"},
		    	{"200Rnd_65x39_Belt_Tracer_Green",900,"true"},
		    	{"200Rnd_65x39_Belt_Tracer_Yellow",900,"true"},
//vanilla 6.5x39 (CMR-76)
		    	{"20Rnd_650x39_Cased_Mag_F",180,"true"},
//vanilla 6.5x39 (Katiba, Type 115)
		    	{"30Rnd_65x39_caseless_green",220,"true"},
		};
	};

	class 762x39
	{
	    displayName = "$STR_HG_AMMOSHOP_762x39";
		items[] =
		{
//vanilla 7.62x39 (Mk18 ABR, Mk-I EMR, Mk14, SPAR-17)
		    	{"20Rnd_762x51_Mag",180,"true"},
//vanilla 7.62x39 (Zafir)
		    	{"150Rnd_762x54_Box",700,"true"},
		    	{"150Rnd_762x54_Box_Tracer",700,"true"},
//vanilla 7.62x39 (Rahim)
		    	{"10Rnd_762x54_Mag",140,"true"},
//vanilla 7.62x39 (AK-12, AK-12 GL, AKM)
		    	{"30Rnd_762x39_Mag_F",220,"true"},
		    	{"30Rnd_762x39_Mag_Green_F",220,"true"},
		    	{"30Rnd_762x39_Mag_Tracer_F",220,"true"},
		    	{"30Rnd_762x39_Mag_Tracer_Green_F",220,"true"},
		    	{"30Rnd_762x39_AK12_Mag_F",220,"true"},
		    	{"30Rnd_762x39_AK12_Mag_Tracer_F",220,"true"},
		    	{"30rnd_762x39_AK12_Lush_Mag_F",220,"true"},
		    	{"30rnd_762x39_AK12_Lush_Mag_Tracer_F",220,"true"},
		    	{"30rnd_762x39_AK12_Arid_Mag_F",220,"true"},
		    	{"30rnd_762x39_AK12_Arid_Mag_Tracer_F",220,"true"},
		    	{"30Rnd_762x39_AK12_Mag_Tracer_F",220,"true"},
		    	{"75Rnd_762x39_Mag_F",400,"true"},
		    	{"75Rnd_762x39_Mag_Tracer_F",400,"true"},
		    	{"75Rnd_762x39_Mag_Tracer_F",400,"true"},
//vanilla 7.62x39 (RPK-12, AK-12, AK-12 GL, AKM)
		    	{"75rnd_762x39_AK12_Mag_F",400,"true"},
		    	{"75rnd_762x39_AK12_Mag_Tracer_F",400,"true"},
		    	{"75rnd_762x39_AK12_Lush_Mag_F",400,"true"},
		    	{"75rnd_762x39_AK12_Lush_Mag_Tracer_F",400,"true"},
		    	{"75rnd_762x39_AK12_Arid_Mag_F",400,"true"},
		    	{"75rnd_762x39_AK12_Arid_Mag_Tracer_F",400,"true"},

//vanilla 7.62x39 (AK-12)
		    	{"30Rnd_762x39_AK12_Mag_Green_F",400,"true"},
		    	{"30Rnd_762x39_AK12_Mag_Tracer_Green_F",400,"true"},
		};
	};

//vanilla 7.62x51 (Mk18 ABR, Mk-I EMR, Mk14, SPAR-17)
	class 762x51
	{
	    displayName = "$STR_HG_AMMOSHOP_762x51";
		items[] =
		{
		    	{"10Rnd_Mk14_762x51_Mag",140,"true"},
		};
	};
	
	class 762x54
	{
	    displayName = "$STR_HG_AMMOSHOP_762x54";
		items[] =
		{
		    	{"10Rnd_Mk14_762x51_Mag",140,"true"},
		};
	};

	class 9x18
	{
	    displayName = "$STR_HG_AMMOSHOP_9x18";
		items[] =
		{

		};
	};

	class 9x19
	{
	    displayName = "$STR_HG_AMMOSHOP_9x19";
		items[] =
		{

		};
	};

	class 9x21
	{
	    displayName = "$STR_HG_AMMOSHOP_9x21";
		items[] =
		{

//vanilla 9x21 (PM)
		    	{"10Rnd_9x21_Mag",110,"true"},

//vanilla 9x21 (PDW2000, P07, Rook-40)
		    	{"16Rnd_9x21_Mag",116,"true"},
		    	{"16Rnd_9x21_red_Mag",116,"true"},
		    	{"16Rnd_9x21_green_Mag",116,"true"},
		    	{"16Rnd_9x21_yellow_Mag",116,"true"},
		    	{"30Rnd_9x21_Mag",130,"true"},
		    	{"30Rnd_9x21_Red_Mag",130,"true"},
		    	{"30Rnd_9x21_Yellow_Mag",130,"true"},
		    	{"30Rnd_9x21_Green_Mag",130,"true"},
//vanilla 9x21 (Sting, Protector)
		    	{"30Rnd_9x21_Mag_SMG_02",130,"true"},
		};
	};

	class 9x39
	{
	    displayName = "$STR_HG_AMMOSHOP_9x39";
		items[] =
		{

		};
	};


	class 93x64
	{
	    displayName = "$STR_HG_AMMOSHOP_93x64";
		items[] =
		{
//vanilla 9.3mm (Navid)
		    	{"150Rnd_93x64_Mag",700,"true"},

//vanilla 9.3mm (Cyrus)
		    	{"10Rnd_93x64_DMR_05_Mag",140,"true"},
		};
	};

	class 40mm
	{
	    displayName = "$STR_HG_AMMOSHOP_40mm";
		items[] =
		{
//40mm (EGLM/GL)
		    	{"1Rnd_HE_Grenade_shell",100,"true"},
		    	{"3Rnd_HE_Grenade_shell",300,"true"},
		    	{"1Rnd_Smoke_Grenade_shell",100,"true"},
		    	{"3Rnd_Smoke_Grenade_shell",300,"true"},
		    	{"1Rnd_SmokeRed_Grenade_shell",100,"true"},
		    	{"3Rnd_SmokeRed_Grenade_shell",300,"true"},
		    	{"1Rnd_SmokeGreen_Grenade_shell",100,"true"},
		    	{"3Rnd_SmokeGreen_Grenade_shell",300,"true"},
		    	{"1Rnd_SmokeYellow_Grenade_shell",100,"true"},
		    	{"3Rnd_SmokeYellow_Grenade_shell",300,"true"},
		    	{"1Rnd_SmokePurple_Grenade_shell",100,"true"},
		    	{"3Rnd_SmokePurple_Grenade_shell",300,"true"},
		    	{"1Rnd_SmokeBlue_Grenade_shell",100,"true"},
		    	{"3Rnd_SmokeBlue_Grenade_shell",300,"true"},
		    	{"1Rnd_SmokeOrange_Grenade_shell",100,"true"},
		    	{"3Rnd_SmokeOrange_Grenade_shell",300,"true"},
		    	{"UGL_FlareWhite_F",150,"true"},
		    	{"3Rnd_UGL_FlareWhite_F",450,"true"},
		    	{"UGL_FlareGreen_F",150,"true"},
		    	{"3Rnd_UGL_FlareGreen_F",450,"true"},
		    	{"UGL_FlareRed_F",150,"true"},
		    	{"3Rnd_UGL_FlareRed_F",450,"true"},
		    	{"UGL_FlareYellow_F",150,"true"},
		    	{"3Rnd_UGL_FlareYellow_F",450,"true"},
		    	{"UGL_FlareCIR_F",150,"true"},
		    	{"3Rnd_UGL_FlareCIR_F",450,"true"},
		    	{"UGL_FlareGreen_F",150,"true"},
		    	{"3Rnd_UGL_FlareGreen_F",450,"true"},
		    	{"UGL_FlareGreen_F",150,"true"},
		    	{"3Rnd_UGL_FlareGreen_F",450,"true"},
		};
	};

	class FlareGun
	{
	    displayName = "$STR_HG_AMMOSHOP_FLAREGUN";
		items[] =
		{
//vanilla Flare Gun
		    	{"FlareWhite_F",50,"true"},
		    	{"FlareGreen_F",50,"true"},
		    	{"FlareRed_F",50,"true"},
		    	{"FlareYellow_F",50,"true"},
		};
	};
};

class HG_ExplosivesShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class ROCKETS
	{
	    displayName = "$STR_HG_EXPLOSIVESSHOP_ROCKETS";
		items[] =
		{

		    	{"RPG32_F",300,"true"},
		    	{"RPG32_HE_F",300,"true"},
		    	{"NLAW_F",300,"true"},
		    	{"RPG7_F",250,"true"},
		    	{"MRAWS_HEAT_F",400,"true"},
		    	{"MRAWS_HE_F",400,"true"},
		    	{"MRAWS_HEAT55_F",400,"true"},
		};
	};

	class MISSILES
	{
	    displayName = "$STR_HG_EXPLOSIVESSHOP_MISSILES";
		items[] =
		{

		    	{"Titan_AA",1200,"true"},
		    	{"Titan_AP",1200,"true"},
		    	{"Titan_AT",1200,"true"},

		    	{"Vorona_HEAT",1200,"true"},
		    	{"Vorona_HE",1200,"true"},

		};
	};

	class GRENADES
	{
	    displayName = "$STR_HG_EXPLOSIVESSHOP_GRENADES";
		items[] =
		{
		    	{"ACE_M14",350,"true"},
		    	{"rhs_mag_an_m14_th3",350,"true"},
		    	{"rhs_mag_an_m8hc",350,"true"},
		    	{"ACE_CTS9",500,"true"},
		    	{"rhs_grenade_m1939e_mag",175,"true"},
		    	{"rhs_grenade_m1939l_mag",200,"true"},
		    	{"rhs_grenade_m1939e_f_mag",175,"true"},
		    	{"rhs_grenade_m1939l_f_mag",200,"true"},
		    	{"rhs_mag_f1",200,"true"},
		    	{"rhs_mag_fakel",150,"true"},
		    	{"rhs_mag_fakels",150,"true"},
		    	{"I_IR_Grenade",250,"true"},
		    	{"O_IR_Grenade",250,"true"},
		    	{"I_E_IR_Grenade",250,"true"},
		    	{"B_IR_Grenade",250,"true"},
		    	{"O_R_IR_Grenade",250,"true"},
		    	{"rhs_grenade_m15_mag",350,"true"},
		    	{"rhs_mag_m18_green",125,"true"},
		    	{"rhs_mag_m18_purple",125,"true"},
		    	{"rhs_mag_m18_red",125,"true"},
		    	{"SmokeShellBlue",125,"true"},
		    	{"SmokeShellGreen",125,"true"},
		    	{"SmokeShellOrange",125,"true"},
		    	{"SmokeShellPurple",125,"true"},
		    	{"SmokeShellRed",125,"true"},
		    	{"SmokeShellYellow",125,"true"},
		    	{"rhs_mag_m18_yellow",125,"true"},
		    	{"HandGrenade",200,"true"},
		    	{"rhs_mag_m67",200,"true"},
		    	{"rhs_mag_m7a3_cs",300,"true"},
		    	{"rhs_grenade_anm8_mag",125,"true"},
		    	{"SmokeShell",125,"true"},
		    	{"ACE_M84",150,"true"},
		    	{"rhs_mag_mk84",150,"true"},
		    	{"rhs_grenade_mki_mag",150,"true"},
		    	{"rhs_grenade_mkii_mag",200,"true"},
		    	{"rhs_grenade_mkiiia1_mag",175,"true"},
		    	{"rhs_mag_mk3a2",175,"true"},
		    	{"rhs_grenade_nbhgr39_mag",200,"true"},
		    	{"rhs_grenade_nbhgr39B_mag",200,"true"},
		    	{"rhs_mag_plamyam",175,"true"},
		    	{"rhs_mag_rdg2_black",125,"true"},
		    	{"rhs_mag_rdg2_white",125,"true"},
		    	{"rhs_mag_rgd5",200,"true"},
		    	{"rhs_mag_rgn",200,"true"},
		    	{"rhs_mag_rgo",200,"true"},
		    	{"rhsgref_mag_rkg3em",300,"true"},
		    	{"rhs_charge_sb3kg_mag",2000,"true"},
		    	{"rhs_grenade_sthgr24_mag",200,"true"},
		    	{"rhs_grenade_sthgr24_heerfrag_mag",200,"true"},
		    	{"rhs_grenade_sthgr24_SSfrag_mag",200,"true"},
		    	{"rhs_grenade_sthgr24_x7bundle_mag",1400,"true"},
		    	{"rhs_charge_tnt_x2_mag",2000,"true"},
		    	{"MiniGrenade",175,"true"},
		    	{"rhs_grenade_khattabka_vog17_mag",200,"true"},
		    	{"rhs_grenade_khattabka_vog25_mag",200,"true"},
		    	{"rhs_mag_zarya2",175,"true"}
		};
	};

	class MINES
	{
	    displayName = "$STR_HG_EXPLOSIVESSHOP_MINES";
		items[] =
		{
		    	{"APERSMineDispenser_Mag",3000,"true"},
		    	{"rhs_mine_a200_bz_mag",800,"true"},
		    	{"rhs_mine_a200_dz35_mag",800,"true"},
		    	{"rhs_mine_glasmine43_bz_mag",800,"true"},
		    	{"rhs_mine_glasmine43_hz_mag",800,"true"},
		    	{"IEDLandBig_Remote_Mag",3000,"true"},
		    	{"IEDUrbanBig_Remote_Mag",3000,"true"},
		    	{"rhsusf_m112_mag",800,"true"},
		    	{"rhsusf_m112x4_mag",3000,"true"},
		    	{"DemoCharge_Remote_Mag",800,"true"},
		    	{"rhsusf_mine_m14_mag",800,"true"},
		    	{"ATMine_Range_Mag",800,"true"},
		    	{"SatchelCharge_Remote_Mag",3000,"true"},
		    	{"ClaymoreDirectionalMine_Remote_Mag",800,"true"},
		    	{"rhs_mine_M19_mag",800,"true"},
		    	{"APERSBoundingMine_Range_Mag",800,"true"},
		    	{"rhs_mine_m2a3b_trip_mag",800,"true"},
		    	{"rhs_mine_m2a3b_press_mag",800,"true"},
		    	{"rhs_mine_M3_tripwire_mag",800,"true"},
		    	{"rhs_mine_M3_pressure_mag",800,"true"},
		    	{"rhsusf_mine_m49a1_10m_mag",800,"true"},
		    	{"rhsusf_mine_m49a1_3m_mag",800,"true"},
		    	{"rhsusf_mine_m49a1_6m_mag",800,"true"},
		    	{"SLAMDirectionalMine_Wire_Mag",800,"true"},
		    	{"rhs_mine_M7A2_mag",800,"true"},
		    	{"rhs_mine_Mk2_tripwire_mag",800,"true"},
		    	{"rhs_mine_mk2_pressure_mag",800,"true"},
		    	{"rhsusf_mine_m49a1_10m_mag",800,"true"},
		    	{"rhsusf_mine_msk40p_blue_mag",800,"true"},
		    	{"rhsusf_mine_msk40p_green_mag",800,"true"},
		    	{"rhsusf_mine_msk40p_red_mag",800,"true"},
		    	{"rhsusf_mine_msk40p_white_mag",800,"true"},
		    	{"rhs_mine_ozm72_a_mag",800,"true"},
		    	{"rhs_mine_ozm72_b_mag",800,"true"},
		    	{"rhs_mine_ozm72_c_mag",800,"true"},
		    	{"rhs_mag_mine_pfm1",800,"true"},
		    	{"rhs_mine_pmn2_mag",800,"true"},
		    	{"APERSTripMine_Wire_Mag",800,"true"},
		    	{"rhs_mag_mine_ptm1",800,"true"},
		    	{"rhs_mine_smine35_press_mag",800,"true"},
		    	{"rhs_mine_smine35_trip_mag",800,"true"},
		    	{"rhs_mine_smine44_press_mag",800,"true"},
		    	{"rhs_mine_smine44_trip_mag",800,"true"},
		    	{"rhs_mine_sm320_green_mag",800,"true"},
		    	{"rhs_mine_sm320_red_mag",800,"true"},
		    	{"rhs_mine_sm320_white_mag",800,"true"},
		    	{"IEDLandSmall_Remote_Mag",2000,"true"},
		    	{"IEDUrbanSmall_Remote_Mag",2000,"true"},
		    	{"rhs_mine_stockmine43_2m_mag",800,"true"},
		    	{"rhs_mine_stockmine43_4m_mag",800,"true"},
		    	{"rhs_mine_TM43_mag",800,"true"},
		    	{"rhs_charge_M2tet_x2_mag",3000,"true"},
		    	{"rhs_mine_tm62m_mag",800,"true"},
		    	{"rhs_ec75_mag",800,"true"},
		    	{"rhs_ec200_sand_mag",800,"true"},
		    	{"rhs_ec200_mag",800,"true"},
		    	{"rhs_ec400_sand_mag",800,"true"},
		    	{"rhs_ec400_mag",800,"true"},
		    	{"rhs_ec75_sand_mag",800,"true"},
		    	{"ACE_FlareTripMine_Mag",800,"true"},
		    	{"APERSMine_Range_Mag",800,"true"},

		};
	};
};

class HG_BulletsExchangeBUY // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class Bullets
	{
	    displayName = "$STR_HG_BulletsExchange_Bullets";
		items[] =
		{
			{"greenmag_ammo_300win_basic_1Rnd",5,"true"},
			{"greenmag_ammo_338_basic_1Rnd",4,"true"},
			{"greenmag_ammo_408_basic_1Rnd",5,"true"},
			{"greenmag_ammo_45ACP_basic_1Rnd",1,"true"},
			{"greenmag_ammo_127x108_basic_1Rnd",5,"true"},
			{"greenmag_ammo_127x54_basic_1Rnd",4,"true"},
			{"greenmag_ammo_127x99_basic_1Rnd",5,"true"},
			{"greenmag_ammo_46x30_basic_1Rnd",1,"true"},
			{"greenmag_ammo_50BW_basic_1Rnd",1,"true"},
			{"greenmag_ammo_545x39_basic_1Rnd",3,"true"},
			{"greenmag_ammo_556x45_basic_1Rnd",3,"true"},
			{"greenmag_ammo_570x28_basic_1Rnd",1,"true"},
			{"greenmag_ammo_580x42_basic_1Rnd",3,"true"},
			{"greenmag_ammo_650x39_basic_1Rnd",4,"true"},
			{"greenmag_ammo_6x8_basic_1Rnd",4,"true"},
			{"greenmag_ammo_75x55_basic_1Rnd",4,"true"},
			{"greenmag_ammo_762x39_basic_1Rnd",4,"true"},
			{"greenmag_ammo_762x51_basic_1Rnd",4,"true"},
			{"greenmag_ammo_762x54_basic_1Rnd",4,"true"},
			{"greenmag_ammo_762x63_basic_1Rnd",4,"true"},
			{"greenmag_ammo_765x17_basic_1Rnd",4,"true"},
			{"greenmag_ammo_792x33_basic_1Rnd",4,"true"},
			{"greenmag_ammo_792x57_basic_1Rnd",4,"true"},
			{"greenmag_ammo_9x18_basic_1Rnd",1,"true"},
			{"greenmag_ammo_9x19_basic_1Rnd",1,"true"},
			{"greenmag_ammo_9x21_basic_1Rnd",1,"true"},
			{"greenmag_ammo_9x36_basic_1Rnd",3,"true"},
			{"greenmag_ammo_9x39_basic_1Rnd",3,"true"},
			{"greenmag_ammo_93x64_basic_1Rnd",4,"true"}
		};
	};

	class Belts
	{
	    displayName = "$STR_HG_BulletsExchange_Belts";
		items[] =
		{
			{"greenmag_beltlinked_338_basic_50",200,"true"},
			{"greenmag_beltlinked_338_basic_100",400,"true"},
			{"greenmag_beltlinked_338_basic_150",600,"true"},
			{"greenmag_beltlinked_338_basic_200",800,"true"},

			{"greenmag_beltlinked_127x108_basic_50",250,"true"},
			{"greenmag_beltlinked_127x108_basic_100",500,"true"},
			{"greenmag_beltlinked_127x108_basic_150",750,"true"},
			{"greenmag_beltlinked_127x108_basic_200",1000,"true"},

			{"greenmag_beltlinked_127x99_basic_50",250,"true"},
			{"greenmag_beltlinked_127x99_basic_100",500,"true"},
			{"greenmag_beltlinked_127x99_basic_150",750,"true"},
			{"greenmag_beltlinked_127x99_basic_200",1000,"true"},

			{"greenmag_beltlinked_556x45_basic_50",150,"true"},
			{"greenmag_beltlinked_556x45_basic_100",300,"true"},
			{"greenmag_beltlinked_556x45_basic_150",450,"true"},
			{"greenmag_beltlinked_556x45_basic_200",600,"true"},

			{"greenmag_beltlinked_650x39_basic_50",200,"true"},
			{"greenmag_beltlinked_650x39_basic_100",400,"true"},
			{"greenmag_beltlinked_650x39_basic_150",600,"true"},
			{"greenmag_beltlinked_650x39_basic_200",800,"true"},

			{"greenmag_beltlinked_762x51_basic_50",200,"true"},
			{"greenmag_beltlinked_762x51_basic_100",400,"true"},
			{"greenmag_beltlinked_762x51_basic_150",600,"true"},
			{"greenmag_beltlinked_762x51_basic_200",800,"true"},

			{"greenmag_beltlinked_762x54_basic_50",200,"true"},
			{"greenmag_beltlinked_762x54_basic_100",400,"true"},
			{"greenmag_beltlinked_762x54_basic_150",600,"true"},
			{"greenmag_beltlinked_762x54_basic_200",800,"true"},

			{"greenmag_beltlinked_792x57_basic_50",200,"true"},
			{"greenmag_beltlinked_792x57_basic_100",400,"true"},
			{"greenmag_beltlinked_792x57_basic_150",600,"true"},
			{"greenmag_beltlinked_792x57_basic_200",800,"true"},

			{"greenmag_beltlinked_93x64_basic_50",200,"true"},
			{"greenmag_beltlinked_93x64_basic_100",400,"true"},
			{"greenmag_beltlinked_93x64_basic_150",600,"true"},
			{"greenmag_beltlinked_93x64_basic_200",800,"true"},
		};
	};

	class Ammoboxes
	{
	    displayName = "$STR_HG_BulletsExchange_Ammoboxes";
		items[] =
		{
			{"greenmag_ammo_300win_basic_30Rnd",150,"true"},
			{"greenmag_ammo_338_basic_30Rnd",120,"true"},
			{"greenmag_ammo_408_basic_30Rnd",150,"true"},
			{"greenmag_ammo_45ACP_basic_30Rnd",30,"true"},
			{"greenmag_ammo_127x108_basic_30Rnd",150,"true"},
			{"greenmag_ammo_127x54_basic_30Rnd",120,"true"},
			{"greenmag_ammo_127x99_basic_30Rnd",150,"true"},
			{"greenmag_ammo_46x30_basic_30Rnd",30,"true"},
			{"greenmag_ammo_50BW_basic_30Rnd",30,"true"},
			{"greenmag_ammo_545x39_basic_30Rnd",90,"true"},
			{"greenmag_ammo_556x45_basic_30Rnd",90,"true"},
			{"greenmag_ammo_570x28_basic_30Rnd",30,"true"},
			{"greenmag_ammo_580x42_basic_30Rnd",30,"true"},
			{"greenmag_ammo_650x39_basic_30Rnd",120,"true"},
			{"greenmag_ammo_6x8_basic_30Rnd",120,"true"},
			{"greenmag_ammo_75x55_basic_30Rnd",120,"true"},
			{"greenmag_ammo_762x39_basic_30Rnd",120,"true"},
			{"greenmag_ammo_762x51_basic_30Rnd",120,"true"},
			{"greenmag_ammo_762x54_basic_30Rnd",120,"true"},
			{"greenmag_ammo_792x57_basic_30Rnd",120,"true"},
			{"greenmag_ammo_762x63_basic_30Rnd",120,"true"},
			{"greenmag_ammo_765x17_basic_30Rnd",120,"true"},
			{"greenmag_ammo_792x33_basic_30Rnd",120,"true"},
			{"greenmag_ammo_9x18_basic_30Rnd",30,"true"},
			{"greenmag_ammo_9x19_basic_30Rnd",30,"true"},
			{"greenmag_ammo_9x21_basic_30Rnd",30,"true"},
			{"greenmag_ammo_9x36_basic_30Rnd",90,"true"},
			{"greenmag_ammo_9x39_basic_30Rnd",90,"true"},
			{"greenmag_ammo_93x64_basic_30Rnd",120,"true"},
		};
	};
};

class HG_RHSBulletsExchangeBUY // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class RHSBullets
	{
	    displayName = "$STR_HG_BulletsExchange_RHSBullets";
		items[] =
		{
			{"greenmag_ammo_300win_basic_1Rnd",5,"true"},
			{"greenmag_ammo_46x30_basic_1Rnd",1,"true"},
			{"greenmag_ammo_50BMG_basic_1Rnd",1,"true"},
			{"greenmag_ammo_6x8_basic_1Rnd",4,"true"},
			{"greenmag_ammo_75x55_basic_1Rnd",4,"true"},
			{"greenmag_ammo_762x63_basic_1Rnd",4,"true"},
			{"greenmag_ammo_765x17_basic_1Rnd",4,"true"},
			{"greenmag_ammo_792x33_basic_1Rnd",4,"true"},
			{"greenmag_ammo_792x57_basic_1Rnd",4,"true"},
			{"greenmag_ammo_9x18_basic_1Rnd",1,"true"},
			{"greenmag_ammo_9x19_basic_1Rnd",1,"true"},
			{"greenmag_ammo_9x36_basic_1Rnd",3,"true"},
		};
	};

	class RHSAmmoboxes
	{
	    displayName = "$STR_HG_BulletsExchange_RHSAmmoboxes";
		items[] =
		{
			{"greenmag_ammo_300win_basic_30Rnd",150,"true"},
			{"greenmag_ammo_46x30_basic_30Rnd",30,"true"},
			{"greenmag_ammo_50BMG_basic_30Rnd",30,"true"},
			{"greenmag_ammo_6x8_basic_30Rnd",120,"true"},
			{"greenmag_ammo_75x55_basic_30Rnd",120,"true"},
			{"greenmag_ammo_762x63_basic_30Rnd",120,"true"},
			{"greenmag_ammo_765x17_basic_30Rnd",120,"true"},
			{"greenmag_ammo_792x33_basic_30Rnd",120,"true"},
			{"greenmag_ammo_792x57_basic_30Rnd",120,"true"},
			{"greenmag_ammo_9x18_basic_30Rnd",30,"true"},
			{"greenmag_ammo_9x19_basic_30Rnd",30,"true"},
			{"greenmag_ammo_9x36_basic_30Rnd",90,"true"},
		};
	};

	class RHSBelts
	{
	    displayName = "$STR_HG_BulletsExchange_RHSBelts";
		items[] =
		{
			{"greenmag_beltlinked_792x57_basic_50",200,"true"},
			{"greenmag_beltlinked_792x57_basic_100",400,"true"},
			{"greenmag_beltlinked_792x57_basic_150",600,"true"},
			{"greenmag_beltlinked_792x57_basic_200",800,"true"},
		};
	};
};
//VANILLA ========================================================================================================================================



//RHSAFRF ========================================================================================================================================
class HG_AttachmentsShop_RHSAFRF // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class Scopes
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_SCOPES";
		items[] =
		{
			{"rhs_acc_1p29",400,"true"},
			{"rhs_acc_1p63",100,"true"},
			{"rhs_acc_rakursPM",100,"true"},
			{"rhs_acc_1p78",280,"true"},
			{"rhs_acc_1p87",100,"true"},
			{"rhs_acc_1pn34",350,"true"},
			{"rhs_acc_1pn93_1",400,"true"},
			{"rhs_acc_1pn93_2",270,"true"},
			{"rhs_acc_dh520x56",1000,"true"},
			{"rhs_acc_ekp1",100,"true"},
			{"rhs_acc_ekp8_02",100,"true"},
			{"rhs_acc_ekp8_18",100,"true"},
			{"rhs_acc_nita",100,"true"},
			{"rhs_acc_okp7_picatinny",100,"true"},
			{"rhs_acc_okp7_dovetail",100,"true"},
			{"rhs_acc_pgo7v",270,"true"},
			{"rhs_acc_pgo7v2",270,"true"},
			{"rhs_acc_pgo7v3",270,"true"},
			{"hs_acc_pkas",100,"true"},
			{"rhs_acc_pso1m2",400,"true"},
			{"rhs_acc_pso1m21",400,"true"},
		};
	};
	
	class Suppressors
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_SCOPES";
		items[] =
		{
				{"rhs_acc_6p9_suppressor",300,"true"},
				{"rhs_acc_uuk",300,"true"},
				{"rhs_acc_dtk1l",300,"true"},
				{"rhs_acc_ak5",300,"true"},
				{"rhs_acc_dtk",300,"true"},
				{"rhs_acc_dtkakm",300,"true"},
				{"rhs_acc_dtk1983",300,"true"},
				{"rhs_acc_dtk1",300,"true"},
				{"rhs_acc_dtk1p",300,"true"},
				{"rhs_acc_dtk2",300,"true"},
				{"rhs_acc_dtk3",300,"true"},
				{"rhs_acc_dtk4short",300,"true"},
				{"rhs_acc_dtk4screws",300,"true"},
				{"rhs_acc_dtk4long",300,"true"},
				{"rhs_acc_pbs1",300,"true"},
				{"rhs_acc_pbs4",300,"true"},
				{"rhs_acc_pgs64",300,"true"},
				{"rhs_acc_pgs64_74u",300,"true"},
				{"rhs_acc_pgs64_74un",300,"true"},
				{"rhs_acc_dtkrpk",300,"true"},
				{"rhs_acc_tgpa",300,"true"},
				{"rhs_acc_tgpv",300,"true"},
				{"rhs_acc_tgpv2",300,"true"},
		};
	};
	
		class Underbarrel
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_UNDERBARREL";
		items[] =
		{
			{"rhs_acc_grip_ffg2",300,"true"},
			{"rhs_acc_harris_swivel",300,"true"},
			{"rhs_acc_grip_rk2",300,"true"},
			{"rhs_acc_grip_rk6",300,"true"},
		};
	};
	
		class Rail
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_RAIL";
		items[] =
		{
			{"rhs_acc_2dpZenit",300,"true"},
			{"rhs_acc_2dpZenit_ris",300,"true"},
			{"rhs_item_flightrecorder",300,"true"},
			{"rhs_acc_perst1ik",300,"true"},
			{"rhs_acc_perst1ik_ris",300,"true"},
			{"rhs_acc_perst3",300,"true"},
			{"rhs_acc_perst3_top",300,"true"},
			{"rhs_acc_perst3_2dp_h",300,"true"},
			{"rhs_acc_perst3_2dp_light_h",300,"true"},
		};
	};
};

class HG_AmmoShop_RHSAFRF // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class 12Gauge
	{
	    displayName = "$STR_HG_AMMOSHOP_12GAUGE";
		items[] =
		{

		};
	};

	class 12point7
	{
	    displayName = "$STR_HG_AMMOSHOP_12POINT7";
		items[] =
		{

		};
	};

	class 300
	{
	    displayName = "$STR_HG_AMMOSHOP_300";
		items[] =
		{

		};
	};

	class 338
	{
	    displayName = "$STR_HG_AMMOSHOP_338";
		items[] =
		{
//RHS 338 (T-5000)
		    	{"rhs_5Rnd_338lapua_t5000",120,"true"},
		};
	};

	class 408
	{
	    displayName = "$STR_HG_AMMOSHOP_408";
		items[] =
		{

		};
	};

	class 45ACP
	{
	    displayName = "$STR_HG_AMMOSHOP_45ACP";
		items[] =
		{

		};
	};

	class 46x30
	{
	    displayName = "$STR_HG_AMMOSHOP_46x30";
		items[] =
		{

		};
	};

	class 50BW
	{	    displayName = "$STR_HG_AMMOSHOP_50BW";
		items[] =
		{

		};
	};

	class 545x39
	{
	    displayName = "$STR_HG_AMMOSHOP_545x39";
		items[] =
		{
				{"rhs_30Rnd_545x39_7N10_2mag_AK",300,"true"},
				{"rhs_30Rnd_545x39_7N10_2mag_camo_AK",300,"true"},
				{"rhs_30Rnd_545x39_7N10_2mag_desert_AK",300,"true"},
				{"rhs_30Rnd_545x39_7N10_2mag_plum_AK",300,"true"},
				{"rhs_30Rnd_545x39_AK_green",300,"true"},
				{"rhs_30Rnd_545x39_7N6_AK",300,"true"},
				{"rhs_30Rnd_545x39_7N6M_AK",300,"true"},
				{"rhs_30Rnd_545x39_7N10_camo_AK",300,"true"},
				{"rhs_30Rnd_545x39_7N22_camo_AK",300,"true"},
				{"rhs_30Rnd_545x39_7N10_desert_AK",300,"true"},
				{"rhs_30Rnd_545x39_7N22_desert_AK",300,"true"},
				{"rhs_30Rnd_545x39_7N6_green_AK",300,"true"},
				{"rhs_30Rnd_545x39_7N6M_green_AK",300,"true"},
				{"rhs_30Rnd_545x39_AK_plum_green",300,"true"},
				{"rhs_30Rnd_545x39_7N10_plum_AK",300,"true"},
				{"rhs_30Rnd_545x39_7N22_plum_AK",300,"true"},
				{"rhs_30Rnd_545x39_7N6M_plum_AK",300,"true"},
				{"rhs_30Rnd_545x39_7N10_AK",300,"true"},
				{"rhs_30Rnd_545x39_7N22_AK",300,"true"},
				{"rhs_30Rnd_545x39_7U1_AK",300,"true"},
				{"rhs_45Rnd_545X39_AK_Green",300,"true"},
				{"rhs_45Rnd_545X39_7N10_AK",300,"true"},
				{"rhs_45Rnd_545X39_7N22_AK",300,"true"},
				{"rhs_45Rnd_545X39_7N6_AK",300,"true"},
				{"rhs_45Rnd_545X39_7N6M_AK",300,"true"},
				{"rhs_45Rnd_545X39_7U1_AK",300,"true"},
				{"rhs_60Rnd_545X39_AK_Green",300,"true"},
				{"rhs_60Rnd_545X39_7N10_AK",300,"true"},
				{"rhs_60Rnd_545X39_7N22_AK",300,"true"},
				{"rhs_60Rnd_545X39_7U1_AK",300,"true"},
		};
	};

	class 556x45
	{
	    displayName = "$STR_HG_AMMOSHOP_556x45";
		items[] =
		{

		};
	};

	class 570x28
	{
	    displayName = "$STR_HG_AMMOSHOP_570x28";
		items[] =
		{

		};
	};

	class 580x42
	{
	    displayName = "$STR_HG_AMMOSHOP_580x42";
		items[] =
		{

		};
	};

	class 65x39
	{
	    displayName = "$STR_HG_AMMOSHOP_65x39";
		items[] =
		{

		};
	};

	class 762x39
	{
	    displayName = "$STR_HG_AMMOSHOP_762x39";
		items[] =
		{
		    	{"rhs_10Rnd_762x39mm",300,"true"},
				{"rhs_10Rnd_762x39mm_89",300,"true"},
				{"rhs_10Rnd_762x39mm_tracer",300,"true"},
				{"rhs_10Rnd_762x39mm_U",300,"true"},
				{"rhs_30Rnd_762x39mm_polymer",300,"true"},
				{"rhs_30Rnd_762x39mm_polymer_89",300,"true"},
				{"rhs_30Rnd_762x39mm_polymer_tracer",300,"true"},
				{"rhs_30Rnd_762x39mm_polymer_U",300,"true"},
				{"rhs_30Rnd_762x39mm_bakelite",300,"true"},
				{"rhs_30Rnd_762x39mm_bakelite_89",300,"true"},
				{"rhs_30Rnd_762x39mm_bakelite_tracer",300,"true"},
				{"rhs_30Rnd_762x39mm_bakelite_U",300,"true"},
				{"rhs_30Rnd_762x39mm",300,"true"},
				{"rhs_30Rnd_762x39mm_89",300,"true"},
				{"rhs_30Rnd_762x39mm_tracer",300,"true"},
				{"rhs_30Rnd_762x39mm_U",300,"true"},
				{"rhs_75Rnd_762x39mm",300,"true"},
				{"rhs_75Rnd_762x39mm_89",300,"true"},
				{"rhs_75Rnd_762x39mm_tracer",300,"true"},
		};
	};

	class 762x51
	{
	    displayName = "$STR_HG_AMMOSHOP_762x51";
		items[] =
		{

		};
	};

	class 762x54
	{
	    displayName = "$STR_HG_AMMOSHOP_762x54";
		items[] =
		{
				{"rhs_100Rnd_762x54mmR",300,"true"},
				{"rhs_100Rnd_762x54mmR_7BZ3",300,"true"},
				{"rhs_100Rnd_762x54mmR_7N13",300,"true"},
				{"rhs_100Rnd_762x54mmR_7N26",300,"true"},
				{"rhs_100Rnd_762x54mmR_green",300,"true"},
				{"rhs_10Rnd_762x54mmR_7N1",300,"true"},
				{"rhs_10Rnd_762x54mmR_7N14",300,"true"},
		};
	};

	class 9x18
	{
	    displayName = "$STR_HG_AMMOSHOP_9x18";
		items[] =
		{
//RHS 6P9
		    	{"rhs_mag_9x18_8_57N181S",108,"true"}
		};
	};

	class 9x19
	{
	    displayName = "$STR_HG_AMMOSHOP_9x19";
		items[] =
		{
//RHS PP-2000
				{"rhs_mag_9x19mm_7n21_20",300,"true"},
				{"rhs_mag_9x19mm_7n31_20",300,"true"},
				{"rhs_mag_9x19mm_7n21_44",300,"true"},
				{"rhs_mag_9x19mm_7n31_44",300,"true"},				
		};
	};

	class 9x21
	{
	    displayName = "$STR_HG_AMMOSHOP_9x21";
		items[] =
		{
//RHS 9x21 (6P53)
		    	{"rhs_18rnd_9x21mm_7N28",118,"true"}
		};
	};

	class 9x39
	{
	    displayName = "$STR_HG_AMMOSHOP_9x39";
		items[] =
		{
				{"rhs_10rnd_9x39mm_SP5",300,"true"},
				{"rhs_10rnd_9x39mm_SP6",300,"true"},
				{"rhs_20rnd_9x39mm_SP5",300,"true"},
				{"rhs_20rnd_9x39mm_SP6",300,"true"},
		};
	};


	class 93x64
	{
	    displayName = "$STR_HG_AMMOSHOP_93x64";
		items[] =
		{

		};
	};

	class 40mm
	{
	    displayName = "$STR_HG_AMMOSHOP_40mm";
		items[] =
		{
				{"rhs_GDM40",180,"true"},
				{"rhs_GRD40_Green",180,"true"},
				{"rhs_GRD40_Red",180,"true"},
				{"rhs_GRD40_White",180,"true"},
				{"rhs_VG40MD",180,"true"},
				{"rhs_VG40OP_green",180,"true"},
				{"rhs_VF40OP_red",180,"true"},
				{"rhs_VG40OP_white",180,"true"},
				{"rhs_VG40SZ",180,"true"},
				{"rhs_VG40TB",180,"true"},
				{"rhs_VOG25",180,"true"},
				{"rhs_VOG25P",180,"true"},
		};
	};
};

class HG_ExplosivesShop_RHSAFRF // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class ROCKETS
	{
	    displayName = "$STR_HG_EXPLOSIVESSHOP_ROCKETS";
		items[] =
		{
		    	{"rhs_rpg7_OG7V_mag",300,"true"},
				{"rhs_rpg7_PG7V_mag",300,"true"},
				{"rhs_rpg7_PG7VL_mag",300,"true"},
				{"rhs_rpg7_PG7VM_mag",300,"true"},
				{"rhs_rpg7_PG7VR_mag",300,"true"},
				{"rhs_rpg7_PG7VS_mag",300,"true"},
				{"rhs_rpg7_TBG7V_mag",300,"true"},
				{"rhs_rpg7_type69_airburst_mag",300,"true"},
		};
	};

	class MISSILES
	{
	    displayName = "$STR_HG_EXPLOSIVESSHOP_MISSILES";
		items[] =
		{
		    	{"rhs_mag_9k38_rocket",300,"true"},
		};
	};

	class GRENADES
	{
	    displayName = "$STR_HG_EXPLOSIVESSHOP_GRENADES";
		items[] =
		{

		};
	};

	class MINES
	{
	    displayName = "$STR_HG_EXPLOSIVESSHOP_MINES";
		items[] =
		{

		};
	};
};
//RHSAFRF ========================================================================================================================================



//RHSUSF =======================================================================================================================================
class HG_RHSUSF_AttachmentsShop 
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class Scopes
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_SCOPES";
		items[] =
		{
			{"rhsusf_acc_anpas13gv1",1250,"true"},
			{"rhsusf_acc_ACOG2_USMC",400,"true"},
			{"rhsusf_acc_ACOG3_USMC",400,"true"},
			{"rhsusf_acc_ACOG_USMC",400,"true"},
			{"rhsusf_acc_anpvs27",850,"true"},
			{"rhsusf_acc_EOTECH",100,"true"},
			{"rhsusf_acc_g33_T1",400,"true"},
			{"rhsusf_acc_g33_xps3",400,"true"},
			{"rhsusf_acc_g33_xps3_tan",400,"true"},
			{"rhsusf_acc_ELCAN",200,"true"},
			{"rhsusf_acc_elcan_ard",200,"true"},
			{"rhsusf_acc_acog2",200,"true"},
			{"rhsusf_acc_acog3",200,"true"},
			{"rhsusf_acc_m2a1",100,"true"},
			{"rhsusf_acc_eotech_552",100,"true"},
			{"rhsusf_acc_eotech_552_d",100,"true"},
			{"rhsusf_acc_eotech_552_wd",100,"true"},
			{"rhsusf_acc_compm4",100,"true"},
			{"rhsusf_acc_m8541_d",500,"true"},	
			{"rhsusf_acc_m8541_low",500,"true"},
			{"rhsusf_acc_m8541_low_d",500,"true"},
			{"rhsusf_acc_m8541_low_wd",500,"true"},
			{"rhsusf_acc_m8541_mrds",500,"true"},
			{"rhsusf_acc_m8541_wd",500,"true"},
			{"rhsusf_acc_premier_low",500,"true"},
			{"rhsusf_acc_premier",500,"true"},
			{"rhsusf_acc_leupoldmk4",400,"true"},
			{"rhsusf_acc_leupoldmk4_2",400,"true"},
			{"rhsusf_acc_leupoldmk4_d",400,"true"},
			{"rhsusf_acc_leupoldmk4_wd",400,"true"},
			{"rhsusf_acc_leupoldmk4_2_d",400,"true"},
			{"rhsusf_acc_leupoldmk4_2_mrds",400,"true"},
			{"rhsusf_acc_mrds_c",100,"true"},
			{"rhsusf_acc_nxs_3515x50_md",500,"true"},
			{"rhsusf_acc_nxs_3515x50f1_h58",500,"true"},
			{"rhsusf_acc_nxs_3515x50f1_md",500,"true"},
			{"rhsusf_acc_nxs_3515x50_sun",500,"true"},
			{"rhsusf_acc_nxs_3515x50_md_sun",500,"true"},
			{"rhsusf_acc_nxs_5522x56_md",500,"true"},
			{"rhsusf_acc_nxs_5522x56_md_sun",500,"true"},
			{"rhsusf_acc_rm05",100,"true"},
			{"rhsusf_acc_rx01_nofilter",100,"true"},
			{"rhsusf_acc_rx01",100,"true"},
			{"rhsusf_acc_rx01_nofilter_tan",100,"true"},
			{"rhsusf_acc_rx01_tan",100,"true"},	
			{"rhsusf_acc_su230",200,"true"},
			{"rhsusf_acc_su230_c",200,"true"},
			{"rhsusf_acc_su230_mrds",200,"true"},
			{"rhsusf_acc_su230_mrds_c",200,"true"},
			{"rhsusf_acc_su230a",200,"true"},
			{"rhsusf_acc_su230a_c",200,"true"},
			{"rhsusf_acc_su230a_mrds",200,"true"},
			{"rhsusf_acc_su230a_mrds_c",200,"true"},
			{"rhsusf_acc_acog_mdo",200,"true"},
			{"rhsusf_acc_t1_high",100,"true"},
			{"rhsusf_acc_t1_low",100,"true"},
			{"rhsusf_acc_acog_rmr",200,"true"},
			{"rhsusf_acc_acog_d",200,"true"},
			{"rhsusf_acc_acog_wd",200,"true"},			
			{"rhsusf_acc_eotech_xps3",200,"true"},
		};
	};
	
	class Suppressors
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_SUPPRESSORS";
		items[] =
		{
			{"rhsusf_acc_nt4_black",1000,"true"},
			{"rhsusf_acc_nt4_tan",1000,"true"},
			{"rhsusf_acc_rotex5_grey",1000,"true"},
			{"rhsusf_acc_rotex5_tan",1000,"true"},
			{"rhsusf_acc_sf3p556",1000,"true"},
			{"rhsusf_acc_sfmb556",1000,"true"},
			{"rhsusf_acc_rotex5_tan",1000,"true"},
			{"rhsusf_acc_aac_scarh_silencer",1000,"true"},
			{"rhsusf_acc_aac_m14dcqd_silencer",1000,"true"},
			{"rhsusf_acc_aac_m14dcqd_silencer_d",1000,"true"},
			{"rhsusf_acc_aac_m14dcqd_silencer_wd",1000,"true"},
			{"rhsusf_acc_m14_flashsuppresor",1000,"true"},
			{"rhsusf_acc_omega9k",1000,"true"},
			{"rhsgref_sdn6_suppressor",1000,"true"},
		};
	};
	
		class Underbarrel
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_UNDERBARREL";
		items[] =
		{
			{"rhs_acc_harris_swivel",175,"true"},
			{"rhsusf_acc_harris_bipod",175,"true"},
			{"rhsusf_acc_grip2",175,"true"},
			{"rhsusf_acc_grip2_tan",175,"true"},
			{"rhsusf_acc_grip2_wd",175,"true"},
			{"rhsusf_acc_grip2",175,"true"},
			{"rhs_acc_grip_ffg2",175,"true"},
			{"rhsusf_acc_grip2",175,"true"},
			{"rhsusf_acc_grip1",175,"true"},
			{"rhsusf_acc_kac_grip",175,"true"},
			{"rhs_acc_grip_rk2",175,"true"},
			{"rhs_acc_grip_rk6",175,"true"},
			{"rhsusf_acc_rvg_blk",175,"true"},
			{"rhsusf_acc_rvg_de",175,"true"},
			{"rhsusf_acc_tacsac_blk",175,"true"},
			{"rhsusf_acc_tacsac_blue",175,"true"},
			{"rhsusf_acc_tacsac_tan",175,"true"},
			{"rhsusf_acc_tacsac_blk",175,"true"},
			{"rhsusf_acc_tdstubby_blk",175,"true"},
			{"rhsusf_acc_tdstubby_tan",175,"true"},
			{"rhsusf_acc_grip3",175,"true"},
			{"rhsusf_acc_grip3_tan",175,"true"},
		};
	};
	
		class Rail
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_RAIL";
		items[] =
		{
			{"rhsusf_acc_wmx_bk",50,"true"},
			{"rhsusf_acc_anpeq15side",200,"true"},
			{"rhsusf_acc_pointer_IR",200,"true"},
			{"rhsusf_acc_anpeq15_bk_top",200,"true"},
		};
	};
};

class HG_AmmoShop_RHSUSF // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class 12Gauge
	{
	    displayName = "$STR_HG_AMMOSHOP_12GAUGE";
		items[] =
		{
//vanilla 12 Gauge
		    	{"2Rnd_12Gauge_Pellets",8,"true"},
		    	{"2Rnd_12Gauge_Slug",8,"true"},
		    	{"6Rnd_12Gauge_Pellets",32,"true"},
		    	{"6Rnd_12Gauge_Slug",32,"true"},
		    	{"15Rnd_12Gauge_Pellets",160,"true"},
		    	{"15Rnd_12Gauge_Slug",160,"true"},
		};
	};

	class 12point7
	{
	    displayName = "$STR_HG_AMMOSHOP_12POINT7";
		items[] =
		{

		};
	};

	class 300
	{
	    displayName = "$STR_HG_AMMOSHOP_300";
		items[] =
		{
//RHS 300 (M2010 ESR)
		    	{"rhsusf_5Rnd_300winmag_xm2010",125,"true"},
		};
	};

	class 338
	{
	    displayName = "$STR_HG_AMMOSHOP_338";
		items[] =
		{

		};
	};

	class 408
	{
	    displayName = "$STR_HG_AMMOSHOP_408";
		items[] =
		{

		};
	};

	class 45ACP
	{
	    displayName = "$STR_HG_AMMOSHOP_45ACP";
		items[] =
		{
//RHS 45ACP (M1911)
		    	{"rhsusf_mag_7x45acp_MHP",107,"true"},			
		};
	};

	class 46x30
	{
	    displayName = "$STR_HG_AMMOSHOP_46x30";
		items[] =
		{
		    	{"rhsusf_mag_40Rnd_46x30_AP",140,"true"},
		    	{"rhsusf_mag_40Rnd_46x30_FMJ",140,"true"},
		    	{"rhsusf_mag_40Rnd_46x30_JHP",140,"true"},
		};
	};

	class 50BW
	{
	    displayName = "$STR_HG_AMMOSHOP_50BW";
		items[] =
		{
//RHS 50BMG (M107)
		    	{"rhsusf_mag_10Rnd_STD_50BMG_M33",110,"true"},
				{"rhsusf_mag_10Rnd_STD_50BMG_mk211",110,"true"},
		};
	};

	class 545x39
	{
	    displayName = "$STR_HG_AMMOSHOP_545x39";
		items[] =
		{
			
		};
	};

	class 556x45
	{
	    displayName = "$STR_HG_AMMOSHOP_556x45";
		items[] =
		{
//RHS 5.56x45 
		    	{"rhsusf_200Rnd_556x45_box",700,"true"},
		    	{"rhsusf_200Rnd_556x45_soft_pouch_coyote",700,"true"},
		    	{"rhsusf_200Rnd_556x45_soft_pouch_ucp",700,"true"},
		    	{"rhsusf_200Rnd_556x45_soft_pouch",700,"true"},
		    	{"rhsusf_100Rnd_556x45_soft_pouch",400,"true"},
		    	{"rhsusf_100Rnd_556x45_soft_pouch_ucp",400,"true"},
		    	{"rhsusf_100Rnd_556x45_soft_pouch_coyote",400,"true"},
				{"rhs_mag_100Rnd_556x45_M855_cmag",400,"true"},
				{"rhs_mag_100Rnd_556x45_M855_cmag_mixed",400,"true"},
				{"rhs_mag_100Rnd_556x45_M855A1_cmag",400,"true"},
				{"rhs_mag_100Rnd_556x45_M855A1_cmag_mixed",400,"true"},
				{"rhs_mag_100Rnd_556x45_Mk262_cmag",400,"true"},
				{"rhs_mag_100Rnd_556x45_Mk318_cmag",400,"true"},
				{"rhs_mag_20Rnd_556x45_M193_2MAG_Stanag",400,"true"},
				{"rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red",400,"true"},
				{"rhs_mag_20Rnd_556x45_M193_Stanag",700,"true"},
				{"rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red",400,"true"},
				{"rhs_mag_20Rnd_556x45_M200_Stanag",400,"true"},
				{"rhs_mag_20Rnd_556x45_M855_Stanag",400,"true"},
				{"rhs_mag_20Rnd_556x45_M855A1_Stanag",400,"true"},
				{"rhs_mag_20Rnd_556x45_Mk262_Stanag",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855A1_EPM",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855_PMAG",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855_PMAG_Tan",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855A1_PMAG",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855_PMAG_Tracer_Red",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855_PMAG_Tan_Tracer_Red",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan_Tracer_Red",400,"true"},
				{"rhs_mag_30Rnd_556x45_Mk262_PMAG",400,"true"},
				{"rhs_mag_30Rnd_556x45_Mk262_PMAG_Tan",400,"true"},
				{"rhs_mag_30Rnd_556x45_Mk318_PMAG",400,"true"},			
				{"rhs_mag_30Rnd_556x45_Mk318_PMAG_Tan",400,"true"},
				{"rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull",400,"true"},
				{"rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger",400,"true"},
				{"rhs_mag_30Rnd_556x45_Mk318_SCAR",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855_Stanag_Pull",400,"true"},
				{"rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",400,"true"},
				{"rhsusf_100Rnd_556x45_M200_soft_pouch_coyote",400,"true"},
				{"rhsusf_100Rnd_556x45_M200_soft_pouch_ucp",400,"true"},
				{"rhsusf_100Rnd_556x45_M200_soft_pouch",400,"true"},
				{"rhsusf_100Rnd_556x45_M855_soft_pouch_coyote",400,"true"},
				{"rhsusf_100Rnd_556x45_M855_soft_pouch_ucp",400,"true"},
				{"rhsusf_100Rnd_556x45_M855_soft_pouch",400,"true"},
				{"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_coyote",400,"true"},
				{"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch_ucp",400,"true"},
				{"rhsusf_100Rnd_556x45_M855_mixed_soft_pouch",400,"true"},
				{"rhsusf_100Rnd_556x45_soft_pouch_coyote",400,"true"},
				{"rhsusf_100Rnd_556x45_soft_pouch_ucp",400,"true"},
				{"rhsusf_100Rnd_556x45_soft_pouch",400,"true"},
				{"rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote",400,"true"},
				{"rhsusf_100Rnd_556x45_mixed_soft_pouch_ucp",400,"true"},
				{"rhsusf_100Rnd_556x45_mixed_soft_pouch",400,"true"},
				{"rhsusf_100Rnd_556x45_M995_soft_pouch_coyote",400,"true"},
				{"rhsusf_100Rnd_556x45_M995_soft_pouch_ucp",400,"true"},
				{"rhsusf_100Rnd_556x45_M995_soft_pouch",400,"true"},
				{"rhsusf_200rnd_556x45_M855_box",400,"true"},
				{"rhsusf_200rnd_556x45_M855_mixed_box",400,"true"},
				{"rhsusf_200Rnd_556x45_box",400,"true"},
				{"rhsusf_200rnd_556x45_mixed_box",400,"true"},
				{"rhsusf_200Rnd_556x45_M855_soft_pouch_ucp",400,"true"},
				{"rhsusf_200Rnd_556x45_M855_soft_pouch",400,"true"},
				{"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote",400,"true"},
				{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp",400,"true"},
				{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch",400,"true"},
				{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_coyote",400,"true"},
				{"rhsusf_200Rnd_556x45_soft_pouch_ucp",400,"true"},
				{"rhsusf_200Rnd_556x45_soft_pouch",400,"true"},
				{"rhsusf_200Rnd_556x45_soft_pouch_coyote",400,"true"},
				{"rhsusf_200Rnd_556x45_mixed_soft_pouch_ucp",400,"true"},
				{"rhsusf_200Rnd_556x45_mixed_soft_pouch",400,"true"},
				{"rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote",400,"true"},
		};
	};

	class 570x28
	{
	    displayName = "$STR_HG_AMMOSHOP_570x28";
		items[] =
		{

		};
	};

	class 580x42
	{
	    displayName = "$STR_HG_AMMOSHOP_580x42";
		items[] =
		{

		};
	};

	class 65x39
	{
	    displayName = "$STR_HG_AMMOSHOP_65x39";
		items[] =
		{

		};
	};

	class 762x39
	{
	    displayName = "$STR_HG_AMMOSHOP_762x39";
		items[] =
		{

		};
	};


	class 762x51
	{
	    displayName = "$STR_HG_AMMOSHOP_762x51";
		items[] =
		{
		    	{"rhsusf_20Rnd_762x51_m118_special_Mag",115,"true"},
		    	{"rhsusf_20Rnd_762x51_m62_Mag",400,"true"},
		    	{"rhsusf_20Rnd_762x51_m80_Mag",250,"true"},
		    	{"rhsusf_20Rnd_762x51_m993_Mag",180,"true"},
		    	{"rhsusf_100Rnd_762x51_m61_ap",180,"true"},
				{"rhsusf_100Rnd_762x51_m62_m62_tracer",180,"true"},
				{"rhsusf_100Rnd_762x51",180,"true"},
				{"rhsusf_100Rnd_762x51_m680a1epr",180,"true"},
				{"rhsusf_50Rnd_762x51_m82_blank",180,"true"},
				{"rhsusf_50Rnd_762x51_m62_tracer",180,"true"},
				{"rhsusf_50Rnd_762x51",180,"true"},
				{"rhsusf_50Rnd_762x51_m680a1epr",180,"true"},
				{"rhsusf_10Rnd_762x51_m118_special_Mag",180,"true"},
				{"rhsusf_10Rnd_762x51_m62_Mag",180,"true"},
				{"rhsusf_10Rnd_762x51_m993_Mag",180,"true"},
				{"rhsusf_5Rnd_762x51_AICS_m118_special_Mag",180,"true"},
				{"rhsusf_5Rnd_762x51_AICS_m62_Mag",180,"true"},
				{"rhsusf_5Rnd_762x51_AICS_m993_Mag",180,"true"},
				{"rhsusf_20Rnd_762x51_SR25_m118_special_Mag",180,"true"},
				{"rhsusf_20Rnd_762x51_SR25_m62_Mag",180,"true"},
				{"rhsusf_20Rnd_762x51_SR25_m993_Mag",180,"true"},
				{"rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",180,"true"},
				{"rhs_mag_20Rnd_SCAR_762x51_m118_special",180,"true"},
				{"rhs_mag_20Rnd_SCAR_762x51_m61_ap",180,"true"},
				{"rhs_mag_20Rnd_SCAR_762x51_m62_tracer",180,"true"},
				{"rhs_mag_20Rnd_SCAR_762x51_m80_ball",180,"true"},
				{"rhs_mag_20Rnd_SCAR_762x51_m80a1_epr",180,"true"},
				{"rhs_mag_20Rnd_SCAR_762x51_mk316_special",180,"true"},
		};
	};

	class 9x18
	{
	    displayName = "$STR_HG_AMMOSHOP_9x18";
		items[] =
		{

		};
	};

	class 9x19
	{
	    displayName = "$STR_HG_AMMOSHOP_9x19";
		items[] =
		{
			{"rhsusf_mag_17Rnd_9x19_FMJ",180,"true"},
			{"rhsusf_mag_17Rnd_9x19_JHP",180,"true"},
		};
	};

	class 9x21
	{
	    displayName = "$STR_HG_AMMOSHOP_9x21";
		items[] =
		{

		};
	};

	class 9x39
	{
	    displayName = "$STR_HG_AMMOSHOP_9x39";
		items[] =
		{


		};
	};


	class 93x64
	{
	    displayName = "$STR_HG_AMMOSHOP_93x64";
		items[] =
		{

		};
	};

	class 40mm
	{
	    displayName = "$STR_HG_AMMOSHOP_40mm";
		items[] =
		{
			{"rhs_mag_M397_HET",180,"true"},
			{"rhs_mag_M433_HEDP",180,"true"},
			{"rhs_mag_M441_HE",180,"true"},
			{"rhs_mag_M576",180,"true"},
			{"rhs_mag_M583A1_white",180,"true"},
			{"rhs_mag_M585_white_cluster",180,"true"},
			{"rhs_mag_M661_green",180,"true"},
			{"rhs_mag_M662_red",180,"true"},
			{"rhs_mag_M663_green_cluster",180,"true"},
			{"rhs_mag_M664_red_cluster",180,"true"},
			{"rhs_mag_m713_Red",180,"true"},
			{"rhs_mag_m714_White",180,"true"},
			{"rhs_mag_m715_Green",180,"true"},
			{"rhs_mag_m716_yellow",180,"true"},
		};
	};
};
//RHSUSF =======================================================================================================================================



//RHSGREF =======================================================================================================================================
class HG_AttachmentsShop_RHSGREF
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class Scopes
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_SCOPES";
		items[] =
		{
			{"rhsgref_acc_l1a1_anpvs2",1250,"true"},
			{"rhsgref_mg42_acc_AAsight",1250,"true"},
			{"rhsgref_acc_l1a1_l2a2",1250,"true"},
			{"rhsgref_acc_RX01_NoFilter_camo",1250,"true"},
			{"rhsgref_acc_RX01_camo",1250,"true"},

		};
	};
	
	class Suppressors
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_SUPPRESSORS";
		items[] =
		{
			{"rhsgref_acc_zendl",1000,"true"},
			{"rhsgref_acc_falMuzzle_l1a1",1000,"true"},
			{"rhsgref_sdn6_suppressor",1000,"true"},

		};
	};
	
		class Underbarrel
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_UNDERBARREL";
		items[] =
		{
			
		};
	};
	
		class Rail
	{
	    displayName = "$STR_HG_ATTACHMENTSSHOP_RAIL";
		items[] =
		{
			{"rhsgref_K98k_acc_sighthood_add",200,"true"},
		};
	};
};

class HG_AmmoShop_GREF // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class 12Gauge
	{
	    displayName = "$STR_HG_AMMOSHOP_12GAUGE";
		items[] =
		{
//vanilla 12 Gauge
		    	{"rhsgref_1Rnd_Slug",8,"true"},
		};
	};

	class 12point7
	{
	    displayName = "$STR_HG_AMMOSHOP_12POINT7";
		items[] =
		{

		};
	};

	class 300
	{
	    displayName = "$STR_HG_AMMOSHOP_300";
		items[] =
		{
//RHS 300 (M2010 ESR)
		};
	};

	class 338
	{
	    displayName = "$STR_HG_AMMOSHOP_338";
		items[] =
		{

		};
	};

	class 408
	{
	    displayName = "$STR_HG_AMMOSHOP_408";
		items[] =
		{

		};
	};

	class 45ACP
	{
	    displayName = "$STR_HG_AMMOSHOP_45ACP";
		items[] =
		{
//RHS 45ACP (M1911)
		};
	};

	class 46x30
	{
	    displayName = "$STR_HG_AMMOSHOP_46x30";
		items[] =
		{

		};
	};

	class 50BW
	{
	    displayName = "$STR_HG_AMMOSHOP_50BW";
		items[] =
		{
//RHS 50BMG (M107)
		};
	};

	class 545x39
	{
	    displayName = "$STR_HG_AMMOSHOP_545x39";
		items[] =
		{
			
		};
	};

	class 556x45
	{
	    displayName = "$STR_HG_AMMOSHOP_556x45";
		items[] =
		{
//RHS 5.56x45 (M249)
		    	{"rhsgref_30rnd_556x45_m21",700,"true"},
		    	{"rhsgref_30rnd_556x45_m21_t",700,"true"},
		    	{"rhsgref_30rnd_556x45_vhs2",700,"true"},
		    	{"rhsgref_30rnd_556x45_vhs2_t",700,"true"},
		};
	};

	class 570x28
	{
	    displayName = "$STR_HG_AMMOSHOP_570x28";
		items[] =
		{

		};
	};

	class 580x42
	{
	    displayName = "$STR_HG_AMMOSHOP_580x42";
		items[] =
		{

		};
	};

	class 65x39
	{
	    displayName = "$STR_HG_AMMOSHOP_65x39";
		items[] =
		{

		};
	};

	class 75x55
	{
	    displayName = "$STR_HG_AMMOSHOP_75x55";
		items[] =
		{
				{"rhsgref_24rnd_75x55_Stgw57",115,"true"},
		};
	};
	
	
	class 762x39
	{
	    displayName = "$STR_HG_AMMOSHOP_762x39";
		items[] =
		{

		};
	};


	class 762x51
	{
	    displayName = "$STR_HG_AMMOSHOP_762x51";
		items[] =
		{
		    	{"rhsgref_296Rnd_792x57_SmK_alltracers_belt",115,"true"},
		    	{"rhsgref_296Rnd_792x57_SmK_belt",115,"true"},
		    	{"rhsgref_296Rnd_792x57_SmE_notracers_belt",115,"true"},
		    	{"rhsgref_296Rnd_792x57_SmE_belt",115,"true"},
		    	{"rhsgref_25Rnd_792x33_SmE_StG",115,"true"},
		    	{"rhs_mag_20Rnd_762x51_m80a1_fnfal",115,"true"},
		    	{"rhs_mag_20Rnd_762x51_m80_fnfal",115,"true"},
		    	{"rhs_mag_20Rnd_762x51_m62_fnfal",115,"true"},
		    	{"rhs_mag_20Rnd_762x51_m61_fnfal",115,"true"},
		    	{"rhsgref_10rnd_765x17_vz61",115,"true"},
		    	{"rhsgref_10Rnd_792x57_m76",115,"true"},
		    	{"rhs_30Rnd_762x39mm_Savz58",115,"true"},
		    	{"rhs_30Rnd_762x39mm_Savz58_tracer",115,"true"},
		    	{"rhsgref_50Rnd_792x57_SmE_drum",115,"true"},
		    	{"rhsgref_50Rnd_792x57_SmE_notracers_drum",115,"true"},
		    	{"rhsgref_50Rnd_792x57_SmK_alltracers_drum",115,"true"},
		    	{"rhsgref_5Rnd_762x54_m38",115,"true"},
		    	{"rhsgref_5Rnd_792x57_kar98k",115,"true"},
		    	{"rhsgref_8Rnd_762x63_Tracer_M1T_M1rifle",115,"true"},
		    	{"rhsgref_8Rnd_762x63_M2B_M1rifle",115,"true"},

		};
	};

	class 9x18
	{
	    displayName = "$STR_HG_AMMOSHOP_9x18";
		items[] =
		{

		};
	};

	class 9x19
	{
	    displayName = "$STR_HG_AMMOSHOP_9x19";
		items[] =
		{

		};
	};

	class 9x21
	{
	    displayName = "$STR_HG_AMMOSHOP_9x21";
		items[] =
		{

		};
	};

	class 9x39
	{
	    displayName = "$STR_HG_AMMOSHOP_9x39";
		items[] =
		{

		};
	};


	class 93x64
	{
	    displayName = "$STR_HG_AMMOSHOP_93x64";
		items[] =
		{

		};
	};
	
	class 1143x23
	{
	    displayName = "$STR_HG_AMMOSHOP_1143x23";
		items[] =
		{
				{"rhsgref_30rnd_1143x23_M1T_SMG",115,"true"},
				{"rhsgref_30rnd_1143x23_M1T_2mag_SMG",115,"true"},
				{"rhsgref_30rnd_1143x23_M1911B_SMG",115,"true"},
				{"rhsgref_30rnd_1143x23_M1911B_2mag_SMG",115,"true"},
				{"rhsgref_20rnd_1143x23_M1911B_SMG",115,"true"},
				{"rhsgref_20rnd_1143x23_M1T_SMG",115,"true"},
		};
	};
	
	class 40mm
	{
	    displayName = "$STR_HG_AMMOSHOP_40mm";
		items[] =
		{

		};
	};
};

class HG_ExplosivesShop_GREF // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class ROCKETS
	{
	    displayName = "$STR_HG_EXPLOSIVESSHOP_ROCKETS";
		items[] =
		{
		    	{"RPG32_F",300,"true"},
		    	{"RPG32_HE_F",300,"true"},
		    	{"NLAW_F",300,"true"},
		    	{"RPG7_F",250,"true"},
		    	{"MRAWS_HEAT_F",400,"true"},
		    	{"MRAWS_HE_F",400,"true"},
		    	{"MRAWS_HEAT55_F",400,"true"},
		};
	};

	class MISSILES
	{
	    displayName = "$STR_HG_EXPLOSIVESSHOP_MISSILES";
		items[] =
		{
		    	{"Titan_AA",1200,"true"},
		    	{"Titan_AP",1200,"true"},
		    	{"Titan_AT",1200,"true"},
		    	{"Vorona_HEAT",1200,"true"},
		    	{"Vorona_HE",1200,"true"},
		};
	};

	class GRENADES
	{
	    displayName = "$STR_HG_EXPLOSIVESSHOP_GRENADES";
		items[] =
		{
		    	{"ACE_M14",350,"true"},
		    	{"rhs_mag_an_m14_th3",350,"true"},
		    	{"rhs_mag_an_m8hc",350,"true"},
		    	{"ACE_CTS9",500,"true"},
		    	{"rhs_grenade_m1939e_mag",175,"true"},
		    	{"rhs_grenade_m1939l_mag",200,"true"},
		    	{"rhs_grenade_m1939e_f_mag",175,"true"},
		    	{"rhs_grenade_m1939l_f_mag",200,"true"},
		    	{"rhs_mag_f1",200,"true"},
		    	{"rhs_mag_fakel",150,"true"},
		    	{"rhs_mag_fakels",150,"true"},
		    	{"I_IR_Grenade",250,"true"},
		    	{"O_IR_Grenade",250,"true"},
		    	{"I_E_IR_Grenade",250,"true"},
		    	{"B_IR_Grenade",250,"true"},
		    	{"O_R_IR_Grenade",250,"true"},
		    	{"rhs_grenade_m15_mag",350,"true"},
		    	{"rhs_mag_m18_green",125,"true"},
		    	{"rhs_mag_m18_purple",125,"true"},
		    	{"rhs_mag_m18_red",125,"true"},
		    	{"SmokeShellBlue",125,"true"},
		    	{"SmokeShellGreen",125,"true"},
		    	{"SmokeShellOrange",125,"true"},
		    	{"SmokeShellPurple",125,"true"},
		    	{"SmokeShellRed",125,"true"},
		    	{"SmokeShellYellow",125,"true"},
		    	{"rhs_mag_m18_yellow",125,"true"},
		    	{"HandGrenade",200,"true"},
		    	{"rhs_mag_m67",200,"true"},
		    	{"rhs_mag_m7a3_cs",300,"true"},
		    	{"rhs_grenade_anm8_mag",125,"true"},
		    	{"SmokeShell",125,"true"},
		    	{"ACE_M84",150,"true"},
		    	{"rhs_mag_mk84",150,"true"},
		    	{"rhs_grenade_mki_mag",150,"true"},
		    	{"rhs_grenade_mkii_mag",200,"true"},
		    	{"rhs_grenade_mkiiia1_mag",175,"true"},
		    	{"rhs_mag_mk3a2",175,"true"},
		    	{"rhs_grenade_nbhgr39_mag",200,"true"},
		    	{"rhs_grenade_nbhgr39B_mag",200,"true"},
		    	{"rhs_mag_plamyam",175,"true"},
		    	{"rhs_mag_rdg2_black",125,"true"},
		    	{"rhs_mag_rdg2_white",125,"true"},
		    	{"rhs_mag_rgd5",200,"true"},
		    	{"rhs_mag_rgn",200,"true"},
		    	{"rhs_mag_rgo",200,"true"},
		    	{"rhsgref_mag_rkg3em",300,"true"},
		    	{"rhs_charge_sb3kg_mag",2000,"true"},
		    	{"rhs_grenade_sthgr24_mag",200,"true"},
		    	{"rhs_grenade_sthgr24_heerfrag_mag",200,"true"},
		    	{"rhs_grenade_sthgr24_SSfrag_mag",200,"true"},
		    	{"rhs_grenade_sthgr24_x7bundle_mag",1400,"true"},
		    	{"rhs_charge_tnt_x2_mag",2000,"true"},
		    	{"MiniGrenade",175,"true"},
		    	{"rhs_grenade_khattabka_vog17_mag",200,"true"},
		    	{"rhs_grenade_khattabka_vog25_mag",200,"true"},
		    	{"rhs_mag_zarya2",175,"true"}
		};
	};

	class MINES
	{
	    displayName = "$STR_HG_EXPLOSIVESSHOP_MINES";
		items[] =
		{
		    	{"APERSMineDispenser_Mag",3000,"true"},
		    	{"rhs_mine_a200_bz_mag",800,"true"},
		    	{"rhs_mine_a200_dz35_mag",800,"true"},
		    	{"rhs_mine_glasmine43_bz_mag",800,"true"},
		    	{"rhs_mine_glasmine43_hz_mag",800,"true"},
		    	{"IEDLandBig_Remote_Mag",3000,"true"},
		    	{"IEDUrbanBig_Remote_Mag",3000,"true"},
		    	{"rhsusf_m112_mag",800,"true"},
		    	{"rhsusf_m112x4_mag",3000,"true"},
		    	{"DemoCharge_Remote_Mag",800,"true"},
		    	{"rhsusf_mine_m14_mag",800,"true"},
		    	{"ATMine_Range_Mag",800,"true"},
		    	{"SatchelCharge_Remote_Mag",3000,"true"},
		    	{"ClaymoreDirectionalMine_Remote_Mag",800,"true"},
		    	{"rhs_mine_M19_mag",800,"true"},
		    	{"APERSBoundingMine_Range_Mag",800,"true"},
		    	{"rhs_mine_m2a3b_trip_mag",800,"true"},
		    	{"rhs_mine_m2a3b_press_mag",800,"true"},
		    	{"rhs_mine_M3_tripwire_mag",800,"true"},
		    	{"rhs_mine_M3_pressure_mag",800,"true"},
		    	{"rhsusf_mine_m49a1_10m_mag",800,"true"},
		    	{"rhsusf_mine_m49a1_3m_mag",800,"true"},
		    	{"rhsusf_mine_m49a1_6m_mag",800,"true"},
		    	{"SLAMDirectionalMine_Wire_Mag",800,"true"},
		    	{"rhs_mine_M7A2_mag",800,"true"},
		    	{"rhs_mine_Mk2_tripwire_mag",800,"true"},
		    	{"rhs_mine_mk2_pressure_mag",800,"true"},
		    	{"rhsusf_mine_m49a1_10m_mag",800,"true"},
		    	{"rhsusf_mine_msk40p_blue_mag",800,"true"},
		    	{"rhsusf_mine_msk40p_green_mag",800,"true"},
		    	{"rhsusf_mine_msk40p_red_mag",800,"true"},
		    	{"rhsusf_mine_msk40p_white_mag",800,"true"},
		    	{"rhs_mine_ozm72_a_mag",800,"true"},
		    	{"rhs_mine_ozm72_b_mag",800,"true"},
		    	{"rhs_mine_ozm72_c_mag",800,"true"},
		    	{"rhs_mag_mine_pfm1",800,"true"},
		    	{"rhs_mine_pmn2_mag",800,"true"},
		    	{"APERSTripMine_Wire_Mag",800,"true"},
		    	{"rhs_mag_mine_ptm1",800,"true"},
		    	{"rhs_mine_smine35_press_mag",800,"true"},
		    	{"rhs_mine_smine35_trip_mag",800,"true"},
		    	{"rhs_mine_smine44_press_mag",800,"true"},
		    	{"rhs_mine_smine44_trip_mag",800,"true"},
		    	{"rhs_mine_sm320_green_mag",800,"true"},
		    	{"rhs_mine_sm320_red_mag",800,"true"},
		    	{"rhs_mine_sm320_white_mag",800,"true"},
		    	{"IEDLandSmall_Remote_Mag",2000,"true"},
		    	{"IEDUrbanSmall_Remote_Mag",2000,"true"},
		    	{"rhs_mine_stockmine43_2m_mag",800,"true"},
		    	{"rhs_mine_stockmine43_4m_mag",800,"true"},
		    	{"rhs_mine_TM43_mag",800,"true"},
		    	{"rhs_charge_M2tet_x2_mag",3000,"true"},
		    	{"rhs_mine_tm62m_mag",800,"true"},
		    	{"rhs_ec75_mag",800,"true"},
		    	{"rhs_ec200_sand_mag",800,"true"},
		    	{"rhs_ec200_mag",800,"true"},
		    	{"rhs_ec400_sand_mag",800,"true"},
		    	{"rhs_ec400_mag",800,"true"},
		    	{"rhs_ec75_sand_mag",800,"true"},
		    	{"ACE_FlareTripMine_Mag",800,"true"},
		    	{"APERSMine_Range_Mag",800,"true"},
		};
	};
};
//RHSGREF =======================================================================================================================================
