////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:45 2014 : Source 'file' date Fri Oct 31 06:00:45 2014
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

//Class AIR_PMC : ka60\config.bin{
class CfgPatches
{
	class CAAir_PMC_KA60
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CAAir_PMC"};
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class Air;
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class HitPoints
		{
			class HitVRotor;
		};
	};
	class Ka60_Base_PMC: Helicopter
	{
		expansion = 4;
		destrType = "DestructWreck";
		armor = 30;
		displayName = "$STR_PMC_DN_KA60";
		model = "\Ca\Air_PMC\Ka60\Ka60_PMC.p3d";
		icon = "\Ca\Air_PMC\data\ui\Icon_ka60_PMC_ca.paa";
		picture = "\Ca\Air_PMC\data\ui\picture_ka60_PMC_ca.paa";
		driverAction = "UH1H_Pilot_EP1";
		driverInAction = "UH1H_Pilot_EP1";
		transportSoldier = 8;
		cargoAction[] = {"UH1H_Cargo_EP1","UH60_Cargo02"};
		cargoIsCoDriver[] = {1,0};
		weapons[] = {"57mmLauncher"};
		magazines[] = {"14Rnd_57mm"};
		enableManualFire = 0;
		class HitPoints: HitPoints
		{
			class HitVRotor: HitVRotor
			{
				armor = 1;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				minElev = -50;
				maxElev = 30;
				initElev = 11;
				minTurn = 20;
				maxTurn = 155;
				initTurn = 80;
				soundServo[] = {"",0.01,1.0};
				animationSourceHatch = "";
				stabilizedInAxes = "StabilizedInAxesNone";
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				weapons[] = {"M32_heli"};
				maxHorizontalRotSpeed = 1.6;
				maxVerticalRotSpeed = 1.6;
				magazines[] = {"6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli","6Rnd_HE_M203_heli"};
				gunnerName = "$STR_POSITION_DOORGUNNER";
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				gunnerAction = "Mi8_Gunner";
				gunnerInAction = "Mi8_Gunner";
				commanding = -2;
				primaryGunner = 1;
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				gunnerCompartments = "Compartment2";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Air_PMC\Ka60\Data\ka60_ext.rvmat","Ca\Air_PMC\Ka60\Data\ka60_ext_damage.rvmat","Ca\Air_PMC\Ka60\Data\ka60_ext_destruct.rvmat","Ca\Air_PMC\Ka60\Data\ka60_glass.rvmat","Ca\Air_PMC\Ka60\Data\ka60_glass_damage.rvmat","Ca\Air_PMC\Ka60\Data\ka60_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		soundGetIn[] = {"Ca\Sounds_PMC\Air_PMC\Ka_door",0.31622776,1};
		soundGetOut[] = {"Ca\Sounds_PMC\Air_PMC\Ka_door",0.31622776,1,40};
		soundDammage[] = {"Ca\Sounds_PMC\Air_PMC\int-alarm_loop",0.56234133,1};
		soundEngineOnInt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_start_int_1",0.1,1.0};
		soundEngineOnExt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_start_ext_1",0.56234133,1.0,800};
		soundEngineOffInt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_stop_int_1",0.1,1.0};
		soundEngineOffExt[] = {"Ca\Sounds_PMC\Air_PMC\Ka_stop_ext_1",0.56234133,1.0,800};
		class Sounds
		{
			class Engine
			{
				sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_engi_r_ext",3.1622777,1.4,800};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[] = {"Ca\Sounds_PMC\Air_PMC\KA_rotor_orig",3.1622777,1.0,1400};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))";
				cone[] = {1.8,3.14,2.0,0.9};
			};
			class RotorHighOut
			{
				sound[] = {"Ca\Sounds_PMC\Air_PMC\KA_rotor_orig_high_swist",5.623413,1.0,1500};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.95))";
				cone[] = {1.1,3.14,2.0,0.9};
			};
			class EngineIn
			{
				sound[] = {"Ca\Sounds_PMC\Air_PMC\Ka_engi_int_1",3.1622777,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[] = {"Ca\Sounds_PMC\Air_PMC\KA_rotor_orig",0.56234133,1.0};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))";
			};
			class RotorHighIn
			{
				sound[] = {"Ca\Sounds_PMC\Air_PMC\KA_rotor_orig_high_swist",0.31622776,1.0};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)";
			};
		};
		class Library
		{
			libTextDesc = "$STR_PMC_LIB_KA60";
		};
		class AnimationSources: AnimationSources
		{
			class Doors
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class HideWeapon
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
		};
	};
	class Ka60_GL_BASE_PMC: Ka60_Base_PMC
	{
		side = 2;
		faction = "PMC_BAF";
		crew = "Soldier_PMC";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M32_heli";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M32_heli";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M32_heli";
			};
			class Doors: Doors
			{
				initPhase = 1;
			};
		};
	};
	class Ka60_GL_PMC: Ka60_GL_BASE_PMC
	{
		scope = 2;
		displayName = "$STR_PMC_DN_KA60_GL";
		accuracy = 1000;
	};
	class Ka60_PMC: Ka60_Base_PMC
	{
		scope = 2;
		side = 2;
		faction = "PMC_BAF";
		crew = "Soldier_PMC";
		class AnimationSources: AnimationSources
		{
			class HideWeapon: HideWeapon
			{
				initPhase = 1;
			};
			class MainTurret
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
			class MainGun
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
			class ReloadAnim
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class ReloadMagazine
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class Revolving
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
		};
		class Turrets{};
		transportSoldier = 9;
	};
};
//};
