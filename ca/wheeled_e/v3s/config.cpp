////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:43 2014 : Source 'file' date Fri Oct 31 06:13:43 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=4
enum {
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0
};

//Class wheeled_e : v3s\config.bin{
class CfgPatches
{
	class CAWheeled_E_V3S
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CACharacters_E","CAWeapons_E","CAWheeled2_V3S"};
	};
};
class CfgVehicles
{
	class V3S_Base;
	class V3S_Base_EP1: V3S_Base
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		expansion = 1;
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_V3S";
		};
		rarityUrban = -1;
		model = "\ca\wheeled_E\V3S\V3S_transport";
		displayname = "$STR_DN_V3S";
		hiddenSelections[] = {};
		Icon = "\CA\wheeled_e\data\UI\Icon_V3S_transport_CA.paa";
		Picture = "\CA\wheeled_e\data\UI\Picture_V3S_transport_CA.paa";
		MapSize = 7;
		driverAction = "V3S_Driver_EP1";
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled_e\v3s\data\v3s_intkor.rvmat","ca\wheeled_e\v3s\data\v3s_intkor_damage.rvmat","ca\wheeled_e\v3s\data\v3s_intkor_destruct.rvmat","ca\wheeled_e\v3s\data\v3s_kabpar.rvmat","ca\wheeled_e\v3s\data\v3s_kabpar_damage.rvmat","ca\wheeled_e\v3s\data\v3s_kabpar_destruct.rvmat","ca\wheeled_e\v3s\data\auta_skla.rvmat","ca\wheeled_e\v3s\data\auta_skla_damage.rvmat","ca\wheeled_e\v3s\data\auta_skla_damage.rvmat","ca\wheeled_e\v3s\data\auta_skla_in.rvmat","ca\wheeled_e\v3s\data\auta_skla_in_damage.rvmat","ca\wheeled_e\v3s\data\auta_skla_in_damage.rvmat","ca\wheeled_e\v3s\data\v3s_kabpar_destruct.rvmat","ca\wheeled_e\v3s\data\v3s_koloint02_damage.rvmat","ca\wheeled_e\v3s\data\v3s_koloint02_destruct.rvmat","ca\wheeled_E\V3S\Data\V3S_reammo_IND.rvmat","ca\wheeled_E\V3S\Data\V3S_reammo_IND_damage.rvmat","ca\wheeled_E\V3S\Data\V3S_reammo_IND_destruct.rvmat","ca\wheeled_E\V3S\Data\V3S_refuel_IND.rvmat","ca\wheeled_E\V3S\Data\V3S_refuel_IND_damage.rvmat","ca\wheeled_E\V3S\Data\V3S_refuel_IND_destruct.rvmat","ca\wheeled_E\V3S\Data\V3S_repair_IND.rvmat","ca\wheeled_E\V3S\Data\V3S_repair_IND_damage.rvmat","ca\wheeled_E\V3S\Data\V3S_repair_IND_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class V3S_TK_EP1: V3S_Base_EP1
	{
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		model = "\ca\wheeled_E\V3S\V3S_transport";
		displayname = "$STR_DN_V3S";
		driverAction = "V3S_Driver_EP1";
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 30;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 5;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_FN_FAL
			{
				weapon = "FN_FAL";
				count = 2;
			};
		};
	};
	class V3S_Open_TK_EP1: V3S_Base_EP1
	{
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		model = "\ca\wheeled_E\V3S\V3S_open";
		displayname = "$STR_EP1_DN_V3S_Open_TK_EP1";
		Icon = "\CA\wheeled2\data\UI\Icon_V3S_CA.paa";
		Picture = "\CA\wheeled_e\data\UI\Picture_V3S_open_CA.paa";
		MapSize = 7;
		driverAction = "V3S_Driver_EP1";
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 30;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 5;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_FN_FAL
			{
				weapon = "FN_FAL";
				count = 2;
			};
		};
	};
	class V3S_Open_TK_CIV_EP1: V3S_Base_EP1
	{
		scope = 2;
		side = 3;
		faction = "BIS_TK_CIV";
		crew = "TK_CIV_Takistani01_EP1";
		typicalCargo[] = {"TK_CIV_Takistani01_EP1"};
		model = "\ca\wheeled_E\V3S\V3S_open";
		displayname = "$STR_EP1_DN_V3S_Open_TK_CIV_EP1";
		Icon = "\CA\wheeled2\data\UI\Icon_V3S_CA.paa";
		Picture = "\CA\wheeled_e\data\UI\Picture_V3S_open_CA.paa";
		MapSize = 7;
		driverAction = "V3S_Driver_EP1";
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"ca\wheeled_E\V3S\Data\v3s_kabpar_ECIV_co","ca\wheeled_E\V3S\Data\v3s_intkor_ECIV_co","ca\wheeled_E\V3S\Data\v3s_koloint02_ECIV_co"};
	};
	class V3S_TK_GUE_EP1: V3S_Base_EP1
	{
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
		model = "\ca\wheeled_E\V3S\V3S_transport";
		displayname = "$STR_DN_V3S";
		driverAction = "V3S_Driver_EP1";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"ca\wheeled_E\V3S\Data\v3s_kabpar_EGUE_co","ca\wheeled_E\V3S\Data\v3s_intkor_EGUE_co","ca\wheeled_E\V3S\Data\v3s_koloint02_EGUE_co","ca\wheeled_E\V3S\Data\v3s_reammo_EGUE_co"};
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 30;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 5;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_AK_74
			{
				weapon = "AK_74";
				count = 2;
			};
		};
	};
	class V3S_Refuel_TK_GUE_EP1: V3S_Base_EP1
	{
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
		model = "\ca\wheeled_E\V3S\V3S_refuel";
		displayname = "$STR_EP1_DN_V3S_Refuel_TK_GUE_EP1";
		transportSoldier = 1;
		Icon = "\CA\wheeled_e\data\UI\Icon_V3S_refuel_CA.paa";
		Picture = "\CA\wheeled_e\data\UI\Picture_V3S_refuel_CA.paa";
		MapSize = 7;
		driverAction = "V3S_Driver_EP1";
		vehicleClass = "Support";
		transportFuel = 3000;
		supplyRadius = 7.5;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"ca\wheeled_E\V3S\Data\v3s_kabpar_EGUE_co","ca\wheeled_E\V3S\Data\v3s_intkor_EGUE_co","ca\wheeled_E\V3S\Data\v3s_koloint02_EGUE_co","ca\wheeled_E\V3S\Data\v3s_refuel_EGUE_co"};
	};
	class V3S_Repair_TK_GUE_EP1: V3S_Base_EP1
	{
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
		model = "\ca\wheeled_E\V3S\V3S_Repair";
		displayname = "$STR_EP1_DN_V3S_Repair_TK_GUE_EP1";
		transportSoldier = 1;
		Icon = "\CA\wheeled_e\data\UI\Icon_V3S_repair_CA.paa";
		Picture = "\CA\wheeled_e\data\UI\Picture_V3S_repair_CA.paa";
		MapSize = 7;
		driverAction = "V3S_Driver_EP1";
		vehicleClass = "Support";
		transportRepair = 200000000;
		supplyRadius = 7.5;
		transportMaxMagazines = 50;
		transportMaxWeapons = 10;
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"ca\wheeled_E\V3S\Data\v3s_kabpar_EGUE_co","ca\wheeled_E\V3S\Data\v3s_intkor_EGUE_co","ca\wheeled_E\V3S\Data\v3s_koloint02_EGUE_co","ca\wheeled_E\V3S\Data\v3s_repair_EGUE_co"};
	};
	class V3S_Reammo_TK_GUE_EP1: V3S_Base_EP1
	{
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
		vehicleClass = "Support";
		displayname = "$STR_EP1_DN_V3S_Reammo_TK_GUE_EP1";
		model = "\ca\wheeled_E\V3S\V3S_Repair";
		Icon = "\CA\wheeled_e\data\UI\Icon_V3S_repair_CA.paa";
		Picture = "\CA\wheeled_e\data\UI\Picture_V3S_repair_CA.paa";
		MapSize = 7;
		driverAction = "V3S_Driver_EP1";
		transportSoldier = 2;
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 60;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 20;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 10;
			};
			class _xx_75Rnd_545x39_RPK
			{
				magazine = "75Rnd_545x39_RPK";
				count = 10;
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 5;
			};
			class _xx_PG7VR
			{
				magazine = "PG7VR";
				count = 5;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 10;
			};
			class _xx_SmokeShellBlue
			{
				magazine = "SmokeShellBlue";
				count = 10;
			};
			class _xx_FlareGreen_GP25
			{
				magazine = "FlareGreen_GP25";
				count = 10;
			};
			class _xx_FlareRed_GP25
			{
				magazine = "FlareRed_GP25";
				count = 10;
			};
			class _xx_FlareYellow_GP25
			{
				magazine = "FlareYellow_GP25";
				count = 10;
			};
			class _xx_Strela
			{
				magazine = "Strela";
				count = 1;
			};
			class _xx_PipeBomb
			{
				magazine = "PipeBomb";
				count = 5;
			};
		};
		class TransportWeapons
		{
			class _xx_AK_74
			{
				weapon = "AK_74";
				count = 2;
			};
			class _xx_RPG7V
			{
				weapon = "RPG7V";
				count = 2;
			};
		};
		transportAmmo = 300000;
		type = 0;
		threat[] = {0.0,0.0,0.0};
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4"};
		hiddenSelectionsTextures[] = {"ca\wheeled_E\V3S\Data\v3s_kabpar_EGUE_co","ca\wheeled_E\V3S\Data\v3s_intkor_EGUE_co","ca\wheeled_E\V3S\Data\v3s_koloint02_EGUE_co","ca\wheeled_E\V3S\Data\v3s_repair_EGUE_co"};
	};
	class V3S_Supply_TK_GUE_EP1: V3S_TK_GUE_EP1
	{
		displayName = "$STR_wfsupplytruck";
		transportSoldier = 1;
		driverAction = "V3S_Driver_EP1";
		class TransportMagazines{};
		class TransportWeapons{};
		vehicleClass = "Support";
	};
	class V3S_Salvage_TK_GUE_EP1: V3S_Repair_TK_GUE_EP1
	{
		displayName = "$STR_wfsalvagetruck";
		transportSoldier = 1;
		driverAction = "V3S_Driver_EP1";
		class TransportMagazines{};
		class TransportWeapons{};
		vehicleClass = "Support";
	};
};
//};
