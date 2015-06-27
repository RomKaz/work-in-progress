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

//Class weapons_e : M14\config.bin{
class CfgPatches
{
	class CAWeapons_E_M14
	{
		units[] = {};
		weapons[] = {"M14_EP1"};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWeapons_E","CAweapons"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class M14_EP1: Rifle
	{
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		model = "\ca\weapons_E\M14\M14";
		picture = "\ca\weapons_e\data\icons\M14_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		dexterity = 1.53;
		displayName = "$STR_EP1_DN_M14_EP1";
		magazines[] = {"20Rnd_762x51_DMR"};
		reloadTime = 2;
		backgroundReload = 1;
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\sniper_single_05",1.7782794,1,1000};
			soundBegin[] = {"begin1",1};
			dispersion = 0.00045;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			displayName = "";
		};
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M24.rtm"};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_M14_EP1";
		};
		descriptionShort = "$STR_EP1_DSS_M14_EP1";
	};
};
//};
