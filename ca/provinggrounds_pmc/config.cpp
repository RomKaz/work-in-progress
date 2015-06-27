////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:05:08 2014 : Source 'file' date Fri Oct 31 06:05:08 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class PROVINGGROUNDS_PMC : config.bin{
class CfgPatches
{
	class ProvingGrounds_PMC
	{
		units[] = {"GroundZero"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CA_E","CARoads_E","CARocks_E","CAStructures_E","CAMisc_E","CAStructures_PMC"};
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
	class ProvingGrounds_PMC: CAWorld
	{
		access = 3;
		worldId = 5;
		cutscenes[] = {"ProvingGrounds_PMC_Intro1"};
		description = "Proving Grounds";
		icon = "";
		worldName = "ca\ProvingGrounds_PMC\ProvingGrounds_PMC.wrp";
		pictureMap = "";
		pictureShot = "ca\ProvingGrounds_PMC\data\ui_GroundZero_ca.paa";
		plateFormat = "TK$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		longitude = 17.352;
		latitude = -48.964;
		elevationOffset = 100;
		class OutsideTerrain
		{
			satellite = "ca\ProvingGrounds_PMC\data\s_satout_co.paa";
			enableTerrainSynth = 1;
			class Layers
			{
				class Layer0
				{
					nopx = "CA\ProvingGrounds_PMC\Data\gz_trava_nopx.paa";
					texture = "CA\ProvingGrounds_PMC\Data\gz_trava_co.paa";
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
		startTime = "13:00";
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
			groundReflection[] = {0.03,0.025,0.015};
		};
		class DayLightingBrightAlmost: DayLightingBrightAlmost
		{
			deepNight[] = {-15,{ 0.037,0.063,0.091 },{ 0.001,0.001,0.0012 },{ 0.067,0.075,0.091 },{ 0.003,0.004,0.006 },{ 0.0001,0.0001,0.0002 },{ 0.0001,0.0001,0.0002 },0};
			fullNight[] = {-5,{ 0.182,0.213,0.25 },{ 0.05,0.111,0.221 },{ 0.04,0.034,0.004 },{ 0.039,0.049,0.072 },{ 0.082,0.128,0.185 },{ 0.283,0.35,0.431 },0};
			sunMoon[] = {-3.75,{ 0.377,0.441,0.518 },{ 0.103,0.227,0.453 },{ 0.04,0.034,0.004 },{ 0.039,0.049,0.072 },{ 0.174,0.274,0.395 },{ 0.582,0.72,0.887 },0.5};
			earlySun[] = {-2.5,{ 0.675,0.69,0.784 },{ 0.22,0.322,0.471 },{ 0.04,0.034,0.004 },{ 0.039,0.049,0.072 },{ 0.424,0.549,0.745 },{ 0.698,0.753,0.894 },1};
			sunrise[] = {0,{ 0.675,0.69,0.784 },{ 0.478,0.51,0.659 },{ 0.2,0.19,0.07 },{ 0.124,0.161,0.236 },{ { 0.847,0.855,0.965 },0.2 },{ { 0.933,0.949,0.996 },2 },1};
			earlyMorning[] = {3,{ { 0.844,0.61,0.469 },0.8 },{ 0.424,0.557,0.651 },{ { 1,0.45,0.2 },1 },{ 0.12,0.26,0.38 },{ { 0.428,0.579,0.743 },2 },{ { 0.844,0.61,0.469 },2.7 },1};
			midMorning[] = {8,{ { 0.822,0.75,0.646 },3.8 },{ { 0.383,0.58,0.858 },1.3 },{ { 1.3,0.9,0.61 },3.8 },{ { 0.12,0.18,0.28 },0.5 },{ { 0.322,0.478,0.675 },3.5 },{ { 1.0,0.929,0.815 },4.7 },1};
			morning[] = {16,{ { 1,0.95,0.91 },11.2 },{ { 0.12,0.18,0.28 },7.5 },{ { 1,0.95,0.91 },11.2 },{ { 0.12,0.16,0.18 },7.5 },{ { 0.14,0.18,0.24 },10.5 },{ { 0.5,0.6,0.9 },11.7 },1};
			noon[] = {45,{ { 0.92,0.95,1.0 },13.3 },{ { 0.26,0.35,0.5 },10.0 },{ { 1,0.95,0.91 },11.2 },{ { 0.12,0.16,0.18 },7.5 },{ { 0.66,0.84,1.0 },12.0 },{ { 0.5,0.5,0.5 },13.9 },1};
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
			noon[] = {40,{ { 0.22,0.28,0.28 },5.5 },{ { 0.22,0.28,0.28 },4.0 },{ { 0.22,0.28,0.28 },5.1 },{ { 0.22,0.28,0.28 },4.0 },{ { 0.22,0.28,0.28 },8.0 },{ { 0.59,0.59,0.45 },9.5 },1};
		};
		class Weather: Weather
		{
			class Lighting: Lighting
			{
				class BrightAlmost: DayLightingBrightAlmost
				{
					overcast = 0.25;
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
					sky = "ca\Data\data\sky_clear_sky.paa";
					skyR = "ca\Data\data\sky_clear_lco.paa";
					horizon = "ca\Data\data\sky_clear_horizont_sky.paa";
				};
				class Weather7: Weather1
				{
					sky = "ca\Data\data\sky_veryclear_sky.paa";
					skyR = "ca\Data\data\sky_clear_lco.paa";
					horizon = "ca\Data\data\sky_veryclear_horizont_sky.paa";
				};
				class Weather2: Weather2
				{
					sky = "ca\Data\data\sky_almostclear_sky.paa";
					skyR = "ca\Data\data\sky_almostclear_lco.paa";
					horizon = "ca\Data\data\sky_almostclear_horizont_sky.paa";
				};
				class Weather3: Weather3
				{
					sky = "ca\Data\data\sky_semicloudy_sky.paa";
					skyR = "ca\Data\data\sky_semicloudy_lco.paa";
					horizon = "ca\Data\data\sky_semicloudy_horizont_sky.paa";
				};
				class Weather4: Weather4
				{
					sky = "ca\Data\data\sky_cloudy_sky.paa";
					skyR = "ca\Data\data\sky_cloudy_lco.paa";
					horizon = "ca\Data\data\sky_cloudy_horizont_sky.paa";
				};
				class Weather5: Weather5
				{
					sky = "ca\Data\data\sky_mostlycloudy_sky.paa";
					skyR = "ca\Data\data\sky_mostlycloudy_lco.paa";
					horizon = "ca\Data\data\sky_mostlycloudy_horizont_sky.paa";
				};
				class Weather6: Weather6
				{
					sky = "ca\Data\data\sky_overcast_sky.paa";
					skyR = "ca\Data\data\sky_overcast_lco.paa";
					horizon = "ca\Data\data\sky_overcast_horizont_sky.paa";
				};
			};
		};
		clutterGrid = 1.2;
		clutterDist = 125;
		noDetailDist = 40;
		fullDetailDist = 15;
		midDetailTexture = "ca\ProvingGrounds_PMC\Data\gz_middle_mco.paa";
		minTreesInForestSquare = 3;
		minRocksInRockSquare = 3;
		class clutter
		{
			class GrassGreenGroupHard: DefaultClutter
			{
				model = "ca\plants_pmc\Clutter\c_GrassGreen_GroupHard_pmc.p3d";
				affectedByWind = 1.0;
				swLighting = 1;
				scaleMin = 0.6;
				scaleMax = 0.9;
			};
			class GrassDesertGroupSoft: DefaultClutter
			{
				model = "ca\plants_pmc\Clutter\c_GrassDesert_GroupSoft_pmc.p3d";
				affectedByWind = 1.0;
				swLighting = 1;
				scaleMin = 0.6;
				scaleMax = 1.2;
			};
			class GrassGreenGroupSoft: DefaultClutter
			{
				model = "ca\plants_pmc\Clutter\c_GrassGreen_GroupSoft_pmc.p3d";
				affectedByWind = 1.0;
				swLighting = 1;
				scaleMin = 0.6;
				scaleMax = 1.2;
			};
			class Carduus: DefaultClutter
			{
				model = "ca\plants_pmc\Clutter\c_carduus_pmc.p3d";
				affectedByWind = 0.4;
				swLighting = 1;
				scaleMin = 0.6;
				scaleMax = 1.2;
			};
			class BranchBig: DefaultClutter
			{
				model = "ca\plants_pmc\Clutter\c_branchBig_pmc.p3d";
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = 0.2;
				scaleMax = 1.0;
			};
			class DeadGrass_Cover_F
			{
				model = "ca\plants_pmc\Clutter\c_GrassCrooked_pmc.p3d";
				affectedByWind = 0.6;
				swLighting = 1;
				scaleMin = 0.8;
				scaleMax = 1.1;
			};
			class DeadGrass_GrpBig_F
			{
				model = "ca\plants_pmc\Clutter\c_GrassTall_pmc.p3d";
				affectedByWind = 0.8;
				swLighting = 1;
				scaleMin = 0.75;
				scaleMax = 1.15;
			};
			class DeadGrass_GrpSmall_F
			{
				model = "ca\plants_pmc\Clutter\c_grassDryLongBunch_pmc.p3d";
				affectedByWind = 0.8;
				swLighting = 1;
				scaleMin = 0.9;
				scaleMax = 1.2;
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
		skyObject = "ca\ProvingGrounds_PMC\Data\obloha.p3d";
		horizontObject = "ca\ProvingGrounds_PMC\Data\horizont.p3d";
		skyTexture = "ca\Data\data\sky_semicloudy_sky.paa";
		skyTextureR = "ca\Data\data\sky_semicloudy_lco.paa";
		class Armory
		{
			disabled = 1;
		};
		safePositionAnchor[] = {1101.09,1220.27};
		safePositionRadius = 1000;
	};
};
class CfgWorldList
{
	class ProvingGrounds_PMC{};
};
class CfgMissions
{
	class Cutscenes
	{
		class ProvingGrounds_PMC_Intro1
		{
			directory = "ca\ProvingGrounds_PMC\data\scenes\intro.ProvingGrounds_PMC";
		};
	};
};
class CfgSurfaces
{
	class Default{};
	class Water{};
	class GZHlina: Default
	{
		access = 2;
		files = "gz_hlina_*";
		rough = 0.1;
		dust = 0.8;
		soundEnviron = "dirt";
		character = "Empty";
		soundHit = "soft_ground";
	};
	class GZTrava: Default
	{
		access = 2;
		files = "gz_trava_*";
		rough = 0.12;
		dust = 0.6;
		soundEnviron = "grass";
		character = "GZTravaClutter";
		soundHit = "soft_ground";
	};
	class GZasfalt: Default
	{
		access = 2;
		files = "gz_asfalt_*";
		rough = 0.1;
		dust = 0.8;
		soundEnviron = "dirt";
		character = "Empty";
		soundHit = "concrete";
	};
	class GZforest: Default
	{
		access = 2;
		files = "gz_forest_*";
		rough = 0.1;
		dust = 0.8;
		soundEnviron = "dirt";
		character = "GZTravaGreen";
		soundHit = "soft_ground";
	};
	class GZkameny: Default
	{
		access = 2;
		files = "gz_kameny_*";
		rough = 0.1;
		dust = 0.8;
		soundEnviron = "dirt";
		character = "Empty";
		soundHit = "soft_ground";
	};
};
class CfgSurfaceCharacters
{
	class GZTravaClutter
	{
		probability[] = {0.3,0.4,0.1,0.2};
		names[] = {"DeadGrass_Cover_F","GrassDesertGroupSoft","DeadGrass_GrpBig_F","DeadGrass_GrpSmall_F"};
	};
	class GZTravaGreen
	{
		probability[] = {0.4,0.29,0.01,0.3};
		names[] = {"GrassGreenGroupSoft","GrassGreenGroupHard","BranchBig","Carduus"};
	};
};
//};
