////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:45 2014 : Source 'file' date Fri Oct 31 06:04:45 2014
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

//Class misc_acr : targets\invisibletarget\config.bin{
class CfgPatches
{
	class CAMisc_ACR_Targets_InvisibleTarget
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAMisc_ACR"};
	};
};
class CfgVehicles
{
	class House;
	class TargetCenter_ACR: House
	{
		expansion = 3;
		scope = 1;
		displayName = "";
		model = "\Ca\Misc_ACR\Targets\InvisibleTarget\Center_ACR.p3d";
		class DestructionEffects{};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,0.5,0.5,0.5,ca)"};
	};
	class TargetSector02_ACR: TargetCenter_ACR
	{
		model = "\Ca\Misc_ACR\Targets\InvisibleTarget\sector02_ACR.p3d";
	};
	class TargetSector03_ACR: TargetCenter_ACR
	{
		model = "\Ca\Misc_ACR\Targets\InvisibleTarget\sector03_ACR.p3d";
	};
	class TargetSector04_ACR: TargetCenter_ACR
	{
		model = "\Ca\Misc_ACR\Targets\InvisibleTarget\sector04_ACR.p3d";
	};
	class TargetSector05_ACR: TargetCenter_ACR
	{
		model = "\Ca\Misc_ACR\Targets\InvisibleTarget\sector05_ACR.p3d";
	};
};
//};
