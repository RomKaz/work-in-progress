////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:00 2014 : Source 'file' date Fri Oct 31 06:14:00 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_AddedMissingSmokeLaunchersToVodnikBPPU\config.bin{
class CfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_AddedMissingSmokeLaunchersToVodnikBPPU
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Car: LandVehicle{};
	class Wheeled_APC: Car{};
	class GAZ_Vodnik_HMG: Wheeled_APC
	{
		smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 70;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"2A42","PKT_veh","SmokeLauncher"};
				magazines[] = {"150Rnd_30mmAP_2A42","150Rnd_30mmHE_2A42","1500Rnd_762x54_PKT","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
			};
		};
	};
};
//};
