////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:01:50 2014 : Source 'file' date Fri Oct 31 06:01:50 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class Ca : config.bin{
class CfgPatches
{
	class CAData
	{
		units[] = {"FxWindGrass1","FxWindGrass2","FxWindRock1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		liteCA = "true";
	};
};
class DefaultEventhandlers
{
	init = "_scr = _this execVM ""\ca\Data\ParticleEffects\SCRIPTS\init.sqf"";";
	fired = "_this call BIS_Effects_EH_Fired;";
	killed = "_this call BIS_Effects_EH_Killed;";
};
class CfgSurfaces
{
	class Default;
	class Water;
	class Roadway: Default
	{
		access = 2;
		files = "silnice*";
		rough = 0.005;
		dust = 0.01;
		soundEnviron = "road";
		character = "Empty";
	};
	class Parkety: Default
	{
		access = 2;
		files = "parkety*";
		rough = 0.005;
		dust = 0.001;
		soundEnviron = "parkety";
		character = "Empty";
	};
	class Lepenka: Default
	{
		access = 2;
		files = "lepenka*";
		rough = 0.001;
		dust = 0.001;
		soundEnviron = "lepenka";
		character = "Empty";
	};
	class Tasky: Default
	{
		access = 2;
		files = "Tasky*";
		rough = 0.001;
		dust = 0.001;
		soundEnviron = "lepenka";
		character = "Empty";
	};
	class Rost: Default
	{
		access = 2;
		files = "Rost*";
		rough = 0.001;
		dust = 0.001;
		soundEnviron = "steel";
		character = "Empty";
	};
	class Asfalt: Roadway
	{
		access = 2;
		files = "asfalt*";
		rough = 0.01;
		dust = 0.05;
		soundEnviron = "road";
		character = "Empty";
	};
	class Cesta: Roadway
	{
		access = 2;
		files = "cesta*";
		rough = 0.08;
		dust = 0.15;
		soundEnviron = "dirt";
		character = "Empty";
	};
	class Sterk: Default
	{
		access = 2;
		files = "sterk*";
		rough = 0.08;
		dust = 0.15;
		soundEnviron = "gravel";
		character = "Empty";
	};
	class SterkBIG: Default
	{
		access = 2;
		files = "sterkBIG*";
		rough = 0.08;
		dust = 0.15;
		soundEnviron = "gravel2";
		character = "Empty";
	};
	class Sutiny: Default
	{
		access = 2;
		files = "sutiny*";
		rough = 0.08;
		dust = 0.15;
		soundEnviron = "gravel2";
		character = "Empty";
	};
	class Wood: Default
	{
		access = 2;
		files = "podlaha_prkna*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "wood";
		character = "Empty";
	};
	class Wood_ext: Default
	{
		access = 2;
		files = "prknaOUT*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "wood";
		character = "Empty";
	};
	class PrknaINT: Default
	{
		access = 2;
		files = "prknaIN*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "wood_int";
		character = "Empty";
	};
	class Metal: Default
	{
		access = 2;
		files = "plechprolis*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "steel";
		character = "Empty";
		impact = "Impact_Metal";
	};
	class Plech: Default
	{
		access = 2;
		files = "plech*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "steel";
		character = "Empty";
		impact = "Impact_Metal";
	};
	class Iron: Default
	{
		access = 2;
		files = "ocel*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "metal";
		character = "Empty";
		impact = "Impact_Metal";
	};
	class Wave_plate: Default
	{
		access = 2;
		files = "vlnityplech*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "wave_plate";
		character = "Empty";
		impact = "Impact_Metal";
	};
	class Beton: Default
	{
		access = 2;
		files = "kameny";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "concrete_ext";
		character = "Empty";
	};
	class Carpet: Default
	{
		access = 2;
		files = "dum_mesto_koberec*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "carpet";
		character = "Empty";
	};
	class Carpet2: Default
	{
		access = 2;
		files = "koberec*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "carpet";
		character = "Empty";
	};
	class SandBuilding: Default
	{
		access = 2;
		files = "pisek01*";
		rough = 0.1;
		dust = 0.5;
		soundEnviron = "sand";
		character = "Empty";
	};
	class MudBuilding: Default
	{
		access = 2;
		files = "hlinasterk*";
		rough = 0.1;
		dust = 0.5;
		soundEnviron = "dirt";
		character = "Empty";
	};
	class Hlina: Default
	{
		access = 2;
		files = "hlina*";
		rough = 0.1;
		dust = 0.5;
		soundEnviron = "dirt";
		character = "Empty";
	};
	class BetonNew: Default
	{
		access = 2;
		files = "beton*";
		rough = 0.005;
		dust = 0.01;
		soundEnviron = "road";
		character = "Empty";
	};
	class BetonIN: Default
	{
		access = 2;
		files = "chodba_beton*";
		rough = 0.005;
		dust = 0.01;
		soundEnviron = "hallway";
		character = "Empty";
	};
	class DlazbaIN: Default
	{
		access = 2;
		files = "dlazbaIN*";
		rough = 0.005;
		dust = 0.01;
		soundEnviron = "Concrete_int";
		character = "Empty";
	};
	class CubeRoad: Default
	{
		access = 2;
		files = "sil_kos*";
		rough = 0.04;
		dust = 0.15;
		soundEnviron = "road";
		character = "Empty";
	};
	class Sil_new: Default
	{
		access = 2;
		files = "sil_new*";
		rough = 0.005;
		dust = 0.01;
		soundEnviron = "road";
		character = "Empty";
	};
	class Asfalt_New: Default
	{
		access = 2;
		files = "asf_new*";
		rough = 0.008;
		dust = 0.025;
		soundEnviron = "road";
		character = "Empty";
	};
	class Asf1: Asfalt_New
	{
		files = "asf1*";
	};
	class Asf2: Asfalt_New
	{
		files = "asf2*";
	};
	class Asf3: Asfalt_New
	{
		files = "asf3*";
	};
	class runway_beton: Asfalt_New
	{
		files = "runway_beton*";
	};
	class city_dashedline: Asfalt_New
	{
		files = "city_dashedline*";
	};
	class Cesta_new: Default
	{
		access = 2;
		files = "ces_hned*";
		rough = 0.04;
		dust = 0.14;
		soundEnviron = "gravel";
		character = "Empty";
	};
	class grav_dirt: Cesta_new
	{
		files = "grav_dirt*";
		soundEnviron = "gravel2";
	};
	class mud_gravel: Cesta_new
	{
		files = "mud_gravel*";
		soundEnviron = "gravel";
	};
	class Pesina: Roadway
	{
		access = 2;
		files = "pesina*";
		rough = 0.1;
		dust = 0.15;
		soundEnviron = "dirt";
		character = "Empty";
	};
	class path_dirt: Pesina
	{
		files = "path_dirt*";
	};
	class Hallway: Default
	{
		access = 2;
		files = "podldlzin02*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "hallway";
		character = "Empty";
	};
	class Grass: Default
	{
		access = 2;
		files = "trava_*";
		rough = 0.1;
		dust = 0.1;
		soundEnviron = "grass";
		character = "GrassClutter";
	};
	class GrassSouth: Default
	{
		access = 2;
		files = "travajih*";
		rough = 0.1;
		dust = 0.2;
		soundEnviron = "drygrass";
		character = "GrassSouthClutter";
	};
	class ForestLeaves: Default
	{
		access = 2;
		files = "leslist*";
		rough = 0.1;
		dust = 0.2;
		soundEnviron = "forest";
		character = "ForestLeavesClutter";
	};
	class ForestNeedles: Default
	{
		access = 2;
		files = "lesjeh*";
		rough = 0.1;
		dust = 0.2;
		soundEnviron = "forest";
		character = "ForestNeedlesClutter";
	};
	class RockSouth: Default
	{
		access = 2;
		files = "skalajih*";
		rough = 0.1;
		dust = 0.2;
		soundEnviron = "rock";
		character = "RockSouthClutter";
	};
	class RockNorth: Default
	{
		access = 2;
		files = "skalas*";
		rough = 0.1;
		dust = 0.2;
		soundEnviron = "rock";
		character = "Empty";
	};
	class Mud: Default
	{
		access = 2;
		files = "blato*";
		rough = 0.1;
		dust = 0.3;
		soundEnviron = "dirt";
		character = "Empty";
	};
	class CityGround: Default
	{
		access = 2;
		files = "mesto*";
		rough = 0.01;
		dust = 0.05;
		soundEnviron = "dirt";
		character = "Empty";
	};
	class DryGround: Default
	{
		access = 2;
		files = "mesto2*";
		rough = 0.05;
		dust = 0.05;
		soundEnviron = "gravel";
		character = "Empty";
	};
	class Field1: Default
	{
		access = 2;
		files = "pole1*";
		rough = 0.1;
		dust = 0.25;
		soundEnviron = "dirt";
		character = "SparseWeedsClutter";
	};
	class SandGeneral: Default
	{
		access = 2;
		files = "pisek*";
		rough = 0.1;
		dust = 0.5;
		soundEnviron = "sand";
		character = "SandGeneralClutter";
	};
	class Odpadky: Default
	{
		access = 2;
		files = "odpadky*";
		soundEnviron = "gravel2";
	};
	class SandDesert: Default
	{
		access = 2;
		files = "pisekpoust*";
		rough = 0.1;
		dust = 0.8;
		soundEnviron = "sand";
		character = "Empty";
	};
	class SandBeach: Default
	{
		access = 2;
		files = "pisekplaz*";
		rough = 0.1;
		dust = 0.5;
		soundEnviron = "sand";
		character = "Empty";
	};
};
class CfgSurfaceCharacters
{
	class GrassClutter
	{
		probability[] = {0.98,0.03,0.02,0.015};
		names[] = {"GrassGeneral","FlowersColor","GrassLong","GrassSevenbeauty"};
	};
	class GrassSouthClutter
	{
		probability[] = {0.8,0.03,0.05,0.08};
		names[] = {"GrassDesert","GrassLong","SmallRocks","FlowersWhite"};
	};
	class SandGeneralClutter
	{
		probability[] = {0.01,0.05};
		names[] = {"GrassLong","SmallRocks"};
	};
	class ForestLeavesClutter
	{
		probability[] = {0.008,0.3,0.1,0.1,0.001,0.003};
		names[] = {"MushroomsHorcak","GrassLong","GrassFlowers","SmallRocks","MushroomsBabka","MushroomsPrasivka"};
	};
	class ForestNeedlesClutter
	{
		probability[] = {0.2,0.15,0.1,0.1,0.001,0.002,0.001};
		names[] = {"ForestFern","GrassLong","GrassFlowers","SmallRocks","MushroomsHorcak","MushroomsPrasivka","MushroomsMuchomurka"};
	};
	class RockSouthClutter
	{
		probability[] = {0.01,0.2};
		names[] = {"GrassDesert","SmallRocks"};
	};
	class SparseWeedsClutter
	{
		probability[] = {0.02};
		names[] = {"FlowersWhite"};
	};
};
class CfgMaterials
{
	class Water
	{
		PixelShaderID = "Water";
		VertexShaderID = "Water";
		ambient[] = {0.0264,0.03,0.013,0.4};
		diffuse[] = {0.13,0.15,0.065,1.0};
		forcedDiffuse[] = {0.0264,0.03,0.013,0};
		specular[] = {1.5,1.5,1.5,0};
		specularPower = 4;
		emmisive[] = {0,0,0,0};
		class Stage1
		{
			texture = "ca\data\data\water_nofhq.paa";
			uvSource = "texWaterAnim";
			class uvTransform
			{
				aside[] = {0,1,0};
				up[] = {1,0,0};
				dir[] = {0,0,1};
				pos[] = {0.3,0.4,0};
			};
		};
		class Stage2
		{
			texture = "CA\data\data\sea_foam_lco.paa";
			uvSource = "none";
		};
		class Stage3
		{
			texture = "ca\data\data\water2_nohq.paa";
			uvSource = "none";
		};
	};
	class Shore
	{
		PixelShaderID = "Shore";
		VertexShaderID = "Shore";
		ambient[] = {0.0264,0.03,0.013,0.4};
		diffuse[] = {0.13,0.15,0.065,1.0};
		forcedDiffuse[] = {0.0264,0.03,0.013,0};
		specular[] = {1.5,1.5,1.5,0};
		specularPower = 4;
		emmisive[] = {0,0,0,0};
		class Stage1
		{
			texture = "ca\data\data\water_nofhq.paa";
			uvSource = "texWaterAnim";
			class uvTransform
			{
				aside[] = {0,1,0};
				up[] = {0.1,0,0};
				dir[] = {0,0,1};
				pos[] = {0.3,0.4,0};
			};
		};
		class Stage2
		{
			texture = "CA\data\data\sea_foam_lco.paa";
			uvSource = "none";
		};
		class Stage3
		{
			texture = "ca\data\data\water2_nohq.paa";
			uvSource = "none";
		};
	};
	class ShoreWet
	{
		PixelShaderID = "ShoreWet";
		VertexShaderID = "Shore";
	};
};
class CfgWorlds
{
	initWorld = "utes";
	demoWorld = "Chernarus";
	class DefaultWorld
	{
		class Weather
		{
			class Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
			};
		};
	};
	class CAWorld: DefaultWorld
	{
		class Weather: Weather
		{
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					sky = "ca\data\data\sky_clear_sky.paa";
					skyR = "ca\data\data\sky_clear_lco.paa";
					horizon = "ca\data\data\sky_clear_horizont_sky.paa";
					overcast = 0;
					alpha = 0;
					size = 0.1;
					height = 1.0;
					bright = 0.7;
					speed = 0;
					through = 1.0;
					diffuse = 1.0;
					cloudDiffuse = 0.95;
					waves = 0.2;
					lightingOvercast = 0.0;
				};
				class Weather7: Weather1
				{
					sky = "ca\data\data\sky_veryclear_sky.paa";
					skyR = "ca\data\data\sky_clear_lco.paa";
					horizon = "ca\data\data\sky_veryclear_horizont_sky.paa";
					overcast = 0.07;
					alpha = 0.5;
					size = 0.2;
					height = 0.95;
					bright = 0.5;
					speed = 0.1;
					through = 1.0;
					diffuse = 1.0;
					cloudDiffuse = 0.95;
					waves = 0.2;
					lightingOvercast = 0.0;
				};
				class Weather2: Weather2
				{
					sky = "ca\data\data\sky_almostclear_sky.paa";
					skyR = "ca\data\data\sky_almostclear_lco.paa";
					horizon = "ca\data\data\sky_almostclear_horizont_sky.paa";
					overcast = 0.25;
					alpha = 0.6;
					size = 0.3;
					height = 0.9;
					bright = 0.45;
					speed = 0.25;
					through = 1.0;
					lightingOvercast = 0.1;
					diffuse = 1.0;
					waves = 0.22;
				};
				class Weather3: Weather3
				{
					sky = "ca\data\data\sky_semicloudy_sky.paa";
					skyR = "ca\data\data\sky_semicloudy_lco.paa";
					horizon = "ca\data\data\sky_semicloudy_horizont_sky.paa";
					overcast = 0.4;
					alpha = 0.8;
					size = 0.5;
					height = 0.8;
					bright = 0.4;
					speed = 0.45;
					through = 0.7;
					lightingOvercast = 0.5;
					diffuse = 0.8;
					waves = 0.32;
				};
				class Weather4: Weather4
				{
					sky = "ca\data\data\sky_cloudy_sky.paa";
					skyR = "ca\data\data\sky_cloudy_lco.paa";
					horizon = "ca\data\data\sky_cloudy_horizont_sky.paa";
					overcast = 0.6;
					alpha = 0.99;
					size = 0.65;
					height = 0.75;
					bright = 0.5;
					speed = 0.55;
					through = 0.4;
					lightingOvercast = 0.85;
					diffuse = 0.6;
					waves = 0.32;
				};
				class Weather5: Weather5
				{
					sky = "ca\data\data\sky_mostlycloudy_sky.paa";
					skyR = "ca\data\data\sky_mostlycloudy_lco.paa";
					horizon = "ca\data\data\sky_mostlycloudy_horizont_sky.paa";
					overcast = 0.9;
					alpha = 0.55;
					size = 0.8;
					height = 0.7;
					bright = 0.33;
					speed = 0.75;
					through = 0;
					lightingOvercast = 0.98;
					diffuse = 0.3;
					waves = 0.52;
				};
				class Weather6: Weather5
				{
					sky = "ca\data\data\sky_overcast_sky.paa";
					skyR = "ca\data\data\sky_overcast_lco.paa";
					horizon = "ca\data\data\sky_overcast_horizont_sky.paa";
					overcast = 1.0;
					alpha = 0.4;
					bright = 0.2;
					size = 1.0;
					height = 0.6;
					speed = 0.95;
					through = 0;
					lightingOvercast = 0.98;
					diffuse = 0.1;
					waves = 0.7;
				};
			};
			class ThunderboltNorm
			{
				model = "\ca\data\blesk1.p3d";
				soundNear[] = {"\ca\sounds\sfx\thunder01",31.622776,1};
				soundFar[] = {"\ca\sounds\sfx\thunder02",10.0,1};
			};
			class ThunderboltHeavy
			{
				model = "\ca\data\blesk2.p3d";
				soundNear[] = {"\ca\sounds\sfx\thunder09hard",31.622776,1};
				soundFar[] = {"\ca\sounds\sfx\thunder10hard",10.0,1};
			};
		};
		class Rain
		{
			texture = "ca\data\data\rain_ca.paa";
			raindrop = "\ca\data\raindrop.p3d";
			speed = 1;
			levels[] = {8,2};
		};
		skyTexture = "ca\data\data\sky_semicloudy_sky.paa";
		skyTextureR = "ca\data\data\sky_semicloudy_lco.paa";
		seaTexture = "ca\data\seatexture_co.paa";
		clouds[] = {"ca\data\mrak1.p3d","ca\data\mrak2.p3d","ca\data\mrak3.p3d","ca\data\mrak4.p3d"};
		skyObject = "ca\data\obloha.p3d";
		starsObject = "ca\data\stars.p3d";
		pointObject = "ca\data\point.p3d";
		horizontObject = "ca\data\horizont.p3d";
		haloObject = "ca\data\sunhalo.p3d";
		sunObject = "ca\data\sun.p3d";
		rainbowObject = "ca\data\rainbow.p3d";
		moonObject = "ca\data\moon.p3d";
	};
};
class CfgDifficulties
{
	class Recruit
	{
		displayName = "$STR_XBOX_DIFF_RECRUIT";
		description = "";
		showCadetHints = 1;
		showCadetWP = 1;
		maxPilotHeight = 150;
		scoreImage = "\ca\ui\textures\deb_pecka.paa";
		scoreChar = "o";
		badScoreImage = "\ca\ui\textures\deb_krizek.paa";
		badScoreChar = "X";
		skillFriendly = 1;
		precisionFriendly = 1;
		skillEnemy = 0.55;
		precisionEnemy = 0.3;
		myArmorCoef = 4.0;
		groupArmorCoef = 4.0;
		autoAimSizeFactor = 0.8;
		autoAimDistance = 1.2;
		autoAimAngle = 7;
		peripheralVisionAid = 0.85;
		visionAid = 0.85;
		class Flags
		{
			armor[] = {1,1};
			friendlyTag[] = {1,1};
			enemyTag[] = {0,1};
			hud[] = {1,1};
			hudPerm[] = {1,1};
			hudWp[] = {1,1};
			hudWpPerm[] = {1,1};
			autoSpot[] = {1,1};
			map[] = {1,1};
			weaponCursor[] = {1,1};
			autoGuideAT[] = {1,1};
			clockIndicator[] = {1,1};
			3rdPersonView[] = {1,1};
			tracers[] = {1,1};
			ultraAI[] = {0,1};
			autoAim[] = {0,1};
			unlimitedSaves[] = {1,1};
			hudGroupInfo[] = {1,1};
		};
	};
	class Regular
	{
		scoreImage = "\ca\ui\textures\deb_pecka.paa";
		badScoreImage = "\ca\ui\textures\deb_krizek.paa";
		skillFriendly = 1;
		precisionFriendly = 1;
		skillEnemy = 0.7;
		precisionEnemy = 0.5;
		myArmorCoef = 3.0;
		groupArmorCoef = 2.4;
		autoAimSizeFactor = 0.9;
		autoAimDistance = 1.3;
		autoAimAngle = 6;
		peripheralVisionAid = 0.75;
		visionAid = 0;
		class Flags
		{
			armor[] = {1,1};
			friendlyTag[] = {1,1};
			enemyTag[] = {0,1};
			hud[] = {1,1};
			hudPerm[] = {1,1};
			hudWp[] = {1,1};
			hudWpPerm[] = {1,1};
			autoSpot[] = {1,1};
			map[] = {1,1};
			weaponCursor[] = {1,1};
			autoGuideAT[] = {1,1};
			clockIndicator[] = {1,1};
			3rdPersonView[] = {1,1};
			tracers[] = {1,1};
			ultraAI[] = {0,1};
			autoAim[] = {0,1};
			unlimitedSaves[] = {1,1};
			hudGroupInfo[] = {1,1};
		};
	};
	class Veteran
	{
		scoreImage = "\ca\ui\textures\deb_hvezdicka.paa";
		badScoreImage = "\ca\ui\textures\deb_krizek.paa";
		skillFriendly = 1.0;
		precisionFriendly = 1.0;
		skillEnemy = 0.9;
		precisionEnemy = 0.75;
		myArmorCoef = 1.0;
		groupArmorCoef = 1.0;
		autoAimSizeFactor = 0.3;
		autoAimDistance = 0.6;
		autoAimAngle = 2.5;
		peripheralVisionAid = 0.65;
		visionAid = 0.0;
		class Flags
		{
			armor[] = {0,0};
			friendlyTag[] = {0,0};
			enemyTag[] = {0,0};
			hud[] = {1,1};
			hudPerm[] = {0,0};
			hudWp[] = {1,1};
			hudWpPerm[] = {0,0};
			autoSpot[] = {0,0};
			map[] = {0,1};
			weaponCursor[] = {1,1};
			autoGuideAT[] = {0,0};
			clockIndicator[] = {0,1};
			3rdPersonView[] = {1,1};
			tracers[] = {0,0};
			ultraAI[] = {0,1};
			autoAim[] = {0,0};
			unlimitedSaves[] = {0,1};
			hudGroupInfo[] = {0,1};
		};
	};
	class Mercenary
	{
		displayName = "$STR_SKILL_EXPERT";
		description = "The most realistic settings possible: no 3rd person view, no articial help.";
		showCadetHints = 0;
		showCadetWP = 0;
		maxPilotHeight = 10000;
		scoreChar = "*";
		badScoreChar = "X";
		scoreImage = "\ca\ui\textures\deb_hvezdicka.paa";
		badScoreImage = "\ca\ui\textures\deb_krizek.paa";
		skillFriendly = 1.0;
		precisionFriendly = 1.0;
		skillEnemy = 1.0;
		precisionEnemy = 1.0;
		myArmorCoef = 1.0;
		groupArmorCoef = 1.0;
		autoAimSizeFactor = 0.3;
		autoAimDistance = 0.6;
		autoAimAngle = 2.5;
		peripheralVisionAid = 0;
		visionAid = 0;
		class Flags
		{
			armor[] = {0,0};
			friendlyTag[] = {0,0};
			enemyTag[] = {0,0};
			hud[] = {0,0};
			hudPerm[] = {0,0};
			hudWp[] = {0,0};
			hudWpPerm[] = {0,0};
			autoSpot[] = {0,0};
			map[] = {0,0};
			weaponCursor[] = {0,0};
			autoGuideAT[] = {0,0};
			clockIndicator[] = {0,0};
			3rdPersonView[] = {0,0};
			tracers[] = {0,0};
			ultraAI[] = {0,1};
			autoAim[] = {0,0};
			unlimitedSaves[] = {0,0};
			deathMessages[] = {0,1};
			netStats[] = {0,1};
			vonID[] = {0,1};
			hudGroupInfo[] = {0,0};
		};
	};
};
class CfgCoreData
{
	textureDefault = "ca\data\data\default_co.paa";
	textureTrack = "ca\data\data\texturetrack_ca.paa";
	textureTrackFour = "ca\data\data\texturetrackfour_ca.paa";
	maskTextureFlare = "ca\data\data\masktextureflare%02d_co.paa";
	eyeFlare = "ca\data\data\eyeflare_ca.paa";
	cloudletBasic = "ca\Data\cl_basic.p3d";
	cloudletFire = "ca\Data\cl_fire.p3d";
	cloudletFireD = "ca\Data\cl_fireD.p3d";
	cloudletWater = "ca\Data\cl_water.p3d";
	paperCarModel = "ca\Data\papauto.p3d";
	collisionShape = "ca\Data\colision.p3d";
	sphereModel = "ca\data\koule.p3d";
	rectangleModel = "ca\data\rect.p3d";
	craterShell = "ca\data\krater.p3d";
	craterBullet = "ca\data\krater_po_kulce.p3d";
	sphereLight = "ca\data\kouleSvetlo.p3d";
	cloudletMissile = "ca\data\missileSmoke.p3d";
	horizontObject = "ca\data\horizont.p3d";
	skysphere = "ca\data\obloha.p3d";
	halflight = "ca\data\halfLight.p3d";
	textureBlack = "ca\data\data\black.pac";
	textureLine = "ca\data\data\tracer.paa";
	textureLine3D = "ca\data\data\textureline3d_ca.paa";
};
class CfgSaveThumbnails
{
	saveSingleMission = "ca\data\all\Icon-ARMA2-EDIT-SPsave.png";
	saveMPMission = "ca\data\all\Icon-ARMA2-EDIT-MPsave.png";
	saveCampaign = "ca\data\all\Icon-ARMA2-titul-save.png";
	userMissionSP = "ca\data\all\Icon-ARMA2-EDIT-SP.png";
	userMissionMP = "ca\data\all\Icon-ARMA2-EDIT-MP.png";
};
class CfgCloudletShapes
{
	cloudletUniversal = "\ca\Data\ParticleEffects\Universal\Universal";
	cloudletExplosion = "\ca\Data\cl_basic";
	cloudletSmoke = "\ca\Data\cl_basic";
	cloudletDust = "\ca\Data\cl_basic";
	cloudletBlood = "\ca\Data\cl_water";
	cloudletWater = "\ca\Data\cl_water";
	cloudletMissile = "\ca\Data\cl_basic";
	cloudletFire = "\ca\Data\cl_fireD";
	cloudletClouds = "\ca\Data\cl_basic";
};
class PreloadTextures
{
	class CfgCloudletShapes
	{
		cloudletUniversal = "@*";
	};
};
class PreloadConfig
{
	CfgDestroy = "*";
	class CfgSFX
	{
		Church = "*";
	};
};
class CfgFactionClasses
{
	class USMC
	{
		displayName = "$STR_DN_USMC";
		priority = 1;
		side = 1;
	};
	class CDF
	{
		displayName = "$STR_DN_CDF";
		priority = 2;
		side = 1;
	};
	class RU
	{
		displayName = "$STR_DN_RU";
		priority = 3;
		side = 0;
	};
	class INS
	{
		displayName = "$STR_DN_INS";
		priority = 4;
		side = 0;
	};
	class GUE
	{
		displayName = "$STR_DN_GUE";
		priority = 5;
		side = 2;
	};
	class CIV
	{
		displayName = "$STR_DN_CHERNARUS";
		priority = 6;
		side = 3;
	};
	class CIV_RU
	{
		displayName = "$STR_DN_RU";
		priority = 7;
		side = 3;
	};
	class None
	{
		displayName = "";
		priority = 10001;
		side = -1;
	};
};
class CfgVehicleClasses
{
	class Women
	{
		displayName = "$STR_DN_WOMEN";
	};
	class MenFR
	{
		displayName = "$STR_DN_MENFR";
	};
	class MenUSMC
	{
		displayName = "$STR_DN_MENUSMC";
	};
	class MenNAVY
	{
		displayName = "$STR_DN_MENNAVY";
	};
	class MenRUS
	{
		displayName = "$STR_DN_MENRUS";
	};
	class MenMVD
	{
		displayName = "$STR_DN_MENMVD";
	};
	class MenINS
	{
		displayName = "$STR_DN_MENINS";
	};
	class MenCDF
	{
		displayName = "$STR_DN_MENCDF";
	};
	class MenGUE
	{
		displayName = "$STR_DN_MENGUE";
	};
	class Armored_CDF
	{
		displayName = "$STR_DN_ARMORED_CDF";
	};
	class Armored_ChDKZ
	{
		displayName = "$STR_DN_ARMORED_CHDKZ";
	};
	class Armored_USMC
	{
		displayName = "$STR_DN_ARMORED_USMC";
	};
	class Armored_RU
	{
		displayName = "$STR_DN_ARMORED_RU";
	};
	class Car_USMC
	{
		displayName = "$STR_DN_CAR_USMC";
	};
	class Car_RU
	{
		displayName = "$STR_DN_CAR_RU";
	};
	class Car_ChDKZ
	{
		displayName = "$STR_DN_CAR_CHDKZ";
	};
	class Car_CDF
	{
		displayName = "$STR_DN_CAR_CDF";
	};
	class Air_ChDKZ
	{
		displayName = "$STR_DN_AIR_CHDKZ";
	};
	class Air_USMC
	{
		displayName = "$STR_DN_AIR_USMC";
	};
	class Air_RU
	{
		displayName = "$STR_DN_AIR_RU";
	};
	class Air_CDF
	{
		displayName = "$STR_DN_AIR_CDF";
	};
	class Ship_CDF
	{
		displayName = "$STR_DN_SHIP_CDF";
	};
	class Ship_ChDKZ
	{
		displayName = "$STR_DN_SHIP_CHDKZ";
	};
	class Ship_USMC
	{
		displayName = "$STR_DN_SHIP_USMC";
	};
	class Ship_RU
	{
		displayName = "$STR_DN_SHIP_RU";
	};
	class static
	{
		displayName = "$STR_DN_STATIC";
	};
	class Static_ChDKZ
	{
		displayName = "$STR_DN_STATIC_CHDKZ";
	};
	class Static_USMC
	{
		displayName = "$STR_DN_STATIC_USMC";
	};
	class Static_RU
	{
		displayName = "$STR_DN_STATIC_RU";
	};
	class Static_CDF
	{
		displayName = "$STR_DN_STATIC_CDF";
	};
	class support_ChDKZ
	{
		displayName = "$STR_DN_SUPPORT_CHDKZ";
	};
	class support_USMC
	{
		displayName = "$STR_DN_SUPPORT_USMC";
	};
	class support_RU
	{
		displayName = "$STR_DN_SUPPORT_RU";
	};
	class support_CDF
	{
		displayName = "$STR_DN_SUPPORT_CDF";
	};
	class Armory
	{
		displayName = "$STR_DN_ARMORY";
	};
	class Dead_bodies
	{
		displayName = "$STR_DN_DEAD_BODIES";
	};
	class Fortifications
	{
		displayName = "$STR_DN_OBJECTS_FORTIFICATIONS";
	};
	class Furniture
	{
		displayName = "$STR_DN_FURNITURE";
	};
	class Military
	{
		displayName = "$STR_DN_MILITARY";
	};
	class Misc
	{
		displayName = "$STR_DN_MISC";
	};
	class Signs
	{
		displayName = "$STR_DN_SIGNS";
	};
	class Small_items
	{
		displayName = "$STR_DN_SMALL_ITEMS";
	};
	class Targets
	{
		displayName = "$STR_DN_TARGETS";
	};
	class Tents
	{
		displayName = "$STR_DN_TENTS";
	};
	class Training
	{
		displayName = "$STR_DN_TRAINING";
	};
	class Wrecks
	{
		displayName = "$STR_DN_WRECKS";
	};
	class Test
	{
		displayName = "$STR_DN_TESTCLASS";
	};
	class Structures
	{
		displayName = "$STR_DN_STRUCTURES";
	};
	class Locations
	{
		displayName = "$STR_DN_LOCATIONS";
	};
	class Modules
	{
		displayName = "$STR_DN_MODULES";
	};
};
class CfgTitles
{
	class BISLogo
	{
		model = "\ca\data\bohemiaolor2.p3d";
	};
	class Sphere
	{
		model = "\ca\data\koule.p3d";
	};
	class TVSet
	{
		model = "\ca\data\TVhi.p3d";
	};
};
class CfgDestructPos
{
	class FuelStationDestr
	{
		timeBeforeHiding = "0.2";
		hideDuration = "lifeTime*0.05+0.2";
	};
};
class CfgVehicles
{
	class All
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_unknown"};
				speechPlural[] = {"veh_unknowns"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_unknown_CZ"};
				speechPlural[] = {"veh_unknowns_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_unknown_CZ4P"};
				speechPlural[] = {"veh_unknowns_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_unknown_RU"};
				speechPlural[] = {"veh_unknowns_RU"};
			};
		};
		TextPlural = "$STR_DN_unknowns";
		TextSingular = "$STR_DN_unknown";
		nameSound = "veh_unknown";
		class DestructionEffects
		{
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect1";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
			};
			class Sound
			{
				type = "Fire";
			};
			class Fire1
			{
				simulation = "particles";
				type = "ObjectDestructionFire1";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.5;
			};
			class Sparks1
			{
				simulation = "particles";
				type = "ObjectDestructionSparks";
				position = "destructionEffect1";
				intensity = 0;
				interval = 1;
				lifeTime = 0;
			};
			class Light2
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect2";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
			};
			class Fire2
			{
				simulation = "particles";
				type = "ObjectDestructionFire2";
				position = "destructionEffect2";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1_2
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke1_2";
				position = "destructionEffect2";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.5;
			};
		};
	};
	class AllVehicles: All
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_unknown"};
				speechPlural[] = {"veh_unknowns"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_unknown_CZ"};
				speechPlural[] = {"veh_unknowns_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_unknown_CZ4P"};
				speechPlural[] = {"veh_unknowns_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_unknown_RU"};
				speechPlural[] = {"veh_unknowns_RU"};
			};
		};
		TextPlural = "$STR_DN_unknowns";
		TextSingular = "$STR_DN_unknown";
		nameSound = "veh_unknown";
		class NewTurret
		{
			gunnerInAction = "ManActTestDriver";
			gunnerAction = "ManActTestDriver";
			gunBeg = "usti hlavne";
			gunEnd = "konec hlavne";
			memoryPointGunnerOptics = "gunnerview";
			memoryPointsGetInGunner = "pos gunner";
			memoryPointsGetInGunnerDir = "pos gunner dir";
			memoryPointGun = "kulas";
			selectionFireAnim = "zasleh";
		};
	};
	class Land: AllVehicles
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_unknown"};
				speechPlural[] = {"veh_unknowns"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_unknown_CZ"};
				speechPlural[] = {"veh_unknowns_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_unknown_CZ4P"};
				speechPlural[] = {"veh_unknowns_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_unknown_RU"};
				speechPlural[] = {"veh_unknowns_RU"};
			};
		};
		TextPlural = "$STR_DN_unknowns";
		TextSingular = "$STR_DN_unknown";
		nameSound = "veh_unknown";
	};
	class Man: Land
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_man"};
				speechPlural[] = {"veh_men"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_man_CZ"};
				speechPlural[] = {"veh_men_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_man_CZ4P"};
				speechPlural[] = {"veh_men_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_man_RU"};
				speechPlural[] = {"veh_men_RU"};
			};
		};
		TextPlural = "$STR_DN_men";
		TextSingular = "$STR_DN_man";
		nameSound = "veh_man";
	};
	class LandVehicle: Land
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_vehicle"};
				speechPlural[] = {"veh_vehicles"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_vehicle_CZ"};
				speechPlural[] = {"veh_vehicles_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_vehicle_CZ4P"};
				speechPlural[] = {"veh_vehicles_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_vehicle_RU"};
				speechPlural[] = {"veh_vehicles_RU"};
			};
		};
		TextPlural = "$STR_DN_vehicles";
		TextSingular = "$STR_DN_vehicle";
		nameSound = "veh_vehicle";
	};
	class Car: LandVehicle
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_car"};
				speechPlural[] = {"veh_cars"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_car_CZ"};
				speechPlural[] = {"veh_cars_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_car_CZ4P"};
				speechPlural[] = {"veh_cars_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_car_RU"};
				speechPlural[] = {"veh_cars_RU"};
			};
		};
		TextPlural = "$STR_DN_cars";
		TextSingular = "$STR_DN_car";
		nameSound = "veh_car";
	};
	class Motorcycle: LandVehicle
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_bike"};
				speechPlural[] = {"veh_bikes"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_bike_CZ"};
				speechPlural[] = {"veh_bikes_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_bike_CZ4P"};
				speechPlural[] = {"veh_bikes_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_bike_RU"};
				speechPlural[] = {"veh_bikes_RU"};
			};
		};
		TextPlural = "$STR_DN_bikes";
		TextSingular = "$STR_DN_bike";
		nameSound = "veh_bike";
	};
	class StaticWeapon: LandVehicle
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_StaticWeapon"};
				speechPlural[] = {"veh_StaticWeapons"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_StaticWeapon_CZ"};
				speechPlural[] = {"veh_StaticWeapons_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_StaticWeapon_CZ4P"};
				speechPlural[] = {"veh_StaticWeapons_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_StaticWeapon_RU"};
				speechPlural[] = {"veh_StaticWeapons_RU"};
			};
		};
		TextPlural = "$STR_DN_StaticWeapons";
		TextSingular = "$STR_DN_StaticWeapon";
		nameSound = "veh_StaticWeapon";
	};
	class StaticMGWeapon: StaticWeapon
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_staticMGweapon"};
				speechPlural[] = {"veh_staticMGweapons"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_staticMGweapon_CZ"};
				speechPlural[] = {"veh_staticMGweapons_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_staticMGweapon_CZ4P"};
				speechPlural[] = {"veh_staticMGweapons_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_staticMGweapon_RU"};
				speechPlural[] = {"veh_staticMGweapons_RU"};
			};
		};
		TextPlural = "$STR_DN_staticMGweapons";
		TextSingular = "$STR_DN_staticMGweapon";
		nameSound = "veh_staticMGweapon";
	};
	class StaticATWeapon: StaticWeapon
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_staticATWeapon"};
				speechPlural[] = {"veh_staticATWeapons"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_staticATWeapon_CZ"};
				speechPlural[] = {"veh_staticATWeapons_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_staticATWeapon_CZ4P"};
				speechPlural[] = {"veh_staticATWeapons_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_staticATWeapon_RU"};
				speechPlural[] = {"veh_staticATWeapons_RU"};
			};
		};
		TextPlural = "$STR_DN_staticATWeapons";
		TextSingular = "$STR_DN_staticATWeapon";
		nameSound = "veh_staticATWeapon";
	};
	class StaticAAWeapon: StaticWeapon
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_staticAAWeapon"};
				speechPlural[] = {"veh_staticAAWeapons"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_staticAAWeapon_CZ"};
				speechPlural[] = {"veh_staticAAWeapons_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_staticAAWeapon_CZ4P"};
				speechPlural[] = {"veh_staticAAWeapons_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_staticAAWeapon_RU"};
				speechPlural[] = {"veh_staticAAWeapons_RU"};
			};
		};
		TextPlural = "$STR_DN_staticAAWeapons";
		TextSingular = "$STR_DN_staticAAWeapon";
		nameSound = "veh_staticAAWeapon";
	};
	class StaticCannon: StaticWeapon
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_staticCannon"};
				speechPlural[] = {"veh_staticCannons"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_staticCannon_CZ"};
				speechPlural[] = {"veh_staticCannons_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_staticCannon_CZ4P"};
				speechPlural[] = {"veh_staticCannons_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_staticCannon_RU"};
				speechPlural[] = {"veh_staticCannons_RU"};
			};
		};
		TextPlural = "$STR_DN_staticCannons";
		TextSingular = "$STR_DN_staticCannon";
		nameSound = "veh_staticCannon";
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_staticGrenadeLauncher"};
				speechPlural[] = {"veh_staticGrenadeLaunchers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_staticGrenadeLauncher_CZ"};
				speechPlural[] = {"veh_staticGrenadeLaunchers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_staticGrenadeLauncher_CZ4P"};
				speechPlural[] = {"veh_staticGrenadeLaunchers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_staticGrenadeLauncher_RU"};
				speechPlural[] = {"veh_staticGrenadeLaunchers_RU"};
			};
		};
		TextPlural = "$STR_DN_staticGrenadeLaunchers";
		TextSingular = "$STR_DN_staticGrenadeLauncher";
		nameSound = "veh_staticGrenadeLauncher";
	};
	class StaticMortar: StaticWeapon
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_staticMortar"};
				speechPlural[] = {"veh_staticMortars"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_staticMortar_CZ"};
				speechPlural[] = {"veh_staticMortars_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_staticMortar_CZ4P"};
				speechPlural[] = {"veh_staticMortars_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_staticMortar_RU"};
				speechPlural[] = {"veh_staticMortars_RU"};
			};
		};
		TextPlural = "$STR_DN_staticMortars";
		TextSingular = "$STR_DN_staticMortar";
		nameSound = "veh_staticMortar";
	};
	class StaticSEARCHLight: StaticWeapon
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_searchLight"};
				speechPlural[] = {"veh_searchLights"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_searchLight_CZ"};
				speechPlural[] = {"veh_searchLights_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_searchLight_CZ4P"};
				speechPlural[] = {"veh_searchLights_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_searchLight_RU"};
				speechPlural[] = {"veh_searchLights_RU"};
			};
		};
		TextPlural = "$STR_DN_searchLights";
		TextSingular = "$STR_DN_searchLight";
		nameSound = "veh_searchLight";
	};
	class Tank: LandVehicle
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Tank"};
				speechPlural[] = {"veh_Tanks"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Tank_CZ"};
				speechPlural[] = {"veh_Tanks_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Tank_CZ4P"};
				speechPlural[] = {"veh_Tanks_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Tank_RU"};
				speechPlural[] = {"veh_Tanks_RU"};
			};
		};
		TextPlural = "$STR_DN_Tanks";
		TextSingular = "$STR_DN_Tank";
		nameSound = "veh_Tank";
	};
	class APC: Tank
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_TrackedAPC"};
				speechPlural[] = {"veh_TrackedAPCs"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_TrackedAPC_CZ"};
				speechPlural[] = {"veh_TrackedAPCs_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_TrackedAPC_CZ4P"};
				speechPlural[] = {"veh_TrackedAPCs_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_TrackedAPC_RU"};
				speechPlural[] = {"veh_TrackedAPCs_RU"};
			};
		};
		TextPlural = "$STR_DN_TrackedAPCs";
		TextSingular = "$STR_DN_TrackedAPC";
		nameSound = "veh_TrackedAPC";
	};
	class Tracked_APC: Tank
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_TrackedAPC"};
				speechPlural[] = {"veh_TrackedAPCs"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_TrackedAPC_CZ"};
				speechPlural[] = {"veh_TrackedAPCs_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_TrackedAPC_CZ4P"};
				speechPlural[] = {"veh_TrackedAPCs_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_TrackedAPC_RU"};
				speechPlural[] = {"veh_TrackedAPCs_RU"};
			};
		};
		TextPlural = "$STR_DN_TrackedAPCs";
		TextSingular = "$STR_DN_TrackedAPC";
		nameSound = "veh_TrackedAPC";
		displayName = "$STR_DN_TrackedAPC";
	};
	class Wheeled_APC: Car
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_WheeledAPC"};
				speechPlural[] = {"veh_WheeledAPCs"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_WheeledAPC_CZ"};
				speechPlural[] = {"veh_WheeledAPCs_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_WheeledAPC_CZ4P"};
				speechPlural[] = {"veh_WheeledAPCs_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_WheeledAPC_RU"};
				speechPlural[] = {"veh_WheeledAPCs_RU"};
			};
		};
		TextPlural = "$STR_DN_WheeledAPCs";
		TextSingular = "$STR_DN_WheeledAPC";
		nameSound = "veh_WheeledAPC";
		displayName = "$STR_DN_WheeledAPC";
	};
	class Animal: Man
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Animal"};
				speechPlural[] = {"veh_Animals"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Animal_CZ"};
				speechPlural[] = {"veh_Animals_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Animal_CZ4P"};
				speechPlural[] = {"veh_Animals_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Animal_RU"};
				speechPlural[] = {"veh_Animals_RU"};
			};
		};
		TextPlural = "$STR_DN_Animals";
		TextSingular = "$STR_DN_Animal";
		nameSound = "veh_Animal";
	};
	class Air: AllVehicles
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_aircraft"};
				speechPlural[] = {"veh_aircrafts"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_aircraft_CZ"};
				speechPlural[] = {"veh_aircrafts_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_aircraft_CZ4P"};
				speechPlural[] = {"veh_aircrafts_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_aircraft_RU"};
				speechPlural[] = {"veh_aircrafts_RU"};
			};
		};
		TextPlural = "$STR_DN_aircrafts";
		TextSingular = "$STR_DN_aircraft";
		nameSound = "veh_aircraft";
	};
	class Helicopter: Air
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Helicopter"};
				speechPlural[] = {"veh_Helicopters"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Helicopter_CZ"};
				speechPlural[] = {"veh_Helicopters_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Helicopter_CZ4P"};
				speechPlural[] = {"veh_Helicopters_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Helicopter_RU"};
				speechPlural[] = {"veh_Helicopters_RU"};
			};
		};
		TextPlural = "$STR_DN_Helicopters";
		TextSingular = "$STR_DN_Helicopter";
		nameSound = "veh_Helicopter";
	};
	class GunShip: Helicopter
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_GunShip"};
				speechPlural[] = {"veh_GunShips"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_GunShip_CZ"};
				speechPlural[] = {"veh_GunShips_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_GunShip_CZ4P"};
				speechPlural[] = {"veh_GunShips_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_GunShip_RU"};
				speechPlural[] = {"veh_GunShips_RU"};
			};
		};
		TextPlural = "$STR_DN_GunShips";
		TextSingular = "$STR_DN_GunShip";
		nameSound = "veh_GunShip";
	};
	class TransportHelicopter: Helicopter
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_transportHelicopter"};
				speechPlural[] = {"veh_transportHelicopters"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_transportHelicopter_CZ"};
				speechPlural[] = {"veh_transportHelicopters_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_transportHelicopter_CZ4P"};
				speechPlural[] = {"veh_transportHelicopters_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_transportHelicopter_RU"};
				speechPlural[] = {"veh_transportHelicopters_RU"};
			};
		};
		TextPlural = "$STR_DN_transportHelicopters";
		TextSingular = "$STR_DN_transportHelicopter";
		nameSound = "veh_transportHelicopter";
	};
	class Plane: Air
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_airplane"};
				speechPlural[] = {"veh_airplanes"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_airplane_CZ"};
				speechPlural[] = {"veh_airplanes_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_airplane_CZ4P"};
				speechPlural[] = {"veh_airplanes_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_airplane_RU"};
				speechPlural[] = {"veh_airplanes_RU"};
			};
		};
		TextPlural = "$STR_DN_airplanes";
		TextSingular = "$STR_DN_airplane";
		nameSound = "veh_airplane";
	};
	class UAV: Plane
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_UAV"};
				speechPlural[] = {"veh_UAVs"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_UAV_CZ"};
				speechPlural[] = {"veh_UAVs_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_UAV_CZ4P"};
				speechPlural[] = {"veh_UAVs_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_UAV_RU"};
				speechPlural[] = {"veh_UAVs_RU"};
			};
		};
		TextPlural = "$STR_DN_UAVs";
		TextSingular = "$STR_DN_UAV";
		nameSound = "veh_UAV";
		displayName = "$STR_DN_UAV";
		accuracy = 0.1;
	};
	class Fighter: Plane
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_attackAirplane"};
				speechPlural[] = {"veh_attackAirplanes"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_attackAirplane_CZ"};
				speechPlural[] = {"veh_attackAirplanes_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_attackAirplane_CZ4P"};
				speechPlural[] = {"veh_attackAirplanes_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_attackAirplane_RU"};
				speechPlural[] = {"veh_attackAirplanes_RU"};
			};
		};
		TextPlural = "$STR_DN_attackAirplanes";
		TextSingular = "$STR_DN_attackAirplane";
		nameSound = "veh_attackAirplane";
	};
	class CargoAirplane: Plane
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_cargoAirplane"};
				speechPlural[] = {"veh_cargoAirplanes"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_cargoAirplane_CZ"};
				speechPlural[] = {"veh_cargoAirplanes_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_cargoAirplane_CZ4P"};
				speechPlural[] = {"veh_cargoAirplanes_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_cargoAirplane_RU"};
				speechPlural[] = {"veh_cargoAirplanes_RU"};
			};
		};
		TextPlural = "$STR_DN_cargoAirplanes";
		TextSingular = "$STR_DN_cargoAirplane";
		nameSound = "veh_cargoAirplane";
	};
	class Ship: AllVehicles
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Ship"};
				speechPlural[] = {"veh_Ships"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Ship_CZ"};
				speechPlural[] = {"veh_Ships_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Ship_CZ4P"};
				speechPlural[] = {"veh_Ships_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Ship_RU"};
				speechPlural[] = {"veh_Ships_RU"};
			};
		};
		TextPlural = "$STR_DN_Ships";
		TextSingular = "$STR_DN_Ship";
		nameSound = "veh_Ship";
	};
	class BigShip: Ship
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Ship"};
				speechPlural[] = {"veh_Ships"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Ship_CZ"};
				speechPlural[] = {"veh_Ships_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Ship_CZ4P"};
				speechPlural[] = {"veh_Ships_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Ship_RU"};
				speechPlural[] = {"veh_Ships_RU"};
			};
		};
		TextPlural = "$STR_DN_Ships";
		TextSingular = "$STR_DN_Ship";
		nameSound = "veh_Ship";
	};
	class SmallShip: Ship
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Ship"};
				speechPlural[] = {"veh_Ships"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Ship_CZ"};
				speechPlural[] = {"veh_Ships_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Ship_CZ4P"};
				speechPlural[] = {"veh_Ships_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Ship_RU"};
				speechPlural[] = {"veh_Ships_RU"};
			};
		};
		TextPlural = "$STR_DN_Ships";
		TextSingular = "$STR_DN_Ship";
		nameSound = "veh_Ship";
	};
	class Truck: Car
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Truck"};
				speechPlural[] = {"veh_Trucks"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Truck_CZ"};
				speechPlural[] = {"veh_Trucks_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Truck_CZ4P"};
				speechPlural[] = {"veh_Trucks_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Truck_RU"};
				speechPlural[] = {"veh_Trucks_RU"};
			};
		};
		TextPlural = "$STR_DN_Trucks";
		TextSingular = "$STR_DN_Truck";
		nameSound = "veh_Truck";
	};
	class Bus: Car
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Bus"};
				speechPlural[] = {"veh_Buses"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Bus_CZ"};
				speechPlural[] = {"veh_Buses_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Bus_CZ4P"};
				speechPlural[] = {"veh_Buses_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Bus_RU"};
				speechPlural[] = {"veh_Buses_RU"};
			};
		};
		TextPlural = "$STR_DN_Buses";
		TextSingular = "$STR_DN_Bus";
		nameSound = "veh_Bus";
	};
	class Tractor: Car
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Tractor"};
				speechPlural[] = {"veh_Tractors"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Tractor_CZ"};
				speechPlural[] = {"veh_Tractors_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Tractor_CZ4P"};
				speechPlural[] = {"veh_Tractors_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Tractor_RU"};
				speechPlural[] = {"veh_Tractors_RU"};
			};
		};
		TextPlural = "$STR_DN_Tractors";
		TextSingular = "$STR_DN_Tractor";
		nameSound = "veh_Tractor";
	};
	class ParachuteBase: Helicopter
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Parachute"};
				speechPlural[] = {"veh_Parachutes"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Parachute_CZ"};
				speechPlural[] = {"veh_Parachutes_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Parachute_CZ4P"};
				speechPlural[] = {"veh_Parachutes_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Parachute_RU"};
				speechPlural[] = {"veh_Parachutes_RU"};
			};
		};
		TextPlural = "$STR_DN_Parachutes";
		TextSingular = "$STR_DN_Parachute";
		nameSound = "veh_Parachute";
	};
	class LaserTarget: All
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_LaserTarget"};
				speechPlural[] = {"obj_LaserTargets"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_LaserTarget_CZ"};
				speechPlural[] = {"obj_LaserTargets_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_LaserTarget_CZ4P"};
				speechPlural[] = {"obj_LaserTargets_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_LaserTarget_RU"};
				speechPlural[] = {"obj_LaserTargets_RU"};
			};
		};
		TextPlural = "$STR_DN_LaserTargets";
		TextSingular = "$STR_DN_LaserTarget";
		nameSound = "obj_LaserTarget";
	};
	class Static: All
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_unknown"};
				speechPlural[] = {"obj_unknowns"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_unknown_CZ"};
				speechPlural[] = {"obj_unknowns_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_unknown_CZ4P"};
				speechPlural[] = {"obj_unknowns_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_unknown_RU"};
				speechPlural[] = {"obj_unknowns_RU"};
			};
		};
		TextPlural = "$STR_DN_unknowns";
		TextSingular = "$STR_DN_unknown";
		nameSound = "obj_unknown";
	};
	class Fortress: Static
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_bunker"};
				speechPlural[] = {"obj_bunkers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_bunker_CZ"};
				speechPlural[] = {"obj_bunkers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_bunker_CZ4P"};
				speechPlural[] = {"obj_bunkers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_bunker_RU"};
				speechPlural[] = {"obj_bunkers_RU"};
			};
		};
		TextPlural = "$STR_DN_bunkers";
		TextSingular = "$STR_DN_bunker";
		nameSound = "obj_bunker";
	};
	class Building: Static
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_Building"};
				speechPlural[] = {"obj_Buildings"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_Building_CZ"};
				speechPlural[] = {"obj_Buildings_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_Building_CZ4P"};
				speechPlural[] = {"obj_Buildings_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_Building_RU"};
				speechPlural[] = {"obj_Buildings_RU"};
			};
		};
		TextPlural = "$STR_DN_Buildings";
		TextSingular = "$STR_DN_Building";
		nameSound = "obj_Building";
	};
	class Strategic: Building
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_Building"};
				speechPlural[] = {"obj_Buildings"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_Building_CZ"};
				speechPlural[] = {"obj_Buildings_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_Building_CZ4P"};
				speechPlural[] = {"obj_Buildings_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_Building_RU"};
				speechPlural[] = {"obj_Buildings_RU"};
			};
		};
		TextPlural = "$STR_DN_Buildings";
		TextSingular = "$STR_DN_Building";
		nameSound = "obj_Building";
	};
	class FlagCarrierCore: Strategic
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_flag"};
				speechPlural[] = {"obj_flags"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_flag_CZ"};
				speechPlural[] = {"obj_flags_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_flag_CZ4P"};
				speechPlural[] = {"obj_flags_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_flag_RU"};
				speechPlural[] = {"obj_flags_RU"};
			};
		};
		TextPlural = "$STR_DN_flags";
		TextSingular = "$STR_DN_flag";
		nameSound = "obj_flag";
	};
	class Thing: All
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_object"};
				speechPlural[] = {"obj_objects"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_object_CZ"};
				speechPlural[] = {"obj_objects_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_object_CZ4P"};
				speechPlural[] = {"obj_objects_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_object_RU"};
				speechPlural[] = {"obj_objects_RU"};
			};
		};
		TextPlural = "$STR_DN_objects";
		TextSingular = "$STR_DN_object";
		nameSound = "obj_object";
	};
	class Object: All
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_object"};
				speechPlural[] = {"obj_objects"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_object_CZ"};
				speechPlural[] = {"obj_objects_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_object_CZ4P"};
				speechPlural[] = {"obj_objects_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_object_RU"};
				speechPlural[] = {"obj_objects_RU"};
			};
		};
		TextPlural = "$STR_DN_objects";
		TextSingular = "$STR_DN_object";
		nameSound = "obj_object";
	};
	class NonStrategic: Building
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_Building"};
				speechPlural[] = {"obj_Buildings"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_Building_CZ"};
				speechPlural[] = {"obj_Buildings_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_Building_CZ4P"};
				speechPlural[] = {"obj_Buildings_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_Building_RU"};
				speechPlural[] = {"obj_Buildings_RU"};
			};
		};
		TextPlural = "$STR_DN_Buildings";
		TextSingular = "$STR_DN_Building";
		nameSound = "obj_Building";
		class DestructionEffects;
	};
	class StaticShip: Strategic
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Ship"};
				speechPlural[] = {"veh_Ships"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Ship_CZ"};
				speechPlural[] = {"veh_Ships_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Ship_CZ4P"};
				speechPlural[] = {"veh_Ships_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Ship_RU"};
				speechPlural[] = {"veh_Ships_RU"};
			};
		};
		TextPlural = "$STR_DN_Ships";
		TextSingular = "$STR_DN_Ship";
		nameSound = "veh_Ship";
		destrType = "DestructNo";
	};
	class Structure: NonStrategic
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_Structure"};
				speechPlural[] = {"obj_Structures"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_Structure_CZ"};
				speechPlural[] = {"obj_Structures_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_Structure_CZ4P"};
				speechPlural[] = {"obj_Structures_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_Structure_RU"};
				speechPlural[] = {"obj_Structures_RU"};
			};
		};
		TextPlural = "$STR_DN_Structures";
		TextSingular = "$STR_DN_Structure";
		nameSound = "obj_Structure";
	};
	class Church: NonStrategic
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_church"};
				speechPlural[] = {"obj_churches"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_church_CZ"};
				speechPlural[] = {"obj_churches_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_church_CZ4P"};
				speechPlural[] = {"obj_churches_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_church_RU"};
				speechPlural[] = {"obj_churches_RU"};
			};
		};
		TextPlural = "$STR_DN_churches";
		TextSingular = "$STR_DN_church";
		nameSound = "obj_church";
		simulation = "church";
		displayName = "$STR_DN_CHURCH";
		accuracy = 0.25;
		armor = 1000;
	};
	class fortification: Static
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_fortification"};
				speechPlural[] = {"obj_fortifications"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_fortification_CZ"};
				speechPlural[] = {"obj_fortifications_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_fortification_CZ4P"};
				speechPlural[] = {"obj_fortifications_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_fortification_RU"};
				speechPlural[] = {"obj_fortifications_RU"};
			};
		};
		TextPlural = "$STR_DN_fortifications";
		TextSingular = "$STR_DN_fortification";
		nameSound = "obj_fortification";
	};
	class Tent: Static
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_tent"};
				speechPlural[] = {"obj_tents"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_tent_CZ"};
				speechPlural[] = {"obj_tents_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_tent_CZ4P"};
				speechPlural[] = {"obj_tents_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_tent_RU"};
				speechPlural[] = {"obj_tents_RU"};
			};
		};
		TextPlural = "$STR_DN_tents";
		TextSingular = "$STR_DN_tent";
		nameSound = "obj_tent";
	};
	class Train: Static
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_vehicle"};
				speechPlural[] = {"veh_vehicles"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_vehicle_CZ"};
				speechPlural[] = {"veh_vehicles_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_vehicle_CZ4P"};
				speechPlural[] = {"veh_vehicles_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_vehicle_RU"};
				speechPlural[] = {"veh_vehicles_RU"};
			};
		};
		TextPlural = "$STR_DN_vehicles";
		TextSingular = "$STR_DN_vehicle";
		nameSound = "veh_vehicle";
	};
	class Gate: Static
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_gate"};
				speechPlural[] = {"veh_gates"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_gate_CZ"};
				speechPlural[] = {"veh_gates_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_gate_CZ4P"};
				speechPlural[] = {"veh_gates_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_gate_RU"};
				speechPlural[] = {"veh_gates_RU"};
			};
		};
		TextPlural = "$STR_DN_gates";
		TextSingular = "$STR_DN_gate";
		nameSound = "veh_gate";
	};
	class Wreck_Base: Strategic
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_unknown"};
				speechPlural[] = {"veh_unknowns"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_unknown_CZ"};
				speechPlural[] = {"veh_unknowns_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_unknown_CZ4P"};
				speechPlural[] = {"veh_unknowns_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_unknown_RU"};
				speechPlural[] = {"veh_unknowns_RU"};
			};
		};
		TextPlural = "$STR_DN_unknowns";
		TextSingular = "$STR_DN_unknown";
		nameSound = "veh_unknown";
		displayName = "$STR_DN_UNKNOWN";
		accuracy = 0;
	};
	class Wreck: Thing
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Wreck"};
				speechPlural[] = {"veh_Wrecks"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Wreck_CZ"};
				speechPlural[] = {"veh_Wrecks_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Wreck_CZ4P"};
				speechPlural[] = {"veh_Wrecks_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Wreck_RU"};
				speechPlural[] = {"veh_Wrecks_RU"};
			};
		};
		TextPlural = "$STR_DN_Wrecks";
		TextSingular = "$STR_DN_Wreck";
		nameSound = "veh_Wreck";
		displayName = "$STR_DN_WRECK";
		accuracy = 0.5;
	};
	class TankWreck: Wreck{};
	class PlaneWreck: Wreck{};
	class ShipWreck: Wreck{};
	class HelicopterWreck: Wreck{};
	class CarWreck: Wreck{};
	class TruckWreck: Wreck{};
	class ReammoBox: Strategic
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_ammocrate"};
				speechPlural[] = {"obj_ammocrates"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_ammocrate_CZ"};
				speechPlural[] = {"obj_ammocrates_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_ammocrate_CZ4P"};
				speechPlural[] = {"obj_ammocrates_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_ammocrate_RU"};
				speechPlural[] = {"obj_ammocrates_RU"};
			};
		};
		TextPlural = "$STR_DN_ammocrates";
		TextSingular = "$STR_DN_ammocrate";
		nameSound = "obj_ammocrate";
	};
	class HouseBase: NonStrategic
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_house"};
				speechPlural[] = {"obj_houses"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_house_CZ"};
				speechPlural[] = {"obj_houses_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_house_CZ4P"};
				speechPlural[] = {"obj_houses_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_house_RU"};
				speechPlural[] = {"obj_houses_RU"};
			};
		};
		TextPlural = "$STR_DN_houses";
		TextSingular = "$STR_DN_house";
		nameSound = "obj_house";
		animated = 0;
		displayName = "$STR_DN_HOUSE";
		model = "";
		simulation = "house";
		accuracy = 0.2;
		cost = 0;
		ladders[] = {};
		armor = 300;
	};
	class Ruins: HouseBase
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_ruin"};
				speechPlural[] = {"obj_ruins"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_ruin_CZ"};
				speechPlural[] = {"obj_ruins_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_ruin_CZ4P"};
				speechPlural[] = {"obj_ruins_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_ruin_RU"};
				speechPlural[] = {"obj_ruins_RU"};
			};
		};
		TextPlural = "$STR_DN_ruins";
		TextSingular = "$STR_DN_ruin";
		nameSound = "obj_ruin";
		destrType = "DestructNo";
		class DestructionEffects{};
	};
	class House: HouseBase
	{
		animated = 0;
		displayName = "$STR_DN_HOUSE";
		model = "";
		simulation = "house";
		accuracy = 0.2;
		cost = 0;
		ladders[] = {};
		armor = 300;
		class DestructionEffects: DestructionEffects
		{
			class Smoke1
			{
				simulation = "particles";
				type = "HouseDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2: Smoke1
			{
				type = "HouseDestructionSmoke2";
			};
			class Smoke3: Smoke1
			{
				type = "HouseDestructionSmoke3";
			};
			class Smoke4: Smoke1
			{
				type = "HouseDestructionSmoke4";
			};
			class Smoke5: Smoke1
			{
				type = "HouseDestrSmokeLong";
			};
		};
	};
	class House_Small: HouseBase
	{
		displayName = "$STR_DN_HOUSE";
		model = "";
		simulation = "house";
		accuracy = 0.2;
		cost = 0;
		ladders[] = {};
		armor = 150;
		class DestructionEffects: DestructionEffects
		{
			class Smoke1
			{
				simulation = "particles";
				type = "HouseDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
		};
	};
	class Wall: NonStrategic
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_wall"};
				speechPlural[] = {"obj_walls"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_wall_CZ"};
				speechPlural[] = {"obj_walls_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_wall_CZ4P"};
				speechPlural[] = {"obj_walls_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_wall_RU"};
				speechPlural[] = {"obj_walls_RU"};
			};
		};
		TextPlural = "$STR_DN_walls";
		TextSingular = "$STR_DN_wall";
		nameSound = "obj_wall";
		animated = 0;
		scope = 0;
		icon = "\Ca\buildings\Icons\i_wall_CA.paa";
		accuracy = 0.2;
		typicalCargo[] = {};
		destrType = "DestructTree";
		mapSize = 2.684;
		cost = 0;
		armor = 500;
	};
	class Fence: NonStrategic
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"obj_fence"};
				speechPlural[] = {"obj_fences"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"obj_fence_CZ"};
				speechPlural[] = {"obj_fences_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"obj_fence_CZ4P"};
				speechPlural[] = {"obj_fences_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"obj_fence_RU"};
				speechPlural[] = {"obj_fences_RU"};
			};
		};
		TextPlural = "$STR_DN_fences";
		TextSingular = "$STR_DN_fence";
		nameSound = "obj_fence";
		scope = 0;
		animated = 0;
		vehicleClass = "Misc";
		cost = 0;
		armor = 200;
		icon = "\Ca\buildings\Icons\i_fence_CA.paa";
		displayName = "$STR_DN_FENCE_WIRE";
		accuracy = 0.3;
		mapSize = 5.5;
		destrType = "DestructTree";
	};
	class ThingEffect;
	class ThingEffectLight;
	class ThingEffectFeather;
	class FxWindGrass1: ThingEffectLight
	{
		scope = 1;
		model = "\ca\data\cl_grass1.p3d";
		displayName = "Internal: FxWindGrass1";
		airRotation = 0.45;
	};
	class FxWindGrass2: ThingEffectLight
	{
		scope = 1;
		model = "\ca\data\cl_grass2.p3d";
		displayName = "Internal: FxWindGrass2";
		airRotation = 0.3;
	};
	class FxWindRock1: ThingEffectLight
	{
		scope = 1;
		model = "\ca\data\cl_rock1.p3d";
		displayName = "Internal: FxWindRock1";
		airFriction2[] = {1,1,1};
		airFriction1[] = {0.5,0.5,0.5};
		airFriction0[] = {0.05,0.05,0.05};
		airRotation = 0.7;
		minHeight = 0.05;
		avgHeight = 0.1;
		maxHeight = 0.15;
	};
	class FxWindLeaf1: ThingEffectLight
	{
		scope = 1;
		model = "\ca\data\cl_leaf.p3d";
		displayName = "Internal: FxWindLeaf1";
		airFriction2[] = {2,2,8};
		airFriction1[] = {1,1,4};
		airFriction0[] = {0.3,0.3,0.1};
		airRotation = 0.35;
		minHeight = 0.3;
		avgHeight = 1.5;
		maxHeight = 3.0;
	};
	class FxWindLeaf2: FxWindLeaf1
	{
		model = "\ca\data\cl_leaf2.p3d";
		displayName = "Internal: FxWindLeaf2";
	};
	class FxWindLeaf3: FxWindLeaf1
	{
		model = "\ca\data\cl_leaf3.p3d";
		displayName = "Internal: FxWindLeaf3";
	};
	class FxWindPollen1: ThingEffectFeather
	{
		scope = 1;
		model = "\ca\data\cl_feathers2.p3d";
		displayName = "Internal: FxWindPollen1";
	};
	class Library_WeaponHolder: Strategic
	{
		scope = 1;
		model = "\ca\data\library\weaponholder\weaponholder.p3d";
		accuracy = 0.2;
		class TransportMagazines{};
		forceSupply = 1;
		showWeaponCargo = 1;
		transportMaxMagazines = 1e+009;
		transportMaxWeapons = 1e+009;
		displayName = "";
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		cost = 0;
		armor = 200;
		mapSize = 2.6;
		animated = 0;
		vehicleClass = "Ammo";
		icon = "";
		nameSound = "";
		typicalCargo[] = {};
		destrType = "DestructEngine";
	};
	class Platform: Thing
	{
		scope = 1;
		simulation = "house";
		vehicleClass = "test";
		coefInside = 2;
		coefInsideHeur = 4.3;
		displayname = "$STR_DN_PLATFORM";
		model = "\ca\data\Library\Platform\Platform.p3d";
	};
	class Obstacle_Cylinder1: Thing
	{
		scope = 1;
		simulation = "house";
		vehicleClass = "test";
		coefInside = 2;
		coefInsideHeur = 4.3;
		displayname = "$STR_DN_OBSTACLE_CYLINDER";
		model = "\ca\data\Library\Obstacle_Cylinder1\Obstacle_Cylinder1.p3d";
	};
	class Obstacle_Jump1: Obstacle_Cylinder1
	{
		displayName = "$STR_DN_OBSTACLE_JUMP";
		model = "\ca\data\Library\Obstacle_Jump1\Obstacle_Jump1.p3d";
	};
	class RoadCone: Thing
	{
		simulation = "thing";
		animated = 0;
		mapSize = 0.1;
		displayName = "$STR_DN_ROADCONE";
		model = "\ca\data\library\road_cone.p3d";
		icon = "\ca\data\library\data\icons\road_cone_CA.paa";
		scope = 2;
		nameSound = "";
		vehicleClass = "signs";
		accuracy = 0.2;
		class DestructionEffects{};
	};
	class Obstacle_saddle: NonStrategic
	{
		animated = 0;
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		vehicleClass = "training";
		displayName = "$STR_DN_OBSTACLE_SADDLE";
		model = "\ca\data\Library\obstacle_saddle.p3d";
		icon = "\ca\data\library\data\icons\obstacle_saddle_CA.paa";
		scope = 2;
		nameSound = "";
		accuracy = 0.2;
		class DestructionEffects{};
	};
	class RampConcrete: NonStrategic
	{
		animated = 0;
		vehicleClass = "training";
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		displayName = "$STR_DN_RAMPCONCRETE";
		model = "\ca\data\library\ramp_concrete.p3d";
		icon = "\ca\data\library\data\icons\ramp_concrete_CA.paa";
		scope = 2;
		nameSound = "";
		accuracy = 0.2;
		armor = 1000;
		destrType = "DestructBuilding";
		class DestructionEffects{};
	};
	class HumpsDirt: NonStrategic
	{
		animated = 0;
		vehicleClass = "training";
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		displayName = "$STR_DN_HUMPSDIRT_LARGE";
		model = "\ca\data\library\humps_dirt.p3d";
		icon = "\ca\data\library\data\icons\humps_dirt_CA.paa";
		scope = 2;
		nameSound = "";
		armor = 1000;
		accuracy = 0.2;
		destrType = "DestructBuilding";
		class DestructionEffects{};
	};
	class BuoySmall: Ship
	{
		vehicleClass = "signs";
		maxSpeed = 0;
		fuelCapacity = 0;
		hasDriver = 0;
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		cost = 100;
		threat[] = {0,0,0};
		mapSize = 0.1;
		displayName = "$STR_DN_BUOYSMALL";
		model = "\ca\data\library\Buoy_small.p3d";
		icon = "\ca\data\library\data\icons\Buoy_small_CA.paa";
		scope = 2;
		nameSound = "";
		class DestructionEffects{};
		accuracy = 0.2;
		camouflage = 0.001;
		audible = 0.001;
		armor = 50;
		class turrets{};
	};
	class BuoyBig: Ship
	{
		vehicleClass = "signs";
		maxSpeed = 0;
		fuelCapacity = 0;
		hasDriver = 0;
		weapons[] = {};
		magazines[] = {};
		irTarget = 0;
		cost = 100;
		threat[] = {0,0,0};
		mapSize = 0.1;
		displayName = "$STR_DN_BUOY";
		model = "\ca\data\library\Buoy.p3d";
		icon = "\ca\data\library\data\icons\Buoy_CA.paa";
		class MarkerLights
		{
			class WhiteBlinking
			{
				name = "bily pozicni blik";
				color[] = {1.0,1.0,1.0,1};
				ambient[] = {0.1,0.1,0.1,1};
				brightness = 0.02;
				blinking = 1;
			};
		};
		scope = 2;
		nameSound = "";
		class DestructionEffects{};
		accuracy = 0.2;
		camouflage = 0.001;
		audible = 0.001;
		armor = 50;
		class turrets{};
	};
	class RoadBarrier_light: NonStrategic
	{
		animated = 0;
		vehicleClass = "signs";
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		mapSize = 0.1;
		displayName = "$STR_DN_ROADBARRIER_LIGHT";
		model = "\ca\data\library\RoadBarrier_light.p3d";
		icon = "\ca\data\library\data\icons\RoadBarrier_light_CA.paa";
		scope = 2;
		class DestructionEffects{};
		destrType = "DestructTree";
		accuracy = 0.2;
		cost = 0;
		armor = 200;
		class MarkerLights
		{
			class YellowBlinking
			{
				name = "zluty pozicni blik";
				color[] = {0.99,0.69,0.17,1.0};
				ambient[] = {0.099,0.069,0.017,1.0};
				brightness = 0.01;
				blinking = 1;
			};
		};
	};
	class CubeHelper: NonStrategic
	{
		animated = 0;
		vehicleClass = "test";
		typicalCargo[] = {};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		mapSize = 0.1;
		displayName = "$STR_DN_CUBEHELPER";
		model = "\ca\data\cube";
		scope = 1;
		class DestructionEffects{};
		destrType = "DestructNo";
		accuracy = 0.2;
		cost = 0;
	};
	class RoadBarrier_long: RoadBarrier_light
	{
		displayName = "$STR_DN_ROADBARRIER_LONG";
		model = "\ca\data\library\RoadBarrier_long.p3d";
		icon = "\ca\data\library\data\icons\RoadBarrier_long_CA.paa";
		mapSize = 0.2;
	};
	class PaperCar: Car
	{
		model = "\ca\data\papAuto";
	};
};
class CfgNonAIVehicles
{
	class ProxyCommander;
	class ProxyDriver;
	class ProxyGunner;
	class ProxyCargo;
	class ProxyPilot: ProxyDriver{};
	class ProxyCommanderOut: ProxyCommander{};
	class ProxyDriverOut: ProxyDriver{};
	class ProxyGunnerOut: ProxyGunner{};
	class ProxyGunner01: ProxyGunner{};
	class ProxyCargoStanding: ProxyCargo{};
	class ProxyBasicMotoDriver: ProxyDriver{};
	class ProxyCargo01: ProxyCargo{};
	class ProxyCargo02: ProxyCargo{};
	class ProxyCargo03: ProxyCargo{};
};
class CfgOpticsEffect
{
	class TankGunnerOptics1
	{
		type = "ColorCorrections";
		priority = 1550;
		params[] = {1,1,0,0,0,0,0,1,1.0,0.2,0.6,0.199,0.587,0.114,0};
	};
	class TankGunnerOptics2
	{
		type = "ColorCorrections";
		priority = 1550;
		params[] = {1,1,0,0,0,0,0,1,1.0,0.2,0.8,0.199,0.25,0.114,0};
	};
	class TankCommanderOptics1
	{
		type = "FilmGrain";
		priority = 2050;
		params[] = {0.05,1,1,0.35,1,0};
	};
	class OpticsInverted
	{
		type = "colorInversion";
		priority = 2550;
		params[] = {1,1,1};
	};
	class BWTV
	{
		type = "ColorCorrections";
		priority = 1550;
		params[] = {1,2,-0.03,0.0,0.0,0.0,0.0,1.0,1.0,1.0,0.0,0.199,0.587,0.114,0.0};
	};
	class WeaponsOptics
	{
		type = "dynamicblur";
		priority = 450;
		params[] = {0.05};
	};
	class OpticsBlur1
	{
		type = "dynamicblur";
		priority = 450;
		params[] = {0.0025};
	};
	class OpticsBlur2
	{
		type = "dynamicblur";
		priority = 450;
		params[] = {0.005};
	};
	class OpticsBlur3
	{
		type = "dynamicblur";
		priority = 450;
		params[] = {0.01};
	};
	class OpticsCHAbera1
	{
		type = "chromaberration";
		priority = 250;
		params[] = {0.004,0.004,1};
	};
	class OpticsCHAbera2
	{
		type = "chromaberration";
		priority = 250;
		params[] = {0.006,0.006,1};
	};
	class OpticsCHAbera3
	{
		type = "chromaberration";
		priority = 250;
		params[] = {0.008,0.008,1};
	};
};
//};
