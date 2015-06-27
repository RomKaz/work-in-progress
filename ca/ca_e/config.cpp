////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:51 2014 : Source 'file' date Fri Oct 31 06:07:51 2014
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

//Class ca_e : config.bin{
class CfgPatches
{
	class CA_E
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAData"};
	};
};
class CfgMods
{
	class Expansion
	{
		dir = "Expansion";
		name = "Arma 2: Operation Arrowhead";
		picture = "ca\ui\data\logo_arma2ep1_ca.paa";
		hidePicture = 0;
		hideName = 1;
		action = "http://www.arma2.com/arrowhead";
	};
};
class CfgGroups
{
	class West
	{
		name = "$STR_WEST";
		class BIS_US
		{
			name = "$STR_EP1_DN_CfgGroups_West_BIS_US";
			class Infantry
			{
				name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Infantry";
				class US_RifleSquad
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Infantry_US_RifleSquad";
					faction = "BIS_US";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 1;
						vehicle = "US_Soldier_SL_EP1";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "US_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "US_Soldier_AR_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "US_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "US_Soldier_TL_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "US_Soldier_AR_EP1";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "US_Soldier_AAR_EP1";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class US_WeaponsSquad
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Infantry_US_WeaponsSquad";
					faction = "BIS_US";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 1;
						vehicle = "US_Soldier_SL_EP1";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "US_Soldier_MG_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "US_Soldier_AMG_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "US_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "US_Soldier_AMG_EP1";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "US_Soldier_LAT_EP1";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class US_Team
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Infantry_US_Team";
					faction = "BIS_US";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "US_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "US_Soldier_AR_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "US_Soldier_AAR_EP1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class US_TeamMG
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Infantry_US_TeamMG";
					faction = "BIS_US";
					rarityGroup = 0.1;
					class Unit0
					{
						side = 1;
						vehicle = "US_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "US_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "US_Soldier_AMG_EP1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class US_TeamAT
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Infantry_US_TeamAT";
					faction = "BIS_US";
					rarityGroup = 0.1;
					class Unit0
					{
						side = 1;
						vehicle = "US_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "US_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "US_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "US_Soldier_AAT_EP1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class US_TeamSupport
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Infantry_US_TeamSupport";
					faction = "BIS_US";
					rarityGroup = 0.1;
					class Unit0
					{
						side = 1;
						vehicle = "US_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "US_Soldier_Marksman_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "US_Soldier_Medic_EP1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class US_HeavyATTeam
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Infantry_US_HeavyATTeam";
					faction = "BIS_US";
					rarityGroup = 0.1;
					class Unit0
					{
						side = 1;
						vehicle = "US_Soldier_HAT_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "US_Soldier_HAT_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "US_Soldier_AHAT_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class US_SniperTeam
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Infantry_US_SniperTeam";
					faction = "BIS_US";
					rarityGroup = 0.05;
					class Unit0
					{
						side = 1;
						vehicle = "US_Soldier_Sniper_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "US_Soldier_Sniper_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "US_Soldier_Spotter_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class US_DeltaForceTeam
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Infantry_US_DeltaForceTeam";
					faction = "BIS_US";
					rarityGroup = 0;
					class Unit0
					{
						side = 1;
						vehicle = "US_Delta_Force_TL_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "US_Delta_Force_MG_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "US_Delta_Force_Assault_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "US_Delta_Force_Marksman_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
			};
			class Motorized
			{
				name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Motorized";
				class US_MotorizedSection
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Motorized_US_MotorizedSection";
					faction = "BIS_US";
					rarityGroup = 0.2;
					class Unit0
					{
						side = 1;
						vehicle = "US_Soldier_SL_EP1";
						rank = "LIEUTENANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "HMMWV_M1151_M2_DES_EP1";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "HMMWV_MK19_DES_EP1";
						rank = "SERGEANT";
						position[] = {-5,-7,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "US_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "US_Soldier_AAT_EP1";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "US_Soldier_Marksman_EP1";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class US_MotorizedSectionAT
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Motorized_US_MotorizedSectionAT";
					faction = "BIS_US";
					rarityGroup = 0.15;
					class Unit0
					{
						side = 1;
						vehicle = "US_Soldier_SL_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "HMMWV_TOW_DES_EP1";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "HMMWV_TOW_DES_EP1";
						rank = "CORPORAL";
						position[] = {-5,-7,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "US_Soldier_AR_EP1";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
				class US_DeltaPatrolATV
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Motorized_US_DeltaPatrolATV";
					faction = "BIS_US";
					rarityGroup = 0;
					class Unit0
					{
						side = 1;
						vehicle = "US_Delta_Force_TL_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "ATV_US_EP1";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "ATV_US_EP1";
						rank = "CORPORAL";
						position[] = {-5,-7,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "US_Delta_Force_Assault_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class US_DeltaPatrolHMMWV
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Motorized_US_DeltaPatrolHMMWV";
					faction = "BIS_US";
					rarityGroup = 0;
					class Unit0
					{
						side = 1;
						vehicle = "US_Delta_Force_TL_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "HMMWV_M998A2_SOV_DES_EP1";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "US_Delta_Force_Assault_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "US_Delta_Force_Marksman_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
			};
			class Mechanized
			{
				name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Mechanized";
				class US_MechanizedInfantrySquadICVM2
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Mechanized_US_MechanizedInfantrySquadICVM2";
					faction = "BIS_US";
					rarityGroup = 0.9;
					class Unit0
					{
						side = 1;
						vehicle = "US_Soldier_SL_EP1";
						rank = "LIEUTENANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "M1126_ICV_m2_EP1";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "US_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "US_Soldier_AR_EP1";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "US_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "US_Soldier_TL_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "US_Soldier_AR_EP1";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "US_Soldier_Marksman_EP1";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class US_MechanizedInfantrySquadICVMK19
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Mechanized_US_MechanizedInfantrySquadICVMK19";
					faction = "BIS_US";
					rarityGroup = 0.9;
					class Unit0
					{
						side = 1;
						vehicle = "US_Soldier_SL_EP1";
						rank = "LIEUTENANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "M1126_ICV_mk19_EP1";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "US_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "US_Soldier_AR_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "US_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "US_Soldier_TL_EP1";
						rank = "CORPORAL";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "US_Soldier_AR_EP1";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "US_Soldier_Marksman_EP1";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class US_MechanizedReconSection
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Mechanized_US_MechanizedReconSection";
					faction = "BIS_US";
					rarityGroup = 0.6;
					class Unit0
					{
						side = 1;
						vehicle = "US_Soldier_TL_EP1";
						rank = "LIEUTENANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "M2A3_EP1";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "US_Soldier_AR_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "US_Soldier_GL_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "US_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "US_Soldier_LAT_EP1";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
			class Armored
			{
				name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Armored";
				class US_MGSPlatoon
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Armored_US_MGSPlatoon";
					faction = "BIS_US";
					rarityGroup = 0.05;
					class Unit0
					{
						side = 1;
						vehicle = "M1128_MGS_EP1";
						rank = "CAPTAIN";
						position[] = {0,10,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "M1128_MGS_EP1";
						rank = "LIEUTENANT";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "M1128_MGS_EP1";
						rank = "LIEUTENANT";
						position[] = {10,0,0};
					};
				};
				class US_M1A2Platoon
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Armored_US_M1A2Platoon";
					faction = "BIS_US";
					rarityGroup = 0.05;
					class Unit0
					{
						side = 1;
						vehicle = "M1A2_US_TUSK_MG_EP1";
						rank = "CAPTAIN";
						position[] = {0,10,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "M1A2_US_TUSK_MG_EP1";
						rank = "LIEUTENANT";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "M1A2_US_TUSK_MG_EP1";
						rank = "LIEUTENANT";
						position[] = {10,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "M1A2_US_TUSK_MG_EP1";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
				};
				class US_M1A1Platoon
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Armored_US_M1A1Platoon";
					faction = "BIS_US";
					rarityGroup = 0.05;
					class Unit0
					{
						side = 1;
						vehicle = "M1A1_US_DES_EP1";
						rank = "CAPTAIN";
						position[] = {0,10,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "M1A1_US_DES_EP1";
						rank = "LIEUTENANT";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "M1A1_US_DES_EP1";
						rank = "LIEUTENANT";
						position[] = {10,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "M1A1_US_DES_EP1";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
				};
				class US_M1A2Section
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Armored_US_M1A2Section";
					faction = "BIS_US";
					rarityGroup = 0.05;
					class Unit0
					{
						side = 1;
						vehicle = "M1A2_US_TUSK_MG_EP1";
						rank = "CAPTAIN";
						position[] = {0,10,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "M1A2_US_TUSK_MG_EP1";
						rank = "LIEUTENANT";
						position[] = {5,0,0};
					};
				};
			};
			class Air
			{
				name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Air";
				class US_A10Flight
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Air_US_A10Flight";
					faction = "BIS_US";
					rarityGroup = 0.3;
					minAltitude = 100;
					maxAltitude = 500;
					class Unit0
					{
						side = 1;
						vehicle = "A10_US_EP1";
						rank = "CAPTAIN";
						position[] = {0,20,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "A10_US_EP1";
						rank = "LIEUTENANT";
						position[] = {20,0,0};
					};
				};
				class US_AH64DFlight
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Air_US_AH64DFlight";
					faction = "BIS_US";
					rarityGroup = 0.3;
					minAltitude = 40;
					maxAltitude = 100;
					class Unit0
					{
						side = 1;
						vehicle = "AH64D_EP1";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
				};
				class US_AH6JFlight
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Air_US_AH6JFlight";
					faction = "BIS_US";
					rarityGroup = 0.3;
					minAltitude = 60;
					maxAltitude = 150;
					class Unit0
					{
						side = 1;
						vehicle = "AH6J_EP1";
						rank = "CAPTAIN";
						position[] = {0,15,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "AH6J_EP1";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
				};
				class US_AH6XFlight
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Air_US_AH6XFlight";
					faction = "BIS_US";
					rarityGroup = 0.3;
					minAltitude = 60;
					maxAltitude = 150;
					class Unit0
					{
						side = 1;
						vehicle = "AH6X_EP1";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
				};
				class US_C130JFlight
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Air_US_C130JFlight";
					faction = "BIS_US";
					rarityGroup = 0.3;
					minAltitude = 100;
					maxAltitude = 500;
					class Unit0
					{
						side = 1;
						vehicle = "C130J_US_EP1";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
				};
				class US_CH47FFlight
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Air_US_CH47FFlight";
					faction = "BIS_US";
					rarityGroup = 0.3;
					minAltitude = 60;
					maxAltitude = 150;
					class Unit0
					{
						side = 1;
						vehicle = "CH_47F_EP1";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
				};
				class US_MH6JFlight
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Air_US_MH6JFlight";
					faction = "BIS_US";
					rarityGroup = 0.3;
					minAltitude = 60;
					maxAltitude = 150;
					class Unit0
					{
						side = 1;
						vehicle = "MH6J_EP1";
						rank = "CAPTAIN";
						position[] = {0,15,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "MH6J_EP1";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
				};
				class US_MQ9Flight
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Air_US_MQ9Flight";
					faction = "BIS_US";
					rarityGroup = 0.3;
					minAltitude = 500;
					maxAltitude = 800;
					class Unit0
					{
						side = 1;
						vehicle = "MQ9PredatorB_US_EP1";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
				};
				class US_UH60MFlight
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_US_Air_US_UH60MFlight";
					faction = "BIS_US";
					rarityGroup = 0.3;
					minAltitude = 60;
					maxAltitude = 150;
					class Unit0
					{
						side = 1;
						vehicle = "UH60M_EP1";
						rank = "CAPTAIN";
						position[] = {0,15,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "UH60M_EP1";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
				};
			};
		};
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
		class BIS_GER
		{
			name = "$STR_EP1_DN_CfgGroups_West_BIS_GER";
			class Infantry
			{
				name = "$STR_EP1_DN_CfgGroups_West_BIS_GER_Infantry";
				class KSKTeam
				{
					name = "$STR_EP1_DN_CfgGroups_West_BIS_GER_Infantry_KSKTeam";
					faction = "BIS_GER";
					rarityGroup = 0;
					class Unit0
					{
						side = 1;
						vehicle = "GER_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "GER_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "GER_Soldier_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "GER_Soldier_Scout_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "GER_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "GER_Soldier_Medic_EP1";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
		};
	};
	class East
	{
		name = "$STR_EAST";
		class BIS_TK
		{
			name = "$STR_EP1_DN_CfgGroups_East_BIS_TK";
			class Infantry
			{
				name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Infantry";
				class TK_InfantrySquad
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Infantry_TK_InfantrySquad";
					faction = "BIS_TK";
					rarityGroup = 0.7;
					class Unit0
					{
						side = 0;
						vehicle = "TK_Soldier_SL_EP1";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TK_Soldier_MG_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_Soldier_GL_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TK_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TK_Soldier_LAT_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TK_Soldier_GL_EP1";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "TK_Soldier_AAT_EP1";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "TK_Soldier_AMG_EP1";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
				class TK_InfantrySection
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Infantry_TK_InfantrySection";
					faction = "BIS_TK";
					rarityGroup = 0.2;
					class Unit0
					{
						side = 0;
						vehicle = "TK_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TK_Soldier_GL_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class TK_InfantrySectionAT
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Infantry_TK_InfantrySectionAT";
					faction = "BIS_TK";
					rarityGroup = 0.2;
					class Unit0
					{
						side = 0;
						vehicle = "TK_Soldier_HAT_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TK_Soldier_HAT_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TK_Soldier_AAT_EP1";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class TK_InfantrySectionAA
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Infantry_TK_InfantrySectionAA";
					faction = "BIS_TK";
					rarityGroup = 0.2;
					class Unit0
					{
						side = 0;
						vehicle = "TK_Soldier_AA_EP1";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TK_Soldier_AA_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_Soldier_AA_EP1";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class TK_InfantrySectionMG
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Infantry_TK_InfantrySectionMG";
					faction = "BIS_TK";
					rarityGroup = 0.2;
					class Unit0
					{
						side = 0;
						vehicle = "TK_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TK_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_Soldier_GL_EP1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TK_Soldier_AMG_EP1";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class TK_SniperTeam
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Infantry_TK_SniperTeam";
					faction = "BIS_TK";
					rarityGroup = 0.05;
					class Unit0
					{
						side = 0;
						vehicle = "TK_Soldier_SniperH_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TK_Soldier_Spotter_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
				};
				class TK_SpecialPurposeSquad
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Infantry_TK_SpecialPurposeSquad";
					faction = "BIS_TK";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 0;
						vehicle = "TK_Special_Forces_TL_EP1";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TK_Special_Forces_MG_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_Special_Forces_EP1";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_Special_Forces_EP1";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TK_Special_Forces_MG_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TK_Special_Forces_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TK_Special_Forces_EP1";
						rank = "CORPORAL";
						position[] = {13,0,0};
					};
				};
			};
			class Motorized
			{
				name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Motorized";
				class TK_MotorizedInfanterySquad
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Motorized_TK_MotorizedInfanterySquad";
					faction = "BIS_TK";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "TK_Soldier_SL_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "V3S_Open_TK_EP1";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TK_Soldier_GL_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TK_Soldier_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TK_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "TK_Soldier_LAT_EP1";
						rank = "CORPORAL";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "TK_Soldier_GL_EP1";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "TK_Soldier_AMG_EP1";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class TK_MotorizedReconSection
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Motorized_TK_MotorizedReconSection";
					faction = "BIS_TK";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "TK_Soldier_SL_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "UAZ_MG_TK_EP1";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "UAZ_AGS30_TK_EP1";
						rank = "CORPORAL";
						position[] = {-5,-7,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class TK_MotorizedPatrol
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Motorized_TK_MotorizedPatrol";
					faction = "BIS_TK";
					rarityGroup = 0.4;
					class Unit0
					{
						side = 0;
						vehicle = "TK_Soldier_GL_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "UAZ_Unarmed_TK_EP1";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
			};
			class Mechanized
			{
				name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Mechanized";
				class TK_MechanizedInfantrySquadBMP2
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Mechanized_TK_MechanizedInfantrySquadBMP2";
					faction = "BIS_TK";
					rarityGroup = 0.7;
					class Unit0
					{
						side = 0;
						vehicle = "TK_Soldier_SL_EP1";
						rank = "LIEUTENANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "BMP2_TK_EP1";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_Soldier_GL_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TK_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TK_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TK_Soldier_LAT_EP1";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "TK_Soldier_AAT_EP1";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class TK_MechanizedInfantrySquadBTR60
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Mechanized_TK_MechanizedInfantrySquadBTR60";
					faction = "BIS_TK";
					rarityGroup = 0.9;
					class Unit0
					{
						side = 0;
						vehicle = "TK_Soldier_SL_EP1";
						rank = "LIEUTENANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "BTR60_TK_EP1";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_Soldier_MG_EP1";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_Soldier_GL_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TK_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TK_Soldier_MG_EP1";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TK_Soldier_GL_EP1";
						rank = "SERGEANT";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "TK_Soldier_LAT_EP1";
						rank = "CORPORAL";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "TK_Soldier_EP1";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class TK_MechanizedSpecialSquad
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Mechanized_TK_MechanizedSpecialSquad";
					faction = "BIS_TK";
					rarityGroup = 0;
					class Unit0
					{
						side = 0;
						vehicle = "TK_Special_Forces_TL_EP1";
						rank = "LIEUTENANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "BTR60_TK_EP1";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_Special_Forces_MG_EP1";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_Special_Forces_MG_EP1";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TK_Special_Forces_MG_EP1";
						rank = "SERGEANT";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TK_Special_Forces_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TK_Special_Forces_EP1";
						rank = "CORPORAL";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "TK_Special_Forces_EP1";
						rank = "CORPORAL";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "TK_Special_Forces_EP1";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
				};
				class TK_MechanizedReconSection
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Mechanized_TK_MechanizedReconSection";
					faction = "BIS_TK";
					rarityGroup = 0.7;
					class Unit0
					{
						side = 0;
						vehicle = "TK_Soldier_SL_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "BRDM2_TK_EP1";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "BRDM2_TK_EP1";
						rank = "SERGEANT";
						position[] = {-5,-7,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TK_Soldier_AR_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TK_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TK_Soldier_GL_EP1";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "TK_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class TK_MechanizedReconSectionAT
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Mechanized_TK_MechanizedReconSectionAT";
					faction = "BIS_TK";
					rarityGroup = 0.7;
					class Unit0
					{
						side = 0;
						vehicle = "BRDM2_ATGM_TK_EP1";
						rank = "SERGEANT";
						position[] = {0,10,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "BRDM2_ATGM_TK_EP1";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
			};
			class Armored
			{
				name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Armored";
				class TK_T72Platoon
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Armored_TK_T72Platoon";
					faction = "BIS_TK";
					rarityGroup = 0.05;
					class Unit0
					{
						side = 0;
						vehicle = "T72_TK_EP1";
						rank = "CAPTAIN";
						position[] = {0,10,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "T72_TK_EP1";
						rank = "LIEUTENANT";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "T72_TK_EP1";
						rank = "LIEUTENANT";
						position[] = {10,0,0};
					};
				};
				class TK_T55Platoon
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Armored_TK_T55Platoon";
					faction = "BIS_TK";
					rarityGroup = 0.05;
					class Unit0
					{
						side = 0;
						vehicle = "T55_TK_EP1";
						rank = "CAPTAIN";
						position[] = {0,10,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "T55_TK_EP1";
						rank = "LIEUTENANT";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "T55_TK_EP1";
						rank = "LIEUTENANT";
						position[] = {10,0,0};
					};
				};
				class TK_T34Platoon
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Armored_TK_T34Platoon";
					faction = "BIS_TK";
					rarityGroup = 0.05;
					class Unit0
					{
						side = 0;
						vehicle = "T34_TK_EP1";
						rank = "CAPTAIN";
						position[] = {0,10,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "T34_TK_EP1";
						rank = "LIEUTENANT";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "T34_TK_EP1";
						rank = "LIEUTENANT";
						position[] = {10,0,0};
					};
				};
			};
			class Air
			{
				name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Air";
				class TK_An2Flight
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Air_TK_An2Flight";
					faction = "BIS_TK";
					rarityGroup = 0.3;
					minAltitude = 100;
					maxAltitude = 500;
					class Unit0
					{
						side = 0;
						vehicle = "An2_TK_EP1";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
				};
				class TK_Mi24_DFlight
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Air_TK_Mi24_DFlight";
					faction = "BIS_TK";
					rarityGroup = 0.3;
					minAltitude = 40;
					maxAltitude = 100;
					class Unit0
					{
						side = 0;
						vehicle = "Mi24_D_TK_EP1";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
				};
				class TK_Mi_17Flight
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Air_TK_Mi_17Flight";
					faction = "BIS_TK";
					rarityGroup = 0.3;
					minAltitude = 60;
					maxAltitude = 150;
					class Unit0
					{
						side = 0;
						vehicle = "Mi17_TK_EP1";
						rank = "CAPTAIN";
						position[] = {0,15,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "Mi17_TK_EP1";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
				};
				class TK_Su25Flight
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Air_TK_Su25Flight";
					faction = "BIS_TK";
					rarityGroup = 0.3;
					minAltitude = 100;
					maxAltitude = 500;
					class Unit0
					{
						side = 0;
						vehicle = "Su25_TK_EP1";
						rank = "CAPTAIN";
						position[] = {0,20,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "Su25_TK_EP1";
						rank = "LIEUTENANT";
						position[] = {20,0,0};
					};
				};
				class TK_UH1HFlight
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_Air_TK_UH1HFlight";
					faction = "BIS_TK";
					rarityGroup = 0.3;
					minAltitude = 60;
					maxAltitude = 150;
					class Unit0
					{
						side = 0;
						vehicle = "UH1H_TK_EP1";
						rank = "CAPTAIN";
						position[] = {0,15,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "UH1H_TK_EP1";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
				};
			};
		};
		class BIS_TK_INS
		{
			name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_INS";
			class Infantry
			{
				name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_INS_Infantry";
				class TK_INS_Group
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_INS_Infantry_TK_INS_Group";
					faction = "BIS_TK_INS";
					rarityGroup = 0.7;
					class Unit0
					{
						side = 0;
						vehicle = "TK_INS_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TK_INS_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_INS_Soldier_2_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_INS_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TK_INS_Soldier_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TK_INS_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TK_INS_Soldier_AR_EP1";
						rank = "CORPORAL";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "TK_INS_Soldier_Sniper_EP1";
						rank = "CORPORAL";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "TK_INS_Soldier_3_EP1";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "TK_INS_Soldier_4_EP1";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class TK_INS_Patrol
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_INS_Infantry_TK_INS_Patrol";
					faction = "BIS_TK_INS";
					rarityGroup = 0.2;
					class Unit0
					{
						side = 0;
						vehicle = "TK_INS_Soldier_2_EP1";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TK_INS_Soldier_AR_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_INS_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_INS_Soldier_3_EP1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TK_INS_Soldier_4_EP1";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class TK_INS_AATeam
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_INS_Infantry_TK_INS_AATeam";
					faction = "BIS_TK_INS";
					rarityGroup = 0.2;
					class Unit0
					{
						side = 0;
						vehicle = "TK_INS_Soldier_AA_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TK_INS_Soldier_AA_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_INS_Soldier_AA_EP1";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class TK_INS_ATTeam
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_INS_Infantry_TK_INS_ATTeam";
					faction = "BIS_TK_INS";
					rarityGroup = 0.2;
					class Unit0
					{
						side = 0;
						vehicle = "TK_INS_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "TK_INS_Soldier_AT_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_INS_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_INS_Soldier_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
			};
			class Motorized
			{
				name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_INS_Motorized";
				class TK_INS_Technicals
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_INS_Motorized_TK_INS_Technicals";
					faction = "BIS_TK_INS";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 0;
						vehicle = "TK_INS_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "LandRover_SPG9_TK_INS_EP1";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "LandRover_MG_TK_INS_EP1";
						rank = "CORPORAL";
						position[] = {-5,-7,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_INS_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class TK_INS_MotorizedGroup
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_INS_Motorized_TK_INS_MotorizedGroup";
					faction = "BIS_TK_INS";
					rarityGroup = 0.1;
					class Unit0
					{
						side = 0;
						vehicle = "TK_INS_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "V3S_TK_EP1";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_INS_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_INS_Soldier_2_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TK_INS_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TK_INS_Soldier_4_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TK_INS_Soldier_TL_EP1";
						rank = "CORPORAL";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "TK_INS_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "TK_INS_Soldier_AR_EP1";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "TK_INS_Soldier_Sniper_EP1";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
					class Unit10
					{
						side = 0;
						vehicle = "TK_INS_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {21,0,0};
					};
				};
				class TK_INS_MotorizedPatrolBTR40
				{
					name = "$STR_EP1_DN_CfgGroups_East_BIS_TK_INS_Motorized_TK_INS_MotorizedPatrolBTR40";
					faction = "BIS_TK_INS";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 0;
						vehicle = "TK_INS_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "BTR40_MG_TK_INS_EP1";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "TK_INS_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "TK_INS_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "TK_INS_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "TK_INS_Soldier_4_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "TK_INS_Soldier_3_EP1";
						rank = "CORPORAL";
						position[] = {13,0,0};
					};
				};
			};
		};
	};
	class Guerrila
	{
		name = "$STR_EP1_DN_CfgGroups_Guerrila";
		class BIS_TK_GUE
		{
			name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE";
			class Infantry
			{
				name = "$STR_CfgGroups_Guerrila_GUE_Infantry";
				class TK_GUE_Group
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Infantry_TK_GUE_Group";
					faction = "BIS_TK_GUE";
					rarityGroup = 0.7;
					class Unit0
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_4_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_Sniper_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_5_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_MG_EP1";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_4_EP1";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_2_EP1";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_5_EP1";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class TK_GUE_GroupWeapons
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Infantry_TK_GUE_GroupWeapons";
					faction = "BIS_TK_GUE";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_HAT_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_4_EP1";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class TK_GUE_Patrol
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Infantry_TK_GUE_Patrol";
					faction = "BIS_TK_GUE";
					rarityGroup = 0.2;
					class Unit0
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_EP1";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_3_EP1";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_2_EP1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class TK_GUE_ATTeam
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Infantry_TK_GUE_ATTeam";
					faction = "BIS_TK_GUE";
					rarityGroup = 0.2;
					class Unit0
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_HAT_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_AAT_EP1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class TK_GUE_AATeam
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Infantry_TK_GUE_AATeam";
					faction = "BIS_TK_GUE";
					rarityGroup = 0.2;
					class Unit0
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_AA_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_AA_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_AA_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class TK_GUE_SniperTeam
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Infantry_TK_GUE_SniperTeam";
					faction = "BIS_TK_GUE";
					rarityGroup = 0.05;
					class Unit0
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_Sniper_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_Sniper_EP1";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
				};
			};
			class Motorized
			{
				name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Motorized";
				class TK_GUE_Technicals
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Motorized_TK_GUE_Technicals";
					faction = "BIS_TK_GUE";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "Offroad_DSHKM_TK_GUE_EP1";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "Offroad_SPG9_TK_GUE_EP1";
						rank = "CORPORAL";
						position[] = {-5,-7,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "Pickup_PK_TK_GUE_EP1";
						rank = "CORPORAL";
						position[] = {-5,-14,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class TK_GUE_MotorizedGroup
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Motorized_TK_GUE_MotorizedGroup";
					faction = "BIS_TK_GUE";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "V3S_TK_GUE_EP1";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_4_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_Sniper_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_3_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_MG_EP1";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_4_EP1";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
					class Unit10
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_2_EP1";
						rank = "PRIVATE";
						position[] = {21,0,0};
					};
					class Unit11
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {23,0,0};
					};
					class Unit12
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_3_EP1";
						rank = "PRIVATE";
						position[] = {25,0,0};
					};
					class Unit13
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_3_EP1";
						rank = "PRIVATE";
						position[] = {27,0,0};
					};
				};
				class TK_GUE_MotorizedPatrol
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Motorized_TK_GUE_MotorizedPatrol";
					faction = "BIS_TK_GUE";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_TL_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "BTR40_MG_TK_GUE_EP1";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_4_EP1";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_2_EP1";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
			};
			class Mechanized
			{
				name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Mechanized";
				class TK_GUE_MechanizedPatrol
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Mechanized_TK_GUE_MechanizedPatrol";
					faction = "BIS_TK_GUE";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_4_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "BRDM2_TK_GUE_EP1";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_4_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
				class TK_GUE_MechanizedGroup
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Mechanized_TK_GUE_MechanizedGroup";
					faction = "BIS_TK_GUE";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_TL_EP1";
						rank = "LIEUTENANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "BTR40_MG_TK_GUE_EP1";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "BTR40_MG_TK_GUE_EP1";
						rank = "SERGEANT";
						position[] = {-5,-7,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_AR_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_3_EP1";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_2_EP1";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "TK_GUE_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
				};
			};
			class Armored
			{
				name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Armored";
				class TK_GUE_T55Section
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Armored_TK_GUE_T55Section";
					faction = "BIS_TK_GUE";
					rarityGroup = 0.02;
					class Unit0
					{
						side = 2;
						vehicle = "T55_TK_GUE_EP1";
						rank = "CAPTAIN";
						position[] = {0,10,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "T55_TK_GUE_EP1";
						rank = "LIEUTENANT";
						position[] = {5,0,0};
					};
				};
				class TK_GUE_T34Platoon
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_TK_GUE_Armored_TK_GUE_T34Platoon";
					faction = "BIS_TK_GUE";
					rarityGroup = 0.05;
					class Unit0
					{
						side = 2;
						vehicle = "T34_TK_GUE_EP1";
						rank = "CAPTAIN";
						position[] = {0,10,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "T34_TK_GUE_EP1";
						rank = "LIEUTENANT";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "T34_TK_GUE_EP1";
						rank = "LIEUTENANT";
						position[] = {10,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "T34_TK_GUE_EP1";
						rank = "LIEUTENANT";
						position[] = {15,0,0};
					};
				};
			};
		};
		class BIS_UN
		{
			name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_UN";
			class Infantry
			{
				name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_UN_Infantry";
				class UN_Patrol
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_UN_Infantry_UN_Patrol";
					faction = "BIS_UN";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_Guard_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
			};
			class Motorized
			{
				name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_UN_Motorized";
				class UN_MotorizedPatrol
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_UN_Motorized_UN_MotorizedPatrol";
					faction = "BIS_UN";
					rarityGroup = 0.6;
					class Unit0
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_Guard_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "UAZ_Unarmed_UN_EP1";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};
			};
			class Mechanized
			{
				name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_UN_Mechanized";
				class UN_MechanizedPatrolBMP2
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_UN_Mechanized_UN_MechanizedPatrolBMP2";
					faction = "BIS_UN";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_SL_EP1";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "BMP2_UN_EP1";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class UN_MechanizedPatrolM113
				{
					name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_UN_Mechanized_UN_MechanizedPatrolM113";
					faction = "BIS_UN";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_SL_EP1";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "M113_UN_EP1";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_AT_EP1";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_MG_EP1";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "UN_CDF_Soldier_EP1";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
			};
		};
	};
	class Civilian
	{
		name = "$STR_CIVILIAN";
		class BIS_TK_CIV
		{
			name = "$STR_EP1_DN_CfgGroups_Civilian_BIS_TK_CIV";
			class Infantry
			{
				name = "$STR_EP1_DN_CfgGroups_Civilian_BIS_TK_CIV_Infantry";
				class TK_CIV_Crowd1
				{
					name = "$STR_EP1_DN_CfgGroups_Civilian_BIS_TK_CIV_Infantry_TK_CIV_Crowd1";
					faction = "BIS_TK_CIV";
					rarityGroup = 0;
					class Unit0
					{
						side = 3;
						vehicle = "TK_CIV_Takistani01_EP1";
						rank = "PRIVATE";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 3;
						vehicle = "TK_CIV_Takistani02_EP1";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 3;
						vehicle = "TK_CIV_Takistani03_EP1";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 3;
						vehicle = "TK_CIV_Takistani05_EP1";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 3;
						vehicle = "TK_CIV_Woman01_EP1";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 3;
						vehicle = "TK_CIV_Takistani06_EP1";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class TK_CIV_Crowd2
				{
					name = "$STR_EP1_DN_CfgGroups_Civilian_BIS_TK_CIV_Infantry_TK_CIV_Crowd2";
					faction = "BIS_TK_CIV";
					rarityGroup = 0;
					class Unit0
					{
						side = 3;
						vehicle = "TK_CIV_Woman01_EP1";
						rank = "PRIVATE";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 3;
						vehicle = "TK_CIV_Woman02_EP1";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 3;
						vehicle = "TK_CIV_Woman03_EP1";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
			};
		};
	};
};
class CfgSurfaces
{
	class Default;
	class RoadTarmac_EP1: Default
	{
		access = 2;
		files = "asf1_tak*";
		rough = 0.001;
		dust = 0.1;
		soundEnviron = "road";
		character = "Empty";
	};
	class Roadway;
	class RoadDirt_EP1: Roadway
	{
		access = 2;
		files = "dirt_tak*";
		rough = 0.01;
		dust = 0.8;
		soundEnviron = "dirt";
		character = "Empty";
	};
};
class RscText;
class RscPicture;
class RscSplashText: RscText{};
class RscTitles
{
	class Default;
	class SplashMeridian4
	{
		idd = -1;
		movingEnable = 0;
		duration = 3;
		name = "Meridian 4";
		controls[] = {"Picture","Text_Meridian4"};
		class Picture: RscPicture
		{
			x = "SafeZoneX + SafeZoneW / 2 - 0.6274510 / 2";
			y = "SafeZoneY +  SafeZoneH / 2 - 0.4183007 / 2";
			w = 0.627451;
			h = 0.4183007;
			text = "\ca\Ca_E\data\ui_Meridian4logo";
		};
		class Text_Meridian4: RscSplashText
		{
			x = 0;
			y = 0.6;
			w = 1;
			h = 0.05;
			sizeEx = "TextSize_medium";
			text = "";
		};
	};
};
class CfgFactionClasses
{
	class BIS_TK
	{
		displayName = "$STR_EP1_DN_FN_BIS_TK";
		priority = 14;
		side = 0;
		primaryLanguage = "TK";
	};
	class BIS_TK_INS
	{
		displayName = "$STR_EP1_DN_FN_BIS_TK_INS";
		priority = 15;
		side = 0;
		primaryLanguage = "TK";
	};
	class BIS_TK_CIV
	{
		displayName = "$STR_EP1_DN_FN_BIS_TK_CIV";
		priority = 12;
		side = 3;
		primaryLanguage = "TK";
	};
	class BIS_CIV_special
	{
		displayName = "$STR_EP1_DN_FN_BIS_CIV_special";
		priority = 13;
		side = 3;
		primaryLanguage = "EN";
	};
	class BIS_US
	{
		displayName = "$STR_EP1_DN_FN_BIS_US";
		priority = 8;
		side = 1;
		primaryLanguage = "EN";
	};
	class BIS_CZ
	{
		displayName = "$STR_EP1_DN_FN_BIS_CZ";
		priority = 9;
		side = 1;
		primaryLanguage = "EN";
	};
	class BIS_GER
	{
		displayName = "$STR_EP1_DN_FN_BIS_GER";
		priority = 10;
		side = 1;
		primaryLanguage = "EN";
	};
	class BIS_TK_GUE
	{
		displayName = "$STR_EP1_DN_FN_BIS_TK_GUE";
		priority = 10;
		side = 2;
		primaryLanguage = "TK";
	};
	class BIS_UN
	{
		displayName = "$STR_EP1_DN_FN_BIS_UN";
		priority = 11;
		side = 2;
		primaryLanguage = "EN";
	};
};
class CfgVehicleClasses
{
	class Helpers
	{
		displayName = "$STR_EP1_DN_VC_Helpers";
	};
	class Test_EP1
	{
		displayName = "$STR_EP1_DN_VC_Test_EP1";
	};
	class Structures_E
	{
		displayName = "$STR_EP1_DN_VC_Structures_E";
	};
	class MenDeltaForce
	{
		displayName = "$STR_EP1_DN_VC_MenDeltaForce";
	};
	class MenSpecialForces
	{
		displayName = "$STR_EP1_DN_VC_MenSpecialForces";
	};
	class MenSpecial
	{
		displayName = "$STR_EP1_DN_VC_MenSpecial";
	};
	class Backpacks
	{
		displayName = "$STR_EP1_DN_VC_Backpacks";
	};
	class Animals_TK
	{
		displayName = "$STR_EP1_DN_VC_Animals_TK";
	};
	class Military_US_EP1
	{
		displayName = "$STR_EP1_DN_VC_Military_US";
	};
	class Military_TKA_EP1
	{
		displayName = "$STR_EP1_DN_VC_Military_TKA";
	};
	class Military_GUE_EP1
	{
		displayName = "$STR_EP1_DN_VC_Military_GUE";
	};
};
class CfgCoreData
{
	gunLightModel = "ca\ca_e\data\gunLight.p3d";
	rayModel = "ca\ca_e\data\laserBeam.p3d";
};
class CfgWorlds
{
	initWorld = "Desert_E";
	demoWorld = "Zargabad";
	class GenericNames
	{
		class TakistaniMen
		{
			class FirstNames
			{
				Abdul_Aziz = "Abdul-Aziz";
				Abdulla_h = "Abdullah";
				Azim = "Azim";
				Akbar = "Akbar";
				Khairulla_h = "Khairullah";
				Sami = "Sami";
				Sadat = "Sadat";
				Sibhatulla_h = "Sibhatullah";
				Hasan = "Hasan";
				Hussein = "Hussein";
				Habib = "Habib";
				Umar = "Umar";
				Hasib = "Hasib";
				Abdul_Latif = "Abdul-Latif";
				Ali = "Ali";
				Karim = "Karim";
				Kabir = "Kabir";
				Luqman = "Luqman";
				Mahmood = "Mahmood";
				Rahim = "Rahim";
				Jamal = "Jamal";
				Latif = "Latif";
				Adil = "Adil";
				Farid = "Farid";
				Jajil = "Jajil";
				Khalil = "Khalil";
				Mustafa = "Mustafa";
				Qasim = "Qasim";
				Hafiz = "Hafiz";
				Abbas = "Abbas";
				Abdul_Basir = "Abdul-Basir";
				Abdul_Mussawir = "Abdul-Mussawir";
				Qadeer = "Qadeer";
				Abdul_Qa_dir = "Abdul-Qadir";
				Abdul_Wahhab = "Abdul-Wahhab";
				Majeed = "Majeed";
				Amir = "Amir";
				Arif = "Arif";
				Aslan = "Aslan";
				Basharat = "Basharat";
				Bashir = "Bashir";
				Ehsan = "Ehsan";
				Faisal = "Faisal";
				Haikal = "Haikal";
				Idris = "Idris";
				Isma_i_l = "Ismail";
				Jabr = "Jabr";
				Jafar = "Jafar";
				Mufid = "Mufid";
			};
			class LastNames
			{
				Saikal = "Saikal";
				Ahmed_Khan = "Ahmed-Khan";
				Kakar = "Kakar";
				Ra_tebza_d = "Ratebzad";
				Tanwir = "Tanwir";
				Siddiqi = "Siddiqi";
				Wardak = "Wardak";
				Fahim = "Fahim";
				Rahimi = "Rahimi";
				Ajani = "Ajani";
				Takhtar = "Takhtar";
				Bahadur = "Bahadur";
				Ama_ni = "Amani";
				Nazari = "Nazari";
				Muhtaram = "Muhtaram";
				Khalili = "Khalili";
				Spanta = "Spanta";
				Zakhilwal = "Zakhilwal";
				Khoram = "Khoram";
				Faruqi = "Faruqi";
				Sangeen = "Sangeen";
				Adel = "Adel";
				Anwari = "Anwari";
				Amin = "Amin";
				Masood = "Masood";
				Gailani = "Gailani";
				Ghafurzai = "Ghafurzai";
				Jalali = "Jalali";
				Yusufzai = "Yusufzai";
				Aybak = "Aybak";
				Kohzad = "Kohzad";
				Haidari = "Haidari";
				Habibzai = "Habibzai";
				Zamani = "Zamani";
				Mohammadi = "Mohammadi";
				Habibi = "Habibi";
				Yousuf = "Yousuf";
				Khusraw = "Khusraw";
				Bakhtari = "Bakhtari";
				Jawadi = "Jawadi";
				Karizi = "Karizi";
				Shah = "Shah";
				Ahmed_Jan = "Ahmed-Jan";
				Khara = "Khara";
				Hakimi = "Hakimi";
				Noori = "Noori";
				Sabet = "Sabet";
				Zahor = "Zahor";
				Kushan = "Kushan";
			};
		};
		class TakistaniWomen
		{
			class FirstNames
			{
				Rana = "Rana";
				Gulshan = "Gulshan";
				Aziza = "Aziza";
				Rahima = "Rahima";
				Shaima = "Shaima";
				Ruda_be = "Rudabe";
				Emira = "Emira";
				Karima = "Karima";
				Latifa = "Latifa";
				Faima = "Faima";
				Guljon = "Guljon";
				Mahshid = "Mahshid";
				Zainab = "Zainab";
				Aisha = "Aisha";
				Malika = "Malika";
				Jasmin = "Jasmin";
				Jamila = "Jamila";
				Anisa = "Anisa";
				Hawa = "Hawa";
				Mahbuba = "Mahbuba";
				Safia = "Safia";
				Soraya = "Soraya";
				Shakira = "Shakira";
				Zhawid = "Zhawid";
				Shirin = "Shirin";
				Laila = "Laila";
				Pakiza = "Pakiza";
				Tasnim = "Tasnim";
				Tuba = "Tuba";
				Adila = "Adila";
				Ma_hnoor = "Mahnoor";
				Mariam = "Mariam";
				Nazuk = "Nazuk";
				Rua = "Rua";
				Nuha = "Nuha";
				Sabira = "Sabira";
				Sakina = "Sakina";
				Sammar = "Sammar";
				Shugufa = "Shugufa";
				Wahida = "Wahida";
				Yelda = "Yelda";
				Zamina = "Zamina";
				Zuhra = "Zuhra";
				Rubaba = "Rubaba";
				Nejat = "Nejat";
				Noor = "Noor";
				Fusila = "Fusila";
				Haifa = "Haifa";
				Hazima = "Hazima";
			};
			class LastNames
			{
				Saikal = "Saikal";
				Ahmed_Khan = "Ahmed-Khan";
				Kakar = "Kakar";
				Ra_tebza_d = "Ratebzad";
				Tanwir = "Tanwir";
				Siddiqi = "Siddiqi";
				Wardak = "Wardak";
				Fahim = "Fahim";
				Rahimi = "Rahimi";
				Ajani = "Ajani";
				Takhtar = "Takhtar";
				Bahadur = "Bahadur";
				Ama_ni = "Amani";
				Nazari = "Nazari";
				Muhtaram = "Muhtaram";
				Khalili = "Khalili";
				Spanta = "Spanta";
				Zakhilwal = "Zakhilwal";
				Khoram = "Khoram";
				Faruqi = "Faruqi";
				Sangeen = "Sangeen";
				Adel = "Adel";
				Anwari = "Anwari";
				Amin = "Amin";
				Masood = "Masood";
				Gailani = "Gailani";
				Ghafurzai = "Ghafurzai";
				Jalali = "Jalali";
				Yusufzai = "Yusufzai";
				Aybak = "Aybak";
				Kohzad = "Kohzad";
				Haidari = "Haidari";
				Habibzai = "Habibzai";
				Zamani = "Zamani";
				Mohammadi = "Mohammadi";
				Habibi = "Habibi";
				Yousuf = "Yousuf";
				Khusraw = "Khusraw";
				Bakhtari = "Bakhtari";
				Jawadi = "Jawadi";
				Karizi = "Karizi";
				Shah = "Shah";
				Ahmed_Jan = "Ahmed-Jan";
				Khara = "Khara";
				Hakimi = "Hakimi";
				Noori = "Noori";
				Sabet = "Sabet";
				Zahor = "Zahor";
				Kushan = "Kushan";
			};
		};
		class GermanMen
		{
			class FirstNames
			{
				Hans = "Hans";
				Jorg = "Jorg";
				Kristian = "Kristian";
				Marcel = "Marcel";
				Lucas = "Lucas";
				Jens = "Jens";
				Thomas = "Thomas";
				Paul = "Paul";
				Niclas = "Niclas";
				Tim = "Tim";
				Jonas = "Jonas";
				Martin = "Martin";
				Max = "Max";
				Alexander = "Alexander";
				Tobias = "Tobias";
			};
			class LastNames
			{
				Muller = "Muller";
				Schmidt = "Schmidt";
				Schneider = "Schneider";
				Fischer = "Fischer";
				Weber = "Weber";
				Menger = "Menger";
				Wagner = "Wagner";
				Becker = "Becker";
				Schulz = "Schulz";
				Hoffmann = "Hoffmann";
				Schaffer = "Schaffer";
				Koch = "Koch";
				Bauer = "Bauer";
				Richter = "Richter";
				Schwarz = "Schwarz";
				Wolff = "Wolff";
			};
		};
	};
};
class CfgAddons
{
	class PreloadBanks{};
	class PreloadAddons
	{
		class CA_EP1
		{
			list[] = {"CA_Missions","CAData","HALO_Test","CAAnimals","CA_Anims","CA_Anims_Sdr","CA_Anims_Wmn","CA_Anims_E","CA_Anims_E_Sdr","CA_Anims_E_Wmn","CABuildings","CA_E","CA_Heads","CAData_ParticleEffects","CA_Dubbing","CA_Dubbing_E","CA_DubbingRadio_E","CA_Editor","CALanguage","CALanguage_e","CALanguage_missions","CALanguage_missions_e","CA_Modules","CA_Missions_AlternativeInjurySimulation","CA_Modules_Alice","CA_Missions_AmbientCombat","CA_Modules_Animals","CA_Missions_BattlefieldClearance","CA_Modules_clouds","CA_Modules_Coin","CA_Modules_DynO","CA_Missions_FirstAidSystem","CA_Modules_Functions","CA_Missions_GarbageCollector","CA_HighCommand","CA_Modules_Marta","CA_Modules_Silvie","BI_SRRS","CA_Modules_UAV","CA_Modules_ZoRA","CA_Modules_E","CA_Modules_Alice2","CA_Modules_E_DynO","CA_Modules_E_Functions","CA_Modules_E_Gita","CA_Modules_E_OO","CA_Support","CA_Modules_E_UAV","CA_Modules_E_UAV_Heli","CA_Modules_E_Weather","CARoads2","CARoads2Bridge","CARoads2Dam","CARoads_E","CARocks_E","CA_SoundsMissions_E","CASounds","CASounds_E","CAStructures","CAStructures_A_CraneCon","CAStructuresLand_Nav_Boathouse","CAStructuresHouse_Shed_Ind","CAStructures_Wall","CAFonts","CA_Animals2","CA_Animals2_Anim_Config","CA_Animals2_Chicken","CA_Animals2_Cow","CA_Animals2_Dogs","CA_Animals2_Dogs_Fin","CA_Animals2_Dogs_Pastor","CA_Animals2_Goat","CA_Animals2_Rabbit","CA_Animals2_Sheep","CA_Animals2_WildBoar","CA_Animals_E","CA_Anims_Char","CABuildings2","Ind_MalyKomin","CAStructures_IndPipe1_todo_delete","IndPipe2","Ind_Tank","Shed_wooden","CA_E_ParticleEffects","CA_Missions_E","CAMusic_E","CAStructures_Nav_pier","CAStructures_E","CAStructures_E_HouseA","CAStructures_E_HouseA_A_BuildingWIP","CAStructures_E_HouseA_A_CityGate1","CAStructures_E_HouseA_A_Minaret","CAStructures_E_HouseA_A_Minaret_Porto","CAStructures_E_HouseA_A_Mosque_big","CAStructures_E_HouseA_A_Mosque_small","CAStructures_E_HouseA_A_Office01","CAStructures_E_HouseA_a_stationhouse","CAStructures_E_HouseA_A_Villa","CAStructures_E_HouseC","CAStructures_E_HouseK","CAStructures_E_HouseL","CAStructures_E_Ind","CAStructures_E_Ind_Ind_Coltan_Mine","CAStructures_E_Ind_Ind_FuelStation","CAStructures_E_Ind_Ind_Garage01","CAStructures_E_Ind_Oil_Mine","CAStructures_E_Ind_IndPipes","CAStructures_E_Ind_Misc_PowerStation","CAStructures_E_Ind_Ind_Shed","CAStructures_E_Mil","CAStructures_E_Misc","CAStructures_E_Misc_Misc_cables","CAStructures_E_Misc_Misc_Construction","CAStructures_E_Misc_Misc_Garbage","CAStructures_E_Misc_Misc_Lamp","CAStructures_E_Misc_Misc_powerline","CAStructures_E_Misc_Misc_Well","CAStructures_E_Wall","CAStructures_E_Wall_Wall_L","CAUI","CAWeapons","CAWeapons_AK","CAWeapons_Colt1911","CAWeapons_DMR","CAweapons_ksvk","CAweapons_m107","CAWeapons_M252_81mm_Mortar","CAWeapons_Metis_AT_13","CAWeapons_2b14_82mm_Mortar","CAWeapons_SPG9","CAWeapons_ZU23","CAWeapons_E_AmmoBoxes","CACharacters","CACharacters_E_Head","CAMisc2","CAMisc","CA_Missions_Armory2","CA_Missions_SecOps","CA_Missions_E_Armory2","CA_Missions_E_SecOps","CA_Missions_E_Templates_SecOps","CA_Modules_StratLayer","Warfare2","Warfare2_E","CAWater2","CAWater2_seafox","CAWeapons2","CAWeapons2_RPG18","CAWeapons_Kord","CACharacters2","CACharacters_E","CAWater2_seafox_EP1","CATracked","CAWeapons_Warfare_weapons","CAWeapons_E","CAWeapons_E_AGS","CAWeapons_E_AK","CAWeapons_E_Colt1911","CAWeapons_E_D30","CAWeapons_E_DSHKM","CAWeapons_E_FIM92_static","CAWeapons_E_fnfal","CAWeapons_E_G36","CAWeapons_E_GrenadeLauncher","CAWeapons_E_Igla","CAWeapons_E_Javelin","CAWeapons_E_KORD","CAWeapons_E_ksvk","CAWeapons_E_LeeEnfield","CAweapons_E_m107","CAWeapons_E_M110","CAWeapons_E_M119_Howitzer","CAWeapons_E_M136","CAWeapons_E_M14","CAWeapons_E_M16","CAWeapons_E_M240","CAWeapons_E_M252_81mm_Mortar","CAWeapons_E_M2StaticMG","CAWeapons_E_M47","CAWeapons_E_M9","CAWeapons_E_MAAWS","CAWeapons_E_Makarov","CAWeapons_E_Metis","CAWeapons_E_Mk19_MiniTriPod","CAWeapons_E_PK","CAWeapons_E_Podnos_2b14_82mm","CAWeapons_E_RPG18","CAWeapons_E_RPG7","CAWeapons_E_scar","CAWeapons_E_Searchlight","CAWeapons_E_SPG9","CAWeapons_E_STATIC","CAWeapons_E_Stinger","CAWeapons_E_Strela","CAWeapons_E_TOW","CAWeapons_E_ZU23","CAWheeled","CAWheeled_Pickup","CAWheeled_Offroad","CAAir","CAMisc3","CAStructures_E_Misc_Misc_Interier","CAStructures_E_Misc_Misc_Market","CATracked2","CATracked2_BMP3","CATracked2_T34","CATracked2_T90","CATracked2_us_m270mlrs","CATracked_E","CATracked_E_BMP2","CATracked_E_M113","CATracked_E_M1_Abrams","CATracked_E_M2A2_Bradley","CATracked_E_T34","CATracked_E_T55","CATracked_E_T72","CATracked_E_us_m270mlrs","CATracked_E_ZSU","CAWheeled2","CAWheeled2_HMMWV_BASE","CAWheeled2_M1114_Armored","CAWheeled2_HMMWV_Ambulance","CAWheeled2_M998A2_Avenger","CAWheeled2_Ikarus","CAWheeled2_LADA","CAWheeled2_MMT","CAWheeled2_MTVR","CAWheeled2_V3S","CAWheeled3","CAWheeled3_M1030","CAWheeled3_TT650","CAWheeled_E","CAWheeled_E_ATV","CAWheeled_E_BRDM2","CAWheeled_E_BTR40","CAWheeled_E_BTR60","CAWheeled_E_Pickup","CAWheeled_E_Offroad","CAWheeled_E_HMMWV","CAWheeled_E_Ikarus","CAWheeled_E_LADA","CAWheeled_E_LandRover","CAWheeled_E_M1030","CAWheeled_E_MTVR","CAWheeled_E_Old_bike","CAWheeled_E_Old_moto","CAWheeled_E_s1203","CAWheeled_E_SCUD","CAWheeled_E_stryker","CAWheeled_E_SUV","CAWheeled_E_TT650","CAWheeled_E_UAZ","CAWheeled_E_Ural","CAWheeled_E_V3S","CAWheeled_E_Volha","CAA10","CAAir2","CAAir2_MV22","CAAir2_C130J","CAAir2_ChukarTarget","CAAir2_MQ9PredatorB","CA_AIR2_Su25","CAAir2_UH1Y","CAAir_E","CAAir_E_A10","CAAir_E_AH64D","CAAir_E_AH6J","CAAir_E_An2","CAAir_E_C130J","CAAir_E_CH_47F","CAAir_E_Halo","CAAir_E_MI8","CAAir_E_Mi24","CA_AIR_E_MQ9PredatorB","CA_AIR_E_Su25","CAAir_E_UH1H_EP1","CAAir_E_UH60M","CA_L39","WarfareBuildings","CAMisc_E","CAMisc_E_WF","CA_Modules_ARTY","CASigns_E","Takistan","zargabad","Desert_E","CA_Modules_E_Jukebox","CAStructures_E_Misc_Misc_Water","CATracked2_2S6M_Tunguska","CA_AH64D","CAAir2_F35B","Arma2_Ka52","CAAir3","CAAir3_Su34","CAStructures_E_HouseA_A_Statue"};
		};
	};
};
class CfgOpticsEffect
{
	class TankGunnerOptics1
	{
		type = "ColorCorrections";
		priority = 1550;
		params[] = {1,1,0,0,0,0,0,1,1.0,0.2,0.6,0.199,0.587,0.114,0};
	};
	class TankGunnerOptics2
	{
		type = "ColorCorrections";
		priority = 1550;
		params[] = {1,1,0,0,0,0,0,1,1.0,0.2,0.8,0.199,0.25,0.114,0};
	};
	class TankCommanderOptics1
	{
		type = "FilmGrain";
		priority = 2050;
		params[] = {0.05,1,1,0.35,1,0};
	};
	class TVOptics
	{
		type = "FilmGrain";
		priority = 2050;
		params[] = {0.05,1,1,0.35,1,0};
	};
	class OpticsInverted
	{
		type = "colorInversion";
		priority = 2550;
		params[] = {1,1,1};
	};
	class BWTV
	{
		type = "ColorCorrections";
		priority = 1550;
		params[] = {1,2,-0.03,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.199,0.587,0.114,0.0};
	};
	class WeaponsOptics
	{
		type = "dynamicblur";
		priority = 450;
		params[] = {0.05};
	};
	class OpticsBlur1
	{
		type = "dynamicblur";
		priority = 450;
		params[] = {0.0025};
	};
	class OpticsBlur2
	{
		type = "dynamicblur";
		priority = 450;
		params[] = {0.005};
	};
	class OpticsBlur3
	{
		type = "dynamicblur";
		priority = 450;
		params[] = {0.01};
	};
	class OpticsCHAbera1
	{
		type = "chromaberration";
		priority = 250;
		params[] = {0.004,0.004,1};
	};
	class OpticsCHAbera2
	{
		type = "chromaberration";
		priority = 250;
		params[] = {0.006,0.006,1};
	};
	class OpticsCHAbera3
	{
		type = "chromaberration";
		priority = 250;
		params[] = {0.008,0.008,1};
	};
};
class CfgMarkers
{
	class Faction_USA_EP1
	{
		name = "$STR_EP1_DN_CfgMarkers_Faction_USA_EP1";
		icon = "ca\Ca_E\data\flag_us_co.paa";
		color[] = {1,1,1,1};
		size = 32;
		scope = 1;
		expansion = 1;
		shadow = 1;
	};
	class Faction_CzechRepublic_EP1: Faction_USA_EP1
	{
		name = "$STR_EP1_DN_CfgMarkers_Faction_CzechRepublic_EP1";
		icon = "ca\Ca_E\data\flag_cz_co.paa";
	};
	class Faction_Germany_EP1: Faction_USA_EP1
	{
		name = "$STR_EP1_DN_CfgMarkers_Faction_Germany_EP1";
		icon = "ca\Ca_E\data\flag_ger_co.paa";
	};
	class Faction_TKA_EP1: Faction_USA_EP1
	{
		name = "$STR_EP1_DN_CfgMarkers_Faction_TKA_EP1";
		icon = "ca\Ca_E\data\flag_tka_co.paa";
	};
	class Faction_TKG_EP1: Faction_USA_EP1
	{
		name = "$STR_EP1_DN_CfgMarkers_Faction_TKG_EP1";
		icon = "ca\Ca_E\data\flag_tkg_co.paa";
	};
	class Faction_TKM_EP1: Faction_USA_EP1
	{
		name = "$STR_EP1_DN_CfgMarkers_Faction_TKM_EP1";
		icon = "ca\Ca_E\data\flag_tkm_co.paa";
	};
	class Faction_NATO_EP1: Faction_USA_EP1
	{
		name = "$STR_EP1_DN_CfgMarkers_Faction_NATO_EP1";
		icon = "ca\Ca_E\data\flag_nato_co.paa";
	};
	class Faction_UNO_EP1: Faction_USA_EP1
	{
		name = "$STR_EP1_DN_CfgMarkers_Faction_UNO_EP1";
		icon = "ca\Ca_E\data\flag_uno_co.paa";
	};
	class Faction_BLUFOR_EP1: Faction_USA_EP1
	{
		name = "$STR_EP1_DN_CfgMarkers_Faction_BLUFOR_EP1";
		icon = "ca\Ca_E\data\flag_blufor_co.paa";
	};
	class Faction_OPFOR_EP1: Faction_USA_EP1
	{
		name = "$STR_EP1_DN_CfgMarkers_Faction_OPFOR_EP1";
		icon = "ca\Ca_E\data\flag_opfor_co.paa";
	};
	class Faction_INDFOR_EP1: Faction_USA_EP1
	{
		name = "$STR_EP1_DN_CfgMarkers_Faction_INDFOR_EP1";
		icon = "ca\Ca_E\data\flag_indfor_co.paa";
	};
};
class CfgCloudletShapes
{
	cloudletUniversal_EP1 = "ca\Ca_E\data\ParticleEffects\Universal\Universal";
};
class PreloadTextures
{
	class CfgCloudletShapes
	{
		cloudletUniversal_EP1 = "@*";
	};
};
//};
