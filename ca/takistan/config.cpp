////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:12:01 2014 : Source 'file' date Fri Oct 31 06:12:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class takistan : config.bin{
class CfgPatches
{
	class Takistan
	{
		units[] = {"Takistan"};
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
	class Takistan: CAWorld
	{
		access = 3;
		worldId = 6;
		cutscenes[] = {"TakistanIntro1","TakistanIntro2"};
		description = "$STR_EP1_TAKISTAN";
		icon = "";
		worldName = "\ca\takistan\takistan.wrp";
		pictureMap = "";
		pictureShot = "\ca\takistan\data\ui_selectisland_takistan_ca.paa";
		plateFormat = "TK$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		longitude = 66;
		latitude = -34;
		elevationOffset = 2000;
		class EnvSounds: EnvSounds
		{
			class Sea
			{
				name = "$STR_DN_SEA";
				sound[] = {"\ca\Sounds_E\sfx\lake_1",0.01,1};
				soundNight[] = {"\ca\Sounds_E\sfx\lake_3",0.17782794,1};
				volume = "sea";
			};
		};
		class OutsideTerrain
		{
			satellite = "ca\takistan\data\s_satout_co.paa";
			enableTerrainSynth = 1;
			class Layers
			{
				class Layer0
				{
					nopx = "ca\takistan\data\tk_polopoust_nopx.paa";
					texture = "ca\takistan\data\tk_polopoust_co.paa";
				};
			};
		};
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 12800;
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
		centerPosition[] = {8000,1900,300};
		seagullPos[] = {6400,150.0,6400};
		ilsPosition[] = {5250.5,10993.5};
		ilsDirection[] = {-0.7071,0.08,-0.7071};
		ilsTaxiOff[] = {5554.5,11297.5,6035,11778,6055.5,11785.5,6075,11780,6117.5,11737.5,6124.5,11716,6113,11700,5851,11438.5};
		ilsTaxiIn[] = {5851,11438.5,5342.5,10929.5,5322.5,10925.5,5306.5,10936.5,5269,10974,5261,10991,5264.5,11007.5,5278,11021.5};
		class SecondaryAirports
		{
			class TakistanAirstrip1
			{
				ilsPosition[] = {7718,1598};
				ilsDirection[] = {-0.866,0.08,-0.5};
				ilsTaxiOff[] = {8054.5,1791.5,8375.5,1976,8389,1995.5,8387.5,2014.5,8361,2061,8339,2075,8319.5,2072,8207.5,2007};
				ilsTaxiIn[] = {8207.5,2007,7691,1709,7683,1688.5,7685.5,1671,7712,1625,7731,1613,7745.5,1611.5,7760,1621.5};
				drawTaxiway = 1;
			};
		};
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
					sky = "ca\Takistan\Data\sky_clear_sky.paa";
					skyR = "ca\Takistan\Data\sky_clear_lco.paa";
					horizon = "ca\Takistan\Data\sky_clear_horizont_sky.paa";
				};
				class Weather7: Weather1
				{
					sky = "ca\Takistan\Data\sky_veryclear_sky.paa";
					skyR = "ca\Takistan\Data\sky_clear_lco.paa";
					horizon = "ca\Takistan\Data\sky_veryclear_horizont_sky.paa";
				};
				class Weather2: Weather2
				{
					sky = "ca\Takistan\Data\sky_almostclear_sky.paa";
					skyR = "ca\Takistan\Data\sky_almostclear_lco.paa";
					horizon = "ca\Takistan\Data\sky_almostclear_horizont_sky.paa";
				};
				class Weather3: Weather3
				{
					sky = "ca\Takistan\Data\sky_semicloudy_sky.paa";
					skyR = "ca\Takistan\Data\sky_semicloudy_lco.paa";
					horizon = "ca\Takistan\Data\sky_semicloudy_horizont_sky.paa";
				};
				class Weather4: Weather4
				{
					sky = "ca\Takistan\Data\sky_cloudy_sky.paa";
					skyR = "ca\Takistan\Data\sky_cloudy_lco.paa";
					horizon = "ca\Takistan\Data\sky_cloudy_horizont_sky.paa";
				};
				class Weather5: Weather5
				{
					sky = "ca\Takistan\Data\sky_mostlycloudy_sky.paa";
					skyR = "ca\Takistan\Data\sky_mostlycloudy_lco.paa";
					horizon = "ca\Takistan\Data\sky_mostlycloudy_horizont_sky.paa";
				};
				class Weather6: Weather6
				{
					sky = "ca\Takistan\Data\sky_overcast_sky.paa";
					skyR = "ca\Takistan\Data\sky_overcast_lco.paa";
					horizon = "ca\Takistan\Data\sky_overcast_horizont_sky.paa";
				};
			};
		};
		clutterGrid = 1.5;
		clutterDist = 125;
		noDetailDist = 40;
		fullDetailDist = 10;
		midDetailTexture = "ca\takistan\data\tk_middle_mco.paa";
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
				position[] = {5072.71,6158.22};
				type = "NameCityCapital";
				speech[] = {"FeeruzAbad"};
				radiusA = 300.0;
				radiusB = 300.0;
				angle = 0.0;
			};
			class city_Nagara
			{
				name = "$STR_EP1_LOCATION_NAGARA";
				position[] = {3057.78,9808.44};
				type = "NameCityCapital";
				speech[] = {"Nagara"};
				radiusA = 300.0;
				radiusB = 300.0;
				angle = 0.0;
			};
			class city_Rasman
			{
				name = "$STR_EP1_LOCATION_RASMAN";
				position[] = {6092.15,11018.65};
				type = "NameCityCapital";
				speech[] = {"Rasman"};
				radiusA = 300.0;
				radiusB = 300.0;
				angle = 0.0;
			};
			class city_Garmsar
			{
				name = "$STR_EP1_LOCATION_GARMSAR";
				position[] = {10603.58,6410.72};
				type = "NameCityCapital";
				speech[] = {"Garmsar"};
				radiusA = 300.0;
				radiusB = 300.0;
				angle = 0.0;
			};
			class city_Bastam
			{
				name = "$STR_EP1_LOCATION_BASTAM";
				position[] = {5989.99,8977.47};
				type = "NameCity";
				speech[] = {"Bastam"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class city_Nur
			{
				name = "$STR_EP1_LOCATION_NUR";
				position[] = {1890.7,11867.49};
				type = "NameCity";
				speech[] = {"Nur"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class city_Zavarak
			{
				name = "$STR_EP1_LOCATION_ZAVARAK";
				position[] = {9951.81,11651.26};
				type = "NameCity";
				speech[] = {"Zavarak"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class city_Falar
			{
				name = "$STR_EP1_LOCATION_FALAR";
				position[] = {6063.8,7256.97};
				type = "NameCity";
				speech[] = {"Falar"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class city_Anar
			{
				name = "$STR_EP1_LOCATION_ANAR";
				position[] = {6030.72,5659.43};
				type = "NameCity";
				speech[] = {"Anar"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class city_ChakChak
			{
				name = "$STR_EP1_LOCATION_CHAKCHAK";
				position[] = {4375.92,754.72};
				type = "NameCity";
				speech[] = {"ChakChak"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class city_Sakhee
			{
				name = "$STR_EP1_LOCATION_SAKHEE";
				position[] = {3588.99,4284.47};
				type = "NameCity";
				speech[] = {"Sakhee"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class city_Chaman
			{
				name = "$STR_EP1_LOCATION_CHAMAN";
				position[] = {571.8,2810.97};
				type = "NameCity";
				speech[] = {"Chaman"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class city_LoyManara
			{
				name = "$STR_EP1_LOCATION_LOYMANARA";
				position[] = {8622.05,2454.22};
				type = "NameCity";
				speech[] = {"LoyManara"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class vill_Gospandi
			{
				name = "$STR_EP1_LOCATION_GOSPANDI";
				position[] = {3626.58,8510.97};
				type = "NameVillage";
				speech[] = {"Gospandi"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Mulladoost
			{
				name = "$STR_EP1_LOCATION_MULLADOOST";
				position[] = {2009.21,7675.97};
				type = "NameVillage";
				speech[] = {"Mulladoost"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Khushab
			{
				name = "$STR_EP1_LOCATION_KHUSHAB";
				position[] = {1444.14,5732.22};
				type = "NameVillage";
				speech[] = {"Khushab"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Jilavur
			{
				name = "$STR_EP1_LOCATION_JILAVUR";
				position[] = {2537.21,5026.47};
				type = "NameVillage";
				speech[] = {"Jilavur"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Shukurkalay
			{
				name = "$STR_EP1_LOCATION_SHUKURKALAY";
				position[] = {1529.11,3582.72};
				type = "NameVillage";
				speech[] = {"Shukurkalay"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class vill_Imarat
			{
				name = "$STR_EP1_LOCATION_IMARAT";
				position[] = {8238.39,7847.22};
				type = "NameVillage";
				speech[] = {"Imarat"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Ravanay
			{
				name = "$STR_EP1_LOCATION_RAVANAY";
				position[] = {11539.21,8318.97};
				type = "NameVillage";
				speech[] = {"Ravanay"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Timurkalay
			{
				name = "$STR_EP1_LOCATION_TIMURKALAY";
				position[] = {8888.11,5181.47};
				type = "NameVillage";
				speech[] = {"Timurkalay"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Kakaru
			{
				name = "$STR_EP1_LOCATION_KAKARU";
				position[] = {5313.46,4740.72};
				type = "NameVillage";
				speech[] = {"Kakaru"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Landay
			{
				name = "$STR_EP1_LOCATION_LANDAY";
				position[] = {1950.86,349.72};
				type = "NameVillage";
				speech[] = {"Landay"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Huzrutimam
			{
				name = "$STR_EP1_LOCATION_HUZRUTIMAM";
				position[] = {5932.74,1245.22};
				type = "NameVillage";
				speech[] = {"Huzrutimam"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Sultansafee
			{
				name = "$STR_EP1_LOCATION_SULTANSAFEE";
				position[] = {6578.67,1955.22};
				type = "NameVillage";
				speech[] = {"Sultansafee"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Jaza
			{
				name = "$STR_EP1_LOCATION_JAZA";
				position[] = {9009.33,1871.97};
				type = "NameVillage";
				speech[] = {"Jaza"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Chardarakht
			{
				name = "$STR_EP1_LOCATION_CHARDARAKHT";
				position[] = {10528.77,2429.22};
				type = "NameVillage";
				speech[] = {"Chardarakht"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Shamali
			{
				name = "$STR_EP1_LOCATION_SHAMALI";
				position[] = {4078.33,11844.22};
				type = "NameVillage";
				speech[] = {"Shamali"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class vill_Karachinar
			{
				name = "$STR_EP1_LOCATION_KARACHINAR";
				position[] = {12243.45,10420.32};
				type = "NameVillage";
				speech[] = {"Karachinar"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_Nagara1Oilfield
			{
				name = "$STR_EP1_LOCATION_NAGARA1OILFIELD";
				position[] = {3642.99,11045.47};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_NaygulValley
			{
				name = "$STR_EP1_LOCATION_NAYGULVALLEY";
				position[] = {2439.85,9625.41};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_BalaPass
			{
				name = "$STR_EP1_LOCATION_BALAPASS";
				position[] = {905.58,7858.33};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_Lalezar
			{
				name = "$STR_EP1_LOCATION_LALEZAR";
				position[] = {4563.67,9354.22};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_PareSiahOilField
			{
				name = "$STR_EP1_LOCATION_PARESIAHOILFIELD";
				position[] = {8281.38,11166.46};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_Nar
			{
				name = "$STR_EP1_LOCATION_NAR";
				position[] = {8112.86,9146.97};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_mine
			{
				name = "$STR_EP1_LOCATION_MINE";
				position[] = {5064.02,6865.22};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_DarbangPass
			{
				name = "$STR_EP1_LOCATION_DARBANGPASS";
				position[] = {5278.46,3674.97};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_SareSangPass
			{
				name = "$STR_EP1_LOCATION_SARESANGPASS";
				position[] = {3960.1,3118.73};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_Ahmaday
			{
				name = "$STR_EP1_LOCATION_AHMADAY";
				position[] = {3572.92,1284.22};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_LoyManaraOilfield
			{
				name = "$STR_EP1_LOCATION_LOYMANARAOILFIELD";
				position[] = {6821.86,1384.93};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_HazarBagh
			{
				name = "$STR_EP1_LOCATION_HAZARBAGH";
				position[] = {11858.19,2656.54};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_NaranDarrePass
			{
				name = "$STR_EP1_LOCATION_NARANDARREPASS";
				position[] = {9033.67,4428.03};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class airport_LoyManaraAirfield
			{
				name = "$STR_EP1_LOCATION_LOYMANARAAIRFIELD";
				position[] = {7946.82,1832.55};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class airport_RasmanMilitaryBase
			{
				name = "$STR_EP1_LOCATION_RASMANMILITARYBASE";
				position[] = {5638.16,11356.33};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class water_Charsu
			{
				name = "$STR_EP1_LOCATION_CHARSU";
				position[] = {4330.52,12036.22};
				type = "NameMarine";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class water_SafidAb
			{
				name = "$STR_EP1_LOCATION_SAFIDAB";
				position[] = {6794.45,12004.14};
				type = "NameMarine";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class water_Daryache
			{
				name = "$STR_EP1_LOCATION_DARYACHE";
				position[] = {5220.5,5032.64};
				type = "NameMarine";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_01
			{
				name = "";
				position[] = {632.95,10043.63};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_JabalAsSaraj
			{
				name = "$STR_EP1_LOCATION_JABALASSARAJ";
				position[] = {2263.9,8583.47};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_Sanginakt
			{
				name = "$STR_EP1_LOCATION_SANGINAKT";
				position[] = {3998.35,6919.2};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_02
			{
				name = "";
				position[] = {6511.31,8118.2};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_AqTappa
			{
				name = "$STR_EP1_LOCATION_AQTAPPA";
				position[] = {10480.26,7523.87};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_03
			{
				name = "";
				position[] = {9833.57,7354.02};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_GurDur
			{
				name = "$STR_EP1_LOCATION_GURDUR";
				position[] = {8007.28,6187.26};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_04
			{
				name = "";
				position[] = {4396.1,5009.27};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_05
			{
				name = "";
				position[] = {3120.67,4571.14};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_06
			{
				name = "";
				position[] = {1624.48,2332.08};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_07
			{
				name = "";
				position[] = {3730.58,2723.58};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_Taj
			{
				name = "$STR_EP1_LOCATION_TAJ";
				position[] = {759.18,2454.09};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_08
			{
				name = "";
				position[] = {4754.07,2459.31};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_09
			{
				name = "";
				position[] = {5721.58,3220.19};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_10
			{
				name = "";
				position[] = {6916.74,3914.82};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_11
			{
				name = "";
				position[] = {9777.7,3649.66};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_12
			{
				name = "";
				position[] = {10946.34,3582.17};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_Bamjahan
			{
				name = "$STR_EP1_LOCATION_BAMJAHAN";
				position[] = {12285.17,4801.51};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class hill_13
			{
				name = "";
				position[] = {292.73,387.34};
				type = "Hill";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class veg_SiahChub
			{
				name = "$STR_EP1_LOCATION_SIAHCHUB";
				position[] = {4888.21,4512.59};
				type = "VegetationFir";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class veg_Chinari
			{
				name = "$STR_EP1_LOCATION_CHINARI";
				position[] = {1223.21,7663.56};
				type = "VegetationFir";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class veg_Durman
			{
				name = "$STR_EP1_LOCATION_DURMAN";
				position[] = {9697.71,5769.03};
				type = "VegetationFir";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class veg_Jangali
			{
				name = "$STR_EP1_LOCATION_JANGALI";
				position[] = {11651.01,7816.46};
				type = "VegetationFir";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class veg_HazarDarakht
			{
				name = "$STR_EP1_LOCATION_HAZARDARAKHT";
				position[] = {1193.79,4001.9};
				type = "VegetationFir";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_ChakChak
			{
				name = "";
				position[] = {4387.4,688.03};
				type = "CityCenter";
				neighbors[] = {"ACityC_Sakhee","ACityC_Kakaru","ACityC_Huzrutimam"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Huzrutimam
			{
				name = "";
				position[] = {6104.51,1110.61};
				type = "CityCenter";
				neighbors[] = {"ACityC_ChakChak","ACityC_Loymanara","ACityC_Timurkalay"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Loymanara
			{
				name = "";
				position[] = {8480.1,2351.41};
				type = "CityCenter";
				neighbors[] = {"ACityC_Huzrutimam","ACityC_Timurkalay","ACityC_Chardarakht"};
				radiusA = 100.0;
				radiusB = 96.0;
				angle = 0.0;
			};
			class ACityC_Chardarakht
			{
				name = "";
				position[] = {10130.55,2290.78};
				type = "CityCenter";
				neighbors[] = {"ACityC_Loymanara"};
				radiusA = 381.14;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Khushab
			{
				name = "";
				position[] = {1537.26,5686.92};
				type = "CityCenter";
				neighbors[] = {"ACityC_Mulladoost","ACityC_FeeruzAbad","ACityC_Sakhee"};
				radiusA = 100.0;
				radiusB = 163.0;
				angle = 0.0;
			};
			class ACityC_Sakhee
			{
				name = "";
				position[] = {3496.14,4092.66};
				type = "CityCenter";
				neighbors[] = {"ACityC_Kakaru","ACityC_ChakChak","ACityC_Khushab","ACityC_FeeruzAbad"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Kakaru
			{
				name = "";
				position[] = {5333.0,4691.31};
				type = "CityCenter";
				neighbors[] = {"ACityC_FeeruzAbad","ACityC_Anar","ACityC_Sakhee","ACityC_ChakChak"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_FeeruzAbad
			{
				name = "";
				position[] = {5272.76,6149.96};
				type = "CityCenter";
				neighbors[] = {"ACityC_Falar","ACityC_Anar","ACityC_Kakaru","ACityC_Sakhee","ACityC_Khushab"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Anar
			{
				name = "";
				position[] = {5984.78,5780.72};
				type = "CityCenter";
				neighbors[] = {"ACityC_Falar","ACityC_FeeruzAbad","ACityC_Kakaru","ACityC_Timurkalay"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Falar
			{
				name = "";
				position[] = {5955.14,7264.14};
				type = "CityCenter";
				neighbors[] = {"ACityC_FeeruzAbad","ACityC_Bastam","ACityC_Anar"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Timurkalay
			{
				name = "";
				position[] = {8868.33,5320.2};
				type = "CityCenter";
				neighbors[] = {"ACityC_Huzrutimam","ACityC_Loymanara","ACityC_Garmarud","ACityC_Anar"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Garmsar
			{
				name = "";
				position[] = {10587.77,6310.45};
				type = "CityCenter";
				neighbors[] = {"ACityC_Ravanay","ACityC_Garmarud"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Imarat
			{
				name = "";
				position[] = {8242.71,7733.88};
				type = "CityCenter";
				neighbors[] = {"ACityC_Garmarud","ACityC_Sagram","ACityC_Rasman","ACityC_Bastam"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Mulladoost
			{
				name = "";
				position[] = {1956.1,7696.03};
				type = "CityCenter";
				neighbors[] = {"ACityC_Khushab","ACityC_Gospandi"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Gospandi
			{
				name = "";
				position[] = {3689.49,8534.48};
				type = "CityCenter";
				neighbors[] = {"ACityC_Bastam","ACityC_Nagara","ACityC_Mulladoost","ACityC_Rasman"};
				radiusA = 50.0;
				radiusB = 50.0;
				angle = 0.0;
			};
			class ACityC_Bastam
			{
				name = "";
				position[] = {5585.73,9090.32};
				type = "CityCenter";
				neighbors[] = {"ACityC_Falar","ACityC_Rasman","ACityC_Gospandi","ACityC_Imarat","ACityC_Shamali"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Nagara
			{
				name = "";
				position[] = {3059.58,9909.48};
				type = "CityCenter";
				neighbors[] = {"ACityC_Rasman","ACityC_Gospandi","ACityC_Nur","ACityC_Shamali"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Rasman
			{
				name = "";
				position[] = {6292.48,11179.44};
				type = "CityCenter";
				neighbors[] = {"ACityC_Sagram","ACityC_Bastam","ACityC_Gospandi","ACityC_Imarat","ACityC_Shamali","ACityC_Nagara"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Nur
			{
				name = "";
				position[] = {1804.21,11845.36};
				type = "CityCenter";
				neighbors[] = {"ACityC_Nagara","ACityC_Shamali"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Sagram
			{
				name = "";
				position[] = {9287.45,9990.87};
				type = "CityCenter";
				neighbors[] = {"ACityC_Rasman","ACityC_Zavarak","ACityC_Imarat"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 360.0;
			};
			class ACityC_Zavarak
			{
				name = "";
				position[] = {9839.21,11482.55};
				type = "CityCenter";
				neighbors[] = {"ACityC_Sagram","ACityC_Ravanay"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Ravanay
			{
				name = "";
				position[] = {11511.26,8297.71};
				type = "CityCenter";
				neighbors[] = {"ACityC_Zavarak","ACityC_Garmsar"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_Sagram
			{
				name = "$STR_EP1_LOCATION_SAGRAM";
				position[] = {9339.24,9956.22};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AStrong_ChakChak_01
			{
				name = "";
				position[] = {4192.21,516.41};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 267.656;
			};
			class AStrong_ChakChak_02
			{
				name = "";
				position[] = {4819.3,675.69};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 329.979;
			};
			class AStrong_ChakChak_03
			{
				name = "";
				position[] = {4357.5,901.15};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 342.503;
			};
			class AStrong_Huzrutimam_01
			{
				name = "";
				position[] = {5777.71,842.25};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 261.391;
			};
			class AStrong_Huzrutimam_02
			{
				name = "";
				position[] = {6212.41,1156.03};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 65.81;
			};
			class AStrong_Huzrutimam_03
			{
				name = "";
				position[] = {6235.82,1340.15};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 135.694;
			};
			class AStrong_Huzrutimam_04
			{
				name = "";
				position[] = {6039.24,1666.59};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 71.016;
			};
			class AStrong_LoyManara_01
			{
				name = "";
				position[] = {8664.08,2395.72};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 178.104;
			};
			class AStrong_LoyManara_02
			{
				name = "";
				position[] = {8345.58,2434.09};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 151.335;
			};
			class AStrong_LoyManara_03
			{
				name = "";
				position[] = {8431.82,2980.07};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.698;
			};
			class AStrong_LoyManara_04
			{
				name = "";
				position[] = {9072.83,2696.97};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 82.137;
			};
			class AStrong_Chardarakht_01
			{
				name = "";
				position[] = {9804.27,2334.01};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 284.768;
			};
			class AStrong_Chardarakht_02
			{
				name = "";
				position[] = {9944.85,2431.96};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 246.465;
			};
			class AStrong_Chardarakht_03
			{
				name = "";
				position[] = {10609.7,2668.94};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 145.127;
			};
			class AStrong_Khushab_01
			{
				name = "";
				position[] = {1345.27,5927.34};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 237.473;
			};
			class AStrong_Khushab_02
			{
				name = "";
				position[] = {1656.75,5313.55};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 285.793;
			};
			class AStrong_Khushab_03
			{
				name = "";
				position[] = {1748.98,5687.7};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 111.748;
			};
			class AStrong_Sakhee_01
			{
				name = "";
				position[] = {3908.94,4251.49};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 316.633;
			};
			class AStrong_Sakhee_02
			{
				name = "";
				position[] = {3621.08,3913.72};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 125.24;
			};
			class AStrong_Sakhee_03
			{
				name = "";
				position[] = {3642.1,4470.49};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.761;
			};
			class AStrong_Sakhee_04
			{
				name = "";
				position[] = {3614.47,4430.16};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 184.62;
			};
			class AStrong_Kakaru_01
			{
				name = "";
				position[] = {5375.52,4456.47};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 181.756;
			};
			class AStrong_Kakaru_02
			{
				name = "";
				position[] = {5121.94,5286.37};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 46.734;
			};
			class AStrong_Kakaru_03
			{
				name = "";
				position[] = {5172.4,4865.08};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 132.547;
			};
			class AStrong_Kakaru_04
			{
				name = "";
				position[] = {5099.12,4894.21};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 16.671;
			};
			class AStrong_FeeruzAbad_01
			{
				name = "";
				position[] = {5004.26,6112.49};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 223.965;
			};
			class AStrong_FeeruzAbad_02
			{
				name = "";
				position[] = {5103.28,5812.89};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 292.99;
			};
			class AStrong_FeeruzAbad_03
			{
				name = "";
				position[] = {5617.17,6448.03};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 47.028;
			};
			class AStrong_Anar_01
			{
				name = "";
				position[] = {6513.41,5954.19};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 75.755;
			};
			class AStrong_Anar_02
			{
				name = "";
				position[] = {5939.59,5119.4};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 83.659;
			};
			class AStrong_Anar_03
			{
				name = "";
				position[] = {5636.63,5785.76};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 73.86;
			};
			class AStrong_Falar_01
			{
				name = "";
				position[] = {5952.49,7025.47};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 176.246;
			};
			class AStrong_Falar_02
			{
				name = "";
				position[] = {6265.92,7314.47};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 74.037;
			};
			class AStrong_Falar_03
			{
				name = "";
				position[] = {5772.47,7837.01};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 33.754;
			};
			class AStrong_Timurkalay_01
			{
				name = "";
				position[] = {8778.77,4865.97};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 189.156;
			};
			class AStrong_Timurkalay_02
			{
				name = "";
				position[] = {8353.74,5106.73};
				type = "StrongpointArea";
				radiusA = 1000.0;
				radiusB = 100.0;
				angle = 263.504;
			};
			class AStrong_Timurkalay_03
			{
				name = "";
				position[] = {8500.47,5391.32};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 298.932;
			};
			class AStrong_Timurkalay_04
			{
				name = "";
				position[] = {9009.67,5796.89};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 18.14;
			};
			class AStrong_Garmsar_01
			{
				name = "";
				position[] = {10285.69,6204.23};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 336.712;
			};
			class AStrong_Garmsar_02
			{
				name = "";
				position[] = {10797.1,6531.39};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 199.483;
			};
			class AStrong_Garmsar_03
			{
				name = "";
				position[] = {11161.73,6102.21};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 315.207;
			};
			class AStrong_Imarat_01
			{
				name = "";
				position[] = {7984.41,7974.01};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 288.122;
			};
			class AStrong_Imarat_02
			{
				name = "";
				position[] = {8576.19,7430.43};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 130.049;
			};
			class AStrong_Imarat_03
			{
				name = "";
				position[] = {8451.35,7933.41};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 9.203;
			};
			class AStrong_Mulladoost_01
			{
				name = "";
				position[] = {1933.12,7497.56};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 210.255;
			};
			class AStrong_Mulladoost_02
			{
				name = "";
				position[] = {1824.27,7847.13};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 288.849;
			};
			class AStrong_Mulladoost_03
			{
				name = "";
				position[] = {2161.24,7791.51};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 97.501;
			};
			class AStrong_Gospandi_01
			{
				name = "";
				position[] = {3525.44,8363.95};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 225.202;
			};
			class AStrong_Gospandi_02
			{
				name = "";
				position[] = {3699.77,8902.38};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 359.585;
			};
			class AStrong_Gospandi_03
			{
				name = "";
				position[] = {3842.03,8746.08};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 293.875;
			};
			class AStrong_Bastam_01
			{
				name = "";
				position[] = {5926.88,8763.12};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 1.56;
			};
			class AStrong_Bastam_04
			{
				name = "";
				position[] = {5403.96,8995.81};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 81.836;
			};
			class AStrong_Bastam_03
			{
				name = "";
				position[] = {5419.24,9416.83};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 45.405;
			};
			class AStrong_Nagara_01
			{
				name = "";
				position[] = {3025.48,10225.43};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 306.654;
			};
			class AStrong_Nagara_02
			{
				name = "";
				position[] = {3031.93,9643.83};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 89.818;
			};
			class AStrong_Nagara_03
			{
				name = "";
				position[] = {3289.53,10201.79};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 99.979;
			};
			class AStrong_Rasman_01
			{
				name = "";
				position[] = {5800.52,10720.88};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 224.68;
			};
			class AStrong_Rasman_02
			{
				name = "";
				position[] = {6390.02,11719.82};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 254.037;
			};
			class AStrong_Rasman_03
			{
				name = "";
				position[] = {6598.49,11053.36};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 101.553;
			};
			class AStrong_Rasman_04
			{
				name = "";
				position[] = {6628.7,11695.61};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 53.64;
			};
			class AStrong_Nur_01
			{
				name = "";
				position[] = {2263.16,11641.56};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 163.125;
			};
			class AStrong_Nur_02
			{
				name = "";
				position[] = {1570.13,11363.37};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 200.362;
			};
			class AStrong_Nur_03
			{
				name = "";
				position[] = {2108.34,12218.52};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 35.096;
			};
			class AStrong_Shamali_01
			{
				name = "";
				position[] = {4133.41,11591.48};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 169.326;
			};
			class AStrong_Shamali_02
			{
				name = "";
				position[] = {4672.42,11847.6};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 167.834;
			};
			class AStrong_Shamali_03
			{
				name = "";
				position[] = {4236.53,12194.5};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 181.276;
			};
			class AStrong_Sagrami_01
			{
				name = "";
				position[] = {9662.71,10093.1};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 14.615;
			};
			class AStrong_Sagrami_02
			{
				name = "";
				position[] = {9049.19,10090.67};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 320.92;
			};
			class AStrong_Sagrami_03
			{
				name = "";
				position[] = {9188.34,9878.36};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 182.7;
			};
			class AStrong_Zavarak_01
			{
				name = "";
				position[] = {9498.12,11879.13};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 319.144;
			};
			class AStrong_Zavarak_02
			{
				name = "";
				position[] = {9974.83,11212.9};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 271.893;
			};
			class AStrong_Zavarak_03
			{
				name = "";
				position[] = {10145.98,11573.97};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 166.344;
			};
			class AStrong_Ravanay_01
			{
				name = "";
				position[] = {11424.16,7977.87};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 9.435;
			};
			class AStrong_Ravanay_02
			{
				name = "";
				position[] = {11600.87,8583.13};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_001
			{
				name = "";
				position[] = {2948.8,436.22};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_005
			{
				name = "";
				position[] = {3995.3,1642.72};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_008
			{
				name = "";
				position[] = {4962.37,306.73};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_009
			{
				name = "";
				position[] = {5331.47,941.41};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_010
			{
				name = "";
				position[] = {6669.71,973.72};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_011
			{
				name = "";
				position[] = {6901.26,1025.75};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_013
			{
				name = "";
				position[] = {7233.86,579.47};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_015
			{
				name = "";
				position[] = {7218.3,2062.75};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_016
			{
				name = "";
				position[] = {7632.36,2287.22};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_018
			{
				name = "";
				position[] = {9508.04,1632.52};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_019
			{
				name = "";
				position[] = {10019.27,1858.5};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_020
			{
				name = "";
				position[] = {10848.45,2532.79};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_021
			{
				name = "";
				position[] = {11202.02,2278.72};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_022
			{
				name = "";
				position[] = {11619.08,2449.47};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_026
			{
				name = "";
				position[] = {8607.41,3831.03};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_027
			{
				name = "";
				position[] = {8991.48,3636.87};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_029
			{
				name = "";
				position[] = {9925.11,4045.22};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_031
			{
				name = "";
				position[] = {6677.7,4848.11};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_032
			{
				name = "";
				position[] = {6481.58,4879.56};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_050
			{
				name = "";
				position[] = {1706.54,10420.12};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_051
			{
				name = "";
				position[] = {1373.24,11341.97};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_052
			{
				name = "";
				position[] = {2117.48,12513.9};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_053
			{
				name = "";
				position[] = {3359.7,12232.48};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_054
			{
				name = "";
				position[] = {3332.27,11017.97};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_055
			{
				name = "";
				position[] = {3750.99,10998.72};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_058
			{
				name = "";
				position[] = {4030.75,10110.4};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_059
			{
				name = "";
				position[] = {4329.27,9580.97};
				type = "FlatArea";
				radiusA = 139.02;
				radiusB = 81.1;
				angle = 0.0;
			};
			class AFlat_060
			{
				name = "";
				position[] = {4176.33,9160.72};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_061
			{
				name = "";
				position[] = {4520.14,9038.97};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_062
			{
				name = "";
				position[] = {5121.61,9534.84};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_064
			{
				name = "";
				position[] = {4817.07,10251.86};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_065
			{
				name = "";
				position[] = {4750.41,11498.57};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_066
			{
				name = "";
				position[] = {5600.42,12624.47};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_067
			{
				name = "";
				position[] = {5621.99,11872.97};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_070
			{
				name = "";
				position[] = {7164.24,10195.97};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_071
			{
				name = "";
				position[] = {7362.37,9571.1};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_072
			{
				name = "";
				position[] = {5902.77,9412.72};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_077
			{
				name = "";
				position[] = {9400.67,9038.97};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_078
			{
				name = "";
				position[] = {8367.77,10665.47};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_079
			{
				name = "";
				position[] = {7905.05,11700.22};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_080
			{
				name = "";
				position[] = {8809.24,11839.47};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_081
			{
				name = "";
				position[] = {9349.3,12316.22};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_082
			{
				name = "";
				position[] = {9997.64,10358.22};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_083
			{
				name = "";
				position[] = {10574.74,9817.47};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_084
			{
				name = "";
				position[] = {11078.09,10439.81};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_085
			{
				name = "";
				position[] = {11553.07,10873.12};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_086
			{
				name = "";
				position[] = {11452.49,10159.47};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_087
			{
				name = "";
				position[] = {11334.35,9532.81};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_088
			{
				name = "";
				position[] = {11854.24,7616.97};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_089
			{
				name = "";
				position[] = {12050.17,6597.97};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_091
			{
				name = "";
				position[] = {9102.51,6583.63};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_Garmarud
			{
				name = "";
				position[] = {9149.04,6668.42};
				type = "CityCenter";
				neighbors[] = {"ACityC_Imarat","ACityC_Garmsar","ACityC_Timurkalay"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class city_Garmarud
			{
				name = "$STR_EP1_LOCATION_GARMARUD";
				position[] = {9128.25,6864.95};
				type = "NameCity";
				speech[] = {"Garmarud"};
				radiusA = 200.0;
				radiusB = 200.0;
				angle = 0.0;
			};
			class AFlatCS_ChakChak01
			{
				name = "";
				position[] = {4164.86,557.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 197.961;
			};
			class AFlatCS_ChakChak02
			{
				name = "";
				position[] = {4394.77,791.75};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 26.936;
			};
			class AFlatCS_ChakChak03
			{
				name = "";
				position[] = {4508.42,699.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 91.533;
			};
			class AFlatCS_ChakChak04
			{
				name = "";
				position[] = {4545.49,559.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 50.535;
			};
			class AFlatCS_ChakChak05
			{
				name = "";
				position[] = {4773.86,738.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 59.933;
			};
			class AFlatCS_Huzrutimam02
			{
				name = "";
				position[] = {5811.08,1501.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 133.84;
			};
			class AFlatCS_Huzrutimam01
			{
				name = "";
				position[] = {5876.3,1176.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 180.395;
			};
			class AFlatCS_Huzrutimam03
			{
				name = "";
				position[] = {6075.88,1023.61};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 240.546;
			};
			class AFlatCS_Loymanara01
			{
				name = "";
				position[] = {8353.02,2378.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 160.305;
			};
			class AFlatCS_Loymanara02
			{
				name = "";
				position[] = {8686.15,2501.25};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 62.683;
			};
			class AFlatCS_Chardarakht01
			{
				name = "";
				position[] = {10068.99,2413.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 254.919;
			};
			class AFlatCS_Chardarakht02
			{
				name = "";
				position[] = {10116.68,2170.93};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 211.827;
			};
			class AFlatCS_Chardarakht03
			{
				name = "";
				position[] = {10330.11,2135.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 33.594;
			};
			class AFlatCS_Khushab01
			{
				name = "";
				position[] = {1387.69,5791.45};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 90.026;
			};
			class AFlatCS_Khushab02
			{
				name = "";
				position[] = {1442.33,5917.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 1.77;
			};
			class AFlatCS_Sakhee01
			{
				name = "";
				position[] = {3422.14,4117.3};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 197.871;
			};
			class AFlatCS_Sakhee02
			{
				name = "";
				position[] = {3853.24,4388.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 248.562;
			};
			class AFlatCS_Sakhee03
			{
				name = "";
				position[] = {3682.59,4658.01};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 338.768;
			};
			class AFlatCS_Kakaru01
			{
				name = "";
				position[] = {5387.05,4894.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 327.235;
			};
			class AFlatCS_Kakaru02
			{
				name = "";
				position[] = {5227.05,4614.76};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 73.141;
			};
			class AFlatCS_FeeruzAbad01
			{
				name = "";
				position[] = {4974.05,6037.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 306.83;
			};
			class AFlatCS_FeeruzAbad02
			{
				name = "";
				position[] = {5494.55,6294.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 53.219;
			};
			class AFlatCS_FeeruzAbad03
			{
				name = "";
				position[] = {5438.58,6324.4};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 145.153;
			};
			class AFlatCS_Anar01
			{
				name = "";
				position[] = {6798.69,6015.82};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 126.314;
			};
			class AFlatCS_Anar02
			{
				name = "";
				position[] = {6722.49,6150.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 185.178;
			};
			class AFlatCS_Anar03
			{
				name = "";
				position[] = {6775.92,6399.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlatCS_Falar01
			{
				name = "";
				position[] = {5960.33,7094.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 274.521;
			};
			class AFlatCS_Falar02
			{
				name = "";
				position[] = {5912.86,7404.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 111.748;
			};
			class AFlatCS_Falar03
			{
				name = "";
				position[] = {6085.39,7328.97};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 102.394;
			};
			class AFlatCS_Timurkalay01
			{
				name = "";
				position[] = {8746.14,5096.97};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 280.352;
			};
			class AFlatCS_Timurkalay02
			{
				name = "";
				position[] = {8822.08,5143.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 308.213;
			};
			class AFlatCS_Timurkalay03
			{
				name = "";
				position[] = {8993.2,5375.95};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 338.029;
			};
			class AFlatCS_Garmsar01
			{
				name = "";
				position[] = {10457.92,6350.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 257.149;
			};
			class AFlatCS_Garmsar02
			{
				name = "";
				position[] = {10627.04,6337.68};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 180.645;
			};
			class AFlatCS_Garmsar03
			{
				name = "";
				position[] = {11007.99,6345.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 242.161;
			};
			class AFlatCS_Imarat01
			{
				name = "";
				position[] = {8316.46,7741.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 160.632;
			};
			class AFlatCS_Imarat02
			{
				name = "";
				position[] = {8235.58,7695.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 124.421;
			};
			class AFlatCS_Imarat03
			{
				name = "";
				position[] = {8117.61,7797.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 314.185;
			};
			class AFlatCS_Mulladoost01
			{
				name = "";
				position[] = {1965.42,7661.98};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 89.01;
			};
			class AFlatCS_Mulladoost02
			{
				name = "";
				position[] = {2107.14,7739.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 187.055;
			};
			class AFlatCS_Gospandi01
			{
				name = "";
				position[] = {3633.77,8711.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 22.019;
			};
			class AFlatCS_Gospandi02
			{
				name = "";
				position[] = {3639.64,8459.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 215.801;
			};
			class AFlatCS_Gospandi03
			{
				name = "";
				position[] = {3799.55,8419.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 139.723;
			};
			class AFlatCS_Bastam01
			{
				name = "";
				position[] = {5479.07,9232.56};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 30.896;
			};
			class AFlatCS_Bastam02
			{
				name = "";
				position[] = {5531.7,8938.64};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 234.77;
			};
			class AFlatCS_Bastam03
			{
				name = "";
				position[] = {5737.05,8744.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 201.788;
			};
			class AFlatCS_Nagara01
			{
				name = "";
				position[] = {3140.25,9852.26};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 166.173;
			};
			class AFlatCS_Nagara02
			{
				name = "";
				position[] = {2994.08,9990.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 24.414;
			};
			class AFlatCS_Nagara03
			{
				name = "";
				position[] = {3314.92,10070.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 31.956;
			};
			class AFlatCS_Rasman01
			{
				name = "";
				position[] = {6157.92,10808.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 220.216;
			};
			class AFlatCS_Rasman02
			{
				name = "";
				position[] = {6103.49,11178.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 27.215;
			};
			class AFlatCS_Rasman03
			{
				name = "";
				position[] = {6529.55,11285.97};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 214.299;
			};
			class AFlatCS_Rasman04
			{
				name = "";
				position[] = {6608.42,11466.47};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 34.628;
			};
			class AFlatCS_Nur01
			{
				name = "";
				position[] = {1699.57,11739.25};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 240.352;
			};
			class AFlatCS_Nur02
			{
				name = "";
				position[] = {1890.01,11766.69};
				type = "FlatAreaCitySmall";
				speech[] = {"Nur"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 99.394;
			};
			class AFlatCS_Nur03
			{
				name = "";
				position[] = {2174.83,12118.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 345.843;
			};
			class AFlatCS_Shamali01
			{
				name = "";
				position[] = {4105.86,11904.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 171.853;
			};
			class AFlatCS_Shamali02
			{
				name = "";
				position[] = {4211.55,11843.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 323.71;
			};
			class AFlatCS_Shamali03
			{
				name = "";
				position[] = {4688.71,12302.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 285.114;
			};
			class AFlatCS_Sagram01
			{
				name = "";
				position[] = {9243.3,10009.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 36.403;
			};
			class AFlatCS_Sagram02
			{
				name = "";
				position[] = {9224.27,9865.22};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 192.126;
			};
			class AFlatCS_Sagram03
			{
				name = "";
				position[] = {9362.85,10136.45};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 75.441;
			};
			class AFlatCS_Zavarak01
			{
				name = "";
				position[] = {9619.21,11734.43};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 214.371;
			};
			class AFlatCS_Zavarak02
			{
				name = "";
				position[] = {9801.39,11282.36};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 182.17;
			};
			class AFlatCS_Zavarak03
			{
				name = "";
				position[] = {10064.05,11369.19};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 111.263;
			};
			class AFlatCS_Ravanay01
			{
				name = "";
				position[] = {11606.55,8378.72};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 351.801;
			};
			class AFlatCS_Ravanay02
			{
				name = "";
				position[] = {11566.61,8093.28};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 315.007;
			};
			class AFlatC_ChakChak
			{
				name = "";
				position[] = {4435.47,696.09};
				type = "FlatAreaCity";
				radiusA = 88.11;
				radiusB = 58.8;
				angle = 0.0;
			};
			class AStrong_Garmarud_01
			{
				name = "";
				position[] = {9135.02,6485.3};
				type = "StrongpointArea";
				radiusA = 70.16;
				radiusB = 46.8;
				angle = 171.4;
			};
			class AStrong_Garmarud_02
			{
				name = "";
				position[] = {9450.15,6561.86};
				type = "StrongpointArea";
				radiusA = 49.76;
				radiusB = 33.2;
				angle = 98.922;
			};
			class AStrong_Garmarud_03
			{
				name = "";
				position[] = {8991.81,6913.34};
				type = "StrongpointArea";
				radiusA = 31.85;
				radiusB = 21.2;
				angle = 321.149;
			};
			class AStrong_Bastam_02
			{
				name = "";
				position[] = {5886.63,8512.79};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 214.507;
			};
			class ACityC_Shamali
			{
				name = "";
				position[] = {4159.76,11708.13};
				type = "CityCenter";
				neighbors[] = {"ACityC_Bastam","ACityC_Rasman","ACityC_Nagara","ACityC_Nur"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlatC_Huzrutimam
			{
				name = "";
				position[] = {6068.46,1095.26};
				type = "FlatAreaCity";
				radiusA = 56.13;
				radiusB = 37.4;
				angle = 344.326;
			};
			class AFlatC_LoyManara
			{
				name = "";
				position[] = {8740.34,2502.22};
				type = "FlatAreaCity";
				radiusA = 62.2;
				radiusB = 41.5;
				angle = 329.347;
			};
			class AFlatC_Chardarakht
			{
				name = "";
				position[] = {10440.2,2343.35};
				type = "FlatAreaCity";
				radiusA = 121.47;
				radiusB = 81.0;
				angle = 0.0;
			};
			class AFlatC_Khushab
			{
				name = "";
				position[] = {1651.99,5623.04};
				type = "FlatAreaCity";
				radiusA = 61.89;
				radiusB = 41.3;
				angle = 0.0;
			};
			class AFlatC_Sakhee
			{
				name = "";
				position[] = {3468.2,4146.62};
				type = "FlatAreaCity";
				radiusA = 49.76;
				radiusB = 33.2;
				angle = 144.075;
			};
			class AFlatC_Kakaru
			{
				name = "";
				position[] = {5317.39,4772.22};
				type = "FlatAreaCity";
				radiusA = 49.76;
				radiusB = 33.2;
				angle = 272.371;
			};
			class AFlatC_FeeruzAbad
			{
				name = "";
				position[] = {5280.45,6187.81};
				type = "FlatAreaCity";
				radiusA = 63.69;
				radiusB = 42.5;
				angle = 303.885;
			};
			class AFlatC_Anar
			{
				name = "";
				position[] = {6033.75,5710.66};
				type = "FlatAreaCity";
				radiusA = 77.75;
				radiusB = 51.9;
				angle = 0.0;
			};
			class AFlatC_Timurkalay
			{
				name = "";
				position[] = {8870.79,5208.21};
				type = "FlatAreaCity";
				radiusA = 77.38;
				radiusB = 51.6;
				angle = 317.562;
			};
			class AFlatC_Garmsar
			{
				name = "";
				position[] = {10675.89,6360.72};
				type = "FlatAreaCity";
				radiusA = 61.6;
				radiusB = 41.1;
				angle = 179.713;
			};
			class AFlatC_Garmarud
			{
				name = "";
				position[] = {9211.73,6671.38};
				type = "FlatAreaCity";
				radiusA = 49.76;
				radiusB = 33.2;
				angle = 29.6;
			};
			class AFlatC_Imarat
			{
				name = "";
				position[] = {8217.48,7777.38};
				type = "FlatAreaCity";
				radiusA = 62.2;
				radiusB = 41.5;
				angle = 37.719;
			};
			class AFlatC_Mulladoost
			{
				name = "";
				position[] = {2013.51,7657.21};
				type = "FlatAreaCity";
				radiusA = 62.2;
				radiusB = 41.5;
				angle = 20.392;
			};
			class AFlatC_Gospandi
			{
				name = "";
				position[] = {3647.3,8586.32};
				type = "FlatAreaCity";
				radiusA = 77.75;
				radiusB = 51.9;
				angle = 283.278;
			};
			class AFlatC_Bastam
			{
				name = "";
				position[] = {5607.14,9143.22};
				type = "FlatAreaCity";
				radiusA = 61.9;
				radiusB = 41.3;
				angle = 96.038;
			};
			class AFlatC_Nagara
			{
				name = "";
				position[] = {3148.48,9961.81};
				type = "FlatAreaCity";
				radiusA = 39.8;
				radiusB = 26.6;
				angle = 321.187;
			};
			class AFlatC_Rasman
			{
				name = "";
				position[] = {6132.27,11044.72};
				type = "FlatAreaCity";
				radiusA = 49.76;
				radiusB = 33.2;
				angle = 118.806;
			};
			class AFlatC_Nur
			{
				name = "";
				position[] = {1890.7,11812.69};
				type = "FlatAreaCity";
				radiusA = 39.8;
				radiusB = 26.6;
				angle = 202.328;
			};
			class AFlatC_Shamali
			{
				name = "";
				position[] = {4163.22,12043.12};
				type = "FlatAreaCity";
				radiusA = 49.76;
				radiusB = 33.2;
				angle = 325.679;
			};
			class AFlatC_Sagram
			{
				name = "";
				position[] = {9412.23,10016.77};
				type = "FlatAreaCity";
				radiusA = 77.75;
				radiusB = 51.9;
				angle = 294.588;
			};
			class AFlatC_Zavarak
			{
				name = "";
				position[] = {9797.03,11352.27};
				type = "FlatAreaCity";
				radiusA = 151.13;
				radiusB = 100.8;
				angle = 81.785;
			};
			class AFlatC_Ravanay
			{
				name = "";
				position[] = {11455.42,8266.49};
				type = "FlatAreaCity";
				radiusA = 61.6;
				radiusB = 41.1;
				angle = 119.041;
			};
			class AFlatC_Falar
			{
				name = "";
				position[] = {5867.8,7260.45};
				type = "FlatAreaCity";
				radiusA = 26.09;
				radiusB = 17.4;
				angle = 0.0;
			};
			class AFlat_049
			{
				name = "";
				position[] = {1442.77,10031.47};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_002
			{
				name = "";
				position[] = {2410.81,907.76};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_033
			{
				name = "";
				position[] = {6861.64,5606.22};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
		};
		skyObject = "ca\Takistan\Data\obloha.p3d";
		horizontObject = "ca\Takistan\Data\horizont.p3d";
		skyTexture = "ca\Takistan\Data\sky_semicloudy_sky.paa";
		skyTextureR = "ca\Takistan\Data\sky_semicloudy_lco.paa";
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
				position[] = {5809.0806,11329.115};
				radius = 300;
				class Items
				{
					class Tracked
					{
						positions[] = {{ 5908.832,11308.094 },{ 5918.1846,11307.186 },{ 5925.9927,11305.394 },{ 5934.022,11305.053 },{ 5941.8867,11302.24 },{ 5949.625,11301.652 },{ 5959.543,11301.524 },{ 5970.7524,11304.175 }};
						positionsInfo[] = {{ 5909.16,11314.914 },{ 5917.1035,11313.62 },{ 5924.9976,11312.306 },{ 5932.987,11311.178 },{ 5940.8306,11309.638 },{ 5948.542,11308.408 },{ 5956.9624,11306.92 },{ 5966.1934,11305.638 }};
						directions[] = {-31.730001,5.0299478,9.917381,10.524661,3.192884,11.074072,32.79452,-27.424543};
						directionsInfo[] = {189.51373,184.12274,175.39653,192.74733,183.27594,171.34851,157.47131,113.76516};
					};
					class Wheeled
					{
						positions[] = {{ 5916.311,11337.935 },{ 5920.2285,11337.257 },{ 5924.22,11336.713 },{ 5928.217,11336.063 },{ 5932.2734,11335.63 },{ 5936.3315,11335.132 },{ 5947.188,11332.854 },{ 5958.1514,11324.08 }};
						positionsInfo[] = {{ 5914.0083,11335.771 },{ 5918.2993,11335.44 },{ 5922.426,11334.969 },{ 5926.3213,11334.298 },{ 5930.183,11333.731 },{ 5934.197,11333.23 },{ 5943.5034,11332.696 },{ 5955.104,11321.65 }};
						directions[] = {189.59724,188.2169,185.33064,187.2235,186.16573,188.36151,216.61348,277.5061};
						directionsInfo[] = {61.88056,28.087082,31.253305,21.805513,33.192886,32.9961,58.447155,40.768948};
					};
					class Static
					{
						positions[] = {{ 5721.0576,11177.477 },{ 5713.7476,11184.294 },{ 5706.1255,11191.938 },{ 5698.3823,11198.986 }};
						positionsInfo[] = {{ 5725.1104,11183.24 },{ 5717.6787,11190.521 },{ 5709.576,11197.5 },{ 5703.17,11203.116 }};
						directions[] = {-137.61133,-133.96391,-140.57957,-143.10365};
						directionsInfo[] = {212.00082,217.98308,217.06561,227.6536};
					};
					class Helicopters
					{
						positions[] = {{ 5858.69,11365.916 },{ 5881.13,11386.483 },{ 5877.299,11348.438 },{ 5899.1694,11369.373 },{ 5931.3916,11364.511 }};
						positionsInfo[] = {{ 5864.7637,11365.847 },{ 5883.526,11380.803 },{ 5877.8066,11354.458 },{ 5893.0083,11365.45 },{ 5925.699,11373.201 }};
						directions[] = {-44.07515,-179.49483,29.334248,-281.65863,-382.7326};
						directionsInfo[] = {260.57785,331.76065,172.60655,406.3164,144.91966};
					};
					class Airplanes
					{
						positions[] = {{ 5817.5254,11362.511 },{ 5774.5366,11320.261 },{ 5732.749,11277.438 },{ 5704.8696,11248.442 }};
						positionsInfo[] = {{ 5814.8516,11372.121 },{ 5773.352,11328.453 },{ 5730.955,11286.065 },{ 5693.003,11250.731 }};
						directions[] = {-45.115,-50.653954,-44.6776,-106.93854};
						directionsInfo[] = {189.47194,194.87836,188.06766,156.63158};
					};
					class Ships{};
					class Rifles
					{
						positions[] = {{ 5934.546,11262.284,0.18192773 },{ 5936.6807,11264.046,0.19743624 },{ 5938.5664,11264.835,0.18239284 },{ 5940.776,11268.438,0.7978836 },{ 5941.612,11271.006,0.80837303 },{ 5943.6772,11268.222,0.8014174 },{ 5945.3755,11270.695,0.795777 },{ 5946.1006,11271.326,0.7980628 },{ 5947.146,11271.936,0.7975183 },{ 5947.806,11272.494,0.79202795 },{ 5948.737,11273.044,0.80142665 },{ 5949.4873,11273.632,0.7873501 }};
						positionsInfo[] = {{ 5934.866,11261.513 },{ 5937.4063,11263.438 },{ 5938.926,11263.704 },{ 5940.518,11267.652 },{ 5942.2104,11271.362 },{ 5943.442,11267.468 },{ 5944.711,11270.301 },{ 5946.1445,11271.983 },{ 5946.4653,11272.204 },{ 5947.8374,11273.159 },{ 5948.1533,11273.371 },{ 5950.0225,11274.153 }};
						directions[] = {150.52876,287.6515,167.1384,144.39268,137.74799,332.09937,144.97836,336.06396,133.16441,146.02283,127.63669,314.61658};
						directionsInfo[] = {169.61177,135.55171,166.41328,168.71605,117.91341,159.07094,169.03339,132.81483,159.52127,133.02872,157.64005,120.06903};
					};
					class Machineguns
					{
						positions[] = {{ 5918.3413,11290.072,0.6141239 },{ 5920.6045,11290.413,0.09339422 },{ 5922.115,11290.505,0.09118938 },{ 5924.337,11290.706,0.14386237 },{ 5926.4775,11289.643,0.091877475 },{ 5927.8853,11289.049,0.09951182 },{ 5929.455,11286.795,0.18770047 },{ 5929.1978,11284.623,0.1817034 }};
						positionsInfo[] = {{ 5917.4854,11290.545 },{ 5920.5776,11291.512 },{ 5922.245,11291.592 },{ 5924.482,11291.358 },{ 5926.855,11290.616 },{ 5928.2983,11290.047 },{ 5930.3643,11287.17 },{ 5930.307,11284.271 }};
						directions[] = {-87.99329,15.12636,-12.65079,13.52574,222.54796,17.87614,82.425514,91.450935};
						directionsInfo[] = {327.97504,357.04944,366.5685,374.1385,380.27014,389.2031,432.8508,469.8317};
					};
					class Sidearms
					{
						positions[] = {{ 5897.549,11273.367,0.8070987 },{ 5896.2065,11271.723,0.803231 },{ 5893.967,11271.207,0.7974346 },{ 5893.1567,11271.749,0.79526436 },{ 5891.661,11273.151,0.81766623 },{ 5887.771,11272.725,0.7899288 },{ 5887.061,11273.332,0.7933937 }};
						positionsInfo[] = {{ 5898.4014,11273.356 },{ 5895.961,11270.909 },{ 5894.352,11270.352 },{ 5892.278,11271.781 },{ 5891.025,11273.524 },{ 5887.9194,11271.781 },{ 5886.216,11273.362 }};
						directions[] = {139.26463,176.92929,228.46768,139.26463,238.00507,400.05902,245.18674};
						directionsInfo[] = {119.52348,169.96922,196.39844,243.64935,245.12096,193.08302,250.1267};
					};
					class Launchers
					{
						positions[] = {{ 5738.472,11217.608,0.5017777 },{ 5734.923,11218.2,0.5061067 },{ 5737.1846,11221.862,0.057738815 },{ 5737.567,11224.167,0.84895813 },{ 5739.566,11226.064,0.090989426 },{ 5741.057,11226.354,0.09720888 },{ 5744.748,11227.833,0.5598718 },{ 5746.752,11226.022,0.569498 }};
						positionsInfo[] = {{ 5737.6377,11217.788 },{ 5735.2144,11217.304 },{ 5736.215,11222.334 },{ 5738.1924,11224.918 },{ 5738.8833,11226.809 },{ 5740.817,11227.294 },{ 5745.42,11228.561 },{ 5747.4404,11226.738 }};
						directions[] = {-129.59729,49.72215,-77.86185,-229.62329,-42.63052,-3.31053,-38.59323,-230.40457};
						directionsInfo[] = {247.62268,206.92995,301.2947,341.83557,314.20157,337.07388,339.13907,348.60773};
					};
					class Explosives
					{
						positions[] = {{ 5792.0273,11191.239,0.9681611 },{ 5790.3457,11189.17,0.6184081 },{ 5788.0723,11191.269,0.9643957 },{ 5789.827,11193.299,0.9624089 },{ 5781.994,11194.394,0.9512173 },{ 5781.3223,11195.536,0.958874 },{ 5780.3447,11196.829,0.72192013 }};
						positionsInfo[] = {{ 5792.4824,11191.868 },{ 5789.661,11188.904 },{ 5787.7773,11190.526 },{ 5790.5186,11193.682 },{ 5782.4766,11193.799 },{ 5782.3057,11195.448 },{ 5781.1885,11196.606 }};
						directions[] = {-71.70607,-59.26987,-29.12854,58.31915,-126.71478,24.11604,-112.41443};
						directionsInfo[] = {115.49272,149.64583,291.3179,-32.920094,247.79753,232.471,257.20862};
					};
					class Characters{};
					class Animals{};
				};
				class Areas
				{
					class Tracked
					{
						displayName = "$STR_EP1_MPA_AREA_TRACKED";
						position[] = {5934.011,11304.33};
						positionInfo[] = {5900.5815,11303.592};
						direction = 0;
						directionInfo = 104.453;
						markerType = "n_armor";
						directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_tracked_ca";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_tracked1.sqf";
						compositionPosition[] = {5929.444,11303.045};
					};
					class Wheeled
					{
						displayName = "$STR_EP1_MPA_AREA_WHEELED";
						position[] = {5929.2188,11335.537};
						positionInfo[] = {5908.9473,11341.527};
						direction = 0;
						directionInfo = 101.49701;
						markerType = "n_motor_inf";
						directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_wheeled_ca";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_wheeled1.sqf";
						compositionPosition[] = {5931.351,11332.369};
					};
					class Static
					{
						displayName = "$STR_EP1_MPA_AREA_STATIC";
						position[] = {5711.4688,11190.557};
						positionInfo[] = {5746.166,11201.804};
						direction = 0;
						directionInfo = 222.42387;
						markerType = "n_art";
						directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_static_ca";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_static1.sqf";
						compositionPosition[] = {5723.696,11185.877};
					};
					class Helicopters
					{
						displayName = "$STR_LIB_CAT_HELICOPTERS";
						position[] = {5879.616,11369.216};
						positionInfo[] = {5873.9673,11362.85};
						direction = 0;
						directionInfo = 224.14284;
						markerType = "n_air";
						directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_helicopters_ca";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_helicopters1.sqf";
						compositionPosition[] = {5895.5244,11369.874};
					};
					class Airplanes
					{
						displayName = "$STR_LIB_CAT_AIRPLANES";
						position[] = {5756.3228,11295.637};
						positionInfo[] = {5769.525,11284.126};
						direction = 0;
						directionInfo = 135.39671;
						markerType = "n_plane";
						directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_airplanes_ca";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_airplanes1.sqf";
						compositionPosition[] = {5756.8423,11299.666};
					};
					class Rifles
					{
						displayName = "$STR_LIB_CAT_RIFLES";
						position[] = {5945.5747,11270.249};
						positionInfo[] = {5901.033,11276.586};
						direction = 0;
						directionInfo = 172.00719;
						markerType = "n_empty";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_rifles1.sqf";
						compositionPosition[] = {5940.1636,11268.145};
						directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_rifles_ca";
					};
					class Machineguns
					{
						displayName = "$STR_LIB_CAT_MACHINEGUNS";
						position[] = {5924.699,11288.918};
						direction = 0;
						markerType = "n_empty";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_machineguns1.sqf";
						compositionPosition[] = {5924.454,11288.954};
						directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_machineguns_ca";
					};
					class Sidearms
					{
						displayName = "$STR_LIB_CAT_SIDEARMS";
						position[] = {5894.058,11272.354};
						direction = 0;
						markerType = "n_empty";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_sidearms1.sqf";
						compositionPosition[] = {5891.7583,11272.558};
						directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_sidearms_ca";
					};
					class Launchers
					{
						displayName = "$STR_LIB_CAT_LAUNCHERS";
						position[] = {5740.739,11224.112};
						positionInfo[] = {5756.8735,11221.648};
						direction = 0;
						directionInfo = 314.83594;
						markerType = "n_empty";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_launchers1.sqf";
						compositionPosition[] = {5741.8926,11221.015};
						directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_launchers_ca";
					};
					class Explosives
					{
						displayName = "$STR_LIB_CAT_EXPLOSIVES";
						position[] = {5786.477,11194.255};
						positionInfo[] = {5809.497,11194.771};
						direction = 0;
						directionInfo = 131.0181;
						markerType = "n_empty";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_explosives1.sqf";
						compositionPosition[] = {5784.7827,11194.396};
						directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_explosives_ca";
					};
					class MobilityRange1
					{
						displayName = "$STR_LIB_CHAL_MOB_RANGE";
						position[] = {5839.9336,11275.336};
						direction = 0;
						markerType = "hd_flag";
						markerColor = "ColorBlue";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_mobility_range1.sqf";
						compositionPosition[] = {5839.889,11261.374};
						directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_mobility_range_ca";
					};
					class MobilityRange2: MobilityRange1
					{
						position[] = {5754.623,11427.085};
						compositionScript = "ca\takistan\data\scripts\armory\mpa_mobility_range2.sqf";
						compositionPosition[] = {5695.0527,11353.563};
					};
					class Entrance
					{
						displayName = "$STR_EP1_MPA_AREA_ENTRANCE";
						position[] = {5964.1313,11435.28};
						positionInfo[] = {5922.2236,11398.07};
						direction = -140.79787;
						directionInfo = 219.39839;
						markerType = "Join";
						markerColor = "ColorBlue";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_entrance1.sqf";
						compositionPosition[] = {5952.7856,11407.14};
						directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_entrance_exit_ca";
					};
					class FiringRange1
					{
						displayName = "$STR_LIB_CHAL_FIRING_RANGE";
						position[] = {5909.218,11256.819};
						direction = 0;
						markerType = "hd_flag";
						markerColor = "ColorBlue";
						compositionScript = "ca\takistan\data\scripts\armory\mpa_firing_range1.sqf";
						compositionPosition[] = {5875.6304,11229.42};
						directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_firing_range_ca";
					};
					class FiringRange2: FiringRange1
					{
						position[] = {5796.7817,11175.495};
						compositionScript = "ca\takistan\data\scripts\armory\mpa_firing_range2.sqf";
						compositionPosition[] = {5797.069,11171.756};
					};
					class FiringRange3: FiringRange1
					{
						position[] = {5674.699,11155.115};
						compositionScript = "ca\takistan\data\scripts\armory\mpa_firing_range3.sqf";
						compositionPosition[] = {5340.258,10747.431};
					};
				};
				class AmbientObjects
				{
					compositionScripts[] = {"ca\takistan\data\scripts\armory\mpa_ambient1.sqf","ca\takistan\data\scripts\armory\mpa_ambient2.sqf","ca\takistan\data\scripts\armory\mpa_ambient3.sqf","ca\takistan\data\scripts\armory\mpa_ambient4.sqf"};
					compositionAnchors[] = {{ 5288.082,10990.731 },{ 5832.9126,11310.231 },{ 5790.324,11264.4 },{ 6009.238,11795.419 }};
				};
			};
			backUpRoutes[] = {{ { 6765.01,5035.55,0 },{ 6175.25,5244.77,0 },{ 6113.64,5638.13,0 },{ 6197.79,5924.33,0 },{ 5795.82,5915.04,0 },{ 5855.75,6687.66,0 },{ 5227.07,6156.68,0 } },{ { 5926.28,7106.51,0 },{ 5855.99,6687.98,0 },{ 5796.57,5914.33,0 },{ 5857.61,5740.79,0 },{ 5908.9,5627.51,0 },{ 6176.26,5243.34,0 },{ 6860.84,5010.05,0 },{ 7083.23,4938.65,0 } }};
		};
		safePositionAnchor[] = {6337.06,6345.79};
		safePositionRadius = 5500;
	};
};
class CfgWorldList
{
	class Takistan{};
};
class CfgMissions
{
	class Cutscenes
	{
		class TakistanIntro1
		{
			directory = "ca\takistan\data\scenes\intro.takistan";
		};
		class TakistanIntro2
		{
			directory = "ca\takistan\data\scenes\intro2.takistan";
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
		rough = 0.01;
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
