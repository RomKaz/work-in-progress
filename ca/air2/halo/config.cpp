////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:42 2014 : Source 'file' date Fri Oct 31 06:00:42 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class air2 : halo\config.bin{
class CfgPatches
{
	class HALO_Test
	{
		units[] = {"BIS_Steerable_Parachute"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
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
	class BIS_Steerable_Parachute: Plane
	{
		scope = 2;
		displayName = "$STR_DN_Steerable_Parachute";
		model = "ca\air2\halo\Steerable_Parachute";
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
		gunnerCanSee = "2+8+32";
		secondaryExplosion = -1;
		extCameraPosition[] = {0,2,-5};
		destrType = "DestructNo";
		maxSpeed = 200;
		envelope[] = {0.0,0.0,0.0};
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
		class Turrets
		{
			class MainTurret: NewTurret
			{
				body = "";
				gun = "";
				commanding = -1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				weapons[] = {};
				magazines[] = {};
				castGunnerShadow = 1;
				viewGunnerShadow = 1;
				gunnerAction = "Para_Pilot";
				gunnerInAction = "Para_Pilot";
				class ViewGunner
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
				class ViewOptics
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
			};
		};
		occludeSoundsWhenIn = 1.0;
		obstructSoundsWhenIn = 1.0;
		class Reflectors{};
		class AnimationSources
		{
			class hide_chute
			{
				source = "user";
				animPeriod = 0;
			};
		};
		class Armory
		{
			disabled = 1;
		};
	};
};
class CfgSounds
{
	class BIS_HALO_Flapping
	{
		sound[] = {"\ca\air2\halo\data\sounds\flapping.ogg",1.7782794,1.0,900};
		titles[] = {};
	};
	class BIS_Steerable_Parachute_Opening
	{
		sound[] = {"\ca\air2\halo\data\sounds\parachute_opening.ogg",1.7782794,1.0,1400};
		titles[] = {};
	};
};
//};
