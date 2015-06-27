////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:57 2014 : Source 'file' date Fri Oct 31 06:04:57 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : ARTY\config.bin{
class CfgPatches
{
	class CA_Modules_ARTY
	{
		units[] = {"BIS_ARTY_Logic","BIS_ARTY_Virtual_Artillery"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData","CAWeapons","CAData_ParticleEffects","CAWheeled","CAWeapons_M252_81mm_Mortar","CAWeapons_2b14_82mm_Mortar","CATracked2_us_m270mlrs"};
	};
};
class RscTitles
{
	class RscArtyText
	{
		idc = -1;
		access = 0;
		type = 0;
		style = 0;
		font = "TahomaB";
		colorText[] = {0.4902,0.698,0.4941,1.0};
		colorBackground[] = {0,0,0,0};
		sizeEx = 0.03;
		text = "";
		shadow = 0;
	};
	class RscArtyMap
	{
		idc = -1;
		type = 101;
		style = 48;
		x = 0;
		y = 0;
		w = 1;
		h = 1;
		colorBackground[] = {1.0,1.0,1.0,1.0};
		colorText[] = {0.0,0.0,0.0,1.0};
		colorSea[] = {0.56,0.8,0.98,0.5};
		colorForest[] = {0.6,0.8,0.2,0.5};
		colorRocks[] = {0.5,0.5,0.5,0.5};
		colorCountlines[] = {0.65,0.45,0.27,0.5};
		colorMainCountlines[] = {0.65,0.45,0.27,1.0};
		colorCountlinesWater[] = {0.0,0.53,1.0,0.5};
		colorMainCountlinesWater[] = {0.0,0.53,1.0,1.0};
		colorForestBorder[] = {0.4,0.8,0.0,1.0};
		colorRocksBorder[] = {0.5,0.5,0.5,1.0};
		colorPowerLines[] = {0.0,0.0,0.0,1.0};
		colorNames[] = {0.0,0.0,0.0,1.0};
		colorInactive[] = {1.0,1.0,1.0,0.5};
		colorLevels[] = {0.0,0.0,0.0,1.0};
		colorRailWay[] = {0.0,0.0,0.0,1.0};
		colorOutside[] = {0.0,0.0,0.0,1.0};
		font = "TahomaB";
		sizeEx = 0.04;
		stickX[] = {0.2,{ "Gamma",1.0,1.5 }};
		stickY[] = {0.2,{ "Gamma",1.0,1.5 }};
		ptsPerSquareSea = 6;
		ptsPerSquareTxt = 8;
		ptsPerSquareCLn = 8;
		ptsPerSquareExp = 8;
		ptsPerSquareCost = 8;
		ptsPerSquareFor = "4.0f";
		ptsPerSquareForEdge = "10.0f";
		ptsPerSquareRoad = 2;
		ptsPerSquareObj = 10;
		fontLabel = "Zeppelin32";
		sizeExLabel = 0.034;
		fontGrid = "Zeppelin32";
		sizeExGrid = 0.034;
		fontUnits = "Zeppelin32";
		sizeExUnits = 0.034;
		fontNames = "Zeppelin32";
		sizeExNames = 0.056;
		fontInfo = "Zeppelin32";
		sizeExInfo = 0.034;
		fontLevel = "Zeppelin32";
		sizeExLevel = 0.034;
		text = "";
		maxSatelliteAlpha = 0;
		alphaFadeStartScale = 1.0;
		alphaFadeEndScale = 1.1;
		showCountourInterval = 2;
		scaleDefault = 0.1;
		onMouseButtonClick = "";
		onMouseButtonDblClick = "";
		class CustomMark
		{
			icon = "\ca\ui\data\map_waypoint_ca.paa";
			color[] = {0,0,1,1};
			size = 18;
			importance = 1;
			coefMin = 1;
			coefMax = 1;
		};
		class Legend
		{
			x = -1;
			y = -1;
			w = 0.34;
			h = 0.152;
			font = "Zeppelin32";
			sizeEx = 0.03921;
			colorBackground[] = {0.906,0.901,0.88,0.8};
			color[] = {0,0,0,1};
		};
		class Bunker
		{
			icon = "\ca\ui\data\map_bunker_ca.paa";
			color[] = {0,0.9,0,1};
			size = 14;
			importance = "1.5 * 14 * 0.05";
			coefMin = 0.25;
			coefMax = 4;
		};
		class Bush
		{
			icon = "\ca\ui\data\map_bush_ca.paa";
			color[] = {0.55,0.64,0.43,1};
			size = 14;
			importance = "0.2 * 14 * 0.05";
			coefMin = 0.25;
			coefMax = 4;
		};
		class BusStop
		{
			icon = "\ca\ui\data\map_busstop_ca.paa";
			color[] = {0,0,1,1};
			size = 10;
			importance = "1 * 10 * 0.05";
			coefMin = 0.25;
			coefMax = 4;
		};
		class Command
		{
			icon = "\ca\ui\data\map_waypoint_ca.paa";
			color[] = {0,0.9,0,1};
			size = 18;
			importance = 1;
			coefMin = 1;
			coefMax = 1;
		};
		class Cross
		{
			icon = "\ca\ui\data\map_cross_ca.paa";
			color[] = {0,0.9,0,1};
			size = 16;
			importance = "0.7 * 16 * 0.05";
			coefMin = 0.25;
			coefMax = 4;
		};
		class Fortress
		{
			icon = "\ca\ui\data\map_bunker_ca.paa";
			color[] = {0,0.9,0,1};
			size = 16;
			importance = "2 * 16 * 0.05";
			coefMin = 0.25;
			coefMax = 4;
		};
		class Fuelstation
		{
			icon = "\ca\ui\data\map_fuelstation_ca.paa";
			color[] = {0,0.9,0,1};
			size = 16;
			importance = "2 * 16 * 0.05";
			coefMin = 0.75;
			coefMax = 4;
		};
		class Fountain
		{
			icon = "\ca\ui\data\map_fountain_ca.paa";
			color[] = {0,0.35,0.7,1};
			size = 12;
			importance = "1 * 12 * 0.05";
			coefMin = 0.25;
			coefMax = 4;
		};
		class Hospital
		{
			icon = "\ca\ui\data\map_hospital_ca.paa";
			color[] = {0.78,0,0.05,1};
			size = 16;
			importance = "2 * 16 * 0.05";
			coefMin = 0.5;
			coefMax = 4;
		};
		class Chapel
		{
			icon = "\ca\ui\data\map_chapel_ca.paa";
			color[] = {0,0.9,0,1};
			size = 16;
			importance = "1 * 16 * 0.05";
			coefMin = 0.9;
			coefMax = 4;
		};
		class Church
		{
			icon = "\ca\ui\data\map_church_ca.paa";
			color[] = {0,0.9,0,1};
			size = 16;
			importance = "2 * 16 * 0.05";
			coefMin = 0.9;
			coefMax = 4;
		};
		class Lighthouse
		{
			icon = "\ca\ui\data\map_lighthouse_ca.paa";
			color[] = {0.78,0,0.05,1};
			size = 20;
			importance = "3 * 16 * 0.05";
			coefMin = 0.9;
			coefMax = 4;
		};
		class Quay
		{
			icon = "\ca\ui\data\map_quay_ca.paa";
			color[] = {0,0.9,0,1};
			size = 16;
			importance = "2 * 16 * 0.05";
			coefMin = 0.5;
			coefMax = 4;
		};
		class Rock
		{
			icon = "\ca\ui\data\map_rock_ca.paa";
			color[] = {0,0.9,0,1};
			size = 12;
			importance = "0.5 * 12 * 0.05";
			coefMin = 0.25;
			coefMax = 4;
		};
		class Ruin
		{
			icon = "\ca\ui\data\map_ruin_ca.paa";
			color[] = {0.78,0,0.05,1};
			size = 16;
			importance = "1.2 * 16 * 0.05";
			coefMin = 1;
			coefMax = 4;
		};
		class SmallTree
		{
			icon = "\ca\ui\data\map_smalltree_ca.paa";
			color[] = {0.55,0.64,0.43,1};
			size = 12;
			importance = "0.6 * 12 * 0.05";
			coefMin = 0.25;
			coefMax = 4;
		};
		class Stack
		{
			icon = "\ca\ui\data\map_stack_ca.paa";
			color[] = {0,0.9,0,1};
			size = 20;
			importance = "2 * 16 * 0.05";
			coefMin = 0.9;
			coefMax = 4;
		};
		class Tree
		{
			icon = "\ca\ui\data\map_tree_ca.paa";
			color[] = {0.55,0.64,0.43,1};
			size = 12;
			importance = "0.9 * 16 * 0.05";
			coefMin = 0.25;
			coefMax = 4;
		};
		class Tourism
		{
			icon = "\ca\ui\data\map_tourism_ca.paa";
			color[] = {0.78,0,0.05,1};
			size = 16;
			importance = "1 * 16 * 0.05";
			coefMin = 0.7;
			coefMax = 4;
		};
		class Transmitter
		{
			icon = "\ca\ui\data\map_transmitter_ca.paa";
			color[] = {0,0.9,0,1};
			size = 20;
			importance = "2 * 16 * 0.05";
			coefMin = 0.9;
			coefMax = 4;
		};
		class ViewTower
		{
			icon = "\ca\ui\data\map_viewtower_ca.paa";
			color[] = {0,0.9,0,1};
			size = 16;
			importance = "2.5 * 16 * 0.05";
			coefMin = 0.5;
			coefMax = 4;
		};
		class Watertower
		{
			icon = "\ca\ui\data\map_watertower_ca.paa";
			color[] = {0,0.35,0.7,1};
			size = 32;
			importance = "1.2 * 16 * 0.05";
			coefMin = 0.9;
			coefMax = 4;
		};
		class Waypoint
		{
			icon = "\ca\ui\data\map_waypoint_ca.paa";
			size = 20;
			color[] = {0,0.9,0,1};
			importance = "1.2 * 16 * 0.05";
			coefMin = 0.9;
			coefMax = 4;
		};
		class Task
		{
			icon = "\ca\ui\data\map_waypoint_ca.paa";
			size = 20;
			color[] = {0,0.9,0,1};
			importance = "1.2 * 16 * 0.05";
			coefMin = 0.9;
			coefMax = 4;
			iconCreated = "\ca\ui\data\map_waypoint_ca.paa";
			iconCanceled = "\ca\ui\data\map_waypoint_ca.paa";
			iconDone = "\ca\ui\data\map_waypoint_ca.paa";
			iconFailed = "\ca\ui\data\map_waypoint_ca.paa";
			colorCreated[] = {0,0.9,0,1};
			colorCanceled[] = {0,0.9,0,1};
			colorDone[] = {0,0.9,0,1};
			colorFailed[] = {0,0.9,0,1};
		};
		class WaypointCompleted
		{
			icon = "\ca\ui\data\map_waypoint_completed_ca.paa";
			size = 20;
			color[] = {0,0.9,0,1};
			importance = "1.2 * 16 * 0.05";
			coefMin = 0.9;
			coefMax = 4;
		};
		class ActiveMarker
		{
			icon = "\ca\ui\data\map_waypoint_completed_ca.paa";
			size = 20;
			color[] = {0,0.9,0,1};
			importance = "1.2 * 16 * 0.05";
			coefMin = 0.9;
			coefMax = 4;
		};
	};
	class RscArtyDialog
	{
		idd = 71001;
		onLoad = "uiNamespace setVariable [""ArtyDisplay"", _this select 0];";
		movingEnable = "false";
		duration = 100000;
		fadein = 0;
		fadeout = 0;
		name = "RscArtyDialog";
		controlsBackground[] = {"Frame","mapBackground","map"};
		controls[] = {"AzimuthText","ElevationText","AzimuthLabel","ElevationLabel","MagazineText"};
		shadow = 0;
		class Frame: RscArtyText
		{
			idc = 71008;
			w = "SafeZoneW - 0.58";
			h = 0.56;
			x = "SafeZoneX + 0.29";
			y = "SafeZoneY + 0.016";
			colorbackground[] = {0.1882,0.2588,0.149,0.76};
			style = 128;
		};
		class AzimuthLabel: RscArtyText
		{
			idc = 71006;
			x = 0.411;
			y = "SafeZoneY + 0.017";
			w = 0.12;
			h = 0.05;
			text = "$STR_ARTY_PlayerInterface_AZIMUTH";
		};
		class ElevationLabel: RscArtyText
		{
			idc = 71005;
			x = 0.251;
			y = "0.017 + SafeZoneY";
			w = 0.12;
			h = 0.05;
			text = "$STR_ARTY_PlayerInterface_ELEVATION";
		};
		class AzimuthText: RscArtyText
		{
			idc = 71004;
			x = 0.496;
			y = "SafeZoneY + 0.017";
			w = 0.12;
			h = 0.05;
			text = "0000";
		};
		class ElevationText: RscArtyText
		{
			idc = 71003;
			x = 0.341;
			y = "SafeZoneY + 0.017";
			w = 0.12;
			h = 0.05;
			text = "0000";
		};
		class MagazineText: RscArtyText
		{
			idc = 71007;
			x = 0.563;
			y = "SafeZoneY + 0.017";
			w = 0.15;
			h = 0.05;
			text = "";
		};
		class RscText;
		class mapBackground: RscText
		{
			idc = -1;
			x = "SafeZoneX + 0.3";
			y = "SafeZoneY + 0.066";
			w = "SafeZoneW - 0.6";
			h = 0.5;
			text = "";
			sizeEx = 0.03;
			colorText[] = {1,1,1,1};
			colorbackground[] = {1,1,1,1};
			type = 0;
			style = 0;
			font = "TahomaB";
			shadow = 0;
		};
		class map: RscArtyMap
		{
			idc = 71002;
			x = "SafeZoneX + 0.3";
			y = "SafeZoneY + 0.066";
			w = "SafeZoneW - 0.6";
			h = 0.5;
			sizeEx = 0.1;
			fontLabel = "TahomaB";
			sizeExLabel = 0.045;
			fontGrid = "TahomaB";
			sizeExGrid = 0.042;
			fontUnits = "TahomaB";
			sizeExUnits = 0.042;
			fontNames = "TahomaB";
			sizeExNames = 0.045;
			fontInfo = "TahomaB";
			sizeExInfo = 0.045;
			fontLevel = "TahomaB";
			sizeExLevel = 0.045;
			shadow = 0;
		};
	};
};
class CfgCloudlets
{
	class Default;
	class ARTY_ExplosionStreamersSmall: Default
	{
		interval = 0.015;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 0;
		particleFSFrameCount = 3;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.05;
		lifeTime = 0.5;
		moveVelocity[] = {0,37,0};
		rotationVelocity = 1;
		weight = 2;
		volume = 2.9;
		rubbing = 0;
		size[] = {0.1};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "\CA\Modules\ARTY\data\fx\scripts\impactCloudSmall.sqf";
		beforeDestroyScript = "\CA\Modules\ARTY\data\fx\scripts\impactCloudSmall.sqf";
		lifeTimeVar = 1;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {32,10,32};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0.2;
		randomDirectionIntensityVar = 0.2;
	};
	class ARTY_ExplosionStreamersMedium: Default
	{
		interval = 0.015;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 0;
		particleFSFrameCount = 3;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.05;
		lifeTime = 0.5;
		moveVelocity[] = {0,40,0};
		rotationVelocity = 1;
		weight = 2;
		volume = 2.9;
		rubbing = 0;
		size[] = {0.1};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "\CA\Modules\ARTY\data\fx\scripts\impactCloudMedium.sqf";
		beforeDestroyScript = "\CA\Modules\ARTY\data\fx\scripts\impactCloudMedium.sqf";
		lifeTimeVar = 1;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {27,10,27};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ARTY_ExplosionStreamersLarge: Default
	{
		interval = 0.015;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 0;
		particleFSFrameCount = 3;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.05;
		lifeTime = 0.6;
		moveVelocity[] = {0,40,0};
		rotationVelocity = 1;
		weight = 2;
		volume = 2.9;
		rubbing = 0;
		size[] = {0.1};
		color[] = {{ 1,1,1,1 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "\CA\Modules\ARTY\data\fx\scripts\impactCloudLarge.sqf";
		beforeDestroyScript = "\CA\Modules\ARTY\data\fx\scripts\impactCloudLarge.sqf";
		lifeTimeVar = 1;
		positionVar[] = {1,1,1};
		MoveVelocityVar[] = {35,10,35};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ARTY_ExplosionFireball: Default
	{
		interval = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 0;
		particleFSFrameCount = 32;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.8;
		moveVelocity[] = {0,0.01,0};
		rotationVelocity = 1;
		weight = 10;
		volume = 7.9;
		rubbing = 0.1;
		size[] = {"0.0125 * intensity + 9"};
		color[] = {{ 1,1,1,-2 },{ 1,1,1,0 }};
		animationSpeed[] = {1};
		randomDirectionPeriod = 0.2;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0;
		positionVar[] = {0.1,0.1,0.1};
		MoveVelocityVar[] = {0.1,0.2,0.1};
		rotationVelocityVar = 1;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class ARTY_ExplosionSmoke: Default
	{
		interval = "0.02 * interval + 0.01";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\ca\Data\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 2;
		lifeTime = 20;
		moveVelocity[] = {0.3,2,0.3};
		rotationVelocity = 1;
		weight = 9.3;
		volume = 7.1;
		rubbing = 0.1;
		size[] = {"0.0125 * intensity + 8","0.0125 * intensity + 12","0.0125 * intensity + 15","0.125 * intensity + 18"};
		color[] = {{ 0.5,0.5,0.5,0.7 },{ 0.4,0.4,0.4,0.7 },{ 1,1,1,0 }};
		animationSpeed[] = {0.25};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 2;
		positionVar[] = {1.2,1.2,1.2};
		MoveVelocityVar[] = {1.5,2,1.5};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 1;
		randomDirectionIntensityVar = 0.2;
	};
	class ARTY_ExplosionWhiteSmoke1: ARTY_ExplosionSmoke
	{
		animationSpeedCoef = 1;
		colorCoef[] = {"colorR","colorG","colorB","colorA"};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = 0.02;
		weight = 9.295;
		volume = 7.3;
		rubbing = 0.05;
		lifeTime = "75";
		moveVelocity[] = {0.9,0.2,0.9};
		size[] = {1,12,32,34,38,40};
		color[] = {{ 1,1,1,0.2 },{ 0.9,0.9,0.9,0.02 },{ 1,1,1,0 }};
		lifeTimeVar = 2;
		positionVar[] = {1.5,1.5,1.5};
		MoveVelocityVar[] = {1.5,0.5,1.5};
		rotationVelocityVar = 1;
		sizeVar = 0.5;
		colorVar[] = {0,0,0,0.3};
		randomDirectionPeriodVar = 1;
		randomDirectionIntensityVar = 0.12;
	};
	class ARTY_ExplosionWhiteSmoke2: ARTY_ExplosionWhiteSmoke1
	{
		particleFSNtieth = 16;
		particleFSIndex = 12;
		lifeTime = "55";
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		size[] = {1,9,20,24,28,32};
		color[] = {{ 1,1,1,1 },{ 0.9,0.9,0.9,0.9 },{ 0.9,0.9,0.9,0.8 },{ 0.9,0.9,0.9,0.7 },{ 1,1,1,0 }};
	};
};
class ARTY_ShellExplosionSmall
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.002;
		interval = 1;
		lifeTime = 1;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ARTY_ExplosionFireball";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Streamers
	{
		simulation = "particles";
		type = "ARTY_ExplosionStreamersSmall";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke1
	{
		simulation = "particles";
		type = "ARTY_ExplosionSmoke";
		position[] = {0,0,0};
		intensity = 0.75;
		interval = 1;
		lifeTime = 1.75;
	};
};
class ARTY_ShellExplosionMedium
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.005;
		interval = 1;
		lifeTime = 1;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ARTY_ExplosionFireball";
		position[] = {0,0,0};
		intensity = 1.5;
		interval = 1;
		lifeTime = 1;
	};
	class Streamers
	{
		simulation = "particles";
		type = "ARTY_ExplosionStreamersMedium";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke1
	{
		simulation = "particles";
		type = "ARTY_ExplosionSmoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 2;
	};
};
class ARTY_ShellExplosionLarge
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0,0,0};
		intensity = 0.008;
		interval = 1;
		lifeTime = 1;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ARTY_ExplosionFireball";
		position[] = {0,0,0};
		intensity = 2.2;
		interval = 1;
		lifeTime = 1;
	};
	class Streamers
	{
		simulation = "particles";
		type = "ARTY_ExplosionStreamersLarge";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke1
	{
		simulation = "particles";
		type = "ARTY_ExplosionSmoke";
		position[] = {0,0,0};
		intensity = 1.5;
		interval = 1;
		lifeTime = 2;
	};
};
class ARTY_SmokeExplosionMedium
{
	class Smoke1
	{
		simulation = "particles";
		type = "ARTY_ExplosionWhiteSmoke1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 0.2;
		lifeTime = 1;
	};
	class Smoke2
	{
		simulation = "particles";
		type = "ARTY_ExplosionWhiteSmoke2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 0.2;
		lifeTime = 1;
	};
};
class CfgVehicles
{
	class Logic;
	class BIS_ARTY_Logic: Logic
	{
		displayName = "$STR_ARTY_NAME";
		icon = "\ca\modules\ARTY\data\ui\icon_ARTY_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "_script = _this execVM '\ca\modules\arty\data\scripts\init.sqf'";
		};
	};
	class BIS_ARTY_Virtual_Artillery: Logic
	{
		scope = 2;
		displayName = "$STR_ARTYVP_NAME";
		icon = "\ca\modules\ARTY\data\ui\icon_ARTY_virtual_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "_script = _this execVM '\ca\modules\arty\data\scripts\ARTY_initVirtual.sqf'";
		};
	};
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		class Turrets;
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class StaticCannon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Car: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Truck: Car{};
	class Ural_Base_withTurret: Truck
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Tank: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class MLRS: Tank
	{
		ARTY_MissionPrep[] = {"\ca\modules\arty\data\scripts\missionprep\ARTY_mobileMissionPrep.sqf"};
		ARTY_MissionFinish[] = {"\ca\modules\arty\data\scripts\missionprep\ARTY_mobileMissionFinish.sqf"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"12Rnd_MLRS"};
			};
		};
		ARTY_IsArtyVehicle = 1;
	};
	class GRAD_Base: Ural_Base_withTurret
	{
		ARTY_MissionPrep[] = {"\ca\modules\arty\data\scripts\missionprep\ARTY_mobileMissionPrep.sqf"};
		ARTY_MissionFinish[] = {"\ca\modules\arty\data\scripts\missionprep\ARTY_mobileMissionFinish.sqf"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"40Rnd_GRAD"};
			};
		};
		ARTY_IsArtyVehicle = 1;
	};
	class D30_Base: StaticCannon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"ARTY_30Rnd_122mmHE_D30"};
			};
		};
		ARTY_IsArtyVehicle = 1;
	};
	class M119: StaticCannon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"ARTY_30Rnd_105mmHE_M119"};
			};
		};
		ARTY_IsArtyVehicle = 1;
	};
	class M252: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"ARTY_8Rnd_81mmHE_M252"};
			};
		};
		ARTY_IsArtyVehicle = 1;
	};
	class 2b14_82mm: StaticMortar
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"ARTY_8Rnd_82mmHE_2B14"};
			};
		};
		ARTY_IsArtyVehicle = 1;
	};
};
class CfgAmmo
{
	class ShellBase;
	class RocketBase;
	class R_GRAD;
	class R_MLRS;
	class ARTY_Sh_Base: ShellBase
	{
		ARTY_IncomingSounds[] = {};
		ARTY_IncomingSoundAlt = 200;
		ARTY_IncomingSoundAltError = 50;
		ARTY_TrailFX = "\ca\modules\ARTY\data\fx\scripts\shellTrailsMedium.sqf";
		whistleOnFire = 2;
	};
	class FlareBase;
	class ARTY_Flare_Small: FlareBase
	{
		model = "\ca\Weapons\granat";
		lightColor[] = {0.8,0.8,0.8,0};
		deflecting = 40;
	};
	class ARTY_Flare_Medium: ARTY_Flare_Small
	{
		deflecting = 65;
	};
	class ARTY_Sh_Base_NET: ARTY_Sh_Base
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		soundHit[] = {"",1,1,1};
		CraterEffects = "";
		ExplosionEffects = "";
		explosive = 1;
		visibleFire = 64;
		audibleFire = 64;
		timeToLive = 120;
		caliber = 6;
		model = "";
		whistleDist = 0;
	};
	class ARTY_Sh_105_NET: ARTY_Sh_Base_NET
	{
		airFriction = -0.00038;
		typicalSpeed = 800;
	};
	class ARTY_Sh_105_NET_NOFX: ARTY_Sh_105_NET
	{
		ARTY_TrailFX = "";
		ARTY_IncomingSounds[] = {};
	};
	class ARTY_Sh_105_LASNET: ARTY_Sh_105_NET
	{
		ARTY_DeployAltitude = 1000;
		ARTY_LaserShell = 1;
	};
	class ARTY_Sh_122_NET: ARTY_Sh_Base_NET
	{
		airFriction = -0.00038;
		typicalSpeed = 800;
	};
	class ARTY_Sh_122_NET_NOFX: ARTY_Sh_122_NET
	{
		ARTY_TrailFX = "";
		ARTY_IncomingSounds[] = {};
	};
	class ARTY_Sh_122_LASNET: ARTY_Sh_122_NET
	{
		ARTY_DeployAltitude = 1000;
		ARTY_LaserShell = 1;
	};
	class ARTY_Sh_81_NET: ARTY_Sh_Base_NET
	{
		airFriction = -0.00055;
		typicalSpeed = 500;
		ARTY_TrailFX = "";
	};
	class ARTY_Sh_82_NET: ARTY_Sh_Base_NET
	{
		airFriction = -0.00055;
		typicalSpeed = 500;
		ARTY_TrailFX = "";
	};
	class ARTY_Sh_120_NET: ARTY_Sh_Base_NET
	{
		airFriction = -7e-005;
		typicalSpeed = 550;
	};
	class ARTY_Sh_227_NET: ARTY_Sh_Base_NET
	{
		airFriction = -8e-005;
		timeToLive = 200;
		typicalSpeed = 500;
	};
	class ARTY_Sh_105_HE: ARTY_Sh_Base
	{
		hit = 250;
		indirectHit = 110;
		indirectHitRange = 25;
		typicalSpeed = 800;
		explosive = 0.8;
		cost = 300;
		timeToLive = 120;
		model = "\ca\Weapons\shell";
		airFriction = -0.00038;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ARTY_ShellExplosionMedium";
		ARTY_NetShell = "ARTY_Sh_105_NET";
		whistleDist = 50;
	};
	class ARTY_Sh_105_WP: ARTY_Sh_105_HE
	{
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 30;
		explosive = 0.8;
		ExplosionEffects = "WPExplosion";
		CraterEffects = "ExploAmmoCrater";
		soundHit[] = {"\ca\weapons\data\sound\explosion\grenade_new1",3.162278,1};
		ARTY_DeployOnImpact = "ARTY_SmokeShellWhite";
		whistleDist = 60;
	};
	class ARTY_Sh_105_SADARM: ARTY_Sh_105_HE
	{
		hit = 20;
		indirectHit = 5;
		indirectHitRange = 20;
		explosive = 0;
		ExplosionEffects = "";
		CraterEffects = "";
		ARTY_SADARMShell = 1;
		ARTY_DeployAltitude = 500;
		ARTY_DeployError = 10;
		ARTY_TrailFX = "";
		ARTY_IncomingSounds[] = {};
		ARTY_NetShell = "ARTY_Sh_105_NET_NOFX";
		whistleDist = 40;
	};
	class ARTY_Sh_105_LASER: ARTY_Sh_105_HE
	{
		ARTY_DeployAltitude = 1000;
		ARTY_LaserShell = 1;
		ARTY_NetShell = "ARTY_Sh_105_LASNET";
	};
	class ARTY_Sh_105_ILLUM: ARTY_Sh_105_HE
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"",0,1};
		CraterEffects = "";
		ARTY_DeployFlare = "ARTY_Flare_Medium";
		ARTY_DeployAltitude = 300;
		ARTY_DeployError = 50;
		whistleDist = 0;
	};
	class ARTY_Sh_105_SMOKE: ARTY_Sh_105_HE
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects = "";
		soundHit[] = {"",0,1};
		CraterEffects = "";
		ARTY_DeployOnImpact = "ARTY_SmokeShellWhite";
		whistleDist = 0;
	};
	class ARTY_Sh_81_HE: ARTY_Sh_Base
	{
		hit = 160;
		indirectHit = 50;
		indirectHitRange = 20;
		typicalSpeed = 800;
		explosive = 0.8;
		cost = 200;
		timeToLive = 120;
		model = "\ca\Weapons\shell";
		airFriction = -0.00055;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ARTY_ShellExplosionSmall";
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		ARTY_TrailFX = "";
		ARTY_NetShell = "ARTY_Sh_81_NET";
		whistleOnFire = 0;
		whistleDist = 20;
	};
	class ARTY_Sh_81_WP: ARTY_Sh_81_HE
	{
		hit = 35;
		indirectHit = 30;
		indirectHitRange = 20;
		explosive = 0.8;
		ExplosionEffects = "WPExplosion";
		soundHit[] = {"\ca\weapons\data\sound\explosion\grenade_new1",3.162278,1};
		CraterEffects = "";
		ARTY_DeployOnImpact = "ARTY_SmokeShellWhite";
		whistleDist = 20;
	};
	class ARTY_Sh_81_ILLUM: ARTY_Sh_81_HE
	{
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"",0,1};
		CraterEffects = "";
		ARTY_DeployFlare = "ARTY_Flare_Small";
		ARTY_DeployAltitude = 250;
		ARTY_DeployError = 50;
		whistleDist = 0;
	};
	class ARTY_R_227mm_HE_Rocket: R_MLRS
	{
		hit = 20;
		indirectHit = 1;
		indirectHitRange = 5;
		cost = 500;
		maxSpeed = 900;
		thrustTime = 1.7;
		thrust = 580;
		sideAirFriction = 0.22;
		fuseDistance = 5;
		timeToLive = 2.0;
		CraterEffects = "";
		explosionEffects = "";
		soundHit[] = {};
		ARTY_ReplaceWithAmmo = "ARTY_R_227mm_HE";
		whistleDist = 10;
	};
	class ARTY_R_227mm_HE: ARTY_Sh_Base
	{
		simulation = "shotShell";
		model = "\ca\Weapons\shell";
		airFriction = -8e-005;
		hit = 410;
		indirectHit = 200;
		indirectHitRange = 40;
		typicalSpeed = 500;
		explosive = 0.8;
		cost = 300;
		timeToLive = 200;
		ARTY_DeployAltitude = 1000;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ARTY_ShellExplosionLarge";
		ARTY_NetShell = "ARTY_Sh_227_NET";
		whistleDist = 80;
	};
	class ARTY_Sh_122_HE: ARTY_Sh_Base
	{
		hit = 340;
		indirectHit = 125;
		indirectHitRange = 30;
		typicalSpeed = 800;
		explosive = 0.8;
		cost = 300;
		model = "\ca\Weapons\shell";
		airFriction = -0.00038;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ARTY_ShellExplosionMedium";
		ARTY_NetShell = "ARTY_Sh_122_NET";
		whistleDist = 60;
	};
	class ARTY_Sh_122_WP: ARTY_Sh_122_HE
	{
		hit = 60;
		indirectHit = 50;
		indirectHitRange = 30;
		explosive = 0.8;
		ExplosionEffects = "WPExplosion";
		CraterEffects = "ExploAmmoCrater";
		soundHit[] = {"\ca\weapons\data\sound\explosion\grenade_new1",3.162278,1};
		ARTY_DeployOnImpact = "ARTY_SmokeShellWhite";
		whistleDist = 60;
	};
	class ARTY_Sh_122_SADARM: ARTY_Sh_122_HE
	{
		hit = 20;
		indirectHit = 5;
		indirectHitRange = 20;
		explosive = 0;
		ExplosionEffects = "";
		CraterEffects = "";
		ARTY_SADARMShell = 1;
		ARTY_DeployAltitude = 500;
		ARTY_DeployError = 10;
		ARTY_TrailFX = "";
		ARTY_IncomingSounds[] = {};
		ARTY_NetShell = "ARTY_Sh_122_NET_NOFX";
		whistleDist = 40;
	};
	class ARTY_Sh_122_LASER: ARTY_Sh_122_HE
	{
		ARTY_DeployAltitude = 1000;
		ARTY_LaserShell = 1;
		ARTY_NetShell = "ARTY_Sh_122_LASNET";
	};
	class ARTY_Sh_122_ILLUM: ARTY_Sh_122_HE
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"",0,1};
		CraterEffects = "";
		ARTY_DeployFlare = "ARTY_Flare_Medium";
		ARTY_DeployAltitude = 300;
		ARTY_DeployError = 50;
		whistleDist = 0;
	};
	class ARTY_Sh_122_SMOKE: ARTY_Sh_122_HE
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects = "";
		soundHit[] = {"",0,1};
		CraterEffects = "";
		ARTY_DeployOnImpact = "ARTY_SmokeShellWhite";
		whistleDist = 0;
	};
	class ARTY_SADARM_PROJO: RocketBase
	{
		hit = 330;
		indirectHit = 142;
		indirectHitRange = 7;
		thrustTime = 0.3;
		thrust = 800;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ARTY_ShellExplosionSmall";
		whistleDist = 14;
	};
	class ARTY_SADARM_NET: ARTY_SADARM_PROJO
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		CraterEffects = "";
		ExplosionEffects = "";
		soundHit[] = {"",1,1,1};
		whistleDist = 0;
	};
	class ARTY_SADARM_BURST: RocketBase
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		thrustTime = 0.001;
		thrust = 0.001;
		timeToLive = 0.2;
		explosive = 1;
		CraterEffects = "";
		ExplosionEffects = "AAMissileExplosion";
		whistleDist = 0;
	};
	class SmokeShellCore;
	class ARTY_SmokeShellWhite: ShellBase
	{
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 0.2;
		cost = 100;
		simulation = "shotSmoke";
		model = "\ca\Weapons\shell";
		explosive = 0;
		deflecting = 60;
		explosionTime = 0.5;
		fuseDistance = 0;
		timeToLive = 4;
		smokeColor[] = {1,1,1,1};
		soundHit[] = {"",0,1};
		effectsSmoke = "ARTY_SmokeExplosionMedium";
		CraterEffects = "";
	};
	class ARTY_Sh_82_HE: ARTY_Sh_Base
	{
		hit = 165;
		indirectHit = 52;
		indirectHitRange = 18;
		typicalSpeed = 800;
		explosive = 0.8;
		cost = 200;
		timeToLive = 120;
		model = "\ca\Weapons\shell";
		airFriction = -0.00055;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ARTY_ShellExplosionSmall";
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		ARTY_TrailFX = "";
		ARTY_NetShell = "ARTY_Sh_82_NET";
		whistleOnFire = 0;
		whistleDist = 18;
	};
	class ARTY_Sh_82_WP: ARTY_Sh_82_HE
	{
		hit = 35;
		indirectHit = 30;
		indirectHitRange = 20;
		explosive = 0.8;
		ExplosionEffects = "WPExplosion";
		soundHit[] = {"\ca\weapons\data\sound\explosion\grenade_new1",3.162278,1};
		CraterEffects = "";
		ARTY_DeployOnImpact = "ARTY_SmokeShellWhite";
		whistleDist = 20;
	};
	class ARTY_Sh_82_ILLUM: ARTY_Sh_82_HE
	{
		hit = 5;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"",0,1};
		CraterEffects = "";
		ARTY_DeployFlare = "ARTY_Flare_Small";
		ARTY_DeployAltitude = 250;
		ARTY_DeployError = 50;
		whistleDist = 0;
	};
	class ARTY_R_120mm_HE_Rocket: R_GRAD
	{
		hit = 5;
		indirectHit = 1;
		indirectHitRange = 3;
		cost = 400;
		maxSpeed = 700;
		thrustTime = 1.1;
		thrust = 500;
		sideAirFriction = 0.22;
		fuseDistance = 5;
		timeToLive = 2.2;
		CraterEffects = "";
		explosionEffects = "";
		soundHit[] = {};
		ARTY_ReplaceWithAmmo = "ARTY_R_120mm_HE";
		whistleDist = 6;
	};
	class ARTY_R_120mm_HE: ARTY_Sh_Base
	{
		simulation = "shotShell";
		model = "\ca\Weapons\shell";
		airFriction = -7e-005;
		hit = 340;
		indirectHit = 125;
		indirectHitRange = 30;
		typicalSpeed = 550;
		explosive = 0.8;
		cost = 300;
		timeToLive = 120;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ARTY_ShellExplosionMedium";
		ARTY_NetShell = "ARTY_Sh_120_NET";
		whistleDist = 60;
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine: Default{};
	class VehicleMagazine: CA_Magazine{};
	class ARTY_30Rnd_105mmHE_M119: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_105mmHE_M119_DN";
		ammo = "ARTY_Sh_105_HE";
		count = 30;
		initSpeed = 850;
		nameSound = "heat";
		ARTY_Ballistics = "\ca\modules\arty\data\tables\m119\105mm_ballistics.sqf";
	};
	class ARTY_30Rnd_105mmWP_M119: ARTY_30Rnd_105mmHE_M119
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_105mmWP_M119_DN";
		ammo = "ARTY_Sh_105_WP";
	};
	class ARTY_30Rnd_105mmSADARM_M119: ARTY_30Rnd_105mmHE_M119
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_105mmSADARM_M119_DN";
		ammo = "ARTY_Sh_105_SADARM";
	};
	class ARTY_30Rnd_105mmLASER_M119: ARTY_30Rnd_105mmHE_M119
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_105mmLASER_M119_DN";
		ammo = "ARTY_Sh_105_LASER";
	};
	class ARTY_30Rnd_105mmSMOKE_M119: ARTY_30Rnd_105mmHE_M119
	{
		displayName = "$STR_DN_30Rnd_105mmSMOKE_M119";
		ammo = "ARTY_Sh_105_SMOKE";
	};
	class ARTY_30Rnd_105mmILLUM_M119: ARTY_30Rnd_105mmHE_M119
	{
		displayName = "$STR_DN_30Rnd_M119_105mmILLUM";
		ammo = "ARTY_Sh_105_ILLUM";
	};
	class ARTY_8Rnd_81mmHE_M252: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_CfgMagazines_ARTY_8Rnd_81mmHE_M252_DN";
		ammo = "ARTY_Sh_81_HE";
		count = 8;
		initSpeed = 650;
		nameSound = "heat";
		ARTY_Ballistics = "\ca\modules\arty\data\tables\m252\m821A1_ballistics.sqf";
	};
	class ARTY_8Rnd_81mmWP_M252: ARTY_8Rnd_81mmHE_M252
	{
		ammo = "ARTY_Sh_81_WP";
		displayName = "$STR_CfgMagazines_ARTY_8Rnd_81mmWP_M252_DN";
	};
	class ARTY_8Rnd_81mmILLUM_M252: ARTY_8Rnd_81mmHE_M252
	{
		ammo = "ARTY_Sh_81_ILLUM";
		displayName = "$STR_CfgMagazines_ARTY_8Rnd_81mmILLUM_M252_DN";
	};
	class ARTY_12Rnd_227mmHE_M270: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_CfgMagazines_ARTY_12Rnd_227mmHE_M270_DN";
		ammo = "ARTY_R_227mm_HE_Rocket";
		initSpeed = 75;
		maxLeadSpeed = 200;
		count = 12;
		nameSound = "rockets";
		ARTY_Ballistics = "\ca\modules\arty\data\tables\m270\xm31_ballistics.sqf";
	};
	class ARTY_30Rnd_122mmHE_D30: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_122mmHE_D30_DN";
		ammo = "ARTY_Sh_122_HE";
		count = 30;
		initSpeed = 850;
		nameSound = "heat";
		ARTY_Ballistics = "\ca\modules\arty\data\tables\d30\122mm_ballistics.sqf";
	};
	class ARTY_30Rnd_122mmWP_D30: ARTY_30Rnd_122mmHE_D30
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_122mmWP_D30_DN";
		ammo = "ARTY_Sh_122_WP";
	};
	class ARTY_30Rnd_122mmSADARM_D30: ARTY_30Rnd_122mmHE_D30
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_122mmSADARM_D30_DN";
		ammo = "ARTY_Sh_122_SADARM";
	};
	class ARTY_30Rnd_122mmLASER_D30: ARTY_30Rnd_122mmHE_D30
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_122mmLASER_D30_DN";
		ammo = "ARTY_Sh_122_LASER";
	};
	class ARTY_30Rnd_122mmSMOKE_D30: ARTY_30Rnd_122mmHE_D30
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_122mmSMOKE_D30_DN";
		ammo = "ARTY_Sh_122_SMOKE";
	};
	class ARTY_30Rnd_122mmILLUM_D30: ARTY_30Rnd_122mmHE_D30
	{
		displayName = "$STR_CfgMagazines_ARTY_30Rnd_122mmILLUM_D30_DN";
		ammo = "ARTY_Sh_122_ILLUM";
	};
	class ARTY_8Rnd_82mmHE_2B14: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_CfgMagazines_ARTY_8Rnd_82mmHE_2B14_DN";
		ammo = "ARTY_Sh_82_HE";
		count = 8;
		initSpeed = 650;
		nameSound = "heat";
		ARTY_Ballistics = "\ca\modules\arty\data\tables\2b14\82mm_ballistics.sqf";
	};
	class ARTY_8Rnd_82mmWP_2B14: ARTY_8Rnd_82mmHE_2B14
	{
		ammo = "ARTY_Sh_82_WP";
		displayName = "$STR_CfgMagazines_ARTY_8Rnd_82mmWP_2B14_DN";
	};
	class ARTY_8Rnd_82mmILLUM_2B14: ARTY_8Rnd_82mmHE_2B14
	{
		ammo = "ARTY_Sh_82_ILLUM";
		displayName = "$STR_CfgMagazines_ARTY_8Rnd_82mmILLUM_2B14_DN";
	};
	class ARTY_40Rnd_120mmHE_BM21: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_CfgMagazines_ARTY_40Rnd_120mmHE_BM21_DN";
		ammo = "ARTY_R_120mm_HE_Rocket";
		initSpeed = 75;
		maxLeadSpeed = 200;
		count = 40;
		nameSound = "rockets";
		ARTY_Ballistics = "\ca\modules\arty\data\tables\bm21\9M28F_HE_ballistics.sqf";
	};
};
class CfgWeapons
{
	class CannonCore;
	class RocketPods;
	class M119: CannonCore
	{
		magazines[] = {"30Rnd_105mmHE_M119","ARTY_30Rnd_105mmHE_M119","ARTY_30Rnd_105mmWP_M119","ARTY_30Rnd_105mmSADARM_M119","ARTY_30Rnd_105mmLASER_M119","ARTY_30Rnd_105mmSMOKE_M119","ARTY_30Rnd_105mmILLUM_M119"};
	};
	class D30: CannonCore
	{
		magazines[] = {"30Rnd_122mmHE_D30","ARTY_30Rnd_122mmHE_D30","ARTY_30Rnd_122mmWP_D30","ARTY_30Rnd_122mmSADARM_D30","ARTY_30Rnd_122mmLASER_D30","ARTY_30Rnd_122mmSMOKE_D30","ARTY_30Rnd_122mmILLUM_D30"};
	};
	class GRAD: RocketPods
	{
		magazines[] = {"ARTY_40Rnd_120mmHE_BM21","40Rnd_GRAD"};
	};
	class MLRS: RocketPods
	{
		magazines[] = {"ARTY_12Rnd_227mmHE_M270","12Rnd_MLRS"};
	};
	class M252: CannonCore
	{
		magazines[] = {"ARTY_8Rnd_81mmHE_M252","ARTY_8Rnd_81mmWP_M252","ARTY_8Rnd_81mmILLUM_M252"};
	};
	class 2B14: CannonCore
	{
		magazines[] = {"ARTY_8Rnd_82mmHE_2B14","ARTY_8Rnd_82mmWP_2B14","ARTY_8Rnd_82mmILLUM_2B14"};
	};
};
//};
