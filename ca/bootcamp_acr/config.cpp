////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:01:37 2014 : Source 'file' date Fri Oct 31 06:01:37 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class bootcamp_acr : config.bin{
class CfgPatches
{
	class Bootcamp_ACR
	{
		units[] = {"Bootcamp_ACR"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData","CABuildings","CAMisc","CABuildings2","CARoads2"};
	};
};
class CfgVehicles
{
	class ThingEffect;
	class ThingEffectLight;
	class ThingEffectFeather;
	class FXCrWindLeaf1: ThingEffectLight
	{
		scope = 1;
		model = "\ca\plants2\clutter\cr_leaf.p3d";
		displayName = "Internal: FxCrWindLeaf1";
		airFriction2[] = {2,2,8};
		airFriction1[] = {1,1,4};
		airFriction0[] = {0.3,0.3,0.1};
		airRotation = 0.35;
		minHeight = 0.3;
		avgHeight = 5.5;
		maxHeight = 10.0;
	};
	class FXCrWindLeaf2: FXCrWindLeaf1
	{
		model = "\ca\plants2\clutter\cr_leaf2.p3d";
		displayName = "Internal: FxCrWindLeaf2";
	};
	class FXCrWindLeaf3: FXCrWindLeaf1
	{
		model = "\ca\plants2\clutter\cr_leaf3.p3d";
		displayName = "Internal: FxCrWindLeaf3";
	};
};
class CfgWorlds
{
	class DefaultWorld
	{
		class Weather;
	};
	class CAWorld: DefaultWorld
	{
		class Grid{};
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class DefaultClutter;
		class Weather: Weather
		{
			class Lighting;
		};
	};
	class DefaultLighting;
	class Bootcamp_ACR: CAWorld
	{
		access = 3;
		worldId = 4;
		cutscenes[] = {"Bootcamp_ACRIntro1"};
		description = "$STR_ACR_DN_MAP_BOOTCAMP";
		icon = "";
		worldName = "\ca\Bootcamp_ACR\Bootcamp_ACR.wrp";
		pictureMap = "";
		pictureShot = "\ca\Bootcamp_ACR\data\ui_selectisland_Bootcamp_ca.paa";
		plateFormat = "ML$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		longitude = 30;
		latitude = -45;
		class OutsideTerrain
		{
			satellite = "ca\Bootcamp_ACR\data\s_satout_co.paa";
			enableTerrainSynth = 1;
			class Layers
			{
				class Layer0
				{
					nopx = "ca\Bootcamp_ACR\data\bc_trava1_detail_nopx.paa";
					texture = "ca\Bootcamp_ACR\data\bc_trava1_detail_co.paa";
				};
			};
		};
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 30;
			class Zoom1
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = 100;
			};
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = 1000;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = 10000;
			};
		};
		startTime = "9:20";
		startDate = "11/10/2008";
		startWeather = 0.25;
		startFog = 0.0;
		forecastWeather = 0.25;
		forecastFog = 0.0;
		centerPosition[] = {1850,1700,500};
		seagullPos[] = {1850,150.0,1700};
		ilsPosition[] = {1887.5,1160};
		ilsDirection[] = {0.5075,0.08,-0.8616};
		ilsTaxiIn[] = {1785.21,1674.29,2024.9,1259.071,2027.385,1237.021,2015.327,1221.136,1928.958,1170.509,1906.105,1164.372,1880.936,1173.65};
		ilsTaxiOff[] = {1671,1538,1195.5,2362.011,1201.01,2385.8,1218.536,2399.822,1304.679,2450.154,1324.962,2453.66,1345.746,2438.886,1785.21,1674.29};
		drawTaxiway = 1;
		class ReplaceObjects{};
		class Sounds
		{
			sounds[] = {};
		};
		class Animation
		{
			vehicles[] = {};
		};
		class Lighting: DefaultLighting
		{
			groundReflection[] = {0.06,0.06,0.03};
		};
		class DayLightingBrightAlmost: DayLightingBrightAlmost
		{
			deepNight[] = {-15,{ 0.037,0.063,0.091 },{ 0.001,0.001,0.0012 },{ 0.067,0.075,0.091 },{ 0.003,0.004,0.006 },{ 0.0001,0.0001,0.0002 },{ 0.0001,0.0001,0.0002 },0};
			fullNight[] = {-5,{ 0.182,0.213,0.25 },{ 0.05,0.111,0.221 },{ 0.04,0.034,0.004 },{ 0.039,0.049,0.072 },{ 0.082,0.128,0.185 },{ 0.283,0.35,0.431 },0};
			sunMoon[] = {-3.75,{ 0.377,0.441,0.518 },{ 0.103,0.227,0.453 },{ 0.04,0.034,0.004 },{ 0.039,0.049,0.072 },{ 0.174,0.274,0.395 },{ 0.582,0.72,0.887 },0.5};
			earlySun[] = {-2.5,{ 0.675,0.69,0.784 },{ 0.22,0.322,0.471 },{ 0.04,0.034,0.004 },{ 0.039,0.049,0.072 },{ 0.424,0.549,0.745 },{ 0.698,0.753,0.894 },1};
			sunrise[] = {0,{ 0.675,0.69,0.784 },{ 0.478,0.51,0.659 },{ 0.2,0.19,0.07 },{ 0.124,0.161,0.236 },{ { 0.847,0.855,0.965 },0.2 },{ { 0.933,0.949,0.996 },2 },1};
			earlyMorning[] = {3,{ { 0.844,0.61,0.469 },2 },{ 0.424,0.557,0.651 },{ { 1,0.45,0.2 },1 },{ 0.12,0.26,0.38 },{ { 0.428,0.579,0.743 },2 },{ { 0.844,0.61,0.469 },2.7 },1};
			midMorning[] = {8,{ { 0.822,0.75,0.646 },3.8 },{ { 0.383,0.58,0.858 },1.3 },{ { 1.3,0.9,0.61 },3.8 },{ { 0.12,0.18,0.28 },0.5 },{ { 0.322,0.478,0.675 },3.5 },{ { 1.0,0.929,0.815 },4.7 },1};
			morning[] = {16,{ { 1,0.95,0.91 },11.2 },{ { 0.12,0.18,0.28 },7.5 },{ { 1,0.95,0.91 },11.2 },{ { 0.12,0.16,0.18 },7.5 },{ { 0.14,0.18,0.24 },10.5 },{ { 0.5,0.6,0.9 },11.7 },1};
			noon[] = {45,{ { 0.98,0.96,0.9 },13.55 },{ { 0.3,0.32,0.35 },9.5 },{ { 1,0.95,0.91 },13.2 },{ { 0.12,0.16,0.18 },9.5 },{ { 0.14,0.14,0.14 },12.5 },{ { 0.5,0.6,0.9 },13.7 },1};
		};
		class DayLightingRainy: DayLightingRainy
		{
			deepNight[] = {-15,{ 0.0034,0.0034,0.004 },{ 0.003,0.003,0.003 },{ 0.0034,0.0034,0.004 },{ 0.003,0.003,0.003 },{ 0.001,0.001,0.002 },{ 0.001,0.001,0.002 },0};
			fullNight[] = {-5,{ 0.023,0.023,0.023 },{ 0.02,0.02,0.02 },{ 0.023,0.023,0.023 },{ 0.02,0.02,0.02 },{ 0.01,0.01,0.02 },{ 0.08,0.06,0.06 },0};
			sunMoon[] = {-3.75,{ 0.04,0.04,0.05 },{ 0.04,0.04,0.05 },{ 0.04,0.04,0.05 },{ 0.04,0.04,0.05 },{ 0.04,0.035,0.04 },{ 0.11,0.08,0.09 },0.5};
			earlySun[] = {-2.5,{ 0.0689,0.0689,0.0804 },{ 0.06,0.06,0.07 },{ 0.0689,0.0689,0.0804 },{ 0.06,0.06,0.07 },{ 0.08,0.07,0.08 },{ 0.14,0.1,0.12 },0.5};
			earlyMorning[] = {0,{ { 1,1,1 },"(-4)+3.95" },{ { 1,1,1 },"(-4)+3.0" },{ { 1,1,1 },"(-4)+3.95" },{ { 1,1,1 },"(-4)+3.0" },{ { 1,1,1 },"(-4)+4" },{ { 1,1,1 },"(-4)+5.5" },1};
			morning[] = {5,{ { 1,1,1 },"(-4)+5.7" },{ { 1,1,1 },"(-4)+4.5" },{ { 1,1,1 },"(-4)+5.7" },{ { 1,1,1 },"(-4)+4.5" },{ { 1,1,1 },"(-4)+7" },{ { 1,1,1 },"(-4)+8" },1};
			lateMorning[] = {25,{ { 1,1,1 },"(-4)+10.45" },{ { 1,1,1 },"(-4)+9.75" },{ { 1,1,1 },"(-4)+10.45" },{ { 1,1,1 },"(-4)+9.75" },{ { 1,1,1 },"(-4)+12" },{ { 1,1,1 },"(-4)+12.75" },1};
			noon[] = {70,{ { 1,1,1 },"(-4)+12.5" },{ { 1,1,1 },"(-4)+11" },{ { 1,1,1 },"(-4)+12" },{ { 1,1,1 },"(-4)+11" },{ { 1,1,1 },"(-4)+13.5" },{ { 1,1,1 },"(-4)+14" },1};
		};
		class Weather: Weather
		{
			class Lighting: Lighting
			{
				class BrightAlmost: DayLightingBrightAlmost
				{
					overcast = 0;
				};
				class Rainy: DayLightingRainy
				{
					overcast = 1.0;
				};
			};
		};
		clutterGrid = 1.0;
		clutterDist = 125;
		noDetailDist = 40;
		fullDetailDist = 15;
		midDetailTexture = "ca\Bootcamp_ACR\data\bc_trava1_mco.paa";
		minTreesInForestSquare = 3;
		minRocksInRockSquare = 3;
		class clutter
		{
			class GrassTall: DefaultClutter
			{
				model = "ca\plants_E2\clutter\c_GrassTall_summer.p3d";
				affectedByWind = 0.4;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			class AutumnFlowers: DefaultClutter
			{
				model = "ca\plants_E2\clutter\c_summer_flowers.p3d";
				affectedByWind = 0.4;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			class GrassBunch: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassBunch.p3d";
				affectedByWind = 0.35;
				swLighting = 1;
				scaleMin = 0.6;
				scaleMax = 1.0;
			};
			class GrassCrookedSmall: DefaultClutter
			{
				model = "ca\plants_E2\clutter\c_GrassCrooked_summer.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 1.0;
			};
			class GrassCrookedGreen: DefaultClutter
			{
				model = "ca\plants_E2\clutter\c_GrassCrookedGreen_summer.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.3;
			};
			class GrassCrookedGreenSmall: DefaultClutter
			{
				model = "ca\plants_E2\clutter\c_GrassCrookedGreen_summer.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.9;
			};
			class GrassCrookedForest: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassCrookedForest.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 1.1;
				scaleMax = 2.3;
			};
			class WeedDead: DefaultClutter
			{
				model = "ca\plants_E2\clutter\c_summer_smetanka.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.1;
			};
			class WeedDeadSmall: DefaultClutter
			{
				model = "ca\plants_E2\clutter\c_summer_white_flower.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 0.9;
			};
			class HeatherBrush: DefaultClutter
			{
				model = "ca\plants_E2\clutter\c_caluna_summer.p3d";
				affectedByWind = 0.15;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.8;
				surfaceColor[] = {0.53,0.5,0.37,1};
			};
			class WeedSedge: DefaultClutter
			{
				model = "ca\plants2\clutter\c_weed3.p3d";
				affectedByWind = 0.2;
				swLighting = 1;
				scaleMin = 0.5;
				scaleMax = 0.85;
			};
			class WeedTall: DefaultClutter
			{
				model = "ca\plants2\clutter\c_weed2.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.1;
			};
			class BlueBerry: DefaultClutter
			{
				model = "ca\plants_E2\clutter\c_blueberry_summer.p3d";
				affectedByWind = 0.05;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.3;
			};
			class RaspBerry: DefaultClutter
			{
				model = "ca\plants_E2\clutter\c_raspBerry_summer.p3d";
				affectedByWind = 0;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.2;
			};
			class FernAutumn: DefaultClutter
			{
				model = "ca\plants2\clutter\c_fern.p3d";
				affectedByWind = 0.1;
				scaleMin = 0.6;
				scaleMax = 1.2;
			};
			class FernAutumnTall: DefaultClutter
			{
				model = "ca\plants_E2\clutter\c_fernTall_summer.p3d";
				affectedByWind = 0.15;
				scaleMin = 0.75;
				scaleMax = 1.0;
			};
			class SmallPicea: DefaultClutter
			{
				model = "ca\plants2\clutter\c_picea.p3d";
				affectedByWind = 0.05;
				scaleMin = 0.75;
				scaleMax = 1.25;
			};
			class MushroomsHorcak: DefaultClutter
			{
				model = "ca\plants2\clutter\c_MushroomHorcak.p3d";
				affectedByWind = 0;
				scaleMin = 0.85;
				scaleMax = 1.25;
			};
			class MushroomsPrasivka: MushroomsHorcak
			{
				model = "ca\plants2\clutter\c_MushroomPrasivky.p3d";
			};
			class MushroomsBabka: MushroomsHorcak
			{
				model = "ca\plants2\clutter\c_MushroomBabka.p3d";
			};
			class MushroomsMuchomurka: MushroomsHorcak
			{
				model = "ca\plants2\clutter\c_MushroomMuchomurka.p3d";
			};
		};
		class Subdivision
		{
			class Fractal
			{
				rougness = 5;
				maxRoad = 0.02;
				maxTrack = 0.5;
				maxSlopeFactor = 0.05;
			};
			class WhiteNoise
			{
				rougness = 2;
				maxRoad = 0.01;
				maxTrack = 0.05;
				maxSlopeFactor = 0.0025;
			};
			minY = -0.0;
			minSlope = 0.02;
		};
		class Ambient
		{
			class Mammals
			{
				radius = 200;
				cost = "(1 + forest + trees) * (0.5 + (0.5 * night)) * (1 - sea) * (1 - houses)";
				class Species
				{
					class Rabbit
					{
						probability = 0.2;
						cost = 1;
					};
				};
			};
			class BigBirds
			{
				radius = 300;
				cost = "((1 + forest + trees) - ((2 * rain)) - houses) * (1 - night) * (1 - sea)";
				class Species
				{
					class Hawk
					{
						probability = 0.2;
						cost = 1;
					};
				};
			};
			class Birds
			{
				radius = 170;
				cost = "(1 - night) * ((1 + (3 * sea)) - (2 * rain))";
				class Species
				{
					class Crow
					{
						probability = 0.2;
						cost = 1;
					};
				};
			};
			class BigInsects
			{
				radius = 20;
				cost = "(5 - (2 * houses)) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
					class DragonFly
					{
						probability = "0.6 - (meadow * 0.5) + (forest * 0.4)";
						cost = 1;
					};
					class ButterFly
					{
						probability = "0.4 + (meadow * 0.5) - (forest * 0.4)";
						cost = 1;
					};
				};
			};
			class BigInsectsAquatic
			{
				radius = 20;
				cost = "(3 * sea) * (1 - night) * (1 - rain) * (1 - windy)";
				class Species
				{
					class DragonFly
					{
						probability = 1;
						cost = 1;
					};
				};
			};
			class SmallInsects
			{
				radius = 3;
				cost = "(12 - 8 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
					class HouseFly
					{
						probability = "deadBody + (1 - deadBody) * (0.5 - forest * 0.1 - meadow * 0.2)";
						cost = 1;
					};
					class HoneyBee
					{
						probability = "(1 - deadBody) * (0.5 - forest * 0.1 + meadow * 0.2)";
						cost = 1;
					};
					class Mosquito
					{
						probability = "(1 - deadBody) * (0.2 * forest)";
						cost = 1;
					};
				};
			};
			class NightInsects
			{
				radius = 3;
				cost = "(9 - 8 * hills) * night * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
					class Mosquito
					{
						probability = 1;
						cost = 1;
					};
				};
			};
			class WindClutter
			{
				radius = 10;
				cost = "((20 - 5 * rain) * (3 * (windy factor [0.2, 0.5]))) * (1 - sea)";
				class Species
				{
					class FxWindGrass1
					{
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};
					class FxWindGrass2
					{
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};
					class FxWindRock1
					{
						probability = "0.4 * hills";
						cost = 1;
					};
					class FxCrWindLeaf1
					{
						probability = "0.2 * trees";
						cost = 1;
					};
					class FxCrWindLeaf2
					{
						probability = "0.1 * trees + 0.2";
						cost = 1;
					};
					class FxCrWindLeaf3
					{
						probability = "0.1 * trees";
						cost = 1;
					};
				};
			};
			class NoWindClutter
			{
				radius = 15;
				cost = 8;
				class Species
				{
					class FxWindPollen1
					{
						probability = 1;
						cost = 1;
					};
					class FxCrWindLeaf1
					{
						probability = "0.2 * trees";
						cost = 1;
					};
					class FxCrWindLeaf2
					{
						probability = "0.1 * trees + 0.2";
						cost = 1;
					};
					class FxCrWindLeaf3
					{
						probability = "0.1 * trees";
						cost = 1;
					};
				};
			};
		};
		class Names
		{
			class AAirport_2
			{
				name = "";
				position[] = {1828.25,1705.31};
				type = "Airport";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class V_broad11
			{
				name = "";
				position[] = {2340.66,2880.01};
				type = "VegetationBroadleaf";
				radiusA = 165.11;
				radiusB = 187.05;
				angle = 0.0;
			};
			class V_fir17
			{
				name = "";
				position[] = {3287.21,3220.81};
				type = "VegetationFir";
				radiusA = 205.06;
				radiusB = 232.79;
				angle = 0.0;
			};
			class V_fir18
			{
				name = "";
				position[] = {659.11,3061.82};
				type = "VegetationFir";
				radiusA = 307.05;
				radiusB = 348.58;
				angle = 0.0;
			};
		};
		class Armory
		{
			positionAdmin[] = {12548.3,3140.68};
			positionStartWater[] = {7584.11,1206.68};
			positionsViewer[] = {{ 4810.49,10160.7 },{ 2637.16,9777.03 },{ 6955.78,2813.33 },{ 3716.81,14503.9 }};
			positionsViewerWater[] = {{ 14105.8,3510.57 }};
			positionBlacklist[] = {{ { 8150.07,2267.8 },{ 8278.83,2138.24 } },{ { 11064.1,2614.1 },{ 11268.6,2372.43 } },{ { 11290.5,3442.58 },{ 12687.9,3023.46 } },{ { 12881.1,3822.22 },{ 14294.3,2519.14 } }};
			class Challenges
			{
				class CheckpointRace
				{
					backUpRoute[] = {{ 4061.4282,4822.893 },{ 3996.005,4780.637 },{ 4113.9746,4644.71 },{ 4246.8066,4456.907 },{ 3694.8262,3877.9797 },{ 3544.3376,3903.6228 },{ 3319.3535,3936.9614 }};
				};
				class FiringRange
				{
					positionsStart[] = {{ 4865.31,9700.02 },{ 4636.6,2553.73 }};
					directionsStart[] = {330,118};
					positionsStartWater[] = {{ 13608.4,8965.45 }};
					directionsStartWater[] = {0};
				};
				class FitnessTrack
				{
					positionStart[] = {{ 13094.9,6891.64 }};
					directionStart[] = {6.22921};
					objectSets[] = {"ca\chernarus\data\scripts\armory\fitTrack1.sqf"};
					positionAnchor[] = {{ 13155.857,7102.432 }};
					obstacleSets[] = {{ { { 13095.3,6899.61 },1.10213,3,2,0,"" },{ { 13107.7,6950.43 },30.3792,1.8,2,9,"" },{ { 13134.8,6978.44 },51.8825,1.6,2,1,"" },{ { 13151.6,7026.52 },-14.7014,2,2,3,"" },{ { 13133.874,7081.7607 },341.22684,2,2,12,"" },{ { 13131.491,7148.465 },428.06613,2,1.5,6,"" },{ { 13179.75,7154.959 },78.664734,2,2,5,"" },{ { 13184.168,7182.752 },64.1526,1.4,1.5,4,"" },{ { 13173.689,7197.874 },-40.98606,1,1.2,12,"" },{ { 13107.476,7194.292 },161.73361,2.5,2,11,"" },{ { 13053.396,7188.989 },-17.0643,3,2,6,"" },{ { 13030.552,7198.6733 },-49.315884,3,2,11,"" },{ { 13054.509,7225.1953 },-115.63012,1.8,2,2,"" },{ { 13091.737,7224.594 },-2.722243,3,2,7,"" },{ { 13138.76,7234.5645 },75.70733,5,2,11,"" },{ { 13291.4,7289.55 },0.672324,2,2,8,"" },{ { 13218.485,7324.5605 },-69.754745,4,2,10,"" } }};
					positionMachineguns[] = {{ { 13175.715,7183.2925 } }};
					directionMachineguns[] = {{ -264.32907 }};
					positionStartAnimal[] = {{ 6907.9697,7809.619 }};
					directionStartAnimal[] = {162.93124};
					objectSetsAnimal[] = {"ca\chernarus\data\scripts\armory\fitTrackAnimals1.sqf"};
					positionAnchorAnimal[] = {{ 6949.9463,7739.74 }};
					obstacleSetsAnimal[] = {{ { { 6909.264,7803.943 },161.90512,3,2,0,"" },{ { 6951.4775,7766.5244 },-225.43369,2.5,2,3,"" },{ { 6981.529,7738.8384 },-36.381035,4,2,11,"" },{ { 6988.8047,7721.259 },101.7481,2,2,9,"" },{ { 6961.072,7739.3496 },-32.418125,3.5,2,11,"" },{ { 6938.1123,7748.5244 },-16.642376,4,2,11,"" },{ { 6952.1445,7727.5923 },-34.059143,1.5,2,2,"" },{ { 6985.344,7699.7813 },96.19398,3.5,2,7,"" },{ { 7022.225,7704.2026 },53.14308,2.5,2,10,"" } }};
				};
				class MobilityRange
				{
					positionStart[] = {{ 12053.274,3489.2385 }};
					directionStart[] = {-4.729401};
					positionStartAmphibious[] = {{ 12137.765,3123.7566 }};
					directionStartAmphibious[] = {48.47163};
					positionStartWater[] = {{ 12065.558,3405.7932 }};
					directionStartWater[] = {162.681};
					objectSets[] = {"ca\chernarus\data\scripts\armory\mobilityRange1.sqf"};
					positionAnchor[] = {{ 12507.519,4194.752 }};
					objectSetsWater[] = {"ca\chernarus\data\scripts\armory\mobilityRangeWater1.sqf"};
					positionAnchorWater[] = {{ 12252.541,3171.101 }};
					obstacleSets[] = {{ { { { 12071.941,3591.1538 },-7.029818,5,4,0,"" },{ { 12008.259,3762.5742 },-37.721397,2.5,4,3,"" },{ { 11949.09,3883.3076 },57.102104,5,4,4,"" },{ { 12053.2295,3983.802 },-117.695,3,3.5,1,"" },{ { 12062.163,3988.8901 },-117.695,3,3.5,2,"" },{ { 12146.472,4079.5654 },176.644,3,3.5,6,"" },{ { 12144.679,4096.7817 },-3.3011,3,3.5,5,"" },{ { 12100.988,4277.939 },-22.3838,3.5,5,8,"" },{ { 12028.928,4405.1914 },-38.37155,5,4,4,"" },{ { 11963.396,4505.3145 },-37.1154,5,4,7,"" },{ { 11782.433,4562.2583 },-58.603565,2.5,4,3,"$STR_LIB_CHAL_MOB_RANGE_HINT_3" },{ { 11919.378,4601.3784 },-143.1178,3,4,7,"" },{ { 12064.139,4622.4805 },-55.045273,10,4,7,"$STR_LIB_CHAL_MOB_RANGE_HINT_1" },{ { 12133.922,4579.6353 },135.321,22,4,7,"$STR_LIB_CHAL_MOB_RANGE_HINT_1" },{ { 12211.571,4496.298 },-258.86,5,4,4,"" },{ { 12354.506,4478.395 },-247.526,5,4,7,"$STR_LIB_CHAL_MOB_RANGE_OBSTACLE_10_DESC" },{ { 12401.291,4458.6733 },8.25237,7,3,11,"" },{ { 12415.422,4455.7227 },15.383254,7,3,11,"" },{ { 12437.532,4450.039 },14.747339,4,3,11,"" },{ { 12446.0205,4448.1016 },10.462667,4,3,11,"" },{ { 12485.617,4448.541 },2.29143,5,4,7,"" },{ { 12331.248,4560.7856 },-49.7273,6,6,7,"$STR_LIB_CHAL_MOB_RANGE_HINT_4" },{ { 12574.257,4578.189 },237.39166,2.5,4,3,"" },{ { 12610.941,4960.626 },-305.59714,5,4,4,"" },{ { 12781.824,4813.134 },-308.815,5,4,4,"" },{ { 13170.416,5301.261 },34.89855,2.5,4,8,"" },{ { 13260.37,5428.1675 },-115.369,5,4,7,"" },{ { 13376.249,5429.7603 },90.0,6,3,9,"" } },{ { { 12182.212,3170.9092 },26.1951,6,4,0,"" },{ { 12071.941,3591.1538 },-7.029818,5,4,4,"" },{ { 12008.259,3762.5742 },-37.721397,2.5,4,3,"" },{ { 11949.09,3883.3076 },57.102104,5,4,4,"" },{ { 12053.2295,3983.802 },-117.695,3,3.5,1,"" },{ { 12062.163,3988.8901 },-117.695,3,3.5,2,"" },{ { 12146.472,4079.5654 },176.644,3,3.5,6,"" },{ { 12144.679,4096.7817 },-3.3011,3,3.5,5,"" },{ { 12100.988,4277.939 },-22.3838,3.5,5,8,"" },{ { 12028.928,4405.1914 },-38.37155,5,4,4,"" },{ { 12009.158,4467.854 },32.583187,18,4,7,"$STR_LIB_CHAL_MOB_RANGE_HINT_1" },{ { 12039.716,4535.7217 },26.4356,28,4,7,"$STR_LIB_CHAL_MOB_RANGE_HINT_1" },{ { 12211.571,4496.298 },-258.86,5,4,4,"" },{ { 12354.506,4478.395 },-247.526,5,4,7,"$STR_LIB_CHAL_MOB_RANGE_OBSTACLE_10_DESC" },{ { 12401.291,4458.6733 },8.25237,7,3,11,"" },{ { 12415.422,4455.7227 },15.383254,7,3,11,"" },{ { 12437.532,4450.039 },14.747339,4,3,11,"" },{ { 12446.0205,4448.1016 },10.462667,4,3,11,"" },{ { 12485.617,4448.541 },2.29143,5,4,7,"" },{ { 12331.248,4560.7856 },-49.7273,6,6,7,"$STR_LIB_CHAL_MOB_RANGE_HINT_4" },{ { 12574.257,4578.189 },237.39166,2.5,4,3,"" },{ { 12610.941,4960.626 },-305.59714,5,4,4,"" },{ { 12781.824,4813.134 },-308.815,5,4,4,"" },{ { 13170.416,5301.261 },34.89855,2.5,4,8,"" },{ { 13260.37,5428.1675 },-115.369,5,4,7,"" },{ { 13376.249,5429.7603 },90.0,6,3,9,"" } } }};
					obstacleSetsWater[] = {{ { { 12017.643,3285.37 },42.0182,13,4,0,"" },{ { 11844.2,3127.8335 },44.3972,5,4,3,"" },{ { 11748.247,2909.909 },-45.4878,6.5,4,7,"" },{ { 11917.333,2951.0886 },-0.640769,12,3,11,"" },{ { 11943.64,2951.2964 },-0.640769,12,3,11,"" },{ { 12204.303,2975.059 },88.1787,9,5,8,"" },{ { 12345.825,3151.7322 },20.117426,13,4,4,"" },{ { 12091.559,3426.7244 },29.193241,5,4,7,"" },{ { 12329.788,3418.3071 },78.95309,13,4,7,"$STR_LIB_CHAL_MOB_RANGE_HINT_1" },{ { 12414.953,3428.5474 },85.59398,13,4,7,"$STR_LIB_CHAL_MOB_RANGE_HINT_1" },{ { 12705.73,3360.4412 },115.49004,13,4,10,"" },{ { 12729.66,3350.2236 },69.31565,10,4,10,"" },{ { 12746.576,3379.1472 },77.90379,10,4,10,"" },{ { 12777.471,3362.8718 },118.09767,13,4,10,"" },{ { 12786.696,3027.8013 },-0.524382,13,5,9,"" } }};
					positionRollingBarrels[] = {{ 12306.832,4513.4663 }};
					directionRollingBarrels[] = {-168.907};
					positionTriggerRollingBarrels[] = {{ 12268.511,4488.474 }};
					radiusTriggerRollingBarrels[] = {10};
					positionOncomingTraffic[] = {{ 12805.263,4989.407 }};
					directionOncomingTraffic[] = {-154.203};
					waypointsOncomingTraffic[] = {{ { 12773.318,4812.5767 },{ 12609.413,4945.4453 },{ 12835.348,4456.5874 } }};
					positionTriggerOncomingTraffic[] = {{ 12606.836,4676.2334 }};
					radiusTriggerOncomingTraffic[] = {10};
				};
				class KillHouse
				{
					class Small
					{
						positionStart[] = {{ 4654.468,9694.461 }};
						directionStart[] = {-79.05644};
						positionEnd[] = {{ 4691.7197,9608.625 }};
						objectSet[] = {"ca\chernarus\data\scripts\armory\killHouse1.sqf"};
						positionAnchor[] = {{ 4625.39,9641.468 }};
						waypoints[] = {{ { 4608.231,9703.407 },{ 4596.4604,9643.498 },{ 4600.5435,9602.461 },{ 4591.199,9587.128 },{ 4608.5366,9571.207 },{ 4629.658,9593.27 },{ 4671.435,9587.5625 } }};
						class Targets
						{
							class Set1
							{
								class T1
								{
									position[] = {4620.943,9693.76};
									direction = -117.92614;
									upTime = 4;
									positionMove[] = {};
									moveTime = 0;
									type = 0;
									side = 0;
									size = 0;
									spawn = 0;
									positionTrigger[] = {4632.472,9699.443};
									radiusTrigger = 10;
								};
								class T2: T1
								{
									position[] = {4612.7695,9695.619};
									direction = -76.02189;
									upTime = 6;
									positionMove[] = {4613.4756,9698.9};
									moveTime = 2;
									type = 1;
									positionTrigger[] = {4625.1377,9700.419};
								};
								class T3: T2
								{
									position[] = {4614.1777,9710.096};
									direction = -80.856;
									upTime = 7;
									positionMove[] = {4613.729,9707.109};
									moveTime = 1.5;
									spawn = 1;
									positionTrigger[] = {4625.162,9700.642};
								};
								class T4: T1
								{
									position[] = {4601.6787,9707.359,3};
									direction = -80.856;
									upTime = 3;
									side = 2;
									spawn = 1;
									positionTrigger[] = {4611.9077,9703.514};
								};
								class T5: T1
								{
									position[] = {4601.0737,9705.746,3};
									direction = -81.122;
									upTime = 5;
									side = 0;
									spawn = 0;
									positionTrigger[] = {4611.868,9703.143};
								};
								class T6: T1
								{
									position[] = {4600.227,9710.685};
									direction = -80.70322;
									upTime = 7;
									positionMove[] = {4603.5566,9710.064};
									moveTime = 4;
									type = 1;
									side = 0;
									spawn = 0;
									positionTrigger[] = {4611.962,9703.813};
								};
								class T7: T1
								{
									position[] = {4593.1826,9682.562};
									direction = -127.04917;
									upTime = 4;
									side = 0;
									spawn = 0;
									positionTrigger[] = {4603.6445,9688.612};
								};
								class T7A: T7
								{
									position[] = {4593.15,9681.68,-0.3};
									direction = -127.04917;
									side = 1;
									spawn = 1;
									positionTrigger[] = {};
								};
								class T7B: T7A
								{
									position[] = {4592.7827,9683.818,-0.3};
									direction = -106.35532;
									spawn = 0;
								};
								class T8: T1
								{
									position[] = {4608.285,9676.645};
									direction = -210.795;
									upTime = 5;
									side = 2;
									spawn = 1;
									positionTrigger[] = {4602.8545,9682.779};
								};
								class T9: T1
								{
									position[] = {4610.672,9666.255};
									direction = -226.667;
									upTime = 6;
									side = 0;
									positionTrigger[] = {4600.9424,9670.162};
								};
								class T10: T1
								{
									position[] = {4590.095,9659.613};
									direction = -168.727;
									upTime = 7;
									positionMove[] = {4595.652,9658.327};
									moveTime = 2;
									type = 1;
									positionTrigger[] = {4599.331,9661.6};
								};
								class T11: T1
								{
									position[] = {4605.167,9623.734};
									direction = -218.344;
									upTime = 5;
									side = 0;
									positionTrigger[] = {4595.8613,9632.636};
								};
								class T11A: T1
								{
									position[] = {4605.7964,9637.13};
									direction = -256.126;
									side = 1;
									positionTrigger[] = {};
								};
								class T11B: T11A
								{
									position[] = {4605.7534,9635.979};
									direction = -243.239;
									spawn = 1;
								};
								class T11C: T11A
								{
									position[] = {4604.818,9635.069};
									direction = -220.679;
								};
								class T12: T1
								{
									position[] = {4612.565,9623.343};
									direction = -247.592;
									upTime = 4;
									side = 0;
									spawn = 1;
									positionTrigger[] = {4595.8286,9631.466};
								};
								class T13: T1
								{
									position[] = {4586.474,9609.679};
									direction = -98.0054;
									upTime = 7;
									side = 0;
									spawn = 0;
									positionTrigger[] = {4595.2437,9620.298};
								};
								class T14: T1
								{
									position[] = {4586.995,9599.7705};
									direction = -148.175;
									upTime = 6;
									side = 2;
									positionTrigger[] = {4595.728,9615.285};
								};
								class T15: T1
								{
									position[] = {4590.3306,9602.825};
									direction = -173.984;
									upTime = 7;
									spawn = 1;
									positionTrigger[] = {4594.533,9615.332};
								};
								class T16: T1
								{
									position[] = {4612.9937,9606.2295};
									direction = -252.048;
									upTime = 5;
									positionTrigger[] = {4600.9434,9602.381};
								};
								class T16A: T1
								{
									position[] = {4612.4976,9606.765,-0.3};
									direction = -252.048;
									side = 1;
									positionTrigger[] = {};
								};
								class T17: T1
								{
									position[] = {4614.686,9603.248,1.5};
									direction = -266.955;
									upTime = 6;
									positionTrigger[] = {4601.562,9602.855};
								};
								class T18: T1
								{
									position[] = {4602.33,9585.215};
									direction = -146.23741;
									upTime = 7;
									positionMove[] = {4599.796,9586.977};
									moveTime = 1.5;
									type = 1;
									spawn = 1;
									positionTrigger[] = {4598.865,9589.579};
								};
								class T19: T1
								{
									position[] = {4590.4727,9585.486};
									direction = -231.5184;
									upTime = 3;
									positionTrigger[] = {4588.7134,9586.441};
									radiusTrigger = 5;
								};
								class T20: T19
								{
									position[] = {4591.596,9586.093};
									direction = -237.219;
									positionTrigger[] = {4588.901,9586.427};
								};
								class T21: T1
								{
									position[] = {4626.68,9556.542};
									direction = -234.642;
									upTime = 6;
									spawn = 1;
									positionTrigger[] = {4607.053,9567.198};
								};
								class T22: T1
								{
									position[] = {4649.194,9592.894};
									direction = -260.00345;
									upTime = 5;
									positionTrigger[] = {4638.268,9590.956};
								};
								class T22A: T1
								{
									position[] = {4637.7427,9591.892};
									direction = -275.895;
									side = 1;
									spawn = 1;
									positionTrigger[] = {};
								};
								class T22B: T22A
								{
									position[] = {4637.319,9590.406};
									direction = -231.068;
									spawn = 0;
								};
								class T22C: T22A
								{
									position[] = {4654.051,9594.472};
									direction = -277.051;
								};
								class T23: T1
								{
									position[] = {4647.9956,9587.153};
									direction = -245.4114;
									upTime = 6;
									positionTrigger[] = {4638.171,9590.383};
								};
								class T24: T1
								{
									position[] = {4668.754,9576.744};
									direction = -218.422;
									upTime = 7;
									positionMove[] = {4660.849,9571.123};
									moveTime = 3;
									type = 1;
									spawn = 1;
									side = 2;
									positionTrigger[] = {4651.2554,9582.7705};
								};
								class T25: T1
								{
									position[] = {4675.3857,9607.918};
									direction = -343.5084;
									upTime = 4;
									spawn = 1;
									positionTrigger[] = {4672.224,9592.772};
								};
								class T26: T1
								{
									position[] = {4683.1265,9597.621};
									direction = -304.14;
									upTime = 5;
									positionTrigger[] = {4673.458,9592.704};
								};
							};
						};
					};
					class Large
					{
						positionStart[] = {{ 2094.5635,5142.597 }};
						directionStart[] = {90.35084};
						positionEnd[] = {{ 1734.3617,5093.208 }};
						objectSet[] = {"ca\chernarus\data\scripts\armory\killHouseLarge1.sqf"};
						positionAnchor[] = {{ 2011.8751,5144.038 }};
						waypoints[] = {{ { 2195.27,5161.696 },{ 2244.8481,5138.2964 },{ 2299.7942,5202.5 },{ 2271.1743,5242.9517 },{ 2304.7458,5299.4326 },{ 1918.2601,5294.5986 } }};
						class Targets
						{
							class Set1
							{
								class T1
								{
									position[] = {2226.8413,5169.032};
									direction = 428.31;
									upTime = 7;
									positionMove[] = {};
									moveTime = 0;
									type = 0;
									side = 0;
									size = 0;
									spawn = 0;
									positionTrigger[] = {2188.9995,5158.987};
									radiusTrigger = 20;
								};
								class T1A: T1
								{
									position[] = {2223.2769,5171.0435};
									direction = 420.029;
									upTime = 6;
									size = 1;
									positionTrigger[] = {2188.9995,5158.987};
								};
								class T2: T1
								{
									position[] = {2208.262,5142.2236};
									direction = 546.34;
									upTime = 8;
									spawn = 1;
									positionTrigger[] = {2215.6838,5150.1226};
								};
								class T2A: T2
								{
									position[] = {2211.5251,5142.73};
									direction = 521.097;
									upTime = 6;
									spawn = 0;
								};
								class T2B: T2
								{
									position[] = {2215.9478,5141.409};
									direction = 498.881;
									upTime = 8;
									spawn = 0;
								};
								class T3: T1
								{
									position[] = {2218.5713,5138.305};
									direction = 498.881;
									upTime = 8;
									positionMove[] = {2221.688,5141.628};
									moveTime = 1.5;
									type = 1;
									spawn = 1;
									positionTrigger[] = {2217.4465,5148.7866};
								};
								class T4: T1
								{
									position[] = {2244.8047,5145.1563};
									direction = 481.229;
									upTime = 6;
									positionMove[] = {2241.02,5137.9346};
									moveTime = 2.5;
									type = 1;
									size = 1;
									positionTrigger[] = {2235.923,5139.9766};
								};
								class T5: T1
								{
									position[] = {2258.1746,5143.341,1.2};
									direction = 457.784;
									upTime = 8;
									spawn = 1;
									positionTrigger[] = {2243.6765,5137.973};
								};
								class T5A: T5
								{
									position[] = {2257.6216,5141.0684,7.3};
									direction = 463.099;
									upTime = 10;
									spawn = 0;
								};
								class T5B: T5
								{
									position[] = {2253.7783,5137.688,1.2};
									direction = 475.085;
									upTime = 9;
									spawn = 0;
								};
								class T5C: T5
								{
									position[] = {2250.6636,5133.6606,4.3};
									direction = 486.949;
									upTime = 9;
								};
								class T6: T1
								{
									position[] = {2247.8303,5159.9116};
									direction = 387.54;
									upTime = 7;
									positionMove[] = {2255.2764,5156.4995};
									moveTime = 1.5;
									type = 1;
									positionTrigger[] = {2255.2754,5154.526};
								};
								class T7: T1
								{
									position[] = {2270.3635,5184.7295};
									direction = 396.126;
									upTime = 7;
									positionMove[] = {2274.0508,5182.807};
									moveTime = 2;
									type = 1;
									positionTrigger[] = {2274.4119,5177.0522};
								};
								class T7A: T7
								{
									position[] = {2283.3057,5177.0264};
									direction = 396.126;
									upTime = 8;
									positionMove[] = {2280.2883,5179.2065};
									moveTime = 2.5;
									spawn = 1;
								};
								class T8: T1
								{
									position[] = {2315.901,5216.2563};
									direction = 423.249;
									upTime = 8;
									positionTrigger[] = {2299.8647,5210.855};
								};
								class T8A: T8
								{
									position[] = {2315.416,5220.4526};
									direction = 376.954;
									upTime = 6;
									spawn = 1;
								};
								class T8B: T8
								{
									position[] = {2318.1077,5215.724};
									direction = 417.938;
									upTime = 8;
									spawn = 1;
									size = 1;
								};
								class T9: T1
								{
									position[] = {2266.4702,5246.295};
									direction = 302.317;
									upTime = 6;
									side = 2;
									spawn = 1;
									positionTrigger[] = {2272.9048,5240.4487};
								};
								class T9A: T9
								{
									position[] = {2269.1465,5249.915};
									direction = 338.726;
									upTime = 7;
									side = 2;
								};
								class T10: T1
								{
									position[] = {2270.2703,5330.6396};
									direction = 339.581;
									upTime = 9;
									side = 0;
									positionTrigger[] = {2294.4507,5304.9795};
								};
								class T10A: T10
								{
									position[] = {2275.553,5333.927};
									direction = 376.441;
									upTime = 8;
									spawn = 1;
								};
								class T10B: T10
								{
									position[] = {2271.618,5335.005};
									direction = 365.838;
									upTime = 8;
									spawn = 1;
								};
								class T10C: T10
								{
									position[] = {2274.4653,5331.991};
									direction = 0.756105;
									side = 1;
									spawn = 1;
									positionTrigger[] = {};
								};
								class T10D: T10C
								{
									position[] = {2272.2012,5331.9907};
									direction = -16.8946;
								};
								class T10E: T10C
								{
									position[] = {2273.0637,5333.445};
									direction = 15.0818;
									spawn = 0;
								};
								class T10F: T10C
								{
									position[] = {2270.7458,5332.8525};
									direction = 1.92643;
									spawn = 0;
								};
								class T11: T1
								{
									position[] = {2076.0632,5287.8486};
									direction = 288.088;
									upTime = 8;
									side = 0;
									size = 1;
									positionTrigger[] = {2142.9211,5294.2007};
									radiusTrigger = 40;
								};
								class T12: T1
								{
									position[] = {2018.5386,5276.121};
									direction = 229.045;
									upTime = 10;
									positionTrigger[] = {2031.0946,5288.0054};
									radiusTrigger = 40;
								};
								class T12A: T12
								{
									position[] = {2016.6198,5277.593};
									direction = 248.49;
									upTime = 12;
									spawn = 1;
								};
								class T12B: T12
								{
									position[] = {2009.9294,5279.4917};
									direction = 255.209;
									upTime = 8;
									spawn = 1;
								};
								class T12C: T12
								{
									position[] = {2016.699,5271.4497};
									direction = 255.084;
									upTime = 8;
								};
								class T13: T1
								{
									position[] = {1830.04,5269.207};
									direction = 281.054;
									upTime = 10;
									positionMove[] = {1858.2943,5299.5117};
									moveTime = 4;
									size = 1;
									type = 1;
									positionTrigger[] = {1927.3126,5294.998};
									radiusTrigger = 40;
								};
								class T14: T1
								{
									position[] = {1860.3124,5193.4917};
									direction = 230.029;
									upTime = 13;
									positionTrigger[] = {1875.4718,5208.27};
									radiusTrigger = 40;
								};
								class T14A: T14
								{
									position[] = {1871.8903,5186.6885};
									direction = 200.36;
									upTime = 11;
									spawn = 1;
								};
								class T14B: T14
								{
									position[] = {1856.7703,5182.966};
									direction = 256.342;
									upTime = 20;
								};
								class T15: T1
								{
									position[] = {1806.0093,5091.158};
									direction = 200.036;
									upTime = 8;
									positionTrigger[] = {1827.7303,5117.986};
									radiusTrigger = 40;
								};
								class T15A: T15
								{
									position[] = {1806.5607,5089.461};
									direction = 192.134;
									side = 1;
									spawn = 1;
									positionTrigger[] = {};
								};
								class T15B: T15A
								{
									position[] = {1804.3556,5089.9697};
									direction = 223.993;
									spawn = 0;
								};
							};
						};
					};
					class Water
					{
						positionStart[] = {{ 13265.838,9374.164 }};
						directionStart[] = {-32.25884};
						positionEnd[] = {{ 13354.544,10221.939 }};
						objectSet[] = {"ca\chernarus\data\scripts\armory\killHouseWater1.sqf"};
						positionAnchor[] = {{ 13302.855,9781.719 }};
						waypoints[] = {{ { 13085.451,9598.675 },{ 13240.175,9773.743 },{ 13063.014,9773.857 },{ 13268.607,9898.617 } }};
						class Targets
						{
							class Set1
							{
								class T1
								{
									position[] = {13029.741,9654.733};
									direction = 345.354;
									upTime = 7;
									positionMove[] = {};
									moveTime = 0;
									type = 0;
									side = 0;
									size = 0;
									spawn = 0;
									positionTrigger[] = {13084.285,9608.924};
									radiusTrigger = 60;
								};
								class T1A: T1
								{
									position[] = {13034.882,9655.124};
									direction = 346.135;
									upTime = 8;
									spawn = 1;
								};
								class T1B: T1
								{
									position[] = {13039.108,9668.672};
									direction = 351.301;
									upTime = 7;
								};
								class T1C: T1
								{
									position[] = {13043.661,9668.423};
									direction = 353.415;
									upTime = 8;
									spawn = 1;
								};
								class T1D: T1
								{
									position[] = {13048.369,9671.822};
									direction = 345.703;
									upTime = 10;
								};
								class T2: T1
								{
									position[] = {13106.535,9706.594};
									direction = 325.726;
									upTime = 8;
									positionMove[] = {13112.85,9695.029};
									moveTime = 2;
									type = 1;
									positionTrigger[] = {13142.364,9664.882};
								};
								class T2A: T2
								{
									position[] = {13110.547,9710.238};
									direction = 328.887;
									upTime = 10;
									positionMove[] = {13114.491,9697.766};
									moveTime = 2;
								};
								class T3: T2
								{
									position[] = {13131.029,9721.358};
									direction = 323.098;
									upTime = 12;
									positionMove[] = {13140.128,9726.163};
									moveTime = 3;
									positionTrigger[] = {13173.505,9681.699};
								};
								class T3A: T3
								{
									position[] = {13135.725,9721.328};
									direction = 333.766;
									upTime = 8;
									positionMove[] = {};
									type = 0;
									spawn = 1;
									side = 2;
								};
								class T4: T1
								{
									position[] = {13196.515,9752.758};
									direction = 307.533;
									side = 1;
									positionTrigger[] = {};
								};
								class T4A: T4
								{
									position[] = {13197.004,9754.3};
									direction = 273.802;
									spawn = 1;
								};
								class T5: T1
								{
									position[] = {13010.213,9753.834,5.8};
									direction = 274.867;
									upTime = 7;
									size = 1;
									positionTrigger[] = {13055.928,9773.798};
								};
								class T5A: T5
								{
									position[] = {13010.476,9756.234,5.8};
									direction = 276.549;
									upTime = 9;
									size = 0;
									spawn = 1;
								};
								class T5B: T5
								{
									position[] = {13011.08,9758.272,5.8};
									direction = 276.361;
									upTime = 10;
									size = 0;
								};
								class T6: T1
								{
									position[] = {13012.962,9790.189,5.8};
									direction = 262.598;
									upTime = 10;
									spawn = 1;
									side = 2;
									positionTrigger[] = {13032.003,9798.213};
								};
								class T6A: T6
								{
									position[] = {13012.846,9791.926,5.8};
									direction = 295.817;
								};
								class T7: T1
								{
									position[] = {13144.436,9847.655,5.8};
									direction = 399.089;
									upTime = 10;
									side = 2;
									positionTrigger[] = {13139.76,9813.263};
								};
								class T7A: T7
								{
									position[] = {13146.296,9851.366,6.6};
									direction = 357.755;
									upTime = 11;
									side = 0;
								};
								class T7B: T7
								{
									position[] = {13145.411,9853.25,6.6};
									direction = 403.987;
									upTime = 12;
									side = 0;
									spawn = 1;
								};
								class T8: T2
								{
									position[] = {13174.454,9903.92,-0.4};
									direction = 335.307;
									upTime = 15;
									positionMove[] = {13221.301,9922.515,-0.4};
									moveTime = 5;
									size = 1;
									positionTrigger[] = {13238.863,9865.975};
								};
								class T9: T1
								{
									position[] = {13257.326,9932.394};
									direction = 338.875;
									upTime = 14;
									positionTrigger[] = {13284.843,9896.292};
								};
								class T9A: T9
								{
									position[] = {13258.572,9932.826};
									direction = 343.983;
									upTime = 13;
									spawn = 1;
								};
								class T9B: T9
								{
									position[] = {13261.592,9936.557};
									direction = 351.336;
									upTime = 8;
								};
								class T10: T1
								{
									position[] = {13266.578,9981.588};
									direction = 294.114;
									upTime = 8;
									positionTrigger[] = {13303.959,9983.041};
								};
								class T10A: T10
								{
									position[] = {13263.899,9978.061};
									direction = 273.371;
									upTime = 9;
									spawn = 1;
								};
								class T10B: T10
								{
									position[] = {13263.899,9978.061};
									direction = 273.371;
									side = 1;
									positionTrigger[] = {};
								};
								class T10C: T10B
								{
									position[] = {13264.358,9983.046};
									direction = 287.217;
								};
								class T10D: T10B
								{
									position[] = {13264.964,9984.71};
									direction = 309.309;
									spawn = 1;
								};
								class T11: T1
								{
									position[] = {13280.712,10047.67};
									direction = 306.055;
									upTime = 8;
									spawn = 1;
									positionTrigger[] = {13324.923,10049.91};
								};
								class T11A: T11
								{
									position[] = {13281.423,10048.793};
									direction = 329.551;
									upTime = 9;
								};
								class T12: T2
								{
									position[] = {13307.406,10159.895,-0.4};
									direction = 354.346;
									upTime = 10;
									positionMove[] = {13310.531,10121.082,-0.4};
									moveTime = 3;
									size = 1;
									spawn = 1;
									positionTrigger[] = {13332.518,10108.107};
								};
								class T13: T1
								{
									position[] = {13267.241,9802.07,-0.4};
									direction = 391.664;
									upTime = 7;
									spawn = 1;
									size = 1;
									positionTrigger[] = {13248.573,9752.04};
								};
								class T13A: T13
								{
									position[] = {13278.413,9793.026,-0.4};
									direction = 416.294;
									upTime = 9;
								};
							};
						};
					};
				};
			};
		};
		safePositionAnchor[] = {9122.17,5178.92};
		safePositionRadius = 8500;
	};
};
class CfgWorldList
{
	class Bootcamp_ACR{};
};
class CfgMissions
{
	class Cutscenes
	{
		class Bootcamp_ACRIntro1
		{
			directory = "ca\Bootcamp_ACR\data\scenes\intro.Bootcamp_ACR";
		};
	};
};
class CfgSurfaces
{
	class Default{};
	class Water{};
	class BCGrass1: Default
	{
		access = 2;
		files = "bc_trava1_*";
		rough = 0.11;
		dust = 0.1;
		soundEnviron = "grass";
		character = "BCGrassClutter";
		soundHit = "soft_ground";
	};
	class BCGrass2: Default
	{
		access = 2;
		files = "bc_trava2_*";
		rough = 0.11;
		dust = 0.1;
		soundEnviron = "grass";
		character = "BCTallGrassClutter";
		soundHit = "soft_ground";
	};
	class BCGrass3: Default
	{
		access = 2;
		files = "bc_trava3_*";
		rough = 0.11;
		dust = 0.1;
		soundEnviron = "grass";
		character = "BCSmallGrassClutter";
		soundHit = "soft_ground";
	};
	class BCGrassW1: Default
	{
		access = 2;
		files = "bc_travad1_*";
		rough = 0.11;
		dust = 0.1;
		soundEnviron = "grass";
		character = "BCGrassWClutter";
		soundHit = "soft_ground";
	};
	class BCGrassW2: Default
	{
		access = 2;
		files = "bc_travad2_*";
		rough = 0.11;
		dust = 0.1;
		soundEnviron = "grass";
		character = "BCTallGrassWClutter";
		soundHit = "soft_ground";
	};
	class BCForest1: Default
	{
		access = 2;
		files = "bc_les1_*";
		rough = 0.2;
		dust = 0.2;
		soundEnviron = "forest";
		character = "BCForestMixedClutter";
		soundHit = "soft_ground";
	};
	class BCForest2: Default
	{
		access = 2;
		files = "bc_les2_*";
		rough = 0.2;
		dust = 0.15;
		soundEnviron = "forest";
		character = "BCForestFirClutter";
		soundHit = "soft_ground";
	};
	class BCMudGround: Default
	{
		access = 2;
		files = "bc_pole_*";
		rough = 0.09;
		dust = 0.1;
		soundEnviron = "dirt";
		character = "SparseWeedsClutter";
		soundHit = "soft_ground";
	};
	class BCField1: Default
	{
		access = 2;
		files = "bc_oranice_*";
		rough = 0.15;
		dust = 0.25;
		soundEnviron = "dirt";
		character = "Empty";
		soundHit = "soft_ground";
	};
	class BCGrit1: Default
	{
		access = 2;
		files = "bc_sterk_*";
		rough = 0.1;
		dust = 0.25;
		soundEnviron = "gravel";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class BCHeather: Default
	{
		access = 2;
		files = "bc_vres_*";
		rough = 0.14;
		dust = 0.1;
		soundEnviron = "forest";
		character = "BCHeatherClutter";
		soundHit = "soft_ground";
	};
	class BCRock: Default
	{
		access = 2;
		files = "bc_skala_*";
		rough = 0.2;
		dust = 0.07;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class BCTarmac: Default
	{
		access = 2;
		files = "bc_asfalt_*";
		rough = 0.08;
		dust = 0.05;
		soundEnviron = "road";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class BCConcrete: Default
	{
		access = 2;
		files = "bc_beton_*";
		rough = 0.08;
		dust = 0.05;
		soundEnviron = "concrete_ext";
		character = "Empty";
		soundHit = "concrete";
	};
};
class CfgSurfaceCharacters
{
	class BCGrassClutter
	{
		probability[] = {0.5,0.25,0.25};
		names[] = {"GrassCrookedGreen","GrassCrookedForest","c_GrassCrooked_summer"};
	};
	class BCTallGrassClutter
	{
		probability[] = {0.4,0.05,0.85,0.07,0.02,0.01};
		names[] = {"GrassTall","AutumnFlowers","GrassBunch","GrassCrooked","WeedDead","WeedDeadSmall"};
	};
	class BCSmallGrassClutter
	{
		probability[] = {0.69,0.21};
		names[] = {"GrassCrookedGreenSmall","GrassCrookedSmall"};
	};
	class BCGrassWClutter
	{
		probability[] = {0.75,0.17,0.1,0.05,0.03};
		names[] = {"GrassCrooked","GrassCrookedGreen","AutumnFlowers","WeedDead","WeedDeadSmall"};
	};
	class BCTallGrassWClutter
	{
		probability[] = {0,0.01,0.4,0.2,0.03,0.02};
		names[] = {"GrassTall","AutumnFlowers","GrassBunch","GrassCrooked","WeedDead","WeedDeadSmall"};
	};
	class BCForestMixedClutter
	{
		probability[] = {0.2,0.1,0.2,0.001,0.003};
		names[] = {"GrassCrookedForest","FernAutumn","FernAutumnTall","MushroomsHorcak","MushroomsPrasivka"};
	};
	class BCForestFirClutter
	{
		probability[] = {0.4,0.1,0.1,0.15,0.05,0.003,0.005,0.008,0.004};
		names[] = {"BlueBerry","FernAutumn","FernAutumnTall","SmallPicea","RaspBerry","MushroomsHorcak","MushroomsPrasivka","MushroomsBabka","MushroomsMuchomurka"};
	};
	class BCHeatherClutter
	{
		probability[] = {0.15,0.5,0.3,0.1};
		names[] = {"BlueBerry","HeatherBrush","GrassCrooked","WeedSedge"};
	};
};
//};
