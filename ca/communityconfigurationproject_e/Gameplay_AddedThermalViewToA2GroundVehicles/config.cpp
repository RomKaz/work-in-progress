////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:00 2014 : Source 'file' date Fri Oct 31 06:14:00 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_AddedThermalViewToA2GroundVehicles\config.bin{
class CfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_AddedThermalViewToA2GroundVehicles
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
	class Car: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Wheeled_APC: Car{};
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
	class Tracked_APC: Tank
	{
		class ViewOptics;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class HMMWV_Base: Car
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class BTR90_Base: Wheeled_APC
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {2,3};
				};
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
						class ViewOptics
						{
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {0,1};
						};
					};
				};
			};
		};
	};
	class BMP3: Tracked_APC
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {2,3};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics
						{
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {0,1};
						};
					};
				};
			};
		};
	};
	class T90: Tank
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {2,3};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: NewTurret
					{
						class ViewOptics
						{
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {0,1};
						};
					};
				};
			};
		};
	};
	class AAV: Tracked_APC
	{
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {2,3};
				};
			};
			class CommanderOptics: NewTurret
			{
				class ViewOptics
				{
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {4,5};
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
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics
						{
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {4,5};
						};
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
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics: ViewOptics
						{
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {4,5};
						};
					};
				};
			};
		};
	};
	class LAV25_Base: Wheeled_APC
	{
		class ViewPilot
		{
			initAngleX = 10;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 20;
			minAngleY = -150;
			maxAngleY = 150;
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.4;
			visionMode[] = {"Normal","NVG"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
						class ViewOptics
						{
							visionMode[] = {"Normal","NVG","Ti"};
							thermalMode[] = {4,5};
						};
					};
				};
			};
		};
	};
	class LAV25: LAV25_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {2,3};
				};
			};
		};
	};
	class HMMWV_TOW: HMMWV_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
				};
			};
		};
	};
};
//};
