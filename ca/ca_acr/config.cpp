////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:01:59 2014 : Source 'file' date Fri Oct 31 06:01:59 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class ca_acr : config.bin{
class CfgPatches
{
	class CA_ACR
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.57;
		requiredAddons[] = {"CAData","CA_E","CAUI","CA_MPA_MP"};
	};
};
class CfgMods
{
	class ACR
	{
		dir = "ACR";
		picture = "Ca\Ca_ACR\data\logo_arma2acr_ca.paa";
		hideName = 1;
		action = "http://www.arma2.com/arrowhead";
		hash = "ACR v. 1.00";
		name = "Arma 2: Army of the Czech republic (Lite)";
		actionName = "Buy Now";
		hidePicture = 1;
		islite = 1;
	};
};
class CfgAddons
{
	class PreloadBanks{};
	class PreloadAddons
	{
		class CA_ACR
		{
			list[] = {"CAData","CAAnimals","CA_Anims","CA_Anims_Sdr","CA_Anims_Wmn","CA_Anims_E","CA_Anims_E_Sdr","CA_Anims_E_Wmn","CABuildings","CA_E","CA_Heads","CAData_ParticleEffects","CA_Dubbing","CALanguage","CALanguage_ACR","CALanguage_e","CALanguage_missions","CALanguage_missions_ACR","CALanguage_missions_e","CA_Modules","CA_Missions_AlternativeInjurySimulation","CA_Modules_Alice","CA_Missions_AmbientCombat","CA_Modules_Animals","CA_Missions_BattlefieldClearance","CA_Modules_clouds","CA_Modules_Coin","CA_Modules_DynO","CA_Missions_FirstAidSystem","CA_Modules_Functions","CA_Missions_GarbageCollector","CA_HighCommand","CA_Modules_Marta","CA_Modules_Silvie","BI_SRRS","CA_Modules_UAV","CA_Modules_ZoRA","CA_Modules_ACR","CA_Modules_ACR_Functions","CA_Modules_E","CA_Modules_Alice2","CA_Modules_E_DynO","CA_Modules_E_Functions","CA_Modules_E_Gita","CA_Modules_E_Jukebox","CA_Modules_E_OO","CA_Support","CA_Modules_E_UAV","CA_Modules_E_UAV_Heli","CA_Modules_E_Weather","CARoads2","CARoads2Bridge","CARoads2Dam","CARoads_E","CARocks2","CARocks_E","CASigns2","CASounds","CASounds_E","CAStructures","CAStructures_A_BuildingWIP","CAStructuresBarn_W","CAStructures_Castle","CAStructuresHouse","CAStructuresHouse_A_FuelStation","CAStructuresHouse_A_Hospital","CAStructuresHouse_A_Office01","CAStructuresHouse_A_Office02","CAStructuresHouse_a_stationhouse","CAStructuresHouse_Church_02","CAStructuresHouse_Church_03","CAStructuresHouse_Church_05R","CAStructuresHouse_HouseV2","CAStructuresHouse_HouseV","CAStructuresLand_Ind_Stack_Big","CAStructures_IndPipe1","CAStructuresInd_Quarry","Ind_SawMill","CAStructures_Mil","CAStructures_Misc_Powerlines","CAStructures_Nav","CAStructuresLand_Nav_Boathouse","pond_test","CAStructures_Proxy_BuildingParts","CAStructures_Proxy_Ruins","CAStructures_Rail","CAStructuresHouse_rail_station_big","CAStructures_Ruins","CAStructuresShed_Small","CAStructuresHouse_Shed_Ind","CAStructures_Wall","CAFonts","Warfare2","CA_Animals2","CA_Animals2_Anim_Config","CA_Animals2_Chicken","CA_Animals2_Cow","CA_Animals2_Dogs","CA_Animals2_Dogs_Fin","CA_Animals2_Dogs_Pastor","CA_Animals2_Goat","CA_Animals2_Rabbit","CA_Animals2_Sheep","CA_Animals2_WildBoar","CA_Anims_Char","CABuildings2","A_Crane_02","A_GeneralStore_01","CABuildings2_A_Pub","A_statue","Barn_Metal","Church_01","Farm_Cowshed","Farm_WTower","CAHouseBlock_A","CAHouseBlock_B","CAHouseBlock_C","CAHouseBlock_D","HouseRuins","Ind_Expedice","Ind_MalyKomin","Ind_Mlyn","Ind_Pec","ind_silomale","Ind_SiloVelke","Ind_Vysypka","Ind_Garage01","CAStructures_IndPipe1_todo_delete","IndPipe2","Ind_Shed_01","Ind_Shed_02","Ind_Tank","Ind_Workshop01","CABuildings2_Misc_Cargo","Misc_PowerStation","Misc_WaterStation","Rail_House_01","Shed_small","Shed_wooden","CA_E_ParticleEffects","CA_DubbingRadio_E","CAStructures_Nav_pier","CAStructures_Railway","CAStructures_E","CAStructures_E_HouseA","CAStructures_E_HouseA_A_Minaret","CAStructures_E_HouseA_A_Minaret_Porto","CAStructures_E_HouseA_A_Mosque_small","CAStructures_E_HouseC","CAStructures_E_HouseK","CAStructures_E_HouseL","CAStructures_E_Ind","CAStructures_E_Ind_Ind_FuelStation","CAStructures_E_Ind_Oil_Mine","CAStructures_E_Ind_IndPipes","CAStructures_E_Ind_Ind_Shed","CAStructures_E_Mil","CAStructures_E_Misc","CAStructures_E_Misc_Misc_Construction","CAStructures_E_Misc_Misc_Garbage","CAStructures_E_Misc_Misc_Lamp","CAStructures_E_Misc_Misc_powerline","CAStructures_E_Misc_Misc_Water","CAStructures_E_Misc_Misc_Well","CAStructures_E_Wall","CAStructures_E_Wall_Wall_L","CAUI","CAWeapons","CAWeapons_AK","CAWeapons_AmmoBoxes","CAWeapons_bizon","CAWeapons_Colt1911","CAWeapons_DMR","CAWeapons_M1014","CAweapons_m107","CAWeapons_Saiga12K","CAWeapons_VSS_vintorez","CAWeapons_E_AmmoBoxes","CA_ACR","CACharacters","CACharacters_E_Head","CA_DubbingRadio_ACR","CAMisc2","CAMisc","CA_Missions_ACR","CA_Modules_StratLayer","CAWeapons2","CAWeapons2_HuntingRifle","CAWeapons2_RPG18","CAWeapons2_SMAW","Woodland_ACR","Bootcamp_ACR","CABuildingParts","CABuildingParts_Signs","CATEC","CACharacters2","CACharacters_E","CAMisc3","CAStructures_E_Misc_Misc_Interier","CAStructures_E_Misc_Misc_Market","CATracked","CAWheeled","CAWheeled_Pickup","CAWheeled_Offroad","CAAir","CACharacters_ACR","CA_Modules_ARTY","CATracked2","CAWeapons_E","CAWeapons_E_AK","CAWeapons_E_Colt1911","CAWeapons_E_fnfal","CAWeapons_E_Igla","CAWeapons_E_Javelin","CAWeapons_E_LeeEnfield","CAweapons_E_m107","CAWeapons_E_M110","CAWeapons_E_M136","CAWeapons_E_M16","CAWeapons_E_M240","CAWeapons_E_M47","CAWeapons_E_M9","CAWeapons_E_MAAWS","CAWeapons_E_Makarov","CAWeapons_E_PK","CAWeapons_E_RPG7","CAWeapons_E_scar","CAWeapons_E_Stinger","CAWeapons_E_Strela","CAWheeled2","CAWheeled2_HMMWV_BASE","CAWheeled2_M1114_Armored","CAWheeled2_HMMWV_Ambulance","CAWheeled2_M998A2_Avenger","CAWheeled2_Ikarus","CAWheeled2_LADA","CAWheeled2_V3S","CAWheeled2_VWGolf","CAWheeled_E","CAWheeled_E_ATV","CAWheeled_E_BRDM2","CAWheeled_E_BTR40","CAWheeled_E_Pickup","CAWheeled_E_Offroad","CAWheeled_E_HMMWV","CAWheeled_E_Ikarus","CAWheeled_E_LADA","CAWheeled_E_LandRover","CAWheeled_E_s1203","CAWheeled_E_SUV","CAWheeled_E_UAZ","CAWheeled_E_Ural","CAWheeled_E_V3S","CAWheeled_E_Volha","CAA10","CA_AH64D","CAAir2","CAAir2_MQ9PredatorB","CAAir_E","CAAir_E_AH64D","CAAir_E_MI8","CA_AIR_E_MQ9PredatorB","CA_L39","WarfareBuildings","CAMisc_E","CASigns_E","CATracked_E","CATracked_E_BMP2","CATracked_E_T72","CAWEAPONS_ACR","CAWeapons_ACR_CZ805","CAWeapons_ACR_RBS70","CAWeapons_ACR_UK59","CAWheeled_ACR","CAWheeled_ACR_HMMWV","CAWheeled_ACR_LR","CAWheeled_ACR_T810","Mountains_ACR","CAAir_ACR","CAAir_ACR_L159","CAAir_ACR_L39","CAAir_ACR_Mi24","CAMisc_ACR","CAMisc_ACR_3DMarkers","CAMisc_ACR_Helpers","CAMisc_ACR_Dog","CAMisc_ACR_Helpers","CAMisc_ACR_PBX","CAMisc_ACR_Shooting_range","CAMisc_ACR_Sign_Mines","CAMisc_ACR_Targets","CAMisc_ACR_Targets_InvisibleTarget","CAMisc_ACR_TestSphere","CATracked_ACR","CATracked_ACR_T72M4CZ","CAMisc_ACR_Container","CAMisc_ACR_ScaffoldingSmall","CATracked_ACR_BVP1","CAWeapons_ACR_LRTV","CAWheeled_ACR_Dingo","CAWheeled_ACR_Octavia","CAWheeled_ACR_Pandur","CaWheeled_ACR_RM70"};
		};
	};
};
class CfgGroups
{
	class West
	{
		name = "$STR_WEST";
		class BIS_CZ
		{
			name = "$STR_EP1_DN_CfgGroups_West_BIS_CZ";
			class Infantry
			{
				name = "$STR_EP1_DN_CfgGroups_West_BIS_CZ_Infantry";
				class ACR_InfantryPatrol
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_CZ_Infantry_ACR_InfantryPatrol";
					faction = "BIS_CZ";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 1;
						vehicle = "CZ_Soldier_SL_DES_EP1";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CZ_Soldier_MG_DES_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CZ_Soldier_AT_DES_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CZ_Soldier_AMG_DES_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class ACR_SpecialForcesTeam
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_CZ_Infantry_ACR_SpecialForcesTeam";
					faction = "BIS_CZ";
					rarityGroup = 0;
					class Unit0
					{
						side = 1;
						vehicle = "CZ_Special_Forces_TL_DES_EP1";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CZ_Special_Forces_MG_DES_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CZ_Special_Forces_GL_DES_EP1";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CZ_Special_Forces_DES_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CZ_Special_Forces_DES_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "CZ_Special_Forces_Scout_DES_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
				};
				class ACR_InfantryTeam_WDL
				{
					name = "$STR_ACR_DN_GROUP_INF_TEAM_WDL";
					faction = "BIS_CZ";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 1;
						vehicle = "CZ_Soldier_Leader_Wdl_ACR";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CZ_Soldier_805g_Wdl_ACR";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CZ_Soldier_MG2_Wdl_ACR";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CZ_Soldier_805_Wdl_ACR";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CZ_Sharpshooter_Wdl_ACR";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "CZ_Soldier_RPG_Wdl_ACR";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "CZ_Soldier_RPG_Ass_Wdl_ACR";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "CZ_Soldier_Medic_Wdl_ACR";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class ACR_InfantryTeam_DST
				{
					name = "$STR_ACR_DN_GROUP_INF_TEAM_DST";
					faction = "BIS_CZ";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 1;
						vehicle = "CZ_Soldier_SL_DES_EP1";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CZ_Soldier_805g_Dst_ACR";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CZ_Soldier_MG2_Dst_ACR";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CZ_Soldier805_DES_ACR";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CZ_Sharpshooter_DES_ACR";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "CZ_Soldier_RPG_Dst_ACR";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "CZ_Soldier_RPG_Ass_Dst_ACR";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "CZ_Soldier_medik_DES_EP1";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class ACR_InfantryPatrol_WDL
				{
					name = "Infantry patrol (woodland)";
					faction = "BIS_CZ";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 1;
						vehicle = "CZ_Soldier_Leader_Wdl_ACR";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "CZ_Soldier_MG2_Wdl_ACR";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CZ_Sharpshooter_Wdl_ACR";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CZ_Soldier_805_Wdl_ACR";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CZ_Soldier_Engineer_Wdl_ACR";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "CZ_Soldier_Medic_Wdl_ACR";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class Motorized
			{
				name = "$STR_EP1_DN_CfgGroups_West_BIS_CZ_Motorized";
				class ACR_MotorizedPatrol
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_CZ_Motorized_ACR_MotorizedPatrol";
					faction = "BIS_CZ";
					rarityGroup = 0.6;
					class Unit0
					{
						side = 1;
						vehicle = "CZ_Soldier_SL_DES_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LandRover_CZ_EP1";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CZ_Soldier_MG_DES_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CZ_Soldier_DES_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class ACR_MotorizedSection_WDL
				{
					name = "$STR_ACR_DN_GROUP_MOT_TEAM_WDL";
					faction = "BIS_CZ";
					rarityGroup = 0.9;
					class Unit0
					{
						side = 1;
						vehicle = "CZ_Soldier_Leader_Wdl_ACR";
						rank = "LIEUTENANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Pandur2_ACR";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CZ_Soldier_MG2_Wdl_ACR";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CZ_Soldier_RPG_Wdl_ACR";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CZ_Soldier_MG2_Wdl_ACR";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "CZ_Sharpshooter_Wdl_ACR";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "CZ_Soldier_805_Wdl_ACR";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "CZ_Soldier_Medic_Wdl_ACR";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class ACR_MotorizedSection_DST
				{
					name = "$STR_ACR_DN_GROUP_MOT_TEAM_DST";
					faction = "BIS_CZ";
					rarityGroup = 0.6;
					class Unit0
					{
						side = 1;
						vehicle = "CZ_Soldier_SL_DES_EP1";
						rank = "LIEUTENANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "BMP2_Des_ACR";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CZ_Soldier_MG_DES_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CZ_Sharpshooter_DES_ACR";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CZ_Soldier_RPG_Dst_ACR";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "CZ_Soldier_RPG_Ass_Dst_ACR";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "CZ_Soldier_medik_DES_EP1";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class ACR_MechanizedRecon_WDL
				{
					name = "$STR_ACR_DN_GROUP_MOT_REC_WDL";
					faction = "BIS_CZ";
					rarityGroup = 0.6;
					class Unit0
					{
						side = 1;
						vehicle = "CZ_Soldier_805g_Wdl_ACR";
						rank = "LIEUTENANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Dingo_WDL_ACR";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CZ_Soldier_MG2_Wdl_ACR";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CZ_Soldier_805_Wdl_ACR";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "CZ_Soldier_805_Wdl_ACR";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "CZ_Soldier_Medic_Wdl_ACR";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class ACR_SpecialForcesPatrolLandRover
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_CZ_Motorized_ACR_SpecialForcesPatrolLandRover";
					faction = "BIS_CZ";
					rarityGroup = 0;
					class Unit0
					{
						side = 1;
						vehicle = "CZ_Special_Forces_TL_DES_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "LandRover_Special_CZ_EP1";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "CZ_Special_Forces_GL_DES_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class ACR_SpecialForcesPatrolATV
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_CZ_Motorized_ACR_SpecialForcesPatrolATV";
					faction = "BIS_CZ";
					rarityGroup = 0;
					class Unit0
					{
						side = 1;
						vehicle = "CZ_Special_Forces_TL_DES_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ATV_CZ_EP1";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ATV_CZ_EP1";
						rank = "CORPORAL";
						position[] = {-5,-7,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "CZ_Special_Forces_Scout_DES_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
			};
			class Air
			{
				name = "$STR_EP1_DN_CfgGroups_West_BIS_CZ_Air";
				class ACR_Mi171ShFlight
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_CZ_Air_ACR_Mi171ShFlight";
					faction = "BIS_CZ";
					rarityGroup = 0.3;
					minAltitude = 60;
					maxAltitude = 150;
					class Unit0
					{
						side = 1;
						vehicle = "Mi171Sh_CZ_EP1";
						rank = "CAPTAIN";
						position[] = {0,15,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Mi171Sh_CZ_EP1";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
				};
				class ACR_Mi171Sh_RocketsFlight
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_CZ_Air_ACR_Mi171Sh_RocketsFlight";
					faction = "BIS_CZ";
					rarityGroup = 0.3;
					minAltitude = 60;
					maxAltitude = 150;
					class Unit0
					{
						side = 1;
						vehicle = "Mi171Sh_rockets_CZ_EP1";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
				};
			};
		};
	};
};
class RscText;
class RscOpticsValue;
class RscPicture;
class RscProgress;
class RscStructuredText;
class RscControlsGroup;
class RscFrame;
class RscEdit;
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			onload = "_this call compile preprocessfilelinenumbers 'ca\missions_acr\data\scripts\ui_loadingText.sqf';";
			class controls
			{
				class CA_ProgressBackground: RscText
				{
					style = 48;
					text = "\ca\ui\data\loadscreen_progressbar_ca.paa";
					colorText[] = {1,1,1,0.1};
					x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (0.5/2/4)*3*SafezoneH";
					y = "SafezoneY+SafezoneH*0.95";
					w = "0.5* (((SafezoneW*3)/4)/SafezoneW)/(1/SafezoneH)";
					h = 0.0261438;
				};
				class HintBackground: RscText
				{
					idc = 8401;
					x = "SafezoneX + (safezoneW - 	1.3) / 2";
					y = "SafezoneY + (safezoneH - 		((SafezoneW / 2) * (4/3))) / 2 + 		((SafezoneW / 2) * (4/3)) - 	(	1.3 / 8) * 4/3 * 1.1";
					w = 1.3;
					h = "(	1.3 / 8) * 4/3";
					text = "ca\missions_acr\data\ui_loading_text_ca.paa";
					style = 48;
					shadow = 0;
				};
				class Hint: RscText
				{
					idc = 8400;
					x = "SafezoneX + (safezoneW - 			1.3 * 0.7 * (0.98)) / 2";
					y = "SafezoneY + (safezoneH - 		((SafezoneW / 2) * (4/3))) / 2 + 		((SafezoneW / 2) * (4/3)) - 	(	1.3 / 8) * 4/3 * 1.1 + (	(	1.3 / 8) * 4/3 - 			0.03921 * 3)/2";
					w = "1.3 * 0.7 * (0.98)";
					h = "0.03921 * 3";
					text = "";
					style = "0x02 + 0x10 + 0x200";
					lineSpacing = 1;
				};
			};
		};
	};
};
class RscStandardDisplay;
class RscDisplayLoadMission: RscStandardDisplay
{
	onload = "_this call compile preprocessfilelinenumbers 'ca\missions_acr\data\scripts\ui_loadingText.sqf';";
	class controls
	{
		class CA_ProgressBackground: RscText
		{
			style = 48;
			text = "\ca\ui\data\loadscreen_progressbar_ca.paa";
			colorText[] = {1,1,1,0.1};
			x = "(SafezoneX+(SafezoneW -SafezoneH*3/4)/2)+ (0.5/2/4)*3*SafezoneH";
			y = "SafezoneY+SafezoneH*0.95";
			w = "0.5* (((SafezoneW*3)/4)/SafezoneW)/(1/SafezoneH)";
			h = 0.0261438;
		};
		class HintBackground: RscText
		{
			idc = 8401;
			x = "SafezoneX + (safezoneW - 	1.3) / 2";
			y = "SafezoneY + (safezoneH - 		((SafezoneW / 2) * (4/3))) / 2 + 		((SafezoneW / 2) * (4/3)) - 	(	1.3 / 8) * 4/3 * 1.1";
			w = 1.3;
			h = "(	1.3 / 8) * 4/3";
			text = "ca\missions_acr\data\ui_loading_text_ca.paa";
			style = 48;
			shadow = 0;
		};
		class Hint: RscText
		{
			idc = 8400;
			x = "SafezoneX + (safezoneW - 			1.3 * 0.7 * (0.98)) / 2";
			y = "SafezoneY + (safezoneH - 		((SafezoneW / 2) * (4/3))) / 2 + 		((SafezoneW / 2) * (4/3)) - 	(	1.3 / 8) * 4/3 * 1.1 + (	(	1.3 / 8) * 4/3 - 			0.03921 * 3)/2";
			w = "1.3 * 0.7 * (0.98)";
			h = "0.03921 * 3";
			text = "";
			style = "0x02 + 0x10 + 0x200";
			lineSpacing = 1;
		};
	};
};
class RscDisplayStart: RscStandardDisplay
{
	onload = "_this call compile preprocessfilelinenumbers 'ca\missions_acr\data\scripts\ui_loadingText.sqf';";
	class controls
	{
		class HintBackground: RscText
		{
			idc = 8401;
			x = "SafezoneX + (safezoneW - 	1.3) / 2";
			y = "SafezoneY + (safezoneH - 		((SafezoneW / 2) * (4/3))) / 2 + 		((SafezoneW / 2) * (4/3)) - 	(	1.3 / 8) * 4/3 * 1.1";
			w = 1.3;
			h = "(	1.3 / 8) * 4/3";
			text = "ca\missions_acr\data\ui_loading_text_ca.paa";
			style = 48;
			shadow = 0;
		};
		class Hint: RscText
		{
			idc = 8400;
			x = "SafezoneX + (safezoneW - 			1.3 * 0.7 * (0.98)) / 2";
			y = "SafezoneY + (safezoneH - 		((SafezoneW / 2) * (4/3))) / 2 + 		((SafezoneW / 2) * (4/3)) - 	(	1.3 / 8) * 4/3 * 1.1 + (	(	1.3 / 8) * 4/3 - 			0.03921 * 3)/2";
			w = "1.3 * 0.7 * (0.98)";
			h = "0.03921 * 3";
			text = "";
			style = "0x02 + 0x10 + 0x200";
			lineSpacing = 1;
		};
	};
};
class RscDisplayLoadCustom: RscDisplayLoadMission
{
	onload = "_this call compile preprocessfilelinenumbers 'ca\missions_acr\data\scripts\ui_loadingTextCustom.sqf';";
};
class RscTitles
{
	class RscMissionScreenACR
	{
		idd = -1;
		movingEnable = 1;
		duration = 1e+011;
		fadein = 0;
		fadeout = 1;
		name = "Screen";
		onload = "uinamespace setvariable ['bis_RscMissionScreenACR',_this select 0];";
		class controls
		{
			class Picture_0: RscPicture
			{
				idc = 1000;
				text = "";
				x = "safezoneX";
				y = "safezoneY";
				w = "safezoneW";
				h = "safezoneH";
			};
			class Picture_1: Picture_0
			{
				idc = 1001;
			};
			class Picture_2: Picture_0
			{
				idc = 1002;
			};
			class Picture_3: Picture_0
			{
				idc = 1003;
			};
			class Picture_4: Picture_0
			{
				idc = 1004;
			};
			class Picture_5: Picture_0
			{
				idc = 1005;
			};
			class Picture_6: Picture_0
			{
				idc = 1006;
			};
			class Picture_7: Picture_0
			{
				idc = 1007;
			};
			class Picture_8: Picture_0
			{
				idc = 1008;
			};
			class Picture_9: Picture_0
			{
				idc = 1009;
			};
			class PictureShadow_0: Picture_0
			{
				idc = 1010;
				shadow = 2;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc = 1011;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc = 1012;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc = 1013;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc = 1014;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc = 1015;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc = 1016;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc = 1017;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc = 1018;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc = 1019;
			};
			class Text_0: RscStructuredText
			{
				idc = 1020;
				text = "";
				x = "safezoneX";
				y = "safezoneY";
				w = "safezoneW";
				h = "safezoneH";
			};
			class Text_1: Text_0
			{
				idc = 1021;
			};
			class Text_2: Text_0
			{
				idc = 1022;
			};
			class Text_3: Text_0
			{
				idc = 1023;
			};
			class Text_4: Text_0
			{
				idc = 1024;
			};
			class Text_5: Text_0
			{
				idc = 1025;
			};
			class Text_6: Text_0
			{
				idc = 1026;
			};
			class Text_7: Text_0
			{
				idc = 1027;
			};
			class Text_8: Text_0
			{
				idc = 1028;
			};
			class Text_9: Text_0
			{
				idc = 1029;
			};
		};
	};
	class RscMissionScreenACRExp
	{
		idd = -1;
		movingEnable = 1;
		duration = 1e+011;
		fadein = 0;
		fadeout = 1;
		name = "Screen";
		onload = "uinamespace setvariable ['BIS_RscMissionScreenACRExp',_this select 0];";
		class controls
		{
			class Picture_0: RscPicture
			{
				idc = 1100;
				text = "";
				x = "safezoneX";
				y = "safezoneY";
				w = "safezoneW";
				h = "safezoneH";
			};
			class Picture_1: Picture_0
			{
				idc = 1101;
			};
			class Picture_2: Picture_0
			{
				idc = 1102;
			};
			class Picture_3: Picture_0
			{
				idc = 1103;
			};
			class Picture_4: Picture_0
			{
				idc = 1104;
			};
			class Picture_5: Picture_0
			{
				idc = 1105;
			};
			class Picture_6: Picture_0
			{
				idc = 1106;
			};
			class Picture_7: Picture_0
			{
				idc = 1107;
			};
			class Picture_8: Picture_0
			{
				idc = 1108;
			};
			class Picture_9: Picture_0
			{
				idc = 1109;
			};
			class Picture_10: Picture_0
			{
				idc = 1110;
			};
			class Picture_11: Picture_0
			{
				idc = 1111;
			};
			class Picture_12: Picture_0
			{
				idc = 1112;
			};
			class Picture_13: Picture_0
			{
				idc = 1113;
			};
			class Picture_14: Picture_0
			{
				idc = 1114;
			};
			class Picture_15: Picture_0
			{
				idc = 1115;
			};
			class Picture_16: Picture_0
			{
				idc = 1116;
			};
			class Picture_17: Picture_0
			{
				idc = 1117;
			};
			class Picture_18: Picture_0
			{
				idc = 1118;
			};
			class Picture_19: Picture_0
			{
				idc = 1119;
			};
			class Picture_20: Picture_0
			{
				idc = 1120;
			};
			class Picture_21: Picture_0
			{
				idc = 1121;
			};
			class Picture_22: Picture_0
			{
				idc = 1122;
			};
			class Picture_23: Picture_0
			{
				idc = 1123;
			};
			class Picture_24: Picture_0
			{
				idc = 1124;
			};
			class Picture_25: Picture_0
			{
				idc = 1125;
			};
			class Picture_26: Picture_0
			{
				idc = 1126;
			};
			class Picture_27: Picture_0
			{
				idc = 1127;
			};
			class Picture_28: Picture_0
			{
				idc = 1128;
			};
			class Picture_29: Picture_0
			{
				idc = 1129;
			};
			class Picture_30: Picture_0
			{
				idc = 1130;
			};
			class Picture_31: Picture_0
			{
				idc = 1131;
			};
			class Picture_32: Picture_0
			{
				idc = 1132;
			};
			class Picture_33: Picture_0
			{
				idc = 1133;
			};
			class Picture_34: Picture_0
			{
				idc = 1134;
			};
			class Picture_35: Picture_0
			{
				idc = 1135;
			};
			class Picture_36: Picture_0
			{
				idc = 1136;
			};
			class Picture_37: Picture_0
			{
				idc = 1137;
			};
			class Picture_38: Picture_0
			{
				idc = 1138;
			};
			class Picture_39: Picture_0
			{
				idc = 1139;
			};
			class Picture_40: Picture_0
			{
				idc = 1140;
			};
			class Picture_41: Picture_0
			{
				idc = 1141;
			};
			class Picture_42: Picture_0
			{
				idc = 1142;
			};
			class Picture_43: Picture_0
			{
				idc = 1143;
			};
			class Picture_44: Picture_0
			{
				idc = 1144;
			};
			class Picture_45: Picture_0
			{
				idc = 1145;
			};
			class Picture_46: Picture_0
			{
				idc = 1146;
			};
			class Picture_47: Picture_0
			{
				idc = 1147;
			};
			class Picture_48: Picture_0
			{
				idc = 1148;
			};
			class Picture_49: Picture_0
			{
				idc = 1149;
			};
			class Picture_50: Picture_0
			{
				idc = 1150;
			};
			class PictureShadow_0: Picture_0
			{
				idc = 1200;
				shadow = 2;
			};
			class PictureShadow_1: PictureShadow_0
			{
				idc = 1201;
			};
			class PictureShadow_2: PictureShadow_0
			{
				idc = 1202;
			};
			class PictureShadow_3: PictureShadow_0
			{
				idc = 1203;
			};
			class PictureShadow_4: PictureShadow_0
			{
				idc = 1204;
			};
			class PictureShadow_5: PictureShadow_0
			{
				idc = 1205;
			};
			class PictureShadow_6: PictureShadow_0
			{
				idc = 1206;
			};
			class PictureShadow_7: PictureShadow_0
			{
				idc = 1207;
			};
			class PictureShadow_8: PictureShadow_0
			{
				idc = 1208;
			};
			class PictureShadow_9: PictureShadow_0
			{
				idc = 1209;
			};
			class Text_0: RscStructuredText
			{
				idc = 1300;
				text = "";
				x = "safezoneX";
				y = "safezoneY";
				w = "safezoneW";
				h = "safezoneH";
			};
			class Text_1: Text_0
			{
				idc = 1301;
			};
			class Text_2: Text_0
			{
				idc = 1302;
			};
			class Text_3: Text_0
			{
				idc = 1303;
			};
			class Text_4: Text_0
			{
				idc = 1304;
			};
			class Text_5: Text_0
			{
				idc = 1305;
			};
			class Text_6: Text_0
			{
				idc = 1306;
			};
			class Text_7: Text_0
			{
				idc = 1307;
			};
			class Text_8: Text_0
			{
				idc = 1308;
			};
			class Text_9: Text_0
			{
				idc = 1309;
			};
		};
	};
	class ItemInfoGUI
	{
		class Controls
		{
			class Title;
			class Selected;
			class Path;
			class Loading;
			class G_Description;
			class StatTitle1;
			class StatTitle2;
			class StatTitle3;
			class StatTitle4;
			class StatTitle5;
			class StatTitle6;
			class StatTitle7;
			class StatTitle8;
			class StatTitle9;
			class StatValue1;
			class StatValue2;
			class StatValue3;
			class StatValue4;
			class StatValue5;
			class StatValue6;
			class StatValue7;
			class StatValue8;
			class StatValue9;
		};
	};
	class ItemInfoGUI_ACR: ItemInfoGUI
	{
		onLoad = "_this spawn BIS_fnc_itemInfoUI";
		class Controls: Controls
		{
			class Title: Title{};
			class Selected: Selected{};
			class Path: Path{};
			class Loading: Loading{};
			class G_Description: G_Description
			{
				y = "safeZoneY + 0.14";
				h = 0.32;
			};
			class StatTitle1: StatTitle1
			{
				y = "safeZoneY + 0.14";
			};
			class StatTitle2: StatTitle2
			{
				y = "safeZoneY + 0.19";
			};
			class StatTitle3: StatTitle3
			{
				y = "safeZoneY + 0.24";
			};
			class StatTitle4: StatTitle4
			{
				y = "safeZoneY + 0.29";
			};
			class StatTitle5: StatTitle5
			{
				y = "safeZoneY + 0.34";
			};
			class StatTitle6: StatTitle6
			{
				y = "safeZoneY + 0.39";
			};
			class StatTitle7: StatTitle7
			{
				y = "safeZoneY + 0.44";
			};
			class StatTitle8: StatTitle8
			{
				y = "safeZoneY + 0.49";
			};
			class StatTitle9: StatTitle9
			{
				y = "safeZoneY + 0.54";
			};
			class StatValue1: StatValue1
			{
				y = "safeZoneY + 0.14";
			};
			class StatValue2: StatValue2
			{
				y = "safeZoneY + 0.19";
			};
			class StatValue3: StatValue3
			{
				y = "safeZoneY + 0.24";
			};
			class StatValue4: StatValue4
			{
				y = "safeZoneY + 0.29";
			};
			class StatValue5: StatValue5
			{
				y = "safeZoneY + 0.34";
			};
			class StatValue6: StatValue6
			{
				y = "safeZoneY + 0.39";
			};
			class StatValue7: StatValue7
			{
				y = "safeZoneY + 0.44";
			};
			class StatValue8: StatValue8
			{
				y = "safeZoneY + 0.49";
			};
			class StatValue9: StatValue9
			{
				y = "safeZoneY + 0.54";
			};
		};
	};
};
class RscInGameUI
{
	class RscWeaponLRTV
	{
		idd = 300;
		showCompass = 1;
		controls[] = {"CA_playerGPS","CA_mode","CA_targetGPS","CA_distance"};
		class CA_playerGPS: RscText
		{
			style = 0;
			idc = 171;
			x = "8 * 	(safezoneW / 40) + 	(safezoneX)";
			y = "19 * 	(safezoneH / 25) + 	(safezoneY)";
			w = "4 * 	(safezoneW / 40)";
			h = "1 * 	(safezoneH / 25)";
			colorText[] = {0.4,0.6745,0.2784,1};
		};
		class CA_mode: RscText
		{
			style = 0;
			idc = 152;
			x = "8 * 	(safezoneW / 40) + 	(safezoneX)";
			y = "17.5 * 	(safezoneH / 25) + 	(safezoneY)";
			w = "3 * 	(safezoneW / 40)";
			h = "1 * 	(safezoneH / 25)";
			colorText[] = {0.4,0.6745,0.2784,1};
		};
		class CA_targetGPS: RscText
		{
			style = 1;
			idc = 172;
			x = "28 * 	(safezoneW / 40) + 	(safezoneX)";
			y = "19 * 	(safezoneH / 25) + 	(safezoneY)";
			w = "4 * 	(safezoneW / 40)";
			h = "1 * 	(safezoneH / 25)";
			colorText[] = {0.4,0.6745,0.2784,1};
		};
		class CA_distance: RscText
		{
			style = 1;
			idc = 151;
			x = "29 * 	(safezoneW / 40) + 	(safezoneX)";
			y = "17.5 * 	(safezoneH / 25) + 	(safezoneY)";
			w = "3 * 	(safezoneW / 40)";
			h = "1 * 	(safezoneH / 25)";
			colorText[] = {0.4,0.6745,0.2784,1};
		};
	};
};
class cfgGroupIcons
{
	class acr_lock
	{
		name = "Locked target";
		icon = "\ca\ui\data\cursor_uav_heli_gs.paa";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_lockRecognized
	{
		name = "Locked target - Recognized";
		icon = "\ca\ui\data\cursor_uav_heli_lock_gs.paa";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_target
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\target_ca.paa";
		color[] = {0,0,0,1};
		size = 250;
		shadow = 1;
		scope = 1;
	};
	class acr_overlayicon_shoot_rifle
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\shoot_rifle_ca.paa";
		color[] = {0,0,0,1};
		size = 250;
		shadow = 1;
		scope = 1;
	};
	class acr_overlayicon_checkpoint
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\checkpoint_ca.paa";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 1;
		scope = 1;
	};
	class acr_overlayicon_getin
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\getin_ca.paa";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 1;
		scope = 1;
	};
	class acr_overlayicon_getin2
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\getin2_ca.paa";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 1;
		scope = 1;
	};
	class acr_overlayicon_inspected_hit
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspected_hit_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspected_miss
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspected_miss_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_0
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_0_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_1
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_1_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_2
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_2_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_3
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_3_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_4
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_4_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_5
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_5_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_6
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_6_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_7
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_7_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_8
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_8_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_9
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_9_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_10
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_10_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_11
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_11_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_12
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_12_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_13
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_13_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_14
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_14_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_15
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_15_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_16
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_16_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_17
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_17_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_18
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_18_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_19
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_19_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_20
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_20_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_21
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_21_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_22
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_22_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
	class acr_overlayicon_inspecting_23
	{
		name = "Target";
		icon = "\CA\Modules_ACR\Functions\WLib\targeticons\img\inspecting_23_ca";
		color[] = {0,0,0,1};
		size = 25;
		shadow = 0;
		scope = 1;
	};
};
class CfgDiary
{
	class TaskIcons
	{
		trophyUnlocked = "ca\missions_acr\data\ui_trophy_unlocked_ca.paa";
	};
};
class CfgLoadingTexts
{
	priority = 1;
	titlesDefault[] = {"$STR_ACR_loading_text_1","$STR_ACR_loading_text_2","$STR_ACR_loading_text_3","$STR_ACR_loading_text_4","$STR_ACR_loading_text_5","$STR_ACR_loading_text_6","$STR_ACR_loading_text_7","$STR_ACR_loading_text_8","$STR_ACR_loading_text_9","$STR_ACR_loading_text_10","$STR_ACR_loading_text_11","$STR_ACR_loading_text_12","$STR_ACR_loading_text_13","$STR_ACR_loading_text_14","$STR_ACR_loading_text_15","$STR_ACR_loading_text_16","$STR_ACR_loading_text_17","$STR_ACR_loading_text_18","$STR_ACR_loading_text_19","$STR_ACR_loading_text_20","$STR_ACR_loading_text_21","$STR_ACR_loading_text_22","$STR_ACR_loading_text_23","$STR_ACR_loading_text_24","$STR_ACR_loading_text_25","$STR_ACR_loading_text_26","$STR_ACR_loading_text_27","$STR_ACR_loading_text_28","$STR_ACR_loading_text_29","$STR_ACR_loading_text_30","$STR_ACR_loading_text_31","$STR_ACR_loading_text_32","$STR_ACR_loading_text_33"};
};
class CfgVehicleClasses
{
	class SupportWoodland_ACR
	{
		displayName = "$STR_ACR_DN_VC_SUPPORT";
	};
};
//};
