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

//Class weapons_e : G36\config.bin{
class CfgPatches
{
	class CAWeapons_E_G36
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWeapons_E"};
	};
};
class CfgWeapons
{
	class Rifle;
	class G36C;
	class G36C_camo: G36C
	{
		model = "\CA\weapons_E\G36\G36_C_camo";
		picture = "\ca\weapons_E\Data\icons\g36_c_camo_CA.paa";
		displayName = "$STR_EP1_DN_G36C_camo";
		scope = 2;
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
	};
	class G36_C_SD_eotech;
	class G36_C_SD_camo: G36_C_SD_eotech
	{
		scope = 2;
		model = "\CA\weapons_E\G36\G36_C_SD_camo";
		picture = "\ca\weapons_E\Data\icons\g36_c_sd_camo_CA.paa";
		displayName = "$STR_EP1_DN_G36_C_SD_camo";
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
	};
	class G36a: Rifle
	{
		class MuzzleFar;
	};
	class G36A_camo: G36a
	{
		scope = 2;
		model = "\CA\weapons_E\G36\G36_camo";
		picture = "\ca\weapons_E\Data\icons\g36_camo_CA.paa";
		displayName = "$STR_EP1_DN_G36A_camo";
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class MuzzleFar: MuzzleFar
		{
			displayName = "$STR_EP1_DN_G36A_camo";
			class OpticsModes
			{
				class Scope
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					opticsZoomInit = 0.0623;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
				class Kolimator: Scope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.5;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};
	class G36K: G36a
	{
		class MuzzleFar;
	};
	class G36K_camo: G36K
	{
		scope = 2;
		model = "\CA\weapons_E\G36\G36_K_camo";
		picture = "\ca\weapons_E\Data\icons\g36_k_camo_CA.paa";
		displayName = "$STR_EP1_DN_G36K_camo";
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		class MuzzleFar: MuzzleFar
		{
			displayName = "$STR_EP1_DN_G36K_camo";
			class OpticsModes
			{
				class Scope
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.0623;
					opticsZoomMax = 0.0623;
					opticsZoomInit = 0.0623;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					distanceZoomMin = 100;
					distanceZoomMax = 100;
					cameraDir = "";
				};
				class Kolimator: Scope
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.5;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};
	class MG36;
	class MG36_camo: MG36
	{
		scope = 2;
		model = "\CA\weapons_E\G36\MG36_camo";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\data\Anim\MG36.rtm"};
		picture = "\ca\weapons_E\Data\icons\mg36_camo_CA.paa";
		displayName = "$STR_EP1_DN_MG36_camo";
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
	};
};
//};
