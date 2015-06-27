////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:00 2014 : Source 'file' date Fri Oct 31 06:14:00 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_AddedSteppedOpticsToMi24\config.bin{
class CfgPatches
{
	class CA_CommunityConfigurationProject_Gameplay_AddedSteppedOpticsToMi24
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
	class Mi24_Base: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "3.3x";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = "22/120";
						minFov = "22/120";
						maxFov = "22/120";
						visionMode[] = {"Normal"};
						gunnerOpticsModel = "\ca\CommunityConfigurationProject_E\Gameplay_AddedSteppedOpticsToMi24\p3d\RadugaSh_15.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "10x";
						initFov = "7.3/120";
						minFov = "7.3/120";
						maxFov = "7.3/120";
						gunnerOpticsModel = "\ca\CommunityConfigurationProject_E\Gameplay_AddedSteppedOpticsToMi24\p3d\RadugaSh_5.p3d";
					};
				};
			};
		};
	};
};
//};
