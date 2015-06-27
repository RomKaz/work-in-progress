////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:18 2014 : Source 'file' date Fri Oct 31 06:07:18 2014
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

//Class wheeled_acr : config.bin{
class _xx_100Rnd_762x54_PK
{
	magazine = "100Rnd_762x54_PK";
	count = "5*x";
};
class _xx_HandGrenade_West
{
	magazine = "HandGrenade_West";
	count = "6*x";
};
class _xx_SmokeShell
{
	magazine = "SmokeShell";
	count = "6*x";
};
class _xx_SmokeShellRed
{
	magazine = "SmokeShellRed";
	count = "2*x";
};
class CfgPatches
{
	class CAWheeled_ACR
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CA_E","CA_ACR","CAWheeled","CAWheeled_E","CAWheeled_E_BRDM2","CAWeapons_E","CAWheeled_E_HMMWV","CAWheeled_E_V3S"};
	};
};
class CfgVehicles
{
	class BRDM2_Base;
	class BRDM2_ACR: BRDM2_Base
	{
		expansion = 3;
		scope = 2;
		vehicleClass = "ArmouredW";
		side = 1;
		faction = "BIS_CZ";
		accuracy = 0.3;
		crew = "CZ_Soldier_Crew_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_Crew_Wdl_ACR"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\CA\Wheeled_ACR\Data\BDRM2_01_ACR_CO.paa"};
		class TransportWeapons
		{
			class _xx_Sa58P_EP1
			{
				weapon = "Sa58P_EP1";
				count = 1;
			};
			class _xx_CZ805_A1_ACR
			{
				weapon = "CZ805_A1_ACR";
				count = "2*1";
			};
			class _xx_UK59_ACR
			{
				weapon = "UK59_ACR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_SA58
			{
				magazine = "30Rnd_762x39_SA58";
				count = "15*1";
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = "30*1";
			};
		};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
	};
	class BRDM2_Desert_ACR: BRDM2_ACR
	{
		vehicleClass = "Armored";
		crew = "CZ_Soldier_Crew_Dst_ACR";
		typicalCargo[] = {"CZ_Soldier_Crew_Dst_ACR"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\CA\Wheeled_ACR\Data\BDRM2_01_ACR_DES_CO.paa","\CA\Wheeled_ACR\Data\BDRM2_02_ACR_DES_CO.paa"};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
	};
	class UAZ_Unarmed_Base;
	class UAZ_Unarmed_ACR: UAZ_Unarmed_Base
	{
		expansion = 3;
		scope = 2;
		vehicleClass = "CarW";
		side = 1;
		faction = "BIS_CZ";
		accuracy = 0.3;
		crew = "CZ_Soldier_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_Wdl_ACR","CZ_Soldier_Wdl_ACR","CZ_Soldier_Wdl_ACR"};
		hiddenSelectionsTextures[] = {"\CA\Wheeled_ACR\Data\Uaz_ACR_main_CO.paa"};
		class TransportWeapons
		{
			class _xx_Sa58P_EP1
			{
				weapon = "Sa58P_EP1";
				count = 1;
			};
			class _xx_CZ805_A1_ACR
			{
				weapon = "CZ805_A1_ACR";
				count = "2*1";
			};
			class _xx_UK59_ACR
			{
				weapon = "UK59_ACR";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_30Rnd_762x39_SA58
			{
				magazine = "30Rnd_762x39_SA58";
				count = "15*1";
			};
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = "30*1";
			};
		};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
	};
};
//};
