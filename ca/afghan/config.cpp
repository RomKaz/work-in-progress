////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:59 2014 : Source 'file' date Fri Oct 31 06:04:59 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class Mountains_ACR : config.bin{
class CfgPatches
{
	class Mountains_ACR
	{
		units[] = {"Mountains_ACR"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CA_E","CARoads_E","CARocks_E","CAStructures_E","CAMisc_E"};
	};
};
class CfgVehicles{};
class CfgWorlds
{
	class DefaultWorld
	{
		class Weather
		{
			class Overcast;
		};
	};
	class CAWorld: DefaultWorld
	{
		class Grid{};
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class DefaultClutter;
		class EnvSounds;
		class Weather: Weather
		{
			class Lighting;
			class Overcast: Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
			};
		};
	};
	class DefaultLighting;
	class Mountains_ACR: CAWorld
	{
		access = 3;
		worldId = 6;
		cutscenes[] = {"Mountains_ACR_Intro1"};
		description = "$STR_ACR_DN_MAP_MOUNTAINS";
		icon = "";
		worldName = "\ca\Afghan\Mountains_ACR.wrp";
		pictureMap = "";
		pictureShot = "\ca\Afghan\data\ui_selectisland_Afghan_ca.paa";
		plateFormat = "TK$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		longitude = 66;
		latitude = -34;
		elevationOffset = 2000;
		satelliteNormalBlendStart = 200;
		satelliteNormalBlendEnd = 250;
		class EnvSounds: EnvSounds
		{
			class Sea
			{
				name = "$STR_DN_SEA";
				sound[] = {"\ca\Sounds_E\sfx\lake_1",0.1,1};
				soundNight[] = {"\ca\Sounds_E\sfx\lake_3",0.17782794,1};
				volume = "sea";
			};
		};
		class OutsideTerrain
		{
			satellite = "ca\Afghan\data\s_satout_co.paa";
			enableTerrainSynth = 1;
			class Layers
			{
				class Layer0
				{
					nopx = "ca\Afghan\data\tk_polopoust_nopx.paa";
					texture = "ca\Afghan\data\tk_polopoust_co.paa";
				};
			};
		};
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 6400;
			class Zoom1
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = -1000;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = -10000;
			};
		};
		startTime = "16:20";
		startDate = "28/5/2009";
		startWeather = 0.4;
		startFog = 0.0;
		forecastWeather = 0.4;
		forecastFog = 0.0;
		centerPosition[] = {4100,2300,300};
		seagullPos[] = {6400,150.0,6400};
		ilsPosition[] = {5250.5,10993.5};
		ilsDirection[] = {-0.7071,0.08,-0.7071};
		ilsTaxiOff[] = {5554.5,11297.5,6035,11778,6055.5,11785.5,6075,11780,6117.5,11737.5,6124.5,11716,6113,11700,5851,11438.5};
		ilsTaxiIn[] = {5851,11438.5,5342.5,10929.5,5322.5,10925.5,5306.5,10936.5,5269,10974,5261,10991,5264.5,11007.5,5278,11021.5};
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
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					sky = "ca\Afghan\Data\sky_clear_sky.paa";
					skyR = "ca\Afghan\Data\sky_clear_lco.paa";
					horizon = "ca\Afghan\Data\sky_clear_horizont_sky.paa";
				};
				class Weather7: Weather1
				{
					sky = "ca\Afghan\Data\sky_veryclear_sky.paa";
					skyR = "ca\Afghan\Data\sky_clear_lco.paa";
					horizon = "ca\Afghan\Data\sky_veryclear_horizont_sky.paa";
				};
				class Weather2: Weather2
				{
					sky = "ca\Afghan\Data\sky_almostclear_sky.paa";
					skyR = "ca\Afghan\Data\sky_almostclear_lco.paa";
					horizon = "ca\Afghan\Data\sky_almostclear_horizont_sky.paa";
				};
				class Weather3: Weather3
				{
					sky = "ca\Afghan\Data\sky_semicloudy_sky.paa";
					skyR = "ca\Afghan\Data\sky_semicloudy_lco.paa";
					horizon = "ca\Afghan\Data\sky_semicloudy_horizont_sky.paa";
				};
				class Weather4: Weather4
				{
					sky = "ca\Afghan\Data\sky_cloudy_sky.paa";
					skyR = "ca\Afghan\Data\sky_cloudy_lco.paa";
					horizon = "ca\Afghan\Data\sky_cloudy_horizont_sky.paa";
				};
				class Weather5: Weather5
				{
					sky = "ca\Afghan\Data\sky_mostlycloudy_sky.paa";
					skyR = "ca\Afghan\Data\sky_mostlycloudy_lco.paa";
					horizon = "ca\Afghan\Data\sky_mostlycloudy_horizont_sky.paa";
				};
				class Weather6: Weather6
				{
					sky = "ca\Afghan\Data\sky_overcast_sky.paa";
					skyR = "ca\Afghan\Data\sky_overcast_lco.paa";
					horizon = "ca\Afghan\Data\sky_overcast_horizont_sky.paa";
				};
			};
		};
		clutterGrid = 1.5;
		clutterDist = 125;
		noDetailDist = 40;
		fullDetailDist = 10;
		midDetailTexture = "ca\Afghan\data\tk_middle_mco.paa";
		minTreesInForestSquare = 4;
		minRocksInRockSquare = 3;
		class clutter
		{
			class TK_GrassDry: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_GrassDesert_GroupSoft_EP1.p3d";
				affectedByWind = 0.7;
				swLighting = 1;
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			class TK_GrassDryLong: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_GrassDryLong_EP1.p3d";
				affectedByWind = 0.85;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.0;
			};
			class TK_GrassGreen: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_GrassGreen_EP1.p3d";
				affectedByWind = 0.7;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.1;
			};
			class TK_GrassGreenLong: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_GrassGreenLong_EP1.p3d";
				affectedByWind = 0.8;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.0;
			};
			class TK_BrushHard: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_Brush_Hard_EP1.p3d";
				affectedByWind = 0.4;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.3;
			};
			class TK_BrushSoft: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_Brush_Soft_EP1.p3d";
				affectedByWind = 0.8;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.4;
			};
			class TK_PlantsViolet: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_Plants_Violet_EP1.p3d";
				affectedByWind = 0.7;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.25;
			};
			class TK_PlantsWhite: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_Plants_White_EP1.p3d";
				affectedByWind = 0.7;
				swLighting = 1;
				scaleMin = 0.85;
				scaleMax = 1.1;
			};
			class TK_Weed1: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_Weed_1_EP1.p3d";
				affectedByWind = 0.65;
				swLighting = 1;
				scaleMin = 0.65;
				scaleMax = 1.0;
			};
			class TK_WeedThistle: DefaultClutter
			{
				model = "ca\plants_E\Clutter\c_Weed_Thistle_EP1.p3d";
				affectedByWind = 0.7;
				swLighting = 1;
				scaleMin = 1.0;
				scaleMax = 1.25;
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
				};
			};
		};
		class Names
		{
			class city_FeeruzAbad
			{
				name = "$STR_EP1_LOCATION_FEERUZABAD";
				position[] = {4485.21,6158.22};
				type = "NameCityCapital";
				speech[] = {"FeeruzAbad"};
				radiusA = 300.0;
				radiusB = 300.0;
				angle = 0.0;
			};
			class city_Anar
			{
				name = "$STR_EP1_LOCATION_ANAR";
				position[] = {5443.22,5659.43};
				type = "NameCity";
				speech[] = {"Anar"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class city_ChakChak
			{
				name = "$STR_EP1_LOCATION_CHAKCHAK";
				position[] = {3788.42,754.72};
				type = "NameCity";
				speech[] = {"ChakChak"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class city_Sakhee
			{
				name = "$STR_EP1_LOCATION_SAKHEE";
				position[] = {3001.49,4284.47};
				type = "NameCity";
				speech[] = {"Sakhee"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class city_Chaman
			{
				name = "$STR_EP1_LOCATION_CHAMAN";
				position[] = {-15.7,2810.97};
				type = "NameCity";
				speech[] = {"Chaman"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class vill_Khushab
			{
				name = "$STR_EP1_LOCATION_KHUSHAB";
				position[] = {856.64,5732.22};
				type = "NameVillage";
				speech[] = {"Khushab"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Jilavur
			{
				name = "$STR_EP1_LOCATION_JILAVUR";
				position[] = {1949.71,5026.47};
				type = "NameVillage";
				speech[] = {"Jilavur"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Shukurkalay
			{
				name = "$STR_EP1_LOCATION_SHUKURKALAY";
				position[] = {941.61,3582.72};
				type = "NameVillage";
				speech[] = {"Shukurkalay"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class vill_Kakaru
			{
				name = "$STR_EP1_LOCATION_KAKARU";
				position[] = {4725.96,4740.72};
				type = "NameVillage";
				speech[] = {"Kakaru"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Landay
			{
				name = "$STR_EP1_LOCATION_LANDAY";
				position[] = {1363.36,349.72};
				type = "NameVillage";
				speech[] = {"Landay"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Huzrutimam
			{
				name = "$STR_EP1_LOCATION_HUZRUTIMAM";
				position[] = {5345.24,1245.22};
				type = "NameVillage";
				speech[] = {"Huzrutimam"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Sultansafee
			{
				name = "$STR_EP1_LOCATION_SULTANSAFEE";
				position[] = {5991.17,1955.22};
				type = "NameVillage";
				speech[] = {"Sultansafee"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_DarbangPass
			{
				name = "$STR_EP1_LOCATION_DARBANGPASS";
				position[] = {4690.96,3674.97};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_SareSangPass
			{
				name = "$STR_EP1_LOCATION_SARESANGPASS";
				position[] = {3372.6,3118.73};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_Ahmaday
			{
				name = "$STR_EP1_LOCATION_AHMADAY";
				position[] = {2985.42,1284.22};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_LoyManaraOilfield
			{
				name = "$STR_EP1_LOCATION_LOYMANARAOILFIELD";
				position[] = {6234.36,1384.93};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class water_Daryache
			{
				name = "$STR_EP1_LOCATION_DARYACHE";
				position[] = {4633.0,5032.64};
				type = "NameMarine";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_04
			{
				name = "";
				position[] = {3808.6,5009.27};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_05
			{
				name = "";
				position[] = {2533.17,4571.14};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_06
			{
				name = "";
				position[] = {1036.98,2332.08};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_07
			{
				name = "";
				position[] = {3143.08,2723.58};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_Taj
			{
				name = "$STR_EP1_LOCATION_TAJ";
				position[] = {171.68,2454.09};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_08
			{
				name = "";
				position[] = {4166.57,2459.31};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_09
			{
				name = "";
				position[] = {5134.08,3220.19};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class veg_SiahChub
			{
				name = "$STR_EP1_LOCATION_SIAHCHUB";
				position[] = {4300.71,4512.59};
				type = "VegetationFir";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class veg_HazarDarakht
			{
				name = "$STR_EP1_LOCATION_HAZARDARAKHT";
				position[] = {606.29,4001.9};
				type = "VegetationFir";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_ChakChak
			{
				name = "";
				position[] = {3799.9,688.03};
				type = "CityCenter";
				neighbors[] = {"ACityC_Sakhee","ACityC_Kakaru","ACityC_Huzrutimam"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Khushab
			{
				name = "";
				position[] = {949.76,5686.92};
				type = "CityCenter";
				neighbors[] = {"ACityC_Mulladoost","ACityC_FeeruzAbad","ACityC_Sakhee"};
				radiusA = 100.0;
				radiusB = 163.0;
				angle = 0.0;
			};
			class ACityC_Sakhee
			{
				name = "";
				position[] = {2908.64,4092.66};
				type = "CityCenter";
				neighbors[] = {"ACityC_Kakaru","ACityC_ChakChak","ACityC_Khushab","ACityC_FeeruzAbad"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Kakaru
			{
				name = "";
				position[] = {4745.5,4691.31};
				type = "CityCenter";
				neighbors[] = {"ACityC_FeeruzAbad","ACityC_Anar","ACityC_Sakhee","ACityC_ChakChak"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_FeeruzAbad
			{
				name = "";
				position[] = {4685.26,6149.96};
				type = "CityCenter";
				neighbors[] = {"ACityC_Falar","ACityC_Anar","ACityC_Kakaru","ACityC_Sakhee","ACityC_Khushab"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Anar
			{
				name = "";
				position[] = {5397.28,5780.72};
				type = "CityCenter";
				neighbors[] = {"ACityC_Falar","ACityC_FeeruzAbad","ACityC_Kakaru","ACityC_Timurkalay"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Sagram
			{
				name = "";
				position[] = {8699.95,9990.87};
				type = "CityCenter";
				neighbors[] = {"ACityC_Rasman","ACityC_Zavarak","ACityC_Imarat"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 360.0;
			};
			class AStrong_ChakChak_01
			{
				name = "";
				position[] = {3604.71,516.41};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 267.656;
			};
			class AStrong_ChakChak_02
			{
				name = "";
				position[] = {4231.8,675.69};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 329.979;
			};
			class AStrong_ChakChak_03
			{
				name = "";
				position[] = {3770.0,901.15};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 342.503;
			};
			class AStrong_Huzrutimam_01
			{
				name = "";
				position[] = {5213.88,815.88};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 261.391;
			};
			class AStrong_Huzrutimam_02
			{
				name = "";
				position[] = {5624.91,1156.03};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 65.81;
			};
			class AStrong_Huzrutimam_03
			{
				name = "";
				position[] = {5648.32,1340.15};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 135.694;
			};
			class AStrong_Huzrutimam_04
			{
				name = "";
				position[] = {5451.74,1666.59};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 71.016;
			};
			class AStrong_LoyManara_01
			{
				name = "";
				position[] = {8076.58,2395.72};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 178.104;
			};
			class AStrong_LoyManara_02
			{
				name = "";
				position[] = {7758.08,2434.09};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 151.335;
			};
			class AStrong_LoyManara_03
			{
				name = "";
				position[] = {7844.32,2980.07};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.698;
			};
			class AStrong_LoyManara_04
			{
				name = "";
				position[] = {8485.33,2696.97};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 82.137;
			};
			class AStrong_Chardarakht_01
			{
				name = "";
				position[] = {9216.77,2334.01};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 284.768;
			};
			class AStrong_Chardarakht_02
			{
				name = "";
				position[] = {9357.35,2431.96};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 246.465;
			};
			class AStrong_Chardarakht_03
			{
				name = "";
				position[] = {10022.2,2668.94};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 145.127;
			};
			class AStrong_Khushab_01
			{
				name = "";
				position[] = {757.77,5927.34};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 237.473;
			};
			class AStrong_Khushab_02
			{
				name = "";
				position[] = {1069.25,5313.55};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 285.793;
			};
			class AStrong_Khushab_03
			{
				name = "";
				position[] = {1161.48,5687.7};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 111.748;
			};
			class AStrong_Sakhee_01
			{
				name = "";
				position[] = {3321.44,4251.49};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 316.633;
			};
			class AStrong_Sakhee_02
			{
				name = "";
				position[] = {3033.58,3913.72};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 125.24;
			};
			class AStrong_Sakhee_03
			{
				name = "";
				position[] = {3054.6,4470.49};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.761;
			};
			class AStrong_Sakhee_04
			{
				name = "";
				position[] = {3026.97,4430.16};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 184.62;
			};
			class AStrong_Kakaru_01
			{
				name = "";
				position[] = {4788.02,4456.47};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 181.756;
			};
			class AStrong_Kakaru_02
			{
				name = "";
				position[] = {4534.44,5286.37};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 46.734;
			};
			class AStrong_Kakaru_03
			{
				name = "";
				position[] = {4584.9,4865.08};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 132.547;
			};
			class AStrong_Kakaru_04
			{
				name = "";
				position[] = {4511.62,4894.21};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 16.671;
			};
			class AStrong_FeeruzAbad_01
			{
				name = "";
				position[] = {4416.76,6112.49};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 223.965;
			};
			class AStrong_FeeruzAbad_02
			{
				name = "";
				position[] = {4515.78,5812.89};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 292.99;
			};
			class AStrong_Anar_01
			{
				name = "";
				position[] = {5925.91,5954.19};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 75.755;
			};
			class AStrong_Anar_02
			{
				name = "";
				position[] = {5352.09,5119.4};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 83.659;
			};
			class AStrong_Anar_03
			{
				name = "";
				position[] = {5049.13,5785.76};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 73.86;
			};
			class AStrong_Falar_01
			{
				name = "";
				position[] = {5364.99,7025.47};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 176.246;
			};
			class AStrong_Falar_02
			{
				name = "";
				position[] = {5678.42,7314.47};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 74.037;
			};
			class AStrong_Falar_03
			{
				name = "";
				position[] = {5184.97,7837.01};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 33.754;
			};
			class AStrong_Timurkalay_01
			{
				name = "";
				position[] = {8191.27,4865.97};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 189.156;
			};
			class AStrong_Timurkalay_02
			{
				name = "";
				position[] = {7766.24,5106.73};
				type = "StrongpointArea";
				radiusA = 1000.0;
				radiusB = 100.0;
				angle = 263.504;
			};
			class AStrong_Timurkalay_03
			{
				name = "";
				position[] = {7912.97,5391.32};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 298.932;
			};
			class AStrong_Timurkalay_04
			{
				name = "";
				position[] = {8422.17,5796.89};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 18.14;
			};
			class AStrong_Garmsar_01
			{
				name = "";
				position[] = {9698.19,6204.23};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 336.712;
			};
			class AStrong_Garmsar_02
			{
				name = "";
				position[] = {10209.6,6531.39};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 199.483;
			};
			class AStrong_Garmsar_03
			{
				name = "";
				position[] = {10574.23,6102.21};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 315.207;
			};
			class AStrong_Imarat_01
			{
				name = "";
				position[] = {7396.91,7974.01};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 288.122;
			};
			class AStrong_Imarat_02
			{
				name = "";
				position[] = {7988.69,7430.43};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 130.049;
			};
			class AStrong_Imarat_03
			{
				name = "";
				position[] = {7863.85,7933.41};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 9.203;
			};
			class AStrong_Mulladoost_01
			{
				name = "";
				position[] = {1345.62,7497.56};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 210.255;
			};
			class AStrong_Mulladoost_02
			{
				name = "";
				position[] = {1236.77,7847.13};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 288.849;
			};
			class AStrong_Mulladoost_03
			{
				name = "";
				position[] = {1573.74,7791.51};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 97.501;
			};
			class AStrong_Gospandi_01
			{
				name = "";
				position[] = {2937.94,8363.95};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 225.202;
			};
			class AStrong_Gospandi_02
			{
				name = "";
				position[] = {3112.27,8902.38};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 359.585;
			};
			class AStrong_Gospandi_03
			{
				name = "";
				position[] = {3254.53,8746.08};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 293.875;
			};
			class AStrong_Bastam_01
			{
				name = "";
				position[] = {5339.38,8763.12};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 1.56;
			};
			class AStrong_Bastam_04
			{
				name = "";
				position[] = {4816.46,8995.81};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 81.836;
			};
			class AStrong_Bastam_03
			{
				name = "";
				position[] = {4831.74,9416.83};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 45.405;
			};
			class AStrong_Nagara_01
			{
				name = "";
				position[] = {2437.98,10225.43};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 306.654;
			};
			class AStrong_Nagara_02
			{
				name = "";
				position[] = {2444.43,9643.83};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 89.818;
			};
			class AStrong_Nagara_03
			{
				name = "";
				position[] = {2702.03,10201.79};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 99.979;
			};
			class AStrong_Rasman_01
			{
				name = "";
				position[] = {5213.02,10720.88};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 224.68;
			};
			class AStrong_Rasman_02
			{
				name = "";
				position[] = {5802.52,11719.82};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 254.037;
			};
			class AStrong_Rasman_03
			{
				name = "";
				position[] = {6010.99,11053.36};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 101.553;
			};
			class AStrong_Rasman_04
			{
				name = "";
				position[] = {6041.2,11695.61};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 53.64;
			};
			class AStrong_Nur_01
			{
				name = "";
				position[] = {1675.66,11641.56};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 163.125;
			};
			class AStrong_Nur_02
			{
				name = "";
				position[] = {982.63,11363.37};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 200.362;
			};
			class AStrong_Nur_03
			{
				name = "";
				position[] = {1520.84,12218.52};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 35.096;
			};
			class AStrong_Shamali_01
			{
				name = "";
				position[] = {3545.91,11591.48};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 169.326;
			};
			class AStrong_Shamali_02
			{
				name = "";
				position[] = {4084.92,11847.6};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 167.834;
			};
			class AStrong_Shamali_03
			{
				name = "";
				position[] = {3649.03,12194.5};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 181.276;
			};
			class AStrong_Sagrami_01
			{
				name = "";
				position[] = {9075.21,10093.1};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 14.615;
			};
			class AStrong_Sagrami_02
			{
				name = "";
				position[] = {8461.69,10090.67};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 320.92;
			};
			class AStrong_Sagrami_03
			{
				name = "";
				position[] = {8600.84,9878.36};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 182.7;
			};
			class AStrong_Zavarak_01
			{
				name = "";
				position[] = {8910.62,11879.13};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 319.144;
			};
			class AStrong_Zavarak_02
			{
				name = "";
				position[] = {9387.33,11212.9};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 271.893;
			};
			class AStrong_Zavarak_03
			{
				name = "";
				position[] = {9558.48,11573.97};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 166.344;
			};
			class AStrong_Ravanay_01
			{
				name = "";
				position[] = {10836.66,7977.87};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 9.435;
			};
			class AFlat_001
			{
				name = "";
				position[] = {2361.3,436.22};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_005
			{
				name = "";
				position[] = {3407.8,1642.72};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_008
			{
				name = "";
				position[] = {4374.87,306.73};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_009
			{
				name = "";
				position[] = {4743.97,941.41};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_010
			{
				name = "";
				position[] = {6082.21,973.72};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_031
			{
				name = "";
				position[] = {6090.2,4848.11};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_032
			{
				name = "";
				position[] = {5894.08,4879.56};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlatCS_ChakChak01
			{
				name = "";
				position[] = {3577.36,557.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 197.961;
			};
			class AFlatCS_ChakChak02
			{
				name = "";
				position[] = {3807.27,791.75};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 26.936;
			};
			class AFlatCS_ChakChak03
			{
				name = "";
				position[] = {3920.92,699.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 91.533;
			};
			class AFlatCS_ChakChak04
			{
				name = "";
				position[] = {3957.99,559.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 50.535;
			};
			class AFlatCS_ChakChak05
			{
				name = "";
				position[] = {4186.36,738.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 59.933;
			};
			class AFlatCS_Huzrutimam02
			{
				name = "";
				position[] = {5223.58,1501.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 133.84;
			};
			class AFlatCS_Huzrutimam01
			{
				name = "";
				position[] = {5288.8,1176.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 180.395;
			};
			class AFlatCS_Huzrutimam03
			{
				name = "";
				position[] = {5488.38,1023.61};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 240.546;
			};
			class AFlatCS_Loymanara01
			{
				name = "";
				position[] = {7765.52,2378.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 160.305;
			};
			class AFlatCS_Loymanara02
			{
				name = "";
				position[] = {8098.65,2501.25};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 62.683;
			};
			class AFlatCS_Chardarakht01
			{
				name = "";
				position[] = {9481.49,2413.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 254.919;
			};
			class AFlatCS_Chardarakht02
			{
				name = "";
				position[] = {9529.18,2170.93};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 211.827;
			};
			class AFlatCS_Chardarakht03
			{
				name = "";
				position[] = {9742.61,2135.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 33.594;
			};
			class AFlatCS_Khushab01
			{
				name = "";
				position[] = {800.19,5791.45};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.026;
			};
			class AFlatCS_Khushab02
			{
				name = "";
				position[] = {854.83,5917.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 1.77;
			};
			class AFlatCS_Sakhee01
			{
				name = "";
				position[] = {2834.64,4117.3};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 197.871;
			};
			class AFlatCS_Sakhee02
			{
				name = "";
				position[] = {3265.74,4388.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 248.562;
			};
			class AFlatCS_Sakhee03
			{
				name = "";
				position[] = {3095.09,4658.01};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 338.768;
			};
			class AFlatCS_Kakaru01
			{
				name = "";
				position[] = {4799.55,4894.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 327.235;
			};
			class AFlatCS_Kakaru02
			{
				name = "";
				position[] = {4639.55,4614.76};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 73.141;
			};
			class AFlatCS_FeeruzAbad01
			{
				name = "";
				position[] = {4386.55,6037.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 306.83;
			};
			class AFlatCS_FeeruzAbad02
			{
				name = "";
				position[] = {4907.05,6294.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 53.219;
			};
			class AFlatCS_FeeruzAbad03
			{
				name = "";
				position[] = {4851.08,6324.4};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 145.153;
			};
			class AFlatCS_Anar01
			{
				name = "";
				position[] = {6211.19,6015.82};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 126.314;
			};
			class AFlatCS_Anar02
			{
				name = "";
				position[] = {6134.99,6150.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 185.178;
			};
			class AFlatCS_Falar01
			{
				name = "";
				position[] = {5372.83,7094.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 274.521;
			};
			class AFlatCS_Falar02
			{
				name = "";
				position[] = {5325.36,7404.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 111.748;
			};
			class AFlatCS_Falar03
			{
				name = "";
				position[] = {5497.89,7328.97};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 102.394;
			};
			class AFlatCS_Timurkalay01
			{
				name = "";
				position[] = {8158.64,5096.97};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 280.352;
			};
			class AFlatCS_Timurkalay02
			{
				name = "";
				position[] = {8234.58,5143.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 308.213;
			};
			class AFlatCS_Timurkalay03
			{
				name = "";
				position[] = {8405.7,5375.95};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 338.029;
			};
			class AFlatCS_Garmsar01
			{
				name = "";
				position[] = {9870.42,6350.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 257.149;
			};
			class AFlatCS_Garmsar02
			{
				name = "";
				position[] = {10039.54,6337.68};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 180.645;
			};
			class AFlatCS_Garmsar03
			{
				name = "";
				position[] = {10420.49,6345.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 242.161;
			};
			class AFlatCS_Imarat01
			{
				name = "";
				position[] = {7728.96,7741.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 160.632;
			};
			class AFlatCS_Imarat02
			{
				name = "";
				position[] = {7648.08,7695.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 124.421;
			};
			class AFlatCS_Imarat03
			{
				name = "";
				position[] = {7530.11,7797.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 314.185;
			};
			class AFlatCS_Mulladoost01
			{
				name = "";
				position[] = {1377.92,7661.98};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 89.01;
			};
			class AFlatCS_Mulladoost02
			{
				name = "";
				position[] = {1519.64,7739.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 187.055;
			};
			class AFlatCS_Gospandi01
			{
				name = "";
				position[] = {3046.27,8711.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 22.019;
			};
			class AFlatCS_Gospandi02
			{
				name = "";
				position[] = {3052.14,8459.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 215.801;
			};
			class AFlatCS_Gospandi03
			{
				name = "";
				position[] = {3212.05,8419.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 139.723;
			};
			class AFlatCS_Bastam01
			{
				name = "";
				position[] = {4891.57,9232.56};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 30.896;
			};
			class AFlatCS_Bastam02
			{
				name = "";
				position[] = {4944.2,8938.64};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 234.77;
			};
			class AFlatCS_Bastam03
			{
				name = "";
				position[] = {5149.55,8744.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 201.788;
			};
			class AFlatCS_Nagara01
			{
				name = "";
				position[] = {2552.75,9852.26};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 166.173;
			};
			class AFlatCS_Nagara02
			{
				name = "";
				position[] = {2406.58,9990.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 24.414;
			};
			class AFlatCS_Nagara03
			{
				name = "";
				position[] = {2727.42,10070.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 31.956;
			};
			class AFlatCS_Rasman01
			{
				name = "";
				position[] = {5570.42,10808.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 220.216;
			};
			class AFlatCS_Rasman02
			{
				name = "";
				position[] = {5515.99,11178.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 27.215;
			};
			class AFlatCS_Rasman03
			{
				name = "";
				position[] = {5942.05,11285.97};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 214.299;
			};
			class AFlatCS_Rasman04
			{
				name = "";
				position[] = {6020.92,11466.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 34.628;
			};
			class AFlatCS_Nur01
			{
				name = "";
				position[] = {1112.07,11739.25};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 240.352;
			};
			class AFlatCS_Nur02
			{
				name = "";
				position[] = {1302.51,11766.69};
				type = "FlatAreaCitySmall";
				speech[] = {"Nur"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 99.394;
			};
			class AFlatCS_Nur03
			{
				name = "";
				position[] = {1587.33,12118.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 345.843;
			};
			class AFlatCS_Shamali01
			{
				name = "";
				position[] = {3518.36,11904.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 171.853;
			};
			class AFlatCS_Shamali02
			{
				name = "";
				position[] = {3624.05,11843.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 323.71;
			};
			class AFlatCS_Shamali03
			{
				name = "";
				position[] = {4101.21,12302.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 285.114;
			};
			class AFlatCS_Sagram01
			{
				name = "";
				position[] = {8655.8,10009.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 36.403;
			};
			class AFlatCS_Sagram02
			{
				name = "";
				position[] = {8636.77,9865.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 192.126;
			};
			class AFlatCS_Sagram03
			{
				name = "";
				position[] = {8775.35,10136.45};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 75.441;
			};
			class AFlatCS_Zavarak01
			{
				name = "";
				position[] = {9031.71,11734.43};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 214.371;
			};
			class AFlatCS_Zavarak02
			{
				name = "";
				position[] = {9213.89,11282.36};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 182.17;
			};
			class AFlatCS_Zavarak03
			{
				name = "";
				position[] = {9476.55,11369.19};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 111.263;
			};
			class AFlatCS_Ravanay01
			{
				name = "";
				position[] = {11019.05,8378.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 351.801;
			};
			class AFlatCS_Ravanay02
			{
				name = "";
				position[] = {10979.11,8093.28};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 315.007;
			};
			class AFlatC_ChakChak
			{
				name = "";
				position[] = {3847.97,696.09};
				type = "FlatAreaCity";
				radiusA = 88.11;
				radiusB = 58.8;
				angle = 0.0;
			};
			class AStrong_Garmarud_01
			{
				name = "";
				position[] = {8547.52,6485.3};
				type = "StrongpointArea";
				radiusA = 70.16;
				radiusB = 46.8;
				angle = 171.4;
			};
			class AStrong_Garmarud_02
			{
				name = "";
				position[] = {8862.65,6561.86};
				type = "StrongpointArea";
				radiusA = 49.76;
				radiusB = 33.2;
				angle = 98.922;
			};
			class AStrong_Garmarud_03
			{
				name = "";
				position[] = {8404.31,6913.34};
				type = "StrongpointArea";
				radiusA = 31.85;
				radiusB = 21.2;
				angle = 321.149;
			};
			class AStrong_Bastam_02
			{
				name = "";
				position[] = {5299.13,8512.79};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 214.507;
			};
			class AFlatC_Huzrutimam
			{
				name = "";
				position[] = {5480.96,1095.26};
				type = "FlatAreaCity";
				radiusA = 56.13;
				radiusB = 37.4;
				angle = 344.326;
			};
			class AFlatC_LoyManara
			{
				name = "";
				position[] = {8152.84,2502.22};
				type = "FlatAreaCity";
				radiusA = 62.2;
				radiusB = 41.5;
				angle = 329.347;
			};
			class AFlatC_Khushab
			{
				name = "";
				position[] = {1064.49,5623.04};
				type = "FlatAreaCity";
				radiusA = 61.89;
				radiusB = 41.3;
				angle = 0.0;
			};
			class AFlatC_Sakhee
			{
				name = "";
				position[] = {2880.7,4146.62};
				type = "FlatAreaCity";
				radiusA = 49.76;
				radiusB = 33.2;
				angle = 144.075;
			};
			class AFlatC_Kakaru
			{
				name = "";
				position[] = {4729.89,4772.22};
				type = "FlatAreaCity";
				radiusA = 49.76;
				radiusB = 33.2;
				angle = 272.371;
			};
			class AFlatC_FeeruzAbad
			{
				name = "";
				position[] = {4692.95,6187.81};
				type = "FlatAreaCity";
				radiusA = 63.69;
				radiusB = 42.5;
				angle = 303.885;
			};
			class AFlatC_Anar
			{
				name = "";
				position[] = {5446.25,5710.66};
				type = "FlatAreaCity";
				radiusA = 77.75;
				radiusB = 51.9;
				angle = 0.0;
			};
			class AFlatC_Timurkalay
			{
				name = "";
				position[] = {8283.29,5208.21};
				type = "FlatAreaCity";
				radiusA = 77.38;
				radiusB = 51.6;
				angle = 317.562;
			};
			class AFlatC_Garmsar
			{
				name = "";
				position[] = {10088.39,6360.72};
				type = "FlatAreaCity";
				radiusA = 61.6;
				radiusB = 41.1;
				angle = 179.713;
			};
			class AFlatC_Garmarud
			{
				name = "";
				position[] = {8624.23,6671.38};
				type = "FlatAreaCity";
				radiusA = 49.76;
				radiusB = 33.2;
				angle = 29.6;
			};
			class AFlatC_Imarat
			{
				name = "";
				position[] = {7629.98,7777.38};
				type = "FlatAreaCity";
				radiusA = 62.2;
				radiusB = 41.5;
				angle = 37.719;
			};
			class AFlatC_Mulladoost
			{
				name = "";
				position[] = {1426.01,7657.21};
				type = "FlatAreaCity";
				radiusA = 62.2;
				radiusB = 41.5;
				angle = 20.392;
			};
			class AFlatC_Gospandi
			{
				name = "";
				position[] = {3059.8,8586.32};
				type = "FlatAreaCity";
				radiusA = 77.75;
				radiusB = 51.9;
				angle = 283.278;
			};
			class AFlatC_Bastam
			{
				name = "";
				position[] = {5019.64,9143.22};
				type = "FlatAreaCity";
				radiusA = 61.9;
				radiusB = 41.3;
				angle = 96.038;
			};
			class AFlatC_Nagara
			{
				name = "";
				position[] = {2560.98,9961.81};
				type = "FlatAreaCity";
				radiusA = 39.8;
				radiusB = 26.6;
				angle = 321.187;
			};
			class AFlatC_Rasman
			{
				name = "";
				position[] = {5544.77,11044.72};
				type = "FlatAreaCity";
				radiusA = 49.76;
				radiusB = 33.2;
				angle = 118.806;
			};
			class AFlatC_Nur
			{
				name = "";
				position[] = {1303.2,11812.69};
				type = "FlatAreaCity";
				radiusA = 39.8;
				radiusB = 26.6;
				angle = 202.328;
			};
			class AFlatC_Shamali
			{
				name = "";
				position[] = {3575.72,12043.12};
				type = "FlatAreaCity";
				radiusA = 49.76;
				radiusB = 33.2;
				angle = 325.679;
			};
			class AFlatC_Sagram
			{
				name = "";
				position[] = {8824.73,10016.77};
				type = "FlatAreaCity";
				radiusA = 77.75;
				radiusB = 51.9;
				angle = 294.588;
			};
			class AFlatC_Zavarak
			{
				name = "";
				position[] = {9209.53,11352.27};
				type = "FlatAreaCity";
				radiusA = 151.13;
				radiusB = 100.8;
				angle = 81.785;
			};
			class AFlatC_Ravanay
			{
				name = "";
				position[] = {10867.92,8266.49};
				type = "FlatAreaCity";
				radiusA = 61.6;
				radiusB = 41.1;
				angle = 119.041;
			};
			class AFlat_002
			{
				name = "";
				position[] = {1823.31,907.76};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_033
			{
				name = "";
				position[] = {6274.14,5606.22};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
		};
		skyObject = "ca\Afghan\Data\obloha.p3d";
		horizontObject = "ca\Afghan\Data\horizont.p3d";
		skyTexture = "ca\Afghan\Data\sky_semicloudy_sky.paa";
		skyTextureR = "ca\Afghan\Data\sky_semicloudy_lco.paa";
		class Armory
		{
			positionAdmin[] = {13059.9,6991.39};
			positionsViewer[] = {{ 6599.56,4522.01 },{ 8214.07,2016.13 },{ 6445.45,11376.1 },{ 8391.24,11033.5 }};
			positionBlacklist[] = {{ { 3704.98,13068.3 },{ 5041.3,11701.5 } }};
			disableShips = 1;
			class Challenges
			{
				class FiringRange
				{
					positionsStart[] = {{ 8390.89,1985.98 },{ 6044.71,11787.6 }};
					directionsStart[] = {240,225};
				};
				class MobilityRange
				{
					positionStart[] = {{ 4646.03,12472.7 }};
					directionStart[] = {196.933};
					objectSets[] = {"ca\takistan\data\scripts\armory\mobility_range1.sqf"};
					positionAnchor[] = {{ 4260.6133,11436.161 }};
					obstacleSets[] = {{ { { { 4616.36,12380.3 },-164.524,6,5,0,"" },{ { 4598.82,12318.8 },-69.224,4,3.5,1,"" },{ { 4588.69,12302 },-55.016,4,3.5,5,"" },{ { 4546.28,12254.4 },-43.7326,4,3.5,3,"" },{ { 4448.17,12208.3 },-106.876,6,4,3,"" },{ { 4344.03,12154.9 },-45.9423,4,3.5,8,"" },{ { 4315.87,12130.2 },-126.81,6,4,4,"" },{ { 4104.29,11856 },159.838,6,5,4,"" },{ { 4138.25,11753.5 },126.892,5,4,7,"" },{ { 4381.68,11711.2 },-32.4565,6,4,7,"$STR_LIB_CHAL_MOB_RANGE_HINT_4" },{ { 4401.23,11639.9 },-92.8587,4,4,8,"" },{ { 4407.33,11594.4 },173.99,4,4,8,"" },{ { 4389.67,11204.7 },-76.6392,6,4,3,"" },{ { 4341.54,11057.9 },-73.5123,6,4,3,"$STR_LIB_CHAL_MOB_RANGE_HINT_3" },{ { 4317.27,10925.1 },176.956,4,4,8,"" },{ { 4316.41,10889.5 },142.856,13,4,7,"$STR_LIB_CHAL_MOB_RANGE_HINT_1" },{ { 4328.78,10855.1 },-171.144,8,4,7,"$STR_LIB_CHAL_MOB_RANGE_HINT_1" },{ { 4269.21,10735.6 },-133.939,4,4,2,"" },{ { 4251.22,10718.9 },-132.4,4,4,6,"" },{ { 4157.2,10626.2 },142.908,3.5,3.5,11,"" },{ { 4150.6,10617.8 },-141.193,3.5,3.5,11,"" },{ { 4126.24,10590.1 },-138.876,5,3.5,10,"" },{ { 4114.77,10591.9 },-122.022,6,3.5,10,"" },{ { 4101.84,10591.5 },-74.0945,8,3.5,10,"" },{ { 3882.61,10549.9 },-47.6812,4,3.5,8,"" },{ { 3804.06,10489.7 },-119.938,6,4,9,"" } },{ { { 4616.36,12380.3 },-164.524,6,5,0,"" },{ { 4598.82,12318.8 },-69.224,4,3.5,1,"" },{ { 4588.69,12302 },-55.016,4,3.5,5,"" },{ { 4546.28,12254.4 },-43.7326,4,3.5,3,"" },{ { 4448.17,12208.3 },-106.876,6,4,3,"" },{ { 4344.03,12154.9 },-45.9423,4,3.5,8,"" },{ { 4315.87,12130.2 },-126.81,6,4,4,"" },{ { 4270.1,12008 },-145.911,8,4,4,"$STR_LIB_CHAL_MOB_RANGE_HINT_2" },{ { 4158.64,11927.9 },-133.946,6,4,4,"$STR_LIB_CHAL_MOB_RANGE_HINT_2" },{ { 4104.29,11856 },159.838,6,5,4,"" },{ { 4138.25,11753.5 },126.892,5,4,7,"" },{ { 4381.68,11711.2 },-32.4565,6,4,7,"$STR_LIB_CHAL_MOB_RANGE_HINT_4" },{ { 4401.23,11639.9 },-92.8587,4,4,8,"" },{ { 4407.33,11594.4 },173.99,4,4,8,"" },{ { 4389.67,11204.7 },-76.6392,6,4,3,"" },{ { 4341.54,11057.9 },-73.5123,6,4,3,"$STR_LIB_CHAL_MOB_RANGE_HINT_3" },{ { 4317.27,10925.1 },176.956,4,4,8,"" },{ { 4316.41,10889.5 },142.856,13,4,7,"$STR_LIB_CHAL_MOB_RANGE_HINT_1" },{ { 4328.78,10855.1 },-171.144,8,4,7,"$STR_LIB_CHAL_MOB_RANGE_HINT_1" },{ { 4269.21,10735.6 },-133.939,4,4,2,"" },{ { 4251.22,10718.9 },-132.4,4,4,6,"" },{ { 4157.2,10626.2 },142.908,3.5,3.5,11,"" },{ { 4150.6,10617.8 },-141.193,3.5,3.5,11,"" },{ { 4126.24,10590.1 },-138.876,5,3.5,10,"" },{ { 4114.77,10591.9 },-122.022,6,3.5,10,"" },{ { 4101.84,10591.5 },-74.0945,8,3.5,10,"" },{ { 3882.61,10549.9 },-47.6812,4,3.5,8,"" },{ { 3804.06,10489.7 },-119.938,6,4,9,"" } } }};
					positionRollingBarrels[] = {{ 4265.49,11766.7 }};
					directionRollingBarrels[] = {-129.431};
					positionTriggerRollingBarrels[] = {{ 4153.36,11752.2 }};
					radiusTriggerRollingBarrels[] = {8};
					positionOncomingTraffic[] = {{ 4240.29,10565 }};
					directionOncomingTraffic[] = {-61.5296};
					waypointsOncomingTraffic[] = {{ { 4226.48,10641.6 },{ 4179.4,10771.4 },{ 4126.34,10890.5 } }};
					positionTriggerOncomingTraffic[] = {{ 4285.82,10756.1 }};
					radiusTriggerOncomingTraffic[] = {12};
				};
				class FitnessTrack
				{
					positionStart[] = {{ 2852,9771.17 }};
					directionStart[] = {-157};
					objectSets[] = {"ca\takistan\data\scripts\armory\fitness_track1.sqf"};
					positionAnchor[] = {{ 2523.3857,9605.958 }};
					obstacleSets[] = {{ { { 2842.86,9752.12 },31.3987,3,2,0,"" },{ { 2830.03,9735.01 },132.991,2,2,3,"" },{ { 2746.24,9675.58 },90.0838,3,2,11,"" },{ { 2712.08,9674.97 },90.0838,2,2,8,"" },{ { 2690.05,9670.15 },47.0496,2,2,7,"" },{ { 2655.01,9661.98 },1.57576,2,1.5,1,"" },{ { 2621.92,9633.93 },160.084,2,1.5,12,"" },{ { 2460.13,9633.72 },-168.878,2,1.5,9,"" },{ { 2411,9610.39 },-76.5927,2,1.5,5,"" },{ { 2393.49,9593 },-49.7668,2,1.5,4,"" },{ { 2351.99,9562.55 },-136.61,1.5,1.5,2,"" },{ { 2339.17,9551.5 },-114.26,2,2,8,"" },{ { 2296.69,9531.26 },-30.7971,2,1.5,11,"" },{ { 2246.36,9485.33 },40.5357,3,2,11,"" },{ { 2223.94,9463.59 },26.1435,2,2,7,"" },{ { 2197.78,9383.93 },2.21733,3,2,10,"" } }};
					positionMachineguns[] = {{ { 2401.94,9586.53 } }};
					directionMachineguns[] = {{ -50.8756 }};
					positionStartAnimal[] = {{ 11539.3,8347.76 }};
					directionStartAnimal[] = {-122.867};
					objectSetsAnimal[] = {"ca\takistan\data\scripts\armory\fitness_track_animals1.sqf"};
					positionAnchorAnimal[] = {{ 11513.11,8225.909 }};
					obstacleSetsAnimal[] = {{ { { 11553.2,8327.88 },11.5577,3,2,0,"" },{ { 11545.8,8312.64 },19.3442,3,2,7,"" },{ { 11510.9,8318.07 },-162.77,2,1.5,9,"" },{ { 11500.8,8304.56 },110.089,2,2,11,"" },{ { 11497.6,8273.68 },-69.2117,3,2,11,"" },{ { 11510.2,8259.14 },114.286,2,2,3,"" },{ { 11517.3,8221.17 },-70.8385,2,1.5,9,"" },{ { 11512.7,8185.67 },171.074,3,2,7,"" },{ { 11550.8,8147.74 },136.633,2,2,11,"" },{ { 11562.9,8123.72 },161.903,3,2,10,"" } }};
				};
				class CheckpointRace
				{
					backUpRoute[] = {{ 6765.01,5035.55,0 },{ 6175.25,5244.77,0 },{ 6113.64,5638.13,0 },{ 6197.79,5924.33,0 },{ 5795.82,5915.04,0 },{ 5855.75,6687.66,0 },{ 5227.07,6156.68,0 }};
				};
				class KillHouse
				{
					class Small
					{
						positionStart[] = {{ 1982.4674,7652.7236 }};
						directionStart[] = {-90.14954};
						positionEnd[] = {{ 1926.4122,7536.237 }};
						objectSet[] = {"ca\takistan\data\scripts\armory\kill_house1.sqf"};
						positionAnchor[] = {{ 1926.0287,7596.994 }};
						waypoints[] = {{ { 1930.5022,7638.597,-6.1035156e-005 },{ 1930.0278,7614.434 },{ 1907.7627,7610.632,0.0033990042 },{ 1907.4236,7592.165 },{ 1918.1257,7584.8315,1.4803066 },{ 1917.1168,7578.1367,2.089836 },{ 1926.2285,7577.565,1.8196946 },{ 1931.522,7569.1704 },{ 1933.4343,7549.229,2.0715878 },{ 1925.547,7548.8833,1.8795407 } }};
						class Targets
						{
							class Set1
							{
								class T1
								{
									position[] = {1950.5363,7642.701,-0.00012207031};
									direction = -95.08045;
									upTime = 8;
									positionMove[] = {1949.8131,7646.9717,-6.1035156e-005};
									moveTime = 3;
									type = 1;
									positionTrigger[] = {1962.5433,7651.1675};
									radiusTrigger = 10;
								};
								class T2
								{
									position[] = {1941.7019,7651.9336,1.820078};
									direction = -74.22932;
									upTime = 6;
									spawn = 1;
									positionTrigger[] = {1949.7899,7649.862};
									radiusTrigger = 7;
								};
								class T3
								{
									position[] = {1949.2816,7630.58,0.2734411};
									direction = 117.27222;
									side = 1;
								};
								class T4
								{
									position[] = {1949.4231,7629.235,0.07195025};
									direction = 130.43065;
									side = 1;
								};
								class T5
								{
									position[] = {1916.1881,7632.8433,0.00015258789};
									direction = -118.08475;
									upTime = 6;
									spawn = 1;
									positionTrigger[] = {1937.0355,7641.9585};
									radiusTrigger = 7;
								};
								class T6
								{
									position[] = {1914.3785,7628.809};
									direction = -119.95042;
									upTime = 10;
									positionMove[] = {1912.278,7631.7515,0.00024414063};
									moveTime = 4;
									type = 1;
									positionTrigger[] = {1938.6543,7643.2627};
									radiusTrigger = 7;
								};
								class T7
								{
									position[] = {1934.1129,7625.255,-0.00015258789};
									direction = -175.09071;
									upTime = 7;
									spawn = 1;
									positionTrigger[] = {1931.0938,7634.2993};
									radiusTrigger = 8;
								};
								class T8
								{
									position[] = {1938.277,7603.527,4.1609416};
									direction = -191.72037;
									upTime = 9;
									positionTrigger[] = {1931.066,7624.3613};
									radiusTrigger = 7;
								};
								class T9
								{
									position[] = {1936.1713,7602.138,-3.4621027};
									direction = -168.9123;
									upTime = 12;
									positionMove[] = {1930.6128,7606.962,-3.1418731};
									moveTime = 3;
									type = 1;
									positionTrigger[] = {1930.4904,7625.6};
									radiusTrigger = 7;
								};
								class T10
								{
									position[] = {1929.4924,7606.138,6.2361493};
									direction = -185.5096;
									upTime = 10;
									side = 2;
									spawn = 1;
									positionTrigger[] = {1931.589,7621.3945};
									radiusTrigger = 7;
								};
								class T11
								{
									position[] = {1923.5912,7609.6743,9.1552734e-005};
									direction = 44.32726;
									side = 1;
								};
								class T12
								{
									position[] = {1923.2644,7610.1377,6.1035156e-005};
									direction = -136.42033;
									upTime = 5;
									spawn = 1;
									positionTrigger[] = {1926.7695,7612.779};
									radiusTrigger = 7;
								};
								class T13
								{
									position[] = {1923.4805,7602.4795,3.4779031};
									direction = -157.21053;
									upTime = 8;
									positionTrigger[] = {1924.4191,7609.3643};
									radiusTrigger = 7;
								};
								class T14
								{
									position[] = {1919.6882,7603.7607,6.2023973};
									direction = -136.82007;
									upTime = 9;
									spawn = 1;
									positionTrigger[] = {1924.0807,7609.602};
									radiusTrigger = 7;
								};
								class T15
								{
									position[] = {1917.5626,7605.8735,6.177222};
									direction = -132.40994;
									upTime = 10;
									positionTrigger[] = {1924.6543,7609.107};
									radiusTrigger = 7;
								};
								class T17
								{
									position[] = {1912.1188,7602.981,1.1769876};
									direction = -211.09387;
									upTime = 6;
									positionTrigger[] = {1907.5802,7610.1504};
									radiusTrigger = 7;
								};
								class T18
								{
									position[] = {1921.7032,7601.05,-0.0015589363};
									direction = -218.36195;
									upTime = 10;
									spawn = 1;
									positionTrigger[] = {1907.6606,7610.501};
									radiusTrigger = 7;
								};
								class T19
								{
									position[] = {1890.7767,7588.778,-6.1035156e-005};
									direction = -129.21945;
									upTime = 12;
									spawn = 1;
									positionMove[] = {1888.1984,7591.9297};
									moveTime = 4;
									type = 1;
									positionTrigger[] = {1901.1013,7599.849};
									radiusTrigger = 7;
								};
								class T20
								{
									position[] = {1898.6886,7591.1313,2.5456743};
									direction = -129.21945;
									upTime = 8;
									positionTrigger[] = {1901.2045,7599.0815};
									radiusTrigger = 7;
								};
								class T21
								{
									position[] = {1910.6364,7581.0166,0.00015258789};
									direction = -197.83641;
									upTime = 8;
									spawn = 1;
									positionTrigger[] = {1909.7805,7591.114};
									radiusTrigger = 9;
								};
								class T22
								{
									position[] = {1913.0654,7581.604,2.105796};
									direction = -218.99818;
									upTime = 10;
									positionTrigger[] = {1908.3417,7592.3613};
									radiusTrigger = 9;
								};
								class T23
								{
									position[] = {1920.6718,7595.2646,-0.0002746582};
									direction = 58.35654;
									side = 1;
								};
								class T24
								{
									position[] = {1918.867,7580.848,2.956278};
									direction = -174.90256;
									upTime = 6;
									spawn = 1;
									positionTrigger[] = {1921.0658,7584.1147,2.572174};
									radiusTrigger = 4;
								};
								class T25
								{
									position[] = {1913.8234,7579.3955,2.3999176};
									direction = -51.23464;
									upTime = 7;
									positionTrigger[] = {1916.7323,7578.604,5.5545654};
									radiusTrigger = 3;
								};
								class T26
								{
									position[] = {1915.2921,7580.7397,2.994115};
									direction = -34.82767;
									upTime = 7;
									positionTrigger[] = {1916.6785,7578.727,5.3733826};
									radiusTrigger = 3;
								};
								class T27
								{
									position[] = {1952.2902,7537.136,3.0517578e-005};
									direction = -206.11017;
									upTime = 10;
									positionTrigger[] = {1934.9762,7565.5737};
									radiusTrigger = 9;
								};
								class T28
								{
									position[] = {1949.6394,7535.1084,-0.00018310547};
									direction = -194.642;
									upTime = 11;
									positionTrigger[] = {1934.5887,7565.227};
									radiusTrigger = 9;
								};
								class T29
								{
									position[] = {1951.6478,7557.4927,-6.1035156e-005};
									direction = 150.25536;
									upTime = 10;
									positionMove[] = {1940.0938,7552.081,3.0517578e-005};
									moveTime = 3;
									type = 1;
									positionTrigger[] = {1935.2351,7569.12};
									radiusTrigger = 9;
								};
								class T30
								{
									position[] = {1908.0242,7533.4277,-6.1035156e-005};
									direction = -140.11562;
									side = 1;
								};
								class T31
								{
									position[] = {1906.7114,7534.1675};
									direction = -117.37321;
									side = 1;
								};
								class T32
								{
									position[] = {1909.6104,7532.6504,-3.0517578e-005};
									direction = -185.84976;
									side = 1;
								};
								class T36
								{
									position[] = {1923.8765,7550.9736,1.6947649};
									direction = -397.3573;
									side = 1;
								};
								class T33
								{
									position[] = {1923.8517,7550.2744,1.5497863};
									direction = 314.30173;
									upTime = 6;
									spawn = 1;
									positionTrigger[] = {1925.5236,7548.144,2.1524353};
									radiusTrigger = 3;
								};
								class T34
								{
									position[] = {1924.6891,7550.8955,1.7414322};
									direction = 327.5182;
									upTime = 7;
									positionTrigger[] = {1925.4326,7548.301,4.818451};
									radiusTrigger = 3;
								};
								class T35
								{
									position[] = {1928.0913,7545.5586,2.1069486};
									direction = -258.25275;
									side = 1;
								};
							};
						};
					};
					class Large
					{
						positionStart[] = {{ 8417.107,10921.483 }};
						directionStart[] = {-7.3131747};
						positionEnd[] = {{ 7747.8364,11549.799 }};
						objectSet[] = {"ca\takistan\data\scripts\armory\kill_house_large1.sqf"};
						positionAnchor[] = {{ 8073.1685,11234.243 }};
						waypoints[] = {{ { 8405.384,11089.361 },{ 8008.069,11184.239 },{ 7821.8735,11407.89 },{ 7848.7944,11478.363 } }};
						class Targets
						{
							class Set1
							{
								class T1
								{
									position[] = {8380.472,11071.777,1.5258789e-005};
									direction = -23.92642;
									upTime = 8;
									positionMove[] = {8389.167,11051.416,-4.5776367e-005};
									moveTime = 3;
									type = 1;
									positionTrigger[] = {8404.638,11016.735};
									radiusTrigger = 50;
								};
								class T2
								{
									position[] = {8389.008,11067.604,0.08531747};
									direction = -18.203838;
									upTime = 7;
									spawn = 1;
									positionTrigger[] = {8404.7705,11018.823};
									radiusTrigger = 50;
								};
								class T3
								{
									position[] = {8405.948,11068.816,-6.1035156e-005};
									direction = 6.425954;
									upTime = 6;
									size = 1;
									positionTrigger[] = {8402.808,11018.785};
									radiusTrigger = 50;
								};
								class T4
								{
									position[] = {8398.3545,11108.647};
									direction = 15.508477;
									upTime = 10;
									size = 1;
									spawn = 1;
									positionMove[] = {8404.93,11107.011,3.0517578e-005};
									moveTime = 3;
									type = 1;
									positionTrigger[] = {8400.313,11072.762};
									radiusTrigger = 50;
								};
								class T5
								{
									position[] = {8239.923,11167.184,1.5258789e-005};
									direction = -66.50248;
									upTime = 15;
									size = 1;
									positionMove[] = {8292.689,11139.156,0.00012207031};
									moveTime = 7;
									type = 1;
									positionTrigger[] = {8327.405,11109.342};
									radiusTrigger = 50;
								};
								class T6
								{
									position[] = {8239.135,11170.066,1.5258789e-005};
									direction = -60.313522;
									upTime = 15;
									positionMove[] = {8292.144,11141.363,6.1035156e-005};
									moveTime = 7;
									type = 1;
									positionTrigger[] = {8327.247,11108.5};
									radiusTrigger = 50;
								};
								class T7
								{
									position[] = {8234.926,11166.972,3.0517578e-005};
									direction = -60.313522;
									upTime = 15;
									spawn = 1;
									positionMove[] = {8288.848,11138.691,9.1552734e-005};
									moveTime = 7;
									type = 1;
									positionTrigger[] = {8327.332,11108.952};
									radiusTrigger = 50;
								};
								class T8
								{
									position[] = {8242.08,11164.591,6.1035156e-005};
									direction = -60.313522;
									upTime = 15;
									positionMove[] = {8293.553,11137.096,3.0517578e-005};
									moveTime = 7;
									type = 1;
									positionTrigger[] = {8327.511,11109.788};
									radiusTrigger = 50;
								};
								class T9
								{
									position[] = {8196.216,11113.167,9.1552734e-005};
									direction = -154.53143;
									upTime = 10;
									positionTrigger[] = {8174.302,11132.922};
									radiusTrigger = 50;
								};
								class T10
								{
									position[] = {8194.453,11113.342,1.5614415};
									direction = -139.2761;
									upTime = 12;
									positionTrigger[] = {8174.375,11134.413};
									radiusTrigger = 50;
								};
								class T11
								{
									position[] = {8169.878,11117.115,1.5258789e-005};
									direction = -146.49536;
									spawn = 1;
									upTime = 12;
									positionTrigger[] = {8158.293,11133.992};
									radiusTrigger = 50;
								};
								class T12
								{
									position[] = {8179.881,11117.28,3.0517578e-005};
									direction = -153.21135;
									upTime = 14;
									positionTrigger[] = {8166.4277,11133.531};
									radiusTrigger = 50;
								};
								class T13
								{
									position[] = {8187.737,11116.75,9.1552734e-005};
									direction = -99.215515;
									upTime = 12;
									positionMove[] = {8186.8037,11124.598,1.5258789e-005};
									moveTime = 3;
									type = 1;
									positionTrigger[] = {8173.992,11133.669};
									radiusTrigger = 50;
								};
								class T14
								{
									position[] = {8013.439,11209.559,-4.5776367e-005};
									direction = -51.273415;
									upTime = 14;
									spawn = 1;
									side = 2;
									positionTrigger[] = {8059.2886,11171.435};
									radiusTrigger = 50;
								};
								class T15
								{
									position[] = {8011.722,11208.32,9.1552734e-005};
									direction = -56.840717;
									upTime = 14;
									spawn = 1;
									side = 2;
									positionTrigger[] = {8059.462,11172.694};
									radiusTrigger = 50;
								};
								class T16
								{
									position[] = {8012.7695,11207.072,6.1035156e-005};
									direction = -68.81256;
									upTime = 14;
									spawn = 1;
									side = 2;
									positionTrigger[] = {8059.3774,11170.077};
									radiusTrigger = 50;
								};
								class T25
								{
									position[] = {8008.7363,11142.492,1.5258789e-005};
									direction = -99.11652;
									upTime = 14;
									positionMove[] = {8045.376,11145.578};
									moveTime = 6;
									type = 1;
									size = 1;
									positionTrigger[] = {8079.9697,11153.716};
									radiusTrigger = 50;
								};
								class T17
								{
									position[] = {7984.527,11194.461,-1.5258789e-005};
									direction = -113.99895;
									upTime = 10;
									positionMove[] = {7986.5786,11189.688};
									moveTime = 3;
									type = 1;
									spawn = 1;
									positionTrigger[] = {8002.968,11185.301};
									radiusTrigger = 50;
								};
								class T18
								{
									position[] = {7979.0337,11196.716,5.1525517};
									direction = -91.424446;
									upTime = 14;
									side = 2;
									positionTrigger[] = {8001.461,11185.232};
									radiusTrigger = 50;
								};
								class T19
								{
									position[] = {7976.6885,11201.256,5.184997};
									direction = -82.62201;
									upTime = 14;
									side = 2;
									positionTrigger[] = {8001.5996,11185.729};
									radiusTrigger = 50;
								};
								class T20
								{
									position[] = {7975.5947,11200.833,16.964973};
									direction = -94.163124;
									upTime = 16;
									spawn = 1;
									positionTrigger[] = {8001.7393,11186.323};
									radiusTrigger = 50;
								};
								class T21
								{
									position[] = {7990.937,11181.191,3.0517578e-005};
									direction = -124.07584;
									upTime = 10;
									positionTrigger[] = {8001.405,11184.747};
									radiusTrigger = 50;
								};
								class T22
								{
									position[] = {7958.09,11264.955,-1.5258789e-005};
									direction = -26.817766;
									upTime = 12;
									spawn = 1;
									side = 2;
									positionTrigger[] = {7951.32,11252.105};
									radiusTrigger = 50;
								};
								class T23
								{
									position[] = {7915.504,11255.006,4.5776367e-005};
									direction = -84.15993;
									upTime = 14;
									positionTrigger[] = {7947.8833,11256.13};
									radiusTrigger = 50;
								};
								class T24
								{
									position[] = {7911.4116,11260.472,7.6293945e-005};
									direction = -78.61775;
									upTime = 14;
									positionTrigger[] = {7947.325,11255.449};
									radiusTrigger = 50;
								};
								class T26
								{
									position[] = {7862.001,11418.352,4.5776367e-005};
									direction = -51.18584;
									upTime = 15;
									positionMove[] = {7847.1187,11397.849,3.0517578e-005};
									moveTime = 7;
									type = 1;
									size = 1;
									positionTrigger[] = {7843.971,11381.638};
									radiusTrigger = 50;
								};
								class T27
								{
									position[] = {7819.3545,11462.066,0.00012207031};
									direction = -53.362534;
									upTime = 14;
									positionMove[] = {7807.2017,11445.501,6.1035156e-005};
									moveTime = 4;
									type = 1;
									spawn = 1;
									positionTrigger[] = {7818.681,11441.571};
									radiusTrigger = 50;
								};
								class T28
								{
									position[] = {7867.688,11525.851,1.3692605};
									direction = 9.675894;
									upTime = 14;
									spawn = 1;
									positionTrigger[] = {7840.5947,11496.379};
									radiusTrigger = 50;
								};
								class T29
								{
									position[] = {7868.5044,11522.743,9.1552734e-005};
									direction = 15.071512;
									upTime = 14;
									spawn = 1;
									positionTrigger[] = {7838.699,11493.221};
									radiusTrigger = 50;
								};
								class T30
								{
									position[] = {7798.647,11479.267,6.1035156e-005};
									direction = -119.99725;
									upTime = 14;
									positionTrigger[] = {7800.819,11511.26};
									radiusTrigger = 50;
								};
								class T31
								{
									position[] = {7800.0723,11484.457,1.5258789e-005};
									direction = -112.75015;
									upTime = 16;
									positionTrigger[] = {7801.4146,11512.223};
									radiusTrigger = 50;
								};
								class T32
								{
									position[] = {7803.274,11491.078,3.0517578e-005};
									direction = -114.72913;
									upTime = 16;
									positionTrigger[] = {7800.273,11510.258};
									radiusTrigger = 50;
								};
								class T33
								{
									position[] = {7742.84,11560.854,3.0517578e-005};
									direction = -49.235077;
									upTime = 12;
									positionTrigger[] = {7751.638,11547.205};
									radiusTrigger = 50;
								};
								class T34
								{
									position[] = {7748.5923,11558.713,-0.035251573};
									direction = -47.551956;
									upTime = 12;
									positionTrigger[] = {7751.1904,11546.596};
									radiusTrigger = 50;
								};
								class T35
								{
									position[] = {7744.044,11543.958,6.1035156e-005};
									direction = -51.18584;
									upTime = 10;
									positionMove[] = {7749.3125,11549.667,-1.5258789e-005};
									moveTime = 3;
									type = 1;
									size = 1;
									positionTrigger[] = {7750.7944,11545.986};
									radiusTrigger = 50;
								};
								class T36
								{
									position[] = {7736.3105,11562.188,5.242964};
									direction = -55.518024;
									upTime = 14;
									positionTrigger[] = {7752.081,11547.774};
									radiusTrigger = 50;
								};
							};
						};
					};
				};
			};
			class ARMEX
			{
				class Items
				{
					class Tracked
					{
						positions[] = {{ 5910.08,11308 },{ 5918.12,11306.5 },{ 5925.7,11305.2 },{ 5934,11303.5 },{ 5941.79,11302.2 },{ 5950.94,11300.3 }};
						positionsInfo[] = {{ 5912.26,11314 },{ 5920.29,11312.8 },{ 5928.23,11311.2 },{ 5933.82,11310.4 },{ 5944.06,11308.4 },{ 5953.29,11307 }};
						directions[] = {7.6085,12.6246,8.02559,20.3338,5.0764,44.2641};
					};
					class Wheeled
					{
						positions[] = {{ 5916.44,11339.6 },{ 5920.83,11339 },{ 5924.98,11338.2 },{ 5928.8,11337.8 },{ 5932.65,11337.2 },{ 5936.66,11336.8 }};
						positionsInfo[] = {{ 5914.43,11335.9 },{ 5918.96,11335.5 },{ 5922.9,11335 },{ 5927.05,11334.3 },{ 5930.9,11334.3 },{ 5934.89,11333.3 }};
						directions[] = {191.242,184.708,197.314,185.319,191.242,175.075};
					};
					class Static
					{
						positions[] = {{ 5750.89,11153.9 },{ 5739.79,11145.9 },{ 5729.82,11136.7 },{ 5720.51,11128.4 }};
						positionsInfo[] = {{ 5749.5,11160.1 },{ 5739.43,11151.4 },{ 5729.25,11141.8 },{ 5720.38,11133.5 }};
						directions[] = {134.344,134.923,136.366,142.345};
						directionsInfo[] = {115.444,141.343,123.848,145.788};
					};
					class Helicopters
					{
						positions[] = {{ 5867.58,11364.8 },{ 5887.2,11386.5 },{ 5869.7,11405.7 },{ 5847.62,11384.6 }};
						positionsInfo[] = {{ 5868.61,11367.7 },{ 5884.3,11386.6 },{ 5872.49,11399.5 },{ 5851.7,11385.5 }};
						directions[] = {279.652,0,175.174,314.866};
						directionsInfo[] = {199.6,74.6488,347.99,256.064};
					};
					class Airplanes
					{
						positions[] = {{ 5818.17,11362.6 },{ 5775.37,11321 },{ 5733.07,11276.7 }};
						positionsInfo[] = {{ 5813.03,11372.6 },{ 5770.27,11332.1 },{ 5727.98,11287.3 }};
						directions[] = {315.379,315.141,313.387};
						directionsInfo[] = {196.936,173.673,187.136};
					};
					class Ships{};
					class Rifles
					{
						positions[] = {{ 5944.25,11277.4,0.833778 },{ 5943.19,11277.1,0.825829 },{ 5941.25,11277,0.831398 },{ 5939.45,11277.2,0.831398 },{ 5937.21,11276.9,0.825821 }};
						positionsInfo[] = {{ 5944.2,11276.8 },{ 5943.33,11276.5 },{ 5941.2,11276.5 },{ 5939.3,11276.7 },{ 5937.26,11276.2 }};
						directions[] = {143.701,184.13834,182.563,198.5085,178.623};
						directionsInfo[] = {158.387,161.844,184.709,200.926,173.104};
					};
					class Machineguns
					{
						positions[] = {{ 5929.34,11290.7,0.0919037 },{ 5928.04,11291.6,0.102135 },{ 5925.55,11291.7,0.0343552 },{ 5923.29,11291.8,0.0902939 },{ 5921.56,11292,0.102142 }};
						positionsInfo[] = {{ 5930.05,11291.5 },{ 5928.36,11292.6 },{ 5925.56,11292.7 },{ 5923.4,11292.9 },{ 5921.54,11293 }};
						directions[] = {89.962,15.755,9.827,23.299,346.888};
						directionsInfo[] = {35.0926,20.1548,1.18555,8.55345,3.89779};
					};
					class Sidearms
					{
						positions[] = {{ 5940.41,11289.3,0.825844 },{ 5938.26,11291,0.831383 },{ 5940.23,11288.2,0.825836 },{ 5936.03,11290,0.825821 },{ 5935.84,11288.9,0.826279 }};
						positionsInfo[] = {{ 5941.01,11289.2 },{ 5938.38,11291.6 },{ 5940.77,11288.2 },{ 5935.34,11290 },{ 5935.19,11288.9 }};
						directions[] = {198.385,10.3942,253.975,310.629,235.648};
						directionsInfo[] = {104.055,6.01797,104.907,275.969,277.641};
					};
					class Launchers
					{
						positions[] = {{ 5934.23,11271.7,0.0621185 },{ 5932.24,11271,0.883156 },{ 5929.67,11272,0.55912 },{ 5928.7,11274.4,0.438332 },{ 5934.46,11274.3,0.559128 }};
						positionsInfo[] = {{ 5934.95,11271.1 },{ 5932.21,11269.9 },{ 5929.19,11271.3 },{ 5927.64,11274.5 },{ 5935.18,11274.3 }};
						directions[] = {303.728,7.53587,45.0341,273.277,84.5351};
						directionsInfo[] = {124.591,189.557,228.96,273.819,77.2314};
					};
					class Explosives
					{
						positions[] = {{ 5925.04,11280,0.981056 },{ 5923.56,11280.3,0.94883 },{ 5921.88,11281.2,0.948822 },{ 5920.79,11281.8,0.544853 },{ 5920.15,11282.3,0.544846 }};
						positionsInfo[] = {{ 5924.65,11279.5 },{ 5923.16,11279.3 },{ 5921.2,11280.7 },{ 5920.51,11281.3 },{ 5919.8,11281.8 }};
						directions[] = {45.5014,21.7508,42.3034,28.7515,66.6639};
						directionsInfo[] = {223.51,201.889,229.347,205.292,223.953};
					};
					class Characters
					{
						positions[] = {{ 5789.3,11189.4 },{ 5788.15,11190.8 },{ 5786.84,11192.3 },{ 5785.37,11193.3 },{ 5783.96,11194.8 }};
						positionsInfo[] = {{ 5790.62,11189.8 },{ 5789.3,11191.2 },{ 5787.88,11192.5 },{ 5786.39,11193.8 },{ 5784.97,11195 }};
						directions[] = {40.437,37.388,39.974,41.36,48.133};
					};
					class Animals
					{
						positions[] = {{ 5795.55,11153.7 },{ 5792.04,11156.8 },{ 5799.6,11155.5 },{ 5802.23,11158.9 },{ 5789.44,11160.2 }};
						positionsInfo[] = {{ 5795.85,11153.6 },{ 5792.63,11155.9 },{ 5798.96,11155.3 },{ 5800.89,11158.6 },{ 5789.98,11159 }};
						directions[] = {18.275,61.451,293.056,267.0779,68.198};
						directionsInfo[] = {193.124,217.212,148.031,123.499,228.676};
					};
				};
				class Areas
				{
					class Tracked
					{
						displayName = "Tracked vehicles";
						position[] = {5910.08,11308};
						positionInfo[] = {5905.68,11312};
						direction = 0;
						directionInfo = 98.7325;
						markerType = "n_armor";
					};
					class Wheeled
					{
						displayName = "Wheeled vehicles";
						position[] = {5926.882,11337.735};
						positionInfo[] = {5911.02,11337.7};
						direction = 0;
						directionInfo = 98.7325;
						markerType = "n_motor_inf";
					};
					class Static
					{
						displayName = "Static vehicles";
						position[] = {5734.58,11140.5};
						positionInfo[] = {5723.54,11164};
						direction = 0;
						directionInfo = 131.148;
						markerType = "n_art";
					};
					class Helicopters
					{
						displayName = "Helicopters";
						position[] = {5867.37,11383.6};
						positionInfo[] = {5871.89,11380.5};
						direction = 0;
						directionInfo = 318.589;
						markerType = "n_air";
					};
					class Airplanes
					{
						displayName = "Airplanes";
						position[] = {5773.36,11323.3};
						positionInfo[] = {5771.91,11283.2};
						direction = 0;
						directionInfo = 136.843;
						markerType = "n_plane";
					};
					class Rifles
					{
						displayName = "Rifles";
						position[] = {5940.4,11277};
						direction = 0;
						markerType = "n_empty";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_rifles1.sqf";
						compositionPosition[] = {5940.256,11278.619};
					};
					class Sidearms
					{
						displayName = "Sidearms";
						position[] = {5938.25,11289.3};
						direction = 0;
						markerType = "n_empty";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_sidearms1.sqf";
						compositionPosition[] = {5938.224,11289.708};
					};
					class Machineguns
					{
						displayName = "Machineguns";
						position[] = {5925.59,11291.9};
						direction = 0;
						markerType = "n_empty";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_machineguns1.sqf";
						compositionPosition[] = {5926.3633,11292.266};
					};
					class Launchers
					{
						displayName = "Launchers";
						position[] = {5932.15,11273.4};
						direction = 0;
						markerType = "n_empty";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_launchers1.sqf";
						compositionPosition[] = {5931.6064,11271.157};
					};
					class Explosives
					{
						displayName = "Explosives";
						position[] = {5922.16,11280.9};
						positionInfo[] = {5912.8,11281.5};
						direction = 0;
						directionInfo = 147.629;
						markerType = "n_empty";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_explosives1.sqf";
						compositionPosition[] = {5922.1978,11280.84};
					};
					class Characters
					{
						displayName = "Characters";
						position[] = {5787.23,11192.5};
						positionInfo[] = {5781.29,11203.5};
						direction = 0;
						directionInfo = 224.455;
						markerType = "n_inf";
					};
					class Animals
					{
						displayName = "Animals";
						position[] = {5795.75,11157.2};
						positionInfo[] = {5801.01,11174.6};
						direction = 0;
						directionInfo = 170.871;
						markerType = "n_empty";
					};
					class MobilityRange
					{
						displayName = "Mobility Range";
						position[] = {5924.085,11364.458};
						direction = 0;
						markerType = "hd_flag";
						markerColor = "ColorBlue";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_mobility_range1.sqf";
						terminalPosition[] = {20,20};
						terminalDirection = 90;
					};
					class Entrance
					{
						displayName = "ARMEX entrance";
						position[] = {5939.231,11405.867};
						direction = 217.186;
						markerType = "Join";
						markerColor = "ColorBlue";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_entrance1.sqf";
					};
					class StagingArea
					{
						displayName = "Staging area";
						position[] = {5990.284,11496.517};
						direction = 278.6232;
						markerType = "Pickup";
						markerColor = "ColorBlue";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_staging_area1.sqf";
					};
				};
				class AmbientObjects
				{
					compositionScripts[] = {"ca\takistan\data\scripts\armory\mpa_ambient1.sqf"};
					compositionAnchors[] = {{ 5882.3975,11322.392 }};
				};
			};
		};
		safePositionAnchor[] = {6337.06,6345.79};
		safePositionRadius = 5500;
	};
};
class CfgWorldList
{
	class Mountains_ACR{};
};
class CfgMissions
{
	class Cutscenes
	{
		class Mountains_ACR_Intro1
		{
			directory = "ca\Afghan\data\scenes\intro.Mountains_ACR";
		};
	};
};
class CfgSurfaces
{
	class Default{};
	class Water{};
	class TKAsfalt: Default
	{
		access = 2;
		files = "tk_asfalt_*";
		rough = 0.001;
		dust = 0.1;
		soundEnviron = "concrete_ext";
		character = "Empty";
		soundHit = "concrete";
	};
	class TKBeton: Default
	{
		access = 2;
		files = "tk_beton_*";
		rough = 0.01;
		dust = 0.08;
		soundEnviron = "concrete_ext";
		character = "Empty";
		soundHit = "concrete";
	};
	class TKHlina: Default
	{
		access = 2;
		files = "tk_hlina_*";
		rough = 0.1;
		dust = 0.8;
		soundEnviron = "dirt";
		character = "Empty";
		soundHit = "soft_ground";
	};
	class TKPlevel: Default
	{
		access = 2;
		files = "tk_plevel_*";
		rough = 0.11;
		dust = 0.7;
		soundEnviron = "drygrass";
		character = "TKWeedsClutter";
		soundHit = "soft_ground";
	};
	class TKPole: Default
	{
		access = 2;
		files = "tk_pole_*";
		rough = 0.12;
		dust = 0.6;
		soundEnviron = "grass";
		character = "TKFieldGrassClutter";
		soundHit = "soft_ground";
	};
	class TKPolopoust: Default
	{
		access = 2;
		files = "tk_polopoust_*";
		rough = 0.01;
		dust = 0.9;
		soundEnviron = "dirt";
		character = "TKDesertClutter";
		soundHit = "soft_ground";
	};
	class TKSkala: Default
	{
		access = 2;
		files = "tk_skala_*";
		rough = 0.3;
		dust = 0.5;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class TKSkalniSterk: Default
	{
		access = 2;
		files = "tk_skalni_sterk_*";
		rough = 0.15;
		dust = 1.0;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class TKSterkNaDno: Default
	{
		access = 2;
		files = "tk_sterk_na_dno_*";
		rough = 0.2;
		dust = 0.0;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class TKValouny: Default
	{
		access = 2;
		files = "tk_valouny_*";
		rough = 0.15;
		dust = 0.4;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class TKTrava: Default
	{
		access = 2;
		files = "tk_trava_*";
		rough = 0.11;
		dust = 0.5;
		soundEnviron = "drygrass";
		character = "TKGrassClutter";
		soundHit = "soft_ground";
	};
	class TKDlazbaOld: Default
	{
		access = 2;
		files = "tk_dlazba_old_*";
		rough = 0.001;
		dust = 0.1;
		soundEnviron = "concrete_ext";
		character = "Empty";
		soundHit = "concrete";
	};
	class TKForest: Default
	{
		access = 2;
		files = "tk_forest_*";
		rough = 0.01;
		dust = 0.9;
		soundEnviron = "dirt";
		character = "TKForestClutter";
		soundHit = "soft_ground";
	};
	class TKMoutain: Default
	{
		access = 2;
		files = "tk_mountain_*";
		rough = 0.11;
		dust = 0.9;
		soundEnviron = "dirt";
		character = "TKMountainsClutter";
		soundHit = "soft_ground";
	};
};
class CfgSurfaceCharacters
{
	class TKGrassClutter
	{
		probability[] = {0.89,0.03,0.02};
		names[] = {"TK_GrassDry","TK_BrushHard","TK_PlantsWhite"};
	};
	class TKDesertClutter
	{
		probability[] = {0.06,0.05,0.005,0.005};
		names[] = {"TK_BrushSoft","TK_BrushHard","TK_PlantsWhite","TK_WeedThistle"};
	};
	class TKForestClutter
	{
		probability[] = {0.05,0.2,0.05};
		names[] = {"TK_BrushHard","TK_GrassGreen","TK_Weed1"};
	};
	class TKMountainsClutter
	{
		probability[] = {0.1,0.05,0.01,0.01,0.01};
		names[] = {"TK_BrushHard","TK_BrushSoft","TK_PlantsWhite","TK_WeedThistle","TK_PlantsViolet"};
	};
	class TKWeedsClutter
	{
		probability[] = {0.6,0.1,0.15,0.05,0.05};
		names[] = {"TK_GrassDry","TK_GrassDryLong","TK_Weed1","TK_WeedThistle","TK_BrushHard"};
	};
	class TKFieldGrassClutter
	{
		probability[] = {0.6,0.3,0.02,0.01,0.02};
		names[] = {"TK_GrassGreen","TK_GrassGreenLong","TK_PlantsWhite","TK_PlantsViolet","TK_Weed1"};
	};
};
//};
