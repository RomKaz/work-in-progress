////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:10:51 2014 : Source 'file' date Fri Oct 31 06:10:51 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class missions_e : armory\config.bin{
class CfgPatches
{
	class CA_Missions_E_Armory2
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAUI","CA_Missions_Armory2"};
	};
};
pboTryEntity = "playScriptedMission [""takistan"", {titleCut [(localize ""STR_LIB_START""), ""BLACK FADED"", 0]; [configFile >> ""CfgVehicles"" >> ""%1""] execVM ""\ca\missions\armory\data\scripts\init.sqf""}, configFile >> ""CfgMissions"" >> ""Procedural"" >> ""Armory"", true]";
pboTryWeapon = "playScriptedMission [""takistan"", {titleCut [(localize ""STR_LIB_START""), ""BLACK FADED"", 0]; [configFile >> ""CfgWeapons"" >> ""%1""] execVM ""\ca\missions\armory\data\scripts\init.sqf""}, configFile >> ""CfgMissions"" >> ""Procedural"" >> ""Armory"", true]";
class CfgArmory
{
	class Unlockables
	{
		class Arrowhead
		{
			classes[] = {"Goat","Goat01_EP1","Goat02_EP1","HandGrenade","HandGrenade_West","HandGrenade_East","UAZ_Unarmed_TK_EP1","UAZ_Unarmed_UN_EP1","UAZ_Unarmed_TK_CIV_EP1","DSHKM_TK_GUE_EP1","DSHKM_TK_INS_EP1","US_Soldier_EP1","US_Soldier_Light_EP1","US_Soldier_Pilot_EP1","US_Soldier_Crew_EP1","US_Soldier_Medic_EP1","Lada1_TK_CIV_EP1","Lada2_TK_CIV_EP1","Su25_TK_EP1","M136","BMP2_TK_EP1","Mi17_UN_CDF_EP1","AK_74","M249_EP1","Makarov","SCAR_L_CQC","ATV_US_EP1","ATV_CZ_EP1","MH6J_EP1","Fin","BRDM2_TK_EP1","BRDM2_ATGM_TK_EP1","BRDM2_TK_GUE_EP1","BRDM2_HQ_TK_GUE_EP1","M2A2_EP1","Rabbit","Volha_1_TK_CIV_EP1","Volha_2_TK_CIV_EP1","RPG18","HMMWV_DES_EP1","M16A2","M16A2GL","TK_CIV_Worker01_EP1","TK_CIV_Worker02_EP1","Strela","Offroad_DSHKM_TK_GUE_EP1","Offroad_SPG9_TK_GUE_EP1","Functionary1_EP1","Functionary2_EP1","Mi17_TK_EP1","V3S_TK_EP1","V3S_Open_TK_EP1","V3S_Open_TK_CIV_EP1","V3S_TK_GUE_EP1","V3S_Refuel_TK_GUE_EP1","V3S_Repair_TK_GUE_EP1","V3S_Reammo_TK_GUE_EP1","V3S_Supply_TK_GUE_EP1","V3S_Salvage_TK_GUE_EP1","Pilot_EP1","Colt1911","TK_INS_Soldier_EP1","TK_INS_Soldier_AAT_EP1","TK_INS_Soldier_2_EP1","TK_INS_Soldier_3_EP1","TK_INS_Soldier_4_EP1","TK_INS_Soldier_AA_EP1","TK_INS_Soldier_AT_EP1","TK_INS_Soldier_TL_EP1","TK_INS_Soldier_AR_EP1","TK_INS_Soldier_MG_EP1","TK_INS_Bonesetter_EP1","UH1H_TK_EP1","UH1H_TK_GUE_EP1","UH60_wreck_EP1","M9","HMMWV_Terminal_EP1","AK_74_GL","AK_74_GL_kobra","TK_GUE_Soldier_EP1","TK_GUE_Soldier_AAT_EP1","TK_GUE_Soldier_2_EP1","TK_GUE_Soldier_3_EP1","TK_GUE_Soldier_4_EP1","TK_GUE_Soldier_5_EP1","TK_GUE_Soldier_AA_EP1","TK_GUE_Soldier_AT_EP1","TK_GUE_Soldier_HAT_EP1","TK_GUE_Soldier_TL_EP1","TK_GUE_Soldier_AR_EP1","TK_GUE_Soldier_MG_EP1","TK_GUE_Bonesetter_EP1","SUV_TK_CIV_EP1","SUV_TK_EP1","SUV_UN_EP1","SCAR_L_CQC_EGLM_Holo","m107","M4A3_CCO_EP1","M4A3_RCO_GL_EP1","M1130_CV_EP1","M1129_MC_EP1","M1133_MEV_EP1","MAAWS","CZ_Soldier_SL_DES_EP1","CZ_Soldier_DES_EP1","CZ_Soldier_B_DES_EP1","CZ_Soldier_AMG_DES_EP1","CZ_Soldier_AT_DES_EP1","CZ_Soldier_MG_DES_EP1","CZ_Soldier_Office_DES_EP1","CZ_Soldier_Light_DES_EP1","CZ_Soldier_Pilot_EP1","FN_FAL","US_Soldier_B_EP1","US_Soldier_AMG_EP1","US_Soldier_AAR_EP1","US_Soldier_AHAT_EP1","US_Soldier_AAT_EP1","US_Soldier_GL_EP1","US_Soldier_Officer_EP1","US_Soldier_SL_EP1","US_Soldier_TL_EP1","US_Soldier_LAT_EP1","US_Soldier_AT_EP1","US_Soldier_HAT_EP1","US_Soldier_AA_EP1","US_Soldier_AR_EP1","US_Soldier_MG_EP1","US_Pilot_Light_EP1","Sa58P_EP1","BMP2_UN_EP1","revolver_EP1","US_Soldier_Engineer_EP1","Mine","MineE","M60A4_EP1","WarfareBMGNest_PK_TK_GUE_EP1","WarfareBMGNest_PK_TK_EP1","WarfareBMGNest_M240_US_EP1","TK_GUE_Soldier_Sniper_EP1","UZI_EP1","UN_CDF_Soldier_EP1","UN_CDF_Soldier_B_EP1","UN_CDF_Soldier_AAT_EP1","UN_CDF_Soldier_AMG_EP1","UN_CDF_Soldier_AT_EP1","UN_CDF_Soldier_MG_EP1","UN_CDF_Soldier_SL_EP1","UN_CDF_Soldier_Officer_EP1","UN_CDF_Soldier_Guard_EP1","UN_CDF_Soldier_Pilot_EP1","UN_CDF_Soldier_Crew_EP1","UN_CDF_Soldier_Light_EP1","AGS_TK_GUE_EP1","AGS_TK_INS_EP1","AGS_TK_EP1","AGS_UN_EP1","RPG7V","hilux1_civil_3_open_EP1","LeeEnfield","UH60M_EP1","Mk_48_DES_EP1","TK_Soldier_EP1","TK_Soldier_GL_EP1","TK_Soldier_B_EP1","TK_Soldier_AAT_EP1","TK_Soldier_AMG_EP1","TK_Soldier_LAT_EP1","TK_Soldier_AT_EP1","TK_Soldier_HAT_EP1","TK_Soldier_AA_EP1","TK_Soldier_Engineer_EP1","TK_Soldier_MG_EP1","TK_Soldier_AR_EP1","TK_Soldier_Medic_EP1","TK_Soldier_SL_EP1","TK_Soldier_Officer_EP1","TK_Soldier_Crew_EP1","TK_Soldier_Pilot_EP1","LandRover_CZ_EP1","LandRover_TK_CIV_EP1","Profiteer2_EP1","HMMWV_Ambulance_DES_EP1","HMMWV_Ambulance_CZ_DES_EP1","PK","TK_Soldier_Night_1_EP1","TK_Soldier_Night_2_EP1","Hen","Cock","Javelin","SmokeShell","SmokeShellYellow","SmokeShellRed","SmokeShellGreen","SmokeShellPurple","SmokeShellBlue","SmokeShellOrange","Citizen2_EP1","Citizen3_EP1","AK_47_M","AK_47_S","GER_Soldier_EP1","GER_Soldier_Medic_EP1","GER_Soldier_TL_EP1","GER_Soldier_Scout_EP1","GER_Soldier_MG_EP1","Mi24_D_TK_EP1","AKS_74","M2StaticMG_US_EP1","M119_US_EP1","M1A1_US_DES_EP1","SCAR_L_CQC_Holo","MK19_TriPod_US_EP1","TK_INS_Soldier_Sniper_EP1","AKS_74_kobra","AKS_74_pso","AKS_74_U","AH6J_EP1","TOW_TriPod_US_EP1","SearchLight_US_EP1","SearchLight_UN_EP1","SearchLight_TK_GUE_EP1","SearchLight_TK_INS_EP1","SearchLight_TK_EP1","m240_scoped_EP1","KORD_UN_EP1","KORD_TK_EP1","ZSU_TK_EP1","2b14_82mm_TK_GUE_EP1","2b14_82mm_TK_INS_EP1","2b14_82mm_TK_EP1","HMMWV_MK19_DES_EP1","Igla_AA_pod_TK_EP1","Sa58V_EP1","Sa58V_RCO_EP1","Sa58V_CCO_EP1","MQ9PredatorB_US_EP1","Metis_TK_EP1","SCAR_L_STD_HOLO","BMP2_HQ_TK_EP1","Mk13_EP1","C130J_US_EP1","MG36_camo","D30_TK_INS_EP1","D30_TK_GUE_EP1","D30_TK_EP1","AKS_74_NSPU","T72_TK_EP1","Pastor","M113_UN_EP1","M113_TK_EP1","M113Ambul_UN_EP1","M113Ambul_TK_EP1","M2A3_EP1","CIV_EuroWoman01_EP1","CIV_EuroWoman02_EP1","CIV_EuroMan01_EP1","CIV_EuroMan02_EP1","SCAR_L_CQC_CCO_SD","T55_TK_EP1","T55_TK_GUE_EP1","UAZ_MG_TK_EP1","UAZ_AGS30_TK_EP1","M249_m145_EP1","Ural_UN_EP1","Ural_TK_CIV_EP1","UralRepair_TK_EP1","UralReammo_TK_EP1","UralRefuel_TK_EP1","UralSupply_TK_EP1","UralSalvage_TK_EP1","Pickup_PK_TK_GUE_EP1","ZU23_TK_GUE_EP1","ZU23_TK_INS_EP1","ZU23_TK_EP1","TK_Commander_EP1","HMMWV_Avenger_DES_EP1","LandRover_MG_TK_INS_EP1","LandRover_MG_TK_EP1","TK_GUE_Warlord_EP1","An2_1_TK_CIV_EP1","An2_2_TK_CIV_EP1","An2_TK_EP1","glock17_EP1","TT650_TK_CIV_EP1","TT650_TK_EP1","AH64D_EP1","M1126_ICV_M2_EP1","M1126_ICV_mk19_EP1","TK_CIV_Woman01_EP1","TK_CIV_Woman02_EP1","TK_CIV_Woman03_EP1","M1030_US_DES_EP1","SCAR_H_CQC_CCO","MTVR_DES_EP1","MtvrReammo_DES_EP1","MtvrRefuel_DES_EP1","MtvrRepair_DES_EP1","MtvrSupply_DES_EP1","MtvrSalvage_DES_EP1","Ikarus_TK_CIV_EP1","US_Soldier_Spotter_EP1","US_Soldier_Sniper_EP1","US_Soldier_SniperH_EP1","US_Soldier_Marksman_EP1","SPG9_TK_INS_EP1","SPG9_TK_GUE_EP1","M47Launcher_EP1","MLRS_DES_EP1","G36_C_SD_camo","BTR40_MG_TK_GUE_EP1","BTR40_TK_GUE_EP1","BTR40_MG_TK_INS_EP1","BTR40_TK_INS_EP1","HMMWV_M1035_DES_EP1","G36C_camo","G36A_camo","G36K_camo","HMMWV_M1151_M2_CZ_DES_EP1","HMMWV_M1151_M2_DES_EP1","Sa61_EP1","M110_NVG_EP1","M6_EP1","HMMWV_TOW_DES_EP1","RPK_74","LandRover_SPG9_TK_INS_EP1","LandRover_SPG9_TK_EP1","Old_moto_TK_Civ_EP1","S1203_TK_CIV_EP1","S1203_ambulance_EP1","M1135_ATGMV_EP1","CH_47F_EP1","TK_INS_Warlord_EP1","VolhaLimo_TK_CIV_EP1","A10_US_EP1","M4A1","Chukar_EP1","HandGrenade_Stone","M2HD_mini_TriPod_US_EP1","SCAR_H_STD_EGLM_Spect","Mi171Sh_rockets_CZ_EP1","Mi171Sh_CZ_EP1","KORD_high_UN_EP1","KORD_high_TK_EP1","TK_Special_Forces_EP1","TK_Special_Forces_TL_EP1","TK_Special_Forces_MG_EP1","PipeBomb","UH60M_MEV_EP1","M32_EP1","CZ_Soldier_Sniper_EP1","M9SD","US_Soldier_Sniper_NV_EP1","BTR60_TK_EP1","SCAR_L_STD_Mk4CQT","T34_TK_EP1","T34_TK_GUE_EP1","SVD","Stinger","Sheep","Sheep01_EP1","Sheep02_EP1","M252_US_EP1","Igla","MetisLauncher","ksvk","Cow01","Cow02","Cow03","Cow04","Cow01_EP1","DSHkM_Mini_TriPod_TK_GUE_EP1","DSHkM_Mini_TriPod_TK_INS_EP1","UZI_SD_EP1","TK_Soldier_Sniper_Night_EP1","M249_TWS_EP1","SCAR_L_STD_EGLM_TWS","TK_CIV_Takistani01_EP1","TK_CIV_Takistani02_EP1","TK_CIV_Takistani03_EP1","TK_CIV_Takistani04_EP1","TK_CIV_Takistani05_EP1","TK_CIV_Takistani06_EP1","Ural_ZU23_TK_EP1","Ural_ZU23_TK_GUE_EP1","M24_des_EP1","SCAR_H_LNG_Sniper","AH6X_EP1","SVD_des_EP1","SVD_NSPU_EP1","M1128_MGS_EP1","Stinger_Pod_US_EP1","TK_Soldier_TWS_EP1","LandRover_Special_CZ_EP1","M1A2_US_TUSK_MG_EP1","SCAR_H_LNG_Sniper_SD","WildBoar","GRAD_TK_EP1","AKS_74_GOSHAWK","Old_bike_TK_CIV_EP1","Old_bike_TK_INS_EP1","FN_FAL_ANPVS4","M79_EP1","m107_TWS_EP1","TK_Soldier_Spotter_EP1","TK_Soldier_Sniper_EP1","TK_Soldier_SniperH_EP1","M14_EP1","CZ_Special_Forces_Scout_DES_EP1","CZ_Special_Forces_MG_DES_EP1","CZ_Special_Forces_DES_EP1","CZ_Special_Forces_TL_DES_EP1","CZ_Special_Forces_GL_DES_EP1","SCAR_L_STD_EGLM_RCO","HMMWV_M998_crows_M2_DES_EP1","HMMWV_M998_crows_MK19_DES_EP1","SCAR_H_CQC_CCO_SD","HMMWV_M998A2_SOV_DES_EP1","M110_TWS_EP1","US_Delta_Force_Undercover_Takistani06_EP1","SCAR_H_STD_TWS_SD","US_Delta_Force_EP1","US_Delta_Force_TL_EP1","US_Delta_Force_Medic_EP1","US_Delta_Force_Assault_EP1","US_Delta_Force_SD_EP1","US_Delta_Force_MG_EP1","US_Delta_Force_AR_EP1","US_Delta_Force_Night_EP1","US_Delta_Force_Marksman_EP1","US_Delta_Force_M14_EP1","US_Delta_Force_Air_Controller_EP1","IR_Strobe_Marker","IR_Strobe_Target","MakarovSD","Rita_Ensler_EP1","Dr_Annie_Baker_EP1","Haris_Press_EP1","Dr_Hladik_EP1","L39_TK_EP1","Drake","Herrera","Pierce","Graves","Drake_Light","Herrera_Light","Pierce_Light","Graves_Light","MAZ_543_SCUD_TK_EP1","TK_Aziz_EP1","revolver_gold_EP1"};
			points[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,50,50,75,100,125,125,125,125,150,175,200,200,225,250,275,275,300,300,325,350,350,375,375,400,425,425,425,425,425,425,425,425,425,450,475,500,500,500,500,500,500,500,500,500,500,500,525,525,550,575,600,625,625,675,675,675,675,675,675,675,675,675,675,675,675,675,725,725,725,775,825,875,875,925,925,925,975,1025,1025,1025,1025,1025,1025,1025,1025,1025,1075,1125,1125,1125,1125,1125,1125,1125,1125,1125,1125,1125,1125,1125,1125,1125,1125,1175,1225,1275,1325,1325,1325,1375,1425,1425,1425,1475,1525,1575,1575,1575,1575,1575,1575,1575,1575,1575,1575,1575,1575,1625,1625,1625,1625,1675,1725,1775,1825,1875,1950,1950,1950,1950,1950,1950,1950,1950,1950,1950,1950,1950,1950,1950,1950,1950,1950,2025,2025,2100,2175,2175,2250,2325,2325,2400,2400,2475,2550,2550,2550,2550,2550,2550,2550,2625,2625,2700,2700,2775,2775,2775,2775,2775,2850,2925,3000,3075,3150,3225,3300,3375,3450,3450,3450,3525,3600,3675,3675,3675,3675,3675,3750,3850,3850,3950,4050,4050,4050,4150,4250,4350,4350,4350,4450,4550,4650,4750,4850,4950,5050,5150,5150,5150,5250,5350,5450,5550,5550,5650,5650,5750,5850,5850,5850,5850,5950,6050,6050,6150,6150,6250,6375,6375,6375,6375,6375,6375,6375,6500,6625,6625,6625,6750,6875,7000,7000,7125,7250,7250,7250,7375,7500,7500,7625,7750,7750,7875,7875,7875,8000,8125,8250,8250,8250,8250,8250,8250,8375,8500,8500,8500,8500,8625,8625,8750,8875,9000,9125,9125,9125,9125,9250,9375,9375,9375,9525,9525,9675,9825,9975,10125,10275,10425,10425,10575,10725,10725,10875,11025,11175,11325,11475,11625,11775,11925,12075,12225,12375,12375,12525,12525,12675,12675,12675,12825,12975,13125,13300,13475,13650,13825,14000,14175,14175,14350,14525,14700,14700,14700,14875,15050,15225,15400,15575,15575,15575,15575,15575,15750,15750,15925,16100,16275,16450,16625,16625,16625,16625,16625,16625,16800,16800,16975,17150,17325,17500,17500,17700,17900,18100,18300,18500,18700,18900,19100,19300,19500,19500,19700,19900,20100,20300,20300,20300,20500,20700,20700,20700,20700,20700,20900,21100,21100,21300,21500,21700,21900,22100,22300,22300,22300,22300,22300,22300,22300,22300,22300,22300,22300,22300,22300,22500,22725,22725,22725,22725,22950,23175,23175,23175,23175,23175,23175,23175,23175,23400,23625,23850};
		};
	};
};
//};
