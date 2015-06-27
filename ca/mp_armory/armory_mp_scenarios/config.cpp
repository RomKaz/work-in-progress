////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:09 2014 : Source 'file' date Fri Oct 31 06:11:09 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class mp_armory : armory_mp_scenarios\config.bin{
class CfgPatches
{
	class CA_MPA_Scenarios
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
	};
};
class CfgMissions
{
	class MPMissions
	{
		class MPE_Armory_Takistan
		{
			directory = "ca\mp_armory\armory_mp_scenarios\MPE_Armory.Takistan";
		};
		class MPE_Armory_Chernarus
		{
			directory = "ca\mp_armory\armory_mp_scenarios\MPE_Armory.Chernarus";
		};
	};
	class MPArmory
	{
		class Takistan
		{
			scenario = "MPE_Armory_Takistan";
		};
		class Chernarus
		{
			scenario = "MPE_Armory_Chernarus";
		};
	};
};
//};
