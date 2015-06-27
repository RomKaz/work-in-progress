////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:01 2014 : Source 'file' date Fri Oct 31 06:07:01 2014
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

//Class weapons_acr : rbs70\config.bin{
class CfgPatches
{
	class CAWeapons_ACR_RBS70
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAWEAPONS_ACR"};
	};
};
class CfgVehicles
{
	class StaticWeapon;
	class StaticAAWeapon: StaticWeapon
	{
		class Turrets;
	};
	class Stinger_Pod_base: StaticAAWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Rbs70_ACR: Stinger_Pod_base
	{
		expansion = 3;
		scope = 2;
		model = "\Ca\weapons_acr\RBS70\RBS70.p3d";
		displayName = "$STR_ACR_DN_RBS70";
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_RBS70";
		};
		picture = "\Ca\Weapons_ACR\Data\UI\picture_rbs70_CA.paa";
		icon = "\Ca\Weapons_ACR\Data\UI\icon_rbs70_CA.paa";
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_Wdl_ACR"};
		sound[] = {"Ca\Sounds_ACR\weapons\rbs70",10.0,1,1200};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "\Ca\Weapons_ACR\RBS70\2D_optics.p3d";
				weapons[] = {"RBS70"};
				magazines[] = {"1Rnd_Bolide","1Rnd_Bolide","1Rnd_Bolide","1Rnd_Bolide","1Rnd_Bolide","1Rnd_Bolide","1Rnd_Bolide","1Rnd_Bolide","1Rnd_Bolide","1Rnd_Bolide"};
			};
		};
		class AssembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"RBS70_Bag_ACR","Tripod_Bag"};
			displayName = "";
		};
	};
};
//};
