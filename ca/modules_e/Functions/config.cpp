////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:08 2014 : Source 'file' date Fri Oct 31 06:11:08 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules_e : Functions\config.bin{
class CfgPatches
{
	class CA_Modules_E_Functions
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
		class EP1_GUI
		{
			file = "ca\modules_e\functions\GUI";
			class AAN
			{
				description = "AAN overlay";
			};
			class infoText
			{
				description = "Text in bottom right corner";
			};
			class dynamicText
			{
				description = "Dynamic credits";
			};
		};
		class EP1_misc
		{
			file = "ca\modules_e\functions\misc";
			class configviewer
			{
				description = "Config Viewer";
			};
			class halo
			{
				description = "High Altitude Low Opening";
			};
			class music
			{
				description = "Jukebox";
			};
		};
		class EP1_objects
		{
			file = "ca\modules_e\functions\objects";
			class boundingBoxCorner
			{
				description = "Returns all bounding box corners. If position is given as second param, nearest one is returned.";
			};
			class boundingBoxMarker
			{
				description = "Creates marker on object with size of objects' bounding box.";
			};
			class boundingBoxDimensions
			{
				description = "Returns the sizes of the three dimension of an object's bounding box.";
			};
			class boundingCircle
			{
				description = "Returns size of bounding circle (similar to bounding sphere, but in x and y coordinates only).";
			};
		};
		class EP1_scenes
		{
			file = "ca\modules_e\functions\scenes";
			class UnitCapture
			{
				description = "Records movement data of input unit over a specified period of time. If the 4th parameter set to true, will record weapons fire data as well.";
			};
			class UnitCaptureFiring
			{
				description = "Records weapon fire data of input unit over a specified period of time.";
			};
			class UnitCaptureSimple
			{
				description = "(Simplified) Records only movement and dir data of input unit over a specified period of time. If the 4th parameter set to true, will record weapons fire data as well.";
			};
			class UnitPlay
			{
				description = "Plays back input movement data on input unit. The data can be pre-recorded using the UnitCapture script.";
			};
			class UnitPlaySimple
			{
				description = "(Simplified) Plays back input movement and dir data on input unit. The data can be pre-recorded using the UnitCaptureSimple script.";
			};
			class UnitPlayFiring
			{
				description = "Plays back input weapon fire data on input unit. The data can be pre-recorded using the UnitCapture or UnitCaptureFiring script.";
			};
		};
		class EP1_systems
		{
			file = "ca\modules_e\functions\systems";
			class FTLmanager
			{
				description = "FTL tracks relationship between player and civilian side. Depending on players actions the FTL value increases or decreases";
			};
			class RespawnManager
			{
				description = "Manages CHECKPOINTS in a mission. Returns the nearest checkpoint in the time AI/player was killed.";
			};
			class spotter
			{
				description = "Spotter giving sniper info about distance.";
			};
		};
		class EP1_hints
		{
			file = "ca\modules_e\functions\hints";
			class hints
			{
				description = "Advanced hint system.";
			};
		};
		class EP1_numbers
		{
			file = "ca\modules_e\functions\numbers";
			class linearConversion
			{
				description = "Linear conversion of a value from one set to another.";
			};
		};
		class EP1_arrays
		{
			file = "ca\modules_e\functions\arrays";
			class findExtreme
			{
				description = "Returns the minimum or maximum value in an Array.";
			};
		};
	};
};
//};
