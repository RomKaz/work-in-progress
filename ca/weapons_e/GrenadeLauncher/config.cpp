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

//Class weapons_e : GrenadeLauncher\config.bin{
class CfgPatches
{
	class CAWeapons_E_GrenadeLauncher
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
	class GrenadeLauncher_EP1: Rifle
	{
		magazines[] = {"1Rnd_HE_M203","FlareWhite_M203","FlareGreen_M203","FlareRed_M203","FlareYellow_M203","1Rnd_Smoke_M203","1Rnd_SmokeRed_M203","1Rnd_SmokeGreen_M203","1Rnd_SmokeYellow_M203"};
		begin1[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_1",1.0,1,200};
		soundBegin[] = {"begin1",1};
		reloadMagazineSound[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_reload",1.0,1,30};
		drySound[] = {"ca\sounds_e\weapons_e\grenade_launcher\gr_launcher_dry",1.1220185,1,40};
		magazineReloadTime = 3;
		reloadTime = 1;
		optics = 1;
		modelOptics = "-";
		cameraDir = "GL look";
		memoryPointCamera = "GL eye";
		opticsZoomMin = 0.3;
		opticsZoomMax = 1.0;
		opticsZoomInit = 0.5;
		cursor = "GLCursor";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 4;
		value = 3;
		reloadAction = "ManActReloadMagazine";
		initSpeed = 75;
		canLock = 0;
		autoReload = 0;
		autoAimEnabled = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "M240Recoil";
		dispersion = 0.007;
		aiDispersionCoefY = 6;
		maxLeadSpeed = 15;
		muzzlePos = "usti granatometu";
		muzzleEnd = "konec granatometu";
		cartridgePos = "";
		cartridgeVel = "";
		minRange = 30;
		minRangeProbab = 0.1;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	class M32_EP1: GrenadeLauncher_EP1
	{
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		model = "\ca\weapons_E\GrenadeLauncher\M32";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\M32.rtm"};
		picture = "\ca\weapons_E\Data\icons\m32_CA.paa";
		displayName = "$STR_EP1_DN_M32_EP1";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_M32_EP1";
		};
		descriptionShort = "$STR_EP1_DSS_M32_EP1";
		magazines[] = {"6Rnd_HE_M203","6Rnd_FlareWhite_M203","6Rnd_FlareGreen_M203","6Rnd_FlareRed_M203","6Rnd_FlareYellow_M203","6Rnd_Smoke_M203","6Rnd_SmokeRed_M203","6Rnd_SmokeGreen_M203","6Rnd_SmokeYellow_M203","1Rnd_HE_M203","FlareWhite_M203","FlareGreen_M203","FlareRed_M203","FlareYellow_M203","1Rnd_Smoke_M203","1Rnd_SmokeRed_M203","1Rnd_SmokeGreen_M203","1Rnd_SmokeYellow_M203"};
		reloadTime = 0.5;
	};
	class M79_EP1: GrenadeLauncher_EP1
	{
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		model = "\ca\weapons_E\GrenadeLauncher\M79";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\M79.rtm"};
		picture = "\ca\weapons_E\Data\icons\m79_CA.paa";
		displayName = "$STR_EP1_DN_M79_EP1";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_M79_EP1";
		};
		descriptionShort = "$STR_EP1_DSS_M79_EP1";
	};
	class Mk13_EP1: GrenadeLauncher_EP1
	{
		scope = 2;
		model = "\ca\weapons_E\GrenadeLauncher\MK13";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\MK13.rtm"};
		picture = "\ca\weapons_E\Data\icons\mk13_CA.paa";
		displayName = "$STR_EP1_DN_Mk13_EP1";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_Mk13_EP1";
		};
		descriptionShort = "$STR_EP1_DSS_Mk13_EP1";
	};
};
//};
