/*
    Author - HoverGuy
    © All Fucks Reserved
	Website - http://www.sunrise-production.com
	
    Defines available gear shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the shop
		
		class ShopCategory - Shop category, can only be Glasses/Headgear/Uniform/Vest/Backpack/MissileLauncher/RocketLauncher/Handgun/AssaultRifle/MachineGun/SubmachineGun/SniperRifle
		{
			content - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
			|- 2 - STRING - Condition that must return either true or false, if true the item appears in the list else no
		};
	};
*/

//VANILLA ========================================================================================================================================
class HG_GearShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class Glasses
	{
		displayName = "$STR_HG_GEARSHOP_FACEWEARS";
		content[] =
		{
			{"G_AirPurifyingRespirator_02_black_F",75,"true"},		
			{"G_AirPurifyingRespirator_02_olive_F",75,"true"},
			{"G_AirPurifyingRespirator_02_sand_F",75,"true"},
			{"G_Aviator",75,"true"},
			{"G_Balaclava_blk",75,"true"},	
			{"G_Balaclava_combat",75,"true"},	
			{"G_Balaclava_lowprofile",75,"true"},	
			{"G_Balaclava_oli",75,"true"},	
			{"G_Bandanna_aviator",75,"true"},	
			{"G_Bandanna_beast",75,"true"},
			{"G_Bandanna_blk",75,"true"},			
			{"G_Bandanna_khk",75,"true"},
			{"G_Bandanna_oli",75,"true"},			
			{"G_Bandanna_shades",75,"true"},			
			{"G_Bandanna_sport",75,"true"},	
			{"G_Blindfold_01_black_F",75,"true"},	
			{"G_Blindfold_01_white_F",75,"true"},	
			{"G_Combat",75,"true"},	
			{"G_Combat_Goggles_tna_F",75,"true"},	
			{"G_Diving",75,"true"},	
			{"G_I_Diving",75,"true"},	
			{"G_O_Diving",75,"true"},
			{"G_B_Diving",75,"true"},
			{"G_Lowprofile",75,"true"},
			{"G_Respirator_blue_F",75,"true"},
			{"G_Respirator_white_F",75,"true"},			
			{"G_Respirator_yellow_F",75,"true"},			
			{"G_Shades_Black",75,"true"},			
			{"G_Shades_Blue",75,"true"},			
			{"G_Shades_Green",75,"true"},			
			{"G_Shades_Red",75,"true"},
			{"G_Squares",75,"true"},
			{"G_Balaclava_TI_blk_F",75,"true"},
			{"G_Balaclava_TI_G_blk_F",75,"true"},
			{"G_Balaclava_TI_tna_F",75,"true"},
			{"G_Balaclava_TI_G_tna_F",75,"true"},
			{"G_Tactical_Clear",75,"true"},
			{"G_Tactical_Black",75,"true"},	
			{"G_WirelessEarpiece_F",75,"true"},			
			{"Mask_M50",675,"true"}
		};
	};
	
	class Headgear
	{
		displayName = "$STR_HG_GEARSHOP_HEADGEARS";
		content[] =
		{

			{"H_HelmetHBK_headset_F",1575,"true"},
			{"H_HelmetHBK_chops_F",1575,"true"},
			{"H_HelmetHBK_ear_F",1575,"true"},
			{"H_HelmetHBK_F",225,"true"},
			{"H_HelmetSpecO_blk",225,"true"},
			{"H_HelmetSpecO_ghex_F",225,"true"},
			{"H_HelmetSpecO_ocamo",225,"true"},
			{"H_HelmetAggressor_F",2100,"true"},
			{"H_HelmetAggressor_cover_F",2100,"true"},
			{"H_HelmetAggressor_cover_taiga_F",2100,"true"},
			{"H_Bandanna_gry",15,"true"},
			{"H_Bandanna_blu",15,"true"},
			{"H_Bandanna_cbr",15,"true"},
			{"H_Bandanna_khk_hs",15,"true"},
			{"H_Bandanna_khk",15,"true"},
			{"H_Bandanna_mcamo",15,"true"},
			{"H_Bandanna_sgg",15,"true"},
			{"H_Bandanna_sand",15,"true"},
			{"H_Bandanna_surfer",15,"true"},
			{"H_Bandanna_camo",15,"true"},
			{"H_PASGT_basic_black_F",375,"true"},
			{"H_PASGT_basic_blue_F",375,"true"},
			{"H_PASGT_basic_olive_F",375,"true"},
			{"H_PASGT_basic_white_F",375,"true"},
			{"H_Watchcap_blk",15,"true"},
			{"H_Watchcap_cbr",15,"true"},
			{"H_Watchcap_camo",15,"true"},
			{"H_Watchcap_khk",15,"true"},
			{"H_Beret_blk",15,"true"},
			{"H_Beret_gen_F",15,"true"},
			{"H_Beret_CSAT_01_F",15,"true"},
			{"dvk_altcsat_beret_g",15,"true"},
			{"dvk_altcsat_beret_r",15,"true"},
			{"dvk_altcsat_beret",15,"true"},
			{"H_Beret_EAF_01_F",15,"true"},
			{"H_Beret_02",15,"true"},
			{"H_Beret_Colonel",15,"true"},
			{"H_Booniehat_mgrn",15,"true"},
			{"H_Booniehat_khk_hs",15,"true"},
			{"H_Booniehat_khk",15,"true"},
			{"H_Booniehat_mcamo",15,"true"},
			{"H_Booniehat_oli",15,"true"},
			{"DVK_altcsat_jh_plasf",15,"true"},
			{"H_Booniehat_tan",15,"true"},
			{"H_Booniehat_taiga",15,"true"},
			{"H_Booniehat_tna_F",15,"true"},
			{"H_Booniehat_wdl",15,"true"},
			{"H_Booniehat_dgtl",15,"true"},
			{"H_Booniehat_eaf",15,"true"},
			{"H_Cap_blk",15,"true"},
			{"H_Cap_Black_IDAP_F",15,"true"},
			{"H_Cap_grn",15,"true"},
			{"H_Cap_oli",15,"true"},
			{"H_Cap_oli_hs",15,"true"},
			{"H_Cap_Orange_IDAP_F",15,"true"},
			{"H_Cap_police",15,"true"},
			{"H_Cap_press",15,"true"},
			{"H_Cap_red",15,"true"},
			{"H_Cap_tan",15,"true"},
			{"H_Cap_khaki_specops_UK",15,"true"},
			{"H_Cap_usblack",15,"true"},
			{"H_Cap_tan_specops_US",15,"true"},
			{"H_Cap_White_IDAP_F",15,"true"},
			{"H_Cap_blk_Raven",15,"true"},
			{"H_Cap_brn_SPECOPS",15,"true"},
			{"DVK_altcsat_cap_irano",15,"true"},
			{"H_HelmetB",375,"true"},
			{"H_HelmetB_black",375,"true"},
			{"H_HelmetB_camo",375,"true"},
			{"H_HelmetB_desert",375,"true"},
			{"H_HelmetB_sand",375,"true"},
			{"H_HelmetB_snakeskin",375,"true"},
			{"H_HelmetB_tna_F",375,"true"},
			{"H_HelmetB_plain_wdl",375,"true"},
			{"H_Tank_O_ghex_F",450,"true"},
			{"H_Tank_black_F",450,"true"},
			{"H_Tank_eaf_F",450,"true"},
			{"H_HelmetCrew_I",1125,"true"},
			{"H_HelmetCrew_O",1125,"true"},
			{"H_HelmetCrew_I_E",1125,"true"},
			{"H_HelmetCrew_B",1125,"true"},
			{"H_HelmetLeaderO_ghex_F",2175,"true"},
			{"H_HelmetLeaderO_ocamo",2175,"true"},
			{"H_HelmetLeaderO_oucamo",2175,"true"},
			{"H_EarProtectors_black_F",2175,"true"},
			{"H_HelmetSpecB",2175,"true"},
			{"H_HelmetSpecB_blk",2175,"true"},
			{"H_HelmetSpecB_paint2",2175,"true"},
			{"H_HelmetSpecB_paint1",2175,"true"},
			{"H_HelmetSpecB_sand",2175,"true"},
			{"H_HelmetSpecB_snakeskin",2175,"true"},
			{"H_HelmetB_Enh_tna_F",2175,"true"},
			{"H_HelmetSpecB_wdl",2175,"true"},
			{"H_Construction_basic_orange_F",15,"true"},
			{"H_Construction_earprot_orange_F",15,"true"},
			{"H_Construction_headset_orange_F",15,"true"},
			{"H_Construction_basic_white_F",15,"true"},
			{"H_Construction_earprot_white_F",15,"true"},
			{"H_Construction_headset_white_F",15,"true"},
			{"H_Construction_basic_orange_F",15,"true"},
			{"H_Construction_earprot_orange_F",15,"true"},
			{"H_Hat_blue",15,"true"},
			{"H_HeadSet_black_F",15,"true"},
			{"H_CrewHelmetHeli_I",825,"true"},
			{"H_CrewHelmetHeli_O",825,"true"},
			{"H_CrewHelmetHeli_I_E",825,"true"},
			{"H_CrewHelmetHeli_B",825,"true"},
			{"H_PilotHelmetHeli_I",825,"true"},
			{"H_PilotHelmetHeli_O",825,"true"},
			{"H_PilotHelmetHeli_I_E",825,"true"},
			{"H_PilotHelmetHeli_B",825,"true"},
			{"H_HelmetB_light",1275,"true"},
			{"H_HelmetB_light_black",1275,"true"},
			{"H_HelmetB_light_desert",1275,"true"},
			{"H_HelmetB_light_grass",1275,"true"},
			{"H_HelmetB_light_sand",1275,"true"},
			{"H_HelmetB_light_snakeskin",1275,"true"},
			{"H_HelmetB_Light_tna_F",1275,"true"},
			{"H_HelmetB_light_wdl",1275,"true"},
			{"DVK_altcsat_cap_plan",15,"true"},
			{"H_MilCap_blue",15,"true"},
			{"H_MilCap_gen_F",15,"true"},
			{"H_MilCap_ghex_F",15,"true"},
			{"H_MilCap_grn",15,"true"},
			{"H_MilCap_gry",15,"true"},
			{"H_MilCap_ocamo",15,"true"},
			{"H_MilCap_mcamo",15,"true"},
			{"H_MilCap_taiga",15,"true"},
			{"H_MilCap_wdl",15,"true"},
			{"H_MilCap_dgtl",15,"true"},
			{"H_MilCap_eaf",15,"true"},
			{"H_HelmetIA",375,"true"},
			{"H_PASGT_basic_blue_press_F",375,"true"},
			{"H_PASGT_basic_blue_press_F",400,"true"},
			{"dvk_altcsat_h_plamc",375,"true"},
			{"H_HelmetO_ocamo",375,"true"},
			{"H_HelmetO_oucamo",375,"true"},
			{"H_Cap_headphones",300,"true"},
			{"rvg_construction_3",300,"true"},
			{"rvg_presshelmet_1",375,"true"},
			{"rvg_presshelmet_2",375,"true"},
			{"rvg_presshelmet_3",375,"true"},
			{"rvg_safari_1",15,"true"},
			{"rvg_safari_2",15,"true"},
			{"rvg_safari_3",15,"true"},
			{"rvg_skate_1",112,"true"},
			{"rvg_skate_2",112,"true"},
			{"rvg_skate_3",112,"true"},
			{"H_Hat_Safari_olive_F",15,"true"},
			{"H_Hat_Safari_sand_F",15,"true"},
			{"H_Shemag_olive",15,"true"},
			{"H_Shemag_olive_hs",15,"true"},
			{"H_ShemagOpen_tan",15,"true"},
			{"H_ShemagOpen_khk",15,"true"},
			{"H_Helmet_Skate",112,"true"},
			{"H_HelmetO_ViperSP_ghex_F",3825,"true"},
			{"H_HelmetO_ViperSP_hex_F",3825,"true"},
			{"H_HelmetB_TI_tna_F",1575,"true"},
			{"H_HelmetB_TI_arid_F",1575,"true"},
			{"H_StrawHat",15,"true"},
			{"H_WirelessEarpiece_F",15,"true"},
			{"H_Hat_Tinfoil_F",300,"true"}
	    };
	};

	class Uniform
	{
		displayName = "$STR_HG_GEARSHOP_UNIFORMS";
		content[] =
		{
//Aid Worker Clothes (Cargo) [IDAP]
		    {"U_C_IDAP_Man_cargo_F",200,"true"},
//Aid Worker Clothes (Jeans) [IDAP]
		    {"U_C_IDAP_Man_Jeans_F",200,"true"},
//Aid Worker Clothes (Polo, Shorts) [IDAP]
		    {"U_C_IDAP_Man_shorts_F",200,"true"},
//Aid Worker Clothes (Polo) [IDAP]
		    {"U_C_IDAP_Man_casual_F",200,"true"},
//Aid Worker Clothes (Tee) [IDAP]
		    {"U_C_IDAP_Man_Tee_F",200,"true"},
//Aid Worker Clothes (Tee, Shorts) [IDAP]
		    {"U_C_IDAP_Man_TeeShorts_F",200,"true"},
//Bandit Clothes (Checkered)
		    {"U_I_C_Soldier_Bandit_4_F",200,"true"},
//Bandit Clothes (Polo Shirt)
		    {"U_I_C_Soldier_Bandit_1_F",200,"true"},
//Bandit Clothes (Skull)
		    {"U_I_C_Soldier_Bandit_2_F",200,"true"},
//Bandit Clothes (Tank Top)
		    {"U_I_C_Soldier_Bandit_5_F",200,"true"},
//Bandit Clothes (Tee)
		    {"U_I_C_Soldier_Bandit_3_F",200,"true"},
//Casual Clothes (Blue)
		    {"U_C_Man_casual_2_F",200,"true"},
		    {"U_C_Man_casual_2_sick_F",200,"true"},
//Casual Clothes (Green)
		    {"U_C_Man_casual_3_F",200,"true"},
		    {"U_C_Man_casual_3_sick_F",200,"true"},
//Casual Clothes (Navy)
		    {"U_C_Man_casual_1_F",200,"true"},
		    {"U_C_Man_casual_1_sick_F",200,"true"},
//Casual Clothes (Red)
		    {"U_C_Man_casual_6_F",200,"true"},
		    {"U_C_Man_casual_6_sick_F",200,"true"},
//Casual Clothes (Sky)
		    {"U_C_Man_casual_4_F",200,"true"},
		    {"U_C_Man_casual_4_sick_F",200,"true"},
//Casual Clothes (Yellow)
		    {"U_C_Man_casual_5_F",200,"true"},
		    {"U_C_Man_casual_5_sick_F",200,"true"},
//CBRN Suit [AAF]
		    {"U_I_CBRN_Suit_01_AAF_F",200,"true"},
//CBRN Suit (Blue)
		    {"U_C_CBRN_Suit_01_Blue_F",200,"true"},
//CBRN Suit [LDF]
		    {"U_I_E_CBRN_Suit_01_EAF_F",200,"true"},
//CBRN Suit (MTP) [NATO]
		    {"U_B_CBRN_Suit_01_MTP_F",200,"true"},
//CBRN Suit (Tropic) [NATO]
		    {"U_B_CBRN_Suit_01_Tropic_F",200,"true"},
//CBRN Suit (White)
		    {"U_C_CBRN_Suit_01_White_F",200,"true"},
//CBRN Suit (Woodland) [NATO]
		    {"U_B_CBRN_Suit_01_Wdl_F",200,"true"},
//Combat Fatigues [AAF]
		    {"U_I_CombatUniform",200,"true"},
//Combat Fatigues [AAF] (Officer)
		    {"U_I_CombatUniform_tshirt",200,"true"},
//Combat Fatigues [AAF] (Officer)
		    {"U_I_OfficerUniform",200,"true"},
//Combat Fatigues [AAF] (Rolled-up)
		    {"U_I_CombatUniform_shortsleeve",200,"true"},
//Combat Fatigues (Kerry)
		    {"U_KerryBody",200,"true"},
//Combat Fatigues [LDF]
		    {"U_I_E_Uniform_01_F",200,"true"},
//Combat Fatigues (Miller)
		    {"U_MillerBody",200,"true"},
//Combat Fatigues (MTP)
		    {"U_B_CombatUniform_mcam",200,"true"},
//Combat Fatigues (MTP)
		    {"U_B_CombatUniform_sgg",200,"true"},
//Combat Fatigues (MTP)
		    {"U_B_CombatUniform_wdl",200,"true"},
//Combat Fatigues (MTP) (Tee)
		    {"U_B_CombatUniform_mcam_tshirt",200,"true"},
//Combat Fatigues (MTP) (Tee)
		    {"U_B_CombatUniform_sgg_tshirt",200,"true"},
//Combat Fatigues (MTP) (Tee)
		    {"U_B_CombatUniform_wdl_tshirt",200,"true"},
//Combat Fatigues (Officer) [LDF]
		    {"U_I_E_Uniform_01_officer_F",200,"true"},
//Combat Fatigues (Rolled-up) [LDF]
		    {"U_I_E_Uniform_01_shortsleeve_F",200,"true"},
//Combat Fatigues (Stavrou)
		    {"U_I_G_resistanceLeader_F",200,"true"},
//Combat Fatigues (Sweater) [LDF]
		    {"U_I_E_Uniform_01_sweater_F",200,"true"},
//Combat Fatigues (Tank Top) [LDF]
		    {"U_I_E_Uniform_01_tanktop_F",200,"true"},
//Combat Fatigues (Tropic)
		    {"U_B_T_Soldier_F",200,"true"},
//Combat Fatigues (Tropic, Tee)
		    {"U_B_T_Soldier_AR_F",200,"true"},
//Combat Fatigues (Woodland)
		    {"U_B_CombatUniform_mcam_wdl_f",200,"true"},
//Combat Fatigues (Woodland, Tee)
		    {"U_B_CombatUniform_tshirt_mcam_wdL_f",200,"true"},
//Commoner Clothes (Blue)			
		    {"U_C_Poloshirt_blue",200,"true"},
		    {"U_C_Poloshirt_blue_sick",200,"true"},
//Commoner Clothes (Burgundy)			
		    {"U_C_Poloshirt_burgundy",200,"true"},
		    {"U_C_Poloshirt_burgundy_sick",200,"true"},
//Commoner Clothes (Red-White)			
		    {"U_C_Poloshirt_redwhite",200,"true"},
		    {"U_C_Poloshirt_redwhite_sick",200,"true"},
//Commoner Clothes (Salmon)			
		    {"U_C_Poloshirt_salmon",200,"true"},
//Commoner Clothes (Striped)			
		    {"U_C_Poloshirt_stripped",200,"true"},
		    {"U_C_Poloshirt_stripped_sick",200,"true"},
//Commoner Clothes (Tricolor)			
		    {"U_C_Poloshirt_tricolour",200,"true"},
//Commoner Clothes 2
		    {"U_C_Commoner1_1",200,"true"},
//Commoner Clothes 2			
		    {"U_C_Commoner1_2",200,"true"},
//Commoner Clothes 3			
		    {"U_C_Commoner1_3",200,"true"},
//Commoner Shorts			
		    {"U_C_Commoner1_3",200,"true"},
//Competitor Suit
		    {"U_Competitor",200,"true"},
//Construction Coverall (Black)			
		    {"U_C_ConstructionCoverall_Black_F",200,"true"},
//Construction Coverall (Blue)			
		    {"U_C_ConstructionCoverall_Blue_F",200,"true"},
//Construction Coverall (Red)			
		    {"U_C_ConstructionCoverall_Red_F",200,"true"},
//Construction Coverall (Vrana)			
		    {"U_C_ConstructionCoverall_Vrana_F",200,"true"},
//CTRG Combat Uniform
		    {"U_B_CTRG_1",200,"true"},
//CTRG Combat Uniform (Tee)
		    {"U_B_CTRG_2",200,"true"},
//CTRG Combat Uniform (Rolled-up)
		    {"U_B_CTRG_3",200,"true"},	
//CTRG Stealth Uniform
		    {"U_B_CTRG_Soldier_F",200,"true"},
//CTRG Stealth Uniform (Arid)
		    {"U_B_CTRG_Soldier_Arid_F",200,"true"},
//CTRG Stealth Uniform (Tee)
		    {"U_B_CTRG_Soldier_2_F",200,"true"},
//CTRG Stealth Uniform (Tee Arid)
		    {"U_B_CTRG_Soldier_2_Arid_F",200,"true"},
//CTRG Stealth Uniform (Rolled-up)
		    {"U_B_CTRG_Soldier_3_F",200,"true"},
//CTRG Stealth Uniform (Rolled-up Arid)
		    {"U_B_CTRG_Soldier_3_Arid_F",200,"true"},
//CTRG Urban Uniform
		    {"U_B_CTRG_Soldier_urb_1_F",200,"true"},
//CTRG Urban Uniform (Tee)
		    {"U_B_CTRG_Soldier_urb_2_F",200,"true"},
//CTRG Urban Uniform (Rolled-up)
		    {"U_B_CTRG_Soldier_urb_3_F",200,"true"},
//Deserter Clothes (Jacket)
		    {"U_I_L_Uniform_01_camo_F",200,"true"},
//Deserter Clothes (T-Shirt)
		    {"U_I_L_Uniform_01_deserter_F",200,"true"},
//Driver Coverall (Black)
		    {"U_C_Driver_1_black",200,"true"},
//Driver Coverall (Blue)
		    {"U_C_Driver_1_blue",200,"true"},
//Driver Coverall (Green)
		    {"U_C_Driver_1_green",200,"true"},
//Driver Coverall (Red)
		    {"U_C_Driver_1_red",200,"true"},
//Driver Coverall (White)
		    {"U_C_Driver_1_white",200,"true"},
//Driver Coverall (Yellow)
		    {"U_C_Driver_1_yellow",200,"true"},
//Driver Coverall (Orange)
		    {"U_C_Driver_1_orange",200,"true"},
//Farmer Outfit
		    {"U_C_Uniform_Farmer_01_F",200,"true"},	
//Fatigues (Green Hex) [CSAT]
		    {"U_O_T_Soldier_F",200,"true"},			
//Fatigues (Hex) [CSAT]
		    {"U_O_CombatUniform_ocamo",200,"true"},
//Fatigues (Urban) [CSAT]
		    {"U_O_CombatUniform_oucamo",200,"true"},
//Full Ghillie (Arid) [AAF]
		    {"U_I_FullGhillie_ard",200,"true"},
//Full Ghillie (Arid) [CSAT]
		    {"U_O_FullGhillie_ard",200,"true"},
//Full Ghillie (Arid) [NATO]
		    {"U_B_FullGhillie_ard",200,"true"},
//Full Ghillie (Jungle) [CSAT]
		    {"U_O_T_FullGhillie_tna_F",200,"true"},
//Full Ghillie (Jungle) [NATO]
		    {"U_B_T_FullGhillie_tna_F",200,"true"},
//Full Ghillie (Lush) [AAF]
		    {"U_I_FullGhillie_lsh",200,"true"},
//Full Ghillie (Lush) [CSAT]
		    {"U_O_FullGhillie_lsh",200,"true"},
//Full Ghillie (Lush) [NATO]
		    {"U_B_FullGhillie_lsh",200,"true"},
//Full Ghillie (Semi-Arid) [AAF]
		    {"U_I_FullGhillie_sard",200,"true"},			
//Full Ghillie (Semi-Arid) [CSAT]
		    {"U_O_FullGhillie_sard",200,"true"},
//Full Ghillie (Semi-Arid) [NATO]
		    {"U_B_FullGhillie_sard",200,"true"},
//Gendarmerie Uniform
		    {"U_B_GEN_Soldier_F",200,"true"},
		    {"U_O_GEN_Soldier_F",200,"true"},
//Gendarmerie Commander Uniform
		    {"U_B_GEN_Commander_F",200,"true"},
		    {"U_O_GEN_Commander_F",200,"true"},
//Ghillie Suit [AAF]
		    {"U_I_GhillieSuit",200,"true"},
//Ghillie Suit [CSAT]
		    {"U_O_GhillieSuit",200,"true"},
//Ghillie Suit [NATO]
		    {"U_B_GhillieSuit",200,"true"},
//Ghillie Suit (Green Hex) [CSAT]
		    {"U_O_T_Sniper_F",200,"true"},
//Ghillie Suit (Tropic) [NATO]
		    {"U_B_T_Sniper_F",200,"true"},
//Granit-B Suit
		    {"U_O_R_Gorka_01_F",200,"true"},
//Granit-B Suit (Weathered)
		    {"U_O_R_Gorka_01_brown_F",200,"true"},
//Granit-T Suit
		    {"U_O_R_Gorka_01_camo_F",200,"true"},
//Guerilla Apparel
		    {"U_IG_Guerrilla_6_1",200,"true"},
		    {"U_BG_Guerrilla_6_1",200,"true"},
		    {"U_OG_Guerrilla_6_1",200,"true"},
//Guerilla Garment
		    {"U_IG_Guerilla1_1",200,"true"},
		    {"U_BG_Guerilla1_1",200,"true"},
		    {"U_OG_Guerilla1_1",200,"true"},
//Guerilla Garment (Olive)
		    {"U_BG_Guerilla1_2_F",200,"true"},
//Guerilla Outfit (Pattern)
		    {"U_IG_Guerilla2_2",200,"true"},
		    {"U_BG_Guerilla2_2",200,"true"},
		    {"U_OG_Guerilla2_2",200,"true"},
//Guerilla Outfit (Plain, Dark)
		    {"U_IG_Guerilla2_1",200,"true"},
		    {"U_BG_Guerilla2_1",200,"true"},
		    {"U_OG_Guerilla2_1",200,"true"},
//Guerilla Outfit (Plain, Light)
		    {"U_IG_Guerilla2_3",200,"true"},
		    {"U_BG_Guerilla2_3",200,"true"},
		    {"U_OG_Guerilla2_3",200,"true"},
//Guerilla Smocks
		    {"U_IG_Guerilla3_1",200,"true"},
		    {"U_BG_Guerilla3_1",200,"true"},
		    {"U_OG_Guerilla3_1",200,"true"},
//Guerilla Smocks 1
		    {"U_IG_Guerilla3_2",200,"true"},
		    {"U_BG_Guerilla3_2",200,"true"},
		    {"U_OG_Guerilla3_2",200,"true"},
//Guerilla Uniform
		    {"U_IG_leader",200,"true"},
		    {"U_BG_leader",200,"true"},
		    {"U_OG_leader",200,"true"},
//Heli Pilot Coveralls [AAF]
		    {"U_I_HeliPilotCoveralls",200,"true"},
//Heli Pilot Coveralls [CSAT]
		    {"U_O_HeliPilotCoveralls",200,"true"},
//Heli Pilot Coveralls [LDF]
		    {"U_I_E_Uniform_01_coveralls_F",200,"true"},
//Heli Pilot Coveralls [NATO]
		    {"U_B_HeliPilotCoveralls",200,"true"},
//Hunting Clothes
		    {"U_C_HunterBody_grn",200,"true"},
//Jacket and Shorts
		    {"U_OrestesBody",200,"true"},
//Journalist Clothes
		    {"U_C_Journalist",200,"true"},
//Light Fatigues (Hex)
		    {"U_O_officer_noInsignia_hex_F",200,"true"},
//Looter Clothes (Leather Jacket)
		    {"U_C_E_LooterJacket_01_F",200,"true"},
//Looter Clothes (T-Shirt, Black)
		    {"U_I_L_Uniform_01_tshirt_black_F",200,"true"},
//Looter Clothes (T-Shirt, Olive)
		    {"U_I_L_Uniform_01_tshirt_olive_F",200,"true"},
//Looter Clothes (T-Shirt, Skull)
		    {"U_I_L_Uniform_01_tshirt_skull_F",200,"true"},
//Looter Clothes (T-Shirt, Sport)
		    {"U_I_L_Uniform_01_tshirt_sport_F",200,"true"},
//Marshal Clothes
		    {"U_Marshal",200,"true"},
//Mechanic Clothes
		    {"U_C_Mechanic_01_F",200,"true"},
//Nikos Clothes
		    {"U_NikosBody",200,"true"},	
//Officer Fatigues (Green Hex) [CSAT]
		    {"U_O_T_Officer_F",200,"true"},
//Officer Fatigues (Hex)
		    {"U_O_OfficerUniform_ocamo",200,"true"},
//Paramedic Outfit
		    {"U_C_Paramedic_01_F",200,"true"},
//Paramilitary Garb (Tee)
		    {"U_I_C_Soldier_Para_1_F",200,"true"},
//Paramilitary Garb (Jacket)
		    {"U_I_C_Soldier_Para_2_F",200,"true"},
		    {"U_B_G_Captain_Ivan_F",200,"true"},
//Paramilitary Garb (Shirt)
		    {"U_I_C_Soldier_Para_3_F",200,"true"},
//Paramilitary Garb (Shorts)
		    {"U_I_C_Soldier_Para_5_F",200,"true"},
//Paramilitary Garb (Tank Top)
		    {"U_I_C_Soldier_Para_4_F",200,"true"},
//Pilot Coveralls [AAF]
		    {"U_I_pilotCoveralls",200,"true"},			
//Pilot Coveralls [CSAT]
		    {"U_O_PilotCoveralls",200,"true"},
//Pilot Coveralls [NATO]			
		    {"U_B_PilotCoveralls",200,"true"},	
//Rangemaster Suit
		    {"U_Rangemaster",200,"true"},
//Recon Fatigues (Black)
		    {"U_O_SpecopsUniform_blk",200,"true"},	
//Recon Fatigues (Hex)
		    {"U_O_SpecopsUniform_ocamo",200,"true"},				
//Recon Fatigues (MTP)
		    {"U_B_CombatUniform_mcam_vest",200,"true"},
		    {"U_B_CombatUniform_sgg_vest",200,"true"},	
//Recon Fatigues (MTP)
		    {"U_B_CombatUniform_wdl_vest",200,"true"},
//Recon Fatigues (Tropic)
		    {"U_B_T_Soldier_SL_F",200,"true"},
//Recon Fatigues (Woodland)
		    {"U_B_CombatUniform_vest_mcam_wdl_f",200,"true"},
//Scientist Clothes
		    {"U_C_Scientist",200,"true"},
//Scientist Outfit (Formal, White)
		    {"U_C_Uniform_Scientist_01_F",200,"true"},
//Scientist Outfit (Formal, Blue)
		    {"U_C_Uniform_Scientist_01_formal_F",200,"true"},
//Scientist Outfit (Informal, Black)
		    {"U_C_Uniform_Scientist_02_F",200,"true"},
//Scientist Outfit (Informal, Red)
		    {"U_C_Uniform_Scientist_02_formal_F",200,"true"},
//Special Purpose Suit (Green Hex)
		    {"U_O_V_Soldier_Viper_F",200,"true"},
//Special Purpose Suit (Hex)
		    {"U_O_V_Soldier_Viper_hex_F",200,"true"},
//Specops Fatigues (Sage)
		    {"U_B_SpecopsUniform_sgg",200,"true"},
//Sport Clothes (Beach)
		    {"U_C_man_sport_1_F",200,"true"},
//Sport Clothes (Blue)
		    {"U_C_man_sport_3_F",200,"true"},
//Sport Clothes (Orange)
		    {"U_C_man_sport_2_F",200,"true"},
		    {"U_C_man_sport_2_sick_F",200,"true"},
//Surfer Outfit 1
		    {"U_C_ShirtSurfer_shorts",200,"true"},
//Surfer Outfit 2
		    {"U_C_TeeSurfer_shorts_1",200,"true"},
//Surfer Outfit 3
		    {"U_C_TeeSurfer_shorts_2",200,"true"},
//Survival Fatigues
		    {"U_B_survival_uniform",200,"true"},
//Syndikat Uniform
		    {"U_I_C_Soldier_Camo_F",200,"true"},
//Tanker Coveralls
		    {"U_Tank_green_F",200,"true"},
//Tracksuit (Black)
		    {"U_O_R_Gorka_01_black_F",200,"true"},
//Wetsuit [AAF]
		    {"U_I_Wetsuit",200,"true"},
//Wetsuit [CSAT]
		    {"U_O_Wetsuit",200,"true"},
//Wetsuit [NATO]
		    {"U_B_Wetsuit",200,"true"},
//Worker Coveralls
		    {"U_C_WorkerCoveralls",200,"true"},
//Worn Clothes
		    {"U_C_Poor_1",200,"true"},
		    {"U_C_Poor_2",200,"true"},
		    {"U_C_Poor_2_sick",200,"true"},
//Worn Combat Fatigues (Kerry)
		    {"U_I_G_Story_Protagonist_F",200,"true"},
//Worn Combat Fatigues (MTP)
		    {"U_B_CombatUniform_mcam_worn",200,"true"},
//Worn Shorts
		    {"U_C_Poor_shorts_1",200,"true"},
//Ravage			
		    {"dvk_corp_up_u",200,"true"},
		    {"rvg_bandit",150,"true"},
		    {"rvg_bandit_1",150,"true"},
		    {"rvg_camo",150,"true"},
		    {"rvg_camo_1",150,"true"},
		    {"rvg_diamond",150,"true"},
		    {"rvg_diamond_1",150,"true"},
		    {"rvg_independant",150,"true"},
		    {"rvg_independant_1",150,"true"},
		    {"rvg_survivor",150,"true"},
		    {"rvg_survivor_1",150,"true"},
		    {"U_B_Wetsuit_rvg",825,"true"}
		};
	};
	
	class Vest
	{
		displayName = "$STR_HG_GEARSHOP_VESTS";
		content[] =
		{
		    {"V_PlateCarrier_GL_blk",3000,"true"},
		    {"V_PlateCarrier_GL_rgr",3000,"true"},
		    {"V_PlateCarrier_GL_mtp",3000,"true"},
		    {"V_PlateCarrier_GL_tna",3000,"true"},
		    {"V_PlateCarrier_GL_wdl",3000,"true"},
		    {"V_PlateCarrier1_blk",2175,"true"},
		    {"dvk_csat_uv_jun",2250,"true"},
		    {"V_PlateCarrier1_rgr",2175,"true"},
		    {"V_PlateCarrier1_rgr_noflag_F",2175,"true"},
		    {"V_PlateCarrier1_tna_F",2175,"true"},
		    {"V_PlateCarrier1_wdl",2175,"true"},
		    {"V_PlateCarrier2_blk",2625,"true"},
		    {"V_PlateCarrier2_rgr",2625,"true"},
		    {"V_PlateCarrier2_rgr_noflag_F",2625,"true"},
		    {"V_PlateCarrier2_tna_F",2625,"true"},
		    {"V_PlateCarrier2_wdl",2625,"true"},
		    {"V_PlateCarrierSpec_blk",2775,"true"},
		    {"V_PlateCarrierSpec_rgr",2775,"true"},
		    {"V_PlateCarrierSpec_mtp",2775,"true"},
		    {"V_PlateCarrierSpec_tna_F",2775,"true"},
		    {"V_PlateCarrierSpec_wdl",2775,"true"},
		    {"V_Chestrig_blk",450,"true"},
		    {"V_Chestrig_rgr",450,"true"},
		    {"V_Chestrig_khk",450,"true"},
		    {"V_Chestrig_oli",450,"true"},
		    {"V_PlateCarrierL_CTRG",2175,"true"},
		    {"V_PlateCarrierH_CTRG",2625,"true"},
		    {"dvk_csat_uv_altis",2250,"true"},
		    {"dvk_csat_uv_urban",2250,"true"},
		    {"V_PlateCarrierIAGL_dgtl",2925,"true"},
		    {"V_PlateCarrierIAGL_oli",2925,"true"},
		    {"V_PlateCarrierIA1_dgtl",2100,"true"},
		    {"V_PlateCarrierIA2_dgtl",2100,"true"},
		    {"V_TacVest_gen_F",2100,"true"},
		    {"V_SmershVest_01_F",525,"true"},
		    {"V_SmershVest_01_radio_F",525,"true"},
		    {"V_HarnessOGL_brn",3075,"true"},
		    {"dvk_csat_heavyv_altis",3075,"true"},
		    {"V_HarnessOGL_ghex_F",3075,"true"},
		    {"dvk_csat_heavyv_jun",3075,"true"},
		    {"V_HarnessOGL_gry",3075,"true"},
		    {"dvk_csat_heavyv_urban",3075,"true"},
		    {"V_HarnessO_brn",2250,"true"},
		    {"V_HarnessO_ghex_F",2250,"true"},
		    {"V_HarnessO_gry",2250,"true"},
		    {"V_LegStrapBag_black_F",150,"true"},
		    {"V_LegStrapBag_coyote_F",150,"true"},
		    {"V_LegStrapBag_olive_F",150,"true"},
		    {"V_CarrierRigKBT_01_heavy_EAF_F",2250,"true"},
		    {"V_CarrierRigKBT_01_heavy_Olive_F",2250,"true"},
		    {"V_CarrierRigKBT_01_light_EAF_F",2250,"true"},
		    {"V_CarrierRigKBT_01_light_Olive_F",2250,"true"},
		    {"V_CarrierRigKBT_01_EAF_F",1950,"true"},
		    {"V_CarrierRigKBT_01_Olive_F",1950,"true"},
		    {"V_Pocketed_black_F",150,"true"},
		    {"V_Pocketed_coyote_F",150,"true"},
		    {"V_Pocketed_olive_F",150,"true"},
		    {"V_O2Tank",1125,"true"},
		    {"V_O2Tank_1",1125,"true"},
		    {"V_Rangemaster_belt",75,"true"},
		    {"V_TacVestIR_blk",1125,"true"},
		    {"V_RebreatherB",1125,"true"},
		    {"rvg_bandolier_1",300,"true"},
		    {"rvg_bandolier_3",300,"true"},
		    {"rvg_bandolier_4",300,"true"},
		    {"rvg_bandolier_2",300,"true"},
		    {"rvg_chestrig",450,"true"},
		    {"rvg_deckvest_1",1450,"true"},
		    {"rvg_deckvest_2",1450,"true"},
		    {"rvg_eodvest_3",2700,"true"},
		    {"rvg_eodvest_2",2700,"true"},
		    {"rvg_eodvest_1",2700,"true"},
		    {"rvg_legstrapbag_1",150,"true"},
		    {"rvg_legstrapbag_2",150,"true"},
		    {"rvg_legstrapbag_4",150,"true"},
		    {"rvg_legstrapbag_3",150,"true"},
		    {"rvg_multipocket_1",150,"true"},
		    {"rvg_multipocket_2",150,"true"},
		    {"rvg_multipocket_3",150,"true"},
		    {"rvg_multipocket_5",150,"true"},
		    {"rvg_multipocket_4",150,"true"},
		    {"rvg_platecarrier_1",2137,"true"},
		    {"rvg_platecarrier_4",2100,"true"},
		    {"rvg_platecarrier_2",2100,"true"},
		    {"rvg_platecarrier_5",2100,"true"},
		    {"rvg_platecarrier_3",2100,"true"},
		    {"rvg_rangemaster_1",150,"true"},
		    {"rvg_rangemaster_3",150,"true"},
		    {"rvg_rangemaster_4",150,"true"},
		    {"rvg_rangemaster_2",150,"true"},
		    {"rvg_ravenvest_1",1125,"true"},
		    {"rvg_tacvest_4",975,"true"},
		    {"rvg_tacvest_2",975,"true"},
		    {"rvg_tacvest_1",975,"true"},
		    {"rvg_tacvest_3",975,"true"},
		    {"V_BandollierB_blk",225,"true"},
		    {"V_BandollierB_cbr",225,"true"},
		    {"V_BandollierB_ghex_F",225,"true"},
		    {"V_BandollierB_rgr",225,"true"},
		    {"V_BandollierB_khk",225,"true"},
		    {"V_BandollierB_oli",225,"true"},
		    {"V_TacChestrig_cbr_F",450,"true"},
		    {"V_TacChestrig_grn_F",450,"true"},
		    {"V_TacChestrig_oli_F",450,"true"},
		    {"V_TacVest_blk",975,"true"},
		    {"dvk_vest_csat_black",975,"true"},
		    {"V_TacVest_brn",975,"true"},
		    {"V_TacVest_camo",975,"true"},
		    {"V_TacVest_khk",975,"true"},
		    {"dvk_tacv_csat_des",975,"true"},
		    {"V_TacVest_oli",975,"true"},
		    {"dvk_vest_csat_jun",975,"true"},
		    {"V_TacVest_blk_POLICE",1575,"true"},
		    {"V_I_G_resistanceLeader_F",975,"true"},
		    {"V_PlateCarrier_Kerry",2175,"true"},
		    {"V_Press_F",1387,"true"}
		};
	};
	
	class Backpack
	{
		displayName = "$STR_HG_GEARSHOP_BACKPACKS";
		content[] =
		{
		    	{"B_AssaultPack_blk",450,"true"},
		    	{"B_AssaultPack_cbr",450,"true"},
		    	{"B_AssaultPack_dgtl",450,"true"},
		    	{"B_AssaultPack_eaf_F",450,"true"},
		    	{"B_AssaultPack_rgr",450,"true"},
		    	{"B_AssaultPack_ocamo",450,"true"},
		    	{"B_AssaultPack_khk",450,"true"},
		    	{"B_AssaultPack_mcamo",450,"true"},
		    	{"B_AssaultPack_sgg",450,"true"},
		    	{"B_AssaultPack_tna_F",450,"true"},
		    	{"B_AssaultPack_wdl_F",450,"true"},
		    	{"B_Bergen_dgtl_F",1500,"true"},
		    	{"B_Bergen_hex_F",1500,"true"},
		    	{"B_Bergen_mcamo_F",1500,"true"},
		    	{"B_Bergen_tna_F",1500,"true"},
		    	{"B_Carryall_cbr",1050,"true"},
		    	{"B_Carryall_eaf_F",1050,"true"},
		    	{"B_Carryall_ghex_F",1050,"true"},
		    	{"B_Carryall_green_F",1050,"true"},
		    	{"B_Carryall_ocamo",1050,"true"},
		    	{"B_Carryall_khk",1050,"true"},
		    	{"B_Carryall_mcamo",1050,"true"},
		    	{"B_Carryall_oli",1050,"true"},
		    	{"B_Carryall_taiga_F",1050,"true"},
		    	{"B_Carryall_oucamo",1050,"true"},
		    	{"B_Carryall_wdl_F",1050,"true"},
		    	{"B_FieldPack_blk",600,"true"},
		    	{"B_FieldPack_cbr",600,"true"},
		    	{"B_FieldPack_ghex_F",600,"true"},
		    	{"B_FieldPack_green_F",600,"true"},
		    	{"B_FieldPack_ocamo",600,"true"},
		    	{"B_FieldPack_oli",600,"true"},
		    	{"B_FieldPack_taiga_F",600,"true"},
		    	{"B_FieldPack_oucamo",600,"true"},
		    	{"B_Kitbag_cbr",900,"true"},
		    	{"B_Kitbag_rgr",900,"true"},
		    	{"B_Kitbag_mcamo",900,"true"},
		    	{"B_Kitbag_sgg",900,"true"},
		    	{"B_Kitbag_tan",900,"true"},
		    	{"rvg_assault",450,"true"},
		    	{"rvg_bergan",1500,"true"},
		    	{"rvg_carryall_1",1050,"true"},
		    	{"rvg_carryall_2",1050,"true"},
		    	{"rvg_field",600,"true"},
		    	{"rvg_kitbag",900,"true"},
		    	{"rvg_legstrappack_1",150,"true"},
		    	{"rvg_legstrappack_2",150,"true"},
		    	{"rvg_legstrappack_4",150,"true"},
		    	{"rvg_legstrappack_3",150,"true"},
		    	{"rvg_messengerbag_4",150,"true"},
		    	{"rvg_messengerbag_3",150,"true"},
		    	{"rvg_messengerbag_1",150,"true"},
		    	{"rvg_messengerbag_2",150,"true"},
		    	{"rvg_tactical",750,"true"},
				{"B_TacticalPack_blk",750,"true"},
				{"B_TacticalPack_rgr",750,"true"},
				{"B_TacticalPack_ocamo",750,"true"},
				{"B_TacticalPack_mcamo",750,"true"},
				{"B_TacticalPack_oli",750,"true"},
		    	{"B_ViperHarness_blk_F",900,"true"},
		    	{"B_ViperHarness_ghex_F",900,"true"},
		    	{"B_ViperHarness_hex_F",900,"true"},
		    	{"B_ViperHarness_khk_F",900,"true"},
		    	{"B_ViperHarness_oli_F",900,"true"},
		    	{"B_ViperLightHarness_blk_F",550,"true"},
		    	{"B_ViperLightHarness_ghex_F",550,"true"},
		    	{"B_ViperLightHarness_hex_F",550,"true"},
		    	{"B_ViperLightHarness_khk_F",550,"true"},
		    	{"B_ViperLightHarness_oli_F",550,"true"}
		};
	};
};

class HG_WeaponShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
		
	class Handgun
	{
		displayName = "$STR_HG_WEAPONSHOP_HANDGUN";
		content[] =
		{
//ACP-C2
			{"hgun_ACPC2_F",750,"true"},
//P07
			{"hgun_P07_F",750,"true"},
			{"hgun_P07_khk_F",750,"true"},
			{"hgun_P07_blk_F",750,"true"},
//4-five
			{"hgun_Pistol_heavy_01_F",750,"true"},
			{"hgun_Pistol_heavy_01_green_F",750,"true"},
//Zubr
			{"hgun_Pistol_heavy_02_F",750,"true"},
//Rook
			{"hgun_Rook40_F",750,"true"},
//PM
			{"hgun_Pistol_01_F",750,"true"}
		};
	};

	class SubmachineGun
	{
		displayName = "$STR_HG_WEAPONSHOP_SUB_MACHINE_GUN";
		content[] =
		{
//PDW2000
			{"hgun_PDW2000_F",1050,"true"},
//Sting
			{"SMG_02_F",1050,"true"},
//ADR-97
			{"SMG_03_TR_black",1050,"true"},
			{"SMG_03_TR_camo",1050,"true"},
			{"SMG_03_TR_khaki",1050,"true"},
			{"SMG_03_TR_hex",1050,"true"},
			{"SMG_03C_TR_black",1050,"true"},
			{"SMG_03C_TR_camo",1050,"true"},
			{"SMG_03C_TR_khaki",1050,"true"},
			{"SMG_03C_TR_hex",1050,"true"},
			{"SMG_03_black",1050,"true"},
			{"SMG_03_camo",1050,"true"},
			{"SMG_03_khaki",1050,"true"},
			{"SMG_03_hex",1050,"true"},
//ADR-97C
			{"SMG_03C_black",1050,"true"},
			{"SMG_03C_camo",1050,"true"},
			{"SMG_03C_khaki",1050,"true"},
			{"SMG_03C_hex",1050,"true"},
//Protector 9mm
			{"SMG_05_F",1050,"true"}
		};
	};
	
	class AssaultRifle
	{
		displayName = "$STR_HG_WEAPONSHOP_ASSAULT_RIFLE";
		content[] =
		{
//Katiba
			{"arifle_Katiba_F",2400,"true"},
			{"arifle_Katiba_C_F",2400,"true"},
			{"arifle_Katiba_GL_F",3900,"true"},
//Mk20
			{"arifle_Mk20_F",1400,"true"},
			{"arifle_Mk20_plain_F",1400,"true"},
			{"arifle_Mk20C_F",1400,"true"},
			{"arifle_Mk20C_plain_F",1400,"true"},
			{"arifle_Mk20_GL_F",2400,"true"},
			{"arifle_Mk20_GL_plain_F",2400,"true"},
//MX
			{"arifle_MXC_F",2400,"true"},
			{"arifle_MX_F",2400,"true"},
			{"arifle_MX_GL_F",3900,"true"},

			{"arifle_MXC_Black_F",2400,"true"},
			{"arifle_MX_Black_F",2400,"true"},
			{"arifle_MX_GL_Black_F",3900,"true"},

			{"arifle_MXC_khk_F",2400,"true"},
			{"arifle_MX_khk_F",2400,"true"},
			{"arifle_MX_GL_khk_F",3900,"true"},
//SDAR
			{"arifle_SDAR_F",1400,"true"},
//TRG20/TRG21
			{"arifle_TRG21_F",1400,"true"},
			{"arifle_TRG20_F",1400,"true"},
			{"arifle_TRG21_GL_F",2400,"true"},
//AK-12
			{"arifle_AK12_F",2400,"true"},
			{"arifle_AK12_lush_F",2400,"true"},
			{"arifle_AK12_arid_F",2400,"true"},
			{"arifle_AK12_GL_F",3900,"true"},
			{"arifle_AK12_GL_lush_F",3900,"true"},
			{"arifle_AK12_GL_arid_F",3900,"true"},
//AKM
			{"arifle_AKM_F",2400,"true"},
//AKS-74U
			{"arifle_AKM_FL_F",2400,"true"},
//Type 115
			{"arifle_ARX_blk_F",3900,"true"},
			{"arifle_ARX_ghex_F",3900,"true"},
			{"arifle_ARX_hex_F",3900,"true"},
//CAR-95
			{"arifle_CTAR_blk_F",1400,"true"},
			{"arifle_CTAR_hex_F",1400,"true"},
			{"arifle_CTAR_ghex_F",1400,"true"},
			{"arifle_CTAR_GL_blk_F",2400,"true"},
			{"arifle_CTAR_GL_hex_F",2400,"true"},
			{"arifle_CTAR_GL_ghex_F",2400,"true"},
//CAR-95-1
			{"arifle_CTARS_blk_F",1700,"true"},
			{"arifle_CTARS_hex_F",1700,"true"},
			{"arifle_CTARS_ghex_F",1700,"true"},
//SPAR-16
			{"arifle_SPAR_01_blk_F",1400,"true"},
			{"arifle_SPAR_01_khk_F",1400,"true"},
			{"arifle_SPAR_01_snd_F",1400,"true"},
			{"arifle_SPAR_01_GL_blk_F",2400,"true"},
			{"arifle_SPAR_01_GL_khk_F",2400,"true"},
			{"arifle_SPAR_01_GL_snd_F",2400,"true"},
//SPAR-17
			{"arifle_SPAR_03_blk_F",1700,"true"},
			{"arifle_SPAR_03_khk_F",1700,"true"},
			{"arifle_SPAR_03_snd_F",1700,"true"},
//AKU-12
			{"arifle_AK12U_F",2400,"true"},
			{"arifle_AK12U_lush_F",2400,"true"},
			{"arifle_AK12U_arid_F",2400,"true"},
//Promet
			{"arifle_MSBS65_F",2400,"true"},
			{"arifle_MSBS65_black_F",2400,"true"},
			{"arifle_MSBS65_sand_F",2400,"true"},
			{"arifle_MSBS65_camo_F",2400,"true"},

			{"arifle_MSBS65_Mark_F",2400,"true"},
			{"arifle_MSBS65_Mark_black_F",2400,"true"},
			{"arifle_MSBS65_Mark_sand_F",2400,"true"},
			{"arifle_MSBS65_Mark_camo_F",2400,"true"},

			{"arifle_MSBS65_GL_F",3900,"true"},
			{"arifle_MSBS65_GL_black_F",3900,"true"},
			{"arifle_MSBS65_GL_sand_F",3900,"true"},
			{"arifle_MSBS65_GL_camo_F",3900,"true"},

			{"arifle_MSBS65_UBS_F",3900,"true"},
			{"arifle_MSBS65_UBS_black_F",3900,"true"},
			{"arifle_MSBS65_UBS_sand_F",3900,"true"},
			{"arifle_MSBS65_UBS_camo_F",3900,"true"},
		};
	};

	class MarksmanRifle
	{
		displayName = "$STR_HG_WEAPONSHOP_MARKSMAN_RIFLE";
		content[] =
		{
//Rahim
			{"srifle_DMR_01_F",2850,"true"},
//Mk18
			{"srifle_EBR_F",2850,"true"},
//MXM
			{"arifle_MXM_F",2850,"true"},
			{"arifle_MXM_Black_F",2850,"true"},
			{"arifle_MXM_khk_F",2850,"true"},
//MAR-10
			{"srifle_DMR_02_F",2850,"true"},
			{"srifle_DMR_02_camo_F",2850,"true"},
			{"srifle_DMR_02_sniper_F",2850,"true"},
//Mk-I EMR
			{"srifle_DMR_03_F",2850,"true"},
			{"srifle_DMR_03_khaki_F",2850,"true"},
			{"srifle_DMR_03_tan_F",2850,"true"},
			{"srifle_DMR_03_multicam_F",2850,"true"},
			{"srifle_DMR_03_woodland_F",2850,"true"},
//ASP-1 Kir
			{"srifle_DMR_04_F",2850,"true"},
			{"srifle_DMR_04_Tan_F",2850,"true"},
//Cyrus
			{"srifle_DMR_05_blk_F",2850,"true"},
			{"srifle_DMR_05_hex_F",2850,"true"},
			{"srifle_DMR_05_tan_f",2850,"true"},
//Mk14
			{"srifle_DMR_06_camo_F",2850,"true"},
			{"srifle_DMR_06_olive_F",2850,"true"},
			{"srifle_DMR_06_hunter_F",2850,"true"},
			{"srifle_DMR_06_hunter_khs_F",2850,"true"},
//CMR-76
			{"srifle_DMR_07_blk_F",2850,"true"},
			{"srifle_DMR_07_hex_F",2850,"true"},
			{"srifle_DMR_07_ghex_F",2850,"true"},
		};
	};
	
	class MachineGun
	{
		displayName = "$STR_HG_WEAPONSHOP_MACHINE_GUN";
		content[] =
		{
//Mk200
			{"LMG_Mk200_F",2100,"true"},
			{"LMG_Mk200_black_F",2100,"true"},
			{"LMG_Mk200_BI_F",2100,"true"},
			{"LMG_Mk200_black_F",2100,"true"},
			{"LMG_Mk200_black_BI_F",2100,"true"},
//Zafir
			{"LMG_Zafir_F",3450,"true"},
//MX_SW
			{"arifle_MX_SW_F",3450,"true"},
			{"arifle_MX_SW_Black_F",3450,"true"},
			{"arifle_MX_SW_khk_F",3450,"true"},
//SPAR-16S
			{"arifle_SPAR_02_blk_F",2100,"true"},
			{"arifle_SPAR_02_khk_F",2100,"true"},
			{"arifle_SPAR_02_snd_F",2100,"true"},
//Navid
			{"MMG_01_hex_F",3450,"true"},
			{"MMG_01_tan_F",3450,"true"},
			{"MMG_01_hex_F",3450,"true"},
//SPMG
			{"MMG_02_camo_F",3450,"true"},
			{"MMG_02_black_F",3450,"true"},
			{"MMG_02_sand_F",3450,"true"},
//LIM-85
			{"LMG_03_F",2100,"true"},
//RPK-12
			{"arifle_RPK12_F",3450,"true"},
			{"arifle_RPK12_lush_F",3450,"true"},
			{"arifle_RPK12_arid_F",3450,"true"},
		};
	};
	
	class SniperRifle
	{
		displayName = "$STR_HG_WEAPONSHOP_SNIPER_RIFLE";
		content[] =
		{
//LRR
			{"srifle_LRR_F",3750,"true"},
			{"srifle_LRR_camo_F",3750,"true"},
			{"srifle_LRR_tna_F",3750,"true"},
//GM6 Lynx
			{"srifle_GM6_F",3750,"true"},
			{"srifle_GM6_ghex_F",3750,"true"},

		};
	};

	class Shotgun
	{
		displayName = "$STR_HG_WEAPONSHOP_SHOTGUN";
		content[] =
		{
//Kozlice 12G
			{"sgun_HunterShotgun_01_F",900,"true"},
			{"sgun_HunterShotgun_01_sawedoff_F",900,"true"}
		};
	};

	class RocketLauncher
	{
		displayName = "$STR_HG_WEAPONSHOP_ROCKETLAUNCHER";
		content[] =
		{
//NLAW
			{"launch_NLAW_F",2850,"true"},
//RPG32
			{"launch_RPG32_F",2850,"true"},
			{"launch_RPG32_ghex_F",2850,"true"},
			{"launch_RPG32_green_F",2850,"true"},
			{"launch_RPG32_camo_F",2850,"true"},
//RPG7
			{"launch_RPG7_F",1750,"true"},
//MAAWS
			{"launch_MRAWS_olive_rail_F",3300,"true"},
			{"launch_MRAWS_green_rail_F",3300,"true"},
			{"launch_MRAWS_sand_rail_F",3300,"true"},
		};
	};

	class MissileLauncher
	{
		displayName = "$STR_HG_WEAPONSHOP_MISSILELAUNCHER";
		content[] =
		{
//Titan
			{"launch_Titan_F",6900,"true"},
			{"launch_B_Titan_F",6900,"true"},
			{"launch_I_Titan_F",6900,"true"},
			{"launch_O_Titan_F",6900,"true"},
			{"launch_O_Titan_ghex_F",6900,"true"},
			{"launch_I_Titan_eaf_F",6900,"true"},
			{"launch_B_Titan_olive_F",6900,"true"},
//Titan Compact
			{"launch_Titan_short_F",6900,"true"},
			{"launch_B_Titan_short_F",6900,"true"},
			{"launch_I_Titan_short_F",6900,"true"},
			{"launch_O_Titan_short_F",6900,"true"},
			{"launch_B_Titan_tna_F",6900,"true"},
			{"launch_I_Titan_short_F",6900,"true"},
			{"launch_I_Titan_short_F",6900,"true"},
			{"launch_B_Titan_short_tna_F",6900,"true"},
			{"launch_O_Titan_short_ghex_F",6900,"true"},
//Vorona
			{"launch_O_Vorona_brown_F",6900,"true"},
			{"launch_O_Vorona_green_F",6900,"true"},
		};
	};
};
//VANILLA ========================================================================================================================================



//RHSUSF ========================================================================================================================================
class HG_WeaponShop_RHSUSF // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
		
	class Handgun
	{
		displayName = "$STR_HG_WEAPONSHOP_HANDGUN";
		content[] =
		{
//Glock17 (RHS)
			{"rhsusf_weap_glock17g4",900,"true"},
//M1911A1 (RHS)
			{"rhsusf_weap_m1911a1",1300,"true"},
//M9 (RHS)
			{"rhsusf_weap_m9",1500,"true"},
//M320 (RHS)
			{"rhsusf_weap_M320",5000,"true"},
		};
	};

	class SubmachineGun
	{
		displayName = "$STR_HG_WEAPONSHOP_SUB_MACHINE_GUN";
		content[] =
		{
//MP7A2
			{"rhsusf_weap_MP7A2",15000,"true"},
			{"rhsusf_weap_MP7A2_aor1",15000,"true"},
			{"rhsusf_weap_MP7A2_desert",15000,"true"},
			{"rhsusf_weap_MP7A2_winter",15000,"true"},
		};
	};
	
	class AssaultRifle
	{
		displayName = "$STR_HG_WEAPONSHOP_ASSAULT_RIFLE";
		content[] =
		{
//HK416

			{"rhs_weap_hk416d10",15000,"true"},
			{"rhs_weap_hk416d10_m320",35000,"true"},
			{"rhs_weap_hk416d10_LMT",15000,"true"},
			{"rhs_weap_hk416d10_LMT_d",15000,"true"},
			{"rhs_weap_hk416d10_LMT_wd",15000,"true"},

//HK416 W/14.5" BARREL

			{"rhs_weap_hk416d145",15000,"true"},
			{"rhs_weap_hk416d145_d",15000,"true"},
			{"rhs_weap_hk416d145_d_2",15000,"true"},
			{"rhs_weap_hk416d145_m320",35000,"true"},
			{"rhs_weap_hk416d145_wd",15000,"true"},
			{"rhs_weap_hk416d145_wd_2",15000,"true"},
//M16A4
			{"rhs_weap_m16a4",15000,"true"},
			{"rhs_weap_m16a4_carryhandle",15000,"true"},
			{"rhs_weap_m16a4_carryhandle_M203",30000,"true"},
			{"rhs_weap_m16a4_imod",15000,"true"},
			{"rhs_weap_m16a4_imod_M203",30000,"true"},
//M27IAR
			{"rhs_weap_m27iar",15000,"true"},
			{"rhs_weap_m27iar_grip",15000,"true"},
//M4
			{"rhs_weap_m4",15000,"true"},
			{"rhs_weap_m4_carryhandle",15000,"true"},
			{"rhs_weap_m4_m203",35000,"true"},
			{"rhs_weap_m4_carryhandle_m203S",35000,"true"},
			{"rhs_weap_m4_carryhandle_mstock",15000,"true"},
			{"rhs_weap_m4_m203",35000,"true"},
			{"rhs_weap_m4_m203S",35000,"true"},
			{"rhs_weap_m4_320",35000,"true"},
			{"rhs_weap_m4_mstock",15000,"true"},
//M4A1 (RHS)
			{"rhs_weap_m4a1_carryhandle",15000,"true"},
			{"rhs_weap_m4a1_carryhandle_m203",35000,"true"},
			{"rhs_weap_m4a1_carryhandle_m203S",35000,"true"},
			{"rhs_weap_m4a1_carryhandle_mstock",15000,"true"},
			{"rhs_weap_m4a1_blockII",15000,"true"},
			{"rhs_weap_m4a1_blockII_bk",15000,"true"},
			{"rhs_weap_m4a1_blockII_M203_bk",35000,"true"},
			{"rhs_weap_m4a1_blockII_KAC_bk",15000,"true"},
			{"rhs_weap_m4a1_blockII_d",15000,"true"},
			{"rhs_weap_m4a1_blockII_M203_d",35000,"true"},
			{"rhs_weap_m4a1_blockII_KAC_d",15000,"true"},
			{"rhs_weap_m4a1_blockII_M203",35000,"true"},
			{"rhs_weap_m4a1_blockII_KAC",15000,"true"},
			{"rhs_weap_m4a1_blockII_wd",15000,"true"},
			{"rhs_weap_m4a1_blockII_M203_wd",35000,"true"},
			{"rhs_weap_m4a1_blockII_KAC_wd",15000,"true"},
			{"rhs_weap_m4a1",15000,"true"},
			{"rhs_weap_m4a1_d",15000,"true"},
			{"rhs_weap_m4a1_m203s_d",35000,"true"},
			{"rhs_weap_m4a1_d_mstock",15000,"true"},
			{"rhs_weap_m4a1_m203",35000,"true"},
			{"rhs_weap_m4a1_m203s",35000,"true"},
			{"rhs_weap_m4a1_m320",35000,"true"},
			{"rhs_weap_m4a1_mstock",15000,"true"},
			{"rhs_weap_m4a1_wd",15000,"true"},
			{"rhs_weap_m4a1_m203s_wd",35000,"true"},
			{"rhs_weap_m4a1_wd_mstock",15000,"true"},
//Mk17Mod0
			{"rhs_weap_mk17_CQC",15000,"true"},
			{"rhs_weap_mk17_LB",15000,"true"},
			{"rhs_weap_mk17_STD",15000,"true"},
//MK18Mod1
			{"rhs_weap_mk18",15000,"true"},
			{"rhs_weap_mk18_bk",15000,"true"},
			{"rhs_weap_mk18_KAC_bk",15000,"true"},
			{"rhs_weap_mk18_d",15000,"true"},
			{"rhs_weap_mk18_KAC_d",15000,"true"},
			{"rhs_weap_mk18_m320",35000,"true"},
			{"rhs_weap_mk18_KAC",15000,"true"},
			{"rhs_weap_mk18_wd",15000,"true"},
			{"rhs_weap_mk18_KAC_wd",15000,"true"},
//Mk17 (RHS)
			{"rhs_weap_SCARH_USA_CQC",15000,"true"},
			{"rhs_weap_SCARH_USA_LB",15000,"true"},
			{"rhs_weap_SCARH_USA_STD",15000,"true"},
		};
	};

	class MarksmanRifle
	{
		displayName = "$STR_HG_WEAPONSHOP_MARKSMAN_RIFLE";
		content[] =
		{
//M14
			{"rhs_weap_m14",4000,"true"},
			{"rhs_weap_m14_d",4000,"true"},
			{"rhs_weap_m14_fiberglass",4000,"true"},
			{"rhs_weap_m14_rail",4000,"true"},
			{"rhs_weap_m14_rail_d",4000,"true"},
			{"rhs_weap_m14_rail_fiberglass",4000,"true"},
			{"rhs_weap_m14_rail_wd",4000,"true"},
			{"rhs_weap_m14_ris",4000,"true"},
			{"rhs_weap_m14_ris_d",4000,"true"},
			{"rhs_weap_m14_ris_fiberglass",4000,"true"},
			{"rhs_weap_m14_ris_wd",4000,"true"},
			{"rhs_weap_m14_wd",4000,"true"},
			{"rhs_weap_m14ebrri",8000,"true"},
//MK 11 Mod 0
			{"rhs_weap_sr25",5000,"true"},
			{"rhs_weap_sr25_d",5000,"true"},
			{"rhs_weap_sr25_ec",5000,"true"},
			{"rhs_weap_sr25_ec_d",5000,"true"},
			{"rhs_weap_sr25_ec_wd",5000,"true"},
			{"rhs_weap_sr25_wd",5000,"true"},
//SOCOM16
			{"rhs_weap_m14_socom",5000,"true"},
			{"rhs_weap_m14_socom_rail",5000,"true"},
		};
	};
	
	class MachineGun
	{
		displayName = "$STR_HG_WEAPONSHOP_MACHINE_GUN";
		content[] =
		{
//M240B
			{"rhs_weap_m240B",30000,"true"},
			{"rhs_weap_m240G",30000,"true"},
//M249
			{"rhs_weap_m249",30000,"true"},
			{"rhs_weap_m249_pip",30000,"true"},
			{"rhs_weap_m249_light_L",30000,"true"},
			{"rhs_weap_m249_pip_L_para",30000,"true"},
			{"rhs_weap_m249_pip_L",30000,"true"},
			{"rhs_weap_m249_pip_ris",30000,"true"},
			{"rhs_weap_m249_light_S",30000,"true"},
			{"rhs_weap_m249_pip_S_para",30000,"true"},
			{"rhs_weap_m249_pip_S",30000,"true"},

		};
	};
	
	class SniperRifle
	{
		displayName = "$STR_HG_WEAPONSHOP_SNIPER_RIFLE";
		content[] =
		{
//M107
			{"rhs_weap_M107",12000,"true"},
			{"rhs_weap_M107_d",12000,"true"},
			{"rhs_weap_M107_w",12000,"true"},
//M2010ESR
			{"rhs_weap_XM2010",8000,"true"},
			{"rhs_weap_XM2010_wd",8000,"true"},
			{"rhs_weap_XM2010_d",8000,"true"},
			{"rhs_weap_XM2010_sa",8000,"true"},
//M24SWS
			{"rhs_weap_m24sws",6000,"true"},
			{"rhs_weap_m24sws_d",6000,"true"},
			{"rhs_weap_m24sws_wd",6000,"true"},
//M40A5
			{"rhs_weap_m40a5",8000,"true"},
			{"rhs_weap_m40a5_d",8000,"true"},
			{"rhs_weap_m40a5_wd",8000,"true"},
		};
	};

	class Shotgun
	{
		displayName = "$STR_HG_WEAPONSHOP_SHOTGUN";
		content[] =
		{
//M590A1
			{"rhs_weap_M590_8RD",900,"true"},
			{"rhs_weap_M590_5RD",500,"true"},
		};
	};

		class GrenadeLauncher
	{
		displayName = "$STR_HG_WEAPONSHOP_GRENADELAUNCHER";
		content[] =
		{
//M32MGL
			{"rhs_weap_m32",150000,"true"},
		};
	};


	class RocketLauncher
	{
		displayName = "$STR_HG_WEAPONSHOP_ROCKETLAUNCHER";
		content[] =
		{
//M136 (RHS)
			{"rhs_weap_M136",3300,"true"},
			{"rhs_weap_M136_hedp",3300,"true"},
			{"rhs_weap_M136_hp",3300,"true"},
			{"rhs_weap_maaws",3300,"true"},
			{"rhs_weap_m72a7",3300,"true"},
			{"rhs_weap_smaw",3300,"true"},
			{"rhs_weap_smaw_green",3300,"true"},
		};
	};

	class MissileLauncher
	{
		displayName = "$STR_HG_WEAPONSHOP_MISSILELAUNCHER";
		content[] =
		{
//FGM-148 Javelin (RHS)
			{"rhs_weap_fgm148",6900,"true"},
			{"rhs_weap_fim92",6900,"true"},
		};
	};
};

class HG_GearShop_RHSUSF // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class Glasses
	{
		displayName = "$STR_HG_GEARSHOP_FACEWEARS";
		content[] =
		{
			{"rhs_googles_black",15,"true"},
			{"rhs_googles_clear",15,"true"},
			{"rhs_googles_orange",15,"true"},
			{"rhs_googles_yellow",15,"true"},
			{"rhs_ess_black",15,"true"},
			{"rhs_shemagh_grn",15,"true"},
			{"rhs_shemagh2_grn",15,"true"},
			{"rhs_shemagh_od",15,"true"},
			{"rhs_shemagh2_od",15,"true"},
			{"rhs_shemagh_tan",15,"true"},
			{"rhs_shemagh2_tan",15,"true"},
			{"rhs_shemagh_white",15,"true"},
			{"rhs_shemagh2_white",15,"true"},
			{"rhs_shemagh_gogg_grn",15,"true"},
			{"rhs_shemagh2_gogg_grn",15,"true"},
			{"rhs_shemagh_gogg_od",15,"true"},
			{"rhs_shemagh2_gogg_od",15,"true"},
			{"rhs_shemagh_gogg_tan",15,"true"},
			{"rhs_shemagh2_gogg_tan",15,"true"},
			{"rhs_shemagh_gogg_white",15,"true"},
			{"rhs_shemagh2_gogg_white",15,"true"},
			{"rhsusf_oakley_goggles_blk",15,"true"},
			{"rhsusf_oakley_goggles_clr",15,"true"},
			{"rhsusf_oakley_goggles_ylw",15,"true"},
			{"Mask_M40",675,"true"},
			{"Mask_M40_OD",675,"true"},
			{"Mask_M50",675,"true"},
		};
	};
	
	class Headgear
	{
		displayName = "$STR_HG_GEARSHOP_HEADGEARS";
		content[] =
		{
//ACH
			{"rhsusf_ach_bare",1500,"true"},
			{"rhsusf_ach_bare_des",1500,"true"},
			{"rhsusf_ach_bare_des_ess",1500,"true"},
			{"rhsusf_ach_bare_des_headset",1800,"true"},
			{"rhsusf_ach_bare_des_ess",1500,"true"},
			{"rhsusf_ach_bare_des_headset_ess",2000,"true"},
			{"rhsusf_ach_bare_ess",1500,"true"},
			{"rhsusf_ach_bare_headset",1800,"true"},
			{"rhsusf_ach_bare_headset_ess",2000,"true"},
			{"rhsusf_ach_bare_semi",1500,"true"},
			{"rhsusf_ach_bare_semi_ess",1500,"true"},
			{"rhsusf_ach_bare_semi_headset",1800,"true"},
			{"rhsusf_ach_bare_semi_headset_ess",2000,"true"},
			{"rhsusf_ach_bare_tan",1500,"true"},
			{"rhsusf_ach_bare_tan_ess",1500,"true"},
			{"rhsusf_ach_bare_tan_headset",1800,"true"},
			{"rhsusf_ach_bare_tan_headset_ess",2000,"true"},
			{"rhsusf_ach_bare_wood",1500,"true"},
			{"rhsusf_ach_bare_wood_ess",1500,"true"},
			{"rhsusf_ach_bare_wood_headset",1800,"true"},
			{"rhsusf_ach_bare_wood_headset_ess",2000,"true"},
			{"rhsusf_ach_helmet_DCU",1500,"true"},
			{"rhsusf_ach_helmet_DCU_early",1500,"true"},
			{"rhsusf_ach_helmet_DCU_early_rhino",1500,"true"},
			{"rhsusf_ach_helmet_M81",1500,"true"},
			{"rhsusf_ach_helmet_ocp",1500,"true"},
			{"rhsusf_ach_helmet_ocp_alt",1500,"true"},
			{"rhsusf_ach_helmet_ESS_ocp",1800,"true"},
			{"rhsusf_ach_helmet_ESS_ocp_alt",1800,"true"},
			{"rhsusf_ach_helmet_headset_ocp",1800,"true"},
			{"rhsusf_ach_helmet_headset_ocp_alt",2000,"true"},
			{"rhsusf_ach_helmet_headset_ess_ocp",2000,"true"},
			{"rhsusf_ach_helmet_headset_ess_ocp_alt",2000,"true"},
			{"rhsusf_ach_helmet_camo_ocp",1500,"true"},
			{"rhsusf_ach_helmet_camo_ocp_norotos",1500,"true"},
			{"rhsusf_ach_helmet_ucp",1500,"true"},
			{"rhsusf_ach_helmet_ucp_alt",1500,"true"},
			{"rhsusf_ach_helmet_ESS_ucp",1800,"true"},
			{"rhsusf_ach_helmet_ESS_ucp_alt",1800,"true"},
			{"rhsusf_ach_helmet_headset_ucp",1800,"true"},
			{"rhsusf_ach_helmet_headset_ucp_alt",1800,"true"},
			{"rhsusf_ach_helmet_headset_ess_ucp",2000,"true"},
			{"rhsusf_ach_helmet_headset_ess_ucp_alt",2000,"true"},
			{"rhsusf_ach_helmet_ucp_norotos",1500,"true"},
//ACVC-HMK-1697
			{"rhsusf_cvc_green_helmet",1800,"true"},
			{"rhsusf_cvc_green_alt_helmet",1800,"true"},
			{"rhsusf_cvc_green_ess",2000,"true"},
			{"rhsusf_cvc_helmet",1800,"true"},
			{"rhsusf_cvc_alt_helmet",1800,"true"},
			{"rhsusf_cvc_ess",2000,"true"},
//BooniehatM81
			{"rhs_Booniehat_m81",60,"true"},
			{"rhs_Booniehat2_marpatd",60,"true"},
			{"rhs_Booniehat2_marpatwd",60,"true"},
			{"rhs_Booniehat_ocp",60,"true"},
			{"rhs_Booniehat_ucp",60,"true"},
//BowmanElite11
			{"rhsusf_Bowman",150,"true"},
			{"rhsusf_bowman_cap",175,"true"},
//stupidshit
			{"rhs_xmas_antlers",10000,"true"},
//FASTBallistic
			{"rhsusf_opscore_aor1",1500,"true"},
			{"rhsusf_opscore_aor1_pelt",1800,"true"},
			{"rhsusf_opscore_aor1_pelt_nsw",1800,"true"},
			{"rhsusf_opscore_aor2",1500,"true"},
			{"rhsusf_opscore_aor2_pelt",1800,"true"},
			{"rhsusf_opscore_aor2_pelt_nsw",1800,"true"},
			{"rhsusf_opscore_bk",1500,"true"},
			{"rhsusf_opscore_bk_pelt",1500,"true"},
			{"rhsusf_opscore_coy_cover",1500,"true"},
			{"rhsusf_opscore_coy_cover_pelt",1500,"true"},
			{"rhsusf_opscore_fg_pelt",1500,"true"},
			{"rhsusf_opscore_fg_pelt_cam",2200,"true"},
			{"rhsusf_opscore_fg_pelt_cam_nsw",2200,"true"},
			{"rhsusf_opscore_mc_cover",1500,"true"},
			{"rhsusf_opscore_mc_cover_pelt",1500,"true"},
			{"rhsusf_opscore_mc_cover_pelt_nsw",1500,"true"},
			{"rhsusf_opscore_mc_cover_pelt_cam",2200,"true"},
			{"rhsusf_opscore_mc",1500,"true"},
			{"rhsusf_opscore_mc_pelt",1800,"true"},
			{"rhsusf_opscore_mc_pelt_nsw",1800,"true"},
			{"rhsusf_opscore_paint",1500,"true"},
			{"rhsusf_opscore_paint_pelt",1800,"true"},
			{"rhsusf_opscore_paint_pelt_nsw",1800,"true"},
			{"rhsusf_opscore_paint_pelt_nsw_cam",2200,"true"},
			{"rhsusf_opscore_rg_cover",1500,"true"},
			{"rhsusf_opscore_rg_cover_pelt",1800,"true"},
			{"rhsusf_opscore_ut",1500,"true"},
			{"rhsusf_opscore_ut_pelt",1800,"true"},
			{"rhsusf_opscore_ut_pelt_cam",2200,"true"},
			{"rhsusf_opscore_ut_pelt_nsw",1800,"true"},
			{"rhsusf_opscore_ut_pelt_nsw_cam",2200,"true"},
			{"rhsusf_opscore_mar_fg",1500,"true"},
			{"rhsusf_opscore_mar_fg_pelt",1800,"true"},
			{"rhsusf_opscore_mar_ut",1500,"true"},
			{"rhsusf_opscore_mar_ut_pelt",1800,"true"},
//HGU-56/P
			{"rhsusf_hgu56p_black",3500,"true"},
			{"rhsusf_hgu56p_mask_black",5000,"true"},
			{"rhsusf_hgu56p_mask_black_skull",5000,"true"},
			{"rhsusf_hgu56p_visor_black",5000,"true"},
			{"rhsusf_hgu56p_visor_mask_black",6000,"true"},
			{"rhsusf_hgu56p_visor_mask_Empire_black",6000,"true"},
			{"rhsusf_hgu56p_visor_mask_black_skull",6000,"true"},
			{"rhsusf_hgu56p_green",3500,"true"},
			{"rhsusf_hgu56p_mask_green_mo",5000,"true"},
			{"rhsusf_hgu56p_visor_green",5000,"true"},
			{"rhsusf_hgu56p_visor_mask_green",6000,"true"},
			{"rhsusf_hgu56p_visor_mask_green_mo",6000,"true"},
			{"rhsusf_hgu56p",3500,"true"},
			{"rhsusf_hgu56p_mask",5000,"true"},
			{"rhsusf_hgu56p_mask_mo",5000,"true"},
			{"rhsusf_hgu56p_mask_skull",5000,"true"},
			{"rhsusf_hgu56p_visor",5000,"true"},
			{"rhsusf_hgu56p_visor_mask",6000,"true"},
			{"rhsusf_hgu56p_visor_mask_mo",6000,"true"},
			{"rhsusf_hgu56p_visor_mask_mo",6000,"true"},
			{"rhsusf_hgu56p_pink",3500,"true"},
			{"rhsusf_hgu56p_mask_pink",3500,"true"},
			{"rhsusf_hgu56p_visor_pink",5000,"true"},
			{"rhsusf_hgu56p_visor_mask_pink",6000,"true"},
			{"rhsusf_hgu56p_saf",3500,"true"},
			{"rhsusf_hgu56p_mask_saf",5000,"true"},
			{"rhsusf_hgu56p_visor_saf",5000,"true"},
			{"rhsusf_hgu56p_visor_mask_saf",6000,"true"},
			{"rhsusf_hgu56p_mask_smiley",5000,"true"},
			{"rhsusf_hgu56p_visor_mask_smiley",6000,"true"},
			{"rhsusf_hgu56p_mask_tan",5000,"true"},
			{"rhsusf_hgu56p_visor_tan",5000,"true"},
			{"rhsusf_hgu56p_visor_mask_tan",6000,"true"},
			{"rhsusf_hgu56p_usa",3500,"true"},
			{"rhsusf_hgu56p_visor_usa",5000,"true"},
			{"rhsusf_hgu56p_white",3500,"true"},
			{"rhsusf_hgu56p_visor_white",5000,"true"},
//IHADSS
			{"rhsusf_ihadss",3500,"true"},
//JETPILOTHELMET
			{"RHS_jetpilot_usaf",8000,"true"},
//LWHM1942
			{"rhsusf_lwh_helmet_M1942",1500,"true"},
			{"rhsusf_lwh_helmet_marpatd",1500,"true"},
			{"rhsusf_lwh_helmet_marpatd_ess",1800,"true"},
			{"rhsusf_lwh_helmet_marpatd_headset",1800,"true"},
			{"rhsusf_lwh_helmet_marpatwd",1500,"true"},
			{"rhsusf_lwh_helmet_marpatwd_blk_ess",1800,"true"},
			{"rhsusf_lwh_helmet_marpatwd_headset_blk2",1800,"true"},
			{"rhsusf_lwh_helmet_marpatwd_headset_blk",1800,"true"},
			{"rhsusf_lwh_helmet_marpatwd_headset",1800,"true"},
			{"rhsusf_lwh_helmet_marpatwd_ess",1800,"true"},
//MICH2000
			{"rhsusf_mich_bare",1500,"true"},
			{"rhsusf_mich_bare_alt",1500,"true"},
			{"rhsusf_mich_bare_headset",1800,"true"},
			{"rhsusf_mich_bare_norotos",1800,"true"},
			{"rhsusf_mich_bare_norotos_alt",1800,"true"},
			{"rhsusf_mich_bare_norotos_alt_headset",1800,"true"},
			{"rhsusf_mich_bare_norotos_arc",1800,"true"},
			{"rhsusf_mich_bare_norotos_arc_alt",1800,"true"},
			{"rhsusf_mich_bare_norotos_arc_headset",1800,"true"},
			{"rhsusf_mich_bare_norotos_arc_alt_headset",1800,"true"},
			{"rhsusf_mich_bare_norotos_headset",1800,"true"},
			{"rhsusf_mich_bare_semi",1500,"true"},
			{"rhsusf_mich_bare_alt_semi",1500,"true"},
			{"rhsusf_mich_bare_semi_headset",1800,"true"},
			{"rhsusf_mich_bare_norotos_semi",1800,"true"},
			{"rhsusf_mich_bare_norotos_alt_semi",1800,"true"},
			{"rhsusf_mich_bare_norotos_alt_semi_headset",1800,"true"},
			{"rhsusf_mich_bare_norotos_arc_semi",1800,"true"},
			{"rhsusf_mich_bare_norotos_arc_alt_semi",1800,"true"},
			{"rhsusf_mich_bare_norotos_arc_alt_semi_semi",1800,"true"},
			{"rhsusf_mich_bare_norotos_arc_semi_headset",1800,"true"},
			{"rhsusf_mich_bare_norotos_semi_headset",1800,"true"},
			{"rhsusf_mich_bare_tan",1500,"true"},
			{"rhsusf_mich_bare_alt_tan",1500,"true"},
			{"rhsusf_mich_bare_tan_headset",1800,"true"},
			{"rhsusf_mich_bare_norotos_tan",1500,"true"},
			{"rhsusf_mich_bare_norotos_alt_tan",1500,"true"},
			{"rhsusf_mich_bare_norotos_alt_tan_headset",1800,"true"},
			{"rhsusf_mich_bare_norotos_arc_tan",1500,"true"},
			{"rhsusf_mich_bare_norotos_arc_alt_tan",1500,"true"},
			{"rhsusf_mich_bare_norotos_arc_alt_tan_headset",1800,"true"},
			{"rhsusf_mich_bare_norotos_tan_headset",1800,"true"},
			{"rhsusf_mich_helmet_marpatd",1500,"true"},
			{"rhsusf_mich_helmet_marpatd_alt",1500,"true"},
			{"rhsusf_mich_helmet_marpatd_alt_headset",1800,"true"},
			{"rhsusf_mich_helmet_marpatd_headset",1800,"true"},
			{"rhsusf_mich_helmet_marpatd_norotos",1500,"true"},
			{"rhsusf_mich_helmet_marpatd_norotos_arc",1500,"true"},
			{"rhsusf_mich_helmet_marpatd_norotos_arc_headset",1800,"true"},
			{"rhsusf_mich_helmet_marpatd_norotos_headset",1800,"true"},
			{"rhsusf_mich_helmet_marpatwd_alt",1500,"true"},
			{"rhsusf_mich_helmet_marpatwd_alt_headset",1800,"true"},
			{"rhsusf_mich_helmet_marpatwd_headset",1800,"true"},
			{"rhsusf_mich_helmet_marpatwd_norotos",1500,"true"},
			{"rhsusf_mich_helmet_marpatwd_norotos_arc",1500,"true"},
			{"rhsusf_mich_helmet_marpatwd_norotos_arc_headset",1800,"true"},
			{"rhsusf_mich_helmet_marpatwd_norotos_headset",1800,"true"},
//PATROLCAP
			{"rhsusf_patrolcap_ocp",50,"true"},
			{"rhsusf_patrolcap_ucp",50,"true"},
//pro-tech
			{"rhsusf_protech_helmet",350,"true"},
			{"rhsusf_protech_helmet_ess",350,"true"},
			{"rhsusf_protech_helmet_rhino",350,"true"},
			{"rhsusf_protech_helmet_ess",350,"true"},
//utilitycapmarpat-d
			{"rhs_8point_marpatd",75,"true"},
			{"rhs_8point_marpatwd",75,"true"},
	    };
	};

	class Uniform
	{
		displayName = "$STR_HG_GEARSHOP_UNIFORMS";
		content[] =
		{
            {"rhs_uniform_acu_ocp",200,"true"},
            {"rhs_uniform_acu_oefcp",200,"true"},
            {"rhs_uniform_acu_ucpd",200,"true"},
            {"rhs_uniform_acu_ucp",200,"true"},
            {"rhs_uniform_acu_ucp2",200,"true"},
			{"rhs_uniform_bdu_erdl",200,"true"},
//Combat Uniform OCP
            {"rhs_uniform_cu_ocp",200,"true"},
            {"rhs_uniform_cu_ocp_101st",200,"true"},
            {"rhs_uniform_cu_ocp_10th",200,"true"},
            {"rhs_uniform_cu_ocp_1stcav",200,"true"},
            {"rhs_uniform_cu_ocp_82nd",200,"true"},
//Combat Uniform UCP
            {"rhs_uniform_cu_ucp",200,"true"},
            {"rhs_uniform_cu_ucp_101st",200,"true"},
            {"rhs_uniform_cu_ucp_10th",200,"true"},
            {"rhs_uniform_cu_ucp_1stcav",200,"true"},
            {"rhs_uniform_cu_ucp_82nd",200,"true"},
            {"rhs_uniform_cu_ucp_FROG01_d",200,"true"},
            {"rhs_uniform_cu_ucp_FROG01_wd",200,"true"},
//FROG MARPAT
            {"rhs_uniform_FROG01_d",200,"true"},
            {"rhs_uniform_FROG01_wd",200,"true"},
//G3		
            {"rhs_uniform_g3_m81",200,"true"},
            {"rhs_uniform_g3_blk",200,"true"},
            {"rhs_uniform_g3_mc",200,"true"},
            {"rhs_uniform_g3_rgr",200,"true"},
            {"rhs_uniform_g3_tan",200,"true"},
		};
	};
	
	class Vest
	{
		displayName = "$STR_HG_GEARSHOP_VESTS";
		content[] =
		{					
//MBAV
			{"rhsusf_mbav",2000,"true"},
			{"rhsusf_mbav_grenadier",2400,"true"},
			{"rhsusf_mbav_light",2400,"true"},
			{"rhsusf_mbav_mg",2400,"true"},
			{"rhsusf_mbav_medic",2400,"true"},
			{"rhsusf_mbav_rifleman",2400,"true"},
//Plateframe
			{"rhsusf_plateframe_sapi",2000,"true"},
			{"rhsusf_plateframe_grenadier",2400,"true"},
			{"rhsusf_plateframe_light",2400,"true"},
			{"rhsusf_plateframe_machinegunner",2400,"true"},
			{"rhsusf_plateframe_marksman",2400,"true"},
			{"rhsusf_plateframe_medic",2400,"true"},
			{"rhsusf_plateframe_rifleman",2400,"true"},
			{"rhsusf_plateframe_teamleader",2400,"true"},
			//SPC		
			{"rhsusf_spc",2000,"true"},
			{"rhsusf_spc_corpsman",2400,"true"},
			{"rhsusf_spc_iar",2400,"true"},
			{"rhsusf_spc_light",2400,"true"},
			{"rhsusf_spc_marksman",2400,"true"},
			{"rhsusf_spc_patchless",2400,"true"},
			{"rhsusf_spc_patchless_radio",2400,"true"},
			{"rhsusf_spc_rifleman",2400,"true"},
			{"rhsusf_spc_sniper",2400,"true"},
			{"rhsusf_spc_squadleader",2400,"true"},
			{"rhsusf_spc_teamleader",2400,"true"},
			{"rhsusf_spc",2000,"true"},
			{"rhsusf_spc_corpsman",2400,"true"},
			{"rhsusf_spc_iar",2400,"true"},
			{"rhsusf_spc_light",2400,"true"},
			{"rhsusf_spc_marksman",2400,"true"},
			{"rhsusf_spc_patchless",2400,"true"},
			{"rhsusf_spc_patchless_radio",2400,"true"},
			{"rhsusf_spc_rifleman",2400,"true"},
			{"rhsusf_spc_sniper",2400,"true"},
			{"rhsusf_spc_squadleader",2400,"true"},
			{"rhsusf_spc_teamleader",2400,"true"},
			//SPCS		
			{"rhsusf_spcs_ocp_crewman",2400,"true"},
			{"rhsusf_spcs_ucp_crewman",2400,"true"},
			{"rhsusf_spcs_ocp_grenadier",2400,"true"},
			{"rhsusf_spcs_ucp_grenadier",2400,"true"},
			{"rhsusf_spcs_ocp_machinegunner",2400,"true"},
			{"rhsusf_spcs_ucp_machinegunner",2400,"true"},
			{"rhsusf_spcs_ocp_medic",2400,"true"},
			{"rhsusf_spcs_ucp_medic",2400,"true"},
			{"rhsusf_spcs_ocp",2400,"true"},
			{"rhsusf_spcs_ocp_rifleman_alt",2400,"true"},
			{"rhsusf_spcs_ucp_rifleman_alt",2400,"true"},
			{"rhsusf_spcs_ocp_rifleman",2400,"true"},
			{"rhsusf_spcs_ucp_riflemant",2400,"true"},
			{"rhsusf_spcs_ocp_saw",2400,"true"},
			{"rhsusf_spcs_ucp_saw",2400,"true"},
			{"rhsusf_spcs_ocp_sniper",2400,"true"},
			{"rhsusf_spcs_ucp_sniper",2400,"true"},
			{"rhsusf_spcs_ocp_squadleader",2400,"true"},
			{"rhsusf_spcs_ucp_squadleader",2400,"true"},
			{"rhsusf_spcs_ocp_teamleader_alt",2400,"true"},
			{"rhsusf_spcs_ucp_teamleader_alt",2400,"true"},
			{"rhsusf_spcs_ucp_teamleader",2400,"true"},
			{"rhsusf_spcs_ocp_teamleader",2400,"true"},
			{"rhsusf_spcs_ucp",2400,"true"},
			{"rhsusf_iotv_ocp_Grenadier",2700,"true"},
			{"rhsusf_iotv_ucp_Grenadier",2700,"true"},
			{"rhsusf_iotv_ocp_Medic",2700,"true"},
			{"rhsusf_iotv_ucp_Medic",2700,"true"},
			{"rhsusf_iotv_ocp",2000,"true"},
			{"rhsusf_iotv_ocp_Repair",2400,"true"},
			{"rhsusf_iotv_ucp_Repair",2400,"true"},
			{"rhsusf_iotv_ocp_Rifleman",2400,"true"},
			{"rhsusf_iotv_ucp_Rifleman",2400,"true"},
			{"rhsusf_iotv_ocp_Saw",2400,"true"},
			{"rhsusf_iotv_ucp_Saw",2400,"true"},
			{"rhsusf_iotv_ocp_Squadleader",2400,"true"},
			{"rhsusf_iotv_ucp_Squadleader",2400,"true"},
			{"rhsusf_iotv_ocp_Teamleader",2400,"true"},
			{"rhsusf_iotv_ucp_Teamleader",2400,"true"},
			{"rhsusf_iotv_ucp",2000,"true"},
		};
	};
	
	class Backpack
	{
		displayName = "$STR_HG_GEARSHOP_BACKPACKS";
		content[] =
		{
			{"rhsusf_assault_eagleaiii_coy",750,"true"},
			{"rhsusf_assault_eagleaiii_ocp",750,"true"},
			{"rhsusf_assault_eagleaiii_ucp",750,"true"},
			{"rhsusf_falconii_coy",750,"true"},
			{"rhsusf_falconii_mc",750,"true"},
			{"rhsusf_falconii",750,"true"},		
		};
	};
};
//RHSUSF ========================================================================================================================================


//RHSAFRF =========================================================================================================================================
class HG_WeaponShop_RHSAFRF // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
		
	class Handgun
	{
		displayName = "$STR_HG_WEAPONSHOP_HANDGUN";
		content[] =
		{
//PB			
			{"rhs_weap_6p53",600,"true"},
			{"rhs_weap_pb_6p9",300,"true"},
			{"rhs_weap_pbya",600,"true"},
			{"rhs_weap_makarov_pm",150,"true"},

//RSP30 (Handflares)			
			{"rhs_weap_rsp30_white",80,"true"},
			{"rhs_weap_rsp30_green",80,"true"},
			{"rhs_weap_rsp30_red",80,"true"},
//Trench Periscope	
			{"rhs_weap_tr8",200,"true"},
		};
	};

	class SubmachineGun
	{
		displayName = "$STR_HG_WEAPONSHOP_SUB_MACHINE_GUN";
		content[] =
		{
//PP2000
			{"rhs_weap_pp2000",9000,"true"},
		};
	};
	
	class AssaultRifle
	{
		displayName = "$STR_HG_WEAPONSHOP_ASSAULT_RIFLE";
		content[] =
		{
//AK-103			
			{"rhs_weap_ak103",15000,"true"},
			{"rhs_weap_ak103_1",15000,"true"},
			{"rhs_weap_ak103_1_npz",15000,"true"},
			{"rhs_weap_ak103_2",15000,"true"},
			{"rhs_weap_ak103_2_npz",15000,"true"},
			{"rhs_weap_ak103_npz",15000,"true"},
			{"rhs_weap_ak103_gp25",35000,"true"},
			{"rhs_weap_ak103_gp25_npz",35000,"true"},
			{"rhs_weap_ak103_zenitco01",15000,"true"},
			{"rhs_weap_ak103_zenitco01_b33",15000,"true"},
//AK-104			
			{"rhs_weap_ak104",15000,"true"},
			{"rhs_weap_ak104_npz",15000,"true"},
			{"rhs_weap_ak104_zenitco01",15000,"true"},
			{"rhs_weap_ak104_zenitco01_b33",15000,"true"},
//AK-105			
			{"rhs_weap_ak105",15000,"true"},
			{"rhs_weap_ak105_npz",15000,"true"},
			{"rhs_weap_ak105_zenitco01",15000,"true"},
			{"rhs_weap_ak105_zenitco01_b33",15000,"true"},
//AK-74			
			{"rhs_weap_ak74",15000,"true"},
			{"rhs_weap_ak74_gp25",35000,"true"},
			{"rhs_weap_ak74_3",15000,"true"},
			{"rhs_weap_ak74_2",15000,"true"},
			{"rhs_weap_ak74m",15000,"true"},
			{"rhs_weap_ak74m_npz",15000,"true"},
			{"rhs_weap_ak74m_camo",15000,"true"},
			{"rhs_weap_ak74m_camo_npz",15000,"true"},
			{"rhs_weap_ak74m_desert",15000,"true"},
			{"rhs_weap_ak74m_desert_npz",15000,"true"},
			{"rhs_weap_ak74m_gp25",35000,"true"},
			{"rhs_weap_ak74m_fullplum_gp25",35000,"true"},
			{"rhs_weap_ak74m_fullplum_gp25_npz",35000,"true"},
			{"rhs_weap_ak74m_fullplum_gp25",35000,"true"},
			{"rhs_weap_ak74m_fullplum",35000,"true"},
			{"rhs_weap_ak74m_fullplum_npz",15000,"true"},
			{"rhs_weap_ak74m_fullplum_zenitco01",15000,"true"},
			{"rhs_weap_ak74m_fullplum_zenitco01_b33",15000,"true"},
			{"rhs_weap_ak74mr",15000,"true"},
			{"rhs_weap_ak74mr_gp25",35000,"true"},
			{"rhs_weap_ak74n",15000,"true"},
			{"rhs_weap_ak74n_gp25",35000,"true"},
			{"rhs_weap_ak74n_gp25_npz",35000,"true"},
			{"rhs_weap_ak74n_npz",15000,"true"},
			{"rhs_weap_ak74n_2",15000,"true"},
			{"rhs_weap_ak74n_2_npz",15000,"true"},
			{"rhs_weap_ak74n_2_gp25",15000,"true"},
			{"rhs_weap_ak74n_2_gp25_npz",35000,"true"},
//AKM		
			{"rhs_weap_akm",15000,"true"},
			{"rhs_weap_akm_gp25",15000,"true"},
			{"rhs_weap_akm_zenitco01_b33",15000,"true"},
			{"rhs_weap_akmn",15000,"true"},
			{"rhs_weap_akmn_gp25",35000,"true"},
			{"rhs_weap_akmn_gp25_npz",15000,"true"},
			{"rhs_weap_akmn_npz",15000,"true"},
			{"rhs_weap_akms",15000,"true"},
			{"rhs_weap_akms_gp25",15000,"true"},
//AKS-74		
			{"rhs_weap_aks74",15000,"true"},
			{"rhs_weap_aks74_gp25",15000,"true"},
			{"rhs_weap_aks74_2",15000,"true"},
			{"rhs_weap_aks74n",15000,"true"},
			{"rhs_weap_aks74n_gp25",35000,"true"},
			{"rhs_weap_aks74n_gp25_npz",35000,"true"},
			{"rhs_weap_aks74n_npz",15000,"true"},
			{"rhs_weap_aks74n_2",15000,"true"},
			{"rhs_weap_aks74n_2_npz",15000,"true"},
//AKS-74U		
			{"rhs_weap_aks74u",15000,"true"},
			{"rhs_weap_aks74un",15000,"true"},
//AS VAL			
			{"rhs_weap_asval",15000,"true"},
			{"rhs_weap_asval_grip",15000,"true"},
			{"rhs_weap_asval_grip_npz",15000,"true"},
			{"rhs_weap_asval_npz",15000,"true"},
//PM-63
			{"rhs_weap_pm63",15000,"true"},
		};
	};

	class MarksmanRifle
	{
		displayName = "$STR_HG_WEAPONSHOP_MARKSMAN_RIFLE";
		content[] =
		{
//VSS			
			{"rhs_weap_vss",15000,"true"},
			{"rhs_weap_vss_grip",15000,"true"},
			{"rhs_weap_vss_grip_npz",15000,"true"},
			{"rhs_weap_vss_npz",15000,"true"},
		};
	};
	
	class MachineGun
	{
		displayName = "$STR_HG_WEAPONSHOP_MACHINE_GUN";
		content[] =
		{
//PKM
			{"rhs_weap_pkm",15000,"true"},
//PKP			
			{"rhs_weap_pkp",15000,"true"},
//RPK-74m			
			{"rhs_weap_rpk74m",15000,"true"},
			{"rhs_weap_rpk74m_npz",15000,"true"},
		};
	};
	
	class SniperRifle
	{
		displayName = "$STR_HG_WEAPONSHOP_SNIPER_RIFLE";
		content[] =
		{
//SVD			
			{"rhs_weap_svdp",15000,"true"},
			{"rhs_weap_svdp_wd",15000,"true"},
			{"rhs_weap_svdp_wd_npz",15000,"true"},
			{"rhs_weap_svdp_npz",15000,"true"},
			{"rhs_weap_svds",15000,"true"},
			{"rhs_weap_svds_npz",15000,"true"},
//T-5000			
			{"rhs_weap_t5000",15000,"true"},
		};
	};

	class Shotgun
	{
		displayName = "$STR_HG_WEAPONSHOP_SHOTGUN";
		content[] =
		{

		};
	};

		class GrenadeLauncher
	{
		displayName = "$STR_HG_WEAPONSHOP_GRENADELAUNCHER";
		content[] =
		{

		};
	};


	class RocketLauncher
	{
		displayName = "$STR_HG_WEAPONSHOP_ROCKETLAUNCHER";
		content[] =
		{
//RPG-18			
			{"rhs_weap_rpg18",600,"true"},
//RPG-26				
			{"rhs_weap_rpg26",600,"true"},
//RPG-7V2			
			{"rhs_weap_rpg7",600,"true"},
//RShG-2				
			{"rhs_weap_rshg2",600,"true"},

		};
	};

	class MissileLauncher
	{
		displayName = "$STR_HG_WEAPONSHOP_MISSILELAUNCHER";
		content[] =
		{
//9K38 Igla			
			{"rhs_weap_igla",600,"true"},
		};
	};
};


class HG_GearShop_RHSAFRF // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class Glasses
	{
		displayName = "$STR_HG_GEARSHOP_FACEWEARS";
		content[] =
		{
			{"rhs_facewear_6m2",600,"true"},
			{"rhs_facewear_6m2_1",600,"true"},
			{"rhs_balaclava",600,"true"},
			{"rhs_balaclava1_olive",600,"true"},
			{"rhs_scarf",600,"true"},
		};
	};
	
	class Headgear
	{
		displayName = "$STR_HG_GEARSHOP_HEADGEARS";
		content[] =
		{
//6B26			
			{"rhs_6b26_green",600,"true"},
			{"rhs_6b26_bala_green",600,"true"},
			{"rhs_6b26_ess_green",600,"true"},
			{"rhs_6b26_ess_bala_green",600,"true"},
			{"rhs_6b26_digi",600,"true"},
			{"rhs_6b26_digi_bala",600,"true"},
			{"rhs_6b26_digi_ess",600,"true"},
			{"rhs_6b26_digi_ess_bala",600,"true"},
			{"rhs_6b26",600,"true"},
			{"rhs_6b26_bala",600,"true"},
			{"rhs_6b26_ess",600,"true"},
			{"rhs_6b26_ess_bala",600,"true"},
//6B26M			
			{"rhs_6b27m_green",600,"true"},
			{"rhs_6b27m_green_bala",600,"true"},
			{"rhs_6b27m_green_ess",600,"true"},
			{"rhs_6b27m_digi",600,"true"},
			{"rhs_6b27m_digi_bala",600,"true"},
			{"rhs_6b27m_digi_ess",600,"true"},
			{"rhs_6b27m_digi_ess_bala",600,"true"},
//6B27M			
			{"rhs_6b27m",600,"true"},
			{"rhs_6b27m_bala",600,"true"},
			{"rhs_6b27m_ess",600,"true"},
			{"rhs_6b27m_ess_bala",600,"true"},
			{"rhs_6b27m_ml",600,"true"},
			{"rhs_6b27m_ml_bala",600,"true"},
			{"rhs_6b27m_ml_ess",600,"true"},
			{"rhs_6b27m_ML_ess_bala",600,"true"},
//6B28			
			{"rhs_6b28_green",600,"true"},
			{"rhs_6b28_green_bala",600,"true"},
			{"rhs_6b28_green_ess",600,"true"},
			{"rhs_6b28_green_ess_bala",600,"true"},
			{"rhs_6b28",600,"true"},
			{"rhs_6b28_bala",600,"true"},
			{"rhs_6b28_ess",600,"true"},
			{"rhs_6b28_ess_bala",600,"true"},
			{"rhs_6b28_flora",600,"true"},
			{"rhs_6b28_flora_bala",600,"true"},
			{"rhs_6b28_flora_ess",600,"true"},
			{"rhs_6b28_flora_ess_bala",600,"true"},
//6B47			
			{"rhs_6b47_bare",600,"true"},
			{"rhs_6b47",600,"true"},
			{"rhs_6b47_6m2_1",600,"true"},
			{"rhs_6b47_6m2",600,"true"},
			{"rhs_6b47_bala",600,"true"},
			{"rhs_6b47_bare_d",600,"true"},
			{"rhs_6b47_emr",600,"true"},
			{"rhs_6b47_emr_2",600,"true"},
			{"rhs_6b47_emr_1",600,"true"},
			{"rhs_6b47_6B50",600,"true"},
			{"rhs_6b47_ess",600,"true"},
			{"rhs_6b47_ess_bala",600,"true"},
//6B48			
			{"rhs_6b48",600,"true"},
//6B7-1M			
			{"rhs_6b7_1m",600,"true"},
			{"rhs_6b7_1m_bala1",600,"true"},
			{"rhs_6b7_1m_bala2",600,"true"},
			{"rhs_6b7_1m_emr",600,"true"},
			{"rhs_6b7_1m_bala2_emr",600,"true"},
			{"rhs_6b7_1m_bala1_emr",600,"true"},
			{"rhs_6b7_1m_emr_ess",600,"true"},
			{"rhs_6b7_1_emr_ess_bala",600,"true"},
			{"rhs_6b7_1m_ess",600,"true"},
			{"rhs_6b7_1m_ess_bala",600,"true"},
			{"rhs_6b7_1m_flora",600,"true"},
			{"rhs_6b7_1m_bala2_flora",600,"true"},
			{"rhs_6b7_1m_bala1_flora",600,"true"},
			{"rhs_6b7_1m_flora_ns3",600,"true"},
			{"rhs_6b7_1m_olive",600,"true"},
			{"rhs_6b7_1m_bala1_olive",600,"true"},
			{"rhs_6b7_1m_bala2_olive",600,"true"},
//6M2			
			{"rhs_6m2",600,"true"},
			{"rhs_6m2_1",600,"true"},
			
			{"rhs_altyn_novisor",600,"true"},
			{"rhs_altyn_novisor_bala",600,"true"},
			{"rhs_altyn_novisor_ess",600,"true"},
			{"rhs_altyn_novisor_ess_bala",600,"true"},
			{"rhs_altyn_visordown",600,"true"},
			{"rhs_altyn",600,"true"},
			{"rhs_altyn_bala",600,"true"},
//Beanie			
			{"rhs_beanie_green",600,"true"},
			{"rhs_beanie",600,"true"},
//Beret			
			{"rhs_beret_mp1",600,"true"},
			{"rhs_beret_mp2",600,"true"},
			{"rhs_beret_mvd",600,"true"},
			{"rhs_beret_omon",600,"true"},
			{"rhs_beret_vdv2",600,"true"},
			{"rhs_beret_vdv3",600,"true"},
			{"rhs_beret_vdv_early",600,"true"},
			{"rhs_beret_vdv1",600,"true"},
			{"rhs_beret_milp",600,"true"},
//Boonie Hat			
			{"rhs_Booniehat_digi",600,"true"},
			{"rhs_Booniehat_flora",600,"true"},
//Cossack			
			{"rhs_cossack_visor_cap",600,"true"},
			{"rhs_cossack_visor_cap_tan",600,"true"},
			{"rhs_cossack_papakha",600,"true"},
//Field Cap			
			{"rhs_fieldcap",600,"true"},
			{"rhs_fieldcap_helm_digi",600,"true"},
			{"rhs_fieldcap_helm_ml",600,"true"},
			{"rhs_fieldcap_helm",600,"true"},
			{"rhs_fieldcap_digi",600,"true"},
			{"rhs_fieldcap_digi2",600,"true"},
			{"rhs_fieldcap_izlom",600,"true"},
			{"rhs_fieldcap_m88",600,"true"},
			{"rhs_fieldcap_m88_back",600,"true"},
			{"rhs_fieldcap_m88_grey",600,"true"},
			{"rhs_fieldcap_m88_grey_back",600,"true"},
			{"rhs_fieldcap_m88_klmk",600,"true"},
			{"rhs_fieldcap_m88_klmk_back",600,"true"},
			{"rhs_fieldcap_m88_moldovan_ttsko_blue",600,"true"},
			{"rhs_fieldcap_m88_moldovan_ttsko_blue_back",600,"true"},
			{"rhs_fieldcap_m88_moldovan_ttsko_cold",600,"true"},
			{"rhs_fieldcap_m88_moldovan_ttsko_cold_back",600,"true"},
			{"rhs_fieldcap_m88_moldovan_ttsko_desat",600,"true"},
			{"rhs_fieldcap_m88_moldovan_ttsko_desat_back",600,"true"},
			{"rhs_fieldcap_m88_moldovan_ttsko_hot",600,"true"},
			{"rhs_fieldcap_m88_moldovan_ttsko_hot_back",600,"true"},
			{"rhs_fieldcap_m88_ttsko_alt",600,"true"},
			{"rhs_fieldcap_m88_ttsko_alt_back",600,"true"},
			{"rhs_fieldcap_m88_ttsko_vdv",600,"true"},
			{"rhs_fieldcap_m88_ttsko_vdv_back",600,"true"},
			{"rhs_fieldcap_m88_ttsko",600,"true"},
			{"rhs_fieldcap_m88_ttsko_back",600,"true"},
			{"rhs_fieldcap_m88_vsr_2",600,"true"},
			{"rhs_fieldcap_m88_vsr_2_back",600,"true"},
			{"rhs_fieldcap_m88_vsr",600,"true"},
			{"rhs_fieldcap_m88_vsr_back",600,"true"},
			{"rhs_fieldcap_m88_woodland",600,"true"},
			{"rhs_fieldcap_m88_woodland_back",600,"true"},
			{"rhs_fieldcap_ml",600,"true"},
			{"rhs_fieldcap_early",600,"true"},
			{"rhs_fieldcap_khk",600,"true"},
			{"rhs_fieldcap_vsr",600,"true"},
//GSSh-A-18			
			{"rhs_gssh18",600,"true"},
//Headband			
			{"rhs_headband",600,"true"},
//OMON Cap			
			{"rhs_omon_cap",600,"true"},
//Pilotka			
			{"rhs_pilotka",600,"true"},
//SSh-60			
			{"rhs_ssh60",600,"true"},
			{"rhs_ssh68_2",600,"true"},
//STSh-81			
			{"rhs_stsh81",600,"true"},
			{"rhs_stsh81_butan",600,"true"},
//TSh-4			
			{"rhs_tsh4",600,"true"},
			{"rhs_tsh4_bala",600,"true"},
			{"rhs_tsh4_ess",600,"true"},
			{"rhs_tsh4_ess_bala",600,"true"},
//Ushanka			
			{"rhs_ushanka",600,"true"},
//VPKO Field Cap			
			{"rhs_vkpo_cap",600,"true"},
			{"rhs_vkpo_cap_alt",600,"true"},
//ZSh-7A			
			{"rhs_zsh7a_mike_green",600,"true"},
			{"rhs_zsh7a_mike",600,"true"},
			{"rhs_zsh7a_mike_alt",600,"true"},
			{"rhs_zsh7a_mike_green_alt",600,"true"},
			{"rhs_zsh7a_mike_zsh7a",600,"true"},
			{"rhs_zsh7a_mike_zsh7a_alt",600,"true"},
	    };
	};

	class Uniform
	{
		displayName = "$STR_HG_GEARSHOP_UNIFORMS";
		content[] =
		{
//6Sh122			
			{"rhs_uniform_6sh122_v2",600,"true"},
			{"rhs_uniform_6sh122_gloves_v2",600,"true"},
			{"rhs_uniform_6sh122_v1",600,"true"},
			{"rhs_uniform_6sh122_gloves_v1",600,"true"},
//Cossack Uniform			
			{"rhs_uniform_cossack",600,"true"},
//DF-15-2			
			{"rhs_uniform_df15",600,"true"},
			{"rhs_uniform_df15_tan",600,"true"},
//EMR-Desert			
			{"rhs_uniform_emr_des_patchless",600,"true"},
			{"rhs_uniform_vdv_emr_des",600,"true"},
			{"rhs_uniform_emr_patchless",600,"true"},
			{"rhs_uniform_vdv_emr",600,"true"},
			{"rhs_uniform_flora_patchless",600,"true"},
			{"rhs_uniform_flora_patchless_alt",600,"true"},
			{"rhs_uniform_flora",600,"true"},
			{"rhs_uniform_rva_flora",600,"true"},
			{"rhs_uniform_vdv_flora",600,"true"},
			{"rhs_uniform_vmf_flora",600,"true"},
			{"rhs_uniform_vmf_flora_subdued",600,"true"},
//Gorka-R			
			{"rhs_uniform_gorka_r_g",600,"true"},
			{"rhs_uniform_gorka_r_g_gloves",600,"true"},
			{"rhs_uniform_gorka_r_y",600,"true"},
			{"rhs_uniform_gorka_r_y_gloves",600,"true"},
			{"rhs_uniform_gorka_1_a",600,"true"},
			{"rhs_uniform_gorka_1_b",600,"true"},
//Izlom
			{"rhs_uniform_mvd_izlom",600,"true"},
//KLMK Oversuit			
			{"rhs_uniform_klmk_oversuit",600,"true"},
//M88
			{"rhs_uniform_afghanka",600,"true"},
			{"rhs_uniform_afghanka_grey",600,"true"},
			{"rhs_uniform_afghanka_klmk",600,"true"},
			{"rhs_uniform_afghanka_moldovan_ttsko_blue",600,"true"},
			{"rhs_uniform_afghanka_moldovan_ttsko_cold",600,"true"},
			{"rhs_uniform_afghanka_moldovan_ttsko_desat",600,"true"},
			{"rhs_uniform_afghanka_moldovan_ttsko_hot",600,"true"},
			{"rhs_uniform_afghanka_spetsodezhda",600,"true"},
			{"rhs_uniform_afghanka_ttsko",600,"true"},
			{"rhs_uniform_afghanka_ttsko_2",600,"true"},
			{"rhs_uniform_afghanka_vsr_1",600,"true"},
			{"rhs_uniform_afghanka_vsr_2",600,"true"},
			{"rhs_uniform_afghanka_vsr_3",600,"true"},
			{"rhs_uniform_afghanka_wdl",600,"true"},
			{"rhs_uniform_afghanka_boots",600,"true"},
			{"rhs_uniform_afghanka_boots_moldovan_ttsko_cold",600,"true"},
			{"rhs_uniform_afghanka_boots_moldovan_ttsko_desat",600,"true"},
			{"rhs_uniform_afghanka_boots_moldovan_ttsko_hot",600,"true"},
			{"rhs_uniform_afghanka_boots_spetsodezhda",600,"true"},
			{"rhs_uniform_afghanka_boots_ttsko",600,"true"},
			{"rhs_uniform_afghanka_para",600,"true"},
			{"rhs_uniform_afghanka_para_ttsko",600,"true"},
			{"rhs_uniform_afghanka_para_ttsko_2",600,"true"},
			{"rhs_uniform_afghanka_para_vsr",600,"true"},
			{"rhs_uniform_afghanka_para_vsr_2",600,"true"},
			{"rhs_uniform_afghanka_winter",600,"true"},
			{"rhs_uniform_afghanka_winter_moldovan_ttsko",600,"true"},
			{"rhs_uniform_afghanka_winter_spetsodezhda",600,"true"},
			{"rhs_uniform_afghanka_winter_ttsko",600,"true"},
			{"rhs_uniform_afghanka_winter_vsr",600,"true"},
			{"rhs_uniform_afghanka_winter_vsr_2",600,"true"},
			{"rhs_uniform_afghanka_winter_vsr_3",600,"true"},
			{"rhs_uniform_afghanka_winter_boots",600,"true"},
			{"rhs_uniform_afghanka_winter_boots_moldovan_ttsko",600,"true"},
			{"rhs_uniform_afghanka_winter_boots_spetsodezhda",600,"true"},
			{"rhs_uniform_afghanka_winter_boots_ttsko",600,"true"},
			{"rhs_uniform_afghanka_winter_boots_vsr",600,"true"},
			{"rhs_uniform_afghanka_winter_boots_vsr_2",600,"true"},
			{"rhs_uniform_mflora_patchless",600,"true"},
			{"rhs_uniform_vdv_mflora",600,"true"},
			{"rhs_uniform_omon",600,"true"},
			{"rhs_uniform_vkpo",600,"true"},
			{"rhs_uniform_vkpo_alt",600,"true"},
			{"rhs_uniform_vkpo_gloves",600,"true"},
			{"rhs_uniform_vkpo_gloves_alt",600,"true"},
		};
	};
	
	class Vest
	{
		displayName = "$STR_HG_GEARSHOP_VESTS";
		content[] =
		{
//6B13			
			{"rhs_6b13_Flora",2700,"true"},
			{"rhs_6b13_Flora_6sh92",2700,"true"},
			{"rhs_6b13_Flora_6sh92_headset_mapcase",2700,"true"},
			{"rhs_6b13_Flora_6sh92_radio",2700,"true"},
			{"rhs_6b13_Flora_6sh92_vog",2700,"true"},
			{"rhs_6b13_Flora_crewofficer",2700,"true"},
			{"rhs_6b13_EMR",2700,"true"},
			{"rhs_6b13_EMR_6sh92",2700,"true"},
			{"rhs_6b13_EMR_6sh92_radio",2700,"true"},
			{"rhs_6b13_EMR_6sh92_vog",2700,"true"},
			{"rhs_6b13_EMR_6sh92_headset_mapcase",2700,"true"},
			{"rhs_6b13",2700,"true"},
			{"rhs_6b13_6sh92",2700,"true"},
			{"rhs_6b13_6sh92_headset_mapcase",2700,"true"},
			{"rhs_6b13_6sh92_radio",2700,"true"},
			{"rhs_6b13_6sh92_vog",2700,"true"},
			{"rhs_6b13_crewofficer",2700,"true"},
//6B2			
			{"rhs_6b2",2700,"true"},
			{"rhs_6b2_AK",2700,"true"},
			{"rhs_6b2_chicom",2700,"true"},
			{"rhs_6b2_holster",2700,"true"},
			{"rhs_6b2_lifchik",2700,"true"},
			{"rhs_6b2_RPK",2700,"true"},
			{"rhs_6b2_SVD",2700,"true"},
//6B23			
			{"rhs_6b23",2700,"true"},
			{"rhs_6b23_6sh116_od",2700,"true"},
			{"rhs_6b23_6sh116_vog_od",2700,"true"},
			{"rhs_6b23_6sh92",2700,"true"},
			{"rhs_6b23_6sh92_headset",2700,"true"},
			{"rhs_6b23_6sh92_headset_mapcase",2700,"true"},
			{"rhs_6b23_6sh92_radio",2700,"true"},
			{"rhs_6b23_6sh92_vog",2700,"true"},
			{"rhs_6b23_6sh92_vog_headset",2700,"true"},
			{"rhs_6b23_crewofficer",2700,"true"},
			{"rhs_6b23_crew",2700,"true"},
			{"rhs_6b23_engineer",2700,"true"},
			{"rhs_6b23_medic",2700,"true"},
			{"rhs_6b23_rifleman",2700,"true"},
			{"rhs_6b23_sniper",2700,"true"},
			{"rhs_6b23_vydra_3m",2700,"true"},
			{"rhs_6b23_digi",2700,"true"},
			{"rhs_6b23_6sh116",2700,"true"},
			{"rhs_6b23_6sh116_vog",2700,"true"},
			{"rhs_6b23_digi_6sh92",2700,"true"},
			{"rhs_6b23_digi_6sh92_spetsnaz2",2700,"true"},
			{"rhs_6b23_digi_6sh92_headset",2700,"true"},
			{"rhs_6b23_digi_6sh92_headset_spetsnaz",2700,"true"},
			{"rhs_6b23_digi_6sh92_headset_mapcase",2700,"true"},
			{"rhs_6b23_digi_6sh92_radio",2700,"true"},
			{"rhs_6b23_digi_6sh92_Spetsnaz",2700,"true"},
			{"rhs_6b23_digi_6sh92_vog",2700,"true"},
			{"rhs_6b23_digi_6sh92_Vog_Spetsnaz",2700,"true"},
			{"rhs_6b23_digi_6sh92_vog_headset",2700,"true"},
			{"rhs_6b23_digi_6sh92_Vog_Radio_Spetsnaz",2700,"true"},
			{"rhs_6b23_digi_crewofficer",2700,"true"},
			{"rhs_6b23_digi_crew",2700,"true"},
			{"rhs_6b23_digi_engineer",2700,"true"},
			{"rhs_6b23_digi_medic",2700,"true"},
			{"rhs_6b23_digi_rifleman",2700,"true"},
			{"rhs_6b23_digi_sniper",2700,"true"},
			{"rhs_6b23_digi_vydra_3m",2700,"true"},
			{"rhs_6b23_6sh116_flora",2700,"true"},
			{"rhs_6b23_6sh116_vog_flora",2700,"true"},
			{"rhs_6b23_6sh116_mixed",2700,"true"},
			{"rhs_6b23_6sh116_vog_mixed",2700,"true"},
			{"rhs_6b23_ML",2700,"true"},
			{"rhs_6b23_ML_6sh92",2700,"true"},
			{"rhs_6b23_ML_6sh92_headset",2700,"true"},
			{"rhs_6b23_ML_6sh92_headset_mapcase",2700,"true"},
			{"rhs_6b23_ML_6sh92_radio",2700,"true"},
			{"rhs_6b23_ML_6sh92_vog",2700,"true"},
			{"rhs_6b23_ML_6sh92_vog_headset",2700,"true"},
			{"rhs_6b23_ML_crewofficer",2700,"true"},
			{"rhs_6b23_ML_crew",2700,"true"},
			{"rhs_6b23_ML_engineer",2700,"true"},
			{"rhs_6b23_ML_medic",2700,"true"},
			{"rhs_6b23_ML_rifleman",2700,"true"},
			{"rhs_6b23_ML_sniper",2700,"true"},
			{"rhs_6b23_ML_vydra_3m",2700,"true"},
//6B3			
			{"rhs_6b3",2700,"true"},
			{"rhs_6b3_holster",2700,"true"},
			{"rhs_6b3_off",2700,"true"},
			{"rhs_6b3_R148",2700,"true"},
			{"rhs_6b3_AK",2700,"true"},
			{"rhs_6b3_AK_2",2700,"true"},
			{"rhs_6b3_AK_3",2700,"true"},
			{"rhs_6b3_RPK",2700,"true"},
			{"rhs_6b3_VOG",2700,"true"},
			{"rhs_6b3_VOG_2",2700,"true"},
//6B43			
		    {"rhs_6b43",2700,"true"},
//6B45			
		    {"rhs_6b45",2700,"true"},
		    {"rhs_6b45_desert",2700,"true"},
		    {"rhs_6b45_holster",2700,"true"},
		    {"rhs_6b45_light",2815,"true"},
		    {"rhs_6b45_mg",3000,"true"},
		    {"rhs_6b45_off",2925,"true"},
		    {"rhs_6b45_rifleman",2925,"true"},
		    {"rhs_6b45_rifleman_2",2925,"true"},
		    {"rhs_6b45_grn",3000,"true"},
//6B5			
			{"rhs_6b5_khaki",2700,"true"},
			{"rhs_6b5_rifleman_khaki",2700,"true"},
			{"rhs_6b5_medic_khaki",2700,"true"},
			{"rhs_6b5_officer_khaki",2700,"true"},
			{"rhs_6b5_sniper_khaki",2700,"true"},
			
			{"rhs_6b5_spetsodezhda",2700,"true"},
			{"rhs_6b5_rifleman_spetsodezhda",2700,"true"},
			{"rhs_6b5_medic_spetsodezhda",2700,"true"},
			{"rhs_6b5_officer_spetsodezhda",2700,"true"},
			{"rhs_6b5_sniper_spetsodezhda",2700,"true"},
			
			{"rhs_6b5",2700,"true"},
			{"rhs_6b5_rifleman",2700,"true"},
			{"rhs_6b5_medic",2700,"true"},
			{"rhs_6b5_officer",2700,"true"},
			{"rhs_6b5_sniper",2700,"true"},
			{"rhs_6b5_ttsko",2700,"true"},
			{"rhs_6b5_rifleman_ttsko",2700,"true"},
			{"rhs_6b5_medic_ttsko",2700,"true"},
			{"rhs_6b5_officer_ttsko",2700,"true"},
			{"rhs_6b5_sniper_ttsko",2700,"true"},
			
			{"rhs_6b5_vsr",2700,"true"},
			{"rhs_6b5_rifleman_vsr",2700,"true"},
			{"rhs_6b5_medic_vsr",2700,"true"},
			{"rhs_6b5_officer_vsr",2700,"true"},
			{"rhs_6b5_sniper_vsr",2700,"true"},
//6sh117			
			{"rhs_6sh117_mg",2700,"true"},
			{"rhs_6sh117_rifleman",2700,"true"},
			{"rhs_6sh117_ar",2700,"true"},
			{"rhs_6sh117_nco",2700,"true"},
			{"rhs_6sh117_nco_azart",2700,"true"},
			{"rhs_6sh117_svd",2700,"true"},
			{"rhs_6sh117_val",2700,"true"},
			{"rhs_6sh117_grn",2700,"true"},
//6sh92			
			{"rhs_6sh92",2700,"true"},
			{"rhs_6sh92_headset",2700,"true"},
			{"rhs_6sh92_radio",2700,"true"},
			{"rhs_6sh92_vog",2700,"true"},
			{"rhs_6sh92_vog_headset",2700,"true"},
			{"rhs_6sh92_digi",2700,"true"},
			{"rhs_6sh92_digi_headset",2700,"true"},
			{"rhs_6sh92_digi_radio",2700,"true"},
			{"rhs_6sh92_digi_vog",2700,"true"},
			{"rhs_6sh92_digi_vog_headset",2700,"true"},
			
			{"rhs_6sh92_vsr",2700,"true"},
			{"rhs_6sh92_vsr_headset",2700,"true"},
			{"rhs_6sh92_vsr_radio",2700,"true"},
			{"rhs_6sh92_vsr_vog",2700,"true"},
			{"rhs_6sh92_vsr_vog_headset",2700,"true"},
//Belt Equipment			
			{"rhs_belt_sks",2700,"true"},
			{"rhs_belt_AK4",2700,"true"},
			{"rhs_belt_AK4_back",2700,"true"},
			{"rhs_belt_RPK",2700,"true"},
			{"rhs_belt_AK_GL",2700,"true"},
			{"rhs_belt_holster",2700,"true"},
			{"rhs_belt_AK",2700,"true"},
			{"rhs_belt_AK_back",2700,"true"},
			{"rhs_belt_svd",2700,"true"},
//Chicom Chest Rig			
			{"rhs_chicom",2700,"true"},
			{"rhs_chicom_khk",2700,"true"},
//Lifchik Chest Rig			
			{"rhs_lifchik_NCO",2700,"true"},
			{"rhs_lifchik_vog",2700,"true"},
			{"rhs_lifchik",2700,"true"},
			{"rhs_lifchik_light",2700,"true"},
//Mapcase and Holster			
			{"rhs_vest_commander",2700,"true"},
//Officer Gear			
			{"rhs_gear_OFF",2700,"true"},
//Pistol Holster			
			{"rhs_vest_pistol_holster",2700,"true"},
//Susupender Equipment		
			{"rhs_suspender_AK8_chestrig",2700,"true"},
			{"rhs_suspender_AK",2700,"true"},
			{"rhs_suspender_AK4",2700,"true"},
			{"rhs_suspender_SKS",2700,"true"},
//Vydra-3M			
			{"rhs_vydra_3m",2700,"true"},
		};
	};
	
	class Backpack
	{
		displayName = "$STR_HG_GEARSHOP_BACKPACKS";
		content[] =
		{
			{"rhs_rd54",600,"true"},
			{"rhs_rd54_emr1",600,"true"},
			{"rhs_rd54_flora2",600,"true"},
			{"rhs_rd54_flora1",600,"true"},
			{"rhs_rd54_vest",600,"true"},
			{"rhs_rd54_vest_emr1",600,"true"},
			{"rhs_rd54_vest_flora2",600,"true"},
			{"rhs_rd54_vest_flora1",600,"true"},
			{"rhs_rk_sht_30_emr",600,"true"},
			{"rhs_rk_sht_30_emr_engineer_empty",600,"true"},
			{"rhs_rk_sht_30_olive",600,"true"},
			{"rhs_rk_sht_30_olive_engineer_empty",600,"true"},
			{"rhs_rpg_empty",600,"true"},
			{"rhs_rpg_2",600,"true"},
			{"rhs_rpg_6b2",600,"true"},
			{"rhs_rpg_6b3",600,"true"},
			{"rhs_sidor",600,"true"},
			{"rhs_tortila_black",600,"true"},
			{"rhs_tortila_emr",600,"true"},
			{"rhs_tortila_grey",600,"true"},
			{"rhs_tortila_khaki",600,"true"},
			{"rhs_tortila_olive",600,"true"},
			{"rhs_assault_umbts",600,"true"},
			{"rhs_assault_umbts_engineer_empty",600,"true"},
		};
	};
};
//RHSAFRF =========================================================================================================================================



//RHSGREF =========================================================================================================================================
class HG_WeaponShop_RHSGREF // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
		
	class Handgun
	{
		displayName = "$STR_HG_WEAPONSHOP_HANDGUN";
		content[] =
		{
//SAV61
			{"rhs_weap_sav61_folded",12000,"true"},
//TT-33
			{"rhs_weap_tt33",300,"true"}, 
//Type94
			{"rhs_weap_type94_new",300,"true"},
		};
	};

	class SubmachineGun
	{
		displayName = "$STR_HG_WEAPONSHOP_SUB_MACHINE_GUN";
		content[] =
		{
		    	{"rhs_weap_m3a1",600,"true"},
		    	{"rhs_weap_m3a1_specops",600,"true"},
		    	{"rhs_weap_savz61",600,"true"},
		};
	};
	
	class AssaultRifle
	{
		displayName = "$STR_HG_WEAPONSHOP_ASSAULT_RIFLE";
		content[] =
		{
		    	{"rhs_weap_m70ab2",600,"true"},
		    	{"rhs_weap_m70b1",600,"true"},
		    	{"rhs_weap_m92",600,"true"},
		    	{"rhs_weap_m21a",600,"true"},
		    	{"rhs_weap_m21a_pr",600,"true"},
		    	{"rhs_weap_m21s",600,"true"},
		    	{"rhs_weap_m21s_pr",600,"true"},
		    	{"rhs_weap_m21a",600,"true"},
		    	{"rhs_weap_mp44",600,"true"},
		    	{"rhs_weap_savz58p",600,"true"},
		    	{"rhs_weap_savz58p_black",600,"true"},
		    	{"rhs_weap_savz58p_rail",600,"true"},
		    	{"rhs_weap_savz58p_rail_black",600,"true"},
		    	{"rhs_weap_savz58v",600,"true"},
		    	{"rhs_weap_savz58v_black",600,"true"},
		    	{"rhs_weap_savz58v_rail",600,"true"},
		    	{"rhs_weap_savz58v_rail_black",600,"true"},
		    	{"rhs_weap_savz58v_ris",600,"true"},
		    	{"rhs_weap_vhsd2",600,"true"},
		    	{"rhs_weap_vhsd2_ct15x",600,"true"},
		    	{"rhs_weap_vhsd2_bg",600,"true"},
		    	{"rhs_weap_vhsd2_bg_ct15x",600,"true"},
		    	{"rhs_weap_vhsk2",600,"true"},
		};
	};

	class MarksmanRifle
	{
		displayName = "$STR_HG_WEAPONSHOP_MARKSMAN_RIFLE";
		content[] =
		{
		    	{"rhs_weap_l1a1",600,"true"},
		    	{"rhs_weap_l1a1_wood",600,"true"},
		    	{"rhs_weap_m76",600,"true"},
		    	{"rhs_weap_m1garand_sa43",600,"true"},
		};
	};
	
	class MachineGun
	{
		displayName = "$STR_HG_WEAPONSHOP_MACHINE_GUN";
		content[] =
		{
		    	{"rhs_weap_fnmag",600,"true"},
		    	{"rhs_weap_mg42",600,"true"},
		};
	};
	
	class SniperRifle
	{
		displayName = "$STR_HG_WEAPONSHOP_SNIPER_RIFLE";
		content[] =
		{
		    	{"rhs_weap_kar98k",600,"true"},
		    	{"rhs_weap_m38",600,"true"},
		    	{"rhs_weap_m38_rail",600,"true"},
		    	{"rhs_weap_mosin_sbr",600,"true"},

		};
	};

	class Shotgun
	{
		displayName = "$STR_HG_WEAPONSHOP_SHOTGUN";
		content[] =
		{
		    	{"rhs_weap_lzh18",600,"true"},
		};
	};

		class GrenadeLauncher
	{
		displayName = "$STR_HG_WEAPONSHOP_GRENADELAUNCHER";
		content[] =
		{
		    	{"rhs_weap_m79",600,"true"},
		};
	};


	class RocketLauncher
	{
		displayName = "$STR_HG_WEAPONSHOP_ROCKETLAUNCHER";
		content[] =
		{
		    	{"rhs_weap_panzerfaust60",600,"true"},
		    	{"rhs_weap_rpg75",600,"true"},

		};
	};

	class MissileLauncher
	{
		displayName = "$STR_HG_WEAPONSHOP_MISSILELAUNCHER";
		content[] =
		{
		    	{"",600,"true"},
		};
	};
};


class HG_GearShop_RHSGREF // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
	conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
	class Glasses
	{
		displayName = "$STR_HG_GEARSHOP_FACEWEARS";
		content[] =
		{
		    	{"",600,"true"},
		};
	};
	
	class Headgear
	{
		displayName = "$STR_HG_GEARSHOP_HEADGEARS";
		content[] =
		{
		    	{"rhsgref_bcap_specter",600,"true"},
		    	{"rhsgref_un_beret",600,"true"},
		    	{"rhsgref_booniehat_alpen",600,"true"},
		    	{"rhsgref_patrolcap_specter",600,"true"},
		    	{"rhsgref_fieldcap_ttsko_digi",600,"true"},
		    	{"rhsgref_fieldcap_ttsko_forest",600,"true"},
		    	{"rhsgref_fieldcap_ttsko_mountain",600,"true"},
		    	{"rhsgref_fieldcap_ttsko_urban",600,"true"},
		    	{"rhsgref_6b27m_ttsko_digi",600,"true"},
		    	{"rhsgref_6b27m_ttsko_forest",600,"true"},
		    	{"rhsgref_6b27m_ttsko_mountain",600,"true"},
		    	{"rhsgref_6b27m_ttsko_urban",600,"true"},
		    	{"rhsgref_helmet_m1_des",600,"true"},
		    	{"rhsgref_helmet_m1_erdl",600,"true"},
		    	{"rhsgref_helmet_m1_liner",600,"true"},
		    	{"rhsgref_helmet_m1_mit",600,"true"},
		    	{"rhsgref_helmet_m1_bare",600,"true"},
		    	{"rhsgref_helmet_m1_bare_alt01",600,"true"},
		    	{"rhsgref_helmet_m1_painted",600,"true"},
		    	{"rhsgref_helmet_m1_painted_alt01",600,"true"},
		    	{"rhsgref_hat_m1941cap",600,"true"},
		    	{"rhsgref_helmet_m1940",600,"true"},
		    	{"rhsgref_helmet_m1940_camo01",600,"true"},
		    	{"rhsgref_helmet_m1940_alt1",600,"true"},
		    	{"rhsgref_helmet_m1940_camo01_alt1",600,"true"},
		    	{"rhsgref_helmet_m1940_winter_alt1",600,"true"},
		    	{"rhsgref_helmet_m1940_winter",600,"true"},
		    	{"rhsgref_helmet_m1942",600,"true"},
		    	{"rhsgref_helmet_m1942_camo01",600,"true"},
		    	{"rhsgref_helmet_m1942_alt1",600,"true"},
		    	{"rhsgref_helmet_m1942_camo01_alt1",600,"true"},
		    	{"rhsgref_helmet_m1942_winter_alt1",600,"true"},
		    	{"rhsgref_helmet_m1942_winter",600,"true"},
		    	{"rhsgref_helmet_m1942_heergreycover",600,"true"},
		    	{"rhsgref_helmet_m1942_heersplintercover",600,"true"},
		    	{"rhsgref_helmet_m1942_heermarshcover",600,"true"},
		    	{"rhsgref_helmet_m1942_heerwintercover",600,"true"},
		    	{"rhsgref_hat_m43cap_heer",600,"true"},
		    	{"rhsgref_hat_m43cap_heer1_tilted",600,"true"},
		    	{"rhsgref_m56",600,"true"},
		    	{"rhsgref_helmet_pasgt_3color_desert",600,"true"},
		    	{"rhsgref_helmet_pasgt_3color_desert_rhino",600,"true"},
		    	{"rhsgref_helmet_pasgt_altis_lizard",600,"true"},
		    	{"rhsgref_helmet_pasgt_erdl",600,"true"},
		    	{"rhsgref_helmet_pasgt_erdl_rhino",600,"true"},
		    	{"rhsgref_helmet_pasgt_flecktarn",600,"true"},
		    	{"rhsgref_helmet_pasgt_olive",600,"true"},
		    	{"rhsgref_helmet_pasgt_press",600,"true"},
		    	{"rhsgref_helmet_pasgt_un",600,"true"},
		    	{"rhsgref_helmet_pasgt_woodland",600,"true"},
		    	{"rhsgref_helmet_pasgt_woodland_rhino",600,"true"},
		    	{"rhsgref_hat_m1951",600,"true"},
		    	{"rhsgref_ssh68_emr",600,"true"},
		    	{"rhsgref_ssh68_ttsko_digi",600,"true"},
		    	{"rhsgref_ssh68_ttsko_forest",600,"true"},
		    	{"rhsgref_ssh68_ttsko_mountain",600,"true"},
		    	{"rhsgref_ssh68_ttsko_dark",600,"true"},
		    	{"rhsgref_ssh68_un",600,"true"},
		    	{"rhsgref_ssh68_vsr",600,"true"},
	    };
	};

	class Uniform
	{
		displayName = "$STR_HG_GEARSHOP_UNIFORMS";
		content[] =
		{
		    	{"rhsgref_uniform_gorka_1_f",600,"true"},
		    	{"rhsgref_uniform_TLA_1",600,"true"},
		    	{"rhsgref_uniform_TLA_2",600,"true"},
		    	{"rhsgref_uniform_para_ttsko_mountain",600,"true"},
		    	{"rhsgref_uniform_para_ttsko_oxblood",600,"true"},
		    	{"rhsgref_uniform_para_ttsko_urban",600,"true"},
		    	{"rhsgref_uniform_vsr",600,"true"},
		    	{"rhsgref_uniform_ttsko_forest",600,"true"},
		    	{"rhsgref_uniform_ttsko_mountain",600,"true"},
		    	{"rhsgref_uniform_ttsko_urban",600,"true"},
		    	{"rhsgref_uniform_3color_desert",600,"true"},
		    	{"rhsgref_uniform_alpenflage",600,"true"},
		    	{"rhsgref_uniform_altis_lizard",600,"true"},
		    	{"rhsgref_uniform_altis_lizard_olive",600,"true"},
		    	{"rhsgref_uniform_dpm",600,"true"},
		    	{"rhsgref_uniform_dpm_olive",600,"true"},
		    	{"rhsgref_uniform_ERDL",600,"true"},
		    	{"rhsgref_uniform_flecktarn",600,"true"},
		    	{"rhsgref_uniform_flecktarn_full",600,"true"},
		    	{"rhsgref_uniform_og107",600,"true"},
		    	{"rhsgref_uniform_og107_erdl",600,"true"},
		    	{"rhsgref_uniform_olive",600,"true"},
		    	{"rhsgref_uniform_tigerstripe",600,"true"},
		    	{"rhsgref_uniform_reed",600,"true"},
		    	{"rhsgref_uniform_woodland",600,"true"},
		    	{"rhsgref_uniform_woodland_olive",600,"true"},
		    	{"rhsgref_uniform_specter",600,"true"},
		};
	};
	
	class Vest
	{
		displayName = "$STR_HG_GEARSHOP_VESTS";
		content[] =
		{
		    	{"rhsgref_6b23_khaki_medic",600,"true"},
		    	{"rhsgref_6b23_khaki_nco",600,"true"},
		    	{"rhsgref_6b23_khaki_officer",600,"true"},
		    	{"rhsgref_6b23_khaki_rifleman",600,"true"},
		    	{"rhsgref_6b23_khaki_sniper",600,"true"},
		    	{"rhsgref_6b23_khaki",600,"true"},
		    	{"rhsgref_6b23_ttsko_digi_medic",600,"true"},
		    	{"rhsgref_6b23_ttsko_digi_nco",600,"true"},
		    	{"rhsgref_6b23_ttsko_digi_officer",600,"true"},
		    	{"rhsgref_6b23_ttsko_digi_rifleman",600,"true"},
		    	{"rhsgref_6b23_ttsko_digi_sniper",600,"true"},
		    	{"rhsgref_6b23_ttsko_digi",600,"true"},
		    	{"rhsgref_6b23_ttsko_forest_rifleman",600,"true"},
		    	{"rhsgref_6b23_ttsko_forest",600,"true"},
		    	{"rhsgref_6b23_ttsko_mountain_medic",600,"true"},
		    	{"rhsgref_6b23_ttsko_mountain_nco",600,"true"},
		    	{"rhsgref_6b23_ttsko_mountain_officer",600,"true"},
		    	{"rhsgref_6b23_ttsko_mountain_rifleman",600,"true"},
		    	{"rhsgref_6b23_ttsko_mountain_sniper",600,"true"},
		    	{"rhsgref_6b23_ttsko_mountain",600,"true"},
		    	{"rhsgref_alice_webbing",600,"true"},
		    	{"rhsgref_chestrig",600,"true"},
		    	{"rhsgref_chicom",600,"true"},
		    	{"rhsgref_otv_digi",600,"true"},
		    	{"rhsgref_otv_khaki",600,"true"},
		    	{"rhsgref_TacVest_ERDL",600,"true"},
		};
	};
	
	class Backpack
	{
		displayName = "$STR_HG_GEARSHOP_BACKPACKS";
		content[] =
		{
		    	{"rhsgref_hidf_alicepack",600,"true"},
		    	{"rhsgref_ttsko_alicepack",600,"true"},
		    	{"rhsgref_wdl_alicepack",600,"true"},
		    	{"rhsgref_tortila_specter",600,"true"},
		};
	};
};
//RHSGREF =========================================================================================================================================