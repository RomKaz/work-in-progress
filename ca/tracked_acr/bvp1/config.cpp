////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:27 2014 : Source 'file' date Fri Oct 31 06:06:27 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=12
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class tracked_acr : bvp1\config.bin{
class CfgPatches
{
	class CATracked_ACR_BVP1
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CATracked_ACR"};
	};
};
class CfgVehicles
{
	class BMP2_Base;
	class BVP1_BASE: BMP2_Base
	{
		class NewTurret;
		scope = 0;
		side = 0;
		type = 1;
		faction = "INS";
		vehicleClass = "Armored";
		displayName = "$STR_ACR_DN_BVP1";
		class Library
		{
			libTextDesc = "$STR_ACR_LIB_BVP1";
		};
		crew = "Ins_Soldier_Crew";
		typicalCargo[] = {"Ins_Soldier_Crew","Ins_Soldier_Crew","Ins_Soldier_Crew","Ins_Soldier_AT","Ins_Soldier_MG","Ins_Soldier_1"};
		nameSound = "BMP";
		model = "\ca\tracked_ACR\BVP1\bvp1.p3d";
		accuracy = 0.3;
		armor = 250;
		damageResistance = 0.02362;
		canBeShot = 0;
		ejectDamageLimit = 0.75;
		maxSpeed = 75;
		transportSoldier = 8;
		transportAmmo = 0;
		supplyRadius = 1.7;
		memoryPointSupply = "doplnovani";
		cost = 150000;
		canFloat = 1;
		threat[] = {0.5,0.5,1};
		castDriverShadow = 1;
		castGunnerShadow = 1;
		castCargoShadow = 1;
		driverIsCommander = 0;
		cargoIsCoDriver[] = {0,0,0};
		hideWeaponsCargo = 0;
		cargoAction[] = {"Stryker_Cargo01"};
		getInAction = "GetInMedium";
		getOutAction = "GetOutMedium";
		extCameraPosition[] = {0,2.5,-9};
		driverForceOptics = 1;
		viewGunnerInExternal = 1;
		viewDriverInExternal = 1;
		hasCommander = 1;
		selectionClan = "clan";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class Reflectors
		{
			class Left
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "l svetlo";
				direction = "konec l svetla";
				hitpoint = "l svetlo";
				selection = "L svetlo";
				size = 0.35;
				brightness = 0.3;
			};
			class Right: Left
			{
				position = "p svetlo";
				direction = "konec p svetla";
				hitpoint = "p svetlo";
				selection = "P svetlo";
			};
			class SearchLight
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "S svetlo";
				direction = "konec S svetla";
				hitpoint = "S svetlo";
				selection = "S svetlo";
				size = 0.5;
				brightness = 0.6;
			};
			class TurretLight
			{
				color[] = {0.9,0.8,0.8,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "V svetlo";
				direction = "konec V svetla";
				hitpoint = "V svetlo";
				selection = "V svetlo";
				size = 0.4;
				brightness = 0.6;
			};
		};
		aggregateReflectors[] = {{ "Left","Right" },{ "SearchLight" },{ "TurretLight" }};
		armorLights = 0.01;
		class AnimationSources
		{
			class recoil
			{
				source = "reload";
				weapon = "2A28";
			};
		};
		class ViewPilot
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.95;
			minFov = 0.76;
			maxFov = 0.95;
		};
		class ViewOptics
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 45;
			initFov = 0.466;
			minFov = 0.466;
			maxFov = 0.466;
			visionMode[] = {"Normal","NVG"};
		};
		irScanRangeMin = 50;
		irScanRangeMax = 3000;
		weapons[] = {"TruckHorn"};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"2A28","AT3Launcher","PKT"};
				magazines[] = {"40rnd_PG15V","4rnd_AT3","2000Rnd_762x54_PKT"};
				soundServo[] = {"\ca\Weapons\Data\Sound\gun_elevate",0.001,1.0};
				startEngine = 0;
				minElev = -4;
				maxElev = 30;
				minTurn = -360;
				maxTurn = 360;
				gunnerAction = "BMP2_GunnerOut";
				gunnerInAction = "BMP2_Gunner";
				forceHideGunner = 0;
				viewGunnerInExternal = 1;
				gunnerForceOptics = 0;
				gunnerInForceOptics = 1;
				gunnerOpticsModel = "\ca\Tracked\optika_T72_gunner";
				gunnerOutOpticsModel = "\ca\weapons\optika_empty";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.119;
					minFov = 0.119;
					maxFov = 0.475;
					visionMode[] = {"Normal","NVG"};
				};
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 30;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.95;
					minFov = 0.475;
					maxFov = 0.95;
				};
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistanceInitIndex = 1;
				discreteDistance[] = {600};
			};
			class CommanderOptics: NewTurret
			{
				weapons[] = {"FakeWeapon"};
				magazines[] = {"FakeWeapon"};
				gunBeg = "commanderview_dir";
				gunEnd = "commanderview";
				memoryPointGun = "commanderview";
				body = "ObsTurret";
				gun = "ObsGun";
				gunnerAction = "BMP2_CommanderOUT";
				gunnerInAction = "BMP2_Commander";
				startEngine = 0;
				gunnerOpticsModel = "\ca\Tracked\optika_T72_commander";
				minElev = -4;
				maxElev = 30;
				minTurn = -360;
				maxTurn = 360;
				proxyType = "CPCommander";
				proxyIndex = 1;
				gunnerName = "$STR_POSITION_COMMANDER";
				primaryGunner = 0;
				primaryObserver = 1;
				animationSourceBody = "obsTurret";
				animationSourceGun = "obsGun";
				animationSourceHatch = "hatchCommander";
				commanding = 2;
				gunnerOutOpticsModel = "\ca\Weapons\optika_empty";
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerForceOptics = 1;
				gunnerOutForceOptics = 0;
				viewGunnerInExternal = 1;
				gunnerOutOpticsShowCursor = 1;
				memoryPointGunnerOutOptics = "commander_weapon_view";
				memoryPointGunnerOptics = "commanderview";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.237;
					minFov = 0.237;
					maxFov = 0.475;
					visionMode[] = {"Normal","NVG"};
				};
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.95;
					minFov = 0.475;
					maxFov = 0.95;
				};
				turretInfoType = "RscWeaponRangeZeroing";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\tracked_ACR\BVP1\data\trup_ext.rvmat","ca\tracked_ACR\BVP1\data\trup_damage.rvmat","ca\tracked_ACR\BVP1\data\trup_destruct.rvmat","ca\tracked_ACR\BVP1\data\veza.rvmat","ca\tracked_ACR\BVP1\data\veza_damage.rvmat","ca\tracked_ACR\BVP1\data\veza_destruct.rvmat"};
		};
	};
	class BVP1_TK_GUE_ACR: BVP1_BASE
	{
		expansion = 3;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
	};
	class BVP1_TK_ACR: BVP1_BASE
	{
		expansion = 3;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		hiddenSelections[] = {"camo1","camo2","brvno"};
		hiddenSelectionsTextures[] = {"\ca\Tracked_ACR\BVP1\data\trup_ext0_TAK_CO","\ca\Tracked_ACR\BVP1\data\veza0_TAK_CO"};
	};
};
//};
