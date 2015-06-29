////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.51
//Fri Sep 19 20:33:48 2014 : Source 'file' date Fri Sep 19 20:33:48 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class land2 : config.bin{
class CfgPatches
{
	class land2
	{
		units[] = {"land2"};
		weapons[] = {};
		requiredVersion = 1.03;
		requiredAddons[] = {"Utes"};
		version = "2014-9-1";
		fileName = "land2.pbo";
		author = "RomKaz";
		mail = "romkaz@localhost";
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
	class Utes: CAWorld
	{
		class Grid;
		class DefaultClutter;
	};
	class land2: Utes
	{
		cutscenes[] = {};
		description = "MyBigMap01";
		worldName = "land2\land\land2.wrp";
		pictureShot = "land2\land\data\sm_Picture_ca.paa";
		longitude = 53;
		latitude = -56;
		landGrid = 10;
		startTime = "10:00";
		startDate = "05/08/2014";
		startWeather = 0.1;
		startFog = 0;
		forecastWeather = 0.4;
		forecastFog = 0;
		clutterGrid = 1;
		clutterDist = 125;
		noDetailDist = 40;
		fullDetailDist = 15;
		minTreesInForestSquare = 2;
		minRocksInRockSquare = 2;
		centerPosition[] = {8000,1900,300};
		seagullPos[] = {6400,150.0,6400};
		ilsPosition[] = {9520.95,18100.3};
		ilsDirection[] = {-0.7071,0.08,0.7071};
		ilsTaxiOff[] = {5554.5,11297.5,6035,11778,6055.5,11785.5,6075,11780,6117.5,11737.5,6124.5,11716,6113,11700,5851,11438.5};
		ilsTaxiIn[] = {5851,11438.5,5342.5,10929.5,5322.5,10925.5,5306.5,10936.5,5269,10974,5261,10991,5264.5,11007.5,5278,11021.5};
		class SecondaryAirports
		{
			class UtesAirstrip1
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
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 0;
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
			noon[] = {45,{ { 1,1,1 },"17+(-4)" },{ { 1,1.3,1.55 },"13.5+(-4)" },{ { 1,1,1 },"15+(-4)" },{ { 0.36,0.37,0.38 },"13.5+(-4)" },{ { 1,1,1 },"16+(-4)" },{ { 1,1,1 },"17+(-4)" },1};
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
					overcast = 1;
				};
			};
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
						probability = 0.1;
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
		class Clutter
		{
			class sm_AutumnFlowers: DefaultClutter
			{
				model = "ca\plants2\clutter\c_autumn_flowers.p3d";
				affectedByWind = 0.4;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.0;
			};
			class sm_GrassCrooked: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassCrooked.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.7;
				scaleMax = 1.4;
			};
			class sm_GrassCrookedGreen: DefaultClutter
			{
				model = "ca\plants2\clutter\c_GrassCrookedGreen.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.9;
				scaleMax = 1.3;
			};
			class sm_WeedDead: DefaultClutter
			{
				model = "ca\plants2\clutter\c_WeedDead.p3d";
				affectedByWind = 0.3;
				swLighting = "true";
				scaleMin = 0.75;
				scaleMax = 1.1;
			};
		};
		class Names
		{
			class Air_Airbase
			{
				name = "AirBase";
				position[] = {5000,5000};
				type = "Name";
				radiusA = 200;
				radiusB = 20;
			};
		};
	};
};
class CfgWorldList
{
	class land2{};
};
class CfgMissions
{
	class Cutscenes
	{
		class land2intro{};
	};
};
class CfgSurfaces
{
	class Default{};
	class SMgrassSurface: Default
	{
		files = "sm_grass_*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "grass";
		character = "sm_grassClutter";
	};
};
class CfgSurfaceCharacters
{
	class sm_grassClutter
	{
		probability[] = {0.79,0.1,0.1,0.01};
		names[] = {"sm_GrassCrookedGreen","sm_GrassCrooked","sm_AutumnFlowers","sm_WeedDead"};
	};
};
//};
