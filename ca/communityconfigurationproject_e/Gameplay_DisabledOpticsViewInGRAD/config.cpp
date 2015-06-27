////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_DisabledOpticsViewInGRAD\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_DisabledOpticsViewInGRAD
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class Car;
	class Truck: Car
	{
		class Turrets;
	};
	class Ural_Base_withTurret: Truck
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class GRAD_Base: Ural_Base_withTurret
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "";
			};
		};
	};
	class RM70_ACR: GRAD_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerForceOptics = 0;
				gunnerOpticsModel = "";
			};
		};
	};
};
//};
