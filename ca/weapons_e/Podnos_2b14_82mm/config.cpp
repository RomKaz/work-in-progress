////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:23 2014 : Source 'file' date Fri Oct 31 06:13:23 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons_e : Podnos_2b14_82mm\config.bin{
class CfgPatches
{
	class CAWeapons_E_Podnos_2b14_82mm
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CA_Modules_ARTY"};
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
	class 2b14_82mm: StaticMortar
	{
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		model = "\Ca\weapons_E\Podnos_2b14_82mm\podnos_2b14_82mm";
		artilleryScanner = 1;
		ARTY_IsArtyVehicle = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minelev = -10;
				maxelev = 30;
				magazines[] = {"8Rnd_82mmHE_2B14"};
			};
		};
	};
};
//};
