////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_DisabledOpticsViewInMLRS\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_DisabledOpticsViewInMLRS
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class MLRS: Tank
	{
		driverOpticsModel = "";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				outGunnerMayFire = 1;
				canHideGunner = 0;
				forceHideGunner = 1;
				gunnerOutOpticsModel = "";
			};
		};
	};
};
//};
