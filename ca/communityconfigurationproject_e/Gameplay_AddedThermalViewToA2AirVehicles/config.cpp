////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:00 2014 : Source 'file' date Fri Oct 31 06:14:00 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_AddedThermalViewToA2AirVehicles\config.bin{
class CfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_AddedThermalViewToA2AirVehicles
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class AllVehicles;
	class Air;
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class UH1_Base: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class RightDoorGun;
			class CoPilotObs;
		};
	};
	class UH1Y: UH1_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
				visionMode[] = {"Normal","NVG"};
			};
			class CoPilotObs: CoPilotObs
			{
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {2,3};
						gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\ca\weapons\optika_SOFLAM";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
					};
				};
			};
		};
	};
	class Kamov_Base: Helicopter{};
	class Ka52: Kamov_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "$STR_KA50_WIDE_CCP";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.03557;
						minFov = 0.03557;
						maxFov = 0.03557;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\ca\air\optika_Ka50_gun";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "$STR_KA50_NARROW_CCP";
						initFov = 0.0108;
						minFov = 0.0108;
						maxFov = 0.0108;
					};
				};
			};
		};
	};
};
//};
