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

//Class weapons_e : m107\config.bin{
class CfgPatches
{
	class CAweapons_E_m107
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAweapons_m107","CAweapons_E"};
	};
};
class CfgWeapons
{
	class Rifle;
	class m107: Rifle
	{
		model = "\ca\weapons_E\m107\m107";
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		weaponInfoType = "RscWeaponZeroing";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\M107b.rtm"};
		class OpticsModes
		{
			class StepScope
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomInit = 0.0553;
				opticsZoomMin = 0.0178;
				distanceZoomMin = 500;
				opticsZoomMax = 0.0553;
				distanceZoomMax = 200;
				memoryPointCamera = "Konec hlavne";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "";
				visionMode[] = {"Normal"};
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 4;
			};
		};
	};
	class m107_TWS_EP1: m107
	{
		model = "\ca\weapons_E\m107\m107_TWS";
		picture = "\CA\weapons_e\data\icons\m107_TWS_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
		displayname = "$STR_EP1_DN_m107_TWS_EP1";
		modelOptics = "\Ca\weapons_E\HWTS_optic.p3d";
		opticsPPEffects[] = {};
		visionMode[] = {"Ti"};
		thermalMode[] = {0,1};
		opticsZoomMax = 0.0755;
		distanceZoomMax = 120;
		opticsZoomMin = 0.0249;
		distanceZoomMin = 400;
		opticsZoomInit = 0.0755;
		class OpticsModes: OpticsModes
		{
			class HWTS: StepScope
			{
				opticsPPEffects[] = {};
				visionMode[] = {"Ti"};
				thermalMode[] = {0,1};
				discretefov[] = {0.0755,0.0249};
				discreteInitIndex = 0;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 2;
			};
		};
	};
};
//};
