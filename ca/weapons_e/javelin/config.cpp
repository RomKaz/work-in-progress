////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:22 2014 : Source 'file' date Fri Oct 31 06:13:22 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=4
enum {
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0
};

//Class weapons_e : javelin\config.bin{
class CfgPatches
{
	class CAWeapons_E_Javelin
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAWeapons_E","CAWeapons"};
	};
};
class CfgWeapons
{
	class Launcher;
	class Javelin: Launcher
	{
		model = "ca\weapons_E\javelin\Javelin_Launcher";
		weaponInfoType = "RscWeaponInfoJavelin";
		htMin = 1;
		htMax = 460;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class OpticsModes
		{
			class StepScope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsFlare = 0;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0277;
				opticsZoomInit = 0.0623;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				cameraDir = "look";
				visionMode[] = {"Normal","NVG","Ti"};
				thermalMode[] = {0,1};
				opticsDisablePeripherialVision = 1;
				discretefov[] = {0.0623,0.0277};
				discreteInitIndex = 0;
			};
		};
	};
};
class CfgMagazines
{
	class CA_LauncherMagazine;
	class Javelin: CA_LauncherMagazine
	{
		modelSpecial = "ca\weapons_E\javelin\Javelin_Launcher_loaded";
	};
};
//};
