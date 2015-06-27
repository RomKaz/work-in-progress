////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:48 2014 : Source 'file' date Fri Oct 31 06:11:48 2014
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

//Class structures_e : HouseA\A_Statue\config.bin{
class CfgPatches
{
	class CAStructures_E_HouseA_A_Statue
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAStructures_E_HouseA"};
	};
};
class CfgVehicles
{
	class House;
	class House_EP1: House
	{
		class DestructionEffects;
	};
	class Land_A_Statue_EP1: House_EP1
	{
		scope = 1;
		armor = 500;
		model = "\ca\Structures_E\HouseA\A_Statue\A_Statue_EP1.p3d";
		destrType = "DestructNo";
	};
};
//};
