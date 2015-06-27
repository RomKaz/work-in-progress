////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:37 2014 : Source 'file' date Fri Oct 31 06:07:37 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	stabilizedinaxisx = 1,
	compartment1 = 1,
	stabilizedinaxisy = 2,
	compartment2 = 2,
	stabilizedinaxesboth = 3,
	compartment3 = 4,
	compartment4 = 8,
	stabilizedinaxesnone = 0
};

//Class air_e : Su25\config.bin{
class CfgPatches
{
	class CA_AIR_E_Su25
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAAir_E","CA_AIR2_Su25"};
	};
};
class CfgVehicles
{
	class Plane;
	class Su25_base: Plane
	{
		model = "\ca\air_E\su25\su25";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Air_E\Su25\DATA\su25_body1.rvmat","Ca\Air_E\Su25\DATA\su25_body1_damage.rvmat","Ca\Air_E\Su25\DATA\su25_body1_destruct.rvmat","Ca\Air_E\Su25\DATA\su25_body2.rvmat","Ca\Air_E\Su25\DATA\su25_body2_damage.rvmat","Ca\Air_E\Su25\DATA\su25_body2_destruct.rvmat","Ca\Air_E\Su25\DATA\su25_glass.rvmat","Ca\Air_E\Su25\DATA\su25_glass_damage.rvmat","Ca\Air_E\Su25\DATA\su25_glass_destruct.rvmat","Ca\Air_E\Su25\DATA\su25_glass_in.rvmat","Ca\Air_E\Su25\DATA\su25_glass_in_damage.rvmat","Ca\Air_E\Su25\DATA\su25_glass_in_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		weapons[] = {"GSh301","AirBombLauncher","R73Launcher_2","S8Launcher","CMFlareLauncher"};
		magazines[] = {"180Rnd_30mm_GSh301","4Rnd_FAB_250","2Rnd_R73","80Rnd_S8T","120Rnd_CMFlareMagazine"};
		LockDetectionSystem = 8;
		IncommingMisslieDetectionSystem = 0;
		radarType = 4;
	};
	class Su39: Su25_base
	{
		weapons[] = {"GSh301","Ch29Launcher","R73Launcher_2","S8Launcher","CMFlareLauncher"};
		magazines[] = {"180Rnd_30mm_GSh301","4Rnd_Ch29","2Rnd_R73","80Rnd_S8T","120Rnd_CMFlareMagazine"};
	};
};
//};
