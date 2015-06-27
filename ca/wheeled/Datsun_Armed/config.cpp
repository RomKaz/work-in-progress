////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:09 2014 : Source 'file' date Fri Oct 31 06:07:09 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class wheeled : Datsun_Armed\config.bin{
class CfgPatches
{
	class CAWheeled_Pickup
	{
		units[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWheeled","CAWeapons"};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Car: LandVehicle
	{
		class HitPoints;
		class Turrets
		{
			class MainTurret: NewTurret{};
		};
		class AnimationSources;
	};
	class Pickup_PK_base: Car
	{
		displayName = "$STR_DN_ADD_DATSUN_MG";
		model = "\ca\wheeled\datsun_armed\datsun_PK";
		scope = 0;
		wheelCircumference = 2.199;
		Picture = "\Ca\wheeled\data\ico\datsun_PK_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_datsun_PK_CA.paa";
		mapSize = 5;
		maxSpeed = 150;
		turnCoef = 2.5;
		steerAheadPlan = 0.15;
		terrainCoef = 4.0;
		soundGear[] = {"",0.0005623413,1};
		SoundGetIn[] = {"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",0.25118864,1};
		SoundGetOut[] = {"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",0.25118864,1,30};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-start-1",0.31622776,1.0};
		soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-start-1",0.31622776,1.0,200};
		soundEngineOffInt[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-stop-1",0.31622776,1.0};
		soundEngineOffExt[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-stop-1",0.31622776,1.0,200};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.70794576,1,200};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.70794576,1,200};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.70794576,1,200};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.70794576,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.70794576,1,200};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.70794576,1,200};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.70794576,1,200};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.70794576,1,200};
		WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.70794576,1,200};
		WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.70794576,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.70794576,1,200};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.70794576,1,200};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.70794576,1,200};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.70794576,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-acce-1",0.31622776,1.0};
				limit = "0.7";
				expression = "(engineOn*(1-camPos))*gmeterZ*(speed factor[2.5, 4])";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-acce-1",0.31622776,1.0,250};
				limit = "0.7";
				expression = "(engineOn*camPos)*gmeterZ*(speed factor[2.5, 4])";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-low-1",0.39810717,1.0,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.21, 0.5]) min (rpm factor[0.7, 0.3]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-high-2",0.39810717,1.0,400};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.85])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-idle-5",0.2238721,1.0,200};
				frequency = "1";
				volume = "camPos*engineOn*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-noise",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-low-1",0.56234133,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.7, 0.3]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-high-2",0.56234133,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.56, 0.8])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-idle-5",0.39810717,1.0};
				frequency = "1";
				volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0])";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-noise-1",0.31622776,1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
		class TransportMagazines{};
		transportSoldier = 3;
		unitInfoType = "UnitInfoSoldier";
		driverAction = "datsun_driver";
		cargoAction[] = {"Hilux_cargo01","datsun_cargo02","MH6_Cargo03"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1"};
		gunnerOpticsShowCursor = 1;
		threat[] = {0.6,0.4,0.1};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "PKT";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "PKT";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "PKT";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				outGunnerMayFire = 1;
				forceHideGunner = 1;
				castGunnerShadow = 1;
				viewGunnerInExternal = 1;
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				gunnerForceOptics = 0;
				weapons[] = {"PKT"};
				soundServo[] = {};
				stabilizedInAxes = 0;
				magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
				gunnerAction = "datsun_Gunner01";
				gunnerInAction = "datsun_Gunner01";
				ejectDeadGunner = 1;
				minElev = -18;
				maxElev = 40;
				minTurn = -45;
				maxTurn = 45;
				initTurn = 0;
				gunnerCompartments = "Compartment2";
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_DATSUN";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_armed.rvmat","ca\wheeled\hilux_armed\data\detailmapy\coyota_armed_destruct.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk_destruct.rvmat","ca\weapons\data\tripod_dshk.rvmat","ca\weapons\data\tripod_dshk.rvmat","ca\wheeled\hilux_armed\data\detailmapy\tripod_dshk_destruct.rvmat","ca\weapons\data\pkm.rvmat","ca\weapons\data\pkm.rvmat","ca\weapons\data\pkm_destruct.rvmat","ca\wheeled\data\detailmapy\datsun_interier.rvmat","ca\wheeled\data\detailmapy\datsun_interier.rvmat","ca\wheeled\data\detailmapy\datsun_interier_destruct.rvmat","ca\wheeled\datsun_armed\data\detailmapy\datsun_trup.rvmat","ca\wheeled\datsun_armed\data\detailmapy\datsun_trup.rvmat","ca\wheeled\datsun_armed\data\detailmapy\datsun_trup_destruct.rvmat","ca\wheeled\datsun_armed\data\detailmapy\datsun_trup_b.rvmat","ca\wheeled\datsun_armed\data\detailmapy\datsun_trup_b.rvmat","ca\wheeled\datsun_armed\data\detailmapy\datsun_trupb_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
		};
		hiddenSelections[] = {"Camo"};
	};
};
//};
