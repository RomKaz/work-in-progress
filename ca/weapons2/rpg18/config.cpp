////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:54 2014 : Source 'file' date Fri Oct 31 06:06:54 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class weapons2 : rpg18\config.bin{
class CfgPatches
{
	class CAWeapons2_RPG18
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWeapons2","CAWeapons"};
	};
};
class CfgWeapons
{
	class Launcher;
	class RPG18: Launcher
	{
		scope = 2;
		displayName = "$STR_DN_RPG18";
		model = "\ca\weapons2\rpg18\rpg18";
		modelSpecial = "\ca\weapons2\rpg18\rpg18_loaded.p3d";
		modelOptics = "-";
		magazines[] = {"RPG18"};
		sound[] = {"Ca\sounds\Weapons\cannon\RocketLauncher_Shot04_A",10.0,1,1400};
		drySound[] = {"Ca\sounds\Weapons\cannon\Javelin_dry_v1",0.0001,1,10};
		reloadMagazineSound[] = {"Ca\sounds\Weapons\cannon\flare_reload",0.00031622776,1,20};
		soundFly[] = {"Ca\sounds\Weapons\cannon\rocket_fly1",10.0,1.8,600};
		picture = "\Ca\weapons2\rpg18\data\equip\W_RPG18_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
		recoil = "launcherBase";
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 100;
		minRange = 10;
		midRange = 100;
		maxRange = 200;
		class Library
		{
			libTextDesc = "$STR_LIB_RPG18";
		};
		descriptionShort = "$STR_DSS_RPG18";
	};
};
//};
