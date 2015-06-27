////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:59 2014 : Source 'file' date Fri Oct 31 06:04:59 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class MODULES_PMC : functions\config.bin{
class CfgPatches
{
	class CA_Modules_PMC_Functions
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class cfgFunctions
{
	class BIS
	{
		class PMC_GUI
		{
			file = "ca\modules_pmc\functions\GUI";
			class customGPS
			{
				description = "Custom GPS frame.";
			};
			class customGPSVideo
			{
				description = "Plays video in GPS frame.";
			};
			class 3Dcredits
			{
				description = "3D credits.";
			};
			class dirIndicator
			{
				description = "Direction indicator.";
			};
			class playVideo
			{
				description = "Plays ingame video.";
			};
		};
		class PMC_Environment
		{
			file = "ca\modules_pmc\functions\Environment";
			class sandstorm
			{
				description = "Sandstorm particle effects.";
			};
			class crows
			{
				description = "Flock of crows.";
			};
			class destroyCity
			{
				description = "Destroys building in given area based on input seed.";
			};
			class flies
			{
				description = "Flies around dead bodies.";
			};
		};
		class PMC_Spawning
		{
			file = "ca\modules_pmc\functions\Spawning";
			class spawnEnemy
			{
				description = "Spawn enemies around players.";
			};
		};
	};
	class BIS_PMC
	{
		class PMC_Campaign
		{
			file = "ca\modules_pmc\functions\Campaign";
			class pauseOnLoad
			{
				description = "Pause menu script.";
			};
			class initMission
			{
				description = "Mission init.";
			};
			class initScene
			{
				description = "Scene init.";
			};
			class exitMission
			{
				description = "Mission exit.";
			};
			class missionLogo
			{
				description = "Mission logo.";
			};
			class savegame
			{
				description = "Saves game when conditions are met.";
			};
		};
	};
};
//};
