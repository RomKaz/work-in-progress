////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:19 2014 : Source 'file' date Fri Oct 31 06:07:19 2014
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

//Class wheeled_acr : pandur\config.bin{
class CfgPatches
{
	class CAWheeled_ACR_Pandur
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAWheeled_E_stryker","CAWheeled_ACR"};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class HitPoints;
	};
	class Car: LandVehicle
	{
		class ViewOptics;
		class ViewPilot;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewGunner;
				class ViewOptics;
			};
		};
		class AnimationSources;
	};
	class Wheeled_APC: Car{};
	class StrykerBase_EP1: Wheeled_APC
	{
		class AnimationSources;
		class ViewOptics;
		class ViewPilot;
		class HitPoints;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};
	class Pandur2_Base: StrykerBase_EP1
	{
		scope = 0;
		expansion = 3;
		displayName = "$STR_ACR_DN_PANDUR";
		vehicleClass = "ArmouredW";
		faction = "BIS_CZ";
		picture = "\Ca\Wheeled_ACR\Data\UI\Picture_Pandur2_CA.paa";
		Icon = "\Ca\Wheeled_ACR\Data\UI\Icon_Pandur2_CA.paa";
		model = "\Ca\Wheeled_ACR\Pandur\Pandur_II.p3d";
		mapSize = 7;
		maxSpeed = 95;
		turnCoef = 4.0;
		steerAheadSimul = 0.6;
		steerAheadPlan = 0.4;
		supplyRadius = 1.7;
		smokeLauncherOnTurret = 0;
		forceHideDriver = 1;
		transportSoldier = 8;
		crew = "CZ_Soldier_Crew_Wdl_ACR";
		typicalCargo[] = {"CZ_Soldier_Leader_Wdl_ACR","CZ_Soldier_MG2_Wdl_ACR","CZ_Soldier_RPG_Wdl_ACR","CZ_Soldier_RPG_Wdl_ACR","CZ_Sharpshooter_Wdl_ACR","CZ_Soldier_RPG_Ass_Wdl_ACR","CZ_Soldier_Medic_Wdl_ACR","CZ_Soldier_805_Wdl_ACR"};
		threat[] = {1.0,0.6,0.6};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Wheeled_ACR\Pandur\data\pandur_body.rvmat","Ca\Wheeled_ACR\Pandur\data\pandur_body_damage.rvmat","Ca\Wheeled_ACR\Pandur\data\pandur_body_destruct.rvmat","Ca\Wheeled_ACR\Pandur\data\pandur_kan.rvmat","Ca\Wheeled_ACR\Pandur\data\pandur_kan_damage.rvmat","Ca\Wheeled_ACR\Pandur\data\pandur_kan_destruct.rvmat","Ca\Wheeled_ACR\Pandur\data\pandur_detaily.rvmat","Ca\Wheeled_ACR\Pandur\data\pandur_detaily_damage.rvmat","Ca\Wheeled_ACR\Pandur\data\pandur_detaily_destruct.rvmat","Ca\Wheeled_ACR\Pandur\data\pandur_alpha.rvmat","Ca\Wheeled_ACR\Pandur\data\pandur_alpha_damage.rvmat","Ca\Wheeled_ACR\Pandur\data\pandur_alpha_destruct.rvmat"};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M2";
			};
			class recoil_source
			{
				source = "reload";
				weapon = "M68";
			};
		};
		driverForceOptics = 0;
		driverOpticsModel = "\ca\Wheeled_e\driverTV_stryker";
		class ViewPilot: ViewPilot
		{
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal","NVG"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {400,600,800,1000,1200,1400,1600,1800,2000};
				discreteDistanceInitIndex = 1;
				weapons[] = {"ATKMK44_ACR","M240_veh_ACR","SpikeLauncher_ACR","SmokeLauncher"};
				magazines[] = {"140Rnd_30mm_ATKMK44_HE_ACR","60Rnd_30mm_ATKMK44_AP_ACR","460Rnd_762x51_M240_ACR","460Rnd_762x51_M240_ACR","460Rnd_762x51_M240_ACR","2Rnd_Spike_ACR","2Rnd_Spike_ACR","SmokeLauncherMag","SmokeLauncherMag"};
				soundServo[] = {"\ca\wheeled\Data\Sound\servo3",0.017782794,1.0};
				minElev = -15;
				maxElev = 25;
				initElev = 0;
				memoryPointGun = "machinegun";
				selectionFireAnim = "zasleh2";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				body = "MainTurret";
				gun = "MainGun";
				animationSourceBody = "MainTurret";
				animationSourceGun = "MainGun";
				outGunnerMayFire = 0;
				startEngine = 1;
				primaryGunner = 0;
				primaryObserver = 1;
				commanding = 1;
				gunnerForceOptics = 1;
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
					gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
					gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
					stabilizedInAxes = "StabilizedInAxisBoth";
				};
				class Turrets{};
			};
		};
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[] = {"Ca\Wheeled_ACR\Pandur\data\Pandur_body_co.paa","Ca\Wheeled_ACR\Pandur\data\Pandur_kan_co.paa","Ca\Wheeled_ACR\Pandur\data\Pandur_detaily_co.paa","Ca\Wheeled_ACR\Pandur\data\Pandur_alpha_CA.paa"};
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_PANDUR";
		};
	};
	class Pandur2_ACR: Pandur2_Base
	{
		scope = 2;
		side = 1;
		model = "\Ca\Wheeled_ACR\Pandur\Pandur_II.p3d";
		threat[] = {1.0,0.6,0.6};
		LockDetectionSystem = "CM_Lock_Laser";
		IncommingMisslieDetectionSystem = "CM_Missile";
	};
};
//};
