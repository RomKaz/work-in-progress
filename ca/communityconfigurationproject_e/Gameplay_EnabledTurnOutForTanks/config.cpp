////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_EnabledTurnOutForTanks\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_EnabledTurnOutForTanks
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
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
						class ViewOptics;
					};
				};
			};
		};
	};
	class M1A1: Tank
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				forceHideGunner = 0;
				gunnerAction = "Abrams_CommanderOut";
			};
		};
	};
	class M1A2_TUSK_MG: M1A1
	{
		forceHideDriver = 0;
		driverAction = "Abrams_DriverOut";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				forceHideGunner = 1;
			};
		};
	};
	class BAF_FV510_D: Tank
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				forceHideGunner = 0;
				gunnerAction = "Abrams_CommanderOut";
			};
		};
	};
	class T72_Base: Tank
	{
		forceHideDriver = 0;
		driverAction = "BMP3_Driver_OUT";
	};
	class T72_ACR: T72_Base
	{
		forceHideDriver = 1;
	};
};
//};
