////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:28 2014 : Source 'file' date Fri Oct 31 06:04:28 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class editor : config.bin{
class CfgPatches
{
	class CA_Editor
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData"};
	};
};
class CfgEditorObjects
{
	prefix_editor = "ca\editor\data\scripts\prefix.hpp";
	postfix_editor = "ca\editor\data\scripts\postfix.hpp";
	center = "ca\editor\data\scripts\center.hpp";
	group = "ca\editor\data\scripts\group.hpp";
	unit = "ca\editor\data\scripts\unit.hpp";
	vehicle = "ca\editor\data\scripts\vehicle.hpp";
	soundSource = "ca\editor\data\scripts\soundSource.hpp";
	mine = "ca\editor\data\scripts\mine.hpp";
	intel = "ca\editor\data\scripts\intel.hpp";
	marker = "ca\editor\data\scripts\marker.hpp";
	trigger = "ca\editor\data\scripts\trigger.hpp";
	waypoint = "ca\editor\data\scripts\waypoint.hpp";
	guardedPoint = "ca\editor\data\scripts\guardedPoint.hpp";
	location = "ca\editor\data\scripts\location.hpp";
	dynOGrabber = "ca\editor\data\scripts\dynOGrabber.hpp";
	objectComposition = "ca\editor\data\scripts\objectComposition.hpp";
};
class RscDisplayMissionEditor
{
	class ControlsBackground{};
	class Controls{};
	class Menu{};
};
class CfgNonAIVehicles
{
	class Editor_Proxy_Composition
	{
		scope = 1;
		model = "\ca\editor\data\composition_proxy\composition_proxy";
		displayName = "Editor proxy - Object composition";
		autocenter = 0;
		reversed = 0;
		animated = 0;
		simulation = "flag";
		selectionFabric = "";
	};
};
//};
