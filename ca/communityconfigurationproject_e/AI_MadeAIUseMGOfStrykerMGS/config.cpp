////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:56 2014 : Source 'file' date Fri Oct 31 06:13:56 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : AI_MadeAIUseMGOfStrykerMGS\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_AI_MadeAIUseMGOfStrykerMGS
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
	class Wheeled_APC: Car
	{
		class Turrets;
	};
	class StrykerBase_EP1: Wheeled_APC
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class M1128_MGS_EP1: StrykerBase_EP1
	{
		hasCommander = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				primaryGunner = 1;
				primaryObserver = 0;
			};
		};
	};
};
//};
