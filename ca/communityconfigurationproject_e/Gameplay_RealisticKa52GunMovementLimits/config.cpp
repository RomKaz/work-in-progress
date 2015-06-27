////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:02 2014 : Source 'file' date Fri Oct 31 06:14:02 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_RealisticKa52GunMovementLimits\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_RealisticKa52GunMovementLimits
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Kamov_Base: Helicopter{};
	class Ka52: Kamov_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -37;
				maxElev = 3;
			};
		};
	};
};
//};
