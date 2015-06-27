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

//Class misc_acr : helpers\config.bin{
class CfgPatches
{
	class CAMisc_ACR_Helpers
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAMisc_ACR"};
	};
};
class CfgVehicles
{
	class Helper_Base_EP1;
	class Cube5cm_ACR: Helper_Base_EP1
	{
		expansion = 3;
		scope = 2;
		displayName = "Cube 5cm ACR";
		model = "ca\Misc_ACR\helpers\cube5cm_ACR.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,0.5,0.5,0.5,ca)"};
	};
	class Cube25cm_ACR: Cube5cm_ACR
	{
		displayName = "Cube 25cm ACR";
		model = "ca\Misc_ACR\helpers\cube25cm_ACR.p3d";
	};
	class PointerSmall_ACR: Cube5cm_ACR
	{
		displayName = "Pointer (small)";
		model = "ca\Misc_ACR\helpers\pointerSmall_ACR.p3d";
	};
	class PointerLarge_ACR: Cube5cm_ACR
	{
		displayName = "Pointer (large)";
		model = "ca\Misc_ACR\helpers\pointerLarge_ACR.p3d";
	};
};
//};
