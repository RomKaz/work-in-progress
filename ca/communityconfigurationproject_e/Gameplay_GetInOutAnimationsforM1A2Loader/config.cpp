////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_GetInOutAnimationsforM1A2Loader\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_GetInOutAnimationsforM1A2Loader
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
	class Tank: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class M1A1: Tank
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets;
			};
		};
	};
	class M1A2_TUSK_MG: M1A1
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class LoaderTurret: NewTurret
					{
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
					};
				};
			};
		};
	};
};
//};
