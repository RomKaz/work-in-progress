////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:09 2014 : Source 'file' date Fri Oct 31 06:11:09 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class mp_armory : armory_mp\config.bin{
class CfgPatches
{
	class CA_MPA_MP
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAData","CAWeapons"};
	};
};
class CfgHQIdentities
{
	class ARMEX
	{
		name = "ARMEX";
		speaker = "Male01EN";
		pitch = 0.95;
	};
};
class CfgVehicles
{
	class Logic;
	class ArmoryMPManager: Logic
	{
		displayName = "$STR_EP1_MPA_ARMORYMPMANAGER";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "private [""_ok""]; _ok = (_this select 0) execVM ""ca\mp_armory\armory_mp\data\scripts\init.sqf""";
		};
	};
	class WeaponHolder;
	class WeaponHolder_MPA: WeaponHolder
	{
		forceSupply = 0;
	};
};
class CfgOO
{
	class Armory
	{
		class Attributes
		{
			class teamPoints
			{
				type = "SCALAR";
			};
			class players
			{
				type = "ARRAY";
			};
			class phase
			{
				type = "SCALAR";
			};
			class timeLimit
			{
				type = "SCALAR";
			};
			class pointLimit
			{
				type = "SCALAR";
			};
			class pointLimitAppliedTo
			{
				type = "SCALAR";
			};
			class blacklist
			{
				type = "ARRAY";
			};
			class codeStream
			{
				type = "SCALAR";
				defaultValue = 1;
			};
		};
		class Methods
		{
			class Armory
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Armory\Armory.sqf";
			};
			class joinSession
			{
				parameterTypes[] = {"OBJECT","OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Armory\joinSession.sqf";
			};
			class processEvent
			{
				parameterTypes[] = {"OBJECT","ARRAY"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Armory\processEvent.sqf";
			};
			class addPlayer
			{
				parameterTypes[] = {"OBJECT","OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Armory\addPlayer.sqf";
			};
			class removePlayer
			{
				parameterTypes[] = {"OBJECT","OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Armory\removePlayer.sqf";
			};
			class removePlayer1
			{
				parameterTypes[] = {"OBJECT","STRING"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Armory\removePlayer1.sqf";
			};
			class sendCode
			{
				parameterTypes[] = {"OBJECT","ARRAY","SCALAR"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Armory\sendCode.sqf";
			};
			class sessionBriefing
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Armory\sessionBriefing.sqf";
			};
			class addTeamPoints
			{
				parameterTypes[] = {"OBJECT","SCALAR"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Armory\addTeamPoints.sqf";
			};
			class showDebriefing
			{
				parameterTypes[] = {"OBJECT","SCALAR"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Armory\showDebriefing.sqf";
			};
			class isNight
			{
				returnType = "BOOL";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Armory\isNight.sqf";
			};
			class fastTravel
			{
				parameterTypes[] = {"ARRAY","ARRAY"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Armory\fastTravel.sqf";
			};
		};
	};
	class Player
	{
		class Attributes
		{
			class uid
			{
				type = "STRING";
			};
			class selectedItem
			{
				type = "SCALAR";
				defaultValue = -1;
			};
			class selectedItemType
			{
				type = "SCALAR";
				defaultValue = -1;
			};
			class metaChallenged
			{
				type = "BOOL";
			};
			class lastMetaChallengeEnd
			{
				type = "SCALAR";
			};
			class metaChallenges
			{
				type = "ARRAY";
			};
			class points
			{
				type = "SCALAR";
			};
			class fastTraveling
			{
				type = "BOOL";
			};
			class fastTravelDestination
			{
				type = "ARRAY";
			};
			class group
			{
				type = "GROUP";
			};
			class spectating
			{
				type = "BOOL";
			};
			class respawning
			{
				type = "BOOL";
			};
			class challengeTask
			{
				type = "TASK";
			};
			class operationItem
			{
				type = "OBJECT";
			};
		};
		class Methods
		{
			class Player
			{
				parameterTypes[] = {"OBJECT","OBJECT","STRING"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Player\Player.sqf";
			};
			class respawn
			{
				parameterTypes[] = {"OBJECT","OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Player\respawn.sqf";
			};
			class determineNewness
			{
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Player\determineNewness.sqf";
			};
			class setSelectedItem
			{
				parameterTypes[] = {"OBJECT","SCALAR","SCALAR"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Player\setSelectedItem.sqf";
			};
			class addPoints
			{
				parameterTypes[] = {"OBJECT","SCALAR"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Player\addPoints.sqf";
			};
			class getUsingItems
			{
				parameterTypes[] = {"OBJECT"};
				returnType = "ARRAY";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Player\getUsingItems.sqf";
			};
			class fastTravel
			{
				parameterTypes[] = {"OBJECT","ARRAY"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Player\fastTravel.sqf";
			};
			class addMetaChallenge
			{
				parameterTypes[] = {"OBJECT","OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Player\addMetaChallenge.sqf";
			};
			class removeMetaChallenge
			{
				parameterTypes[] = {"OBJECT","OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Player\removeMetaChallenge.sqf";
			};
			class startSpectating
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Player\startSpectating.sqf";
			};
			class stopSpectating
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Player\stopSpectating.sqf";
			};
		};
	};
	class AssistanceManager
	{
		class Attributes
		{
			class level
			{
				type = "SCALAR";
				defaultValue = -1;
			};
			class player
			{
				type = "OBJECT";
			};
			class hintsEnabled
			{
				type = "BOOL";
				defaultValue = "true";
			};
			class playingTutorial
			{
				type = "BOOL";
			};
		};
		class Methods
		{
			class AssistanceManager
			{
				parameterTypes[] = {"OBJECT","OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\AssistanceManager\AssistanceManager.sqf";
			};
			class getHint
			{
				parameterTypes[] = {"OBJECT"};
				returnType = "ARRAY";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\AssistanceManager\getHint.sqf";
			};
			class showHint
			{
				parameterTypes[] = {"OBJECT","ARRAY"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\AssistanceManager\showHint.sqf";
			};
		};
	};
	class Database
	{
		class Methods
		{
			class Database
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\Database.sqf";
			};
			class getConfigEntries
			{
				parameterTypes[] = {"OBJECT"};
				returnType = "ARRAY";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\getConfigEntries.sqf";
			};
			class getRecords
			{
				parameterTypes[] = {"OBJECT","ARRAY","ARRAY"};
				returnType = "ARRAY";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\getRecords.sqf";
			};
			class getRandomRecords
			{
				parameterTypes[] = {"OBJECT","ARRAY","ARRAY","SCALAR"};
				returnType = "ARRAY";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\getRandomRecords.sqf";
			};
			class getRandomItem
			{
				parameterTypes[] = {"OBJECT","ARRAY"};
				returnType = "SCALAR";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\getRandomItem.sqf";
			};
			class isWeapon
			{
				parameterTypes[] = {"SCALAR"};
				returnType = "BOOL";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\isWeapon.sqf";
			};
			class hasWeapon
			{
				parameterTypes[] = {"SCALAR"};
				returnType = "BOOL";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\hasWeapon.sqf";
			};
			class canTransport
			{
				parameterTypes[] = {"SCALAR"};
				returnType = "SCALAR";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\canTransport.sqf";
			};
			class isAmphibious
			{
				parameterTypes[] = {"SCALAR"};
				returnType = "ARRAY";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\isAmphibious.sqf";
			};
			class hasVTOL
			{
				parameterTypes[] = {"SCALAR"};
				returnType = "BOOL";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\hasVTOL.sqf";
			};
			class getMagazines
			{
				parameterTypes[] = {"SCALAR"};
				returnType = "ARRAY";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\getMagazines.sqf";
			};
			class getMaxSpeed
			{
				parameterTypes[] = {"SCALAR"};
				returnType = "SCALAR";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\getMaxSpeed.sqf";
			};
			class getWeaponSlots
			{
				parameterTypes[] = {"SCALAR"};
				returnType = "ARRAY";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\getWeaponSlots.sqf";
			};
			class getRequiredWeaponSlots
			{
				parameterTypes[] = {"SCALAR"};
				returnType = "ARRAY";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\getRequiredWeaponSlots.sqf";
			};
			class getCrewType
			{
				parameterTypes[] = {"SCALAR"};
				returnType = "STRING";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\getCrewType.sqf";
			};
			class getPositionCount
			{
				parameterTypes[] = {"SCALAR"};
				returnType = "SCALAR";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\getPositionCount.sqf";
			};
			class getItem
			{
				parameterTypes[] = {"STRING"};
				returnType = "SCALAR";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\getItem.sqf";
			};
			class convertSide
			{
				returnType = "STRING";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\convertSide.sqf";
			};
			class getThreat
			{
				parameterTypes[] = {"SCALAR"};
				returnType = "ARRAY";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\getThreat.sqf";
			};
			class getForceMultiplier
			{
				parameterTypes[] = {"SCALAR"};
				returnType = "SCALAR";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Database\getForceMultiplier.sqf";
			};
		};
	};
	class Item
	{
		class Methods
		{
			class Item
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Item\Item.sqf";
			};
			class loadData
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Item\loadData.sqf";
			};
		};
	};
	class ARMEX
	{
		class Attributes
		{
			class defaultDaytime
			{
				type = "SCALAR";
			};
			class defaultOvercast
			{
				type = "SCALAR";
			};
			class defaultRain
			{
				type = "SCALAR";
			};
			class position
			{
				type = "ARRAY";
			};
			class radius
			{
				type = "SCALAR";
			};
			class lastBroadcast
			{
				type = "SCALAR";
			};
			class entry
			{
				type = "CONFIG";
			};
		};
		class Methods
		{
			class ARMEX
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\ARMEX\ARMEX.sqf";
			};
			class createAreas
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\ARMEX\createAreas.sqf";
			};
			class createObjects
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\ARMEX\createObjects.sqf";
			};
			class createItems
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\ARMEX\createItems.sqf";
			};
			class createItem
			{
				parameterTypes[] = {"OBJECT","ARRAY","ARRAY"};
				returnType = "OBJECT";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\ARMEX\createItem.sqf";
			};
			class createDirectionSigns
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\ARMEX\createDirectionSigns.sqf";
			};
			class start
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\ARMEX\start.sqf";
			};
			class restore
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\ARMEX\restore.sqf";
			};
		};
	};
	class GameMaster
	{
		class Attributes
		{
			class votes
			{
				type = "ARRAY";
			};
			class votePlayers
			{
				type = "ARRAY";
			};
			class selectedItems
			{
				type = "ARRAY";
			};
			class selectedItemPlayers
			{
				type = "ARRAY";
			};
			class challengePool
			{
				type = "ARRAY";
			};
			class challengePoolItems
			{
				type = "ARRAY";
			};
			class challengePlaylist
			{
				type = "ARRAY";
			};
			class challengeHistory
			{
				type = "ARRAY";
			};
			class challenge
			{
				type = "OBJECT";
			};
			class previousChallenge
			{
				type = "OBJECT";
			};
			class rankings
			{
				type = "ARRAY";
			};
			class rankingsData
			{
				type = "ARRAY";
			};
			class restartOperation
			{
				type = "BOOL";
			};
			class endType
			{
				type = "SCALAR";
			};
		};
		class Methods
		{
			class GameMaster
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\GameMaster.sqf";
			};
			class broadcastMessage
			{
				parameterTypes[] = {"OBJECT","STRING","ARRAY"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\broadcastMessage.sqf";
			};
			class startMetaChallenges
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\startMetaChallenges.sqf";
			};
			class processVote
			{
				parameterTypes[] = {"OBJECT","OBJECT","SCALAR"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\processVote.sqf";
			};
			class startOperation
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\startOperation.sqf";
			};
			class restartOperation
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\restartOperation.sqf";
			};
			class returnToARMEX
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\returnToARMEX.sqf";
			};
			class createChallengePool
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\createChallengePool.sqf";
			};
			class createChallengePlaylist
			{
				parameterTypes[] = {"OBJECT"};
				returnType = "ARRAY";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\createChallengePlaylist.sqf";
			};
			class startChallenge
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\startChallenge.sqf";
			};
			class startCooldown
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\startCooldown.sqf";
			};
			class createOperationItems
			{
				parameterTypes[] = {"OBJECT","ARRAY"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\createOperationItems.sqf";
			};
			class createOperationItem
			{
				parameterTypes[] = {"OBJECT","SCALAR","ARRAY","OBJECT"};
				returnType = "OBJECT";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\createOperationItem.sqf";
			};
			class getFriendlySide
			{
				parameterTypes[] = {"OBJECT","ARRAY"};
				returnType = "SCALAR";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\getFriendlySide.sqf";
			};
			class getEnemySide
			{
				parameterTypes[] = {"OBJECT","SCALAR"};
				returnType = "SCALAR";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\getEnemySide.sqf";
			};
			class showRemainingTime
			{
				parameterTypes[] = {"OBJECT","OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\showRemainingTime.sqf";
			};
			class spawnGear
			{
				parameterTypes[] = {"OBJECT","OBJECT","SCALAR"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\spawnGear.sqf";
			};
			class spawnGroup
			{
				parameterTypes[] = {"OBJECT","ARRAY","SCALAR","ARRAY"};
				returnType = "GROUP";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\spawnGroup.sqf";
			};
			class spawnItem
			{
				parameterTypes[] = {"OBJECT","ARRAY","SCALAR","GROUP"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\spawnItem.sqf";
			};
			class abortChallenge
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\abortChallenge.sqf";
			};
			class compileRankings
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\compileRankings.sqf";
			};
			class spawnCrew
			{
				parameterTypes[] = {"OBJECT","GROUP"};
				returnType = "ARRAY";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\spawnCrew.sqf";
			};
			class spawnTurretCrew
			{
				parameterTypes[] = {"ARRAY","ARRAY","OBJECT","GROUP","STRING"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\spawnTurretCrew.sqf";
			};
			class cleanVotes
			{
				parameterTypes[] = {"OBJECT","SCALAR"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GameMaster\cleanVotes.sqf";
			};
		};
	};
	class GarbageCollector
	{
		class Attributes
		{
			class queue
			{
				type = "ARRAY";
			};
		};
		class Methods
		{
			class GarbageCollector
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GarbageCollector\GarbageCollector.sqf";
			};
			class start
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GarbageCollector\start.sqf";
			};
			class trashContent
			{
				parameterTypes[] = {"OBJECT","ARRAY","BOOL"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GarbageCollector\trashContent.sqf";
			};
			class processQueue
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\GarbageCollector\processQueue.sqf";
			};
		};
	};
	class Challenge
	{
		class Attributes
		{
			class id
			{
				type = "SCALAR";
			};
			class entry
			{
				type = "CONFIG";
			};
			class position
			{
				type = "ARRAY";
			};
			class positionInsertion
			{
				type = "ARRAY";
			};
			class selectedItems
			{
				type = "ARRAY";
			};
			class selectedItemPlayers
			{
				type = "ARRAY";
			};
			class dynObjects
			{
				type = "ARRAY";
			};
			class dynGroups
			{
				type = "ARRAY";
			};
			class dynMarkers
			{
				type = "ARRAY";
			};
			class markers
			{
				type = "ARRAY";
			};
			class notes
			{
				type = "STRING";
			};
			class state
			{
				type = "SCALAR";
				defaultValue = -1;
			};
			class metaChallenges
			{
				type = "ARRAY";
			};
			class phase
			{
				type = "SCALAR";
			};
			class usingKeypoints
			{
				type = "BOOL";
			};
			class side
			{
				type = "SCALAR";
			};
			class realSide
			{
				type = "SIDE";
			};
			class enemySide
			{
				type = "SCALAR";
			};
			class simulatedTime
			{
				type = "SCALAR";
			};
			class simulatedWeather
			{
				type = "ARRAY";
			};
			class simulationDone
			{
				type = "BOOL";
			};
			class threats
			{
				type = "ARRAY";
			};
			class overallThreat
			{
				type = "ARRAY";
			};
			class forceMultipliers
			{
				type = "ARRAY";
			};
			class overallForceMultiplier
			{
				type = "SCALAR";
			};
			class enemyPotential
			{
				type = "ARRAY";
			};
			class group
			{
				type = "GROUP";
			};
		};
		class Methods
		{
			class Challenge
			{
				parameterTypes[] = {"OBJECT","SCALAR"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\Challenge.sqf";
			};
			class simulateTimeAndWeather
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\simulateTimeAndWeather.sqf";
			};
			class selectLeader
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\selectLeader.sqf";
			};
			class addDynamicContent
			{
				parameterTypes[] = {"OBJECT","ARRAY"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\addDynamicContent.sqf";
			};
			class cleanDynamicContent
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\cleanDynamicContent.sqf";
			};
			class createMarkers
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\createMarkers.sqf";
			};
			class createTaskAndNotes
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\createTaskAndNotes.sqf";
			};
			class abort
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\abort.sqf";
			};
			class satisfiesRuntimeConditions
			{
				parameterTypes[] = {"CONFIG","BOOL"};
				returnType = "BOOL";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\satisfiesRuntimeConditions.sqf";
			};
			class satisfiesConfigConditions
			{
				parameterTypes[] = {"CONFIG","SCALAR"};
				returnType = "BOOL";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\satisfiesConfigConditions.sqf";
			};
			class satisfiesTIDExclusions
			{
				parameterTypes[] = {"CONFIG","SCALAR"};
				returnType = "BOOL";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\satisfiesTIDExclusions.sqf";
			};
			class satisfiesChalIDExclusions
			{
				parameterTypes[] = {"CONFIG","SCALAR"};
				returnType = "BOOL";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\satisfiesChalIDExclusions.sqf";
			};
			class nextPhase
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\nextPhase.sqf";
			};
			class determinePositions
			{
				parameterTypes[] = {"OBJECT","SCALAR"};
				returnType = "BOOL";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\determinePositions.sqf";
			};
			class determineSides
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\determineSides.sqf";
			};
			class createTeam
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\createTeam.sqf";
			};
			class evaluateTeam
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\evaluateTeam.sqf";
			};
			class getTeamSpeed
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\getTeamSpeed.sqf";
			};
			class determineEnemyGroups
			{
				parameterTypes[] = {"OBJECT","ARRAY"};
				returnType = "ARRAY";
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Challenge\determineEnemyGroups.sqf";
			};
		};
	};
	class MetaChallenge
	{
		class Attributes
		{
			class id
			{
				type = "SCALAR";
			};
			class entry
			{
				type = "CONFIG";
			};
			class players
			{
				type = "ARRAY";
			};
			class states
			{
				type = "ARRAY";
			};
			class iid
			{
				type = "SCALAR";
			};
		};
		class Methods
		{
			class MetaChallenge
			{
				parameterTypes[] = {"OBJECT","CONFIG","ARRAY"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\MetaChallenge\MetaChallenge.sqf";
			};
			class start
			{
				parameterTypes[] = {"OBJECT"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\MetaChallenge\start.sqf";
			};
		};
	};
	class Debug
	{
		class Attributes
		{
			class startChallengeID
			{
				type = "SCALAR";
				defaultValue = -1;
			};
			class startChallengeEntry
			{
				type = "CONFIG";
			};
		};
		class Methods
		{
			class startChallenge
			{
				parameterTypes[] = {"STRING"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Debug\startChallenge.sqf";
			};
			class randomEnemyGroups
			{
				parameterTypes[] = {"ARRAY"};
				script = "ca\mp_armory\armory_mp\data\scripts\classes\Debug\randomEnemyGroups.sqf";
			};
		};
	};
};
class CfgMPArmory
{
	hints[] = {{ -1,-1,"$STR_EP1_MPA_HINT1" },{ -1,-1,"$STR_EP1_MPA_HINT2" },{ -1,-1,"$STR_EP1_MPA_HINT3" },{ -1,-1,"$STR_EP1_MPA_HINT4" },{ -1,-1,"$STR_EP1_MPA_HINT5" },{ -1,-1,"$STR_EP1_MPA_HINT6" },{ -1,-1,"$STR_EP1_MPA_HINT7" },{ -1,-1,"$STR_EP1_MPA_LOG_DIARY1" },{ -1,-1,"$STR_EP1_MPA_HINT24" },{ -1,-1,"$STR_EP1_MPA_HINT25" },{ -1,-1,"$STR_EP1_MPA_HINT26" },{ 0,0,"$STR_EP1_MPA_HINT8" },{ 0,0,"$STR_EP1_MPA_HINT28" },{ 0,0,"$STR_EP1_MPA_HINT29" },{ 0,0,"$STR_EP1_MPA_HINT30" },{ 0,0,"$STR_EP1_MPA_HINT31" },{ 0,0,"$STR_EP1_MPA_HINT32" },{ 0,0,"$STR_EP1_MPA_HINT33" },{ 0,0,"$STR_EP1_MPA_HINT34" },{ 0,0,"$STR_EP1_MPA_HINT35" },{ 0,0,"$STR_EP1_MPA_HINT36" },{ 0,1,"$STR_EP1_MPA_HINT9" },{ 0,1,"$STR_EP1_MPA_HINT37" },{ 0,1,"$STR_EP1_MPA_HINT38" },{ 0,1,"$STR_EP1_MPA_HINT39" },{ 0,1,"$STR_EP1_MPA_HINT40" },{ 0,1,"$STR_EP1_MPA_HINT41" },{ 0,1,"$STR_EP1_MPA_HINT42" },{ 0,1,"$STR_EP1_MPA_HINT43" },{ 1,0,"$STR_EP1_MPA_HINT13" },{ 1,0,"$STR_EP1_MPA_HINT14" },{ 1,0,"$STR_EP1_MPA_HINT15" },{ 1,0,"$STR_EP1_MPA_HINT16" },{ 1,0,"$STR_EP1_MPA_HINT17" },{ 1,0,"$STR_EP1_MPA_HINT18" },{ 1,0,"$STR_EP1_MPA_HINT19" },{ 1,0,"$STR_EP1_MPA_HINT20" },{ 1,0,"$STR_EP1_MPA_HINT21" },{ 1,0,"$STR_EP1_MPA_Hint22" },{ 1,0,"$STR_EP1_MPA_HINT23" },{ 1,1,"$STR_EP1_MPA_HINT10" },{ 1,1,"$STR_EP1_MPA_HINT27" },{ 1,2,"$STR_EP1_MPA_HINT44" },{ 1,2,"$STR_EP1_MPA_HINT45" },{ 1,3,"$STR_EP1_MPA_HINT50" },{ 1,3,"$STR_EP1_MPA_HINT51" },{ 1,3,"$STR_EP1_MPA_HINT52" },{ 1,3,"$STR_EP1_MPA_HINT53" },{ 1,3,"$STR_EP1_MPA_HINT54" },{ 1,3,"$STR_EP1_MPA_HINT55" },{ 1,3,"$STR_EP1_MPA_HINT56" },{ 1,4,"$STR_EP1_MPA_HINT11" },{ 1,4,"$STR_EP1_MPA_HINT57" },{ 1,4,"$STR_EP1_MPA_HINT58" },{ 1,4,"$STR_EP1_MPA_HINT59" },{ 1,4,"$STR_EP1_MPA_HINT60" },{ 1,4,"$STR_EP1_MPA_HINT61" },{ 1,6,"$STR_EP1_MPA_HINT67" },{ 1,6,"$STR_EP1_MPA_HINT68" },{ 1,6,"$STR_EP1_MPA_HINT69" },{ 1,7,"$STR_EP1_MPA_HINT12" },{ 1,7,"$STR_EP1_MPA_HINT46" },{ 1,8,"$STR_EP1_MPA_HINT47" },{ 1,9,"$STR_EP1_MPA_HINT48" },{ 1,9,"$STR_EP1_MPA_HINT49" },{ 1,10,"$STR_EP1_MPA_HINT62" },{ 1,10,"$STR_EP1_MPA_HINT63" },{ 1,10,"$STR_EP1_MPA_HINT64" },{ 1,10,"$STR_EP1_MPA_HINT65" },{ 1,10,"$STR_EP1_MPA_HINT66" }};
	class CfgWorlds
	{
		class Chernarus
		{
			class Armory
			{
				class ARMEX
				{
					position[] = {4808.372,10113.287};
					radius = 350;
					class Items
					{
						class Tracked
						{
							positions[] = {{ 4924.282,10051.753 },{ 4932.757,10056.755 },{ 4941.162,10060.887 },{ 4954.309,10067.82 },{ 4961.924,10052.781 },{ 4945.8613,10042.712 },{ 4911.152,10046.723 },{ 4925.171,10022.897 }};
							positionsInfo[] = {{ 4927.5493,10051.331 },{ 4936.3867,10056.134 },{ 4945.1475,10061.566 },{ 4949.845,10069.243 },{ 4960.878,10048.546 },{ 4944.238,10039.32 },{ 4914.881,10045.99 },{ 4925.5947,10027.313 }};
							directions[] = {-151.46303,-142.96912,-163.45222,-207.67197,-34.62963,-89.77625,-183.0668,-120.24015};
							directionsInfo[] = {-21.927423,-17.633152,-48.59646,42.522408,91.75773,96.62424,-30.584764,128.04282};
						};
						class Wheeled
						{
							positions[] = {{ 4934.664,10003.816 },{ 4950.7954,10008.72 },{ 4961.5396,10014.398 },{ 4977.843,10023.613 },{ 4982.3125,10016.204 },{ 4987.52,10008.693 },{ 4972.3438,9999.112 },{ 4959.8203,9992.807 }};
							positionsInfo[] = {{ 4937.1226,10000.872 },{ 4953.7813,10007.236 },{ 4958.6787,10010.441 },{ 4976.8457,10019.742 },{ 4978.654,10016.465 },{ 4983.1084,10009.225 },{ 4969.634,10000.628 },{ 4955.339,9990.128 }};
							directions[] = {255.97873,176.88576,171.94905,227.70784,240.12605,250.64359,251.91542,261.80847};
							directionsInfo[] = {4.645671,-39.390068,21.002724,53.438095,67.79756,61.505142,114.48689,85.751915};
						};
						class Static
						{
							positions[] = {{ 4689.848,10236.151 },{ 4680.5313,10230.983 },{ 4671.075,10225.896 },{ 4662.5103,10220.986 },{ 4653.5938,10216.543 }};
							positionsInfo[] = {{ 4694.5947,10233.033 },{ 4685.3306,10227.561 },{ 4675.854,10221.728 },{ 4667.4185,10218.057 },{ 4657.901,10212.808 }};
							directions[] = {-28.847565,-28.847565,-28.847565,-28.847565,-28.847565};
							directionsInfo[] = {-47.94582,-47.94582,-32.75163,-59.37053,-38.90412};
						};
						class Helicopters
						{
							positions[] = {{ 4743.574,10188.191 },{ 4722.8325,10176.088 },{ 4700.1357,10164.438 },{ 4690.418,10186.165 },{ 4657.7407,10140.386 },{ 4645.4424,10162.335 }};
							positionsInfo[] = {{ 4745.835,10182.474 },{ 4728.2334,10174.087 },{ 4701.16,10169.872 },{ 4695.5044,10184.134 },{ 4661.734,10145.116 },{ 4651.691,10162.946 }};
							directions[] = {110.57852,150.79445,-46.396336,63.988632,185.6266,228.47879};
							directionsInfo[] = {-13.452408,-84.89716,-172.82674,-69.151436,-134.87994,-96.251305};
						};
						class Airplanes
						{
							positions[] = {{ 4814.745,10198.676 },{ 4838.6567,10158.728 },{ 4862.8047,10115.938 },{ 4886.7183,10075.003 }};
							positionsInfo[] = {{ 4800.97,10198.634 },{ 4826.563,10160.718 },{ 4856.098,10103.673 },{ 4877.479,10063.201 }};
							directions[] = {-120.7543,-116.13544,-122.92746,-118.89771};
							directionsInfo[] = {118.07343,95.04102,20.44269,17.829714};
						};
						class Ships{};
						class Rifles
						{
							positions[] = {{ 4798.794,10252.197,0.7940603 },{ 4797.838,10252.586,0.8018181 },{ 4796.908,10253.071,0.7937774 },{ 4795.9893,10253.453,0.79522634 },{ 4795.2026,10253.964,0.7944887 },{ 4795.531,10254.784,0.8008592 },{ 4795.1133,10256.051,0.7998387 },{ 4794.209,10256.471,0.79340416 },{ 4792.6104,10257.264,0.8079084 },{ 4791.4077,10258.391,0.8050164 }};
							positionsInfo[] = {{ 4799.1157,10251.461 },{ 4797.3228,10252.058 },{ 4796.963,10252.236 },{ 4795.9976,10252.707 },{ 4795.0083,10253.107 },{ 4794.6675,10254.553 },{ 4794.3438,10255.646 },{ 4793.4316,10256.547 },{ 4791.868,10257.395 },{ 4790.946,10259.014 }};
							directions[] = {26.298534,8.830714,46.972015,217.34341,109.41806,97.37635,185.30867,32.897903,14.72121,104.1175};
							directionsInfo[] = {34.68627,40.629387,16.717798,19.59256,25.435795,89.18823,22.549015,15.878449,36.10312,24.897871};
						};
						class Machineguns
						{
							positions[] = {{ 4786.964,10251.939,0.86957 },{ 4787.646,10254.207,0.49738458 },{ 4790.8833,10252.555,0.19144736 },{ 4790.347,10250.397,0.19242507 },{ 4792.939,10247.247,0.796733 },{ 4795.4194,10246.432,0.8092148 }};
							positionsInfo[] = {{ 4786.4463,10251.098 },{ 4788.3794,10254.64 },{ 4791.8047,10253.258 },{ 4789.504,10251.356 },{ 4792.273,10246.167 },{ 4794.66,10245.112 }};
							directions[] = {95.22743,119.21471,177.5603,-3.2169771,-73.19123,113.24133};
							directionsInfo[] = {-72.58342,-38.77796,109.60917,92.502266,-196.7571,-212.14864};
						};
						class Sidearms
						{
							positions[] = {{ 4804.408,10249.322,0.7930312 },{ 4803.883,10248.3,0.80020434 },{ 4803.364,10247.438,0.81198996 },{ 4801.4604,10245.522,0.8078125 },{ 4801.569,10243.334,0.811155 },{ 4798.9785,10243.362,0.8089817 },{ 4798.035,10243.836,0.80312204 }};
							positionsInfo[] = {{ 4804.4917,10250.096 },{ 4803.4976,10248.987 },{ 4803.3145,10246.689 },{ 4802.061,10245.187 },{ 4801.27,10242.581 },{ 4799.575,10242.729 },{ 4797.2427,10243.911 }};
							directions[] = {120.9158,85.062744,19.05273,225.40697,94.12816,222.37631,290.85495};
							directionsInfo[] = {89.378876,125.41271,129.63974,55.72656,147.59486,186.8241,222.95804};
						};
						class Launchers
						{
							positions[] = {{ 4721.041,10237.587,0.4416727 },{ 4721.996,10236.006,0.42561442 },{ 4722.9727,10234.38,0.42899278 },{ 4723.6953,10230.639,0.5148672 },{ 4720.592,10231.108,0.50869507 },{ 4719.2427,10228.322,0.50323254 }};
							positionsInfo[] = {{ 4721.6304,10238.346 },{ 4721.117,10235.93 },{ 4723.744,10234.48 },{ 4724.1714,10231.044 },{ 4721.1753,10230.107 },{ 4719.2773,10227.234 }};
							directions[] = {-30.083904,144.23207,-33.38195,57.358883,60.900364,-123.2823};
							directionsInfo[] = {80.60185,107.21236,30.765762,110.13145,175.34103,174.24205};
						};
						class Explosives
						{
							positions[] = {{ 4786.487,10310.736,0.8494095 },{ 4787.243,10310.394,0.8339229 },{ 4786.913,10307.023,0.5053485 },{ 4786.079,10306.298,0.50611925 },{ 4784.148,10307.409,0.5080791 },{ 4783.345,10308.37,0.50545543 },{ 4781.958,10311.182,0.96281743 },{ 4783.262,10312.261,0.625152 },{ 4784.5894,10313.494,0.9683082 }};
							positionsInfo[] = {{ 4786.837,10311.766 },{ 4787.6543,10309.754 },{ 4787.1772,10307.729 },{ 4785.342,10306.021 },{ 4784.1704,10306.894 },{ 4782.7476,10308.668 },{ 4781.6025,10310.502 },{ 4783.0967,10311.502 },{ 4785.186,10313.795 }};
							directions[] = {83.789986,300.57574,112.98648,231.87451,230.92104,286.1767,129.40118,211.0193,-17.990189};
							directionsInfo[] = {72.24548,-99.27315,142.00569,167.69713,237.13025,214.68788,-67.973015,-46.6482,-17.56663};
						};
						class Characters{};
						class Animals{};
					};
					class Areas
					{
						class Tracked
						{
							displayName = "$STR_EP1_MPA_AREA_TRACKED";
							position[] = {4942.949,10049.238};
							positionInfo[] = {4902.087,10053.137};
							direction = 0;
							directionInfo = -28.423782;
							markerType = "n_armor";
							directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_tracked_ca";
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_tracked1.sqf";
							compositionPosition[] = {4934.319,10051.021};
						};
						class Wheeled
						{
							displayName = "$STR_EP1_MPA_AREA_WHEELED";
							position[] = {4965.4614,10006.739};
							positionInfo[] = {4951.4214,9985.233};
							direction = 0;
							directionInfo = 59.375656;
							markerType = "n_motor_inf";
							directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_wheeled_ca";
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_wheeled1.sqf";
							compositionPosition[] = {4963.5303,10004.855};
						};
						class Static
						{
							displayName = "$STR_EP1_MPA_AREA_STATIC";
							position[] = {4671.411,10225.822};
							positionInfo[] = {4721.6875,10259.995};
							direction = 0;
							directionInfo = 59.041157;
							markerType = "n_art";
							directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_static_ca";
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_static1.sqf";
							compositionPosition[] = {4674.1143,10226.446};
						};
						class Helicopters
						{
							displayName = "$STR_LIB_CAT_HELICOPTERS";
							position[] = {4675.898,10166.514};
							positionInfo[] = {4720.3203,10206.439};
							direction = 0;
							directionInfo = -28.263138;
							markerType = "n_air";
							directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_helicopters_ca";
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_helicopters1.sqf";
							compositionPosition[] = {4693.5483,10169.661};
						};
						class Airplanes
						{
							displayName = "$STR_LIB_CAT_AIRPLANES";
							position[] = {4839.749,10142.604};
							positionInfo[] = {4860.837,10142.895};
							direction = 0;
							directionInfo = 57.91135;
							markerType = "n_plane";
							directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_airplanes_ca";
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_airplanes1.sqf";
							compositionPosition[] = {4853.514,10137.192};
						};
						class Rifles
						{
							displayName = "$STR_LIB_CAT_RIFLES";
							position[] = {4795.731,10255.454};
							positionInfo[] = {4792.1865,10242.891};
							direction = 0;
							directionInfo = 24.969185;
							markerType = "n_empty";
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_rifles1.sqf";
							compositionPosition[] = {4793.6777,10249.863};
							directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_rifles_ca";
						};
						class Machineguns
						{
							displayName = "$STR_LIB_CAT_MACHINEGUNS";
							position[] = {4788.526,10253.186};
							direction = 0;
							markerType = "n_empty";
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_machineguns1.sqf";
							compositionPosition[] = {4792.1504,10250.653};
							directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_machineguns_ca";
						};
						class Sidearms
						{
							displayName = "$STR_LIB_CAT_SIDEARMS";
							position[] = {4803.074,10246.747};
							direction = 0;
							markerType = "n_empty";
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_sidearms1.sqf";
							compositionPosition[] = {4813.422,10244.149};
							directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_sidearms_ca";
						};
						class Launchers
						{
							displayName = "$STR_LIB_CAT_LAUNCHERS";
							position[] = {4721.1953,10233.339};
							direction = 0;
							markerType = "n_empty";
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_launchers1.sqf";
							compositionPosition[] = {4724.5073,10231.929};
							directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_launchers_ca";
						};
						class Explosives
						{
							displayName = "$STR_LIB_CAT_EXPLOSIVES";
							position[] = {4785.344,10309.531};
							positionInfo[] = {4794.513,10325.602};
							direction = 0;
							directionInfo = -32.206627;
							markerType = "n_empty";
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_explosives1.sqf";
							compositionPosition[] = {4785.172,10309.189};
							directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_explosives_ca";
						};
						class MobilityRange1
						{
							displayName = "$STR_LIB_CHAL_MOB_RANGE";
							position[] = {4795.831,10010.379};
							direction = 0;
							markerType = "hd_flag";
							markerColor = "ColorBlue";
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_mobility_range1.sqf";
							compositionPosition[] = {4789.073,9991.9795};
							directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_mobility_range_ca";
						};
						class Entrance
						{
							displayName = "$STR_EP1_MPA_AREA_ENTRANCE";
							position[] = {5052.5254,9891.39};
							positionInfo[] = {5008.1167,9930.186};
							direction = -33.382465;
							directionInfo = 270.05463;
							markerType = "Join";
							markerColor = "ColorBlue";
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_entrance1.sqf";
							compositionPosition[] = {5020.6753,9930.586};
							directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_entrance_exit_ca";
						};
						class FiringRange1
						{
							displayName = "$STR_LIB_CHAL_FIRING_RANGE";
							position[] = {4955.175,10207.53};
							direction = 0;
							markerType = "hd_flag";
							markerColor = "ColorBlue";
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_firing_range1.sqf";
							compositionPosition[] = {4983.4336,10149.21};
							directionTexture = "ca\mp_armory\armory_mp\data\images\direction_sign_area_firing_range_ca";
						};
						class FiringRange2: FiringRange1
						{
							position[] = {4640.046,10276.511};
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_firing_range2.sqf";
							compositionPosition[] = {4457.9824,10560.934};
						};
						class FiringRange3: FiringRange1
						{
							position[] = {4817.085,10287.784};
							compositionScript = "ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_firing_range3.sqf";
							compositionPosition[] = {4819.72,10296.855};
						};
					};
					class AmbientObjects
					{
						compositionScripts[] = {"ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_ambient1.sqf","ca\mp_armory\armory_mp\data\scripts\chernarus_armex\mpa_ambient2.sqf"};
						compositionAnchors[] = {{ 4871.038,9740.403 },{ 4206.666,10791.038 }};
					};
				};
				backUpRoutes[] = {{ { 6335.92,6296.45 },{ 5667.33,7259.01 },{ 5023.94,6804.84 },{ 4799.88,6795.52 },{ 4766.33,6761.29 },{ 4712.81,6356.3 },{ 4786.69,5881.23 } },{ { 4061.4282,4822.893 },{ 3996.005,4780.637 },{ 4113.9746,4644.71 },{ 4246.8066,4456.907 },{ 3694.8262,3877.9797 },{ 3544.3376,3903.6228 },{ 3319.3535,3936.9614 } }};
			};
		};
	};
};
class CfgSounds
{
	class MPA_Broadcast1
	{
		name = "MPA - Broadcast 1";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast1.wss",0.5,1};
		titles[] = {};
	};
	class MPA_Broadcast2: MPA_Broadcast1
	{
		name = "MPA - Broadcast 2";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast2.wss",0.5,1};
	};
	class MPA_Broadcast3: MPA_Broadcast1
	{
		name = "MPA - Broadcast 3";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast3.wss",0.5,1};
	};
	class MPA_Broadcast4: MPA_Broadcast1
	{
		name = "MPA - Broadcast 4";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast4.wss",0.5,1};
	};
	class MPA_Broadcast5: MPA_Broadcast1
	{
		name = "MPA - Broadcast 5";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast5.wss",0.5,1};
	};
	class MPA_Broadcast6: MPA_Broadcast1
	{
		name = "MPA - Broadcast 6";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast6.wss",0.5,1};
	};
	class MPA_Broadcast7: MPA_Broadcast1
	{
		name = "MPA - Broadcast 7";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast7.wss",0.5,1};
	};
	class MPA_Broadcast8: MPA_Broadcast1
	{
		name = "MPA - Broadcast 8";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast8.wss",0.5,1};
	};
	class MPA_Broadcast9: MPA_Broadcast1
	{
		name = "MPA - Broadcast 9";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast9.wss",0.5,1};
	};
	class MPA_Broadcast10: MPA_Broadcast1
	{
		name = "MPA - Broadcast 10";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast10.wss",0.5,1};
	};
	class MPA_Broadcast11: MPA_Broadcast1
	{
		name = "MPA - Broadcast 11";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast11.wss",0.5,1};
	};
	class MPA_Broadcast12: MPA_Broadcast1
	{
		name = "MPA - Broadcast 12";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast12.wss",0.5,1};
	};
	class MPA_Broadcast13: MPA_Broadcast1
	{
		name = "MPA - Broadcast 13";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast13.wss",0.5,1};
	};
	class MPA_Broadcast14: MPA_Broadcast1
	{
		name = "MPA - Broadcast 14";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast14.wss",0.5,1};
	};
	class MPA_Broadcast15: MPA_Broadcast1
	{
		name = "MPA - Broadcast 15";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast15.wss",0.5,1};
	};
	class MPA_Broadcast16: MPA_Broadcast1
	{
		name = "MPA - Broadcast 16";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast16.wss",0.5,1};
	};
	class MPA_BroadcastAttention: MPA_Broadcast1
	{
		name = "MPA - Broadcast - Attention";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast_attention.wss",0.5,1};
	};
	class MPA_BroadcastWelcome: MPA_Broadcast1
	{
		name = "MPA - Broadcast - Welcome";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast_welcome.wss",0.5,1};
	};
	class MPA_BroadcastTime: MPA_Broadcast1
	{
		name = "MPA - Broadcast - Time";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast_time.wss",0.5,1};
	};
	class MPA_BroadcastTime30: MPA_Broadcast1
	{
		name = "MPA - Broadcast - Time - 30";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast_time30.wss",0.5,1};
	};
	class MPA_BroadcastTime20: MPA_Broadcast1
	{
		name = "MPA - Broadcast - Time - 20";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast_time20.wss",0.5,1};
	};
	class MPA_BroadcastTime10: MPA_Broadcast1
	{
		name = "MPA - Broadcast - Time - 10";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast_time10.wss",0.5,1};
	};
	class MPA_BroadcastTime5: MPA_Broadcast1
	{
		name = "MPA - Broadcast - Time - 5";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast_time5.wss",0.5,1};
	};
};
class CfgRadio
{
	class MPA_Broadcast1
	{
		name = "MPA - Broadcast 1 (radio)";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast1.wss",1,1};
		title = "";
	};
	class MPA_Broadcast2: MPA_Broadcast1
	{
		name = "MPA - Broadcast 2 (radio)";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast2.wss",1,1};
	};
	class MPA_Broadcast3: MPA_Broadcast1
	{
		name = "MPA - Broadcast 3 (radio)";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast3.wss",1,1};
	};
	class MPA_Broadcast4: MPA_Broadcast1
	{
		name = "MPA - Broadcast 4 (radio)";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast4.wss",1,1};
	};
	class MPA_Broadcast11: MPA_Broadcast1
	{
		name = "MPA - Broadcast 11 (radio)";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast11.wss",1,1};
	};
	class MPA_Broadcast12: MPA_Broadcast1
	{
		name = "MPA - Broadcast 12 (radio)";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast12.wss",1,1};
	};
	class MPA_Broadcast13: MPA_Broadcast1
	{
		name = "MPA - Broadcast 13 (radio)";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast13.wss",1,1};
	};
	class MPA_Broadcast14: MPA_Broadcast1
	{
		name = "MPA - Broadcast 14 (radio)";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast14.wss",1,1};
	};
	class MPA_Broadcast15: MPA_Broadcast1
	{
		name = "MPA - Broadcast 15 (radio)";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast15.wss",1,1};
	};
	class MPA_Broadcast16: MPA_Broadcast1
	{
		name = "MPA - Broadcast 16 (radio)";
		sound[] = {"ca\mp_armory\armory_mp\data\sounds\broadcast16.wss",1,1};
	};
};
class RscStructuredText
{
	class Attributes;
};
class RscPicture;
class RscListbox;
class RscListNBox;
class RscShortcutButton;
class RscControlsGroup;
class RscTitles
{
	class ItemInfoGUI
	{
		idd = 11071;
		duration = 1e+011;
		name = "$STR_EP1_MPA_UI_ITEMINFOGUI";
		onLoad = "private [""_handle""]; _handle = _this execVM ""ca\mp_armory\armory_mp\data\scripts\gui\ItemInfoGUI_initialize.sqf""";
		class ControlsBackground
		{
			class Background: RscPicture
			{
				x = 0.205;
				y = "safeZoneY + 0.02";
				w = 0.85;
				h = 0.65;
				text = "\ca\ui\data\ui_background_armory_info_ca.paa";
			};
		};
		class Controls
		{
			class Title: RscStructuredText
			{
				idc = 19831;
				x = 0.215;
				y = "safeZoneY + 0.043";
				w = 0.6;
				h = 0.05;
				class Attributes: Attributes
				{
					align = "center";
					color = "#ffffff";
					shadow = "true";
				};
			};
			class Selected: RscStructuredText
			{
				idc = 19832;
				x = 0.215;
				y = "safeZoneY + 0.09";
				w = 0.6;
				h = 0.05;
				size = 0.02474;
				class Attributes: Attributes
				{
					align = "center";
					color = "#00ffff";
					shadow = "false";
				};
			};
			class Path: RscStructuredText
			{
				idc = 19853;
				x = 0.215;
				y = "safezoneY + 0.14";
				w = 0.6;
				h = 0.05;
				size = 0.02474;
				class Attributes: Attributes
				{
					align = "center";
					color = "#ffffff";
					shadow = "false";
				};
			};
			class Loading: RscStructuredText
			{
				idc = 19852;
				x = 0.215;
				y = "safeZoneY + 0.34";
				w = 0.6;
				h = 0.05;
				class Attributes: Attributes
				{
					align = "center";
					color = "#ffffff";
					shadow = "false";
				};
			};
			class G_Description: RscControlsGroup
			{
				idc = 19833;
				style = 16;
				x = 0.215;
				y = "safeZoneY + 0.19";
				w = 0.3;
				h = 0.27;
				class VScrollbar
				{
					color[] = {0,0,0,0};
					width = 0;
					autoScrollSpeed = 1.5;
					autoScrollDelay = 8;
					autoScrollRewind = 1;
				};
				class HScrollbar
				{
					color[] = {0,0,0,0};
					height = 0;
				};
				class Controls
				{
					class Description: RscStructuredText
					{
						idc = 19834;
						x = 0;
						y = 0;
						w = 0.3;
						h = 0.5;
						size = 0.02474;
						class Attributes: Attributes
						{
							align = "left";
							color = "#ffffff";
							shadow = "false";
						};
					};
				};
			};
			class StatTitle1: RscStructuredText
			{
				idc = 19835;
				x = 0.515;
				y = "safeZoneY + 0.19";
				w = 0.18;
				h = 0.05;
				size = 0.02474;
				class Attributes: Attributes
				{
					align = "left";
					color = "#ffffff";
					shadow = "false";
				};
			};
			class StatTitle2: StatTitle1
			{
				idc = 19836;
				y = "safeZoneY + 0.24";
			};
			class StatTitle3: StatTitle1
			{
				idc = 19837;
				y = "safeZoneY + 0.29";
			};
			class StatTitle4: StatTitle1
			{
				idc = 19838;
				y = "safeZoneY + 0.34";
			};
			class StatTitle5: StatTitle1
			{
				idc = 19839;
				y = "safeZoneY + 0.39";
			};
			class StatTitle6: StatTitle1
			{
				idc = 19840;
				y = "safeZoneY + 0.44";
			};
			class StatTitle7: StatTitle1
			{
				idc = 19841;
				y = "safeZoneY + 0.49";
			};
			class StatTitle8: StatTitle1
			{
				idc = 19842;
				y = "safeZoneY + 0.54";
			};
			class StatTitle9: StatTitle1
			{
				idc = 19843;
				y = "safeZoneY + 0.59";
			};
			class StatValue1: RscStructuredText
			{
				idc = 19844;
				x = 0.695;
				y = "safeZoneY + 0.19";
				w = 0.12;
				h = 0.05;
				size = 0.02474;
				class Attributes: Attributes
				{
					align = "right";
					color = "#ffffff";
					shadow = "false";
				};
			};
			class StatValue2: StatValue1
			{
				idc = 19845;
				y = "safeZoneY + 0.24";
			};
			class StatValue3: StatValue1
			{
				idc = 19846;
				y = "safeZoneY + 0.29";
			};
			class StatValue4: StatValue1
			{
				idc = 19847;
				y = "safeZoneY + 0.34";
			};
			class StatValue5: StatValue1
			{
				idc = 19848;
				y = "safeZoneY + 0.39";
			};
			class StatValue6: StatValue1
			{
				idc = 19849;
				y = "safeZoneY + 0.44";
			};
			class StatValue7: StatValue1
			{
				idc = 19850;
				y = "safeZoneY + 0.49";
			};
			class StatValue8: StatValue1
			{
				idc = 19851;
				y = "safeZoneY + 0.54";
			};
			class StatValue9: StatValue1
			{
				idc = 19852;
				y = "safeZoneY + 0.59";
			};
		};
	};
	class SpectateGUI
	{
		idd = 11072;
		duration = 1e+011;
		name = "$STR_EP1_MPA_UI_SPECTATEGUI";
		onLoad = "uiNamespace setVariable [""BIS_MPA_spectateGUI"", _this select 0]";
		class ControlsBackground{};
		class Controls
		{
			class Title: RscStructuredText
			{
				idc = 19831;
				x = 0.2;
				y = 0.05;
				w = 0.6;
				h = 0.05;
				text = "$STR_EP1_MPA_UI_SPECTATEGUI_TITLE";
				class Attributes: Attributes
				{
					align = "center";
					color = "#ffffff";
					shadow = "true";
				};
			};
			class Respawn: Title
			{
				idc = 19832;
				y = 0.95;
				text = "";
			};
		};
	};
	class DebriefingGUI
	{
		idd = 11074;
		duration = 60000;
		name = "$STR_EP1_MPA_UI_DEBRIEFINGGUI";
		onLoad = "private [""_handle""]; _handle = _this execVM ""ca\mp_armory\armory_mp\data\scripts\gui\DebriefingGUI_initialize.sqf""";
		class ControlsBackground
		{
			class Background: RscPicture
			{
				x = 0.13;
				y = 0.18;
				w = 1;
				h = 0.87;
				text = "\ca\ui\data\ui_background_armory_info_ca.paa";
			};
		};
		class Controls
		{
			class Title: RscStructuredText
			{
				idc = 19831;
				x = 0.2;
				y = 0.22;
				w = 0.6;
				h = 0.1;
				text = "$STR_EP1_MPA_UI_DEBRIEFINGGUI_TITLE";
				class Attributes: Attributes
				{
					align = "center";
					color = "#ffffff";
					shadow = "true";
				};
			};
			class Debriefing: RscStructuredText
			{
				idc = 19832;
				x = 0.2;
				y = 0.3;
				w = 0.6;
				h = 0.05;
				size = 0.02474;
				class Attributes: Attributes
				{
					align = "left";
					color = "#ffffff";
					shadow = "true";
				};
			};
			class TitleTime: RscStructuredText
			{
				idc = 19833;
				x = 0.2;
				y = 0.35;
				w = 0.3;
				h = 0.05;
				text = "$STR_LIB_CHAL_TIME_ELAPSED";
				size = 0.02474;
				class Attributes: Attributes
				{
					align = "left";
					color = "#ffffff";
					shadow = "true";
				};
			};
			class ValueTime: RscStructuredText
			{
				idc = 19836;
				x = 0.4;
				y = 0.35;
				w = 0.3;
				h = 0.05;
				size = 0.02474;
				class Attributes: Attributes
				{
					align = "left";
					color = "#ffffff";
					shadow = "true";
				};
			};
			class Team: RscStructuredText
			{
				idc = 19838;
				x = 0.2;
				y = 0.4;
				w = 0.2;
				h = 0.05;
				size = 0.02474;
				class Attributes: Attributes
				{
					align = "left";
					color = "#ffffff";
					shadow = "false";
				};
			};
			class ValueTeam: RscStructuredText
			{
				idc = 19839;
				x = 0.4;
				y = 0.4;
				w = 0.3;
				h = 0.05;
				size = 0.02474;
				class Attributes: Attributes
				{
					align = "left";
					color = "#ffffff";
					shadow = "false";
				};
			};
			class Goal: RscStructuredText
			{
				idc = 19840;
				x = 0.2;
				y = 0.45;
				w = 0.2;
				h = 0.05;
				size = 0.02474;
				class Attributes: Attributes
				{
					align = "left";
					color = "#ffffff";
					shadow = "false";
				};
			};
			class ValueGoal: RscStructuredText
			{
				idc = 19841;
				x = 0.4;
				y = 0.45;
				w = 0.3;
				h = 0.05;
				size = 0.02474;
				class Attributes: Attributes
				{
					align = "left";
					color = "#ffffff";
					shadow = "false";
				};
			};
			class TitlePlayers: TitleTime
			{
				idc = 19834;
				y = 0.5;
				text = "$STR_EP1_MPA_UI_DEBRIEFINGGUI_TITLEPLAYERS";
			};
			class ValuePlayers: RscListNBox
			{
				idc = 19837;
				x = 0.2;
				y = 0.55;
				w = 0.6;
				h = 0.4;
				sizeEx = 0.02474;
				columns[] = {0,0.25,0.75};
			};
		};
	};
};
class QuickSelectItemGUI
{
	idd = 11075;
	movingEnable = 0;
	onLoad = "private [""_handle""]; _handle = _this execVM ""ca\mp_armory\armory_mp\data\scripts\gui\QuickSelectItemGUI_initialize.sqf""";
	class ControlsBackground
	{
		class Background: RscPicture
		{
			x = 0.035;
			y = 0.08;
			w = 1.25;
			h = 0.98;
			text = "\ca\ui\data\ui_background_armory_info_ca.paa";
		};
	};
	class Controls
	{
		class Title: RscStructuredText
		{
			idc = 19838;
			x = 0.1;
			y = 0.1;
			w = 0.8;
			h = 0.05;
			text = "$STR_EP1_MPA_UI_QUICKSELECTITEMGUI_TITLE";
			class Attributes: Attributes
			{
				align = "center";
				color = "#ffffff";
				shadow = "false";
			};
		};
		class Selected: RscStructuredText
		{
			idc = 19839;
			x = 0.1;
			y = 0.15;
			w = 0.8;
			h = 0.05;
			size = 0.02474;
			class Attributes: Attributes
			{
				align = "center";
				color = "#ffffff";
				shadow = "false";
			};
		};
		class FilterFaction: RscListbox
		{
			idc = 19831;
			x = 0.1;
			y = 0.2;
			w = 0.2;
			h = 0.55;
			rowHeight = 0.03;
			sizeEx = 0.02474;
			toolTip = "$STR_EP1_MPA_UI_QUICKSELECTITEMGUI_FILTERFACTION_TOOLTIP";
			onLBSelChanged = "[""onLBSelChanged"", _this select 0] call BIS_MPA_QuickSelectItemGUI_input";
		};
		class FilterSet: FilterFaction
		{
			idc = 19832;
			x = 0.3;
			w = 0.15;
			toolTip = "$STR_EP1_MPA_UI_QUICKSELECTITEMGUI_FILTERSET_TOOLTIP";
			onLBSelChanged = "[""onLBSelChanged"", _this select 0] call BIS_MPA_QuickSelectItemGUI_input";
		};
		class FilterType: FilterFaction
		{
			idc = 19833;
			x = 0.45;
			w = 0.175;
			toolTip = "$STR_EP1_MPA_UI_QUICKSELECTITEMGUI_FILTERTYPE_TOOLTIP";
			onLBSelChanged = "[""onLBSelChanged"", _this select 0] call BIS_MPA_QuickSelectItemGUI_input";
		};
		class Items: FilterFaction
		{
			idc = 19834;
			x = 0.625;
			w = 0.275;
			toolTip = "$STR_LIB_TOOLTIP_ITEM";
			onLBDblClick = "[""onLBDblClick"", _this select 0] call BIS_MPA_QuickSelectItemGUI_input";
		};
		class ItemsSorter: RscListbox
		{
			idc = 19835;
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};
		class SelectButton: RscShortcutButton
		{
			idc = 19836;
			default = 1;
			x = 0.3;
			y = 0.78;
			w = 0.15;
			h = 0.105;
			text = "$STR_EP1_MPA_UI_QUICKSELECTITEMGUI_SELECTBUTTON";
			toolTip = "$STR_LIB_TOOLTIP_ITEM";
			onButtonClick = "[""onButtonClick"", _this select 0] call BIS_MPA_QuickSelectItemGUI_input";
		};
		class CancelButton: SelectButton
		{
			idc = 19837;
			default = 0;
			x = 0.55;
			text = "$STR_CA_CANCEL";
			toolTip = "$STR_EP1_MPA_UI_QUICKSELECTITEMGUI_CANCELBUTTON_TOOLTIP";
			onButtonClick = "[""onButtonClick"", _this select 0] call BIS_MPA_QuickSelectItemGUI_input";
		};
	};
};
class ShowRankingsGUI
{
	idd = 11076;
	movingEnable = 0;
	onLoad = "private [""_handle""]; _handle = _this execVM ""ca\mp_armory\armory_mp\data\scripts\gui\ShowRankingsGUI_initialize.sqf""";
	class ControlsBackground
	{
		class Background: RscPicture
		{
			x = 0.13;
			y = 0.18;
			w = 1;
			h = 0.87;
			text = "\ca\ui\data\ui_background_armory_info_ca.paa";
		};
	};
	class Controls
	{
		class Title: RscStructuredText
		{
			idc = 19831;
			x = 0.2;
			y = 0.21;
			w = 0.6;
			h = 0.05;
			text = "$STR_EP1_MPA_UI_SHOWRANKINGSGUI_TITLE";
			class Attributes: Attributes
			{
				align = "center";
				color = "#ffffff";
				shadow = "false";
			};
		};
		class Players: RscStructuredText
		{
			idc = 19832;
			x = 0.2;
			y = 0.3;
			w = 0.2;
			h = 0.05;
			text = "$STR_EP1_MPA_UI_DEBRIEFINGGUI_TITLEPLAYERS";
			size = 0.02474;
			class Attributes: Attributes
			{
				align = "left";
				color = "#ffffff";
				shadow = "false";
			};
		};
		class ValuePlayers: RscListNBox
		{
			idc = 19833;
			x = 0.2;
			y = 0.35;
			w = 0.6;
			h = 0.4;
			sizeEx = 0.02474;
			columns[] = {0,0.25,0.75};
		};
		class Team: RscStructuredText
		{
			idc = 19834;
			x = 0.2;
			y = 0.65;
			w = 0.2;
			h = 0.05;
			size = 0.02474;
			class Attributes: Attributes
			{
				align = "left";
				color = "#ffffff";
				shadow = "false";
			};
		};
		class ValueTeam: RscStructuredText
		{
			idc = 19835;
			x = 0.4;
			y = 0.65;
			w = 0.3;
			h = 0.05;
			size = 0.02474;
			class Attributes: Attributes
			{
				align = "left";
				color = "#ffffff";
				shadow = "false";
			};
		};
		class Goal: RscStructuredText
		{
			idc = 19836;
			x = 0.2;
			y = 0.7;
			w = 0.2;
			h = 0.05;
			size = 0.02474;
			class Attributes: Attributes
			{
				align = "left";
				color = "#ffffff";
				shadow = "false";
			};
		};
		class ValueGoal: RscStructuredText
		{
			idc = 19837;
			x = 0.4;
			y = 0.7;
			w = 0.3;
			h = 0.05;
			size = 0.02474;
			class Attributes: Attributes
			{
				align = "left";
				color = "#ffffff";
				shadow = "false";
			};
		};
		class CloseButton: RscShortcutButton
		{
			idc = 19838;
			default = 1;
			x = 0.425;
			y = 0.8;
			w = 0.15;
			h = 0.105;
			text = "$STR_EP1_MPA_UI_SHOWRANKINGSGUI_CLOSEBUTTON";
			toolTip = "$STR_EP1_MPA_UI_SHOWRANKINGSGUI_CLOSEBUTTON_TOOLTIP";
			onButtonClick = "closeDialog 11076";
		};
	};
};
class RscDisplayLoadMission;
class RscDisplayLoadArmory: RscDisplayLoadMission
{
	onload = "_this call (compile (preprocessfilelinenumbers ""ca\ui\scripts\ui_loadingText.sqf"")); _this call (compile (preprocessfilelinenumbers ""ca\mp_armory\armory_mp\data\scripts\gui\RscDisplayLoadArmory_initialize.sqf""));";
};
//};
