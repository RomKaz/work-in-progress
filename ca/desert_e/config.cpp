////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:08:19 2014 : Source 'file' date Fri Oct 31 06:08:19 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class desert_e : config.bin{
class CfgPatches
{
	class Desert_E
	{
		units[] = {"Desert_E"};
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
	class Desert_E: CAWorld
	{
		access = 3;
		worldId = 4;
		cutscenes[] = {"Desert_EIntro1"};
		description = "$STR_DESERT";
		icon = "";
		worldName = "\ca\Desert_E\Desert_E.wrp";
		pictureMap = "";
		pictureShot = "\ca\Desert_E\data\ui_selectisland_Desert_E_ca.paa";
		plateFormat = "TK$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		longitude = 65.8;
		latitude = -35;
		elevationOffset = 800;
		class OutsideTerrain
		{
			satellite = "ca\Desert_E\data\s_satout_co.paa";
			enableTerrainSynth = 1;
			class Layers
			{
				class Layer0
				{
					nopx = "ca\Desert_E\data\de_polopoust_nopx.paa";
					texture = "ca\Desert_E\data\de_polopoust_co.paa";
				};
			};
		};
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 2048;
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
		startTime = "7:30";
		startDate = "24/6/2012";
		startWeather = 0.3;
		startFog = 0.0;
		forecastWeather = 0.3;
		forecastFog = 0.0;
		centerPosition[] = {960,1090,300};
		seagullPos[] = {1024,150.0,1024};
		ilsPosition[] = {1024,1024};
		ilsDirection[] = {0.5075,0.08,-0.8616};
		ilsTaxiIn[] = {};
		ilsTaxiOff[] = {};
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
			deepNight[] = {-15,{ 0.05,0.05,0.06 },{ 0.001,0.001,0.002 },{ 0.02,0.02,0.05 },{ 0.003,0.003,0.003 },{ 0.0001,0.0001,0.0002 },{ 0.0001,0.0001,0.0002 },0};
			fullNight[] = {-5,{ 0.05,0.05,0.05 },{ 0.02,0.02,0.02 },{ 0.04,0.04,0.04 },{ 0.04,0.04,0.04 },{ 0.01,0.01,0.02 },{ 0.08,0.06,0.06 },0};
			sunMoon[] = {-3.75,{ 0.045,0.04,0.04 },{ 0.04,0.04,0.04 },{ 0.045,0.04,0.04 },{ 0.04,0.04,0.04 },{ 0.04,0.035,0.04 },{ 0.1,0.08,0.09 },0.5};
			earlySun[] = {-2.5,{ 0.12,0.1,0.1 },{ 0.08,0.06,0.07 },{ 0.12,0.1,0.1 },{ 0.08,0.06,0.07 },{ 0.08,0.07,0.08 },{ 0.1,0.1,0.12 },1};
			sunrise[] = {0,{ { 0.7,0.45,0.45 },"5.16+(-4)" },{ { 0.07,0.09,0.12 },"4.0+(-4)" },{ { 0.6,0.47,0.25 },"4.66+(-4)" },{ { 0.1,0.09,0.1 },"4.3+(-4)" },{ { 0.5,0.4,0.4 },"6.49+(-4)" },{ { 0.88,0.51,0.24 },"8.39+(-4)" },1};
			earlyMorning[] = {3,{ { 0.65,0.55,0.55 },"6.04+(-4)" },{ { 0.08,0.09,0.11 },"4.5+(-4)" },{ { 0.55,0.47,0.25 },"5.54+(-4)" },{ { 0.1,0.09,0.1 },"5.02+(-4)" },{ { 0.5,0.4,0.4 },"7.05+(-4)" },{ { 0.88,0.51,0.24 },"8.88+(-4)" },1};
			midMorning[] = {8,{ { 0.98,0.85,0.8 },"8.37+(-4)" },{ { 0.08,0.09,0.11 },"6.42+(-4)" },{ { 0.87,0.47,0.25 },"7.87+(-4)" },{ { 0.09,0.09,0.1 },"6.89+(-4)" },{ { 0.5,0.4,0.4 },"8.9+(-4)" },{ { 0.88,0.51,0.24 },"10.88+(-4)" },1};
			morning[] = {16,{ { 1,1,0.9 },"13.17+(-4)" },{ { 0.17,0.18,0.19 },"10.26+(-4)" },{ { 1,1,0.9 },"12.67+(-4)" },{ { 0.17,0.18,0.19 },"11.71+(-4)" },{ { 0.15,0.15,0.15 },"12.42+(-4)" },{ { 0.17,0.17,0.15 },"14.42+(-4)" },1};
			noon[] = {45,{ { 1,1,1 },"17+(-4)" },{ { 1,1.3,1.55 },"13.5+(-4)" },{ { 1,1,1 },"15+(-4)" },{ { 0.36,0.37,0.38 },"13.5+(-4)" },{ { 1,1,1 },"16+(-4)" },{ { 1.0,1.0,1 },"17+(-4)" },1};
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
		clutterGrid = 1.0;
		clutterDist = 125;
		noDetailDist = 40;
		fullDetailDist = 15;
		midDetailTexture = "ca\desert_e\data\de_middle_mco.paa";
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
		class Names{};
		skyObject = "ca\Takistan\Data\obloha.p3d";
		horizontObject = "ca\Takistan\Data\horizont.p3d";
		skyTexture = "ca\Takistan\Data\sky_semicloudy_sky.paa";
		skyTextureR = "ca\Takistan\Data\sky_semicloudy_lco.paa";
		class Armory
		{
			disabled = 1;
			positionAdmin[] = {1956.25,84.1508};
			positionsViewer[] = {{ 1346.67,1428.27 },{ 1086.33,1548.77 }};
			disableShips = 1;
			class Challenges
			{
				class FiringRange
				{
					positionsStart[] = {{ 976.631,1569.39 }};
					directionsStart[] = {245};
				};
			};
		};
		safePositionAnchor[] = {1101.09,1220.27};
		safePositionRadius = 1000;
	};
};
class CfgWorldList
{
	class Desert_E{};
};
class CfgMissions
{
	class Cutscenes
	{
		class Desert_EIntro1
		{
			directory = "ca\Desert_E\data\scenes\intro.Desert_E";
		};
	};
};
class CfgSurfaces
{
	class Default{};
	class Water{};
	class DEPolopoust: Default
	{
		access = 2;
		files = "de_polopoust_*";
		rough = 0.01;
		dust = 0.9;
		soundEnviron = "dirt";
		character = "DEDenseAridClutter";
		soundHit = "soft_ground";
	};
	class DESkalniSterk: Default
	{
		access = 2;
		files = "de_skalni_sterk_*";
		rough = 0.15;
		dust = 1.0;
		soundEnviron = "rock";
		character = "DESparseAridClutter";
		soundHit = "hard_ground";
	};
	class DETrava: Default
	{
		access = 2;
		files = "de_trava_*";
		rough = 0.11;
		dust = 0.5;
		soundEnviron = "drygrass";
		character = "DEGrassClutter";
		soundHit = "soft_ground";
	};
};
class CfgSurfaceCharacters
{
	class DEGrassClutter
	{
		probability[] = {0.89,0.07,0.05};
		names[] = {"TK_GrassDry","TK_BrushHard","TK_PlantsWhite"};
	};
	class DEDenseAridClutter
	{
		probability[] = {0.07,0.05};
		names[] = {"TK_BrushSoft","TK_BrushHard"};
	};
	class DESparseAridClutter
	{
		probability[] = {0.05};
		names[] = {"TK_BrushSoft"};
	};
};
//};
