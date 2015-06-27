////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:44 2014 : Source 'file' date Fri Oct 31 06:04:44 2014
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

//Class misc_acr : config.bin{
class CfgPatches
{
	class CAMisc_ACR
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CA_ACR","CAMisc_E","CAMisc3","CA_Animals2_Anim_Config","CA_Anims_E_Wmn"};
	};
};
class CfgVehicles
{
	class House;
	class Pond_ACR: House
	{
		expansion = 3;
		scope = 1;
		displayName = "Pond";
		model = "\ca\structures\pond\pondtest.p3d";
	};
};
//};
