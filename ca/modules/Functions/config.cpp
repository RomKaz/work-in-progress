////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:58 2014 : Source 'file' date Fri Oct 31 06:04:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : Functions\config.bin{
class CfgPatches
{
	class CA_Modules_Functions
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class LocationLogics
	{
		displayName = "$STR_WF2_GL_LOCATIONS";
	};
};
class CfgVehicles
{
	class Logic;
	class FunctionsManager: Logic
	{
		displayName = "$STR_FUNCTIONS_NAME";
		icon = "\ca\ui\data\icon_functions_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "textLogFormat ['PRELOAD_ Functions\init %1', [_this, BIS_functions_mainscope]]; 	if (isnil 'BIS_functions_mainscope') then 	{ BIS_functions_mainscope = _this select 0;  if (isServer) then {_this execVM 'ca\modules\functions\main.sqf'};} else {_this spawn { textLogFormat ['PRELOAD_ Functions\init  ERROR: deleting redundant FM! %1', [_this, (_this select 0), BIS_functions_mainscope]]; _mygrp = group (_this select 0); deleteVehicle (_this select 0); deleteGroup _mygrp;};}; 			  if (isnil 'RE') then {[] execVM '\ca\Modules\MP\data\scripts\MPframework.sqf'};	";
		};
	};
	class PreloadManager: Logic
	{
		displayName = "$STR_PRELOAD_NAME";
		icon = "\ca\ui\data\icon_functions_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "onPreloadStarted {BIS_PRELOAD_ARRAY=[];textLogFormat['PRELOAD_ Preload Manager - onPreloadStarted, _maxTime %1 timenow %2',_maxTime,time];startLoadingScreen[localize 'str_load_game','RscDisplayLoadMission'];};onPreloadFinished {	textLogFormat['PRELOAD_  Preload Manager - onPreloadFinished T %1',time];	startLoadingScreen['','RscDisplayLoadMission'];	endLoadingScreen;			};	";
		};
	};
	class LocationLogic: Logic
	{
		vehicleClass = "LocationLogics";
		displayName = "$STR_WF2_GL_LOCATION";
		icon = "\ca\modules\functions\images\LocationLogicBlank.paa";
	};
	class LocationLogicAirport: LocationLogic
	{
		displayName = "$STR_WF2_GL_AIRPORT";
	};
	class LocationLogicFlat: LocationLogic
	{
		displayName = "$STR_WF2_GL_OPEN_PLACE";
	};
	class LocationLogicCamp: LocationLogic
	{
		displayName = "$STR_WF2_GL_CAMP";
		icon = "\ca\modules\functions\images\LocationLogicCamp.paa";
	};
	class LocationLogicCityCenter: LocationLogic
	{
		displayName = "$STR_WF2_GL_CITY_CENTER";
	};
	class LocationLogicCityLink: LocationLogic
	{
		displayName = "$STR_WF2_GL_CITY_LINK";
		icon = "\ca\modules\functions\images\LocationLogicCityLink.paa";
	};
	class LocationLogicCityFlatArea: LocationLogic
	{
		displayName = "$STR_WF2_GL_CITY_FLAT_AREA";
	};
	class LocationLogicDepot: LocationLogic
	{
		displayName = "$STR_WF2_GL_DEPOT";
		icon = "\ca\modules\functions\images\LocationLogicDepot.paa";
	};
	class LocationLogicCity: LocationLogicCityCenter
	{
		displayName = "$STR_WF2_GL_CITY";
		icon = "\ca\modules\functions\images\LocationLogicCity.paa";
	};
	class LocationLogicOwnerCivilian: LocationLogic
	{
		displayName = "$STR_WF2_GL_CIV";
		icon = "\ca\modules\functions\images\LocationLogicOwnerCivilian.paa";
	};
	class LocationLogicOwnerEast: LocationLogic
	{
		displayName = "$STR_WF2_GL_OPFOR";
		icon = "\ca\modules\functions\images\LocationLogicOwnerEast.paa";
	};
	class LocationLogicOwnerWest: LocationLogic
	{
		displayName = "$STR_WF2_GL_BLUFOR";
		icon = "\ca\modules\functions\images\LocationLogicOwnerWest.paa";
	};
	class LocationLogicOwnerResistance: LocationLogic
	{
		displayName = "$STR_WF2_GL_IND";
		icon = "\ca\modules\functions\images\LocationLogicOwnerResistance.paa";
	};
	class LocationLogicStart: LocationLogic
	{
		displayName = "$STR_WF2_GL_START";
		icon = "\ca\modules\functions\images\LocationLogicStart.paa";
	};
};
class cfgFunctions
{
	access = 0;
	class BIS
	{
		class arrays
		{
			class selectRandomWeighted
			{
				description = "Randomly select an item from an array, considering item weights.";
			};
			class findNestedElement
			{
				description = "Return the path to an element in an (nested) array.";
			};
			class returnNestedElement
			{
				description = "Return an item at a path in an (nested) array.";
			};
			class setNestedElement
			{
				description = "Set an item in an (nested) array using a path.";
			};
			class removeNestedElement
			{
				description = "Remove an item in an (nested) array.";
			};
			class maxDiffArray
			{
				description = "Return the maximum difference between all values in an array.";
			};
			class removeIndex
			{
				description = "Takes an array, and returns a new array with the specified index(es) removed";
			};
			class selectRandom
			{
				description = "Returns a randomly selected element from an array";
			};
			class randomIndex
			{
				description = "Returns a random integer representing an index in the passed array";
			};
			class arrayPush
			{
				description = "Adds an element to the end of an array and returns the array";
			};
			class arrayPushStack
			{
				description = "Pushes a stack (array) of elements onto the end of an array";
			};
			class arrayPop
			{
				description = "Removes the last (rightmost) element of an array and returns it";
			};
			class arrayShift
			{
				description = "Removes the first (leftmost) element of an array and returns it";
			};
			class arrayUnShift
			{
				description = "Adds an element to the beginning of an array and returns the array";
			};
			class arrayCompare
			{
				description = "Checks whether two arrays are exactly the same (note this can also be checked via BIS_fnc_areEqual)";
			};
			class arrayFindDeep
			{
				description = "Searches an element in an array and returns the first occurrence";
			};
			class conditionalSelect
			{
				description = "Returns a sub-array of elements that satisfy a specific condition";
			};
			class subSelect
			{
				description = "Returns a sub-selection of the passed array. There are various methods the sub-array can be determined";
			};
			class arrayInsert
			{
				description = "Inserts the elements of one array into another, at a specified index";
			};
		};
		class configs
		{
			class classWeapon
			{
				description = "Returns class of weapon given by string";
			};
			class classMagazine
			{
				description = "Returns class of magazine given by string";
			};
			class returnConfigEntry
			{
				description = "Explores parent classes in the run-time config for the value of a config entry";
			};
			class returnParents
			{
				description = "Returns list of all parent classes";
			};
		};
		class diagnostic
		{
			class diagAnim
			{
				description = "Animation diagnostic function - displays or logs animation states.";
			};
			class fps
			{
				description = "Measures FPS";
			};
		};
		class geometry
		{
			class dirTo
			{
				description = "Returns the compass direction from one object/postion to another";
			};
			class relativeDirTo
			{
				description = "Returns the relative direction from one object to another object/position";
			};
			class relPos
			{
				description = "Returns a position that is a specified distance and compass direction from the passed position or object";
			};
			class distance2D
			{
				description = "Returns the distance between the two objects or positions 'as the crow flies' (ignoring elevation)";
			};
			class distance2Dsqr
			{
				description = "Same as fn_distance2D, but returns the SQUARED distance. This function is a little faster than fn_distance2D";
			};
			class getLineDist
			{
				description = "Returns the distance between two sections of a straight line";
			};
			class inAngleSector
			{
				description = "Use this function to determine if a position lies within a certain angle from another position";
			};
		};
		class inventory
		{
			class inv
			{
				description = "Returns inventory contents of unit - item classes";
			};
			class invAdd
			{
				description = "Adds item to inventory of unit if there is place for it";
			};
			class invRemove
			{
				description = "Removes item(s). Returns number of removed items.";
			};
			class invCodeToArray
			{
				description = "Converts config inventory code to array with numbers for respective slots.";
			};
			class invString
			{
				description = "Returns inventory contents of unit - item names";
			};
			class invSlots
			{
				description = "Returns total inventory slots for unit";
			};
			class invSlotsEmpty
			{
				description = "Returns empty slots for unit";
			};
			class invSlotType
			{
				description = "Returns type of inventory slot for given item";
			};
		};
		class misc
		{
			class help
			{
				description = "List of all available functions";
			};
			class findSafePos
			{
				description = "Returns safe pos according to input params";
			};
			class getFactions
			{
				description = "Get list of factions or their IDs";
			};
			class inTrigger
			{
				description = "Returns if objects is in trigger area";
			};
			class isPosBlacklisted
			{
				description = "Returns if position is blacklisted";
			};
			class listPlayers
			{
				description = "Returns an array of all players and playable units";
			};
			class PosToGrid
			{
				description = "Converts world coordinates into map grid coordinates";
			};
			class nearestPosition
			{
				description = "Returns nearest Object or position compared to the position of a given Object or position";
			};
			class createmenu
			{
				description = "Create commanding menu (with pages)";
			};
			class colorRGBtoHTML
			{
				description = "Converts RGB color format to HTML color format";
			};
			class addEvidence
			{
				description = "Add an evidnce value to global campaign variable";
			};
			class taskHandler
			{
				description = "Automatically sets tasks as current";
			};
			class saveGame
			{
				description = "Prevents inconvenient autosaves";
			};
			class threat
			{
				description = "Calculates threat level of given unit.";
			};
			class recompile
			{
				description = "Recompiles all functions.";
			};
			class commsMenuCreate
			{
				description = "Creates the global communications menu, if it's not already created.";
			};
			class commsMenuToggleVisibility
			{
				description = "Shows or hides certain sections of the global communications menu.";
			};
			class commsMenuToggleAvailability
			{
				description = "Enables or disables certain sections of the global communications menu.";
			};
			class version
			{
				description = "Identifies available expansions.";
			};
		};
		class numbers
		{
			class randomNum
			{
				description = "Returns a random number between two endpoints";
			};
			class randomInt
			{
				description = "Returns a random integer between two endpoints";
			};
			class arithmeticMean
			{
				description = "Returns the arithmetic mean (average) of an array of numbers";
			};
			class geometricMean
			{
				description = "Returns the geometric mean (weighted average) of an array of numbers";
			};
			class cutDecimals
			{
				description = "Returns the rounded number with given amount of decimal places";
			};
			class greatestNum
			{
				description = "Returns the highest number out of the passed set";
			};
			class lowestNum
			{
				description = "Returns the lowest number out of the passed set";
			};
			class nearestNum
			{
				description = "Returns the number out of the set which is closest to the target number";
			};
			class sortNum
			{
				description = "Sorts an array of numbers from lowest (left) to highest (right)";
			};
			class roundNum
			{
				description = "Round a number to the provided factor";
			};
		};
		class objects
		{
			class isInFrontOf
			{
				description = "Checks, if a object is in front of another object";
			};
			class setPitchBank
			{
				description = "Rotates an object, giving it the specified pitch and bank, in degrees";
			};
			class getPitchBank
			{
				description = "Returns the pitch and bank of an object, in degrees";
			};
		};
		class scenes
		{
			class sceneGetParticipants
			{
				description = "Returns all units from group which are in specified range";
			};
			class sceneGetPositionByAngle
			{
				description = "Returns coordinates calculated from given angle and distance from specified object";
			};
			class sceneSetPosFormation
			{
				description = "Sets formation for a group (circle, halfcircle, line), (uses BIS_fnc_sceneGetPositionByAngle)";
			};
			class sceneSetAnimationsForGroup
			{
				description = "Runs animations on units of group by given animation and group array  ";
			};
			class sceneSetBehaviour
			{
				description = "Enables/disables AI (move, target, etc...) - usefull for scenes ";
			};
			class sceneCreateSceneTrigger
			{
				description = "Create trigger for scene which can interrupt scene with name passed during creating the trigger";
			};
			class miscanim
			{
				description = "Library animations";
			};
			class sceneRotate
			{
				description = "Compute new object coordinates from given center and angle from MOTION BUILDER - rotates object around the center";
			};
			class sceneSetObjects
			{
				description = "1. part of s.c.e.n.e";
			};
			class sceneGetObjects
			{
				description = "2. part of s.c.e.n.e";
			};
			class sceneMiscStuff
			{
				description = "Does the basic minor scenes stuff like activating cinema borders, disallowing map, etc";
			};
			class zzRotate
			{
				description = "Rotates objects around given center about given angle ";
			};
			class sceneCheckWeapons
			{
				description = "Checks if participants have the correct weapons for scene";
			};
			class sceneCreateSoundEntities
			{
				description = "creates sound logig entities and attaches them to a characters";
			};
			class sceneAreaClearance
			{
				description = "Clearing scene area from unwanted objects";
			};
			class sceneIntruderDetector
			{
				description = "Checks if there are intruders during scene. If yes, script disables them.";
			};
		};
		class strings
		{
			class timeToString
			{
				description = "Passed the results of the 'daytime' command, returns time formatted as a string";
			};
		};
		class systems
		{
			class transportService
			{
				description = "Transportation system";
			};
			class supplydropService
			{
				description = "Supply drop system. Controls behavior of air vehicle - approaching and leaving drop zone.";
			};
			class supplydrop
			{
				description = "Drops object from air vehicle. Parachute size depends on dropped class.";
			};
			class respect
			{
				description = "RESpect - The Effective Calculation Process.";
			};
			class showTime
			{
				description = "Shows time gap between two dates";
			};
			class locations
			{
				description = "Spawns location game logics on locations (map-baked / created with createLocation). Locations are local on network. Game logics global.";
			};
		};
		class variables
		{
			class undefCheck
			{
				description = "Debug function - checks if given variable is undef - if yes, debuglogs and sets to default";
			};
			class areEqual
			{
				description = "Returns true if all of the passed data are identical. This function can safely compare all data types, even if data types are mixed or nil";
			};
			class swapVars
			{
				description = "Swaps the values of two variables, passed in quotes";
			};
			class variableSpaceAdd
			{
				description = "Add element to variable from someone's variable space.";
			};
			class variableSpaceRemove
			{
				description = "Remove element to variable from someone's variable space.";
			};
		};
		class vectors
		{
			class crossProduct
			{
				description = "Returns cross product between two 3d vectors";
			};
			class dotProduct
			{
				description = "Returns the dot product of two vectors of any dimension";
			};
			class magnitude
			{
				description = "Returns the magnitude of a vector of any dimension";
			};
			class magnitudeSqr
			{
				description = "Same as BIS_fnc_magnitude, but returns the SQUARED magnitude. This function is a little faster than BIS_fnc_magnitude";
			};
			class unitVector
			{
				description = "Returns the unit vector for the passed vector of any dimension";
			};
			class vectorMultiply
			{
				description = "Returns the unit vector for the passed vector of any dimension";
			};
			class vectorDiff
			{
				description = "Returns <vector> multiplied by <scalar>";
			};
			class vectorAdd
			{
				description = "Returns a vector that is the sum of <vector1> and <vector2>";
			};
			class vectorFromXToY
			{
				description = "Returns a unit vector that 'points' from <vector1> to <vector2>";
			};
			class rotateVector2D
			{
				description = "Returns a 2D vector rotated a specified number of degrees around the origin";
			};
		};
		class vehicles
		{
			class absSpeed
			{
				description = "Returns the absolute speed of a vehicle in 3D (km/h)";
			};
		};
		class spawning
		{
			class spawnGroup
			{
				description = "Handles the spawning of a dynamic group of characters";
			};
			class returnGroupComposition
			{
				description = "Returns a logical group composition based on a number of parameters";
			};
			class spawnVehicle
			{
				description = "Spawn a certain vehicle type with all crew (including turrets)";
			};
			class spawnCrew
			{
				description = "Fill all crew positions in a vehicle, including turrets";
			};
			class selectCrew
			{
				description = "Return an appropriate crew type for a certain vehicle";
			};
			class taskPatrol
			{
				description = "Create a random patrol of several waypoints around a given position";
			};
			class taskDefend
			{
				description = "Group will man nearby static defenses and guard the position";
			};
			class taskAttack
			{
				description = "Group will attack the position";
			};
			class returnVehicleTurrets
			{
				description = "Returns path to all turrets and sub-turrets in a vehicle";
			};
			class ObjectsMapper
			{
				description = "Dynamic Objects Mapper";
				file = "ca\modules\dyno\data\scripts\objectmapper.sqf";
			};
			class ObjectsGrabber
			{
				description = "Dynamic Objects Grabber";
				file = "ca\modules\dyno\data\scripts\objectgrabber.sqf";
			};
		};
	};
};
//};
