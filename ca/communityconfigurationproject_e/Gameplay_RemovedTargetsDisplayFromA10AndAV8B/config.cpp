////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:02 2014 : Source 'file' date Fri Oct 31 06:14:02 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_RemovedTargetsDisplayFromA10AndAV8B\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_RemovedTargetsDisplayFromA10AndAV8B
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class Plane;
	class A10: Plane
	{
		class MFD
		{
			class AirplaneHUD
			{
				class Draw
				{
					delete RadarTargets;
				};
			};
		};
	};
	class AV8B2: Plane
	{
		class MFD
		{
			class HUD
			{
				class Draw
				{
					delete RadarTargets;
				};
			};
		};
	};
};
//};
