////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:48 2014 : Source 'file' date Fri Oct 31 06:04:48 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class missions_2_baf : config.bin{
class CfgPatches
{
	class CA_Missions_BAF_2
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CA_Missions_BAF"};
	};
};
class CfgMissions
{
	class MPMissions
	{
		class MPB_Crimson
		{
			directory = "ca\missions_2_baf\mpscenarios\MP_CrimsonLance.Takistan";
			condition[] = {"CA_BAF","CA_E","Takistan"};
		};
		class MPB_Serpent
		{
			directory = "ca\missions_2_baf\mpscenarios\MP_OperationSerpent.Chernarus";
			condition[] = {"CA_BAF","CAData","Chernarus"};
		};
	};
};
//};
