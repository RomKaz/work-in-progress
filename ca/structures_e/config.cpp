////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:45 2014 : Source 'file' date Fri Oct 31 06:11:45 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class structures_e : config.bin{
class CfgPatches
{
	class CAStructures_E
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CA_E","CABuildings","CABuildings2","CAStructures"};
	};
};
class CfgVehicles
{
	class House;
	class House_EP1: House
	{
		scope = 0;
		vehicleClass = "Test";
		expansion = 1;
	};
	class House_Test_EP1: House_EP1
	{
		vehicleClass = "Test";
		expansion = 1;
	};
	class Ruins;
	class Ruins_EP1: Ruins
	{
		vehicleClass = "Test";
		expansion = 1;
	};
	class Land_runway_edgelight: House
	{
		destrType = "DestructTent";
	};
};
//};
