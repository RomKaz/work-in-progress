////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:49 2014 : Source 'file' date Fri Oct 31 06:13:49 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class zargabad : config.bin{
class CfgPatches
{
	class zargabad
	{
		units[] = {"Zargabad"};
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
	class Zargabad: CAWorld
	{
		access = 3;
		worldId = 5;
		cutscenes[] = {"ZargabadIntro1","ZargabadIntro2"};
		description = "$STR_EP1_LOCATION_ZARGABAD";
		icon = "";
		worldName = "\ca\zargabad\zargabad.wrp";
		pictureMap = "";
		pictureShot = "\ca\zargabad\data\ui_selectisland_zargabad_ca.paa";
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
				soundNight[] = {"\ca\Sounds_E\sfx\lake_3",0.056234132,1};
				volume = "sea";
			};
		};
		class OutsideTerrain
		{
			satellite = "ca\zargabad\data\s_satout_co.paa";
			enableTerrainSynth = 1;
			class Layers
			{
				class Layer0
				{
					nopx = "ca\zargabad\data\zr_polopoust_nopx.paa";
					texture = "ca\zargabad\data\zr_polopoust_co.paa";
				};
			};
		};
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 8192;
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
		startTime = "11:30";
		startDate = "29/5/2009";
		startWeather = 0.25;
		startFog = 0.0;
		forecastWeather = 0.0;
		forecastFog = 0.0;
		centerPosition[] = {4096,4096,300};
		seagullPos[] = {1272.842,150.0,14034.962};
		ilsPosition[] = {3402,3560};
		ilsDirection[] = {0,0.08,-1};
		ilsTaxiOff[] = {3402,3800,3402,4072,3402,4310,3410,4332,3428,4338,3472,4338,3488,4329,3492,4310,3492,4098};
		ilsTaxiIn[] = {3492,4098,3492,3576,3486,3564,3472,3558,3428,3558,3410,3562,3402,3578,3402,3598};
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
			groundReflection[] = {0.063,0.061,0.038};
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
		midDetailTexture = "ca\zargabad\data\zr_middle_mco.paa";
		minTreesInForestSquare = 3;
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
			class local_Zargabad
			{
				name = "$STR_EP1_LOCATION_ZARGABAD";
				position[] = {4071.37,4183.32};
				type = "NameCityCapital";
				radiusA = 300.0;
				radiusB = 300.0;
				angle = 0.0;
			};
			class local_Yarum
			{
				name = "$STR_EP1_LOCATION_YARUM";
				position[] = {4154.24,3592.65};
				type = "NameVillage";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_Shahbaz
			{
				name = "$STR_EP1_LOCATION_SHAHBAZ";
				position[] = {3528.11,1932.74};
				type = "NameVillage";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_Azizayt
			{
				name = "$STR_EP1_LOCATION_AZIZAYT";
				position[] = {1929.89,4652.94};
				type = "NameVillage";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_Nango
			{
				name = "$STR_EP1_LOCATION_NANGO";
				position[] = {2823.53,5022.13};
				type = "NameCity";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_Hazar_Bagh
			{
				name = "$STR_EP1_LOCATION_HAZARBAGH";
				position[] = {3943.51,5957.63};
				type = "NameVillage";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_military_base
			{
				name = "$STR_EP1_LOCATION_MILITARYBASE";
				position[] = {4982.72,6207.94};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_The_Villa
			{
				name = "$STR_EP1_LOCATION_THEVILLA";
				position[] = {4813.26,4645.28};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_factory
			{
				name = "$STR_EP1_LOCATION_FACTORY";
				position[] = {3019.8,4874.67};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_airport
			{
				name = "$STR_EP1_LOCATION_AIRPORT";
				position[] = {3386.26,4082.67};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class local_Firuz_Baharv
			{
				name = "$STR_EP1_LOCATION_FIRUZBAHARV";
				position[] = {5059.49,1878.24};
				type = "NameLocal";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class water_Abe_Shur_dam
			{
				name = "$STR_EP1_LOCATION_ABESHURDAM";
				position[] = {2889.65,3143.63};
				type = "NameMarine";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class ACityC_azizayt
			{
				name = "";
				position[] = {1996.78,4655.9};
				type = "CityCenter";
				neighbors[] = {"ACityC_Nango","ACityC_Airport"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 125.658;
			};
			class AStrong_azizayt01
			{
				name = "";
				position[] = {1996.06,4751.07};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 14.756;
			};
			class AStrong_azizayt02
			{
				name = "";
				position[] = {1892.44,4598.88};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 243.454;
			};
			class AStrong_azizayt03
			{
				name = "";
				position[] = {2007.95,4492.6};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 162.387;
			};
			class AStrong_azizayt04
			{
				name = "";
				position[] = {2180.0,4523.97};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 117.499;
			};
			class AFlatCS_azizayt
			{
				name = "";
				position[] = {2096.05,4658.62};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 45.585;
			};
			class ACityC_Nango
			{
				name = "";
				position[] = {2857.68,5026.7};
				type = "CityCenter";
				neighbors[] = {"ACityC_Airport","ACityC_HazarBagh","ACityC_Azizayt","ACityC_Zargabad"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AStrong_Nango01
			{
				name = "";
				position[] = {2737.17,5265.34};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 329.37;
			};
			class AStrong_Nango02
			{
				name = "";
				position[] = {2821.82,4933.93};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 189.81;
			};
			class AStrong_Nango03
			{
				name = "";
				position[] = {3032.63,4840.61};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 143.751;
			};
			class AStrong_Nango04
			{
				name = "";
				position[] = {3018.1,4960.1};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 61.768;
			};
			class AFlatCS_Nango
			{
				name = "";
				position[] = {2826.6,5004.11};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 49.224;
			};
			class ACityC_HazarBagh
			{
				name = "";
				position[] = {3822.68,6070.52};
				type = "CityCenter";
				neighbors[] = {"ACityC_Airport","ACityC_Nango","ACityC_TheVilla","ACityC_Zargabad"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 70.859;
			};
			class AStrong_HazarBagh01
			{
				name = "";
				position[] = {3843.73,6194.28};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 335.965;
			};
			class AStrong_HazarBagh02
			{
				name = "";
				position[] = {3734.85,6102.97};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 257.115;
			};
			class AStrong_HazarBagh04
			{
				name = "";
				position[] = {4000.9,6009.5};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 123.289;
			};
			class AStrong_HazarBagh03
			{
				name = "";
				position[] = {3806.47,5906.27};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 200.454;
			};
			class AFlatCS_HazarBagh
			{
				name = "";
				position[] = {3831.5,6048.29};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 72.078;
			};
			class ACityC_TheVilla
			{
				name = "";
				position[] = {4773.98,4436.08};
				type = "CityCenter";
				neighbors[] = {"ACityC_HazarBagh","ACityC_Zargabad","ACityC_FiruzBaharv"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 308.229;
			};
			class AStrong_TheVilla01
			{
				name = "";
				position[] = {4919.39,4453.88};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 102.838;
			};
			class AFlatCS_TheVilla
			{
				name = "";
				position[] = {4728.63,4409.13};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 264.316;
			};
			class AStrong_TheVilla02
			{
				name = "";
				position[] = {4728.76,4566.76};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 294.385;
			};
			class AStrong_TheVilla03
			{
				name = "";
				position[] = {4950.16,4703.27};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 59.978;
			};
			class AStrong_TheVilla04
			{
				name = "";
				position[] = {4679.84,4446.22};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 177.114;
			};
			class ACityC_FiruzBaharv
			{
				name = "";
				position[] = {5082.53,1911.59};
				type = "CityCenter";
				neighbors[] = {"ACityC_Yarum","ACityC_base","ACityC_nothing","ACityC_TheVilla","ACityC_Zargabad"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 289.792;
			};
			class AFlatCS_FiruzBaharv
			{
				name = "";
				position[] = {5066.42,1849.67};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 289.279;
			};
			class AStrong_FiruzBaharv01
			{
				name = "";
				position[] = {5032.82,1807.98};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 198.837;
			};
			class AStrong_FiruzBaharv02
			{
				name = "";
				position[] = {4977.22,1926.1};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 289.177;
			};
			class AStrong_FiruzBaharv03
			{
				name = "";
				position[] = {4836.19,1858.51};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 238.177;
			};
			class AStrong_FiruzBaharv04
			{
				name = "";
				position[] = {5101.8,2007.6};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 357.623;
			};
			class ACityC_nothing
			{
				name = "";
				position[] = {3264.38,1084.74};
				type = "CityCenter";
				neighbors[] = {"ACityC_dam","ACityC_base","ACityC_FiruzBaharv"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.297;
			};
			class AFlatCS_nothing
			{
				name = "";
				position[] = {3255.05,1051.46};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 258.602;
			};
			class AStrong_nothing01
			{
				name = "";
				position[] = {3416.81,1155.3};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 66.761;
			};
			class AStrong_nothing02
			{
				name = "";
				position[] = {3389.18,1371.11};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 23.085;
			};
			class AStrong_nothing03
			{
				name = "";
				position[] = {3275.86,1417.63};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 342.792;
			};
			class AStrong_nothing04
			{
				name = "";
				position[] = {3158.35,1221.08};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 339.595;
			};
			class ACityC_base
			{
				name = "";
				position[] = {3954.59,2776.17};
				type = "CityCenter";
				neighbors[] = {"ACityC_Yarum","ACityC_dam","ACityC_nothing","ACityC_FiruzBaharv"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 252.704;
			};
			class AFlatCS_base
			{
				name = "";
				position[] = {3862.94,2760.03};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 73.099;
			};
			class AStrong_base01
			{
				name = "";
				position[] = {3983.42,2679.37};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 158.81;
			};
			class AStrong_base02
			{
				name = "";
				position[] = {4056.66,2802.47};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 48.87;
			};
			class AStrong_base03
			{
				name = "";
				position[] = {3907.36,2841.27};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 10.006;
			};
			class AStrong_base04
			{
				name = "";
				position[] = {3844.34,2777.36};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 265.022;
			};
			class ACityC_dam
			{
				name = "";
				position[] = {3091.86,2752.96};
				type = "CityCenter";
				neighbors[] = {"ACityC_Yarum","ACityC_Airport","ACityC_nothing","ACityC_base"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 342.979;
			};
			class AFlatCS_dam
			{
				name = "";
				position[] = {3149.03,2769.98};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 335.809;
			};
			class AStrong_dam01
			{
				name = "";
				position[] = {3152.16,2824.37};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 74.764;
			};
			class AStrong_dam02
			{
				name = "";
				position[] = {3052.25,2856.91};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 342.902;
			};
			class AStrong_dam03
			{
				name = "";
				position[] = {3027.37,2792.27};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 277.473;
			};
			class AStrong_dam04
			{
				name = "";
				position[] = {3188.51,2738.83};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 171.415;
			};
			class AFlatCS_Yarum
			{
				name = "";
				position[] = {3949.38,3637.38};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 58.576;
			};
			class AStrong_Yarum01
			{
				name = "";
				position[] = {4104.25,3666.01};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 17.805;
			};
			class AStrong_Yarum02
			{
				name = "";
				position[] = {4149.7,3553.01};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 100.764;
			};
			class AStrong_Yarum03
			{
				name = "";
				position[] = {4013.66,3476.09};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 185.505;
			};
			class AStrong_Yarum04
			{
				name = "";
				position[] = {3929.04,3646.7};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 305.903;
			};
			class ACityC_Airport
			{
				name = "";
				position[] = {3556.46,4092.85};
				type = "CityCenter";
				neighbors[] = {"ACityC_Azizayt","ACityC_Nango","ACityC_HazaBagh","ACityC_Zargabad","ACityC_base","ACityC_dam","ACityC_Yarum"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 89.693;
			};
			class AFlatCS_Airport
			{
				name = "";
				position[] = {3551.82,4059.53};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 89.401;
			};
			class AStrong_Airport01
			{
				name = "";
				position[] = {3627.97,4107.4};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 108.094;
			};
			class AStrong_Airport02
			{
				name = "";
				position[] = {3524.42,4213.99};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 12.767;
			};
			class AStrong_Airport03
			{
				name = "";
				position[] = {3370.27,4110.59};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 270.563;
			};
			class AStrong_Airport04
			{
				name = "";
				position[] = {3524.12,3890.72};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 154.528;
			};
			class ACityC_Zargabad
			{
				name = "";
				position[] = {4073.2,4139.85};
				type = "CityCenter";
				neighbors[] = {"ACityC_Airport","ACityC_Nango","ACityC_HazaBagh","ACityC_TheVilla","ACityC_FiruzBaharv","ACityC_dam","ACityC_Yarum"};
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlatCS_Zargabad
			{
				name = "";
				position[] = {4034.25,4110.18};
				type = "FlatAreaCitySmall";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 181.179;
			};
			class AStrong_Zargabad01
			{
				name = "";
				position[] = {4136.19,4253.45};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 23.172;
			};
			class AStrong_Zargabad02
			{
				name = "";
				position[] = {4274.97,4110.54};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 130.368;
			};
			class AStrong_Zargabad03
			{
				name = "";
				position[] = {4009.58,4129.58};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 293.94;
			};
			class AStrong_Zargabad04
			{
				name = "";
				position[] = {4093.5,4015.73};
				type = "StrongpointArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 176.479;
			};
			class AFlat_01
			{
				name = "";
				position[] = {1968.95,5057.73};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_13
			{
				name = "";
				position[] = {2753.11,5383.45};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_24
			{
				name = "";
				position[] = {3541.35,5303.42};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 171.418;
			};
			class AFlat_26
			{
				name = "";
				position[] = {4151.78,5671.96};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 329.595;
			};
			class AFlat_27
			{
				name = "";
				position[] = {4624.69,6082.31};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_28
			{
				name = "";
				position[] = {4240.6,6525.69};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 233.685;
			};
			class AFlat_29
			{
				name = "";
				position[] = {3529.94,6438.56};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 72.398;
			};
			class AFlat_30
			{
				name = "";
				position[] = {4972.85,5471.56};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 205.744;
			};
			class AFlat_04
			{
				name = "";
				position[] = {4213.15,4457.56};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_02
			{
				name = "";
				position[] = {3629.64,4991.62};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_03
			{
				name = "";
				position[] = {2501.77,4509.03};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 151.019;
			};
			class AFlat_05
			{
				name = "";
				position[] = {3097.37,3801.33};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_06
			{
				name = "";
				position[] = {3654.21,4234.43};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_07
			{
				name = "";
				position[] = {4508.07,4164.49};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_08
			{
				name = "";
				position[] = {4894.36,4221.26};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_09
			{
				name = "";
				position[] = {4700.51,3742.94};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_10
			{
				name = "";
				position[] = {4962.39,3569.42};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_11
			{
				name = "";
				position[] = {3903.31,3859.42};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_12
			{
				name = "";
				position[] = {3477.74,3449.29};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 356.83;
			};
			class AFlat_14
			{
				name = "";
				position[] = {3747.28,3204.25};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 27.412;
			};
			class AFlat_15
			{
				name = "";
				position[] = {4233.73,3249.11};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 91.208;
			};
			class AFlat_16
			{
				name = "";
				position[] = {4607.2,3374.02};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 316.127;
			};
			class AFlat_17
			{
				name = "";
				position[] = {4944.59,2656.94};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_18
			{
				name = "";
				position[] = {5287.39,2045.72};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_20
			{
				name = "";
				position[] = {4335.54,1873.6};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_21
			{
				name = "";
				position[] = {3978.75,1363.88};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_22
			{
				name = "";
				position[] = {3657.04,2004.31};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_23
			{
				name = "";
				position[] = {3139.64,2050.48};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 0.0;
			};
			class AFlat_25
			{
				name = "";
				position[] = {3453.47,2566.42};
				type = "FlatArea";
				radiusA = 100.0;
				radiusB = 100.0;
				angle = 329.452;
			};
			class AFlat_19
			{
				name = "";
				position[] = {4909.18,1336.14};
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
			disabled = 1;
			positionStart[] = {3462.08,4044.13};
			positionAdmin[] = {7821.84,301.511};
			positionsViewer[] = {{ 3515.47,4124.84 },{ 3920.6,4563.63 },{ 2962.32,2737.53 }};
			positionBlacklist[] = {{ { 2542.62,3405.82 },{ 3328.08,-385.256 } }};
			disableShips = 1;
			class Challenges
			{
				class FiringRange
				{
					positionsStart[] = {{ 3402.06,3575.59 }};
					directionsStart[] = {0};
				};
			};
		};
		safePositionAnchor[] = {3710.67,3282.77};
		safePositionRadius = 5000;
	};
};
class CfgWorldList
{
	class Zargabad{};
};
class CfgMissions
{
	class Cutscenes
	{
		class ZargabadIntro1
		{
			directory = "ca\zargabad\data\scenes\intro.zargabad";
		};
		class ZargabadIntro2
		{
			directory = "ca\zargabad\data\scenes\intro2.zargabad";
		};
	};
};
class CfgSurfaces
{
	class Default{};
	class Water{};
	class ZRAsfalt: Default
	{
		access = 2;
		files = "zr_asfalt_*";
		rough = 0.001;
		dust = 0.1;
		soundEnviron = "concrete_ext";
		character = "Empty";
		soundHit = "concrete";
	};
	class ZRBeton: Default
	{
		access = 2;
		files = "zr_beton_*";
		rough = 0.01;
		dust = 0.08;
		soundEnviron = "concrete_ext";
		character = "Empty";
		soundHit = "concrete";
	};
	class ZRHlina: Default
	{
		access = 2;
		files = "zr_hlina_*";
		rough = 0.1;
		dust = 0.8;
		soundEnviron = "dirt";
		character = "Empty";
		soundHit = "soft_ground";
	};
	class ZRPlevel: Default
	{
		access = 2;
		files = "zr_plevel_*";
		rough = 0.11;
		dust = 0.7;
		soundEnviron = "drygrass";
		character = "ZRWeedsClutter";
		soundHit = "soft_ground";
	};
	class ZRPole: Default
	{
		access = 2;
		files = "zr_pole_*";
		rough = 0.12;
		dust = 0.6;
		soundEnviron = "grass";
		character = "ZRFieldGrassClutter";
		soundHit = "soft_ground";
	};
	class ZRPolopoust: Default
	{
		access = 2;
		files = "zr_polopoust_*";
		rough = 0.01;
		dust = 0.9;
		soundEnviron = "dirt";
		character = "ZRDesertClutter";
		soundHit = "soft_ground";
	};
	class ZRSkala: Default
	{
		access = 2;
		files = "zr_skala_*";
		rough = 0.3;
		dust = 0.5;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class ZRSkalniSterk: Default
	{
		access = 2;
		files = "zr_skalni_sterk_*";
		rough = 0.15;
		dust = 1.0;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class ZRSterkNaDno: Default
	{
		access = 2;
		files = "zr_sterk_na_dno_*";
		rough = 0.2;
		dust = 0.0;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class ZRValouny: Default
	{
		access = 2;
		files = "zr_valouny_*";
		rough = 0.15;
		dust = 0.4;
		soundEnviron = "rock";
		character = "Empty";
		soundHit = "hard_ground";
	};
	class ZRTrava: Default
	{
		access = 2;
		files = "zr_trava_*";
		rough = 0.11;
		dust = 0.5;
		soundEnviron = "drygrass";
		character = "ZRGrassClutter";
		soundHit = "soft_ground";
	};
	class ZRDlazbaOld: Default
	{
		access = 2;
		files = "zr_dlazba_old_*";
		rough = 0.001;
		dust = 0.1;
		soundEnviron = "concrete_ext";
		character = "Empty";
		soundHit = "concrete";
	};
};
class CfgSurfaceCharacters
{
	class ZRGrassClutter
	{
		probability[] = {0.89,0.03,0.03};
		names[] = {"TK_GrassDry","TK_BrushHard","TK_PlantsWhite"};
	};
	class ZRDesertClutter
	{
		probability[] = {0.06,0.05,0.005,0.005};
		names[] = {"TK_BrushSoft","TK_BrushHard","TK_PlantsWhite","TK_WeedThistle"};
	};
	class ZRWeedsClutter
	{
		probability[] = {0.6,0.1,0.15,0.05,0.05};
		names[] = {"TK_GrassDry","TK_GrassDryLong","TK_Weed1","TK_WeedThistle","TK_BrushHard"};
	};
	class ZRFieldGrassClutter
	{
		probability[] = {0.6,0.3,0.02,0.01,0.02};
		names[] = {"TK_GrassGreen","TK_GrassGreenLong","TK_PlantsWhite","TK_PlantsViolet","TK_Weed1"};
	};
};
//};
