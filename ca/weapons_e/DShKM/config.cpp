////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:22 2014 : Source 'file' date Fri Oct 31 06:13:22 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons_e : DShKM\config.bin{
class CfgPatches
{
	class CAWeapons_E_DSHKM
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons"};
	};
};
class CfgVehicles
{
	class StaticWeapon;
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets;
	};
	class DSHKM_base: StaticMGWeapon
	{
		model = "ca\weapons_E\DShKM\DShKM_mg";
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class DSHkM_Mini_TriPod: DSHKM_base
	{
		model = "ca\weapons_E\DShKM\DShKM_mg2";
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
