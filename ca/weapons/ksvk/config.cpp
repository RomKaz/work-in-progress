////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:53 2014 : Source 'file' date Fri Oct 31 06:06:53 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons : ksvk\config.bin{
class CfgPatches
{
	class CAweapons_ksvk
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAweapons"};
	};
};
class CfgRecoils
{
	KSVKRecoil[] = {0,0,0,0.1,0.2,2,0.05,-0.02,-0.03,0.05,0,0};
	KSVKRecoilProne[] = {0,0,0,0.1,0.11,0.005,0.05,-0.22,-0.01,0.05,0,0};
};
class CfgWeapons
{
	class Rifle;
	class ksvk: Rifle
	{
		scope = 2;
		type = 5;
		model = "\ca\weapons\ksvk\ksvk";
		picture = "\CA\weapons\data\Equip\W_ksvk_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
		magazines[] = {"5Rnd_127x108_KSVK"};
		dexterity = 0.48;
		modelOptics = "\ca\weapons\ksvk\pso3_optics";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur2"};
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\KSVK.rtm"};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		opticsZoomMin = 0.0311;
		opticsZoomMax = 0.0311;
		distanceZoomMin = 200;
		distanceZoomMax = 200;
		autoFire = 0;
		reloadTime = 2;
		displayname = "$STR_DN_KSVK";
		begin1[] = {"ca\sounds\weapons\rifles\sniper_single_05",1.7782794,1,1000};
		soundBegin[] = {"begin1",1};
		reloadMagazineSound[] = {"Ca\sounds\Weapons\rifles\reload-ak-2ivan",0.031622775,1,20};
		dispersion = 0.0005;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 1000;
		midRangeProbab = 0.7;
		maxRange = 1600;
		maxRangeProbab = 0.05;
		recoil = "recoil_single_primary_9outof10";
		recoilProne = "recoil_single_primary_prone_7outof10";
		class Library
		{
			libTextDesc = "$STR_LIB_KSVK";
		};
		descriptionShort = "$STR_DSS_KSVK";
	};
};
//};
