////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:27 2014 : Source 'file' date Fri Oct 31 06:06:27 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=12
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class tracked_acr : config.bin{
class CfgPatches
{
	class CATracked_ACR
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CA_ACR","CATracked_E_BMP2","CATracked_E"};
	};
};
class CfgVehicles
{
	class BMP2_Base;
	class BMP2_ACR: BMP2_Base
	{
		expansion = 3;
		scope = 2;
		vehicleClass = "ArmouredW";
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_Crew_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_Crew_Wdl_ACR","CZ_Soldier_Crew_Wdl_ACR"};
		hiddenSelectionsTextures[] = {"\CA\Tracked_ACR\Data\BMP2_01_ACR_CO.paa","\CA\Tracked_ACR\Data\BMP2_02_ACR_CO.paa"};
		class TransportWeapons
		{
			class _xx_Sa58V_EP1
			{
				weapon = "Sa58V_EP1";
				count = "2*1";
			};
			class _xx_Sa58V_CCO_EP1
			{
				weapon = "Sa58V_CCO_EP1";
				count = 1;
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
				count = "30*1";
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = "5*1";
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = "6*1";
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = "6*1";
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = "2*1";
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
	class BMP2_Des_ACR: BMP2_ACR
	{
		vehicleClass = "Armored";
		crew = "CZ_Soldier_Crew_Dst_ACR";
		typicalCargo[] = {"CZ_Soldier_Crew_Dst_ACR","CZ_Soldier_Crew_Dst_ACR"};
		hiddenSelectionsTextures[] = {"\CA\Tracked_ACR\Data\BMP2_01_ACR_DES_CO.paa","\CA\Tracked_ACR\Data\BMP2_02_ACR_DES_CO.paa"};
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon{};
	class ProxyAT3_proxy: ProxyWeapon
	{
		model = "\ca\tracked_ACR\BVP1\AT3_proxy.p3d";
		simulation = "maverickweapon";
	};
};
//};
