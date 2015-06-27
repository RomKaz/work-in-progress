////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_FixedM242AmmoStats\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_FixedM242AmmoStats
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgAmmo
{
	class BulletBase;
	class B_25mm_APDS: BulletBase
	{
		airFriction = -3e-005;
		hit = 105;
		typicalSpeed = 1360;
		tracerEndTime = 1.8;
	};
	class B_25mm_HE: BulletBase
	{
		hit = 56;
		indirectHit = 25;
		indirectHitRange = 0.75;
		explosive = 0.45;
		typicalSpeed = 590;
		airFriction = -0.00062;
		tracerEndTime = 3.6;
	};
	class B_25mm_HEI: B_25mm_HE
	{
		hit = 30;
		explosive = 0.8;
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class 210Rnd_25mm_M242_APDS: VehicleMagazine
	{
		displayName = "M242 APFSDS-T";
		displayNameShort = "APFSDS";
		initSpeed = 1400;
	};
	class 210Rnd_25mm_M242_HEI: VehicleMagazine
	{
		displayName = "M242 HEI-T";
		displayNameShort = "HEI";
		initSpeed = 1100;
		tracersEvery = 1;
	};
};
class Mode_FullAuto;
class CfgWeapons
{
	class CannonCore;
	class M242: CannonCore
	{
		class LowROF: Mode_FullAuto
		{
			dispersion = 0.0003;
		};
	};
};
//};
