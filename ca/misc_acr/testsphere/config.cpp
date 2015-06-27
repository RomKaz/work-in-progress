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

//Class misc_acr : testsphere\config.bin{
class CfgPatches
{
	class CAMisc_ACR_TestSphere
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAMisc_ACR"};
	};
};
class CfgVehicles
{
	class NonStrategic;
	class TestSphere_ACR: NonStrategic
	{
		expansion = 3;
		scope = 1;
		model = "\ca\Misc_ACR\TestSphere\white.p3d";
		hiddenSelections[] = {"retex"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.66667,0.666667,0.666667,1.0,ca)"};
	};
};
//};
