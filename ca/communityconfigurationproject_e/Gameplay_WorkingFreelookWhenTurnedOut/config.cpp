////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:02 2014 : Source 'file' date Fri Oct 31 06:14:02 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_WorkingFreelookWhenTurnedOut\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_WorkingFreelookWhenTurnedOut
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
					class CommanderOptics;
				};
			};
		};
	};
	class Tracked_APC: Tank
	{
		class NewTurret;
	};
	class BMP2_Base: Tracked_APC{};
	class BVP1_BASE: BMP2_Base
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerOutOpticsModel = "";
			};
			class CommanderOptics: NewTurret
			{
				gunnerOutOpticsModel = "";
			};
		};
	};
	class M1A1: Tank
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOutOpticsModel = "";
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
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
					class CommanderOptics: CommanderOptics
					{
						gunnerOutOpticsModel = "";
					};
				};
			};
		};
	};
	class M2A2_Base: Tank
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOutOpticsModel = "";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerOutOpticsModel = "";
					};
				};
			};
		};
	};
	class BAF_FV510_D: Tank
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOutOpticsModel = "";
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerOutOpticsModel = "";
					};
				};
			};
		};
	};
};
//};
