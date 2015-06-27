////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:23 2014 : Source 'file' date Fri Oct 31 06:13:23 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons_e : Searchlight\config.bin{
class CfgPatches
{
	class CAWeapons_E_Searchlight
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E"};
	};
};
class CfgVehicles
{
	class StaticWeapon;
	class StaticSearchLight: StaticWeapon
	{
		class Turrets;
	};
	class Searchlight: StaticSearchLight
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class SearchLight_Base: Searchlight
	{
		model = "\Ca\weapons_E\Searchlight\searchlight_manual";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
			};
		};
	};
};
//};
