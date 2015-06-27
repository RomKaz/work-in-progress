////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:09 2014 : Source 'file' date Fri Oct 31 06:11:09 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class mp_armory : armory_mp_challenges\config.bin{
class CfgPatches
{
	class CA_MPA_Challenges
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
	};
};
class CfgMPArmory
{
	class Challenges
	{
		class Gather
		{
			id = 0;
			type = 1;
			multiplayer = 1;
			occurAtARMEX = 2;
			title = "$STR_EP1_MPA_META_GATHER";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\gather_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\gather.sqf";
			points = 50;
			runtimeConditions[] = {"notAlone"};
			textLog = "$STR_EP1_MPA_META_GATHER_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_GATHER_TEXTTASK1","$STR_EP1_MPA_META_GATHER_TEXTTASK2","$STR_EP1_MPA_META_GATHER_TEXTTASK3"};
			textDebriefing[] = {"$STR_EP1_MPA_META_GATHER_TEXTDEBRIEFING1","$STR_LIB_CHAL_OUT_OF_TIME","$STR_EP1_MPA_CHAL_PLAYERSDISCONNECTED"};
		};
		class MinimumSpeed
		{
			id = 1;
			type = 1;
			occurAtARMEX = 2;
			title = "$STR_LIB_CHAL_MIN_SPEED";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\minimum_speed_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\minimum_speed.sqf";
			tidExclusions[] = {2,6,7,8,9,10,11,12};
			runtimeConditions[] = {"isDriver","isFlying"};
			points = 30;
			textLog = "$STR_EP1_MPA_META_MINIMUMSPEED_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_HIGHSPEED_TEXTTASK1","$STR_EP1_MPA_META_MINIMUMSPEED_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_META_MINIMUMSPEED_TEXTDEBRIEFING1","$STR_LIB_CHAL_MIN_SPEED_TOO_LONG","$STR_LIB_CHAL_DISEMBARKED","$STR_LIB_CHAL_MIN_SPEED_BELOW","$STR_LIB_CHAL_DIED"};
		};
		class AttackLocation
		{
			id = 2;
			type = 0;
			title = "$STR_LIB_CHAL_ATTACK_LOC";
			image = "ca\mp_armory\armory_mp_challenges\data\images\attack_location_co.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\challenges\attack_location.sqf";
			scriptRespawn = "ca\mp_armory\armory_mp_challenges\data\scripts\challenges\attack_location_Respawn.sqf";
			tidExclusions[] = {2,12};
			configConditions[] = {"hasWeapon"};
			respawnDelay = 30;
			points[] = {150};
			taskStates[] = {1,0};
			textLog = "$STR_EP1_MPA_CHAL_ATTACKLOCATION_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_CHAL_ATTACKLOCATION_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_CHAL_ATTACKLOCATION_TEXTDEBRIEFING1"};
			class Markers
			{
				class Insertion
				{
					icon = 1;
					type = "mil_start";
					color = "ColorBlue";
					text = "$STR_TEMP_SECOPS_INSERTION";
					position = "positionInsertion";
				};
				class Target
				{
					icon = 1;
					type = "hd_destroy";
					color = "ColorRed";
					text = "#title";
					position = "position";
				};
				class TargetArea
				{
					size = 100;
					color = "ColorRed";
					position = "position";
				};
			};
		};
		class DefendLocation
		{
			id = 3;
			type = 0;
			title = "$STR_LIB_CHAL_DEFEND_LOC";
			image = "ca\mp_armory\armory_mp_challenges\data\images\defend_location_co.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\challenges\defend_location.sqf";
			tidExclusions[] = {2,12};
			configConditions[] = {"hasWeapon"};
			positionMode = 3;
			respawnDelay = 30;
			points[] = {150,0};
			taskStates[] = {1,0};
			textLog = "$STR_EP1_MPA_CHAL_DEFENDLOCATION_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_CHAL_DEFENDLOCATION_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_CHAL_DEFENDLOCATION_TEXTDEBRIEFING1","$STR_EP1_MPA_CHAL_DEFENDLOCATION_TEXTDEBRIEFING2"};
			class Markers
			{
				class Target
				{
					icon = 1;
					type = "hd_objective";
					color = "ColorBlue";
					text = "#title";
					position = "position";
				};
				class TargetArea
				{
					size = 30;
					color = "ColorBlue";
					position = "position";
				};
			};
		};
		class Night
		{
			id = 4;
			type = 1;
			title = "$STR_EP1_MPA_META_NIGHT";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\night_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\night.sqf";
			runtimeConditions[] = {"isNight"};
			multiplayer = 1;
			startAlways = 1;
			points = 25;
			textLog = "$STR_EP1_MPA_META_NIGHT_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_NIGHT_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_META_NIGHT_TEXTDEBRIEFING1","$STR_EP1_MPA_META_NIGHT_TEXTDEBRIEFING2"};
		};
		class Rush
		{
			id = 5;
			type = 1;
			title = "$STR_EP1_MPA_META_RUSH";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\rush_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\rush.sqf";
			multiplayer = 1;
			chalidExclusions[] = {3,7,8,21,22};
			points = 50;
			textLog = "$STR_EP1_MPA_META_RUSH_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_RUSH_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_META_RUSH_TEXTDEBRIEFING2","$STR_EP1_MPA_META_RUSH_TEXTDEBRIEFING1"};
		};
		class ProtectPlayer
		{
			id = 6;
			type = 1;
			title = "$STR_EP1_MPA_META_PROTECTPLAYER";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\protect_player_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\protect_player.sqf";
			runtimeConditions[] = {"notAlone"};
			chalidExclusions[] = {8,10,11,22};
			points = 75;
			textLog = "$STR_EP1_MPA_META_PROTECTPLAYER_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_PROTECTPLAYER_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_META_PROTECTPLAYER_TEXTDEBRIEFING1","$STR_EP1_MPA_META_PROTECTPLAYER_TEXTDEBRIEFING2"};
		};
		class ConvoyAmbush
		{
			id = 7;
			type = 0;
			title = "$STR_EP1_MPA_CHAL_CONVOYAMBUSH";
			image = "ca\mp_armory\armory_mp_challenges\data\images\convoy_ambush_co.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\challenges\convoy_ambush.sqf";
			tidExclusions[] = {2,12};
			configConditions[] = {"hasWeapon"};
			positionOnRoad = 1;
			useRoadRoute = 1;
			positionMode = 3;
			respawnDelay = 30;
			points[] = {200,100,0};
			taskStates[] = {1,1,0};
			textLog = "$STR_EP1_MPA_CHAL_CONVOYAMBUSH_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_CHAL_CONVOYAMBUSH_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_CHAL_CONVOYAMBUSH_TEXTDEBRIEFING1","$STR_EP1_MPA_CHAL_CONVOYAMBUSH_TEXTDEBRIEFING2","$STR_EP1_MPA_CHAL_CONVOYAMBUSH_TEXTDEBRIEFING3"};
			class Markers
			{
				class Ambush
				{
					icon = 1;
					type = "hd_ambush";
					color = "ColorRed";
					text = "#title";
					position = "position";
				};
				class ConvoyStart
				{
					icon = 1;
					type = "hd_start";
					color = "ColorRed";
					text = "$STR_SOM_AMBUSH_MARKER_START";
					position = "#routeStart";
				};
				class ConvoyDestination
				{
					icon = 1;
					type = "hd_end";
					color = "ColorRed";
					text = "$STR_SOM_AMBUSH_MARKER_END";
					position = "#routeEnd";
				};
				class Route
				{
					icon = 1;
					type = "hd_dot";
					color = "ColorRed";
					position = "#routeNode";
				};
			};
		};
		class DeathMatch
		{
			id = 8;
			type = 0;
			title = "$STR_MP_TYPE_DM";
			image = "ca\mp_armory\armory_mp_challenges\data\images\death_match_co.paa";
			scriptInit = "ca\mp_armory\armory_mp_challenges\data\scripts\challenges\death_match_Init.sqf";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\challenges\death_match.sqf";
			tidExclusions[] = {10,12};
			configConditions[] = {"hasWeapon"};
			runtimeConditions[] = {"notAlone"};
			teamMode = 1;
			itemMode = 1;
			positionMode = 2;
			respawnDelay = 10;
			points[] = {200,0};
			taskStates[] = {1,0};
			textLog = "$STR_EP1_MPA_CHAL_DEATHMATCH_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_CHAL_DEATHMATCH_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_CHAL_DEATHMATCH_TEXTDEBRIEFING1","$STR_EP1_MPA_CHAL_DEATHMATCH_TEXTDEBRIEFING2"};
			class Markers
			{
				class DeathMatch
				{
					icon = 1;
					type = "hd_warning";
					color = "ColorRed";
					text = "#title";
					position = "position";
				};
				class TargetArea
				{
					size = -1;
					color = "ColorRed";
					position = "position";
				};
			};
		};
		class AllAboard
		{
			id = 9;
			type = 1;
			multiplayer = 1;
			occurAtARMEX = 2;
			title = "$STR_EP1_MPA_META_ALLABOARD";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\all_aboard_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\all_aboard.sqf";
			points = 75;
			runtimeConditions[] = {"vehicleForAll","notAloneAndOnFoot"};
			textLog = "$STR_EP1_MPA_META_ALLABOARD_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_ALLABOARD_TEXTTASK1","$STR_EP1_MPA_META_ALLABOARD_TEXTTASK2"};
			textDebriefing[] = {"$STR_EP1_MPA_META_ALLABOARD_TEXTDEBRIEFING1","$STR_LIB_CHAL_OUT_OF_TIME","$STR_EP1_MPA_META_ALLABOARD_TEXTDEBRIEFING2"};
		};
		class CheckpointRace
		{
			id = 10;
			type = 0;
			title = "$STR_LIB_CHAL_CHECK_RACE";
			image = "ca\mp_armory\armory_mp_challenges\data\images\checkpoint_race_co.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\challenges\checkpoint_race.sqf";
			scriptRespawn = "ca\mp_armory\armory_mp_challenges\data\scripts\challenges\checkpoint_race_Respawn.sqf";
			tidExclusions[] = {2,5,6,7,8,9,10,12};
			teamMode = 1;
			itemMode = 1;
			positionMode = 1;
			positionOnRoad = 1;
			minimumNodes = 3;
			useRoadRoute = 2;
			respawnDelay = 10;
			points[] = {150,0};
			taskStates[] = {1,0};
			textLog = "$STR_EP1_MPA_CHAL_CHECKPOINTRACE_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_CHAL_CHECKPOINTRACE_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_CHAL_DEATHMATCH_TEXTDEBRIEFING1","$STR_EP1_MPA_CHAL_DEATHMATCH_TEXTDEBRIEFING2"};
			class Markers
			{
				class Start
				{
					icon = 1;
					type = "hd_start";
					color = "ColorBlue";
					text = "$STR_LIB_CHAL_CHECK_RACE_MARKER_START";
					position = "#routeStart";
				};
				class Finish
				{
					icon = 1;
					type = "hd_end";
					color = "ColorBlue";
					text = "$STR_LIB_CHAL_CHECK_RACE_MARKER_FINISH";
					position = "#routeEnd";
				};
				class CP
				{
					icon = 1;
					type = "hd_dot";
					color = "ColorBlue";
					position = "#routeNode";
				};
			};
		};
		class Triathlon
		{
			id = 11;
			type = 0;
			title = "$STR_EP1_MPA_CHAL_TRIATHLON";
			image = "ca\mp_armory\armory_mp_challenges\data\images\triathlon_co.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\challenges\triathlon.sqf";
			scriptRespawn = "ca\mp_armory\armory_mp_challenges\data\scripts\challenges\checkpoint_race_Respawn.sqf";
			tidExclusions[] = {2,5,6,7,8,9,10,12};
			teamMode = 1;
			itemMode = 1;
			positionMode = 1;
			positionOnRoad = 1;
			useRoadRoute = 2;
			minimumNodes = 4;
			respawnDelay = 10;
			points[] = {200,0};
			taskStates[] = {1,0};
			textLog = "$STR_EP1_MPA_CHAL_TRIATHLON_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_CHAL_CHECKPOINTRACE_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_CHAL_DEATHMATCH_TEXTDEBRIEFING1","$STR_EP1_MPA_CHAL_DEATHMATCH_TEXTDEBRIEFING2"};
			class Markers
			{
				class Start
				{
					icon = 1;
					type = "hd_start";
					color = "ColorBlue";
					text = "$STR_LIB_CHAL_CHECK_RACE_MARKER_START";
					position = "#routeStart";
				};
				class Finish
				{
					icon = 1;
					type = "hd_end";
					color = "ColorBlue";
					text = "$STR_LIB_CHAL_CHECK_RACE_MARKER_FINISH";
					position = "#routeEnd";
				};
				class CP
				{
					icon = 1;
					type = "hd_dot";
					color = "ColorBlue";
					position = "#routeNode";
				};
			};
		};
		class RaceToPosition
		{
			id = 12;
			type = 1;
			multiplayer = 1;
			occurAtARMEX = 2;
			title = "$STR_EP1_MPA_META_RACETOPOSITION";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\race_to_position_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\race_to_position.sqf";
			points = 30;
			textLog = "$STR_EP1_MPA_META_RACETOPOSITION_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_RACETOPOSITION_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_META_RACETOPOSITION_TEXTDEBRIEFING1","$STR_LIB_CHAL_OUT_OF_TIME","$STR_EP1_MPA_META_RACETOPOSITION_TEXTDEBRIEFING2"};
		};
		class GetAway
		{
			id = 13;
			type = 1;
			occurAtARMEX = 2;
			title = "$STR_LIB_CHAL_GET_AWAY";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\get_away_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\get_away.sqf";
			tidExclusions[] = {2,5,6,7,8,9,10};
			points = 25;
			textLog = "$STR_EP1_MPA_META_GETAWAY_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_GETAWAY_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_META_GETAWAY_TEXTDEBRIEFING1","$STR_LIB_CHAL_OUT_OF_TIME","$STR_LIB_CHAL_DIED"};
		};
		class Stop
		{
			id = 14;
			type = 1;
			occurAtARMEX = 2;
			title = "$STR_LIB_CHAL_STOP";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\stop_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\stop.sqf";
			tidExclusions[] = {2,6,7,8,9,10,11,12};
			runtimeConditions[] = {"isMovingFast"};
			points = 10;
			textLog = "$STR_EP1_MPA_META_STOP_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_STOP_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_META_STOP_TEXTDEBRIEFING1","$STR_LIB_CHAL_OUT_OF_TIME","$STR_LIB_CHAL_DISEMBARKED","$STR_LIB_CHAL_DIED"};
		};
		class OneEighty
		{
			id = 15;
			type = 1;
			occurAtARMEX = 2;
			title = "$STR_LIB_CHAL_ONE_EIGHTY";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\one-eighty_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\one-eighty.sqf";
			tidExclusions[] = {2,6,7,8,9,10,11,12};
			points = 15;
			textLog = "$STR_EP1_MPA_META_ONEEIGHTY_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_ONEEIGHTY_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_META_ONEEIGHTY_TEXTDEBRIEFING1","$STR_LIB_CHAL_OUT_OF_TIME","$STR_LIB_CHAL_DISEMBARKED","$STR_LIB_CHAL_DIED"};
		};
		class HighSpeed
		{
			id = 16;
			type = 1;
			occurAtARMEX = 2;
			title = "$STR_LIB_CHAL_ACC_SPEED";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\high_speed_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\high_speed.sqf";
			tidExclusions[] = {2,6,7,8,9,10,11,12};
			points = 20;
			textLog = "$STR_EP1_MPA_META_HIGHSPEED_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_HIGHSPEED_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_META_HIGHSPEED_TEXTDEBRIEFING1","$STR_LIB_CHAL_OUT_OF_TIME","$STR_LIB_CHAL_DISEMBARKED","$STR_LIB_CHAL_DIED"};
		};
		class Land
		{
			id = 17;
			type = 1;
			occurAtARMEX = 2;
			title = "$STR_LIB_CHAL_LAND";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\land_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\land.sqf";
			tidExclusions[] = {0,1,2,5,6,7,8,9,10,11,12};
			runtimeConditions[] = {"isFlying"};
			points = 30;
			textLog = "$STR_EP1_MPA_META_LAND_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_LAND_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_META_LAND_TEXTDEBRIEFING1","$STR_LIB_CHAL_OUT_OF_TIME","$STR_LIB_CHAL_DISEMBARKED","$STR_LIB_CHAL_DIED"};
		};
		class Airtime
		{
			id = 18;
			type = 1;
			occurAtARMEX = 2;
			title = "$STR_EP1_MPA_META_AIRTIME";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\airtime_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\airtime.sqf";
			tidExclusions[] = {2,3,4,5,6,7,8,9,10,11,12};
			points = 25;
			textLog = "$STR_EP1_MPA_META_AIRTIME_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_AIRTIME_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_META_AIRTIME_TEXTDEBRIEFING1","$STR_LIB_CHAL_OUT_OF_TIME","$STR_LIB_CHAL_DISEMBARKED","$STR_LIB_CHAL_DIED"};
		};
		class SkyHigh
		{
			id = 19;
			type = 1;
			occurAtARMEX = 2;
			title = "$STR_LIB_CHAL_REACH_ALT";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\sky_high_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\sky_high.sqf";
			tidExclusions[] = {0,1,2,5,6,7,8,9,10,11,12};
			runtimeConditions[] = {"isFlying"};
			points = 30;
			textLog = "$STR_EP1_MPA_META_SKYHIGH_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_SKYHIGH_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_META_SKYHIGH_TEXTDEBRIEFING1","$STR_LIB_CHAL_OUT_OF_TIME","$STR_LIB_CHAL_DISEMBARKED","$STR_LIB_CHAL_DIED"};
		};
		class Ceiling
		{
			id = 20;
			type = 1;
			occurAtARMEX = 2;
			title = "$STR_LIB_CHAL_MIN_ALT";
			icon = "ca\mp_armory\armory_mp_challenges\data\icons\ceiling_icon_ca.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\meta-challenges\ceiling.sqf";
			tidExclusions[] = {0,1,2,5,6,7,8,9,10,11,12};
			runtimeConditions[] = {"isFlying"};
			points = 50;
			textLog = "$STR_EP1_MPA_META_CEILING_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_META_CEILING_TEXTTASK1","$STR_EP1_MPA_META_CEILING_TEXTTASK2"};
			textDebriefing[] = {"$STR_EP1_MPA_META_CEILING_TEXTDEBRIEFING1","$STR_LIB_CHAL_MIN_ALT_TOO_LONG","$STR_LIB_CHAL_DISEMBARKED","$STR_LIB_CHAL_MIN_ALT_OUT","$STR_LIB_CHAL_DIED"};
		};
		class Survival
		{
			id = 21;
			type = 0;
			title = "$STR_LIB_CHAL_SURVIVAL";
			image = "ca\mp_armory\armory_mp_challenges\data\images\survival_co.paa";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\challenges\survival.sqf";
			tidExclusions[] = {10,12};
			configConditions[] = {"hasWeapon"};
			positionMode = 1;
			respawnDelay = -1;
			taskWithoutPosition = 1;
			points[] = {250,0};
			taskStates[] = {1,0};
			textLog = "$STR_EP1_MPA_CHAL_SURVIVAL_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_CHAL_SURVIVAL_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_CHAL_SURVIVAL_TEXTDEBRIEFING1","$STR_EP1_MPA_CHAL_SURVIVAL_TEXTDEBRIEFING2"};
		};
		class LastManStanding
		{
			id = 22;
			type = 0;
			title = "$STR_EP1_MPA_CHAL_LASTMANSTANDING";
			image = "ca\mp_armory\armory_mp_challenges\data\images\last_man_standing_co.paa";
			scriptInit = "ca\mp_armory\armory_mp_challenges\data\scripts\challenges\death_match_Init.sqf";
			script = "ca\mp_armory\armory_mp_challenges\data\scripts\challenges\last_man_standing.sqf";
			tidExclusions[] = {10,12};
			configConditions[] = {"hasWeapon"};
			runtimeConditions[] = {"notAlone"};
			teamMode = 1;
			itemMode = 1;
			positionMode = 2;
			respawnDelay = -1;
			points[] = {250,0};
			taskStates[] = {1,0};
			textLog = "$STR_EP1_MPA_CHAL_LASTMANSTANDING_TEXTLOG";
			textTask[] = {"$STR_EP1_MPA_CHAL_LASTMANSTANDING_TEXTTASK1"};
			textDebriefing[] = {"$STR_EP1_MPA_CHAL_DEATHMATCH_TEXTDEBRIEFING1","$STR_EP1_MPA_CHAL_DEATHMATCH_TEXTDEBRIEFING2"};
			class Markers
			{
				class LastManStanding
				{
					icon = 1;
					type = "hd_warning";
					color = "ColorRed";
					text = "#title";
					position = "position";
				};
				class TargetArea
				{
					size = -1;
					color = "ColorRed";
					position = "position";
				};
			};
		};
	};
};
//};
