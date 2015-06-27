////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:36 2014 : Source 'file' date Fri Oct 31 06:07:36 2014
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

//Class air_e : Halo\config.bin{
class CfgPatches
{
	class CAAir_E_Halo
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.04;
		requiredAddons[] = {"CAAir_E","HALO_Test"};
	};
};
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class ViewPilot;
		class NewTurret;
	};
	class Steerable_Parachute_EP1: Plane
	{
		scope = 2;
		displayName = "$STR_DN_Steerable_Parachute";
		model = "ca\air_e\halo\Steerable_Parachute_ep1";
		ejectSpeed[] = {0,0,0};
		side = 4;
		driverOpticsModel = "\ca\weapons\optika_empty";
		UnitInfoType = "UnitInfoCar";
		selectionClan = "";
		selectionDashboard = "";
		selectionShowDamage = "";
		selectionBackLights = "";
		bounding = "doplnovani";
		Icon = "\ca\air\data\map_ico\icomap_Para_CA.paa";
		mapSize = 5;
		nameSound = "veh_parachute";
		accuracy = 0.5;
		camouflage = 2;
		audible = 0;
		hasGunner = 1;
		fuelCapacity = 0;
		picture = "\ca\air\data\ico\Para_CA.paa";
		soundEngine[] = {};
		soundEnviron[] = {"\Ca\sounds\Air\Noises\padak_let",0.31622776,1,80};
		soundGetIn[] = {"\Ca\sounds\Air\Noises\padak_getIN",0.31622776,1,20};
		soundGetOut[] = {"\Ca\sounds\Air\Noises\padak_getIN",0.31622776,1,20};
		soundCrash[] = {"\Ca\sounds\Air\Noises\padak_dopad",0.031622775,1,50};
		soundLandCrash[] = {"\Ca\sounds\Air\Noises\padak_dopad",0.031622775,1,50};
		soundWaterCrash[] = {"\Ca\sounds\Air\Noises\padak_dopadvoda",3.1622777,1,80};
		gunnerCanSee = "2+8+CanSeePeripheral";
		secondaryExplosion = -1;
		extCameraPosition[] = {0,6,-20};
		destrType = "DestructNo";
		enableGPS = 0;
		class EventHandlers{};
		class ViewPilot: ViewPilot
		{
			initFov = 0.95;
			minFov = 0.95;
			maxFov = 0.95;
			initAngleX = 0;
			minAngleX = -70;
			maxAngleX = 70;
			initAngleY = 0;
			minAngleY = -110;
			maxAngleY = 110;
		};
		driverAction = "Para_Pilot";
		driverInAction = "Para_Pilot";
		class Turrets{};
		occludeSoundsWhenIn = 1.0;
		obstructSoundsWhenIn = 1.0;
		class Reflectors{};
		class Armory
		{
			disabled = 1;
		};
		gearRetracting = 0;
		flaps = 0;
		envelope[] = {0.9,0.9,0.9,0.9,0.9,0.9,0.9,0.9,0.9,0.9,0.9,0.9,0.9,0.9,0.9,0.9,0.9};
		maxSpeed = 1;
		landingSpeed = 1;
	};
};
//};
