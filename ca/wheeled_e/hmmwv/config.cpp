////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:36 2014 : Source 'file' date Fri Oct 31 06:13:36 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=4
enum {
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0
};

//Class wheeled_e : hmmwv\config.bin{
class CfgPatches
{
	class CAWheeled_E_HMMWV
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAWheeled_E","CAWheeled"};
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Car: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
	};
	class HMMWV_base: Car
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 200;
		transportMaxBackpacks = 5;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.15;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.15;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.15;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.15;
			};
			class HitFuel
			{
				armor = 0.14;
				material = -1;
				name = "fueltank";
				visual = "";
				passThrough = 1;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 1;
			};
			class HitGlass2: HitGlass2
			{
				armor = 1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 1;
			};
			class HitGlass4: HitGlass4
			{
				armor = 1;
			};
		};
		class NVGMarkers
		{
			class NVGMarker01
			{
				name = "nvg_marker";
				color[] = {0.03,0.003,0.003,1};
				ambient[] = {0.003,0.0003,0.0003,1};
				brightness = 0.001;
				blinking = 1;
			};
		};
	};
	class HMMWV_M1035_DES_EP1: HMMWV_base
	{
		expansion = 1;
		side = 1;
		scope = 2;
		model = "\ca\wheeled_e\HMMWV\M1035_transport";
		displayname = "$STR_EP1_DN_HMMWV_M1035_DES_EP1";
		transportSoldier = 3;
		transportMaxBackpacks = 4;
		Picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_transport_CA.paa";
		Icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_transport_CA.paa";
		class Turrets{};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_HMMWV_M1035_DES";
		};
		driverAction = "HMMWV_Driver_EP1";
		cargoAction[] = {"HMMWV_Cargo_EP1","HMMWV_Cargo01_EP1","HMMWV_Cargo02_EP1"};
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
		threat[] = {0.0,0.0,0.0};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\HMMWV_Canvas.rvmat","Ca\wheeled_E\HMMWV\data\HMMWV_Canvas_damage.rvmat","Ca\wheeled_E\HMMWV\data\HMMWV_Canvas_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		HiddenSelections[] = {"camo","camo1","camo2","camo3"};
		HiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_canvas_1_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_canvas_1_co.paa"};
	};
	class HMMWV_M1151_M2_DES_Base_EP1: HMMWV_base
	{
		expansion = 1;
		side = 1;
		scope = 0;
		model = "\ca\wheeled_e\HMMWV\m1151_m2_gpk";
		displayname = "$STR_EP1_DN_HMMWV_M1151_M2_DES_Base_EP1";
		threat[] = {1,0.6,0.6};
		transportSoldier = 3;
		armor = 120;
		damageResistance = 0.03099;
		Picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_m2gpk_CA.paa";
		Icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_m2gpk_CA.paa";
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_HMMWV_M1151_M2_DES";
		};
		driverAction = "HMMWV_Driver_EP1";
		cargoAction[] = {"HMMWV_Cargo_EP1","HMMWV_Cargo01_EP1","HMMWV_Cargo02_EP1"};
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"M2"};
				magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2"};
				soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1.0,10};
				minElev = -25;
				maxElev = 60;
				gunnerAction = "HMMWV_Gunner_EP1";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = "StabilizedInAxesBoth";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.455;
					minFov = 0.25;
					maxFov = 0.7;
				};
			};
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
		};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_gpk.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_gpk_tower.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_gpk_tower_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_gpk_tower_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		HiddenSelections[] = {"camo","camo1","camo2","camo3"};
		HiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_1_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_regular_1_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_gpk_tower_co.paa"};
	};
	class HMMWV_M1151_M2_CZ_DES_EP1: HMMWV_M1151_M2_DES_Base_EP1
	{
		scope = 2;
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1","CZ_Soldier_DES_EP1"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_gpk_tower.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_gpk_tower_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_gpk_tower_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class HMMWV_M1151_M2_DES_EP1: HMMWV_M1151_M2_DES_Base_EP1
	{
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
	};
	class HMMWV_M998_crows_M2_DES_EP1: HMMWV_base
	{
		expansion = 1;
		side = 1;
		scope = 2;
		model = "\ca\wheeled_e\HMMWV\M998_crows";
		displayname = "$STR_EP1_DN_HMMWV_M998_crows_M2_DES_EP1";
		transportSoldier = 2;
		transportMaxBackpacks = 4;
		armor = 100;
		damageResistance = 0.03719;
		threat[] = {1,0.6,0.6};
		Picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_crows_CA.paa";
		Icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_crows_CA.paa";
		driverAction = "HMMWV_Driver_EP1";
		cargoAction[] = {"HMMWV_Cargo_EP1","HMMWV_Cargo02_EP1"};
		cargoIsCoDriver[] = {1,0};
		radarType = 4;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"M2BC","SmokeLauncher"};
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
				minElev = -25;
				maxElev = 60;
				viewGunnerInExternal = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 60;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 0.3;
					minFov = 0.015;
					maxFov = 0.3;
					visionMode[] = {"Normal","NVG","Ti"};
					thermalMode[] = {0,1};
				};
				gunnerAction = "HMMWV_Gunner04_EP1";
				gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
				gunnerForceOptics = 1;
				stabilizedInAxes = "StabilizedInAxesBoth";
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M2BC";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M2BC";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M2BC";
			};
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_HMMWV_M998_crows_M2_DES";
		};
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_2.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_2_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_2_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		HiddenSelections[] = {"camo","camo1","camo2"};
		HiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_1_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_regular_2_co.paa"};
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 8;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
	};
	class HMMWV_M998_crows_MK19_DES_EP1: HMMWV_base
	{
		expansion = 1;
		side = 1;
		scope = 2;
		model = "\ca\wheeled_e\HMMWV\M998_crows_Mk19";
		displayname = "$STR_EP1_DN_HMMWV_M998_crows_MK19_DES_EP1";
		transportSoldier = 2;
		transportMaxBackpacks = 4;
		threat[] = {1,0.6,0.6};
		Picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_crows_CA.paa";
		Icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_crows_CA.paa";
		driverAction = "HMMWV_Driver_EP1";
		cargoAction[] = {"HMMWV_Cargo_EP1","HMMWV_Cargo02_EP1"};
		cargoIsCoDriver[] = {1,0};
		radarType = 4;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"MK19","SmokeLauncher"};
				magazines[] = {"48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
				soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1.0,10};
				viewGunnerInExternal = 0;
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600};
				discreteDistanceInitIndex = 2;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 60;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 0.3;
					minFov = 0.015;
					maxFov = 0.3;
					visionMode[] = {"Normal","Ti","NVG"};
					thermalMode[] = {0,1};
				};
				gunnerAction = "HMMWV_Gunner04_EP1";
				gunnerOpticsModel = "\ca\Weapons\2Dscope_RWS";
				gunnerForceOptics = 1;
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				stabilizedInAxes = "StabilizedInAxesBoth";
			};
		};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_HMMWV_M998_crows_MK19_DES";
		};
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_2.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_2_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_2_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		HiddenSelections[] = {"camo","camo1","camo2"};
		HiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_1_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_regular_2_co.paa"};
		smokeLauncherGrenadeCount = 4;
		smokeLauncherVelocity = 8;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
	};
	class HMMWV_M998A2_SOV_DES_EP1: HMMWV_base
	{
		expansion = 1;
		side = 1;
		scope = 2;
		transportSoldier = 4;
		transportMaxBackpacks = 7;
		model = "\ca\wheeled_e\HMMWV\M998A2_sov";
		displayname = "$STR_EP1_DN_HMMWV_M998A2_SOV_DES_EP1";
		armor = 40;
		damageResistance = 0.00581;
		threat[] = {1,0.3,0.3};
		Picture = "\CA\wheeled_e\Data\UI\Picture_hmmwv_sov_CA.paa";
		Icon = "\CA\wheeled_e\Data\UI\Icon_hmmwv_sov_CA.paa";
		driverAction = "HMMWV_Driver_EP1";
		cargoAction[] = {"HMMWV_Cargo01_EP1","HMMWV_Cargo02_EP1","HMMWV_Cargo03_EP1","HMMWV_Cargo04_EP1"};
		outsideSoundFilter = 0;
		insideSoundCoef = 1;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\get_in2",0.56234133,1};
		soundGetOut[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\get_in2",0.56234133,1,20};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\HMMWV\int\int-engine_start1",0.17782794,1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\engine_ON1",0.17782794,1.0,100};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\HMMWV\int\int-engine_off2",0.17782794,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\HMMWV\ext\engine_OFF2",0.17782794,1.0,100};
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\int-acceleration1",0.1,1.0};
				limit = "0.8";
				expression = "(engineOn*(1-camPos))*gmeterZ";
			};
			class AccelerationOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\turspecial1",0.1,1.0,200};
				limit = "0.8";
				expression = "(engineOn*camPos)*gmeterZ";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_Low_1b",1.0,1.0,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.15, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_High_1b",1.0,1.0,400};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\idle_2",0.56234133,1.0,100};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.3, 0])";
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",0.31622776,1.0,30};
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
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_Low_1b",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.8, 0.6]))";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_High_1b",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 1.0])";
			};
			class IdleIn
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\idle_2",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.4466836,1.0};
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
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"MK19"};
				magazines[] = {"48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19"};
				soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1.0,10};
				gunnerAction = "HMMWV_Gunner03_EP1";
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				commanding = 0;
				primaryGunner = 0;
				primaryObserver = 0;
				LODTurnedOut = 1000;
				LODTurnedIn = 1000;
			};
			class SideTurret: MainTurret
			{
				gunnerName = "$STR_POSITION_FRONTGUNNER";
				weapons[] = {"M240_veh"};
				magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240"};
				soundServo[] = {"\ca\wheeled\Data\Sound\servo3",0.0001,1.1};
				gunnerAction = "HMMWV_Gunner02_EP1";
				commanding = 1;
				primaryGunner = 1;
				primaryObserver = 1;
				proxyIndex = 2;
				minElev = -18;
				maxElev = 20;
				minTurn = -65;
				maxTurn = 35;
				gunBeg = "usti hlavne_2";
				gunEnd = "konec hlavne_2";
				body = "SideTurret";
				gun = "SideGun";
				memoryPointGunnerOptics = "gunnerview_2";
				animationSourceBody = "SideTurret";
				animationSourceGun = "SideGun";
				LODTurnedOut = 1200;
				LODTurnedIn = 1200;
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M240_veh";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M240_veh";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M240_veh";
			};
		};
		faction = "BIS_US";
		crew = "US_Delta_Force_EP1";
		typicalCargo[] = {"US_Delta_Force_EP1","US_Delta_Force_EP1","US_Delta_Force_EP1"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_glass.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_glass_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_hood_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_regular_1_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		HiddenSelections[] = {"camo","camo1","camo2"};
		HiddenSelectionsTextures[] = {"ca\wheeled_e\hmmwv\data\hmmwv_body_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_hood_canvas_co.paa","ca\wheeled_e\hmmwv\data\hmmwv_regular_1_co.paa"};
	};
	class HMMWV: HMMWV_base
	{
		transportMaxBackpacks = 4;
		model = "ca\wheeled_E\HMMWV\HMMWV";
	};
	class HMMWV_MK19: HMMWV_base
	{
		model = "ca\wheeled_E\HMMWV\HMMWVmk19";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "Mk19";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "Mk19";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "Mk19";
			};
		};
	};
	class HMMWV_TOW: HMMWV_base
	{
		model = "\ca\wheeled_E\HMMWV\HMMWVTOW";
		radarType = 4;
		class ViewOptics;
	};
	class HMMWV_TOW_DES_EP1: HMMWV_TOW
	{
		scope = 2;
		expansion = 1;
		faction = "BIS_US";
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_2.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_in_BASE.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsModel = "\ca\weapons_e\TOW_TI";
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				class ViewOptics: ViewOptics
				{
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
				};
			};
		};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa","\CA\wheeled_E\HMMWV\Data\tow_US_CO.paa"};
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
	};
	class HMMWV_Terminal_EP1: HMMWV_base
	{
		scope = 2;
		expansion = 1;
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		accuracy = 0.32;
		model = "\CA\wheeled_E\HMMWV\M998_Terminal.p3d";
		picture = "\Ca\wheeled\data\ico\HMMWV_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_hmwv_CA.paa";
		mapSize = 5;
		displayName = "$STR_EP1_DN_HMMWV_Terminal_EP1";
		driverAction = "HMMWV_Driver_EP1";
		cargoAction[] = {"HMMWV_Cargo_EP1"};
		transportSoldier = 1;
		transportMaxBackpacks = 2;
		cargoIsCoDriver[] = {1,0};
		threat[] = {0.0,0.0,0.0};
		class Turrets{};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_2.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class HMMWV_Ambulance: HMMWV_base
	{
		transportMaxBackpacks = 6;
	};
	class HMMWV_Ambulance_Base: HMMWV_Ambulance
	{
		model = "\Ca\wheeled_E\HMMWV\M997A2_Ambulance";
	};
	class HMMWV_Avenger: HMMWV_base
	{
		transportMaxBackpacks = 3;
	};
};
//};
