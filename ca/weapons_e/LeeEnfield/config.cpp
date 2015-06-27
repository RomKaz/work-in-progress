////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:22 2014 : Source 'file' date Fri Oct 31 06:13:22 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons_e : LeeEnfield\config.bin{
class CfgPatches
{
	class CAWeapons_E_LeeEnfield
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWeapons_E","CAWeapons"};
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_303_Ball: BulletBase
	{
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 18;
		audibleFire = 18;
		visibleFireTime = 2;
		cost = 1.2;
		airLock = 1;
		tracerStartTime = -1;
		airFriction = -0.00071225;
		typicalSpeed = 750;
		caliber = 0.9;
	};
};
class CfgMagazines
{
	class CA_Magazine;
	class 10x_303: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_EP1_DN_10x_303_LeeEnfield";
		descriptionShort = "$STR_EP1_DSS_10x_303";
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		count = 10;
		ammo = "B_303_Ball";
		initSpeed = 750;
	};
};
class CfgWeapons
{
	class Rifle;
	class LeeEnfield: Rifle
	{
		htMin = 1;
		htMax = 420;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		scope = 2;
		displayName = "$STR_EP1_DN_LeeEnfield";
		model = "\CA\weapons_E\LeeEnfield\LeeEnfield_no4mk1";
		picture = "\ca\weapons_E\Data\icons\leeEnfield_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons_E\Data\Anim\LeeEnfield.rtm"};
		dexterity = 1.61;
		magazines[] = {"10x_303"};
		opticsDisablePeripherialVision = 0;
		opticsPPEffects[] = {};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 150;
		midRangeProbab = 0.7;
		maxRange = 300;
		maxRangeProbab = 0.05;
		aiRateOfFire = 8.0;
		aiRateOfFireDistance = 600;
		dispersion = 0.0005;
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_LeeEnfield";
		};
		descriptionShort = "$STR_EP1_DSS_LeeEnfield";
		begin1[] = {"Ca\Sounds_E\Weapons_E\Enfield\Enfield_4",1.7782794,1,1500};
		soundBegin[] = {"begin1",1};
		reloadMagazineSound[] = {"Ca\sounds\Weapons\rifles\M1014-reload",0.01,1,20};
		drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.01,1,10};
		reloadTime = 2;
		backgroundReload = 1;
		recoil = "recoil_single_primary_6outof10";
		recoilProne = "recoil_single_primary_prone_5outof10";
		value = 1000;
	};
};
//};
