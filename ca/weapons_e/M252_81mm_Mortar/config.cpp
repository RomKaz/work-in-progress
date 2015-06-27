////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:23 2014 : Source 'file' date Fri Oct 31 06:13:23 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons_e : M252_81mm_Mortar\config.bin{
class CfgPatches
{
	class CAWeapons_E_M252_81mm_Mortar
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons","CA_Modules_ARTY"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets;
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class M252: StaticMortar
	{
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		model = "\Ca\weapons_E\M252_81mm_Mortar\81Mortar";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -10;
				maxElev = 30;
				magazines[] = {"8Rnd_81mmHE_M252"};
			};
		};
		artilleryScanner = 1;
		ARTY_IsArtyVehicle = 0;
	};
	class M252_Base: M252
	{
		displayName = "$STR_EP1_DN_M252_Base";
	};
};
//};
