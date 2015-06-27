////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:53 2014 : Source 'file' date Fri Oct 31 06:06:53 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons : m107\config.bin{
class CfgPatches
{
	class CAweapons_m107
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAweapons"};
	};
};
class CfgRecoils
{
	M107Recoil[] = {0,0,0,0.1,0.2,2,0.05,-0.02,-0.03,0.05,0,0};
	M107RecoilProne[] = {0,0,0,0.1,0.1,0.005,0.05,-0.2,-0.01,0.05,0,0};
};
class CfgWeapons
{
	class Rifle;
	class m107: Rifle
	{
		scope = 2;
		type = 5;
		model = "\ca\weapons\m107\m107";
		picture = "\CA\weapons\data\Equip\W_m107_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
		magazines[] = {"10Rnd_127x99_m107"};
		dexterity = 0.45;
		modelOptics = "\ca\Weapons\2Dscope_MilDot_14";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		opticsZoomInit = 0.0553;
		opticsZoomMin = 0.0178;
		distanceZoomMin = 500;
		opticsZoomMax = 0.0553;
		distanceZoomMax = 200;
		displayname = "$STR_DN_M107";
		autoFire = 0;
		begin1[] = {"ca\sounds\weapons\rifles\m107",2.5118864,1,1300};
		soundBegin[] = {"begin1",1};
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-2",0.031622775,1,20};
		reloadTime = 0.5;
		dispersion = 0.0005;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 1800;
		maxRangeProbab = 0.05;
		recoil = "recoil_single_primary_9outof10";
		recoilProne = "recoil_single_primary_prone_7outof10";
		class Library
		{
			libTextDesc = "$STR_LIB_M107";
		};
		descriptionShort = "$STR_DSS_M107";
	};
};
//};
