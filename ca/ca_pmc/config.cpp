////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:02:00 2014 : Source 'file' date Fri Oct 31 06:02:00 2014
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

//Class ca_pmc : config.bin{
class CfgPatches
{
	class CA_PMC
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.57;
		requiredAddons[] = {"CAData","CA_E"};
	};
};
class CfgMods
{
	class PMC
	{
		dir = "PMC";
		picture = "ca\ui\data\logo_arma2pmc_ca.paa";
		hash = "PMC v. 1.02";
		action = "http://www.arma2.com/PMC";
		hideName = 1;
		name = "Arma 2: Private Military Company (Lite)";
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
		class CA_PMC
		{
			list[] = {"CA_PMC","CA_Dubbing_PMC","CALanguage_PMC","CALanguage_missions_PMC","CA_Modules_PMC","CA_Modules_PMC_Functions","CA_Modules_PMC_SimpleFIrstAid","CARoads_PMC_Bridge","CAAir_PMC","CAAir_PMC_KA137","CAAir_PMC_KA60","CAMusic_PMC","CAStructures_PMC","CAStructures_PMC_Buildings","CAStructures_PMC_Buildings_Bunker","CAStructures_PMC_Buildings_GeneralStore_PMC","CAStructures_PMC_Buildings_Ruin_Cowshed","CAStructures_PMC_Ind","CAStructures_PMC_FuelStation","CAStructures_PMC_Misc","CAStructures_PMC_Misc_Shed","CAStructures_PMC_Ruins","CAStructures_PMC_Walls","CACharacters_PMC_Head","CA_DubbingRadio_PMC","CA_Missions_PMC","CAWheeled_PMC","CAWheeled_PMC_ArmoredSUV","ProvingGrounds_PMC","CAWeapons_PMC","CAWeapons_PMC_AA_12","CAWeapons_PMC_AS50","CAWeapons_PMC_XM8","CACharacters_PMC"};
		};
	};
};
class CfgGroups
{
	class Guerrila
	{
		name = "$STR_EP1_DN_CfgGroups_Guerrila";
		class PMC_BAF
		{
			name = "PMC";
			class Infantry
			{
				name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_UN_Infantry";
				class PMC_VIP_Bodyguard
				{
					name = "VIP Bodyguard";
					faction = "PMC_BAF";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "Soldier_TL_PMC";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "Soldier_Bodyguard_AA12_PMC";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "Soldier_Bodyguard_M4_PMC";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class PMC_Field_Security_Patrol
				{
					name = "Field Security Patrol";
					faction = "PMC_BAF";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "Soldier_GL_PMC";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "Soldier_GL_M16A2_PMC";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "Soldier_M4A3_PMC";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "Soldier_M4A3_PMC";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class PMC_Field_Security_Team
				{
					name = "Field Security Team";
					faction = "PMC_BAF";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "Soldier_TL_PMC";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "Soldier_Sniper_PMC";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "Soldier_AT_PMC";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "Soldier_MG_PMC";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "Soldier_GL_PMC";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "Soldier_M4A3_PMC";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
				};
				class PMC_Security_Detail
				{
					name = "Security Detail";
					faction = "PMC_BAF";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "Soldier_TL_PMC";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "Soldier_Sniper_PMC";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "Soldier_AT_PMC";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "Soldier_MG_PMC";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "Soldier_MG_PKM_PMC";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "Soldier_GL_PMC";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "Soldier_GL_M16A2_PMC";
						rank = "CORPORAL";
						position[] = {13,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "Soldier_M4A3_PMC";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit8
					{
						side = 2;
						vehicle = "Soldier_PMC";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};
					class Unit9
					{
						side = 2;
						vehicle = "Soldier_PMC";
						rank = "PRIVATE";
						position[] = {19,0,0};
					};
				};
				class PMC_Security_Specialists
				{
					name = "Security Specialists";
					faction = "PMC_BAF";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "Soldier_TL_PMC";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "Soldier_Sniper_KSVK_PMC";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "Soldier_AT_PMC";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "Soldier_MG_PMC";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "Soldier_PMC";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class PMC_Field_Support_Team
				{
					name = "Field Support Team";
					faction = "PMC_BAF";
					rarityGroup = 0.5;
					class Unit0
					{
						side = 2;
						vehicle = "Soldier_GL_M16A2_PMC";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "Soldier_GL_PMC";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "Soldier_Engineer_PMC";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "Soldier_Medic_PMC";
						rank = "SERGEANT";
						position[] = {7,0,0};
					};
				};
				class PMC_Team_Sword
				{
					name = "Team Sword";
					faction = "PMC_BAF";
					rarityGroup = 0.1;
					class Unit0
					{
						side = 2;
						vehicle = "Reynolds_PMC";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "Dixon_PMC";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "Tanny_PMC";
						rank = "LIEUTENANT";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "Poet_PMC";
						rank = "LIEUTENANT";
						position[] = {7,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "Ry_PMC";
						rank = "LIEUTENANT";
						position[] = {9,0,0};
					};
				};
			};
			class Motorized
			{
				name = "$STR_EP1_DN_CfgGroups_Guerrila_BIS_UN_Motorized";
				class PMC_Patrol
				{
					name = "Patrol";
					faction = "PMC_BAF";
					rarityGroup = 0.4;
					class Unit0
					{
						side = 2;
						vehicle = "Soldier_Bodyguard_M4_PMC";
						rank = "SERGEANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "SUV_PMC";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "Soldier_Bodyguard_AA12_PMC";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class PMC_Tactical_Patrol
				{
					name = "Tactical Patrol";
					faction = "PMC_BAF";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 2;
						vehicle = "Soldier_TL_PMC";
						rank = "LIEUTENANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "SUV_PMC";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "SUV_PMC";
						rank = "SERGEANT";
						position[] = {-5,-7,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "Soldier_Sniper_PMC";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "Soldier_AT_PMC";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "Soldier_Bodyguard_AA12_PMC";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "Soldier_GL_PMC";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "Soldier_M4A3_PMC";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class PMC_Armored_Patrol
				{
					name = "Armored Patrol";
					faction = "PMC_BAF";
					rarityGroup = 0.2;
					class Unit0
					{
						side = 2;
						vehicle = "Soldier_TL_PMC";
						rank = "LIEUTENANT";
						position[] = {3,5,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "ArmoredSUV_PMC";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "ArmoredSUV_PMC";
						rank = "SERGEANT";
						position[] = {-5,-7,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "Soldier_Sniper_PMC";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 2;
						vehicle = "Soldier_Bodyguard_M4_PMC";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "Soldier_MG_PKM_PMC";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 2;
						vehicle = "Soldier_GL_PMC";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "Soldier_GL_PMC";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
			};
		};
	};
};
class CfgFactionClasses
{
	class PMC_BAF
	{
		displayName = "PMC";
		priority = 9;
		side = 2;
		primaryLanguage = "US";
	};
};
class CfgVehicleClasses
{
	class IEDs
	{
		displayName = "IEDs";
	};
};
class CfgMarkers
{
	class Faction_USA_EP1;
	class Faction_ION_black_PMC: Faction_USA_EP1
	{
		expansion = 4;
		name = "$STR_PMC_FlagION_black";
		icon = "ca\Ca_PMC\flag_ion_black_co";
	};
	class Faction_ION_white_PMC: Faction_ION_black_PMC
	{
		name = "$STR_PMC_FlagION_white";
		icon = "ca\Ca_PMC\flag_ion_white_co";
	};
};
class CfgVehicles
{
	class FlagCarrierCore;
	class FlagCarrier: FlagCarrierCore{};
	class FlagCarrierIONblack_PMC: FlagCarrier
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_PMC_FlagION_black";
		expansion = 4;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture 'ca\Ca_PMC\flag_ion_black_co';";
		};
	};
	class FlagCarrierIONwhite_PMC: FlagCarrierIONblack_PMC
	{
		displayName = "$STR_PMC_FlagION_white";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture 'ca\Ca_PMC\flag_ion_white_co';";
		};
	};
};
//};
