////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:02:03 2014 : Source 'file' date Fri Oct 31 06:02:03 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class characters : config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class CACharacters
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData","CAWeapons","CAWeapons_AK"};
	};
};
class CfgCoreData
{
	footStepL = "ca\characters\stopa_L.p3d";
	footStepR = "ca\characters\stopa_P.p3d";
	slopBlood = "ca\characters\krvava_skvrna.p3d";
};
class CfgFSMs
{
	class Formation
	{
		class States
		{
			class Init
			{
				name = "Init";
				class Init
				{
					function = "formationInit";
					parameters[] = {};
					thresholds[] = {{ 0,0.5,0.5 }};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "Start";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Combat
			{
				name = "Combat";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Leader_near_tgt
					{
						priority = 1.0;
						to = "Leader";
						class Condition
						{
							function = "formationIsLeader";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Always
					{
						priority = 0.0;
						to = "Search_path__Covering";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Test_reload
			{
				name = "Test_reload";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Reload
					{
						priority = 3.0;
						to = "Drop_to_ground";
						class Condition
						{
							function = "reloadNeeded";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class No_cover
					{
						priority = 1.0;
						to = "Start";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Search_path__Covering
			{
				name = "Search_path__Covering";
				class Init
				{
					function = "searchPath";
					parameters[] = {10,5};
					thresholds[] = {};
				};
				class Links
				{
					class Cover_reached
					{
						priority = 4.0;
						to = "Provide_cover__Out";
						class Condition
						{
							function = "coverReached";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class No_cover
					{
						priority = 1.0;
						to = "Start";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Next_target__Out
			{
				name = "Next_target__Out";
				class Init
				{
					function = "formationNextTarget";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Abort_Vehicle
					{
						priority = 3.0;
						to = "Clean_up";
						class Condition
						{
							function = "vehicle";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Abort_No_combat
					{
						priority = 3.0;
						to = "Clean_up";
						class Condition
						{
							function = "1-behaviourCombat";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Reload
					{
						priority = 2.0;
						to = "Drop_to_ground_1";
						class Condition
						{
							function = "reloadNeeded";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Stop_covering
					{
						priority = 1.0;
						to = "Clean_up";
						class Condition
						{
							function = "formationCanLeaveCover";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Random_delay
					{
						priority = 0.0;
						to = "Hide_or_Out_";
						class Condition
						{
							function = "randomDelay";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Start
			{
				name = "Start";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Vehicle
					{
						priority = 2.0;
						to = "Excluded";
						class Condition
						{
							function = "vehicle";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Combat
					{
						priority = 1.0;
						to = "Combat";
						class Condition
						{
							function = "behaviourCombat";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class No_combat
					{
						priority = 0.0;
						to = "Excluded";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Provide_cover__Out
			{
				name = "Provide_cover__Out";
				class Init
				{
					function = "formationProvideCover";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Abort_Vehicle
					{
						priority = 3.0;
						to = "Clean_up";
						class Condition
						{
							function = "vehicle";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Abort_No_combat
					{
						priority = 3.0;
						to = "Clean_up";
						class Condition
						{
							function = "1-behaviourCombat";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Reload
					{
						priority = 2.0;
						to = "Drop_to_ground_1";
						class Condition
						{
							function = "reloadNeeded";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Stop_covering
					{
						priority = 1.0;
						to = "Clean_up";
						class Condition
						{
							function = "formationCanLeaveCover";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Random_delay
					{
						priority = 0.0;
						to = "Hide_or_Out_";
						class Condition
						{
							function = "randomDelay";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Clean_up
			{
				name = "Clean_up";
				class Init
				{
					function = "formationCleanUp";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "Start";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Leader
			{
				name = "Leader";
				class Init
				{
					function = "formationLeader";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "Search_path__No";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Search_path__No
			{
				name = "Search_path__No";
				class Init
				{
					function = "searchPath";
					parameters[] = {0,0};
					thresholds[] = {};
				};
				class Links
				{
					class Cover_reached
					{
						priority = 4.0;
						to = "Provide_cover__Out";
						class Condition
						{
							function = "coverReached";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class No_cover
					{
						priority = 1.0;
						to = "Test_reload";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Drop_to_ground
			{
				name = "Drop_to_ground";
				class Init
				{
					function = "setUnitPosToDown";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "Reload";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Reload
			{
				name = "Reload";
				class Init
				{
					function = "reload";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class No_cover
					{
						priority = 1.0;
						to = "Start";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Excluded
			{
				name = "Excluded";
				class Init
				{
					function = "formationExcluded";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "Search_path__No_1";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Reload__Hiden_
			{
				name = "Reload__Hiden_";
				class Init
				{
					function = "reload";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "Provide_cover__Out";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Search_path__No_1
			{
				name = "Search_path__No_1";
				class Init
				{
					function = "searchPath";
					parameters[] = {0,0};
					thresholds[] = {};
				};
				class Links
				{
					class Cover_reached
					{
						priority = 4.0;
						to = "Provide_cover__Out";
						class Condition
						{
							function = "coverReached";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class No_cover
					{
						priority = 1.0;
						to = "Start";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Hide_in_cover__Hidden
			{
				name = "Hide_in_cover__Hidden";
				class Init
				{
					function = "formationHideInCover";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Abort_Vehicle
					{
						priority = 3.0;
						to = "Clean_up";
						class Condition
						{
							function = "vehicle";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Abort_No_combat
					{
						priority = 3.0;
						to = "Clean_up";
						class Condition
						{
							function = "1-behaviourCombat";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Reload
					{
						priority = 2.0;
						to = "Drop_to_ground_1";
						class Condition
						{
							function = "reloadNeeded";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Stop_covering
					{
						priority = 1.0;
						to = "Clean_up";
						class Condition
						{
							function = "formationCanLeaveCover";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Random_delay
					{
						priority = 0.0;
						to = "Hide_or_Out_";
						class Condition
						{
							function = "randomDelay";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Hide_or_Out_
			{
				name = "Hide_or_Out_";
				class Init
				{
					function = "formationInit";
					parameters[] = {};
					thresholds[] = {{ 1,0.2,1.2 }};
				};
				class Links
				{
					class Random
					{
						priority = 1.0;
						to = "Next_target__Out";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 1;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Otherwise
					{
						priority = 0.0;
						to = "Hide_in_cover__Hidden";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Drop_to_ground_1
			{
				name = "Drop_to_ground_1";
				class Init
				{
					function = "setUnitPosToDown";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "Reload__Hiden_";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
		};
		initState = "Init";
		finalStates[] = {};
	};
};
class CfgTalkTopics
{
	class Core
	{
		class Sentences
		{
			class Approached
			{
				text = "";
				speech[] = {};
				class Arguments{};
			};
			class Withdrawn: Approached{};
			class English
			{
				text = "$STR_conv_core_English";
				speech[] = {"EnglishQ"};
				class Arguments{};
			};
			class Czech
			{
				text = "$STR_conv_core_Czech";
				speech[] = {"CzechQ"};
				class Arguments{};
			};
			class Russian
			{
				text = "$STR_conv_core_Russian";
				speech[] = {"RussianQ"};
				class Arguments{};
			};
			class EnglishCzech
			{
				text = "$STR_conv_core_EnglishCzech";
				speech[] = {"EnglishQ","CzechQ"};
				class Arguments{};
			};
			class EnglishRussian
			{
				text = "$STR_conv_core_EnglishRussian";
				speech[] = {"EnglishQ","RussianQ"};
				class Arguments{};
			};
			class CzechRussian
			{
				text = "$STR_conv_core_CzechRussian";
				speech[] = {"CzechQ","RussianQ"};
				class Arguments{};
			};
		};
		class Arguments{};
		class Special{};
		startWithVocal[] = {};
		startWithConsonant[] = {};
		reactPlayer = "ca\characters\scripts\reactCore.sqf";
		react = "ca\characters\scripts\reactCore.fsm";
	};
	class Core_Full
	{
		class Sentences
		{
			class Hi_EN
			{
				text = "$STR_conv_core_Hi";
				speech[] = {"Hi_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Hi_RU: Hi_EN
			{
				text = "$STR_conv_core_Hi";
				speech[] = {"Hi_RU"};
			};
			class Hi_CZ: Hi_EN
			{
				text = "$STR_conv_core_Hi";
				speech[] = {"Hi_CZ"};
			};
			class What_EN
			{
				text = "$STR_conv_core_What";
				speech[] = {"WhatQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class What_RU: What_EN
			{
				text = "$STR_conv_core_What";
				speech[] = {"WhatQ_RU"};
			};
			class What_CZ: What_EN
			{
				text = "$STR_conv_core_What";
				speech[] = {"WhatQ_CZ"};
			};
			class HiThere_EN
			{
				text = "$STR_conv_core_HiThere";
				speech[] = {"Hi_EN","There_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class HiThere_RU: HiThere_EN
			{
				text = "$STR_conv_core_HiThere";
				speech[] = {"Hi_RU","There_RU"};
			};
			class HiThere_CZ: HiThere_EN
			{
				text = "$STR_conv_core_HiThere";
				speech[] = {"Hi_CZ","There_CZ"};
			};
			class Sir_EN
			{
				text = "$STR_conv_core_Sir";
				speech[] = {"SirQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Sir_RU: Sir_EN
			{
				text = "$STR_conv_core_Sir";
				speech[] = {"SirQ_RU"};
			};
			class Sir_CZ: Sir_EN
			{
				text = "$STR_conv_core_Sir";
				speech[] = {"SirQ_CZ"};
			};
			class Private_EN
			{
				text = "$STR_conv_core_Private";
				speech[] = {"PrivateQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Private_RU: Private_EN
			{
				text = "$STR_conv_core_Private";
				speech[] = {"PrivateQ_RU"};
			};
			class Private_CZ: Private_EN
			{
				text = "$STR_conv_core_Private";
				speech[] = {"PrivateQ_CZ"};
			};
			class YesPrivate_EN
			{
				text = "$STR_conv_core_YesPrivate";
				speech[] = {"Yes_EN","PrivateQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class YesPrivate_RU: YesPrivate_EN
			{
				text = "$STR_conv_core_YesPrivate";
				speech[] = {"Yes_RU","PrivateQ_RU"};
			};
			class YesPrivate_CZ: YesPrivate_EN
			{
				text = "$STR_conv_core_YesPrivate";
				speech[] = {"Yes_CZ","PrivateQ_CZ"};
			};
			class Corporal_EN
			{
				text = "$STR_conv_core_Corporal";
				speech[] = {"CorporalQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Corporal_RU: Corporal_EN
			{
				text = "$STR_conv_core_Corporal";
				speech[] = {"CorporalQ_RU"};
			};
			class Corporal_CZ: Corporal_EN
			{
				text = "$STR_conv_core_Corporal";
				speech[] = {"CorporalQ_CZ"};
			};
			class YesCorporal_EN
			{
				text = "$STR_conv_core_YesCorporal";
				speech[] = {"Yes_EN","CorporalQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class YesCorporal_RU: YesCorporal_EN
			{
				text = "$STR_conv_core_YesCorporal";
				speech[] = {"Yes_RU","CorporalQ_RU"};
			};
			class YesCorporal_CZ: YesCorporal_EN
			{
				text = "$STR_conv_core_YesCorporal";
				speech[] = {"Yes_CZ","CorporalQ_CZ"};
			};
			class Sergeant_EN
			{
				text = "$STR_conv_core_Sergeant";
				speech[] = {"SergeantQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Sergeant_RU: Sergeant_EN
			{
				text = "$STR_conv_core_Sergeant";
				speech[] = {"SergeantQ_RU"};
			};
			class Sergeant_CZ: Sergeant_EN
			{
				text = "$STR_conv_core_Sergeant";
				speech[] = {"SergeantQ_CZ"};
			};
			class YesSergeant_EN
			{
				text = "$STR_conv_core_YesSergeant";
				speech[] = {"Yes_EN","SergeantQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class YesSergeant_RU: YesSergeant_EN
			{
				text = "$STR_conv_core_YesSergeant";
				speech[] = {"Yes_RU","SergeantQ_RU"};
			};
			class YesSergeant_CZ: YesSergeant_EN
			{
				text = "$STR_conv_core_YesSergeant";
				speech[] = {"Yes_CZ","SergeantQ_CZ"};
			};
			class Lieutenant_EN
			{
				text = "$STR_conv_core_Lieutenant";
				speech[] = {"LieutenantQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Lieutenant_RU: Lieutenant_EN
			{
				text = "$STR_conv_core_Lieutenant";
				speech[] = {"LieutenantQ_RU"};
			};
			class Lieutenant_CZ: Lieutenant_EN
			{
				text = "$STR_conv_core_Lieutenant";
				speech[] = {"LieutenantQ_CZ"};
			};
			class YesLieutenant_EN
			{
				text = "$STR_conv_core_YesLieutenant";
				speech[] = {"Yes_EN","LieutenantQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class YesLieutenant_RU: YesLieutenant_EN
			{
				text = "$STR_conv_core_YesLieutenant";
				speech[] = {"Yes_RU","LieutenantQ_RU"};
			};
			class YesLieutenant_CZ: YesLieutenant_EN
			{
				text = "$STR_conv_core_YesLieutenant";
				speech[] = {"Yes_CZ","LieutenantQ_CZ"};
			};
			class Captain_EN
			{
				text = "$STR_conv_core_Captain";
				speech[] = {"CaptainQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Captain_RU: Captain_EN
			{
				text = "$STR_conv_core_Captain";
				speech[] = {"CaptainQ_RU"};
			};
			class Captain_CZ: Captain_EN
			{
				text = "$STR_conv_core_Captain";
				speech[] = {"CaptainQ_CZ"};
			};
			class YesCaptain_EN
			{
				text = "$STR_conv_core_YesCaptain";
				speech[] = {"Yes_EN","CaptainQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class YesCaptain_RU: YesCaptain_EN
			{
				text = "$STR_conv_core_YesCaptain";
				speech[] = {"Yes_RU","CaptainQ_RU"};
			};
			class YesCaptain_CZ: YesCaptain_EN
			{
				text = "$STR_conv_core_YesCaptain";
				speech[] = {"Yes_CZ","CaptainQ_CZ"};
			};
			class Major_EN
			{
				text = "$STR_conv_core_Major";
				speech[] = {"MajorQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Major_RU: Major_EN
			{
				text = "$STR_conv_core_Major";
				speech[] = {"MajorQ_RU"};
			};
			class Major_CZ: Major_EN
			{
				text = "$STR_conv_core_Major";
				speech[] = {"MajorQ_CZ"};
			};
			class YesMajor_EN
			{
				text = "$STR_conv_core_YesMajor";
				speech[] = {"Yes_EN","MajorQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class YesMajor_RU: YesMajor_EN
			{
				text = "$STR_conv_core_YesMajor";
				speech[] = {"Yes_RU","MajorQ_RU"};
			};
			class YesMajor_CZ: YesMajor_EN
			{
				text = "$STR_conv_core_YesMajor";
				speech[] = {"Yes_CZ","MajorQ_CZ"};
			};
			class Colonel_EN
			{
				text = "$STR_conv_core_Colonel";
				speech[] = {"ColonelQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Colonel_RU: Colonel_EN
			{
				text = "$STR_conv_core_Colonel";
				speech[] = {"ColonelQ_RU"};
			};
			class Colonel_CZ: Colonel_EN
			{
				text = "$STR_conv_core_Colonel";
				speech[] = {"ColonelQ_CZ"};
			};
			class YesColonel_EN
			{
				text = "$STR_conv_core_YesColonel";
				speech[] = {"Yes_EN","ColonelQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class YesColonel_RU: YesColonel_EN
			{
				text = "$STR_conv_core_YesColonel";
				speech[] = {"Yes_RU","ColonelQ_RU"};
			};
			class YesColonel_CZ: YesColonel_EN
			{
				text = "$STR_conv_core_YesColonel";
				speech[] = {"Yes_CZ","ColonelQ_CZ"};
			};
			class GoodDaySir_EN
			{
				text = "$STR_conv_core_GoodDaySir";
				speech[] = {"Good_EN","Day_EN","Sir_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GoodDaySir_RU: GoodDaySir_EN
			{
				text = "$STR_conv_core_GoodDaySir";
				speech[] = {"Good_RU","Day_RU","Sir_RU"};
			};
			class GoodDaySir_CZ: GoodDaySir_EN
			{
				text = "$STR_conv_core_GoodDaySir";
				speech[] = {"Good_CZ","Day_CZ","Sir_CZ"};
			};
			class GoodEveningSir_EN
			{
				text = "$STR_conv_core_GoodEveningSir";
				speech[] = {"Good_EN","Evening_EN","Sir_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GoodEveningSir_RU: GoodEveningSir_EN
			{
				text = "$STR_conv_core_GoodEveningSir";
				speech[] = {"Good_RU","Evening_RU","Sir_RU"};
			};
			class GoodEveningSir_CZ: GoodEveningSir_EN
			{
				text = "$STR_conv_core_GoodEveningSir";
				speech[] = {"Good_CZ","Evening_CZ","Sir_CZ"};
			};
			class GoodMorningSir_EN
			{
				text = "$STR_conv_core_GoodMorningSir";
				speech[] = {"Good_EN","Morning_EN","Sir_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GoodMorningSir_RU: GoodMorningSir_EN
			{
				text = "$STR_conv_core_GoodMorningSir";
				speech[] = {"Good_RU","Morning_RU","Sir_RU"};
			};
			class GoodMorningSir_CZ: GoodMorningSir_EN
			{
				text = "$STR_conv_core_GoodMorningSir";
				speech[] = {"Good_CZ","Morning_CZ","Sir_CZ"};
			};
			class Soldier_EN
			{
				text = "$STR_conv_core_Soldier";
				speech[] = {"SoldierQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Soldier_RU: Soldier_EN
			{
				text = "$STR_conv_core_Soldier";
				speech[] = {"SoldierQ_RU"};
			};
			class Soldier_CZ: Soldier_EN
			{
				text = "$STR_conv_core_Soldier";
				speech[] = {"SoldierQ_CZ"};
			};
			class MorningSoldier_EN
			{
				text = "$STR_conv_core_MorningSoldier";
				speech[] = {"Morning_EN","Soldier_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class MorningSoldier_RU: MorningSoldier_EN
			{
				text = "$STR_conv_core_MorningSoldier";
				speech[] = {"Morning_RU","Soldier_RU"};
			};
			class MorningSoldier_CZ: MorningSoldier_EN
			{
				text = "$STR_conv_core_MorningSoldier";
				speech[] = {"Morning_CZ","Soldier_CZ"};
			};
			class EveningSoldier_EN
			{
				text = "$STR_conv_core_EveningSoldier";
				speech[] = {"Evening_EN","Soldier_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class EveningSoldier_RU: EveningSoldier_EN
			{
				text = "$STR_conv_core_EveningSoldier";
				speech[] = {"Evening_RU","Soldier_RU"};
			};
			class EveningSoldier_CZ: EveningSoldier_EN
			{
				text = "$STR_conv_core_EveningSoldier";
				speech[] = {"Evening_CZ","Soldier_CZ"};
			};
			class WhatDoYouWant_EN
			{
				text = "$STR_conv_core_WhatDoYouWant";
				speech[] = {"What_EN","DoYouWantQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WhatDoYouWant_RU: WhatDoYouWant_EN
			{
				text = "$STR_conv_core_WhatDoYouWant";
				speech[] = {"What_RU","DoYouWantQ_RU"};
			};
			class WhatDoYouWant_CZ: WhatDoYouWant_EN
			{
				text = "$STR_conv_core_WhatDoYouWant";
				speech[] = {"What_CZ","DoYouWantQ_CZ"};
			};
			class WhatDoYouNeed_EN
			{
				text = "$STR_conv_core_WhatDoYouNeed";
				speech[] = {"What_EN","DoYouNeedQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WhatDoYouNeed_RU: WhatDoYouNeed_EN
			{
				text = "$STR_conv_core_WhatDoYouNeed";
				speech[] = {"What_RU","DoYouNeedQ_RU"};
			};
			class WhatDoYouNeed_CZ: WhatDoYouNeed_EN
			{
				text = "$STR_conv_core_WhatDoYouNeed";
				speech[] = {"What_CZ","DoYouNeedQ_CZ"};
			};
			class CantYouSeeImBusy_EN
			{
				text = "$STR_conv_core_CantYouSeeImBusy";
				speech[] = {"CantYouSeeImBusyQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class CantYouSeeImBusy_RU: CantYouSeeImBusy_EN
			{
				text = "$STR_conv_core_CantYouSeeImBusy";
				speech[] = {"CantYouSeeImBusyQ_RU"};
			};
			class CantYouSeeImBusy_CZ: CantYouSeeImBusy_EN
			{
				text = "$STR_conv_core_CantYouSeeImBusy";
				speech[] = {"CantYouSeeImBusyQ_CZ"};
			};
			class BitOccupiedAtTheMomentDude_EN
			{
				text = "$STR_conv_core_BitOccupiedAtTheMomentDude";
				speech[] = {"BitOccupiedAtTheMoment_EN","Dude_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class BitOccupiedAtTheMomentDude_RU: BitOccupiedAtTheMomentDude_EN
			{
				text = "$STR_conv_core_BitOccupiedAtTheMomentDude";
				speech[] = {"BitOccupiedAtTheMoment_RU","Dude_RU"};
			};
			class BitOccupiedAtTheMomentDude_CZ: BitOccupiedAtTheMomentDude_EN
			{
				text = "$STR_conv_core_BitOccupiedAtTheMomentDude";
				speech[] = {"BitOccupiedAtTheMoment_CZ","Dude_CZ"};
			};
			class ImBusy_EN
			{
				text = "$STR_conv_core_ImBusy";
				speech[] = {"ImBusy_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class ImBusy_RU: ImBusy_EN
			{
				text = "$STR_conv_core_ImBusy";
				speech[] = {"ImBusy_RU"};
			};
			class ImBusy_CZ: ImBusy_EN
			{
				text = "$STR_conv_core_ImBusy";
				speech[] = {"ImBusy_CZ"};
			};
			class PissOff_EN
			{
				text = "$STR_conv_core_PissOff";
				speech[] = {"PissOff_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class PissOff_RU: PissOff_EN
			{
				text = "$STR_conv_core_PissOff";
				speech[] = {"PissOff_RU"};
			};
			class PissOff_CZ: PissOff_EN
			{
				text = "$STR_conv_core_PissOff";
				speech[] = {"PissOff_CZ"};
			};
			class Maam_EN
			{
				text = "$STR_conv_core_Maam";
				speech[] = {"MaamQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Maam_RU: Maam_EN
			{
				text = "$STR_conv_core_Maam";
				speech[] = {"MaamQ_RU"};
			};
			class Maam_CZ: Maam_EN
			{
				text = "$STR_conv_core_Maam";
				speech[] = {"MaamQ_CZ"};
			};
			class ALovelyDayToYou_EN
			{
				text = "$STR_conv_core_ALovelyDayToYou";
				speech[] = {"ALovelyDayToYou_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class ALovelyDayToYou_RU: ALovelyDayToYou_EN
			{
				text = "$STR_conv_core_ALovelyDayToYou";
				speech[] = {"ALovelyDayToYou_RU"};
			};
			class ALovelyDayToYou_CZ: ALovelyDayToYou_EN
			{
				text = "$STR_conv_core_ALovelyDayToYou";
				speech[] = {"ALovelyDayToYou_CZ"};
			};
			class TopOfTheMorningMiss_EN
			{
				text = "$STR_conv_core_TopOfTheMorningMiss";
				speech[] = {"TopOfTheMorningMiss_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class TopOfTheMorningMiss_RU: TopOfTheMorningMiss_EN
			{
				text = "$STR_conv_core_TopOfTheMorningMiss";
				speech[] = {"TopOfTheMorningMiss_RU"};
			};
			class TopOfTheMorningMiss_CZ: TopOfTheMorningMiss_EN
			{
				text = "$STR_conv_core_TopOfTheMorningMiss";
				speech[] = {"TopOfTheMorningMiss_CZ"};
			};
			class HiGorgeous_EN
			{
				text = "$STR_conv_core_Maam";
				speech[] = {"Gorgeous_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class HiGorgeous_RU: HiGorgeous_EN
			{
				text = "$STR_conv_core_Maam";
				speech[] = {"Gorgeous_RU"};
			};
			class HiGorgeous_CZ: HiGorgeous_EN
			{
				text = "$STR_conv_core_Maam";
				speech[] = {"Gorgeous_CZ"};
			};
			class HelloSexy_EN
			{
				text = "$STR_conv_core_HelloSexy";
				speech[] = {"Hello_EN","Sexy_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class HelloSexy_RU: HelloSexy_EN
			{
				text = "$STR_conv_core_HelloSexy";
				speech[] = {"Hello_RU","Sexy_RU"};
			};
			class HelloSexy_CZ: HelloSexy_EN
			{
				text = "$STR_conv_core_HelloSexy";
				speech[] = {"Hello_CZ","Sexy_CZ"};
			};
			class Yessir_EN
			{
				text = "$STR_conv_core_Yessir";
				speech[] = {"YessirQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Yessir_RU: Yessir_EN
			{
				text = "$STR_conv_core_Yessir";
				speech[] = {"YessirQ_RU"};
			};
			class Yessir_CZ: Yessir_EN
			{
				text = "$STR_conv_core_Yessir";
				speech[] = {"YessirQ_CZ"};
			};
			class HelloSir_EN
			{
				text = "$STR_conv_core_HelloSir";
				speech[] = {"Hello_EN","Sir_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class HelloSir_RU: HelloSir_EN
			{
				text = "$STR_conv_core_HelloSir";
				speech[] = {"Hello_RU","Sir_RU"};
			};
			class HelloSir_CZ: HelloSir_EN
			{
				text = "$STR_conv_core_HelloSir";
				speech[] = {"Hello_CZ","Sir_CZ"};
			};
			class Yep_EN
			{
				text = "$STR_conv_core_Yep";
				speech[] = {"YepQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Yep_RU: Yep_EN
			{
				text = "$STR_conv_core_Yep";
				speech[] = {"YepQ_RU"};
			};
			class Yep_CZ: Yep_EN
			{
				text = "$STR_conv_core_Yep";
				speech[] = {"YepQ_CZ"};
			};
			class Yeah_EN
			{
				text = "$STR_conv_core_Yeah";
				speech[] = {"YeahQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Yeah_RU: Yeah_EN
			{
				text = "$STR_conv_core_Yeah";
				speech[] = {"YeahQ_RU"};
			};
			class Yeah_CZ: Yeah_EN
			{
				text = "$STR_conv_core_Yeah";
				speech[] = {"YeahQ_CZ"};
			};
			class NotNow_EN
			{
				text = "$STR_conv_core_NotNow";
				speech[] = {"NotNow_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class NotNow_RU: NotNow_EN
			{
				text = "$STR_conv_core_NotNow";
				speech[] = {"NotNow_RU"};
			};
			class NotNow_CZ: NotNow_EN
			{
				text = "$STR_conv_core_NotNow";
				speech[] = {"NotNow_CZ"};
			};
			class Later_EN
			{
				text = "$STR_conv_core_Later";
				speech[] = {"Later_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Later_RU: Later_EN
			{
				text = "$STR_conv_core_Later";
				speech[] = {"Later_RU"};
			};
			class Later_CZ: Later_EN
			{
				text = "$STR_conv_core_Later";
				speech[] = {"Later_CZ"};
			};
			class NoTime_EN
			{
				text = "$STR_conv_core_NoTime";
				speech[] = {"NoTime_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class NoTime_RU: NoTime_EN
			{
				text = "$STR_conv_core_NoTime";
				speech[] = {"NoTime_RU"};
			};
			class NoTime_CZ: NoTime_EN
			{
				text = "$STR_conv_core_NoTime";
				speech[] = {"NoTime_CZ"};
			};
			class Hush_EN
			{
				text = "$STR_conv_core_Hush";
				speech[] = {"Hush_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Hush_RU: Hush_EN
			{
				text = "$STR_conv_core_Hush";
				speech[] = {"Hush_RU"};
			};
			class Hush_CZ: Hush_EN
			{
				text = "$STR_conv_core_Hush";
				speech[] = {"Hush_CZ"};
			};
			class Ssshh_EN
			{
				text = "$STR_conv_core_Ssshh";
				speech[] = {"Ssshh_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Ssshh_RU: Ssshh_EN
			{
				text = "$STR_conv_core_Ssshh";
				speech[] = {"Ssshh_RU"};
			};
			class Ssshh_CZ: Ssshh_EN
			{
				text = "$STR_conv_core_Ssshh";
				speech[] = {"Ssshh_CZ"};
			};
			class Hello_EN
			{
				text = "$STR_conv_core_Hello";
				speech[] = {"Hello_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Hello_RU: Hello_EN
			{
				text = "$STR_conv_core_Hello";
				speech[] = {"Hello_RU"};
			};
			class Hello_CZ: Hello_EN
			{
				text = "$STR_conv_core_Hello";
				speech[] = {"Hello_CZ"};
			};
			class GoodDay_EN
			{
				text = "$STR_conv_core_GoodDay";
				speech[] = {"Good_EN","Day_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GoodDay_RU: GoodDay_EN
			{
				text = "$STR_conv_core_GoodDay";
				speech[] = {"Good_RU","Day_RU"};
			};
			class GoodDay_CZ: GoodDay_EN
			{
				text = "$STR_conv_core_GoodDay";
				speech[] = {"Good_CZ","Day_CZ"};
			};
			class GoodMorning_EN
			{
				text = "$STR_conv_core_GoodMorning";
				speech[] = {"Good_EN","Morning_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GoodMorning_RU: GoodMorning_EN
			{
				text = "$STR_conv_core_GoodMorning";
				speech[] = {"Good_RU","Morning_RU"};
			};
			class GoodMorning_CZ: GoodMorning_EN
			{
				text = "$STR_conv_core_GoodMorning";
				speech[] = {"Good_CZ","Morning_CZ"};
			};
			class GoodEvening_EN
			{
				text = "$STR_conv_core_GoodEvening";
				speech[] = {"Good_EN","Evening_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GoodEvening_RU: GoodEvening_EN
			{
				text = "$STR_conv_core_GoodEvening";
				speech[] = {"Good_RU","Evening_RU"};
			};
			class GoodEvening_CZ: GoodEvening_EN
			{
				text = "$STR_conv_core_GoodEvening";
				speech[] = {"Good_CZ","Evening_CZ"};
			};
			class NiceToSeeYou_EN
			{
				text = "$STR_conv_core_NiceToSeeYou";
				speech[] = {"NiceToSeeYou_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class NiceToSeeYou_RU: NiceToSeeYou_EN
			{
				text = "$STR_conv_core_NiceToSeeYou";
				speech[] = {"NiceToSeeYou_RU"};
			};
			class NiceToSeeYou_CZ: NiceToSeeYou_EN
			{
				text = "$STR_conv_core_NiceToSeeYou";
				speech[] = {"NiceToSeeYou_CZ"};
			};
			class GoodToHaveYouHere_EN
			{
				text = "$STR_conv_core_GoodToHaveYouHere";
				speech[] = {"Good_EN","ToHaveYouHere_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GoodToHaveYouHere_RU: GoodToHaveYouHere_EN
			{
				text = "$STR_conv_core_GoodToHaveYouHere";
				speech[] = {"Good_RU","ToHaveYouHere_RU"};
			};
			class GoodToHaveYouHere_CZ: GoodToHaveYouHere_EN
			{
				text = "$STR_conv_core_GoodToHaveYouHere";
				speech[] = {"Good_CZ","ToHaveYouHere_CZ"};
			};
			class GladYouGuysAreHere_EN
			{
				text = "$STR_conv_core_GladYouGuysAreHere";
				speech[] = {"Glad_EN","YouGuysAreHere_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GladYouGuysAreHere_RU: GladYouGuysAreHere_EN
			{
				text = "$STR_conv_core_GladYouGuysAreHere";
				speech[] = {"Glad_RU","YouGuysAreHere_RU"};
			};
			class GladYouGuysAreHere_CZ: GladYouGuysAreHere_EN
			{
				text = "$STR_conv_core_GladYouGuysAreHere";
				speech[] = {"Glad_CZ","YouGuysAreHere_CZ"};
			};
			class GladYouAreHere_EN
			{
				text = "$STR_conv_core_GladYouAreHere";
				speech[] = {"Glad_EN","YouAreHere_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GladYouAreHere_RU: GladYouAreHere_EN
			{
				text = "$STR_conv_core_GladYouAreHere";
				speech[] = {"Glad_RU","YouAreHere_RU"};
			};
			class GladYouAreHere_CZ: GladYouAreHere_EN
			{
				text = "$STR_conv_core_GladYouAreHere";
				speech[] = {"Glad_CZ","YouAreHere_CZ"};
			};
			class CanIHelpYou_EN
			{
				text = "$STR_conv_core_CanIHelpYou";
				speech[] = {"CanIHelpYouQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class CanIHelpYou_RU: CanIHelpYou_EN
			{
				text = "$STR_conv_core_CanIHelpYou";
				speech[] = {"CanIHelpYouQ_RU"};
			};
			class CanIHelpYou_CZ: CanIHelpYou_EN
			{
				text = "$STR_conv_core_CanIHelpYou";
				speech[] = {"CanIHelpYouQ_CZ"};
			};
			class GetLost_EN
			{
				text = "$STR_conv_core_GetLost";
				speech[] = {"GetLost_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GetLost_RU: GetLost_EN
			{
				text = "$STR_conv_core_GetLost";
				speech[] = {"GetLost_RU"};
			};
			class GetLost_CZ: GetLost_EN
			{
				text = "$STR_conv_core_GetLost";
				speech[] = {"GetLost_CZ"};
			};
			class GoHomeAlready_EN
			{
				text = "$STR_conv_core_GoHomeAlready";
				speech[] = {"GoHomeAlready_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GoHomeAlready_RU: GoHomeAlready_EN
			{
				text = "$STR_conv_core_GoHomeAlready";
				speech[] = {"GoHomeAlready_RU"};
			};
			class GoHomeAlready_CZ: GoHomeAlready_EN
			{
				text = "$STR_conv_core_GoHomeAlready";
				speech[] = {"GoHomeAlready_CZ"};
			};
			class BabykillingMorons_EN
			{
				text = "$STR_conv_core_BabykillingMorons";
				speech[] = {"BabykillingMorons_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class BabykillingMorons_RU: BabykillingMorons_EN
			{
				text = "$STR_conv_core_BabykillingMorons";
				speech[] = {"BabykillingMorons_RU"};
			};
			class BabykillingMorons_CZ: BabykillingMorons_EN
			{
				text = "$STR_conv_core_BabykillingMorons";
				speech[] = {"BabykillingMorons_CZ"};
			};
			class GoAwayMurderers_EN
			{
				text = "$STR_conv_core_GoAwayMurderers";
				speech[] = {"GoAwayMurderers_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GoAwayMurderers_RU: GoAwayMurderers_EN
			{
				text = "$STR_conv_core_GoAwayMurderers";
				speech[] = {"GoAwayMurderers_RU"};
			};
			class GoAwayMurderers_CZ: GoAwayMurderers_EN
			{
				text = "$STR_conv_core_GoAwayMurderers";
				speech[] = {"GoAwayMurderers_CZ"};
			};
			class LeaveUsAlone_EN
			{
				text = "$STR_conv_core_LeaveUsAlone";
				speech[] = {"LeaveUsAlone_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class LeaveUsAlone_RU: LeaveUsAlone_EN
			{
				text = "$STR_conv_core_LeaveUsAlone";
				speech[] = {"LeaveUsAlone_RU"};
			};
			class LeaveUsAlone_CZ: LeaveUsAlone_EN
			{
				text = "$STR_conv_core_LeaveUsAlone";
				speech[] = {"LeaveUsAlone_CZ"};
			};
			class LeaveMeAlone_EN
			{
				text = "$STR_conv_core_LeaveMeAlone";
				speech[] = {"LeaveMeAlone_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class LeaveMeAlone_RU: LeaveMeAlone_EN
			{
				text = "$STR_conv_core_LeaveMeAlone";
				speech[] = {"LeaveMeAlone_RU"};
			};
			class LeaveMeAlone_CZ: LeaveMeAlone_EN
			{
				text = "$STR_conv_core_LeaveMeAlone";
				speech[] = {"LeaveMeAlone_CZ"};
			};
			class GoBackToYourOwnCountry_EN
			{
				text = "$STR_conv_core_GoBackToYourOwnCountry";
				speech[] = {"GoBackToYourOwnCountry_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GoBackToYourOwnCountry_RU: GoBackToYourOwnCountry_EN
			{
				text = "$STR_conv_core_GoBackToYourOwnCountry";
				speech[] = {"GoBackToYourOwnCountry_RU"};
			};
			class GoBackToYourOwnCountry_CZ: GoBackToYourOwnCountry_EN
			{
				text = "$STR_conv_core_GoBackToYourOwnCountry";
				speech[] = {"GoBackToYourOwnCountry_CZ"};
			};
			class FuckingPig_EN
			{
				text = "$STR_conv_core_FuckingPig";
				speech[] = {"FuckingPig_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class FuckingPig_RU: FuckingPig_EN
			{
				text = "$STR_conv_core_FuckingPig";
				speech[] = {"FuckingPig_RU"};
			};
			class FuckingPig_CZ: FuckingPig_EN
			{
				text = "$STR_conv_core_FuckingPig";
				speech[] = {"FuckingPig_CZ"};
			};
			class StupidSonOfABitch_EN
			{
				text = "$STR_conv_core_StupidSonOfABitch";
				speech[] = {"StupidSonOfABitch_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class StupidSonOfABitch_RU: StupidSonOfABitch_EN
			{
				text = "$STR_conv_core_StupidSonOfABitch";
				speech[] = {"StupidSonOfABitch_RU"};
			};
			class StupidSonOfABitch_CZ: StupidSonOfABitch_EN
			{
				text = "$STR_conv_core_StupidSonOfABitch";
				speech[] = {"StupidSonOfABitch_CZ"};
			};
			class DamnYouToHell_EN
			{
				text = "$STR_conv_core_DamnYouToHell";
				speech[] = {"DamnYouToHell_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class DamnYouToHell_RU: DamnYouToHell_EN
			{
				text = "$STR_conv_core_DamnYouToHell";
				speech[] = {"DamnYouToHell_RU"};
			};
			class DamnYouToHell_CZ: DamnYouToHell_EN
			{
				text = "$STR_conv_core_DamnYouToHell";
				speech[] = {"DamnYouToHell_CZ"};
			};
			class MayIAskYouSomething_EN
			{
				text = "$STR_conv_core_MayIAskYouSomething";
				speech[] = {"MayIAskYouSomethingQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class MayIAskYouSomething_RU: MayIAskYouSomething_EN
			{
				text = "$STR_conv_core_MayIAskYouSomething";
				speech[] = {"MayIAskYouSomethingQ_RU"};
			};
			class MayIAskYouSomething_CZ: MayIAskYouSomething_EN
			{
				text = "$STR_conv_core_MayIAskYouSomething";
				speech[] = {"MayIAskYouSomethingQ_CZ"};
			};
			class PleaseCanYouHelp_EN
			{
				text = "$STR_conv_core_PleaseCanYouHelp";
				speech[] = {"PleaseCanYouHelpQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class PleaseCanYouHelp_RU: PleaseCanYouHelp_EN
			{
				text = "$STR_conv_core_PleaseCanYouHelp";
				speech[] = {"PleaseCanYouHelpQ_RU"};
			};
			class PleaseCanYouHelp_CZ: PleaseCanYouHelp_EN
			{
				text = "$STR_conv_core_PleaseCanYouHelp";
				speech[] = {"PleaseCanYouHelpQ_CZ"};
			};
			class Speak_EN
			{
				text = "$STR_conv_core_Speak";
				speech[] = {"Speak_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Speak_RU: Speak_EN
			{
				text = "$STR_conv_core_Speak";
				speech[] = {"Speak_RU"};
			};
			class Speak_CZ: Speak_EN
			{
				text = "$STR_conv_core_Speak";
				speech[] = {"Speak_CZ"};
			};
			class HelpUs_EN
			{
				text = "$STR_conv_core_HelpUs";
				speech[] = {"HelpUs_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class HelpUs_RU: HelpUs_EN
			{
				text = "$STR_conv_core_HelpUs";
				speech[] = {"HelpUs_RU"};
			};
			class HelpUs_CZ: HelpUs_EN
			{
				text = "$STR_conv_core_HelpUs";
				speech[] = {"HelpUs_CZ"};
			};
			class IWillTellYouNothing_EN
			{
				text = "$STR_conv_core_IWillTellYouNothing";
				speech[] = {"IWillTellYouNothing_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class IWillTellYouNothing_RU: IWillTellYouNothing_EN
			{
				text = "$STR_conv_core_IWillTellYouNothing";
				speech[] = {"IWillTellYouNothing_RU"};
			};
			class IWillTellYouNothing_CZ: IWillTellYouNothing_EN
			{
				text = "$STR_conv_core_IWillTellYouNothing";
				speech[] = {"IWillTellYouNothing_CZ"};
			};
			class ImNotSayingAnotherWord_EN
			{
				text = "$STR_conv_core_ImNotSayingAnotherWord";
				speech[] = {"ImNotSayingAnotherWord_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class ImNotSayingAnotherWord_RU: ImNotSayingAnotherWord_EN
			{
				text = "$STR_conv_core_ImNotSayingAnotherWord";
				speech[] = {"ImNotSayingAnotherWord_RU"};
			};
			class ImNotSayingAnotherWord_CZ: ImNotSayingAnotherWord_EN
			{
				text = "$STR_conv_core_ImNotSayingAnotherWord";
				speech[] = {"ImNotSayingAnotherWord_CZ"};
			};
			class KeepingMyMouthShut_EN
			{
				text = "$STR_conv_core_KeepingMyMouthShut";
				speech[] = {"KeepingMyMouthShut_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class KeepingMyMouthShut_RU: KeepingMyMouthShut_EN
			{
				text = "$STR_conv_core_KeepingMyMouthShut";
				speech[] = {"KeepingMyMouthShut_RU"};
			};
			class KeepingMyMouthShut_CZ: KeepingMyMouthShut_EN
			{
				text = "$STR_conv_core_KeepingMyMouthShut";
				speech[] = {"KeepingMyMouthShut_CZ"};
			};
			class MindYourOwnBusiness_EN
			{
				text = "$STR_conv_core_MindYourOwnBusiness";
				speech[] = {"MindYourOwnBusiness_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class MindYourOwnBusiness_RU: MindYourOwnBusiness_EN
			{
				text = "$STR_conv_core_MindYourOwnBusiness";
				speech[] = {"MindYourOwnBusiness_RU"};
			};
			class MindYourOwnBusiness_CZ: MindYourOwnBusiness_EN
			{
				text = "$STR_conv_core_MindYourOwnBusiness";
				speech[] = {"MindYourOwnBusiness_CZ"};
			};
			class GoBotherSomeoneElse_EN
			{
				text = "$STR_conv_core_GoBotherSomeoneElse";
				speech[] = {"GoBotherSomeoneElse_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GoBotherSomeoneElse_RU: GoBotherSomeoneElse_EN
			{
				text = "$STR_conv_core_GoBotherSomeoneElse";
				speech[] = {"GoBotherSomeoneElse_RU"};
			};
			class GoBotherSomeoneElse_CZ: GoBotherSomeoneElse_EN
			{
				text = "$STR_conv_core_GoBotherSomeoneElse";
				speech[] = {"GoBotherSomeoneElse_CZ"};
			};
			class WhatsUp_EN
			{
				text = "$STR_conv_core_WhatsUp";
				speech[] = {"WhatsUpQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WhatsUp_RU: WhatsUp_EN
			{
				text = "$STR_conv_core_WhatsUp";
				speech[] = {"WhatsUpQ_RU"};
			};
			class WhatsUp_CZ: WhatsUp_EN
			{
				text = "$STR_conv_core_WhatsUp";
				speech[] = {"WhatsUpQ_CZ"};
			};
			class Sup_EN
			{
				text = "$STR_conv_core_Sup";
				speech[] = {"SupQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Sup_RU: Sup_EN
			{
				text = "$STR_conv_core_Sup";
				speech[] = {"SupQ_RU"};
			};
			class Sup_CZ: Sup_EN
			{
				text = "$STR_conv_core_Sup";
				speech[] = {"SupQ_CZ"};
			};
			class Yo_EN
			{
				text = "$STR_conv_core_Yo";
				speech[] = {"Yo_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Yo_RU: Yo_EN
			{
				text = "$STR_conv_core_Yo";
				speech[] = {"Yo_RU"};
			};
			class Yo_CZ: Yo_EN
			{
				text = "$STR_conv_core_Yo";
				speech[] = {"Yo_CZ"};
			};
			class HowsThings_EN
			{
				text = "$STR_conv_core_HowsThings";
				speech[] = {"HowsThingsQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class HowsThings_RU: HowsThings_EN
			{
				text = "$STR_conv_core_HowsThings";
				speech[] = {"HowsThingsQ_RU"};
			};
			class HowsThings_CZ: HowsThings_EN
			{
				text = "$STR_conv_core_HowsThings";
				speech[] = {"HowsThingsQ_CZ"};
			};
			class HowAreYou_EN
			{
				text = "$STR_conv_core_HowAreYou";
				speech[] = {"HowAreYouQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class HowAreYou_RU: HowAreYou_EN
			{
				text = "$STR_conv_core_HowAreYou";
				speech[] = {"HowAreYouQ_RU"};
			};
			class HowAreYou_CZ: HowAreYou_EN
			{
				text = "$STR_conv_core_HowAreYou";
				speech[] = {"HowAreYouQ_CZ"};
			};
			class Hey_EN
			{
				text = "$STR_conv_core_Hey";
				speech[] = {"Hey_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Hey_RU: Hey_EN
			{
				text = "$STR_conv_core_Hey";
				speech[] = {"Hey_RU"};
			};
			class Hey_CZ: Hey_EN
			{
				text = "$STR_conv_core_Hey";
				speech[] = {"Hey_CZ"};
			};
			class Hiya_EN
			{
				text = "$STR_conv_core_Hiya";
				speech[] = {"Hiya_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class Hiya_RU: Hiya_EN
			{
				text = "$STR_conv_core_Hiya";
				speech[] = {"Hiya_RU"};
			};
			class Hiya_CZ: Hiya_EN
			{
				text = "$STR_conv_core_Hiya";
				speech[] = {"Hiya_CZ"};
			};
			class WhatsHappening_EN
			{
				text = "$STR_conv_core_WhatsHappening";
				speech[] = {"WhatsHappeningQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WhatsHappening_RU: WhatsHappening_EN
			{
				text = "$STR_conv_core_WhatsHappening";
				speech[] = {"WhatsHappeningQ_RU"};
			};
			class WhatsHappening_CZ: WhatsHappening_EN
			{
				text = "$STR_conv_core_WhatsHappening";
				speech[] = {"WhatsHappeningQ_CZ"};
			};
			class HeyMan_EN
			{
				text = "$STR_conv_core_HeyMan";
				speech[] = {"Hey_EN","Man_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class HeyMan_RU: HeyMan_EN
			{
				text = "$STR_conv_core_HeyMan";
				speech[] = {"Hey_RU","Man_RU"};
			};
			class HeyMan_CZ: HeyMan_EN
			{
				text = "$STR_conv_core_HeyMan";
				speech[] = {"Hey_CZ","Man_CZ"};
			};
			class HiDude_EN
			{
				text = "$STR_conv_core_HiDude";
				speech[] = {"Hi_EN","Dude_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class HiDude_RU: HiDude_EN
			{
				text = "$STR_conv_core_HiDude";
				speech[] = {"Hi_RU","Dude_RU"};
			};
			class HiDude_CZ: HiDude_EN
			{
				text = "$STR_conv_core_HiDude";
				speech[] = {"Hi_CZ","Dude_CZ"};
			};
			class HiHandsome_EN
			{
				text = "$STR_conv_core_HiHandsome";
				speech[] = {"Hi_EN","Handsome_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class HiHandsome_RU: HiHandsome_EN
			{
				text = "$STR_conv_core_HiHandsome";
				speech[] = {"Hi_RU","Handsome_RU"};
			};
			class HiHandsome_CZ: HiHandsome_EN
			{
				text = "$STR_conv_core_HiHandsome";
				speech[] = {"Hi_CZ","Handsome_CZ"};
			};
			class DontTouchMe_EN
			{
				text = "$STR_conv_core_DontTouchMe";
				speech[] = {"DontTouchMe_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class DontTouchMe_RU: DontTouchMe_EN
			{
				text = "$STR_conv_core_DontTouchMe";
				speech[] = {"DontTouchMe_RU"};
			};
			class DontTouchMe_CZ: DontTouchMe_EN
			{
				text = "$STR_conv_core_DontTouchMe";
				speech[] = {"DontTouchMe_CZ"};
			};
			class Thanks_EN
			{
				text = "$STR_conv_core_Thanks";
				speech[] = {"Thanks_EN"};
				class Arguments{};
			};
			class Thanks_RU: Thanks_EN
			{
				text = "$STR_conv_core_Thanks";
				speech[] = {"Thanks_RU"};
			};
			class Thanks_CZ: Thanks_EN
			{
				text = "$STR_conv_core_Thanks";
				speech[] = {"Thanks_CZ"};
			};
			class ThankYou_EN
			{
				text = "$STR_conv_core_ThankYou";
				speech[] = {"Thank_EN","You_EN"};
				class Arguments{};
			};
			class ThankYou_RU: ThankYou_EN
			{
				text = "$STR_conv_core_ThankYou";
				speech[] = {"Thank_RU","You_RU"};
			};
			class ThankYou_CZ: ThankYou_EN
			{
				text = "$STR_conv_core_ThankYou";
				speech[] = {"Thank_CZ","You_CZ"};
			};
			class ThanksForTheInformation_EN
			{
				text = "$STR_conv_core_ThanksForTheInformation";
				speech[] = {"Thanks_EN","For_EN","TheInformation_EN"};
				class Arguments{};
			};
			class ThanksForTheInformation_RU: ThanksForTheInformation_EN
			{
				text = "$STR_conv_core_ThanksForTheInformation";
				speech[] = {"Thanks_RU","For_RU","TheInformation_RU"};
			};
			class ThanksForTheInformation_CZ: ThanksForTheInformation_EN
			{
				text = "$STR_conv_core_ThanksForTheInformation";
				speech[] = {"Thanks_CZ","For_CZ","TheInformation_CZ"};
			};
			class ThanksForTrying_EN
			{
				text = "$STR_conv_core_ThanksForTrying";
				speech[] = {"Thanks_EN","For_EN","Trying_EN"};
				class Arguments{};
			};
			class ThanksForTrying_RU: ThanksForTrying_EN
			{
				text = "$STR_conv_core_ThanksForTrying";
				speech[] = {"Thanks_RU","For_RU","Trying_RU"};
			};
			class ThanksForTrying_CZ: ThanksForTrying_EN
			{
				text = "$STR_conv_core_ThanksForTrying";
				speech[] = {"Thanks_CZ","For_CZ","Trying_CZ"};
			};
			class ThanksAnyway_EN
			{
				text = "$STR_conv_core_ThanksAnyway";
				speech[] = {"Thanks_EN","Anyway_EN"};
				class Arguments{};
			};
			class ThanksAnyway_RU: ThanksAnyway_EN
			{
				text = "$STR_conv_core_ThanksAnyway";
				speech[] = {"Thanks_RU","Anyway_RU"};
			};
			class ThanksAnyway_CZ: ThanksAnyway_EN
			{
				text = "$STR_conv_core_ThanksAnyway";
				speech[] = {"Thanks_CZ","Anyway_CZ"};
			};
			class ThanksForNothing_EN
			{
				text = "$STR_conv_core_ThanksForNothing";
				speech[] = {"Thanks_EN","For_EN","Nothing_EN"};
				class Arguments{};
			};
			class ThanksForNothing_RU: ThanksForNothing_EN
			{
				text = "$STR_conv_core_ThanksForNothing";
				speech[] = {"Thanks_RU","For_RU","Nothing_RU"};
			};
			class ThanksForNothing_CZ: ThanksForNothing_EN
			{
				text = "$STR_conv_core_ThanksForNothing";
				speech[] = {"Thanks_CZ","For_CZ","Nothing_CZ"};
			};
			class YouHelpedUsOutALot_EN
			{
				text = "$STR_conv_core_YouHelpedUsOutALot";
				speech[] = {"You_EN","HelpedUsOutALot_EN"};
				class Arguments{};
			};
			class YouHelpedUsOutALot_RU: YouHelpedUsOutALot_EN
			{
				text = "$STR_conv_core_YouHelpedUsOutALot";
				speech[] = {"You_RU","HelpedUsOutALot_RU"};
			};
			class YouHelpedUsOutALot_CZ: YouHelpedUsOutALot_EN
			{
				text = "$STR_conv_core_YouHelpedUsOutALot";
				speech[] = {"You_CZ","HelpedUsOutALot_CZ"};
			};
			class Bye_EN
			{
				text = "$STR_conv_core_Bye";
				speech[] = {"Bye_EN"};
				class Arguments{};
			};
			class Bye_RU: Bye_EN
			{
				text = "$STR_conv_core_Bye";
				speech[] = {"Bye_RU"};
			};
			class Bye_CZ: Bye_EN
			{
				text = "$STR_conv_core_Bye";
				speech[] = {"Bye_CZ"};
			};
			class Goodbye_EN
			{
				text = "$STR_conv_core_Goodbye";
				speech[] = {"Goodbye_EN"};
				class Arguments{};
			};
			class Goodbye_RU: Goodbye_EN
			{
				text = "$STR_conv_core_Goodbye";
				speech[] = {"Goodbye_RU"};
			};
			class Goodbye_CZ: Goodbye_EN
			{
				text = "$STR_conv_core_Goodbye";
				speech[] = {"Goodbye_CZ"};
			};
			class Cya_EN
			{
				text = "$STR_conv_core_Cya";
				speech[] = {"Cya_EN"};
				class Arguments{};
			};
			class Cya_RU: Cya_EN
			{
				text = "$STR_conv_core_Cya";
				speech[] = {"Cya_RU"};
			};
			class Cya_CZ: Cya_EN
			{
				text = "$STR_conv_core_Cya";
				speech[] = {"Cya_CZ"};
			};
			class TalkToYouLater_EN
			{
				text = "$STR_conv_core_TalkToYouLater";
				speech[] = {"TalkToYouLater_EN"};
				class Arguments{};
			};
			class TalkToYouLater_RU: TalkToYouLater_EN
			{
				text = "$STR_conv_core_TalkToYouLater";
				speech[] = {"TalkToYouLater_RU"};
			};
			class TalkToYouLater_CZ: TalkToYouLater_EN
			{
				text = "$STR_conv_core_TalkToYouLater";
				speech[] = {"TalkToYouLater_CZ"};
			};
			class TakeCare_EN
			{
				text = "$STR_conv_core_TakeCare";
				speech[] = {"TakeCare_EN"};
				class Arguments{};
			};
			class TakeCare_RU: TakeCare_EN
			{
				text = "$STR_conv_core_TakeCare";
				speech[] = {"TakeCare_RU"};
			};
			class TakeCare_CZ: TakeCare_EN
			{
				text = "$STR_conv_core_TakeCare";
				speech[] = {"TakeCare_CZ"};
			};
			class Whatever_EN
			{
				text = "$STR_conv_core_Whatever";
				speech[] = {"Whatever_EN"};
				class Arguments{};
			};
			class Whatever_RU: Whatever_EN
			{
				text = "$STR_conv_core_Whatever";
				speech[] = {"Whatever_RU"};
			};
			class Whatever_CZ: Whatever_EN
			{
				text = "$STR_conv_core_Whatever";
				speech[] = {"Whatever_CZ"};
			};
			class JustLeave_EN
			{
				text = "$STR_conv_core_JustLeave";
				speech[] = {"JustLeave_EN"};
				class Arguments{};
			};
			class JustLeave_RU: JustLeave_EN
			{
				text = "$STR_conv_core_JustLeave";
				speech[] = {"JustLeave_RU"};
			};
			class JustLeave_CZ: JustLeave_EN
			{
				text = "$STR_conv_core_JustLeave";
				speech[] = {"JustLeave_CZ"};
			};
			class NiceWeatherIsntIt_EN
			{
				text = "$STR_conv_core_NiceWeatherIsntIt";
				speech[] = {"NiceWeatherIsntItQ_EN"};
				class Arguments{};
			};
			class NiceWeatherIsntIt_RU: NiceWeatherIsntIt_EN
			{
				text = "$STR_conv_core_NiceWeatherIsntIt";
				speech[] = {"NiceWeatherIsntItQ_RU"};
			};
			class NiceWeatherIsntIt_CZ: NiceWeatherIsntIt_EN
			{
				text = "$STR_conv_core_NiceWeatherIsntIt";
				speech[] = {"NiceWeatherIsntItQ_CZ"};
			};
			class ThatsSomeNastyWeatherAintIt_EN
			{
				text = "$STR_conv_core_ThatsSomeNastyWeatherAintIt";
				speech[] = {"ThatsSomeNastyWeatherAintItQ_EN"};
				class Arguments{};
			};
			class ThatsSomeNastyWeatherAintIt_RU: ThatsSomeNastyWeatherAintIt_EN
			{
				text = "$STR_conv_core_ThatsSomeNastyWeatherAintIt";
				speech[] = {"ThatsSomeNastyWeatherAintItQ_RU"};
			};
			class ThatsSomeNastyWeatherAintIt_CZ: ThatsSomeNastyWeatherAintIt_EN
			{
				text = "$STR_conv_core_ThatsSomeNastyWeatherAintIt";
				speech[] = {"ThatsSomeNastyWeatherAintItQ_CZ"};
			};
			class WhatsTheWeatherForecastLike_EN
			{
				text = "$STR_conv_core_WhatsTheWeatherForecastLike";
				speech[] = {"WhatsTheWeatherForecastLikeQ_EN"};
				class Arguments{};
			};
			class WhatsTheWeatherForecastLike_RU: WhatsTheWeatherForecastLike_EN
			{
				text = "$STR_conv_core_WhatsTheWeatherForecastLike";
				speech[] = {"WhatsTheWeatherForecastLikeQ_RU"};
			};
			class WhatsTheWeatherForecastLike_CZ: WhatsTheWeatherForecastLike_EN
			{
				text = "$STR_conv_core_WhatsTheWeatherForecastLike";
				speech[] = {"WhatsTheWeatherForecastLikeQ_CZ"};
			};
			class AnyWordOnWhatTheWeathersGonnaDo_EN
			{
				text = "$STR_conv_core_AnyWordOnWhatTheWeathersGonnaDo";
				speech[] = {"AnyWordOnWhatTheWeathersGonnaDoQ_EN"};
				class Arguments{};
			};
			class AnyWordOnWhatTheWeathersGonnaDo_RU: AnyWordOnWhatTheWeathersGonnaDo_EN
			{
				text = "$STR_conv_core_AnyWordOnWhatTheWeathersGonnaDo";
				speech[] = {"AnyWordOnWhatTheWeathersGonnaDoQ_RU"};
			};
			class AnyWordOnWhatTheWeathersGonnaDo_CZ: AnyWordOnWhatTheWeathersGonnaDo_EN
			{
				text = "$STR_conv_core_AnyWordOnWhatTheWeathersGonnaDo";
				speech[] = {"AnyWordOnWhatTheWeathersGonnaDoQ_CZ"};
			};
			class SeemsLikeItllStayLikeThisForAWhile_EN
			{
				text = "$STR_conv_core_SeemsLikeItllStayLikeThisForAWhile";
				speech[] = {"SeemsLikeItllStayLikeThisForAWhile_EN"};
				class Arguments{};
			};
			class SeemsLikeItllStayLikeThisForAWhile_RU: SeemsLikeItllStayLikeThisForAWhile_EN
			{
				text = "$STR_conv_core_SeemsLikeItllStayLikeThisForAWhile";
				speech[] = {"SeemsLikeItllStayLikeThisForAWhile_RU"};
			};
			class SeemsLikeItllStayLikeThisForAWhile_CZ: SeemsLikeItllStayLikeThisForAWhile_EN
			{
				text = "$STR_conv_core_SeemsLikeItllStayLikeThisForAWhile";
				speech[] = {"SeemsLikeItllStayLikeThisForAWhile_CZ"};
			};
			class IHeardWellGetSomeRainSoon_EN
			{
				text = "$STR_conv_core_IHeardWellGetSomeRainSoon";
				speech[] = {"IHeardWellGetSomeRainSoon_EN"};
				class Arguments{};
			};
			class IHeardWellGetSomeRainSoon_RU: IHeardWellGetSomeRainSoon_EN
			{
				text = "$STR_conv_core_IHeardWellGetSomeRainSoon";
				speech[] = {"IHeardWellGetSomeRainSoon_RU"};
			};
			class IHeardWellGetSomeRainSoon_CZ: IHeardWellGetSomeRainSoon_EN
			{
				text = "$STR_conv_core_IHeardWellGetSomeRainSoon";
				speech[] = {"IHeardWellGetSomeRainSoon_CZ"};
			};
			class ThingsShouldBeClearingUpSoon_EN
			{
				text = "$STR_conv_core_ThingsShouldBeClearingUpSoon";
				speech[] = {"ThingsShouldBeClearingUpSoon_EN"};
				class Arguments{};
			};
			class ThingsShouldBeClearingUpSoon_RU: ThingsShouldBeClearingUpSoon_EN
			{
				text = "$STR_conv_core_ThingsShouldBeClearingUpSoon";
				speech[] = {"ThingsShouldBeClearingUpSoon_RU"};
			};
			class ThingsShouldBeClearingUpSoon_CZ: ThingsShouldBeClearingUpSoon_EN
			{
				text = "$STR_conv_core_ThingsShouldBeClearingUpSoon";
				speech[] = {"ThingsShouldBeClearingUpSoon_CZ"};
			};
			class DidYouNoticeAnythingOutOfTheOrdinaryRecently_EN
			{
				text = "$STR_conv_core_DidYouNoticeAnythingOutOfTheOrdinaryRecently";
				speech[] = {"DidYou_EN","NoticeAnythingOutOfTheOrdinaryRecentlyQ_EN"};
				class Arguments{};
			};
			class DidYouNoticeAnythingOutOfTheOrdinaryRecently_RU: DidYouNoticeAnythingOutOfTheOrdinaryRecently_EN
			{
				text = "$STR_conv_core_DidYouNoticeAnythingOutOfTheOrdinaryRecently";
				speech[] = {"DidYou_RU","NoticeAnythingOutOfTheOrdinaryRecentlyQ_RU"};
			};
			class DidYouNoticeAnythingOutOfTheOrdinaryRecently_CZ: DidYouNoticeAnythingOutOfTheOrdinaryRecently_EN
			{
				text = "$STR_conv_core_DidYouNoticeAnythingOutOfTheOrdinaryRecently";
				speech[] = {"DidYou_CZ","NoticeAnythingOutOfTheOrdinaryRecentlyQ_CZ"};
			};
			class DidYouSeeAnyoneElseAroundHere_EN
			{
				text = "$STR_conv_core_DidYouSeeAnyoneElseAroundHere";
				speech[] = {"DidYou_EN","SeeAnyoneElseAroundHereQ_EN"};
				class Arguments{};
			};
			class DidYouSeeAnyoneElseAroundHere_RU: DidYouSeeAnyoneElseAroundHere_EN
			{
				text = "$STR_conv_core_DidYouSeeAnyoneElseAroundHere";
				speech[] = {"DidYou_RU","SeeAnyoneElseAroundHereQ_RU"};
			};
			class DidYouSeeAnyoneElseAroundHere_CZ: DidYouSeeAnyoneElseAroundHere_EN
			{
				text = "$STR_conv_core_DidYouSeeAnyoneElseAroundHere";
				speech[] = {"DidYou_CZ","SeeAnyoneElseAroundHereQ_CZ"};
			};
			class NoSorry_EN
			{
				text = "$STR_conv_core_NoSorry";
				speech[] = {"No_EN","Sorry_EN"};
				class Arguments{};
			};
			class NoSorry_RU: NoSorry_EN
			{
				text = "$STR_conv_core_NoSorry";
				speech[] = {"No_RU","Sorry_RU"};
			};
			class NoSorry_CZ: NoSorry_EN
			{
				text = "$STR_conv_core_NoSorry";
				speech[] = {"No_CZ","Sorry_CZ"};
			};
			class IDidntSeeAnything_EN
			{
				text = "$STR_conv_core_IDidntSeeAnything";
				speech[] = {"IDidntSeeAnything_EN"};
				class Arguments{};
			};
			class IDidntSeeAnything_RU: IDidntSeeAnything_EN
			{
				text = "$STR_conv_core_IDidntSeeAnything";
				speech[] = {"IDidntSeeAnything_RU"};
			};
			class IDidntSeeAnything_CZ: IDidntSeeAnything_EN
			{
				text = "$STR_conv_core_IDidntSeeAnything";
				speech[] = {"IDidntSeeAnything_CZ"};
			};
			class ISawALotOfUnits_EN
			{
				text = "$STR_conv_core_ISawALotOfUnits";
				speech[] = {"ISawALotOfUnits_EN"};
				class Arguments{};
			};
			class ISawALotOfUnits_RU: ISawALotOfUnits_EN
			{
				text = "$STR_conv_core_ISawALotOfUnits";
				speech[] = {"ISawALotOfUnits_RU"};
			};
			class ISawALotOfUnits_CZ: ISawALotOfUnits_EN
			{
				text = "$STR_conv_core_ISawALotOfUnits";
				speech[] = {"ISawALotOfUnits_CZ"};
			};
			class Targets_EN
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class COUNT0
					{
						type = "amount";
						config = "Amount_EN";
					};
					class SIDE0
					{
						type = "side";
						config = "Side_EN";
					};
					class UNIT0
					{
						type = "entity";
						config = "Entity_EN";
					};
					class PLACE0
					{
						type = "place";
						config = "Place_EN";
					};
					class TIME0
					{
						type = "time";
						config = "Time_EN";
					};
					class UCOUNT0
					{
						type = "amount";
						config = "Amount_EN";
					};
					class UTYPE0
					{
						type = "entity";
						config = "Entity_EN";
					};
					class COUNT1: COUNT0{};
					class SIDE1: SIDE0{};
					class UNIT1: UNIT0{};
					class PLACE1: PLACE0{};
					class TIME1: TIME0{};
					class UCOUNT1: UCOUNT0{};
					class UTYPE1: UTYPE0{};
					class COUNT2: COUNT0{};
					class SIDE2: SIDE0{};
					class UNIT2: UNIT0{};
					class PLACE2: PLACE0{};
					class TIME2: TIME0{};
					class UCOUNT2: UCOUNT0{};
					class UTYPE2: UTYPE0{};
				};
			};
			class Targets_RU
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class COUNT0
					{
						type = "amount";
						config = "Amount_RU";
					};
					class SIDE0
					{
						type = "side";
						config = "Side_RU";
					};
					class UNIT0
					{
						type = "entity";
						config = "Entity_RU";
					};
					class PLACE0
					{
						type = "place";
						config = "Place_RU";
					};
					class TIME0
					{
						type = "time";
						config = "Time_RU";
					};
					class UCOUNT0
					{
						type = "amount";
						config = "Amount_RU";
					};
					class UTYPE0
					{
						type = "entity";
						config = "Entity_RU";
					};
					class COUNT1: COUNT0{};
					class SIDE1: SIDE0{};
					class UNIT1: UNIT0{};
					class PLACE1: PLACE0{};
					class TIME1: TIME0{};
					class UCOUNT1: UCOUNT0{};
					class UTYPE1: UTYPE0{};
					class COUNT2: COUNT0{};
					class SIDE2: SIDE0{};
					class UNIT2: UNIT0{};
					class PLACE2: PLACE0{};
					class TIME2: TIME0{};
					class UCOUNT2: UCOUNT0{};
					class UTYPE2: UTYPE0{};
				};
			};
			class Targets_CZ
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class COUNT0
					{
						type = "amount";
						config = "Amount_CZ";
					};
					class SIDE0
					{
						type = "side";
						config = "Side_CZ";
					};
					class UNIT0
					{
						type = "entity";
						config = "Entity_CZ";
					};
					class PLACE0
					{
						type = "place";
						config = "Place_CZ";
					};
					class TIME0
					{
						type = "time";
						config = "Time_CZ";
					};
					class UCOUNT0
					{
						type = "amount";
						config = "Amount_CZ";
					};
					class UTYPE0
					{
						type = "entity";
						config = "Entity_CZ";
					};
					class COUNT1: COUNT0{};
					class SIDE1: SIDE0{};
					class UNIT1: UNIT0{};
					class PLACE1: PLACE0{};
					class TIME1: TIME0{};
					class UCOUNT1: UCOUNT0{};
					class UTYPE1: UTYPE0{};
					class COUNT2: COUNT0{};
					class SIDE2: SIDE0{};
					class UNIT2: UNIT0{};
					class PLACE2: PLACE0{};
					class TIME2: TIME0{};
					class UCOUNT2: UCOUNT0{};
					class UTYPE2: UTYPE0{};
				};
			};
			class WhereAreWe_EN
			{
				text = "$STR_conv_core_WhereAreWe";
				speech[] = {"Where_EN","AreWeQ_EN"};
				class Arguments{};
			};
			class WhereAreWe_RU: WhereAreWe_EN
			{
				text = "$STR_conv_core_WhereAreWe";
				speech[] = {"Where_RU","AreWeQ_RU"};
			};
			class WhereAreWe_CZ: WhereAreWe_EN
			{
				text = "$STR_conv_core_WhereAreWe";
				speech[] = {"Where_CZ","AreWeQ_CZ"};
			};
			class DoYouKnowWhereWeAre_EN
			{
				text = "$STR_conv_core_DoYouKnowWhereWeAre";
				speech[] = {"DoYouKnowWhereWeAreQ_EN"};
				class Arguments{};
			};
			class DoYouKnowWhereWeAre_RU: DoYouKnowWhereWeAre_EN
			{
				text = "$STR_conv_core_DoYouKnowWhereWeAre";
				speech[] = {"DoYouKnowWhereWeAreQ_RU"};
			};
			class DoYouKnowWhereWeAre_CZ: DoYouKnowWhereWeAre_EN
			{
				text = "$STR_conv_core_DoYouKnowWhereWeAre";
				speech[] = {"DoYouKnowWhereWeAreQ_CZ"};
			};
			class WhereIsTheClosestSettlement_EN
			{
				text = "$STR_conv_core_WhereIsTheClosestSettlement";
				speech[] = {"Where_EN","IsTheClosestSettlementQ_EN"};
				class Arguments{};
			};
			class WhereIsTheClosestSettlement_RU: WhereIsTheClosestSettlement_EN
			{
				text = "$STR_conv_core_WhereIsTheClosestSettlement";
				speech[] = {"Where_RU","IsTheClosestSettlementQ_RU"};
			};
			class WhereIsTheClosestSettlement_CZ: WhereIsTheClosestSettlement_EN
			{
				text = "$STR_conv_core_WhereIsTheClosestSettlement";
				speech[] = {"Where_CZ","IsTheClosestSettlementQ_CZ"};
			};
			class CanYouPointMeToTheNearestSettlement_EN
			{
				text = "$STR_conv_core_CanYouPointMeToTheNearestSettlement";
				speech[] = {"CanYouPointMeToTheNearestSettlementQ_EN"};
				class Arguments{};
			};
			class CanYouPointMeToTheNearestSettlement_RU: CanYouPointMeToTheNearestSettlement_EN
			{
				text = "$STR_conv_core_CanYouPointMeToTheNearestSettlement";
				speech[] = {"CanYouPointMeToTheNearestSettlementQ_RU"};
			};
			class CanYouPointMeToTheNearestSettlement_CZ: CanYouPointMeToTheNearestSettlement_EN
			{
				text = "$STR_conv_core_CanYouPointMeToTheNearestSettlement";
				speech[] = {"CanYouPointMeToTheNearestSettlementQ_CZ"};
			};
			class WhatIsTheNameOfThisSettlement_EN
			{
				text = "$STR_conv_core_WhatIsTheNameOfThisSettlement";
				speech[] = {"What_EN","IsTheNameOfThisSettlementQ_EN"};
				class Arguments{};
			};
			class WhatIsTheNameOfThisSettlement_RU: WhatIsTheNameOfThisSettlement_EN
			{
				text = "$STR_conv_core_WhatIsTheNameOfThisSettlement";
				speech[] = {"What_RU","IsTheNameOfThisSettlementQ_RU"};
			};
			class WhatIsTheNameOfThisSettlement_CZ: WhatIsTheNameOfThisSettlement_EN
			{
				text = "$STR_conv_core_WhatIsTheNameOfThisSettlement";
				speech[] = {"What_CZ","IsTheNameOfThisSettlementQ_CZ"};
			};
			class WhatSettlementIsThis_EN
			{
				text = "$STR_conv_core_WhatSettlementIsThis";
				speech[] = {"What_EN","SettlementIsThisQ_EN"};
				class Arguments{};
			};
			class WhatSettlementIsThis_RU: WhatSettlementIsThis_EN
			{
				text = "$STR_conv_core_WhatSettlementIsThis";
				speech[] = {"What_EN","SettlementIsThisQ_RU"};
			};
			class WhatSettlementIsThis_CZ: WhatSettlementIsThis_EN
			{
				text = "$STR_conv_core_WhatSettlementIsThis";
				speech[] = {"What_EN","SettlementIsThisQ_CZ"};
			};
			class SorryImNotFromAroundHere_EN
			{
				text = "$STR_conv_core_SorryImNotFromAroundHere";
				speech[] = {"Sorry_EN","ImNotFromAroundHere_EN"};
				class Arguments{};
			};
			class SorryImNotFromAroundHere_RU: SorryImNotFromAroundHere_EN
			{
				text = "$STR_conv_core_SorryImNotFromAroundHere";
				speech[] = {"Sorry_RU","ImNotFromAroundHere_RU"};
			};
			class SorryImNotFromAroundHere_CZ: SorryImNotFromAroundHere_EN
			{
				text = "$STR_conv_core_SorryImNotFromAroundHere";
				speech[] = {"Sorry_CZ","ImNotFromAroundHere_CZ"};
			};
			class NoIdeaImNotFromAroundHere_EN
			{
				text = "$STR_conv_core_NoIdeaImNotFromAroundHere";
				speech[] = {"NoIdeaIDontLiveHere_EN"};
				class Arguments{};
			};
			class NoIdeaImNotFromAroundHere_RU: NoIdeaImNotFromAroundHere_EN
			{
				text = "$STR_conv_core_NoIdeaImNotFromAroundHere";
				speech[] = {"NoIdeaIDontLiveHere_RU"};
			};
			class NoIdeaImNotFromAroundHere_CZ: NoIdeaImNotFromAroundHere_EN
			{
				text = "$STR_conv_core_NoIdeaImNotFromAroundHere";
				speech[] = {"NoIdeaIDontLiveHere_CZ"};
			};
			class Location_EN
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class PLACE0
					{
						type = "place";
						config = "PlaceLocation_EN";
					};
				};
			};
			class Location_RU
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class PLACE0
					{
						type = "place";
						config = "PlaceLocation_RU";
					};
				};
			};
			class Location_CZ
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class PLACE0
					{
						type = "place";
						config = "PlaceLocation_CZ";
					};
				};
			};
			class LocationClosest_EN
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class PLACE0
					{
						type = "place";
						config = "PlaceClosest_EN";
					};
				};
			};
			class LocationClosest_RU
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class PLACE0
					{
						type = "place";
						config = "PlaceClosest_RU";
					};
				};
			};
			class LocationClosest_CZ
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class PLACE0
					{
						type = "place";
						config = "PlaceClosest_CZ";
					};
				};
			};
			class LocationThis_EN
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class PLACE0
					{
						type = "place";
						config = "PlaceThis_EN";
					};
				};
			};
			class LocationThis_RU
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class PLACE0
					{
						type = "place";
						config = "PlaceThis_RU";
					};
				};
			};
			class LocationThis_CZ
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class PLACE0
					{
						type = "place";
						config = "PlaceThis_CZ";
					};
				};
			};
			class AreYouKiddingMe_EN
			{
				text = "$STR_conv_core_AreYouKiddingMe";
				speech[] = {"AreYouKiddingMeQ_EN"};
				class Arguments{};
			};
			class AreYouKiddingMe_RU: AreYouKiddingMe_EN
			{
				text = "$STR_conv_core_AreYouKiddingMe";
				speech[] = {"AreYouKiddingMeQ_RU"};
			};
			class AreYouKiddingMe_CZ: AreYouKiddingMe_EN
			{
				text = "$STR_conv_core_AreYouKiddingMe";
				speech[] = {"AreYouKiddingMeQ_CZ"};
			};
			class YouAskedMeThatJustNow_EN
			{
				text = "$STR_conv_core_YouAskedMeThatJustNow";
				speech[] = {"YouAskedMeThatJustNow_EN"};
				class Arguments{};
			};
			class YouAskedMeThatJustNow_RU: YouAskedMeThatJustNow_EN
			{
				text = "$STR_conv_core_YouAskedMeThatJustNow";
				speech[] = {"YouAskedMeThatJustNow_RU"};
			};
			class YouAskedMeThatJustNow_CZ: YouAskedMeThatJustNow_EN
			{
				text = "$STR_conv_core_YouAskedMeThatJustNow";
				speech[] = {"YouAskedMeThatJustNow_CZ"};
			};
			class StopAskingMeTheSameStuff_EN
			{
				text = "$STR_conv_core_StopAskingMeTheSameStuff";
				speech[] = {"StopAskingMeTheSameStuff_EN"};
				class Arguments{};
			};
			class StopAskingMeTheSameStuff_RU: StopAskingMeTheSameStuff_EN
			{
				text = "$STR_conv_core_StopAskingMeTheSameStuff";
				speech[] = {"StopAskingMeTheSameStuff_RU"};
			};
			class StopAskingMeTheSameStuff_CZ: StopAskingMeTheSameStuff_EN
			{
				text = "$STR_conv_core_StopAskingMeTheSameStuff";
				speech[] = {"StopAskingMeTheSameStuff_CZ"};
			};
			class IWillOnlyTellYouMyNameRankAndSerialnumber_EN
			{
				text = "$STR_conv_core_IWillOnlyTellYouMyNameRankAndSerialnumber";
				speech[] = {"IWillOnlyTellYouMyNameRankAndSerialnumber_EN"};
				class Arguments{};
			};
			class IWillOnlyTellYouMyNameRankAndSerialnumber_RU: IWillOnlyTellYouMyNameRankAndSerialnumber_EN
			{
				text = "$STR_conv_core_IWillOnlyTellYouMyNameRankAndSerialnumber";
				speech[] = {"IWillOnlyTellYouMyNameRankAndSerialnumber_RU"};
			};
			class IWillOnlyTellYouMyNameRankAndSerialnumber_CZ: IWillOnlyTellYouMyNameRankAndSerialnumber_EN
			{
				text = "$STR_conv_core_IWillOnlyTellYouMyNameRankAndSerialnumber";
				speech[] = {"IWillOnlyTellYouMyNameRankAndSerialnumber_CZ"};
			};
		};
		class Arguments
		{
			class Amount_EN
			{
				class 0
				{
					text = "";
					speech[] = {};
				};
				class 1
				{
					text = "#article";
					speech[] = {"#article"};
				};
				class 3
				{
					text = "$STR_conv_core_Arguments_Amount_3";
					speech[] = {"Several_EN"};
				};
				class 7
				{
					text = "$STR_conv_core_Arguments_Amount_7";
					speech[] = {"Some_EN"};
				};
				class N
				{
					text = "$STR_conv_core_Arguments_Amount_N";
					speech[] = {"ALotOf_EN"};
				};
			};
			class Amount_RU
			{
				class 0
				{
					text = "";
					speech[] = {};
				};
				class 1
				{
					text = "";
					speech[] = {};
				};
				class 3
				{
					text = "$STR_conv_core_Arguments_Amount_3";
					speech[] = {"Several_RU"};
				};
				class 7
				{
					text = "$STR_conv_core_Arguments_Amount_7";
					speech[] = {"Some_RU"};
				};
				class N
				{
					text = "$STR_conv_core_Arguments_Amount_N";
					speech[] = {"ALotOf_RU"};
				};
			};
			class Amount_CZ
			{
				class 0
				{
					text = "";
					speech[] = {};
				};
				class 1
				{
					text = "";
					speech[] = {};
				};
				class 3
				{
					text = "$STR_conv_core_Arguments_Amount_3";
					speech[] = {"Several_CZ"};
				};
				class 7
				{
					text = "$STR_conv_core_Arguments_Amount_7";
					speech[] = {"Some_CZ"};
				};
				class N
				{
					text = "$STR_conv_core_Arguments_Amount_N";
					speech[] = {"ALotOf_CZ"};
				};
			};
			class Side_EN
			{
				class WEST
				{
					text = "$STR_conv_core_Arguments_Side_WEST";
					speech[] = {"West_EN"};
				};
				class EAST
				{
					text = "$STR_conv_core_Arguments_Side_EAST";
					speech[] = {"East_EN"};
				};
				class GUER
				{
					text = "$STR_conv_core_Arguments_Side_GUER";
					speech[] = {"Independent_EN"};
				};
				class CIV
				{
					text = "$STR_conv_core_Arguments_Side_CIV";
					speech[] = {"Civilian_EN"};
				};
			};
			class Side_RU
			{
				class WEST
				{
					text = "$STR_conv_core_Arguments_Side_WEST";
					speech[] = {"West_RU"};
				};
				class EAST
				{
					text = "$STR_conv_core_Arguments_Side_EAST";
					speech[] = {"East_RU"};
				};
				class GUER
				{
					text = "$STR_conv_core_Arguments_Side_GUER";
					speech[] = {"Independent_RU"};
				};
				class CIV
				{
					text = "$STR_conv_core_Arguments_Side_CIV";
					speech[] = {"Civilian_RU"};
				};
			};
			class Side_CZ
			{
				class WEST
				{
					text = "$STR_conv_core_Arguments_Side_WEST";
					speech[] = {"West_CZ"};
				};
				class EAST
				{
					text = "$STR_conv_core_Arguments_Side_EAST";
					speech[] = {"East_CZ"};
				};
				class GUER
				{
					text = "$STR_conv_core_Arguments_Side_GUER";
					speech[] = {"Independent_CZ"};
				};
				class CIV
				{
					text = "$STR_conv_core_Arguments_Side_CIV";
					speech[] = {"Civilian_CZ"};
				};
			};
			class Entity_EN
			{
				variant = "EN";
				textQueriedPlural = "$STR_CONV_CORE_OFTHEM";
				speechQueriedPlural[] = {"OfThem_EN"};
				textQueriedSingular = "$STR_CONV_CORE_ONE";
				speechQueriedSingular[] = {"One_EN"};
			};
			class Entity_RU
			{
				variant = "RU";
				textQueriedPlural = "$STR_CONV_CORE_OFTHEM";
				speechQueriedPlural[] = {"OfThem_RU"};
				textQueriedSingular = "$STR_CONV_CORE_ONE";
				speechQueriedSingular[] = {"One_RU"};
			};
			class Entity_CZ
			{
				variant = "CZ";
				textQueriedPlural = "$STR_CONV_CORE_OFTHEM";
				speechQueriedPlural[] = {"OfThem_CZ"};
				textQueriedSingular = "$STR_CONV_CORE_ONE";
				speechQueriedSingular[] = {"One_CZ"};
			};
			class Place_EN
			{
				variant = "EN";
				class Phrases
				{
					class 100
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_100";
						speech[] = {"In_EN","%PLACE"};
					};
					class 250
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_250";
						speech[] = {"Near_EN","%PLACE"};
					};
					class D400
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_D400";
						speech[] = {"NotFar_EN","%DIRECTION","From_EN","%PLACE"};
					};
					class N
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_N";
						speech[] = {"Around_EN","%PLACE"};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_DN";
						speech[] = {"%DIRECTION","From_EN","%PLACE"};
					};
				};
				class PhrasesSpecial
				{
					class 200
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_200";
						speech[] = {"%PLACE"};
					};
					class D400
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_D400";
						speech[] = {"NotFar_EN","%DIRECTION","From_EN","%PLACE"};
					};
					class N
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_N";
						speech[] = {"Around_EN","%PLACE"};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_DN";
						speech[] = {"%DIRECTION","From_EN","%PLACE"};
					};
				};
				class Directions
				{
					class 0
					{
						text = "$STR_conv_core_Arguments_Place_Directions_0";
						speech[] = {"North_EN"};
					};
					class 45
					{
						text = "$STR_conv_core_Arguments_Place_Directions_45";
						speech[] = {"NorthEast_EN"};
					};
					class 90
					{
						text = "$STR_conv_core_Arguments_Place_Directions_90";
						speech[] = {"East_EN"};
					};
					class 135
					{
						text = "$STR_conv_core_Arguments_Place_Directions_135";
						speech[] = {"SouthEast_EN"};
					};
					class 180
					{
						text = "$STR_conv_core_Arguments_Place_Directions_180";
						speech[] = {"South_EN"};
					};
					class 225
					{
						text = "$STR_conv_core_Arguments_Place_Directions_225";
						speech[] = {"SouthWest_EN"};
					};
					class 270
					{
						text = "$STR_conv_core_Arguments_Place_Directions_270";
						speech[] = {"West_EN"};
					};
					class 315
					{
						text = "$STR_conv_core_Arguments_Place_Directions_315";
						speech[] = {"NorthWest_EN"};
					};
				};
				textThis = "$STR_CONV_CORE_HERE";
				speechThis[] = {"Here_EN"};
				textQueried = "$STR_CONV_CORE_THERE";
				speechQueried[] = {"There_EN"};
			};
			class Place_RU
			{
				variant = "RU";
				class Phrases
				{
					class 100
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_100";
						speech[] = {"In_RU","%PLACE"};
					};
					class 250
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_250";
						speech[] = {"Near_RU","%PLACE"};
					};
					class D400
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_N";
						speech[] = {"Around_RU","%PLACE"};
					};
					class N
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_N";
						speech[] = {"Around_RU","%PLACE"};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_DN";
						speech[] = {"%DIRECTION","From_RU","%PLACE"};
					};
				};
				class PhrasesSpecial
				{
					class 200
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_200";
						speech[] = {"%PLACE"};
					};
					class D400
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_N";
						speech[] = {"Around_RU","%PLACE"};
					};
					class N
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_N";
						speech[] = {"Around_RU","%PLACE"};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_DN";
						speech[] = {"%DIRECTION","From_RU","%PLACE"};
					};
				};
				class Directions
				{
					class 0
					{
						text = "$STR_conv_core_Arguments_Place_Directions_0";
						speech[] = {"North_RU"};
					};
					class 45
					{
						text = "$STR_conv_core_Arguments_Place_Directions_45";
						speech[] = {"NorthEast_RU"};
					};
					class 90
					{
						text = "$STR_conv_core_Arguments_Place_Directions_90";
						speech[] = {"East_RU"};
					};
					class 135
					{
						text = "$STR_conv_core_Arguments_Place_Directions_135";
						speech[] = {"SouthEast_RU"};
					};
					class 180
					{
						text = "$STR_conv_core_Arguments_Place_Directions_180";
						speech[] = {"South_RU"};
					};
					class 225
					{
						text = "$STR_conv_core_Arguments_Place_Directions_225";
						speech[] = {"SouthWest_RU"};
					};
					class 270
					{
						text = "$STR_conv_core_Arguments_Place_Directions_270";
						speech[] = {"West_RU"};
					};
					class 315
					{
						text = "$STR_conv_core_Arguments_Place_Directions_315";
						speech[] = {"NorthWest_RU"};
					};
				};
				textThis = "$STR_CONV_CORE_HERE";
				speechThis[] = {"Here_RU"};
				textQueried = "$STR_CONV_CORE_THERE";
				speechQueried[] = {"There_RU"};
			};
			class Place_CZ
			{
				variant = "CZ";
				class Phrases
				{
					class 100
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_100";
						speech[] = {"In_CZ","%PLACE"};
					};
					class 250
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_250";
						speech[] = {"Near_CZ","%PLACE"};
					};
					class D400
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_D400";
						speech[] = {"NotFar_CZ","%DIRECTION","From_CZ","%PLACE"};
					};
					class N
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_N";
						speech[] = {"Around_CZ","%PLACE"};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_DN";
						speech[] = {"%DIRECTION","From_CZ","%PLACE"};
					};
				};
				class PhrasesSpecial
				{
					class 200
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_200";
						speech[] = {"%PLACE"};
					};
					class D400
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_D400";
						speech[] = {"NotFar_CZ","%DIRECTION","From_CZ","%PLACE"};
					};
					class N
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_N";
						speech[] = {"Around_CZ","%PLACE"};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_DN";
						speech[] = {"%DIRECTION","From_CZ","%PLACE"};
					};
				};
				class Directions
				{
					class 0
					{
						text = "$STR_conv_core_Arguments_Place_Directions_0";
						speech[] = {"North_CZ"};
					};
					class 45
					{
						text = "$STR_conv_core_Arguments_Place_Directions_45";
						speech[] = {"NorthEast_CZ"};
					};
					class 90
					{
						text = "$STR_conv_core_Arguments_Place_Directions_90";
						speech[] = {"East_CZ"};
					};
					class 135
					{
						text = "$STR_conv_core_Arguments_Place_Directions_135";
						speech[] = {"SouthEast_CZ"};
					};
					class 180
					{
						text = "$STR_conv_core_Arguments_Place_Directions_180";
						speech[] = {"South_CZ"};
					};
					class 225
					{
						text = "$STR_conv_core_Arguments_Place_Directions_225";
						speech[] = {"SouthWest_CZ"};
					};
					class 270
					{
						text = "$STR_conv_core_Arguments_Place_Directions_270";
						speech[] = {"West_CZ"};
					};
					class 315
					{
						text = "$STR_conv_core_Arguments_Place_Directions_315";
						speech[] = {"NorthWest_CZ"};
					};
				};
				textThis = "$STR_CONV_CORE_HERE";
				speechThis[] = {"Here_CZ"};
				textQueried = "$STR_CONV_CORE_THERE";
				speechQueried[] = {"There_CZ"};
			};
			class PlaceLocation_EN
			{
				variant = "EN";
				class Phrases
				{
					class D350
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Phrases_D350";
						speech[] = {"Near_EN","%PLACE"};
					};
					class D500
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Phrases_D500";
						speech[] = {"NotFar_EN","%DIRECTION","From_EN","%PLACE"};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Phrases_DN";
						speech[] = {"%DIRECTION","From_EN","%PLACE"};
					};
				};
				class PhrasesSpecial{};
				class Directions
				{
					class 0
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_0";
						speech[] = {"South_EN"};
					};
					class 45
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_45";
						speech[] = {"SouthWest_EN"};
					};
					class 90
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_90";
						speech[] = {"West_EN"};
					};
					class 135
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_135";
						speech[] = {"NorthWest_EN"};
					};
					class 180
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_180";
						speech[] = {"North_EN"};
					};
					class 225
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_225";
						speech[] = {"NorthEast_EN"};
					};
					class 270
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_270";
						speech[] = {"East_EN"};
					};
					class 315
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_315";
						speech[] = {"SouthEast_EN"};
					};
				};
				textThis = "";
				speechThis[] = {};
				textQueried = "";
				speechQueried[] = {""};
			};
			class PlaceLocation_RU
			{
				variant = "RU";
				class Phrases
				{
					class D350
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Phrases_D350";
						speech[] = {"Near_RU","%PLACE"};
					};
					class D500
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Phrases_DN";
						speech[] = {"%DIRECTION","From_RU","%PLACE"};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Phrases_DN";
						speech[] = {"%DIRECTION","From_RU","%PLACE"};
					};
				};
				class PhrasesSpecial{};
				class Directions
				{
					class 0
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_0";
						speech[] = {"South_RU"};
					};
					class 45
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_45";
						speech[] = {"SouthWest_RU"};
					};
					class 90
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_90";
						speech[] = {"West_RU"};
					};
					class 135
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_135";
						speech[] = {"NorthWest_RU"};
					};
					class 180
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_180";
						speech[] = {"North_RU"};
					};
					class 225
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_225";
						speech[] = {"NorthEast_RU"};
					};
					class 270
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_270";
						speech[] = {"East_RU"};
					};
					class 315
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_315";
						speech[] = {"SouthEast_RU"};
					};
				};
				textThis = "";
				speechThis[] = {};
				textQueried = "";
				speechQueried[] = {""};
			};
			class PlaceLocation_CZ
			{
				variant = "CZ";
				class Phrases
				{
					class D350
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Phrases_D350";
						speech[] = {"Near_CZ","%PLACE"};
					};
					class D500
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Phrases_D500";
						speech[] = {"NotFar_CZ","%DIRECTION","From_CZ","%PLACE"};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Phrases_DN";
						speech[] = {"%DIRECTION","From_CZ","%PLACE"};
					};
				};
				class PhrasesSpecial{};
				class Directions
				{
					class 0
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_0";
						speech[] = {"South_CZ"};
					};
					class 45
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_45";
						speech[] = {"SouthWest_CZ"};
					};
					class 90
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_90";
						speech[] = {"West_CZ"};
					};
					class 135
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_135";
						speech[] = {"NorthWest_CZ"};
					};
					class 180
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_180";
						speech[] = {"North_CZ"};
					};
					class 225
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_225";
						speech[] = {"NorthEast_CZ"};
					};
					class 270
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_270";
						speech[] = {"East_CZ"};
					};
					class 315
					{
						text = "$STR_conv_core_Arguments_PlaceLocation_Directions_315";
						speech[] = {"SouthEast_CZ"};
					};
				};
				textThis = "";
				speechThis[] = {};
				textQueried = "";
				speechQueried[] = {""};
			};
			class PlaceClosest_EN
			{
				variant = "EN";
				class Phrases
				{
					class D350
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Phrases_D350";
						speech[] = {"%PLACE","Is_EN","NotFar_EN","%DIRECTION","From_EN","Here_EN"};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Phrases_DN";
						speech[] = {"Probably_EN","%PLACE","ToThe_EN","%DIRECTION"};
					};
				};
				class PhrasesSpecial{};
				class Directions
				{
					class 0
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_0";
						speech[] = {"North_EN"};
					};
					class 45
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_45";
						speech[] = {"NorthEast_EN"};
					};
					class 90
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_90";
						speech[] = {"East_EN"};
					};
					class 135
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_135";
						speech[] = {"SouthEast_EN"};
					};
					class 180
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_180";
						speech[] = {"South_EN"};
					};
					class 225
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_225";
						speech[] = {"SouthWest_EN"};
					};
					class 270
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_270";
						speech[] = {"West_EN"};
					};
					class 315
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_315";
						speech[] = {"NorthWest_EN"};
					};
				};
				textThis = "";
				speechThis[] = {};
				textQueried = "";
				speechQueried[] = {};
			};
			class PlaceClosest_RU
			{
				variant = "RU";
				class Phrases
				{
					class D350
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Phrases_DN";
						speech[] = {"Probably_RU","%PLACE","ToThe_RU","%DIRECTION"};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Phrases_DN";
						speech[] = {"Probably_RU","%PLACE","ToThe_RU","%DIRECTION"};
					};
				};
				class PhrasesSpecial{};
				class Directions
				{
					class 0
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_0";
						speech[] = {"North_RU"};
					};
					class 45
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_45";
						speech[] = {"NorthEast_RU"};
					};
					class 90
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_90";
						speech[] = {"East_RU"};
					};
					class 135
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_135";
						speech[] = {"SouthEast_RU"};
					};
					class 180
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_180";
						speech[] = {"South_RU"};
					};
					class 225
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_225";
						speech[] = {"SouthWest_RU"};
					};
					class 270
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_270";
						speech[] = {"West_RU"};
					};
					class 315
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_315";
						speech[] = {"NorthWest_RU"};
					};
				};
				textThis = "";
				speechThis[] = {};
				textQueried = "";
				speechQueried[] = {};
			};
			class PlaceClosest_CZ
			{
				variant = "CZ";
				class Phrases
				{
					class D350
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Phrases_D350";
						speech[] = {"%PLACE","Is_CZ","NotFar_CZ","%DIRECTION","From_CZ","Here_CZ"};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Phrases_DN";
						speech[] = {"Probably_CZ","%PLACE","ToThe_CZ","%DIRECTION"};
					};
				};
				class PhrasesSpecial{};
				class Directions
				{
					class 0
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_0";
						speech[] = {"North_CZ"};
					};
					class 45
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_45";
						speech[] = {"NorthEast_CZ"};
					};
					class 90
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_90";
						speech[] = {"East_CZ"};
					};
					class 135
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_135";
						speech[] = {"SouthEast_CZ"};
					};
					class 180
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_180";
						speech[] = {"South_CZ"};
					};
					class 225
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_225";
						speech[] = {"SouthWest_CZ"};
					};
					class 270
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_270";
						speech[] = {"West_CZ"};
					};
					class 315
					{
						text = "$STR_conv_core_Arguments_PlaceClosest_Directions_315";
						speech[] = {"NorthWest_CZ"};
					};
				};
				textThis = "";
				speechThis[] = {};
				textQueried = "";
				speechQueried[] = {};
			};
			class PlaceThis_EN
			{
				variant = "EN";
				class Phrases
				{
					class DN
					{
						text = "$STR_conv_core_Arguments_PlaceThis_Phrases_DN";
						speech[] = {"%PLACE"};
					};
				};
				class PhrasesSpecial{};
				class Directions{};
				textThis = "";
				speechThis[] = {};
				textQueried = "";
				speechQueried[] = {};
			};
			class PlaceThis_RU
			{
				variant = "RU";
				class Phrases
				{
					class DN
					{
						text = "$STR_conv_core_Arguments_PlaceThis_Phrases_DN";
						speech[] = {"%PLACE"};
					};
				};
				class PhrasesSpecial{};
				class Directions{};
				textThis = "";
				speechThis[] = {};
				textQueried = "";
				speechQueried[] = {};
			};
			class PlaceThis_CZ
			{
				variant = "CZ";
				class Phrases
				{
					class DN
					{
						text = "$STR_conv_core_Arguments_PlaceThis_Phrases_DN";
						speech[] = {"%PLACE"};
					};
				};
				class PhrasesSpecial{};
				class Directions{};
				textThis = "";
				speechThis[] = {};
				textQueried = "";
				speechQueried[] = {};
			};
			class Time_EN
			{
				class 180
				{
					text = "$STR_conv_core_Arguments_Time_180";
					speech[] = {"JustNow_EN"};
				};
				class 1800
				{
					text = "$STR_conv_core_Arguments_Time_1800";
					speech[] = {"AFew_EN","MinutesAgo_EN"};
				};
				class 7200
				{
					text = "$STR_conv_core_Arguments_Time_7200";
					speech[] = {"AFew_EN","HoursAgo_EN"};
				};
				class D0
				{
					text = "$STR_conv_core_Arguments_Time_D0";
					speech[] = {"Today_EN"};
				};
				class D1
				{
					text = "$STR_conv_core_Arguments_Time_D1";
					speech[] = {"Yesterday_EN"};
				};
				class N
				{
					text = "$STR_conv_core_Arguments_Time_N";
					speech[] = {"SeveralDaysAgo_EN"};
				};
			};
			class Time_RU
			{
				class 180
				{
					text = "$STR_conv_core_Arguments_Time_180";
					speech[] = {"JustNow_RU"};
				};
				class 1800
				{
					text = "$STR_conv_core_Arguments_Time_1800";
					speech[] = {"AFew_RU","MinutesAgo_RU"};
				};
				class 7200
				{
					text = "$STR_conv_core_Arguments_Time_7200";
					speech[] = {"AFew_RU","HoursAgo_RU"};
				};
				class D0
				{
					text = "$STR_conv_core_Arguments_Time_D0";
					speech[] = {"Today_RU"};
				};
				class D1
				{
					text = "$STR_conv_core_Arguments_Time_D1";
					speech[] = {"Yesterday_RU"};
				};
				class N
				{
					text = "$STR_conv_core_Arguments_Time_N";
					speech[] = {"SeveralDaysAgo_RU"};
				};
			};
			class Time_CZ
			{
				class 180
				{
					text = "$STR_conv_core_Arguments_Time_180";
					speech[] = {"JustNow_CZ"};
				};
				class 1800
				{
					text = "$STR_conv_core_Arguments_Time_1800";
					speech[] = {"AFew_CZ","MinutesAgo_CZ"};
				};
				class 7200
				{
					text = "$STR_conv_core_Arguments_Time_7200";
					speech[] = {"AFew_CZ","HoursAgo_CZ"};
				};
				class D0
				{
					text = "$STR_conv_core_Arguments_Time_D0";
					speech[] = {"Today_CZ"};
				};
				class D1
				{
					text = "$STR_conv_core_Arguments_Time_D1";
					speech[] = {"Yesterday_CZ"};
				};
				class N
				{
					text = "$STR_conv_core_Arguments_Time_N";
					speech[] = {"SeveralDaysAgo_CZ"};
				};
			};
		};
		class Special
		{
			class Article
			{
				textBeforeVocal = "$STR_CONV_CORE_AN";
				speechBeforeVocal[] = {"An_EN"};
				textBeforeConsonant = "$STR_CONV_CORE_A";
				speechBeforeConsonant[] = {"A_EN"};
			};
		};
		startWithVocal[] = {"hour"};
		startWithConsonant[] = {"europe","university"};
		reactPlayer = "ca\characters\scripts\reactCore_Full.sqf";
		react = "ca\characters\scripts\reactCore_Full.fsm";
	};
	class Core_Degenerated
	{
		class Sentences
		{
			class SorryIDontUnderstand_EN
			{
				text = "";
				speech[] = {"Sorry_EN","IDont_EN","Understand_EN"};
				class Arguments{};
			};
			class SorryIDontUnderstand_RU: SorryIDontUnderstand_EN
			{
				text = "";
				speech[] = {"Sorry_RU","IDont_RU","Understand_RU"};
			};
			class SorryIDontUnderstand_CZ: SorryIDontUnderstand_EN
			{
				text = "";
				speech[] = {"Sorry_CZ","IDont_CZ","Understand_CZ"};
			};
			class WhatAreYouSaying_EN
			{
				text = "";
				speech[] = {"What_EN","AreYouSayingQ_EN"};
				class Arguments{};
			};
			class WhatAreYouSaying_RU: WhatAreYouSaying_EN
			{
				text = "";
				speech[] = {"What_RU","AreYouSayingQ_RU"};
			};
			class WhatAreYouSaying_CZ: WhatAreYouSaying_EN
			{
				text = "";
				speech[] = {"What_CZ","AreYouSayingQ_CZ"};
			};
			class IDontKnowWhatYouMean_EN
			{
				text = "";
				speech[] = {"IDont_EN","KnowWhatYouMean_EN"};
				class Arguments{};
			};
			class IDontKnowWhatYouMean_RU: IDontKnowWhatYouMean_EN
			{
				text = "";
				speech[] = {"IDont_RU","KnowWhatYouMean_RU"};
			};
			class IDontKnowWhatYouMean_CZ: IDontKnowWhatYouMean_EN
			{
				text = "";
				speech[] = {"IDont_CZ","KnowWhatYouMean_CZ"};
			};
		};
		class Arguments{};
		class Special{};
		startWithVocal[] = {};
		startWithConsonant[] = {};
		reactPlayer = "ca\characters\scripts\reactCore_Degenerated.sqf";
		react = "ca\characters\scripts\reactCore_Degenerated.fsm";
	};
};
class CfgTalkSentences
{
	class Hi
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","civilianToCivilian","toSameRank","morning","day","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class What
	{
		tags[] = {"greeting","answer","negative","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class HiThere
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCivilian","toSameRank","morning","day","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class Sir
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","combatantToCivilian","civilianToCombatant","toHigherRank","day","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class Private
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","toLowerRank","toPRIVATE","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class YesPrivate
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toLowerRank","toPRIVATE","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class Corporal
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","toLowerRank","toCORPORAL","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class YesCorporal
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toLowerRank","toCORPORAL","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class Sergeant
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","toLowerRank","toSERGEANT","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class YesSergeant
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toLowerRank","toSERGEANT","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class Lieutenant
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","toLowerRank","toLIEUTENANT","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class YesLieutenant
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toLowerRank","toLIEUTENANT","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class Captain
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","toLowerRank","toCAPTAIN","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class YesCaptain
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toLowerRank","toCAPTAIN","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class Major
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","toLowerRank","toMAJOR","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class YesMajor
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toLowerRank","toMAJOR","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class Colonel
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","toLowerRank","toCOLONEL","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class YesColonel
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toLowerRank","toCOLONEL","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GoodDaySir
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCombatant","toHigherRank","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GoodEveningSir
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCombatant","toHigherRank","evening","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GoodMorningSir
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCombatant","toHigherRank","morning","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class Soldier
	{
		tags[] = {"greeting","question","answer","neutral","positive","toLowerRank","combatantToCombatant","civilianToCombatant","day","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class MorningSoldier
	{
		tags[] = {"greeting","question","answer","positive","toLowerRank","morning","combatantToCombatant","civilianToCombatant","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class EveningSoldier
	{
		tags[] = {"greeting","question","answer","positive","evening","combatantToCombatant","civilianToCombatant","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class WhatDoYouWant
	{
		tags[] = {"greeting","answer","negative","civilianToCombatant","combatantToCombatant","day","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class WhatDoYouNeed
	{
		tags[] = {"greeting","answer","neutral","civilianToCombatant","day","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class CantYouSeeImBusy
	{
		tags[] = {"greeting","answer","neutral","combatantToCombatant","toSameRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class BitOccupiedAtTheMomentDude
	{
		tags[] = {"greeting","answer","positive","combatantToCombatant","toSameRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class ImBusy
	{
		tags[] = {"greeting","answer","positive","neutral","combatantToCombatant","toSameRank","toHigherRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class PissOff
	{
		tags[] = {"greeting","answer","negative","combatantToCombatant","toSameRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class Maam
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCivilian","day","night","maleToFemale","notInCombat","notSurrendered","respect"};
	};
	class ALovelyDayToYou
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","combatantToCivilian","day","femaleToMale","maleToFemale","notInCombat","notSurrendered","respect"};
	};
	class TopOfTheMorningMiss
	{
		tags[] = {"greeting","question","answer","positive","combatantToCivilian","morning","maleToFemale","notInCombat","notSurrendered","respect"};
	};
	class HiGorgeous
	{
		tags[] = {"greeting","question","answer","positive","combatantToCivilian","day","night","maleToFemale","notInCombat","notSurrendered","respect"};
	};
	class HelloSexy
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","combatantToCivilian","day","night","maleToFemale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class HiHandsome
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","day","night","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class DontTouchMe
	{
		tags[] = {"greeting","answer","negative","civilianToCombatant","day","night","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class Yessir
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toHigherRank","day","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class HelloSir
	{
		tags[] = {"greeting","question","answer","positive","combatantToCivilian","civilianToCombatant","combatantToCombatant","toHigherRank","day","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class Yep
	{
		tags[] = {"greeting","question","answer","neutral","combatantToCombatant","toSameRank","day","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class Yeah
	{
		tags[] = {"greeting","question","answer","neutral","negative","combatantToCombatant","toSameRank","day","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class NotNow
	{
		tags[] = {"greeting","answer","neutral","combatantToCombatant","toSameRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class Later
	{
		tags[] = {"greeting","answer","neutral","combatantToCombatant","toSameRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class NoTime
	{
		tags[] = {"greeting","answer","positive","neutral","combatantToCombatant","toSameRank","toHigherRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class Hush
	{
		tags[] = {"greeting","answer","negative","combatantToCombatant","toSameRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class Ssshh
	{
		tags[] = {"greeting","answer","neutral","combatantToCombatant","toSameRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class Hello
	{
		tags[] = {"greeting","question","answer","neutral","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class GoodDay
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","combatantToCivilian","civilianToCivilian","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GoodMorning
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","combatantToCivilian","civilianToCivilian","morning","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GoodEvening
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","combatantToCivilian","civilianToCivilian","evening","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class NiceToSeeYou
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GoodToHaveYouHere
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GladYouGuysAreHere
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GladYouAreHere
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class CanIHelpYou
	{
		tags[] = {"greeting","question","answer","neutral","positive","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GetLost
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class GoHomeAlready
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class BabykillingMorons
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class GoAwayMurderers
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class LeaveUsAlone
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class LeaveMeAlone
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class GoBackToYourOwnCountry
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class FuckingPig
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class StupidSonOfABitch
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class DamnYouToHell
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class MayIAskYouSomething
	{
		tags[] = {"greeting","question","positive","combatantToCivilian","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class PleaseCanYouHelp
	{
		tags[] = {"greeting","question","positive","combatantToCivilian","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class Speak
	{
		tags[] = {"greeting","question","negative","combatantToCivilian","morning","day","evening","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class HelpUs
	{
		tags[] = {"greeting","question","negative","combatantToCivilian","morning","day","evening","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class IWillTellYouNothing
	{
		tags[] = {"greeting","answer","positive","neutral","negative","civilianToCombatant","noRespect","morning","day","evening","night","maleToMale","femaleToMale","notInCombat","notSurrendered"};
	};
	class ImNotSayingAnotherWord
	{
		tags[] = {"greeting","answer","positive","neutral","negative","civilianToCombatant","noRespect","morning","day","evening","night","maleToMale","femaleToMale","notInCombat","notSurrendered"};
	};
	class KeepingMyMouthShut
	{
		tags[] = {"greeting","answer","positive","neutral","negative","civilianToCombatant","noRespect","morning","day","evening","night","maleToMale","femaleToMale","notInCombat","notSurrendered"};
	};
	class MindYourOwnBusiness
	{
		tags[] = {"greeting","answer","positive","neutral","negative","civilianToCombatant","noRespect","morning","day","evening","night","maleToMale","femaleToMale","notInCombat","notSurrendered"};
	};
	class GoBotherSomeoneElse
	{
		tags[] = {"greeting","answer","positive","neutral","negative","civilianToCombatant","noRespect","morning","day","evening","night","maleToMale","femaleToMale","notInCombat","notSurrendered"};
	};
	class WhatsUp
	{
		tags[] = {"greeting","question","answer","neutral","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class Sup
	{
		tags[] = {"greeting","question","answer","neutral","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class Yo
	{
		tags[] = {"greeting","question","answer","neutral","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class HowsThings
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class HowAreYou
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class Hey
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class Hiya
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class WhatsHappening
	{
		tags[] = {"greeting","question","positive","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class HeyMan
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class HiDude
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class Thanks
	{
		tags[] = {"thanks","neutral","combatantToCombatant","civilianToCivilian","combatantToCivilian","civilianToCombatant","toSameRank","toHigherRank","toLowerRank","morning","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class ThankYou
	{
		tags[] = {"thanks","neutral","combatantToCombatant","civilianToCivilian","combatantToCivilian","civilianToCombatant","toSameRank","toHigherRank","toLowerRank","morning","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class ThanksForTheInformation
	{
		tags[] = {"thanks","positive","combatantToCombatant","civilianToCivilian","combatantToCivilian","civilianToCombatant","toSameRank","toHigherRank","toLowerRank","morning","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class ThanksForTrying
	{
		tags[] = {"thanks","positive","noSuccess","combatantToCombatant","civilianToCivilian","combatantToCivilian","civilianToCombatant","toSameRank","toHigherRank","toLowerRank","morning","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class ThanksAnyway
	{
		tags[] = {"thanks","neutral","noSuccess","combatantToCombatant","civilianToCivilian","combatantToCivilian","civilianToCombatant","toSameRank","toHigherRank","toLowerRank","morning","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class ThanksForNothing
	{
		tags[] = {"thanks","negative","noSuccess","combatantToCombatant","civilianToCivilian","combatantToCivilian","civilianToCombatant","toSameRank","toHigherRank","toLowerRank","morning","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class YouHelpedUsOutALot
	{
		tags[] = {"thanks","positive","combatantToCivilian","morning","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class Bye
	{
		tags[] = {"bye","neutral","positive","combatantToCombatant","civilianToCivilian","combatantToCivilian","civilianToCombatant","toSameRank","toHigherRank","toLowerRank","morning","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class Goodbye
	{
		tags[] = {"bye","positive","combatantToCombatant","civilianToCivilian","combatantToCivilian","civilianToCombatant","toSameRank","toHigherRank","toLowerRank","morning","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class Cya
	{
		tags[] = {"bye","positive","combatantToCombatant","civilianToCivilian","combatantToCivilian","civilianToCombatant","toSameRank","morning","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class TalkToYouLater
	{
		tags[] = {"bye","positive","combatantToCombatant","civilianToCivilian","combatantToCivilian","civilianToCombatant","toSameRank","morning","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class TakeCare
	{
		tags[] = {"bye","positive","combatantToCombatant","civilianToCivilian","combatantToCivilian","civilianToCombatant","toSameRank","morning","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class Whatever
	{
		tags[] = {"bye","negative","combatantToCombatant","civilianToCivilian","combatantToCivilian","civilianToCombatant","toSameRank","morning","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class JustLeave
	{
		tags[] = {"bye","negative","combatantToCombatant","civilianToCivilian","combatantToCivilian","civilianToCombatant","toSameRank","morning","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class IWillOnlyTellYouMyNameRankAndSerialnumber
	{
		tags[] = {"greeting","question","answer","negative","neutral","positive","combatantToCombatant","civilianToCombatant","toSameRank","toLowerRank","toHigherRank","morning","day","evening","night","maleToMale","notInCombat","inCombat","surrendered","respect","noRespect"};
	};
};
class CfgVehicleClasses
{
	class MenArmy
	{
		displayName = "$STR_DN_MenArmy";
	};
	class MenSLA
	{
		displayName = "$STR_DN_MenSLA";
	};
	class MenRACS
	{
		displayName = "$STR_DN_MenRACS";
	};
	class MenCIV
	{
		displayName = "$STR_DN_MenCIV";
	};
};
class CfgVehicles
{
	class Land;
	class Man: Land
	{
		class ViewPilot;
		accuracy = 0.25;
		camouflage = 2;
		sensitivityEar = 0.5;
		minFireTime = 5;
		extCameraPosition[] = {0.15,0,-2.0};
	};
	class CAManBase: Man
	{
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		Icon = "\Ca\characters\data\map_ico\i_wojak_CA.paa";
		fsmDanger = "Ca\characters\scripts\danger.fsm";
		moves = "CfgMovesMaleSdr";
		gestures = "CfgGesturesMale";
		boneHead = "head";
		boneHeadCutScene = "headcutscene";
		boneLEye = "l_eye";
		boneREye = "r_eye";
		boneLEyelidUp = "eye_upl";
		boneREyelidUp = "eye_upr";
		boneLEyelidDown = "eye_lwl";
		boneREyelidDown = "eye_lwr";
		boneLPupil = "l_pupila";
		boneRPupil = "r_pupila";
		bonePrimaryWeapon = "weapon";
		triggerAnim = "ca\anims\characters\data\anim\sdr\trigger.rtm";
		woman = 0;
		faceType = "man";
		class TalkTopics
		{
			core = "Core";
			core_en = "Core_Degenerated";
			core_ru = "Core_Degenerated";
			core_cz = "Core_Degenerated";
		};
		languages[] = {};
		minGunElev = -80;
		maxGunElev = 60;
		minGunTurn = -1;
		maxGunTurn = 1;
		minGunTurnAI = -30;
		maxGunTurnAI = 30;
		class HeadLimits;
		minHeadTurnAI = -60;
		maxHeadTurnAI = 60;
		class ViewPilot: ViewPilot
		{
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.1;
			initAngleX = 8;
			minAngleX = -85;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		selectionHeadWound = "head_injury";
		selectionBodyWound = "body_injury";
		selectionLArmWound = "l_arm_injury";
		selectionRArmWound = "r_arm_injury";
		selectionLLegWound = "l_leg_injury";
		selectionRLegWound = "r_leg_injury";
		selectionHeadHide = "";
		selectionNeckHide = "";
		memoryPointLStep = "footstepL";
		memoryPointRStep = "footstepR";
		memoryPointAim = "aimPoint";
		memoryPointCameraTarget = "camera";
		memoryPointCommonDamage = "l_femur_hit";
		memoryPointLeaningAxis = "leaning_axis";
		memoryPointAimingAxis = "aiming_axis";
		memoryPointHeadAxis = "head_axis";
		selectionLBrow = "lBrow";
		selectionMBrow = "mBrow";
		selectionRBrow = "rBrow";
		selectionLMouth = "lMouth";
		selectionMMouth = "mMouth";
		selectionRMouth = "rMouth";
		selectionEyelid = "Eyelids";
		selectionLip = "LLip";
		class HitPoints
		{
			class HitHead
			{
				armor = 0.7;
				material = -1;
				name = "head_hit";
				passThrough = 1;
			};
			class HitBody
			{
				armor = 0.8;
				material = -1;
				name = "body";
				passThrough = 1;
			};
			class HitHands
			{
				armor = 0.5;
				material = -1;
				name = "hands";
				passThrough = 1;
			};
			class HitLegs
			{
				armor = 0.5;
				material = -1;
				name = "legs";
				passThrough = 1;
			};
		};
		useInternalLODInVehicles = 1;
		accuracy = 0;
		vehicleClass = "Men";
		type = 0;
		threat[] = {1,0.05,0.05};
		vegetation0[] = {"Ca\sounds\Characters\Noises\Bush\bush1",1,1,20};
		vegetation1[] = {"Ca\sounds\Characters\Noises\Bush\bush2",1,1,20};
		vegetation2[] = {"Ca\sounds\Characters\Noises\Bush\bush3",1,1,20};
		vegetationSounds[] = {"vegetation0",0.33,"vegetation1",0.33,"vegetation2",0.33};
		class HitDamage
		{
			class Group0
			{
				hitSounds[] = {{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-01",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-02",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-03",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-04",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-05",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-06",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-07",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-08",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-09",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\zozo-hit-10",0.17782794,1,120 },0.1 }};
				damageSounds[] = {{ "body",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-01",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-02",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-05",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-08",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-10",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-11",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-13",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-14",0.056234132,1,120,0.125,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-05",0.056234132,1,120,0.25,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-13",0.056234132,1,120,0.25,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-08",0.056234132,1,120,0.25,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-01",0.056234132,1,120,0.25,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-10",0.056234132,1,120,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\zozo-damage-g1-14",0.056234132,1,120,20,40,60 } }};
			};
			class Group1
			{
				hitSounds[] = {{ { "ca\sounds\Characters\Noises\Damage\george-hit-01",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\george-hit-02",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\george-hit-03",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\george-hit-04",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\george-hit-05",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\george-hit-06",0.17782794,1,120 },0.1 }};
				damageSounds[] = {{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-01",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-02",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-03",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-04",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g2-01",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g2-02",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g2-03",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\george-damage-g2-07",0.056234132,1,120,0.125,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-03",0.056234132,1,120,0.33,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\george-damage-g2-03",0.056234132,1,120,0.33,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-02",0.056234132,1,120,0.33,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-01",0.056234132,1,120,0.33,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-04",0.056234132,1,120,0.33,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\george-damage-g1-02",0.056234132,1,120,0.33,20,40,60 } }};
			};
			class Group2
			{
				hitSounds[] = {{ { "ca\sounds\Characters\Noises\Damage\jennik-hit-01",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\jennik-hit-02",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\jennik-hit-03",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\jennik-hit-04",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\jennik-hit-05",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\jennik-hit-06",0.17782794,1,120 },0.1 }};
				damageSounds[] = {{ "body",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-01",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-02",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-03",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-04",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-05",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-06",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-07",0.056234132,1,120,0.125,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-10",0.056234132,1,120,0.125,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-02",0.056234132,1,120,0.33,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-01",0.056234132,1,120,0.33,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-06",0.056234132,1,120,0.33,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-07",0.056234132,1,120,0.5,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\jennik-damage-g1-04",0.056234132,1,120,0.5,20,40,60 } }};
			};
			class Group3
			{
				hitSounds[] = {{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-01",0.17782794,1,120 },0.15 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-02",0.17782794,1,120 },0.15 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-03",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-04",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-05",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-06",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-07",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-08",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\vasa-hit-09",0.17782794,1,120 },0.1 }};
				damageSounds[] = {{ "body",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-01",0.07079458,1,120,0.2,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-02",0.07079458,1,120,0.2,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-03",0.07079458,1,120,0.2,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-04",0.07079458,1,120,0.2,20,40,60 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-05",0.07079458,1,120,0.2,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-03",0.07079458,1,120,0.33,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-01",0.07079458,1,120,0.33,20,40,60 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-04",0.07079458,1,120,0.33,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-01",0.07079458,1,120,0.5,20,40,60 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\vasa-damage-g1-02",0.07079458,1,120,0.5,20,40,60 } }};
			};
		};
		class SoundBreath
		{
			breath0[] = {{ { { "\ca\sounds\Characters\Noises\Breath\matej-run-breath-01",0.056234132,1,20 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\matej-run-breath-02",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\matej-run-breath-03",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\matej-run-breath-04",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\matej-run-breath-05",0.056234132,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\matej-run-breath-06-zakuck",0.12589253,1,25 },0.05 } },{ { { "\ca\sounds\Characters\Noises\Breath\matej-run2-breath-01",0.056234132,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\matej-run2-breath-02",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\matej-run2-breath-03",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\matej-run2-breath-04",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\matej-run2-breath-05",0.056234132,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\matej-run2-breath-06-zakuck",0.12589253,1,25 },0.05 } },{ { { "\ca\sounds\Characters\Noises\Breath\matej-sprint-breath-01",0.1,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\matej-sprint-breath-02",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\matej-sprint-breath-03",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\matej-sprint-breath-04",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\matej-sprint-breath-05",0.1,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\matej-sprint-breath-06-zakuck",0.1,1,25 },0.05 } }};
			breath1[] = {{ { { "\ca\sounds\Characters\Noises\Breath\karel-run-breath-01",0.056234132,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\karel-run-breath-02",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\karel-run-breath-03",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\karel-run-breath-04",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\karel-run-breath-05",0.056234132,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\karel-run-breath-06-zakuck",0.12589253,1,25 },0.05 } },{ { { "\ca\sounds\Characters\Noises\Breath\karel-run2-breath-01",0.056234132,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\karel-run2-breath-02",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\karel-run2-breath-03",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\karel-run2-breath-04",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\karel-run2-breath-05",0.056234132,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\karel-run2-breath-06-zakuck",0.12589253,1,25 },0.05 } },{ { { "\ca\sounds\Characters\Noises\Breath\karel-sprint-breath-01",0.1,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\karel-sprint-breath-02",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\karel-sprint-breath-03",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\karel-sprint-breath-04",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\karel-sprint-breath-05",0.1,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\karel-sprint-breath-06-zakuck",0.1,1,25 },0.05 } }};
			breath2[] = {{ { { "\ca\sounds\Characters\Noises\Breath\zozo-run-breath-01",0.056234132,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-run-breath-02",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-run-breath-03",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-run-breath-04",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-run-breath-05",0.056234132,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-run-breath-06-zakuck",0.12589253,1,25 },0.05 } },{ { { "\ca\sounds\Characters\Noises\Breath\zozo-run2-breath-01",0.056234132,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-run2-breath-02",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-run2-breath-03",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-run2-breath-04",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-run2-breath-05",0.056234132,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-run2-breath-06-zakuck",0.12589253,1,25 },0.05 } },{ { { "\ca\sounds\Characters\Noises\Breath\zozo-sprint-breath-01",0.1,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-sprint-breath-02",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-sprint-breath-03",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-sprint-breath-04",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-sprint-breath-05",0.1,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\zozo-sprint-breath-06-zakuck",0.12589253,1,25 },0.05 } }};
			breath3[] = {{ { { "\ca\sounds\Characters\Noises\Breath\george-run-breath-01",0.056234132,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\george-run-breath-02",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\george-run-breath-03",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\george-run-breath-04",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\george-run-breath-05",0.056234132,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\george-run-breath-06-zakuck",0.12589253,1,25 },0.05 } },{ { { "\ca\sounds\Characters\Noises\Breath\george-run2-breath-01",0.056234132,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\george-run2-breath-02",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\george-run2-breath-03",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\george-run2-breath-04",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\george-run2-breath-05",0.056234132,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\george-run2-breath-06-zakuck",0.12589253,1,25 },0.05 } },{ { { "\ca\sounds\Characters\Noises\Breath\george-sprint-breath-01",0.1,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\george-sprint-breath-02",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\george-sprint-breath-03",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\george-sprint-breath-04",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\george-sprint-breath-05",0.1,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\george-sprint-breath-06-zakuck",0.12589253,1,25 },0.05 } }};
			breath4[] = {{ { { "\ca\sounds\Characters\Noises\Breath\hladas-run-breath-01",0.056234132,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-run-breath-02",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-run-breath-03",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-run-breath-04",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-run-breath-05",0.056234132,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-run-breath-06-zakuck",0.12589253,1,25 },0.05 } },{ { { "\ca\sounds\Characters\Noises\Breath\hladas-run2-breath-01",0.056234132,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-run2-breath-02",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-run2-breath-03",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-run2-breath-04",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-run2-breath-05",0.056234132,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-run2-breath-06-zakuck",0.12589253,1,25 },0.05 } },{ { { "\ca\sounds\Characters\Noises\Breath\hladas-sprint-breath-01",0.1,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-sprint-breath-02",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-sprint-breath-03",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-sprint-breath-04",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-sprint-breath-05",0.1,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\hladas-sprint-breath-06-zakuck",0.12589253,1,25 },0.05 } }};
			breath5[] = {{ { { "\ca\sounds\Characters\Noises\Breath\vasa-run-breath-01",0.056234132,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-run-breath-02",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-run-breath-03",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-run-breath-04",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-run-breath-05",0.056234132,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-run-breath-06-zakuck",0.12589253,1,25 },0.05 } },{ { { "\ca\sounds\Characters\Noises\Breath\vasa-run2-breath-01",0.056234132,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-run2-breath-02",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-run2-breath-03",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-run2-breath-04",0.056234132,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-run2-breath-05",0.056234132,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-run2-breath-06-zakuck",0.12589253,1,25 },0.05 } },{ { { "\ca\sounds\Characters\Noises\Breath\vasa-sprint-breath-01",0.1,1,25 },0.2 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-sprint-breath-02",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-sprint-breath-03",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-sprint-breath-04",0.1,1,25 },0.19 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-sprint-breath-05",0.1,1,25 },0.18 },{ { "\ca\sounds\Characters\Noises\Breath\vasa-sprint-breath-06-zakuck",0.12589253,1,25 },0.05 } }};
		};
		class SoundGear
		{
			primary[] = {{ "walk",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-walk-01",0.0017782794,1,10 } },{ "walk",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-walk-02",0.0017782794,1,10 } },{ "walk",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-walk-03",0.0017782794,1,10 } },{ "walk",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-walk-04",0.0017782794,1,10 } },{ "walk",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-walk-05",0.0017782794,1,10 } },{ "walk",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-walk-06",0.0017782794,1,10 } },{ "walk",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-walk-07",0.0017782794,1,10 } },{ "walk",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-walk-08",0.0017782794,1,10 } },{ "run",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-run-01",0.0031622776,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-run-02",0.0031622776,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-run-03",0.0031622776,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-run-04",0.0031622776,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-run-05",0.0031622776,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-run-06",0.0031622776,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-run-07",0.0031622776,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-run-08",0.0031622776,1,15 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-sprint-01",0.0056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-sprint-02",0.0056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-sprint-03",0.0056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-sprint-04",0.0056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-sprint-05",0.0056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-sprint-06",0.0056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-sprint-07",0.0056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Gear\Gear-prim-sprint-08",0.0056234132,1,20 } }};
			secondary[] = {{ "walk",{ "",0.0017782794,1,10 } },{ "run",{ "",0.0031622776,1,10 } },{ "sprint",{ "",0.0056234132,1,10 } }};
		};
		class SoundEquipment
		{
			soldier[] = {{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-walk-01",0.0017782794,1,13 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-walk-02",0.0017782794,1,13 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-walk-03",0.0017782794,1,13 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-walk-04",0.0017782794,1,13 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-walk-05",0.0017782794,1,13 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-walk-06",0.0017782794,1,13 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-walk-07",0.0017782794,1,13 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-walk-08",0.0017782794,1,13 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-run-01",0.0031622776,1,20 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-run-02",0.0031622776,1,20 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-run-03",0.0031622776,1,20 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-run-04",0.0031622776,1,20 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-run-05",0.0031622776,1,20 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-run-06",0.0031622776,1,20 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-run-07",0.0031622776,1,20 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-run-08",0.0031622776,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-sprint-01",0.003981071,1,25 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-sprint-02",0.003981071,1,25 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-sprint-03",0.003981071,1,25 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-sprint-04",0.003981071,1,25 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-sprint-05",0.003981071,1,25 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-sprint-06",0.003981071,1,25 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-sprint-07",0.003981071,1,25 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\Equipment-sprint-08",0.003981071,1,25 } }};
			civilian[] = {{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-01",0.17782794,1,8 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-02",0.17782794,1,8 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-03",0.17782794,1,8 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-04",0.17782794,1,8 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-05",0.17782794,1,8 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-06",0.17782794,1,8 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-07",0.17782794,1,8 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-08",0.17782794,1,8 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-01",0.1,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-02",0.1,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-03",0.1,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-04",0.1,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-05",0.1,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-06",0.1,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-07",0.1,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-08",0.1,1,15 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-01",0.056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-02",0.056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-03",0.056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-04",0.056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-05",0.056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-06",0.056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-07",0.056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-08",0.056234132,1,20 } }};
		};
		class SoundEnvironExt
		{
			normalExt[] = {{ "\Ca\sounds\Characters\Concrete_ext\run_01",0.019952621,1,27 },{ "\Ca\sounds\Characters\Concrete_ext\run_02",0.019952621,1,27 },{ "\Ca\sounds\Characters\Concrete_ext\run_03",0.019952621,1,27 },{ "\Ca\sounds\Characters\Concrete_ext\run_04",0.019952621,1,27 },{ "\Ca\sounds\Characters\Concrete_ext\run_05",0.019952621,1,27 },{ "\Ca\sounds\Characters\Concrete_ext\run_06",0.019952621,1,27 },{ "\Ca\sounds\Characters\Concrete_ext\run_07",0.019952621,1,27 },{ "\Ca\sounds\Characters\Concrete_ext\run_08",0.019952621,1,27 },{ "run",{ "\Ca\sounds\Characters\Concrete_ext\run_01",0.019952621,1,27 } },{ "run",{ "\Ca\sounds\Characters\Concrete_ext\run_02",0.019952621,1,27 } },{ "run",{ "\Ca\sounds\Characters\Concrete_ext\run_03",0.019952621,1,27 } },{ "run",{ "\Ca\sounds\Characters\Concrete_ext\run_04",0.019952621,1,27 } },{ "run",{ "\Ca\sounds\Characters\Concrete_ext\run_05",0.019952621,1,27 } },{ "run",{ "\Ca\sounds\Characters\Concrete_ext\run_06",0.019952621,1,27 } },{ "run",{ "\Ca\sounds\Characters\Concrete_ext\run_07",0.019952621,1,27 } },{ "run",{ "\Ca\sounds\Characters\Concrete_ext\run_08",0.019952621,1,27 } },{ "walk",{ "\Ca\sounds\Characters\Concrete_ext\walk_01",0.019952621,1,20 } },{ "walk",{ "\Ca\sounds\Characters\Concrete_ext\walk_02",0.019952621,1,20 } },{ "walk",{ "\Ca\sounds\Characters\Concrete_ext\walk_03",0.019952621,1,20 } },{ "walk",{ "\Ca\sounds\Characters\Concrete_ext\walk_04",0.019952621,1,20 } },{ "walk",{ "\Ca\sounds\Characters\Concrete_ext\walk_05",0.019952621,1,20 } },{ "walk",{ "\Ca\sounds\Characters\Concrete_ext\walk_06",0.019952621,1,20 } },{ "walk",{ "\Ca\sounds\Characters\Concrete_ext\walk_07",0.019952621,1,20 } },{ "walk",{ "\Ca\sounds\Characters\Concrete_ext\walk_08",0.019952621,1,20 } },{ "sprint",{ "\Ca\sounds\Characters\Concrete_ext\sprint_01",0.019952621,1,32 } },{ "sprint",{ "\Ca\sounds\Characters\Concrete_ext\sprint_02",0.019952621,1,32 } },{ "sprint",{ "\Ca\sounds\Characters\Concrete_ext\sprint_03",0.019952621,1,32 } },{ "sprint",{ "\Ca\sounds\Characters\Concrete_ext\sprint_04",0.019952621,1,32 } },{ "sprint",{ "\Ca\sounds\Characters\Concrete_ext\sprint_05",0.019952621,1,32 } },{ "sprint",{ "\Ca\sounds\Characters\Concrete_ext\sprint_06",0.019952621,1,32 } },{ "sprint",{ "\Ca\sounds\Characters\Concrete_ext\sprint_07",0.019952621,1,32 } },{ "sprint",{ "\Ca\sounds\Characters\Concrete_ext\sprint_08",0.019952621,1,32 } },{ "crawl",{ "\Ca\sounds\Characters\Concrete_ext\crawl1",0.019952621,1,20 } },{ "crawl",{ "\Ca\sounds\Characters\Concrete_ext\crawl2",0.019952621,1,20 } },{ "crawl",{ "\Ca\sounds\Characters\Concrete_ext\crawl3",0.019952621,1,20 } },{ "crawl",{ "\Ca\sounds\Characters\Concrete_ext\crawl4",0.019952621,1,20 } },{ "standup",{ "\Ca\sounds\Characters\Concrete_ext\up1",0.019952621,1,20 } },{ "standup",{ "\Ca\sounds\Characters\Concrete_ext\up2",0.019952621,1,20 } },{ "standup",{ "\Ca\sounds\Characters\Concrete_ext\up3",0.019952621,1,20 } },{ "standup",{ "\Ca\sounds\Characters\Concrete_ext\up4",0.019952621,1,20 } },{ "laydown",{ "\Ca\sounds\Characters\Concrete_ext\down1",0.019952621,1,20 } },{ "laydown",{ "\Ca\sounds\Characters\Concrete_ext\down2",0.019952621,1,20 } },{ "laydown",{ "\Ca\sounds\Characters\Concrete_ext\down3",0.019952621,1,20 } },{ "laydown",{ "\Ca\sounds\Characters\Concrete_ext\down4",0.019952621,1,20 } },{ "bodyfall",{ "\Ca\sounds\Characters\Concrete_ext\fall_to_ground1",0.019952621,1,30 } },{ "bodyfall",{ "\Ca\sounds\Characters\Concrete_ext\fall_to_ground2",0.019952621,1,30 } },{ "bodyfall",{ "\Ca\sounds\Characters\Concrete_ext\fall_to_ground3",0.019952621,1,30 } },{ "bodyfall",{ "\Ca\sounds\Characters\Concrete_ext\fall_to_ground4",0.019952621,1,30 } },{ "swim",{ "\Ca\sounds\Characters\swim\swim5",0.017782794,1,20 } },{ "swim",{ "\Ca\sounds\Characters\swim\swim6",0.017782794,1,20 } },{ "swim",{ "\Ca\sounds\Characters\swim\swim7",0.017782794,1,20 } },{ "slide",{ "\Ca\sounds\Characters\sliding\sliding1",0.019952621,1,20 } },{ "slide",{ "\Ca\sounds\Characters\sliding\sliding2",0.019952621,1,20 } },{ "slide",{ "\Ca\sounds\Characters\sliding\sliding3",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,30 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,30 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,30 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,30 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,30 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,30 } }};
			normal[] = {{ "\CA\sounds\Characters\normal\run_1",0.019952621,1,25 },{ "\CA\sounds\Characters\normal\run_2",0.019952621,1,25 },{ "\CA\sounds\Characters\normal\run_3",0.019952621,1,25 },{ "\CA\sounds\Characters\normal\run_4",0.019952621,1,25 },{ "\CA\sounds\Characters\normal\run_5",0.019952621,1,25 },{ "\CA\sounds\Characters\normal\run_6",0.019952621,1,25 },{ "\CA\sounds\Characters\normal\run_7",0.019952621,1,25 },{ "\CA\sounds\Characters\normal\run_8",0.019952621,1,25 },{ "run",{ "\CA\sounds\Characters\normal\run_1",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\normal\run_2",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\normal\run_3",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\normal\run_4",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\normal\run_5",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\normal\run_6",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\normal\run_7",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\normal\run_8",0.019952621,1,25 } },{ "walk",{ "\CA\sounds\Characters\normal\walk_1",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\normal\walk_2",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\normal\walk_3",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\normal\walk_4",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\normal\walk_5",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\normal\walk_6",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\normal\walk_7",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\normal\walk_8",0.019952621,1,20 } },{ "sprint",{ "\ca\sounds\Characters\normal\sprint_1",0.019952621,1,35 } },{ "sprint",{ "\ca\sounds\Characters\normal\sprint_2",0.019952621,1,35 } },{ "sprint",{ "\ca\sounds\Characters\normal\sprint_3",0.019952621,1,35 } },{ "sprint",{ "\ca\sounds\Characters\normal\sprint_4",0.019952621,1,35 } },{ "sprint",{ "\ca\sounds\Characters\normal\sprint_5",0.019952621,1,35 } },{ "sprint",{ "\ca\sounds\Characters\normal\sprint_6",0.019952621,1,35 } },{ "sprint",{ "\ca\sounds\Characters\normal\sprint_7",0.019952621,1,35 } },{ "sprint",{ "\ca\sounds\Characters\normal\sprint_8",0.019952621,1,35 } },{ "crawl",{ "\ca\sounds\Characters\normal\crawl1",0.019952621,1,15 } },{ "crawl",{ "\ca\sounds\Characters\normal\crawl2",0.019952621,1,15 } },{ "crawl",{ "\ca\sounds\Characters\normal\crawl3",0.019952621,1,15 } },{ "crawl",{ "\ca\sounds\Characters\normal\crawl4",0.019952621,1,15 } },{ "standup",{ "\ca\sounds\Characters\normal\up1",0.019952621,1,15 } },{ "standup",{ "\ca\sounds\Characters\normal\up2",0.019952621,1,15 } },{ "standup",{ "\ca\sounds\Characters\normal\up3",0.019952621,1,15 } },{ "standup",{ "\ca\sounds\Characters\normal\up4",0.019952621,1,15 } },{ "laydown",{ "\ca\sounds\Characters\normal\down1",0.019952621,1,15 } },{ "laydown",{ "\ca\sounds\Characters\normal\down2",0.019952621,1,15 } },{ "laydown",{ "\ca\sounds\Characters\normal\down3",0.019952621,1,15 } },{ "laydown",{ "\ca\sounds\Characters\normal\down4",0.019952621,1,15 } },{ "bodyfall",{ "\ca\sounds\Characters\normal\fall_to_ground1",0.019952621,1,25 } },{ "bodyfall",{ "\ca\sounds\Characters\normal\fall_to_ground2",0.019952621,1,25 } },{ "bodyfall",{ "\ca\sounds\Characters\normal\fall_to_ground3",0.019952621,1,25 } },{ "bodyfall",{ "\ca\sounds\Characters\normal\fall_to_ground4",0.019952621,1,25 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.017782794,1,25 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.017782794,1,25 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.017782794,1,25 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.019952621,1,10 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.019952621,1,10 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.019952621,1,10 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,25 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,25 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,25 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,25 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,25 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,25 } }};
			road[] = {{ "\CA\sounds\Characters\Road\run_1",0.019952621,0.8,23 },{ "\CA\sounds\Characters\Road\run_2",0.019952621,0.8,23 },{ "\CA\sounds\Characters\Road\run_3",0.019952621,0.8,23 },{ "\CA\sounds\Characters\Road\run_4",0.019952621,0.8,23 },{ "\CA\sounds\Characters\Road\run_5",0.019952621,0.8,23 },{ "\CA\sounds\Characters\Road\run_6",0.019952621,0.8,23 },{ "\CA\sounds\Characters\Road\run_7",0.019952621,0.8,23 },{ "\CA\sounds\Characters\Road\run_8",0.019952621,0.8,23 },{ "run",{ "\CA\sounds\Characters\Road\run_1",0.019952621,0.8,23 } },{ "run",{ "\CA\sounds\Characters\Road\run_2",0.019952621,0.8,23 } },{ "run",{ "\CA\sounds\Characters\Road\run_3",0.019952621,0.8,23 } },{ "run",{ "\CA\sounds\Characters\Road\run_4",0.019952621,0.8,23 } },{ "run",{ "\CA\sounds\Characters\Road\run_5",0.019952621,0.8,23 } },{ "run",{ "\CA\sounds\Characters\Road\run_6",0.019952621,0.8,23 } },{ "run",{ "\CA\sounds\Characters\Road\run_7",0.019952621,0.8,23 } },{ "run",{ "\CA\sounds\Characters\Road\run_8",0.019952621,0.8,23 } },{ "walk",{ "\CA\sounds\Characters\Road\walk_1",0.019952621,0.8,18 } },{ "walk",{ "\CA\sounds\Characters\Road\walk_2",0.019952621,0.8,18 } },{ "walk",{ "\CA\sounds\Characters\Road\walk_3",0.019952621,0.8,18 } },{ "walk",{ "\CA\sounds\Characters\Road\walk_4",0.019952621,0.8,18 } },{ "walk",{ "\CA\sounds\Characters\Road\walk_5",0.019952621,0.8,18 } },{ "walk",{ "\CA\sounds\Characters\Road\walk_6",0.019952621,0.8,18 } },{ "walk",{ "\CA\sounds\Characters\Road\walk_7",0.019952621,0.8,18 } },{ "walk",{ "\CA\sounds\Characters\Road\walk_8",0.019952621,0.8,18 } },{ "sprint",{ "\CA\sounds\Characters\Road\sprint_1",0.019952621,0.8,30 } },{ "sprint",{ "\CA\sounds\Characters\Road\sprint_2",0.019952621,0.8,30 } },{ "sprint",{ "\CA\sounds\Characters\Road\sprint_3",0.019952621,0.8,30 } },{ "sprint",{ "\CA\sounds\Characters\Road\sprint_4",0.019952621,0.8,30 } },{ "sprint",{ "\CA\sounds\Characters\Road\sprint_5",0.019952621,0.8,30 } },{ "sprint",{ "\CA\sounds\Characters\Road\sprint_6",0.019952621,0.8,30 } },{ "sprint",{ "\CA\sounds\Characters\Road\sprint_7",0.019952621,0.8,30 } },{ "sprint",{ "\CA\sounds\Characters\Road\sprint_8",0.019952621,0.8,30 } },{ "crawl",{ "\ca\sounds\Characters\road\crawl1",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\road\crawl2",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\road\crawl3",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\road\crawl4",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\road\up1",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\road\up2",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\road\up3",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\road\up4",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\road\down1",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\road\down2",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\road\down3",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\road\down4",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\road\fall_to_ground1",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\road\fall_to_ground2",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\road\fall_to_ground3",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\road\fall_to_ground4",0.019952621,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.017782794,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.017782794,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.017782794,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			rock[] = {{ "\ca\sounds\Characters\Rock\rock_run_1",0.019952621,1,23 },{ "\ca\sounds\Characters\Rock\rock_run_2",0.019952621,1,23 },{ "\ca\sounds\Characters\Rock\rock_run_3",0.019952621,1,23 },{ "\ca\sounds\Characters\Rock\rock_run_4",0.019952621,1,23 },{ "\ca\sounds\Characters\Rock\rock_run_5",0.019952621,1,23 },{ "\ca\sounds\Characters\Rock\rock_run_6",0.019952621,1,23 },{ "\ca\sounds\Characters\Rock\rock_run_7",0.019952621,1,23 },{ "\ca\sounds\Characters\Rock\rock_run_8",0.019952621,1,23 },{ "run",{ "\ca\sounds\Characters\Rock\rock_run_1",0.019952621,1,23 } },{ "run",{ "\ca\sounds\Characters\Rock\rock_run_2",0.019952621,1,23 } },{ "run",{ "\ca\sounds\Characters\Rock\rock_run_3",0.019952621,1,23 } },{ "run",{ "\ca\sounds\Characters\Rock\rock_run_4",0.019952621,1,23 } },{ "run",{ "\ca\sounds\Characters\Rock\rock_run_5",0.019952621,1,23 } },{ "run",{ "\ca\sounds\Characters\Rock\rock_run_6",0.019952621,1,23 } },{ "run",{ "\ca\sounds\Characters\Rock\rock_run_7",0.019952621,1,23 } },{ "run",{ "\ca\sounds\Characters\Rock\rock_run_8",0.019952621,1,23 } },{ "walk",{ "\ca\sounds\Characters\Rock\rock_walk_1",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Rock\rock_walk_2",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Rock\rock_walk_3",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Rock\rock_walk_4",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Rock\rock_walk_5",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Rock\rock_walk_6",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Rock\rock_walk_7",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Rock\rock_walk_8",0.019952621,1,19 } },{ "sprint",{ "\ca\sounds\Characters\Rock\rock_sprint_1",0.019952621,1,30 } },{ "sprint",{ "\ca\sounds\Characters\Rock\rock_sprint_2",0.019952621,1,30 } },{ "sprint",{ "\ca\sounds\Characters\Rock\rock_sprint_3",0.019952621,1,30 } },{ "sprint",{ "\ca\sounds\Characters\Rock\rock_sprint_4",0.019952621,1,30 } },{ "sprint",{ "\ca\sounds\Characters\Rock\rock_sprint_5",0.019952621,1,30 } },{ "sprint",{ "\ca\sounds\Characters\Rock\rock_sprint_6",0.019952621,1,30 } },{ "sprint",{ "\ca\sounds\Characters\Rock\rock_sprint_7",0.019952621,1,30 } },{ "sprint",{ "\ca\sounds\Characters\Rock\rock_sprint_8",0.019952621,1,30 } },{ "crawl",{ "\ca\sounds\Characters\rock\crawl1",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\rock\crawl2",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\rock\crawl3",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\rock\crawl4",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\rock\up1",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\rock\up2",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\rock\up3",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\rock\up4",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\rock\down1",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\rock\down2",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\rock\down3",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\rock\down4",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\rock\fall_to_ground1",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\rock\fall_to_ground2",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\rock\fall_to_ground3",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\rock\fall_to_ground4",0.019952621,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.017782794,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.017782794,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.017782794,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			water[] = {{ "\ca\sounds\Characters\Water\water_run_1",0.056234132,1,35 },{ "\ca\sounds\Characters\Water\water_run_2",0.056234132,1,35 },{ "\ca\sounds\Characters\Water\water_run_3",0.056234132,1,35 },{ "\ca\sounds\Characters\Water\water_run_4",0.056234132,1,35 },{ "\ca\sounds\Characters\Water\water_run_5",0.056234132,1,35 },{ "\ca\sounds\Characters\Water\water_run_6",0.056234132,1,35 },{ "\ca\sounds\Characters\Water\water_run_7",0.056234132,1,35 },{ "\ca\sounds\Characters\Water\water_run_8",0.056234132,1,35 },{ "run",{ "\ca\sounds\Characters\Water\water_run_1",0.056234132,1,35 } },{ "run",{ "\ca\sounds\Characters\Water\water_run_2",0.056234132,1,35 } },{ "run",{ "\ca\sounds\Characters\Water\water_run_3",0.056234132,1,35 } },{ "run",{ "\ca\sounds\Characters\Water\water_run_4",0.056234132,1,35 } },{ "run",{ "\ca\sounds\Characters\Water\water_run_5",0.056234132,1,35 } },{ "run",{ "\ca\sounds\Characters\Water\water_run_6",0.056234132,1,35 } },{ "run",{ "\ca\sounds\Characters\Water\water_run_7",0.056234132,1,35 } },{ "run",{ "\ca\sounds\Characters\Water\water_run_8",0.056234132,1,35 } },{ "walk",{ "\ca\sounds\Characters\Water\water_walk_1",0.056234132,1,30 } },{ "walk",{ "\ca\sounds\Characters\Water\water_walk_2",0.056234132,1,30 } },{ "walk",{ "\ca\sounds\Characters\Water\water_walk_3",0.056234132,1,30 } },{ "walk",{ "\ca\sounds\Characters\Water\water_walk_4",0.056234132,1,30 } },{ "walk",{ "\ca\sounds\Characters\Water\water_walk_5",0.056234132,1,30 } },{ "walk",{ "\ca\sounds\Characters\Water\water_walk_6",0.056234132,1,30 } },{ "walk",{ "\ca\sounds\Characters\Water\water_walk_7",0.056234132,1,30 } },{ "walk",{ "\ca\sounds\Characters\Water\water_walk_8",0.056234132,1,30 } },{ "sprint",{ "\ca\sounds\Characters\Water\water_sprint_1",0.056234132,1,40 } },{ "sprint",{ "\ca\sounds\Characters\Water\water_sprint_2",0.056234132,1,40 } },{ "sprint",{ "\ca\sounds\Characters\Water\water_sprint_3",0.056234132,1,40 } },{ "sprint",{ "\ca\sounds\Characters\Water\water_sprint_4",0.056234132,1,40 } },{ "sprint",{ "\ca\sounds\Characters\Water\water_sprint_5",0.056234132,1,40 } },{ "sprint",{ "\ca\sounds\Characters\Water\water_sprint_6",0.056234132,1,40 } },{ "sprint",{ "\ca\sounds\Characters\Water\water_sprint_7",0.056234132,1,40 } },{ "sprint",{ "\ca\sounds\Characters\Water\water_sprint_8",0.056234132,1,40 } },{ "crawl",{ "\ca\sounds\Characters\water\crawl1",0.056234132,1,20 } },{ "crawl",{ "\ca\sounds\Characters\water\crawl2",0.056234132,1,20 } },{ "crawl",{ "\ca\sounds\Characters\water\crawl3",0.056234132,1,20 } },{ "crawl",{ "\ca\sounds\Characters\water\crawl4",0.056234132,1,20 } },{ "standup",{ "\ca\sounds\Characters\water\up1",0.056234132,1,20 } },{ "standup",{ "\ca\sounds\Characters\water\up2",0.056234132,1,20 } },{ "standup",{ "\ca\sounds\Characters\water\up3",0.056234132,1,20 } },{ "standup",{ "\ca\sounds\Characters\water\up4",0.056234132,1,20 } },{ "laydown",{ "\ca\sounds\Characters\water\down1",0.056234132,1,20 } },{ "laydown",{ "\ca\sounds\Characters\water\down2",0.056234132,1,20 } },{ "laydown",{ "\ca\sounds\Characters\water\down3",0.056234132,1,20 } },{ "laydown",{ "\ca\sounds\Characters\water\down4",0.056234132,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\water\fall_to_ground1",0.056234132,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\water\fall_to_ground2",0.056234132,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\water\fall_to_ground3",0.056234132,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\water\fall_to_ground4",0.056234132,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.017782794,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.017782794,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.017782794,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.056234132,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.056234132,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.056234132,1,20 } }};
			gravel[] = {{ "\CA\sounds\Characters\gravel\run_01",0.056234132,1,32 },{ "\CA\sounds\Characters\gravel\run_02",0.056234132,1,32 },{ "\CA\sounds\Characters\gravel\run_03",0.056234132,1,32 },{ "\CA\sounds\Characters\gravel\run_04",0.056234132,1,32 },{ "\CA\sounds\Characters\gravel\run_05",0.056234132,1,32 },{ "\CA\sounds\Characters\gravel\run_06",0.056234132,1,32 },{ "\CA\sounds\Characters\gravel\run_07",0.056234132,1,32 },{ "\CA\sounds\Characters\gravel\run_08",0.056234132,1,32 },{ "run",{ "\CA\sounds\Characters\gravel\run_01",0.056234132,1,32 } },{ "run",{ "\CA\sounds\Characters\gravel\run_02",0.056234132,1,32 } },{ "run",{ "\CA\sounds\Characters\gravel\run_03",0.056234132,1,32 } },{ "run",{ "\CA\sounds\Characters\gravel\run_04",0.056234132,1,32 } },{ "run",{ "\CA\sounds\Characters\gravel\run_05",0.056234132,1,32 } },{ "run",{ "\CA\sounds\Characters\gravel\run_06",0.056234132,1,32 } },{ "run",{ "\CA\sounds\Characters\gravel\run_07",0.056234132,1,32 } },{ "run",{ "\CA\sounds\Characters\gravel\run_08",0.056234132,1,32 } },{ "walk",{ "\CA\sounds\Characters\gravel\walk_01",0.056234132,1,26 } },{ "walk",{ "\CA\sounds\Characters\gravel\walk_02",0.056234132,1,26 } },{ "walk",{ "\CA\sounds\Characters\gravel\walk_03",0.056234132,1,26 } },{ "walk",{ "\CA\sounds\Characters\gravel\walk_04",0.056234132,1,26 } },{ "walk",{ "\CA\sounds\Characters\gravel\walk_05",0.056234132,1,26 } },{ "walk",{ "\CA\sounds\Characters\gravel\walk_06",0.056234132,1,26 } },{ "walk",{ "\CA\sounds\Characters\gravel\walk_07",0.056234132,1,26 } },{ "walk",{ "\CA\sounds\Characters\gravel\walk_08",0.056234132,1,26 } },{ "sprint",{ "\CA\sounds\Characters\gravel\sprint_01",0.056234132,1,36 } },{ "sprint",{ "\CA\sounds\Characters\gravel\sprint_02",0.056234132,1,36 } },{ "sprint",{ "\CA\sounds\Characters\gravel\sprint_03",0.056234132,1,36 } },{ "sprint",{ "\CA\sounds\Characters\gravel\sprint_04",0.056234132,1,36 } },{ "sprint",{ "\CA\sounds\Characters\gravel\sprint_05",0.056234132,1,36 } },{ "sprint",{ "\CA\sounds\Characters\gravel\sprint_06",0.056234132,1,36 } },{ "sprint",{ "\CA\sounds\Characters\gravel\sprint_07",0.056234132,1,36 } },{ "sprint",{ "\CA\sounds\Characters\gravel\sprint_08",0.056234132,1,36 } },{ "crawl",{ "\ca\sounds\Characters\gravel\crawl1",0.056234132,1,20 } },{ "crawl",{ "\ca\sounds\Characters\gravel\crawl2",0.056234132,1,20 } },{ "crawl",{ "\ca\sounds\Characters\gravel\crawl3",0.056234132,1,20 } },{ "crawl",{ "\ca\sounds\Characters\gravel\crawl4",0.056234132,1,20 } },{ "standup",{ "\ca\sounds\Characters\gravel\up1",0.056234132,1,20 } },{ "standup",{ "\ca\sounds\Characters\gravel\up2",0.056234132,1,20 } },{ "standup",{ "\ca\sounds\Characters\gravel\up3",0.056234132,1,20 } },{ "standup",{ "\ca\sounds\Characters\gravel\up4",0.056234132,1,20 } },{ "laydown",{ "\ca\sounds\Characters\gravel\down1",0.056234132,1,20 } },{ "laydown",{ "\ca\sounds\Characters\gravel\down2",0.056234132,1,20 } },{ "laydown",{ "\ca\sounds\Characters\gravel\down3",0.056234132,1,20 } },{ "laydown",{ "\ca\sounds\Characters\gravel\down4",0.056234132,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\gravel\fall_to_ground1",0.056234132,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\gravel\fall_to_ground2",0.056234132,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\gravel\fall_to_ground3",0.056234132,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\gravel\fall_to_ground4",0.056234132,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.017782794,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.017782794,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.017782794,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.056234132,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.056234132,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.056234132,1,20 } }};
			gravel2[] = {{ "\CA\sounds\Characters\gravel_2\run_01",0.056234132,1,32 },{ "\CA\sounds\Characters\gravel_2\run_02",0.056234132,1,32 },{ "\CA\sounds\Characters\gravel_2\run_03",0.056234132,1,32 },{ "\CA\sounds\Characters\gravel_2\run_04",0.056234132,1,32 },{ "\CA\sounds\Characters\gravel_2\run_05",0.056234132,1,32 },{ "\CA\sounds\Characters\gravel_2\run_06",0.056234132,1,32 },{ "\CA\sounds\Characters\gravel_2\run_07",0.056234132,1,32 },{ "\CA\sounds\Characters\gravel_2\run_08",0.056234132,1,32 },{ "run",{ "\CA\sounds\Characters\gravel_2\run_01",0.056234132,1,32 } },{ "run",{ "\CA\sounds\Characters\gravel_2\run_02",0.056234132,1,32 } },{ "run",{ "\CA\sounds\Characters\gravel_2\run_03",0.056234132,1,32 } },{ "run",{ "\CA\sounds\Characters\gravel_2\run_04",0.056234132,1,32 } },{ "run",{ "\CA\sounds\Characters\gravel_2\run_05",0.056234132,1,32 } },{ "run",{ "\CA\sounds\Characters\gravel_2\run_06",0.056234132,1,32 } },{ "run",{ "\CA\sounds\Characters\gravel_2\run_07",0.056234132,1,32 } },{ "run",{ "\CA\sounds\Characters\gravel_2\run_08",0.056234132,1,32 } },{ "walk",{ "\CA\sounds\Characters\gravel_2\walk_01",0.056234132,1,26 } },{ "walk",{ "\CA\sounds\Characters\gravel_2\walk_02",0.056234132,1,26 } },{ "walk",{ "\CA\sounds\Characters\gravel_2\walk_03",0.056234132,1,26 } },{ "walk",{ "\CA\sounds\Characters\gravel_2\walk_04",0.056234132,1,26 } },{ "walk",{ "\CA\sounds\Characters\gravel_2\walk_05",0.056234132,1,26 } },{ "walk",{ "\CA\sounds\Characters\gravel_2\walk_06",0.056234132,1,26 } },{ "walk",{ "\CA\sounds\Characters\gravel_2\walk_07",0.056234132,1,26 } },{ "walk",{ "\CA\sounds\Characters\gravel_2\walk_08",0.056234132,1,26 } },{ "sprint",{ "\CA\sounds\Characters\gravel_2\sprint_01",0.056234132,1,36 } },{ "sprint",{ "\CA\sounds\Characters\gravel_2\sprint_02",0.056234132,1,36 } },{ "sprint",{ "\CA\sounds\Characters\gravel_2\sprint_03",0.056234132,1,36 } },{ "sprint",{ "\CA\sounds\Characters\gravel_2\sprint_04",0.056234132,1,36 } },{ "sprint",{ "\CA\sounds\Characters\gravel_2\sprint_05",0.056234132,1,36 } },{ "sprint",{ "\CA\sounds\Characters\gravel_2\sprint_06",0.056234132,1,36 } },{ "sprint",{ "\CA\sounds\Characters\gravel_2\sprint_07",0.056234132,1,36 } },{ "sprint",{ "\CA\sounds\Characters\gravel_2\sprint_08",0.056234132,1,36 } },{ "crawl",{ "\ca\sounds\Characters\gravel_2\crawl1",0.056234132,1,20 } },{ "crawl",{ "\ca\sounds\Characters\gravel_2\crawl2",0.056234132,1,20 } },{ "crawl",{ "\ca\sounds\Characters\gravel_2\crawl3",0.056234132,1,20 } },{ "crawl",{ "\ca\sounds\Characters\gravel_2\crawl4",0.056234132,1,20 } },{ "standup",{ "\ca\sounds\Characters\gravel_2\up1",0.056234132,1,20 } },{ "standup",{ "\ca\sounds\Characters\gravel_2\up2",0.056234132,1,20 } },{ "standup",{ "\ca\sounds\Characters\gravel_2\up3",0.056234132,1,20 } },{ "standup",{ "\ca\sounds\Characters\gravel_2\up4",0.056234132,1,20 } },{ "laydown",{ "\ca\sounds\Characters\gravel_2\down1",0.056234132,1,20 } },{ "laydown",{ "\ca\sounds\Characters\gravel_2\down2",0.056234132,1,20 } },{ "laydown",{ "\ca\sounds\Characters\gravel_2\down3",0.056234132,1,20 } },{ "laydown",{ "\ca\sounds\Characters\gravel_2\down4",0.056234132,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\gravel_2\fall_to_ground1",0.056234132,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\gravel_2\fall_to_ground2",0.056234132,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\gravel_2\fall_to_ground3",0.056234132,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\gravel_2\fall_to_ground4",0.056234132,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.017782794,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.017782794,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.017782794,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.056234132,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.056234132,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.056234132,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.056234132,1,20 } }};
			sand[] = {{ "\CA\sounds\Characters\sand\run_01",0.019952621,1,22 },{ "\CA\sounds\Characters\sand\run_02",0.019952621,1,22 },{ "\CA\sounds\Characters\sand\run_03",0.019952621,1,22 },{ "\CA\sounds\Characters\sand\run_04",0.019952621,1,22 },{ "\CA\sounds\Characters\sand\run_05",0.019952621,1,22 },{ "\CA\sounds\Characters\sand\run_06",0.019952621,1,22 },{ "\CA\sounds\Characters\sand\run_07",0.019952621,1,22 },{ "\CA\sounds\Characters\sand\run_08",0.019952621,1,22 },{ "run",{ "\CA\sounds\Characters\sand\run_01",0.019952621,1,22 } },{ "run",{ "\CA\sounds\Characters\sand\run_02",0.019952621,1,22 } },{ "run",{ "\CA\sounds\Characters\sand\run_03",0.019952621,1,22 } },{ "run",{ "\CA\sounds\Characters\sand\run_04",0.019952621,1,22 } },{ "run",{ "\CA\sounds\Characters\sand\run_05",0.019952621,1,22 } },{ "run",{ "\CA\sounds\Characters\sand\run_06",0.019952621,1,22 } },{ "run",{ "\CA\sounds\Characters\sand\run_07",0.019952621,1,22 } },{ "run",{ "\CA\sounds\Characters\sand\run_08",0.019952621,1,22 } },{ "walk",{ "\CA\sounds\Characters\sand\walk_01",0.019952621,1,18 } },{ "walk",{ "\CA\sounds\Characters\sand\walk_02",0.019952621,1,18 } },{ "walk",{ "\CA\sounds\Characters\sand\walk_03",0.019952621,1,18 } },{ "walk",{ "\CA\sounds\Characters\sand\walk_04",0.019952621,1,18 } },{ "walk",{ "\CA\sounds\Characters\sand\walk_05",0.019952621,1,18 } },{ "walk",{ "\CA\sounds\Characters\sand\walk_06",0.019952621,1,18 } },{ "walk",{ "\CA\sounds\Characters\sand\walk_07",0.019952621,1,18 } },{ "walk",{ "\CA\sounds\Characters\sand\walk_08",0.019952621,1,18 } },{ "sprint",{ "\CA\sounds\Characters\sand\sprint_01",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\sand\sprint_02",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\sand\sprint_03",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\sand\sprint_04",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\sand\sprint_05",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\sand\sprint_06",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\sand\sprint_07",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\sand\sprint_08",0.019952621,1,30 } },{ "crawl",{ "\ca\sounds\Characters\sand\crawl1",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\sand\crawl2",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\sand\crawl3",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\sand\crawl4",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\sand\up1",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\sand\up2",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\sand\up3",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\sand\up4",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\sand\down1",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\sand\down2",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\sand\down3",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\sand\down4",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\sand\fall_to_ground1",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\sand\fall_to_ground2",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\sand\fall_to_ground3",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\sand\fall_to_ground4",0.019952621,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.017782794,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.017782794,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.017782794,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			drygrass[] = {{ "\CA\sounds\Characters\drygrass\run_1",0.01,0.9,27 },{ "\CA\sounds\Characters\drygrass\run_2",0.01,0.9,27 },{ "\CA\sounds\Characters\drygrass\run_3",0.01,0.9,27 },{ "\CA\sounds\Characters\drygrass\run_4",0.01,0.9,27 },{ "\CA\sounds\Characters\drygrass\run_5",0.01,0.9,27 },{ "\CA\sounds\Characters\drygrass\run_6",0.01,0.9,27 },{ "\CA\sounds\Characters\drygrass\run_7",0.01,0.9,27 },{ "\CA\sounds\Characters\drygrass\run_8",0.01,0.9,27 },{ "run",{ "\CA\sounds\Characters\drygrass\run_1",0.01,0.9,27 } },{ "run",{ "\CA\sounds\Characters\drygrass\run_2",0.01,0.9,27 } },{ "run",{ "\CA\sounds\Characters\drygrass\run_3",0.01,0.9,27 } },{ "run",{ "\CA\sounds\Characters\drygrass\run_4",0.01,0.9,27 } },{ "run",{ "\CA\sounds\Characters\drygrass\run_5",0.01,0.9,27 } },{ "run",{ "\CA\sounds\Characters\drygrass\run_6",0.01,0.9,27 } },{ "run",{ "\CA\sounds\Characters\drygrass\run_7",0.01,0.9,27 } },{ "run",{ "\CA\sounds\Characters\drygrass\run_8",0.01,0.9,27 } },{ "walk",{ "\CA\sounds\Characters\drygrass\walk_1",0.00891251,0.9,22 } },{ "walk",{ "\CA\sounds\Characters\drygrass\walk_2",0.00891251,0.9,22 } },{ "walk",{ "\CA\sounds\Characters\drygrass\walk_3",0.00891251,0.9,22 } },{ "walk",{ "\CA\sounds\Characters\drygrass\walk_4",0.00891251,0.9,22 } },{ "walk",{ "\CA\sounds\Characters\drygrass\walk_5",0.00891251,0.9,22 } },{ "walk",{ "\CA\sounds\Characters\drygrass\walk_6",0.00891251,0.9,22 } },{ "walk",{ "\CA\sounds\Characters\drygrass\walk_7",0.00891251,0.9,22 } },{ "walk",{ "\CA\sounds\Characters\drygrass\walk_8",0.00891251,0.9,22 } },{ "sprint",{ "\CA\sounds\Characters\drygrass\sprint_1",0.017782794,0.9,35 } },{ "sprint",{ "\CA\sounds\Characters\drygrass\sprint_2",0.017782794,0.9,35 } },{ "sprint",{ "\CA\sounds\Characters\drygrass\sprint_3",0.017782794,0.9,35 } },{ "sprint",{ "\CA\sounds\Characters\drygrass\sprint_4",0.017782794,0.9,35 } },{ "sprint",{ "\CA\sounds\Characters\drygrass\sprint_5",0.017782794,0.9,35 } },{ "sprint",{ "\CA\sounds\Characters\drygrass\sprint_6",0.017782794,0.9,35 } },{ "sprint",{ "\CA\sounds\Characters\drygrass\sprint_7",0.017782794,0.9,35 } },{ "sprint",{ "\CA\sounds\Characters\drygrass\sprint_8",0.017782794,0.9,35 } },{ "crawl",{ "\ca\sounds\Characters\drygrass\crawl1",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\drygrass\crawl2",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\drygrass\crawl3",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\drygrass\crawl4",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\drygrass\up1",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\drygrass\up2",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\drygrass\up3",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\drygrass\up4",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\drygrass\down1",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\drygrass\down2",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\drygrass\down3",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\drygrass\down4",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\drygrass\fall_to_ground1",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\drygrass\fall_to_ground2",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\drygrass\fall_to_ground3",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\drygrass\fall_to_ground4",0.019952621,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			grass[] = {{ "\ca\sounds\Characters\Grass\grass_run_1",0.019952621,1,23 },{ "\ca\sounds\Characters\Grass\grass_run_2",0.019952621,1,23 },{ "\ca\sounds\Characters\Grass\grass_run_3",0.019952621,1,23 },{ "\ca\sounds\Characters\Grass\grass_run_4",0.019952621,1,23 },{ "\ca\sounds\Characters\Grass\grass_run_5",0.019952621,1,23 },{ "\ca\sounds\Characters\Grass\grass_run_6",0.019952621,1,23 },{ "\ca\sounds\Characters\Grass\grass_run_7",0.019952621,1,23 },{ "\ca\sounds\Characters\Grass\grass_run_8",0.019952621,1,23 },{ "run",{ "\ca\sounds\Characters\Grass\grass_run_1",0.019952621,1,23 } },{ "run",{ "\ca\sounds\Characters\Grass\grass_run_2",0.019952621,1,23 } },{ "run",{ "\ca\sounds\Characters\Grass\grass_run_3",0.019952621,1,23 } },{ "run",{ "\ca\sounds\Characters\Grass\grass_run_4",0.019952621,1,23 } },{ "run",{ "\ca\sounds\Characters\Grass\grass_run_5",0.019952621,1,23 } },{ "run",{ "\ca\sounds\Characters\Grass\grass_run_6",0.019952621,1,23 } },{ "run",{ "\ca\sounds\Characters\Grass\grass_run_7",0.019952621,1,23 } },{ "run",{ "\ca\sounds\Characters\Grass\grass_run_8",0.019952621,1,23 } },{ "walk",{ "\ca\sounds\Characters\Grass\grass_walk_1",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Grass\grass_walk_2",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Grass\grass_walk_3",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Grass\grass_walk_4",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Grass\grass_walk_5",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Grass\grass_walk_6",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Grass\grass_walk_7",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Grass\grass_walk_8",0.019952621,1,19 } },{ "sprint",{ "\ca\sounds\Characters\Grass\grass_sprint_1",0.019952621,1,28 } },{ "sprint",{ "\ca\sounds\Characters\Grass\grass_sprint_2",0.019952621,1,28 } },{ "sprint",{ "\ca\sounds\Characters\Grass\grass_sprint_3",0.019952621,1,28 } },{ "sprint",{ "\ca\sounds\Characters\Grass\grass_sprint_4",0.019952621,1,28 } },{ "sprint",{ "\ca\sounds\Characters\Grass\grass_sprint_5",0.019952621,1,28 } },{ "sprint",{ "\ca\sounds\Characters\Grass\grass_sprint_6",0.019952621,1,28 } },{ "sprint",{ "\ca\sounds\Characters\Grass\grass_sprint_7",0.019952621,1,28 } },{ "sprint",{ "\ca\sounds\Characters\Grass\grass_sprint_8",0.019952621,1,28 } },{ "crawl",{ "\ca\sounds\Characters\grass\crawl1",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\grass\crawl2",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\grass\crawl3",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\grass\crawl4",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\grass\up1",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\grass\up2",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\grass\up3",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\grass\up4",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\grass\down1",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\grass\down2",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\grass\down3",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\grass\down4",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\grass\fall_to_ground1",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\grass\fall_to_ground2",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\grass\fall_to_ground3",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\grass\fall_to_ground4",0.019952621,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			forest[] = {{ "\ca\sounds\Characters\Forest\forest_run_1",0.019952621,0.9,27 },{ "\ca\sounds\Characters\Forest\forest_run_2",0.019952621,0.9,27 },{ "\ca\sounds\Characters\Forest\forest_run_3",0.019952621,0.9,27 },{ "\ca\sounds\Characters\Forest\forest_run_4",0.019952621,0.9,27 },{ "\ca\sounds\Characters\Forest\forest_run_5",0.019952621,0.9,27 },{ "\ca\sounds\Characters\Forest\forest_run_6",0.019952621,0.9,27 },{ "\ca\sounds\Characters\Forest\forest_run_7",0.019952621,0.9,27 },{ "\ca\sounds\Characters\Forest\forest_run_8",0.019952621,0.9,27 },{ "run",{ "\ca\sounds\Characters\Forest\forest_run_1",0.019952621,0.9,27 } },{ "run",{ "\ca\sounds\Characters\Forest\forest_run_2",0.019952621,0.9,27 } },{ "run",{ "\ca\sounds\Characters\Forest\forest_run_3",0.019952621,0.9,27 } },{ "run",{ "\ca\sounds\Characters\Forest\forest_run_4",0.019952621,0.9,27 } },{ "run",{ "\ca\sounds\Characters\Forest\forest_run_5",0.019952621,0.9,27 } },{ "run",{ "\ca\sounds\Characters\Forest\forest_run_6",0.019952621,0.9,27 } },{ "run",{ "\ca\sounds\Characters\Forest\forest_run_7",0.019952621,0.9,27 } },{ "run",{ "\ca\sounds\Characters\Forest\forest_run_8",0.019952621,0.9,27 } },{ "walk",{ "\ca\sounds\Characters\Forest\forest_walk_1",0.019952621,0.9,22 } },{ "walk",{ "\ca\sounds\Characters\Forest\forest_walk_2",0.019952621,0.9,22 } },{ "walk",{ "\ca\sounds\Characters\Forest\forest_walk_3",0.019952621,0.9,22 } },{ "walk",{ "\ca\sounds\Characters\Forest\forest_walk_4",0.019952621,0.9,22 } },{ "walk",{ "\ca\sounds\Characters\Forest\forest_walk_5",0.019952621,0.9,22 } },{ "walk",{ "\ca\sounds\Characters\Forest\forest_walk_6",0.019952621,0.9,22 } },{ "walk",{ "\ca\sounds\Characters\Forest\forest_walk_7",0.019952621,0.9,22 } },{ "walk",{ "\ca\sounds\Characters\Forest\forest_walk_8",0.019952621,0.9,22 } },{ "sprint",{ "\ca\sounds\Characters\Forest\forest_sprint_1",0.019952621,0.9,32 } },{ "sprint",{ "\ca\sounds\Characters\Forest\forest_sprint_2",0.019952621,0.9,32 } },{ "sprint",{ "\ca\sounds\Characters\Forest\forest_sprint_3",0.019952621,0.9,32 } },{ "sprint",{ "\ca\sounds\Characters\Forest\forest_sprint_4",0.019952621,0.9,32 } },{ "sprint",{ "\ca\sounds\Characters\Forest\forest_sprint_5",0.019952621,0.9,32 } },{ "sprint",{ "\ca\sounds\Characters\Forest\forest_sprint_6",0.019952621,0.9,32 } },{ "sprint",{ "\ca\sounds\Characters\Forest\forest_sprint_7",0.019952621,0.9,32 } },{ "sprint",{ "\ca\sounds\Characters\Forest\forest_sprint_8",0.019952621,0.9,32 } },{ "crawl",{ "\ca\sounds\Characters\forest\crawl1",0.019952621,0.9,20 } },{ "crawl",{ "\ca\sounds\Characters\forest\crawl2",0.019952621,0.9,20 } },{ "crawl",{ "\ca\sounds\Characters\forest\crawl3",0.019952621,0.9,20 } },{ "crawl",{ "\ca\sounds\Characters\forest\crawl4",0.019952621,0.9,20 } },{ "standup",{ "\ca\sounds\Characters\forest\up1",0.019952621,0.9,20 } },{ "standup",{ "\ca\sounds\Characters\forest\up2",0.019952621,0.9,20 } },{ "standup",{ "\ca\sounds\Characters\forest\up3",0.019952621,0.9,20 } },{ "standup",{ "\ca\sounds\Characters\forest\up4",0.019952621,0.9,20 } },{ "laydown",{ "\ca\sounds\Characters\forest\down1",0.019952621,0.9,20 } },{ "laydown",{ "\ca\sounds\Characters\forest\down2",0.019952621,0.9,20 } },{ "laydown",{ "\ca\sounds\Characters\forest\down3",0.019952621,0.9,20 } },{ "laydown",{ "\ca\sounds\Characters\forest\down4",0.019952621,0.9,20 } },{ "bodyfall",{ "\ca\sounds\Characters\forest\fall_to_ground1",0.019952621,0.9,20 } },{ "bodyfall",{ "\ca\sounds\Characters\forest\fall_to_ground2",0.019952621,0.9,20 } },{ "bodyfall",{ "\ca\sounds\Characters\forest\fall_to_ground3",0.019952621,0.9,20 } },{ "bodyfall",{ "\ca\sounds\Characters\forest\fall_to_ground4",0.019952621,0.9,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.017782794,0.9,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.017782794,0.9,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.017782794,0.9,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.019952621,0.9,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.019952621,0.9,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.019952621,0.9,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,0.9,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,0.9,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,0.9,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,0.9,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,0.9,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,0.9,20 } }};
			mud[] = {{ "\ca\sounds\Characters\Mud\mud_run_1",0.019952621,1,19 },{ "\ca\sounds\Characters\Mud\mud_run_2",0.019952621,1,19 },{ "\ca\sounds\Characters\Mud\mud_run_3",0.019952621,1,19 },{ "\ca\sounds\Characters\Mud\mud_run_4",0.019952621,1,19 },{ "\ca\sounds\Characters\Mud\mud_run_5",0.019952621,1,19 },{ "\ca\sounds\Characters\Mud\mud_run_6",0.019952621,1,19 },{ "\ca\sounds\Characters\Mud\mud_run_7",0.019952621,1,19 },{ "\ca\sounds\Characters\Mud\mud_run_8",0.019952621,1,19 },{ "run",{ "\ca\sounds\Characters\Mud\mud_run_1",0.019952621,1,19 } },{ "run",{ "\ca\sounds\Characters\Mud\mud_run_2",0.019952621,1,19 } },{ "run",{ "\ca\sounds\Characters\Mud\mud_run_3",0.019952621,1,19 } },{ "run",{ "\ca\sounds\Characters\Mud\mud_run_4",0.019952621,1,19 } },{ "run",{ "\ca\sounds\Characters\Mud\mud_run_5",0.019952621,1,19 } },{ "run",{ "\ca\sounds\Characters\Mud\mud_run_6",0.019952621,1,19 } },{ "run",{ "\ca\sounds\Characters\Mud\mud_run_7",0.019952621,1,19 } },{ "run",{ "\ca\sounds\Characters\Mud\mud_run_8",0.019952621,1,19 } },{ "walk",{ "\ca\sounds\Characters\Mud\mud_walk_1",0.019952621,1,17 } },{ "walk",{ "\ca\sounds\Characters\Mud\mud_walk_2",0.019952621,1,17 } },{ "walk",{ "\ca\sounds\Characters\Mud\mud_walk_3",0.019952621,1,17 } },{ "walk",{ "\ca\sounds\Characters\Mud\mud_walk_4",0.019952621,1,17 } },{ "walk",{ "\ca\sounds\Characters\Mud\mud_walk_5",0.019952621,1,17 } },{ "walk",{ "\ca\sounds\Characters\Mud\mud_walk_6",0.019952621,1,17 } },{ "walk",{ "\ca\sounds\Characters\Mud\mud_walk_7",0.019952621,1,17 } },{ "walk",{ "\ca\sounds\Characters\Mud\mud_walk_8",0.019952621,1,17 } },{ "sprint",{ "\ca\sounds\Characters\Mud\mud_sprint_1",0.019952621,1,23 } },{ "sprint",{ "\ca\sounds\Characters\Mud\mud_sprint_2",0.019952621,1,23 } },{ "sprint",{ "\ca\sounds\Characters\Mud\mud_sprint_3",0.019952621,1,23 } },{ "sprint",{ "\ca\sounds\Characters\Mud\mud_sprint_4",0.019952621,1,23 } },{ "sprint",{ "\ca\sounds\Characters\Mud\mud_sprint_5",0.019952621,1,23 } },{ "sprint",{ "\ca\sounds\Characters\Mud\mud_sprint_6",0.019952621,1,23 } },{ "sprint",{ "\ca\sounds\Characters\Mud\mud_sprint_7",0.019952621,1,23 } },{ "sprint",{ "\ca\sounds\Characters\Mud\mud_sprint_8",0.019952621,1,23 } },{ "crawl",{ "\ca\sounds\Characters\mud\crawl1",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\mud\crawl2",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\mud\crawl3",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\mud\crawl4",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\mud\up1",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\mud\up2",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\mud\up3",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\mud\up4",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\mud\down1",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\mud\down2",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\mud\down3",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\mud\down4",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\mud\fall_to_ground1",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\mud\fall_to_ground2",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\mud\fall_to_ground3",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\mud\fall_to_ground4",0.019952621,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.017782794,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			wood[] = {{ "\CA\sounds\Characters\Wood_ext\run_1",0.019952621,1,25 },{ "\CA\sounds\Characters\Wood_ext\run_2",0.019952621,1,25 },{ "\CA\sounds\Characters\Wood_ext\run_3",0.019952621,1,25 },{ "\CA\sounds\Characters\Wood_ext\run_4",0.019952621,1,25 },{ "\CA\sounds\Characters\Wood_ext\run_5",0.019952621,1,25 },{ "\CA\sounds\Characters\Wood_ext\run_6",0.019952621,1,25 },{ "\CA\sounds\Characters\Wood_ext\run_7",0.019952621,1,25 },{ "\CA\sounds\Characters\Wood_ext\run_8",0.019952621,1,25 },{ "run",{ "\CA\sounds\Characters\Wood_ext\run_1",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\Wood_ext\run_2",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\Wood_ext\run_3",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\Wood_ext\run_4",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\Wood_ext\run_5",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\Wood_ext\run_6",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\Wood_ext\run_7",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\Wood_ext\run_8",0.019952621,1,25 } },{ "walk",{ "\CA\sounds\Characters\Wood_ext\walk_1",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\Wood_ext\walk_2",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\Wood_ext\walk_3",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\Wood_ext\walk_4",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\Wood_ext\walk_5",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\Wood_ext\walk_6",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\Wood_ext\walk_7",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\Wood_ext\walk_8",0.019952621,1,20 } },{ "sprint",{ "\CA\sounds\Characters\Wood_ext\sprint_1",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Wood_ext\sprint_2",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Wood_ext\sprint_3",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Wood_ext\sprint_4",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Wood_ext\sprint_5",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Wood_ext\sprint_6",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Wood_ext\sprint_7",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Wood_ext\sprint_8",0.019952621,1,30 } },{ "crawl",{ "\ca\sounds\Characters\Wood_ext\crawl1",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\Wood_ext\crawl2",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\Wood_ext\crawl3",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\Wood_ext\crawl4",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\Wood_ext\up1",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\Wood_ext\up2",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\Wood_ext\up3",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\Wood_ext\up4",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\Wood_ext\down1",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\Wood_ext\down2",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\Wood_ext\down3",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\Wood_ext\down4",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\Wood_ext\fall_to_ground1",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\Wood_ext\fall_to_ground2",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\Wood_ext\fall_to_ground3",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\Wood_ext\fall_to_ground4",0.019952621,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			wood_int[] = {{ "\CA\sounds\Characters\Wood_int\run_1",0.019952621,1,25 },{ "\CA\sounds\Characters\Wood_int\run_2",0.019952621,1,25 },{ "\CA\sounds\Characters\Wood_int\run_3",0.019952621,1,25 },{ "\CA\sounds\Characters\Wood_int\run_4",0.019952621,1,25 },{ "\CA\sounds\Characters\Wood_int\run_5",0.019952621,1,25 },{ "\CA\sounds\Characters\Wood_int\run_6",0.019952621,1,25 },{ "\CA\sounds\Characters\Wood_int\run_7",0.019952621,1,25 },{ "\CA\sounds\Characters\Wood_int\run_8",0.019952621,1,25 },{ "run",{ "\CA\sounds\Characters\Wood_int\run_1",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\Wood_int\run_2",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\Wood_int\run_3",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\Wood_int\run_4",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\Wood_int\run_5",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\Wood_int\run_6",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\Wood_int\run_7",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\Wood_int\run_8",0.019952621,1,25 } },{ "walk",{ "\CA\sounds\Characters\Wood_int\walk_1",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\Wood_int\walk_2",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\Wood_int\walk_3",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\Wood_int\walk_4",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\Wood_int\walk_5",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\Wood_int\walk_6",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\Wood_int\walk_7",0.019952621,1,20 } },{ "walk",{ "\CA\sounds\Characters\Wood_int\walk_8",0.019952621,1,20 } },{ "sprint",{ "\CA\sounds\Characters\Wood_int\sprint_1",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Wood_int\sprint_2",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Wood_int\sprint_3",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Wood_int\sprint_4",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Wood_int\sprint_5",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Wood_int\sprint_6",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Wood_int\sprint_7",0.019952621,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Wood_int\sprint_8",0.019952621,1,30 } },{ "crawl",{ "\ca\sounds\Characters\Wood_int\crawl1",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\Wood_int\crawl2",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\Wood_int\crawl3",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\Wood_int\crawl4",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\Wood_int\up1",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\Wood_int\up2",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\Wood_int\up3",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\Wood_int\up4",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\Wood_int\down1",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\Wood_int\down2",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\Wood_int\down3",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\Wood_int\down4",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\Wood_int\fall_to_ground1",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\Wood_int\fall_to_ground2",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\Wood_int\fall_to_ground3",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\Wood_int\fall_to_ground4",0.019952621,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			carpet[] = {{ "\CA\sounds\Characters\carpet\run_01",0.2238721,1,13 },{ "\CA\sounds\Characters\carpet\run_02",0.019952621,1,13 },{ "\CA\sounds\Characters\carpet\run_03",0.2238721,1,13 },{ "\CA\sounds\Characters\carpet\run_04",0.2238721,1,13 },{ "\CA\sounds\Characters\carpet\run_05",0.2238721,1,13 },{ "\CA\sounds\Characters\carpet\run_06",0.2238721,1,13 },{ "\CA\sounds\Characters\carpet\run_07",0.2238721,1,13 },{ "\CA\sounds\Characters\carpet\run_08",0.2238721,1,13 },{ "run",{ "\CA\sounds\Characters\carpet\run_01",0.2238721,1,13 } },{ "run",{ "\CA\sounds\Characters\carpet\run_02",0.2238721,1,13 } },{ "run",{ "\CA\sounds\Characters\carpet\run_03",0.2238721,1,13 } },{ "run",{ "\CA\sounds\Characters\carpet\run_04",0.2238721,1,13 } },{ "run",{ "\CA\sounds\Characters\carpet\run_05",0.2238721,1,13 } },{ "run",{ "\CA\sounds\Characters\carpet\run_06",0.2238721,1,13 } },{ "run",{ "\CA\sounds\Characters\carpet\run_07",0.2238721,1,13 } },{ "run",{ "\CA\sounds\Characters\carpet\run_08",0.2238721,1,13 } },{ "walk",{ "\CA\sounds\Characters\carpet\walk_01",0.31622776,1,10 } },{ "walk",{ "\CA\sounds\Characters\carpet\walk_02",0.31622776,1,10 } },{ "walk",{ "\CA\sounds\Characters\carpet\walk_03",0.31622776,1,10 } },{ "walk",{ "\CA\sounds\Characters\carpet\walk_04",0.31622776,1,10 } },{ "walk",{ "\CA\sounds\Characters\carpet\walk_05",0.31622776,1,10 } },{ "walk",{ "\CA\sounds\Characters\carpet\walk_06",0.31622776,1,10 } },{ "walk",{ "\CA\sounds\Characters\carpet\walk_07",0.31622776,1,10 } },{ "walk",{ "\CA\sounds\Characters\carpet\walk_08",0.31622776,1,10 } },{ "sprint",{ "\CA\sounds\Characters\carpet\sprint_01",0.1,1,20 } },{ "sprint",{ "\CA\sounds\Characters\carpet\sprint_02",0.1,1,20 } },{ "sprint",{ "\CA\sounds\Characters\carpet\sprint_03",0.1,1,20 } },{ "sprint",{ "\CA\sounds\Characters\carpet\sprint_04",0.1,1,20 } },{ "sprint",{ "\CA\sounds\Characters\carpet\sprint_05",0.1,1,20 } },{ "sprint",{ "\CA\sounds\Characters\carpet\sprint_06",0.1,1,20 } },{ "sprint",{ "\CA\sounds\Characters\carpet\sprint_07",0.1,1,20 } },{ "sprint",{ "\CA\sounds\Characters\carpet\sprint_08",0.1,1,20 } },{ "crawl",{ "\ca\sounds\Characters\grass\crawl1",0.1,1,20 } },{ "crawl",{ "\ca\sounds\Characters\grass\crawl2",0.1,1,20 } },{ "crawl",{ "\ca\sounds\Characters\grass\crawl3",0.1,1,20 } },{ "crawl",{ "\ca\sounds\Characters\grass\crawl4",0.1,1,20 } },{ "standup",{ "\ca\sounds\Characters\grass\up1",0.1,1,20 } },{ "standup",{ "\ca\sounds\Characters\grass\up2",0.1,1,20 } },{ "standup",{ "\ca\sounds\Characters\grass\up3",0.1,1,20 } },{ "standup",{ "\ca\sounds\Characters\grass\up4",0.1,1,20 } },{ "laydown",{ "\ca\sounds\Characters\grass\down1",0.1,1,20 } },{ "laydown",{ "\ca\sounds\Characters\grass\down2",0.1,1,20 } },{ "laydown",{ "\ca\sounds\Characters\grass\down3",0.1,1,20 } },{ "laydown",{ "\ca\sounds\Characters\grass\down4",0.1,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\grass\fall_to_ground1",0.1,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\grass\fall_to_ground2",0.1,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\grass\fall_to_ground3",0.1,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\grass\fall_to_ground4",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.1,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.1,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.1,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.1,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.1,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.1,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.1,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.1,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.1,1,20 } }};
			concrete_int[] = {{ "\CA\sounds\Characters\concrete_int\run_01_int",0.019952621,1,24 },{ "\CA\sounds\Characters\concrete_int\run_02_int",0.019952621,1,24 },{ "\CA\sounds\Characters\concrete_int\run_03_int",0.019952621,1,24 },{ "\CA\sounds\Characters\concrete_int\run_04_int",0.019952621,1,24 },{ "\CA\sounds\Characters\concrete_int\run_05_int",0.019952621,1,24 },{ "\CA\sounds\Characters\concrete_int\run_06_int",0.019952621,1,24 },{ "\CA\sounds\Characters\concrete_int\run_07_int",0.019952621,1,24 },{ "\CA\sounds\Characters\concrete_int\run_08_int",0.019952621,1,24 },{ "run",{ "\CA\sounds\Characters\concrete_int\run_01_int",0.019952621,1,24 } },{ "run",{ "\CA\sounds\Characters\concrete_int\run_02_int",0.019952621,1,24 } },{ "run",{ "\CA\sounds\Characters\concrete_int\run_03_int",0.019952621,1,24 } },{ "run",{ "\CA\sounds\Characters\concrete_int\run_04_int",0.019952621,1,24 } },{ "run",{ "\CA\sounds\Characters\concrete_int\run_05_int",0.019952621,1,24 } },{ "run",{ "\CA\sounds\Characters\concrete_int\run_06_int",0.019952621,1,24 } },{ "run",{ "\CA\sounds\Characters\concrete_int\run_07_int",0.019952621,1,24 } },{ "run",{ "\CA\sounds\Characters\concrete_int\run_08_int",0.019952621,1,24 } },{ "walk",{ "\CA\sounds\Characters\concrete_int\walk_01_int",0.019952621,1,19 } },{ "walk",{ "\CA\sounds\Characters\concrete_int\walk_02_int",0.019952621,1,19 } },{ "walk",{ "\CA\sounds\Characters\concrete_int\walk_03_int",0.019952621,1,19 } },{ "walk",{ "\CA\sounds\Characters\concrete_int\walk_04_int",0.019952621,1,19 } },{ "walk",{ "\CA\sounds\Characters\concrete_int\walk_05_int",0.019952621,1,19 } },{ "walk",{ "\CA\sounds\Characters\concrete_int\walk_06_int",0.019952621,1,19 } },{ "walk",{ "\CA\sounds\Characters\concrete_int\walk_07_int",0.019952621,1,19 } },{ "walk",{ "\CA\sounds\Characters\concrete_int\walk_08_int",0.019952621,1,19 } },{ "sprint",{ "\CA\sounds\Characters\concrete_int\sprint_01_int",0.019952621,1,26 } },{ "sprint",{ "\CA\sounds\Characters\concrete_int\sprint_02_int",0.019952621,1,26 } },{ "sprint",{ "\CA\sounds\Characters\concrete_int\sprint_03_int",0.019952621,1,26 } },{ "sprint",{ "\CA\sounds\Characters\concrete_int\sprint_04_int",0.019952621,1,26 } },{ "sprint",{ "\CA\sounds\Characters\concrete_int\sprint_05_int",0.019952621,1,26 } },{ "sprint",{ "\CA\sounds\Characters\concrete_int\sprint_06_int",0.019952621,1,26 } },{ "sprint",{ "\CA\sounds\Characters\concrete_int\sprint_07_int",0.019952621,1,26 } },{ "sprint",{ "\CA\sounds\Characters\concrete_int\sprint_08_int",0.019952621,1,26 } },{ "crawl",{ "\ca\sounds\Characters\concrete_int\crawl1",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\concrete_int\crawl2",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\concrete_int\crawl3",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\concrete_int\crawl4",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\concrete_int\up1",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\concrete_int\up2",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\concrete_int\up3",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\concrete_int\up4",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\concrete_int\down1",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\concrete_int\down2",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\concrete_int\down3",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\concrete_int\down4",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\concrete_int\fall_to_ground1",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\concrete_int\fall_to_ground2",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\concrete_int\fall_to_ground3",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\concrete_int\fall_to_ground4",0.019952621,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			concrete_ext[] = {{ "\CA\sounds\Characters\concrete_ext\run_01",0.019952621,1,25 },{ "\CA\sounds\Characters\concrete_ext\run_02",0.019952621,1,25 },{ "\CA\sounds\Characters\concrete_ext\run_03",0.019952621,1,25 },{ "\CA\sounds\Characters\concrete_ext\run_04",0.019952621,1,25 },{ "\CA\sounds\Characters\concrete_ext\run_05",0.019952621,1,25 },{ "\CA\sounds\Characters\concrete_ext\run_06",0.019952621,1,25 },{ "\CA\sounds\Characters\concrete_ext\run_07",0.019952621,1,25 },{ "\CA\sounds\Characters\concrete_ext\run_08",0.019952621,1,25 },{ "run",{ "\CA\sounds\Characters\concrete_ext\run_01",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\concrete_ext\run_02",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\concrete_ext\run_03",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\concrete_ext\run_04",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\concrete_ext\run_05",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\concrete_ext\run_06",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\concrete_ext\run_07",0.019952621,1,25 } },{ "run",{ "\CA\sounds\Characters\concrete_ext\run_08",0.019952621,1,25 } },{ "walk",{ "\CA\sounds\Characters\concrete_ext\walk_01",0.019952621,1,19 } },{ "walk",{ "\CA\sounds\Characters\concrete_ext\walk_02",0.019952621,1,19 } },{ "walk",{ "\CA\sounds\Characters\concrete_ext\walk_03",0.019952621,1,19 } },{ "walk",{ "\CA\sounds\Characters\concrete_ext\walk_04",0.019952621,1,19 } },{ "walk",{ "\CA\sounds\Characters\concrete_ext\walk_05",0.019952621,1,19 } },{ "walk",{ "\CA\sounds\Characters\concrete_ext\walk_06",0.019952621,1,19 } },{ "walk",{ "\CA\sounds\Characters\concrete_ext\walk_07",0.019952621,1,19 } },{ "walk",{ "\CA\sounds\Characters\concrete_ext\walk_08",0.019952621,1,19 } },{ "sprint",{ "\CA\sounds\Characters\concrete_ext\sprint_01",0.019952621,1,28 } },{ "sprint",{ "\CA\sounds\Characters\concrete_ext\sprint_02",0.019952621,1,28 } },{ "sprint",{ "\CA\sounds\Characters\concrete_ext\sprint_03",0.019952621,1,28 } },{ "sprint",{ "\CA\sounds\Characters\concrete_ext\sprint_04",0.019952621,1,28 } },{ "sprint",{ "\CA\sounds\Characters\concrete_ext\sprint_05",0.019952621,1,28 } },{ "sprint",{ "\CA\sounds\Characters\concrete_ext\sprint_06",0.019952621,1,28 } },{ "sprint",{ "\CA\sounds\Characters\concrete_ext\sprint_07",0.019952621,1,28 } },{ "sprint",{ "\CA\sounds\Characters\concrete_ext\sprint_08",0.019952621,1,28 } },{ "crawl",{ "\ca\sounds\Characters\concrete_ext\crawl1",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\concrete_ext\crawl2",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\concrete_ext\crawl3",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\concrete_ext\crawl4",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\concrete_ext\up1",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\concrete_ext\up2",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\concrete_ext\up3",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\concrete_ext\up4",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\concrete_ext\down1",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\concrete_ext\down2",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\concrete_ext\down3",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\concrete_ext\down4",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\concrete_ext\fall_to_ground1",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\concrete_ext\fall_to_ground2",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\concrete_ext\fall_to_ground3",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\concrete_ext\fall_to_ground4",0.019952621,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			metal[] = {{ "\CA\sounds\Characters\Metal\run_1",0.031622775,1,37 },{ "\CA\sounds\Characters\Metal\run_2",0.031622775,1,37 },{ "\CA\sounds\Characters\Metal\run_3",0.031622775,1,37 },{ "\CA\sounds\Characters\Metal\run_4",0.031622775,1,37 },{ "\CA\sounds\Characters\Metal\run_5",0.031622775,1,37 },{ "\CA\sounds\Characters\Metal\run_6",0.031622775,1,37 },{ "\CA\sounds\Characters\Metal\run_7",0.031622775,1,37 },{ "\CA\sounds\Characters\Metal\run_8",0.031622775,1,37 },{ "run",{ "\CA\sounds\Characters\Metal\run_1",0.03981072,1,37 } },{ "run",{ "\CA\sounds\Characters\Metal\run_2",0.03981072,1,37 } },{ "run",{ "\CA\sounds\Characters\Metal\run_3",0.03981072,1,37 } },{ "run",{ "\CA\sounds\Characters\Metal\run_4",0.03981072,1,37 } },{ "run",{ "\CA\sounds\Characters\Metal\run_5",0.03981072,1,37 } },{ "run",{ "\CA\sounds\Characters\Metal\run_6",0.03981072,1,37 } },{ "run",{ "\CA\sounds\Characters\Metal\run_7",0.03981072,1,37 } },{ "run",{ "\CA\sounds\Characters\Metal\run_8",0.03981072,1,37 } },{ "walk",{ "\CA\sounds\Characters\Metal\walk_1",0.031622775,1,30 } },{ "walk",{ "\CA\sounds\Characters\Metal\walk_2",0.031622775,1,30 } },{ "walk",{ "\CA\sounds\Characters\Metal\walk_3",0.031622775,1,30 } },{ "walk",{ "\CA\sounds\Characters\Metal\walk_4",0.031622775,1,30 } },{ "walk",{ "\CA\sounds\Characters\Metal\walk_5",0.031622775,1,30 } },{ "walk",{ "\CA\sounds\Characters\Metal\walk_6",0.031622775,1,30 } },{ "walk",{ "\CA\sounds\Characters\Metal\walk_7",0.031622775,1,30 } },{ "walk",{ "\CA\sounds\Characters\Metal\walk_8",0.031622775,1,30 } },{ "sprint",{ "\CA\sounds\Characters\Metal\sprint_1",0.056234132,1,45 } },{ "sprint",{ "\CA\sounds\Characters\Metal\sprint_2",0.056234132,1,45 } },{ "sprint",{ "\CA\sounds\Characters\Metal\sprint_3",0.056234132,1,45 } },{ "sprint",{ "\CA\sounds\Characters\Metal\sprint_4",0.056234132,1,45 } },{ "sprint",{ "\CA\sounds\Characters\Metal\sprint_5",0.056234132,1,45 } },{ "sprint",{ "\CA\sounds\Characters\Metal\sprint_6",0.056234132,1,45 } },{ "sprint",{ "\CA\sounds\Characters\Metal\sprint_7",0.056234132,1,45 } },{ "sprint",{ "\CA\sounds\Characters\Metal\sprint_8",0.056234132,1,45 } },{ "crawl",{ "\ca\sounds\Characters\metal\crawl1",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\metal\crawl2",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\metal\crawl3",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\metal\crawl4",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\metal\up1",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\metal\up2",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\metal\up3",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\metal\up4",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\metal\down1",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\metal\down2",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\metal\down3",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\metal\down4",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\metal\fall_to_ground1",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\metal\fall_to_ground2",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\metal\fall_to_ground3",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\metal\fall_to_ground4",0.019952621,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			steel[] = {{ "\CA\sounds\Characters\steel\run_1",0.031622775,1,37 },{ "\CA\sounds\Characters\steel\run_2",0.031622775,1,37 },{ "\CA\sounds\Characters\steel\run_3",0.031622775,1,37 },{ "\CA\sounds\Characters\steel\run_4",0.031622775,1,37 },{ "\CA\sounds\Characters\steel\run_5",0.031622775,1,37 },{ "\CA\sounds\Characters\steel\run_6",0.031622775,1,37 },{ "\CA\sounds\Characters\steel\run_7",0.031622775,1,37 },{ "\CA\sounds\Characters\steel\run_8",0.031622775,1,37 },{ "run",{ "\CA\sounds\Characters\steel\run_1",0.03981072,1,37 } },{ "run",{ "\CA\sounds\Characters\steel\run_2",0.03981072,1,37 } },{ "run",{ "\CA\sounds\Characters\steel\run_3",0.03981072,1,37 } },{ "run",{ "\CA\sounds\Characters\steel\run_4",0.03981072,1,37 } },{ "run",{ "\CA\sounds\Characters\steel\run_5",0.03981072,1,37 } },{ "run",{ "\CA\sounds\Characters\steel\run_6",0.03981072,1,37 } },{ "run",{ "\CA\sounds\Characters\steel\run_7",0.03981072,1,37 } },{ "run",{ "\CA\sounds\Characters\steel\run_8",0.03981072,1,37 } },{ "walk",{ "\CA\sounds\Characters\steel\walk_1",0.031622775,1,30 } },{ "walk",{ "\CA\sounds\Characters\steel\walk_2",0.031622775,1,30 } },{ "walk",{ "\CA\sounds\Characters\steel\walk_3",0.031622775,1,30 } },{ "walk",{ "\CA\sounds\Characters\steel\walk_4",0.031622775,1,30 } },{ "walk",{ "\CA\sounds\Characters\steel\walk_5",0.031622775,1,30 } },{ "walk",{ "\CA\sounds\Characters\steel\walk_6",0.031622775,1,30 } },{ "walk",{ "\CA\sounds\Characters\steel\walk_7",0.031622775,1,30 } },{ "walk",{ "\CA\sounds\Characters\steel\walk_8",0.031622775,1,30 } },{ "sprint",{ "\CA\sounds\Characters\steel\sprint_1",0.056234132,1,45 } },{ "sprint",{ "\CA\sounds\Characters\steel\sprint_2",0.056234132,1,45 } },{ "sprint",{ "\CA\sounds\Characters\steel\sprint_3",0.056234132,1,45 } },{ "sprint",{ "\CA\sounds\Characters\steel\sprint_4",0.056234132,1,45 } },{ "sprint",{ "\CA\sounds\Characters\steel\sprint_5",0.056234132,1,45 } },{ "sprint",{ "\CA\sounds\Characters\steel\sprint_6",0.056234132,1,45 } },{ "sprint",{ "\CA\sounds\Characters\steel\sprint_7",0.056234132,1,45 } },{ "sprint",{ "\CA\sounds\Characters\steel\sprint_8",0.056234132,1,45 } },{ "crawl",{ "\ca\sounds\Characters\steel\crawl1",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\steel\crawl2",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\steel\crawl3",0.019952621,1,20 } },{ "crawl",{ "\ca\sounds\Characters\steel\crawl4",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\steel\up1",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\steel\up2",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\steel\up3",0.019952621,1,20 } },{ "standup",{ "\ca\sounds\Characters\steel\up4",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\steel\down1",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\steel\down2",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\steel\down3",0.019952621,1,20 } },{ "laydown",{ "\ca\sounds\Characters\steel\down4",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\steel\fall_to_ground1",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\steel\fall_to_ground2",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\steel\fall_to_ground3",0.019952621,1,20 } },{ "bodyfall",{ "\ca\sounds\Characters\steel\fall_to_ground4",0.019952621,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\ca\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding1",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding2",0.019952621,1,20 } },{ "slide",{ "\ca\sounds\Characters\sliding\sliding3",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			hallway[] = {{ "\CA\sounds\Characters\Paving_int\run_01",0.019952621,1,45 },{ "\CA\sounds\Characters\Paving_int\run_02",0.019952621,1,45 },{ "\CA\sounds\Characters\Paving_int\run_03",0.019952621,1,45 },{ "\CA\sounds\Characters\Paving_int\run_04",0.019952621,1,45 },{ "\CA\sounds\Characters\Paving_int\run_05",0.019952621,1,45 },{ "\CA\sounds\Characters\Paving_int\run_06",0.019952621,1,45 },{ "\CA\sounds\Characters\Paving_int\run_07",0.019952621,1,45 },{ "\CA\sounds\Characters\Paving_int\run_08",0.019952621,1,45 },{ "run",{ "\CA\sounds\Characters\Paving_int\run_01",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Paving_int\run_02",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Paving_int\run_03",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Paving_int\run_04",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Paving_int\run_05",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Paving_int\run_06",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Paving_int\run_07",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Paving_int\run_08",0.019952621,1,45 } },{ "walk",{ "\CA\sounds\Characters\Paving_int\walk_01",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Paving_int\walk_02",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Paving_int\walk_03",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Paving_int\walk_04",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Paving_int\walk_05",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Paving_int\walk_06",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Paving_int\walk_07",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Paving_int\walk_08",0.019952621,1,35 } },{ "sprint",{ "\CA\sounds\Characters\Paving_int\sprint_01",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Paving_int\sprint_02",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Paving_int\sprint_03",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Paving_int\sprint_04",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Paving_int\sprint_05",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Paving_int\sprint_06",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Paving_int\sprint_07",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Paving_int\sprint_08",0.019952621,1,48 } },{ "crawl",{ "\CA\sounds\Characters\Paving_int\crawl1",0.019952621,1,20 } },{ "crawl",{ "\CA\sounds\Characters\Paving_int\crawl2",0.031622775,1,20 } },{ "crawl",{ "\CA\sounds\Characters\Paving_int\crawl3",0.031622775,1,20 } },{ "crawl",{ "\CA\sounds\Characters\Paving_int\crawl4",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\Paving_int\up1",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\Paving_int\up2",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\Paving_int\up3",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\Paving_int\up4",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\Paving_int\down1",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\Paving_int\down2",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\Paving_int\down3",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\Paving_int\down4",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\Paving_int\fall_to_ground1",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\Paving_int\fall_to_ground2",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\Paving_int\fall_to_ground3",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\Paving_int\fall_to_ground4",0.031622775,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding1",0.031622775,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding2",0.031622775,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding3",0.031622775,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			dirt[] = {{ "\CA\sounds\Characters\Dirt\run_01",0.019952621,1,45 },{ "\CA\sounds\Characters\Dirt\run_02",0.019952621,1,45 },{ "\CA\sounds\Characters\Dirt\run_03",0.019952621,1,45 },{ "\CA\sounds\Characters\Dirt\run_04",0.019952621,1,45 },{ "\CA\sounds\Characters\Dirt\run_05",0.019952621,1,45 },{ "\CA\sounds\Characters\Dirt\run_06",0.019952621,1,45 },{ "\CA\sounds\Characters\Dirt\run_07",0.019952621,1,45 },{ "\CA\sounds\Characters\Dirt\run_08",0.019952621,1,45 },{ "run",{ "\CA\sounds\Characters\Dirt\run_01",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Dirt\run_02",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Dirt\run_03",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Dirt\run_04",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Dirt\run_05",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Dirt\run_06",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Dirt\run_07",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Dirt\run_08",0.019952621,1,45 } },{ "walk",{ "\CA\sounds\Characters\Dirt\walk_01",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Dirt\walk_02",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Dirt\walk_03",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Dirt\walk_04",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Dirt\walk_05",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Dirt\walk_06",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Dirt\walk_07",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Dirt\walk_08",0.019952621,1,35 } },{ "sprint",{ "\CA\sounds\Characters\Dirt\sprint_01",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Dirt\sprint_02",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Dirt\sprint_03",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Dirt\sprint_04",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Dirt\sprint_05",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Dirt\sprint_06",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Dirt\sprint_07",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Dirt\sprint_08",0.019952621,1,48 } },{ "crawl",{ "\CA\sounds\Characters\Dirt\crawl1",0.019952621,1,20 } },{ "crawl",{ "\CA\sounds\Characters\Dirt\crawl2",0.031622775,1,20 } },{ "crawl",{ "\CA\sounds\Characters\Dirt\crawl3",0.031622775,1,20 } },{ "crawl",{ "\CA\sounds\Characters\Dirt\crawl4",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\Dirt\up1",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\Dirt\up2",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\Dirt\up3",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\Dirt\up4",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\Dirt\down1",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\Dirt\down2",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\Dirt\down3",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\Dirt\down4",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\Dirt\fall_to_ground1",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\Dirt\fall_to_ground2",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\Dirt\fall_to_ground3",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\Dirt\fall_to_ground4",0.031622775,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding1",0.031622775,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding2",0.031622775,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding3",0.031622775,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			parkety[] = {{ "\CA\sounds\Characters\Parguet\run_01",0.019952621,1,45 },{ "\CA\sounds\Characters\Parguet\run_02",0.019952621,1,45 },{ "\CA\sounds\Characters\Parguet\run_03",0.019952621,1,45 },{ "\CA\sounds\Characters\Parguet\run_04",0.019952621,1,45 },{ "\CA\sounds\Characters\Parguet\run_05",0.019952621,1,45 },{ "\CA\sounds\Characters\Parguet\run_06",0.019952621,1,45 },{ "\CA\sounds\Characters\Parguet\run_07",0.019952621,1,45 },{ "\CA\sounds\Characters\Parguet\run_08",0.019952621,1,45 },{ "run",{ "\CA\sounds\Characters\Parguet\run_01",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Parguet\run_02",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Parguet\run_03",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Parguet\run_04",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Parguet\run_05",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Parguet\run_06",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Parguet\run_07",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Parguet\run_08",0.019952621,1,45 } },{ "walk",{ "\CA\sounds\Characters\Parguet\walk_01",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Parguet\walk_02",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Parguet\walk_03",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Parguet\walk_04",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Parguet\walk_05",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Parguet\walk_06",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Parguet\walk_07",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Parguet\walk_08",0.019952621,1,35 } },{ "sprint",{ "\CA\sounds\Characters\Parguet\sprint_01",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Parguet\sprint_02",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Parguet\sprint_03",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Parguet\sprint_04",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Parguet\sprint_05",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Parguet\sprint_06",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Parguet\sprint_07",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Parguet\sprint_08",0.019952621,1,48 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl1",0.019952621,1,20 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl2",0.031622775,1,20 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl3",0.031622775,1,20 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl4",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up1",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up2",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up3",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up4",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down1",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down2",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down3",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down4",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground1",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground2",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground3",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground4",0.031622775,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding1",0.031622775,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding2",0.031622775,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding3",0.031622775,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			wave_plate[] = {{ "\CA\sounds\Characters\Wavy_plate\run_01",0.019952621,1,45 },{ "\CA\sounds\Characters\Wavy_plate\run_02",0.019952621,1,45 },{ "\CA\sounds\Characters\Wavy_plate\run_03",0.019952621,1,45 },{ "\CA\sounds\Characters\Wavy_plate\run_04",0.019952621,1,45 },{ "\CA\sounds\Characters\Wavy_plate\run_05",0.019952621,1,45 },{ "\CA\sounds\Characters\Wavy_plate\run_06",0.019952621,1,45 },{ "\CA\sounds\Characters\Wavy_plate\run_07",0.019952621,1,45 },{ "\CA\sounds\Characters\Wavy_plate\run_08",0.019952621,1,45 },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_01",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_02",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_03",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_04",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_05",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_06",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_07",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_08",0.019952621,1,45 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_01",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_02",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_03",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_04",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_05",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_06",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_07",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_08",0.019952621,1,35 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_01",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_02",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_03",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_04",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_05",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_06",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_07",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_08",0.019952621,1,48 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl1",0.019952621,1,20 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl2",0.031622775,1,20 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl3",0.031622775,1,20 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl4",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up1",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up2",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up3",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up4",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down1",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down2",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down3",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down4",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground1",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground2",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground3",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground4",0.031622775,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding1",0.031622775,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding2",0.031622775,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding3",0.031622775,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
			lepenka[] = {{ "\CA\sounds\Characters\Tar_roofing\run_01",0.019952621,1,45 },{ "\CA\sounds\Characters\Tar_roofing\run_02",0.019952621,1,45 },{ "\CA\sounds\Characters\Tar_roofing\run_03",0.019952621,1,45 },{ "\CA\sounds\Characters\Tar_roofing\run_04",0.019952621,1,45 },{ "\CA\sounds\Characters\Tar_roofing\run_05",0.019952621,1,45 },{ "\CA\sounds\Characters\Tar_roofing\run_06",0.019952621,1,45 },{ "\CA\sounds\Characters\Tar_roofing\run_07",0.019952621,1,45 },{ "\CA\sounds\Characters\Tar_roofing\run_08",0.019952621,1,45 },{ "run",{ "\CA\sounds\Characters\Tar_roofing\run_01",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Tar_roofing\run_02",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Tar_roofing\run_03",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Tar_roofing\run_04",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Tar_roofing\run_05",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Tar_roofing\run_06",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Tar_roofing\run_07",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Tar_roofing\run_08",0.019952621,1,45 } },{ "walk",{ "\CA\sounds\Characters\Tar_roofing\walk_01",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Tar_roofing\walk_02",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Tar_roofing\walk_03",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Tar_roofing\walk_04",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Tar_roofing\walk_05",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Tar_roofing\walk_06",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Tar_roofing\walk_07",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Tar_roofing\walk_08",0.019952621,1,35 } },{ "sprint",{ "\CA\sounds\Characters\Tar_roofing\sprint_01",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Tar_roofing\sprint_02",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Tar_roofing\sprint_03",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Tar_roofing\sprint_04",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Tar_roofing\sprint_05",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Tar_roofing\sprint_06",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Tar_roofing\sprint_07",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Tar_roofing\sprint_08",0.019952621,1,48 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl1",0.019952621,1,20 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl2",0.031622775,1,20 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl3",0.031622775,1,20 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl4",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up1",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up2",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up3",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up4",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down1",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down2",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down3",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down4",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground1",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground2",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground3",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground4",0.031622775,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding1",0.031622775,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding2",0.031622775,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding3",0.031622775,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
		};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		fsmFormation = "Formation";
		leftArmToElbow[] = {"LeftArm",0.5,"LeftArmRoll",0};
		leftArmFromElbow[] = {"LeftForeArm",0,"LeftForeArmRoll",0.5};
		leftWrist = "LeftHand";
		leftShoulder = "LeftShoulder";
		leftHand[] = {"LeftHandThumb3","LeftHandThumb2","LeftHandThumb1","LeftHandIndex3","LeftHandIndex2","LeftHandIndex1","LeftHandMiddle3","LeftHandMiddle2","LeftHandMiddle1","LeftHandRing3","LeftHandRing2","LeftHandRing1","LeftHandRing","LeftHandPinky3","LeftHandPinky2","LeftHandPinky1"};
		leftArmPoints[] = {"LeftShoulder","lelbow","lelbow_axis","lwrist"};
		rightArmToElbow[] = {"rightArm",0.5,"rightArmRoll",0};
		rightArmFromElbow[] = {"rightForeArm",0,"rightForeArmRoll",0.5};
		rightWrist = "rightHand";
		rightShoulder = "rightShoulder";
		rightHand[] = {"rightHandThumb3","rightHandThumb2","rightHandThumb1","rightHandIndex3","rightHandIndex2","rightHandIndex1","rightHandMiddle3","rightHandMiddle2","rightHandMiddle1","rightHandRing3","rightHandRing2","rightHandRing1","rightHandRing","rightHandPinky3","rightHandPinky2","rightHandPinky1"};
		rightArmPoints[] = {"rightShoulder","relbow","relbow_axis","rwrist"};
		launcherBone = "launcher";
		handGunBone = "RightHand";
		weaponBone = "weapon";
	};
	class SoldierWB: CAManBase
	{
		vehicleClass = "MenArmy";
		model = "\ca\characters\us_soldier_b";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		Icon = "\Ca\characters\data\map_ico\i_wojak_CA.paa";
		displayName = "$STR_DN_RIFLEMAN";
		side = 1;
		accuracy = 1.6;
		weapons[] = {"M16A2","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVgoggles"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_west","HandGrenade_west"};
		respawnWeapons[] = {"M16A2","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_west","HandGrenade_west"};
		class HeadLimits: HeadLimits
		{
			initAngleX = 5;
			minAngleX = -40;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -60;
			maxAngleY = 60;
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		cost = 80000;
	};
	class SoldierEB: CAManBase
	{
		side = 0;
		vehicleClass = "MenSLA";
		displayName = "$STR_DN_RIFLEMAN";
		model = "\ca\characters\np_soldier_b";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		Icon = "\Ca\characters\data\map_ico\i_wojak_CA.paa";
		hiddenSelections[] = {"medic"};
		accuracy = 1.6;
		weapons[] = {"AK_74","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","HandGrenade_East","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"AK_74","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","HandGrenade_East"};
		class HeadLimits: HeadLimits
		{
			initAngleX = 5;
			minAngleX = -40;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -60;
			maxAngleY = 60;
		};
		cost = 80000;
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
	};
	class SoldierGB: CAManBase
	{
		side = 2;
		vehicleClass = "MenRACS";
		displayName = "$STR_DN_RIFLEMAN";
		model = "\ca\characters\res_soldier_b";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		Icon = "\Ca\characters\data\map_ico\i_wojak_CA.paa";
		accuracy = 1.6;
		weapons[] = {"M16A2","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_East","HandGrenade_East","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"M16A2","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_East","HandGrenade_East"};
		class HeadLimits: HeadLimits
		{
			initAngleX = 5;
			minAngleX = -40;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -60;
			maxAngleY = 60;
		};
		cost = 40000;
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
	};
	class Civilian: CAManBase
	{
		side = 3;
		displayName = "$STR_DN_CIVILIAN";
		vehicleClass = "MenCIV";
		model = "\ca\characters\civil_1_tshirt";
		accuracy = 1.6;
		camouflage = 1.2;
		threat[] = {0.0,0.0,0.0};
		weapons[] = {"Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnWeapons[] = {"Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {};
		cost = 100000;
		fsmFormation = "ca\characters\scripts\formationC.fsm";
		fsmDanger = "ca\characters\scripts\formationCDanger.fsm";
		minHeadTurnAI = -50;
		maxHeadTurnAI = 50;
		formationX = 2;
		formationZ = 5;
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyFlag;
	class ProxyFlag_Vojak: ProxyFlag
	{
		model = "\ca\characters\flag_vojak";
	};
	class ProxyWeapon{};
	class ProxyM16A2: ProxyWeapon{};
	class ProxyCommander;
	class ProxyCommanderOut: ProxyCommander{};
	class ProxyDriver;
	class ProxyDriverOut: ProxyDriver{};
	class ProxyGunner;
	class ProxyGunner01: ProxyGunner{};
	class ProxyGunner02: ProxyGunner{};
	class ProxyGunnerOut: ProxyGunner{};
	class ProxyCargo;
	class ProxyCargo01: ProxyCargo{};
	class ProxyCargo02: ProxyCargo{};
	class ProxyCargo03: ProxyCargo{};
	class ProxyCargo04: ProxyCargo{};
	class ProxyBasicSittingCommander: ProxyCommander{};
	class ProxyBasicSittingDriver: ProxyDriver{};
	class ProxyBasicSittingGunner: ProxyGunner{};
	class ProxyBasicSittingCargo: ProxyCargo{};
	class ProxyBasicStandingCommander: ProxyCommander{};
	class ProxyBasicStandingDriver: ProxyDriver{};
	class ProxyBasicStandingGunner: ProxyGunner{};
	class ProxyBasicStandingCargo: ProxyCargo{};
};
class CfgFaces
{
	class Default
	{
		class Custom;
	};
	class Man: Default
	{
		class Default
		{
			name = "$STR_CFG_FACES_DEFAULT";
			texture = "\ca\characters\hhl\hhl_46_CO.paa";
			head = "defaultHead";
			identityTypes[] = {};
			material = "\ca\characters\heads\male\defaulthead\data\hhl_white.rvmat";
		};
		class Custom: Custom
		{
			name = "$STR_CFG_FACES_CUSTOM";
			texture = "#(argb,8,8,3)color(0.596,0.412,0.365,1)";
			head = "defaultHead";
			identityTypes[] = {};
			material = "\ca\characters\heads\male\defaulthead\data\hhl_white.rvmat";
		};
		class Face01: Default
		{
			name = "$STR_FN_Man_Face01";
			texture = "\ca\characters\hhl\hhl_01_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","Head_CDF","Head_CDF_CO","Head_INS","Head_GUE","Head_CIV",""};
		};
		class Face01_camo1: Face01
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face01_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","Head_CDF_Camo","Head_CDF_CO_Camo","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face01_camo2: Face01_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face01_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face01_camo3: Face01_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face01_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face01_camo4: Face01_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face01_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face01_camo5: Face01_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face01_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face01_camo6: Face01_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face01_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face02: Default
		{
			name = "$STR_FN_Man_Face02";
			texture = "\ca\characters\hhl\hhl_02_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","Head_CDF","Head_CDF_CO","","Head_GUE","Head_CIV",""};
		};
		class Face02_camo1: Face02
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face02_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","Head_CDF_Camo","Head_CDF_CO_Camo","","Head_GUE_Camo"};
		};
		class Face02_camo2: Face02_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face02_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face02_camo3: Face02_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face02_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face02_camo4: Face02_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face02_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face02_camo5: Face02_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face02_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face02_camo6: Face02_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face02_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face03: Default
		{
			name = "$STR_FN_Man_Face03";
			texture = "\ca\characters\hhl\hhl_03_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","","","","","",""};
		};
		class Face03_camo1: Face03
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face03_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","","","",""};
		};
		class Face03_camo2: Face03_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face03_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face03_camo3: Face03_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face03_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face03_camo4: Face03_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face03_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face03_camo5: Face03_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face03_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face03_camo6: Face03_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face03_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face04: Default
		{
			name = "$STR_FN_Man_Face04";
			texture = "\ca\characters\hhl\hhl_04_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","Head_CDF","Head_CDF_CO","","","",""};
		};
		class Face04_camo1: Face04
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face04_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face04_camo2: Face04_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face04_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face04_camo3: Face04_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face04_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face04_camo4: Face04_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face04_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face04_camo5: Face04_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face04_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face04_camo6: Face04_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face04_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face05: Default
		{
			name = "$STR_FN_Man_Face05";
			texture = "\ca\characters\hhl\hhl_05_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","","","Head_INS","Head_GUE","Head_CIV",""};
		};
		class Face05_camo1: Face05
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face05_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face05_camo2: Face05_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face05_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face05_camo3: Face05_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face05_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face05_camo4: Face05_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face05_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face05_camo5: Face05_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face05_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face05_camo6: Face05_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face05_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face06: Default
		{
			name = "$STR_FN_Man_Face06";
			texture = "\ca\characters\hhl\hhl_06_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","Head_INS","","Head_CIV",""};
		};
		class Face06_camo1: Face06
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face06_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","Head_INS_Camo",""};
		};
		class Face06_camo2: Face06_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face06_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face06_camo3: Face06_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face06_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face06_camo4: Face06_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face06_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face06_camo5: Face06_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face06_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face06_camo6: Face06_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face06_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face07: Default
		{
			name = "$STR_FN_Man_Face07";
			texture = "\ca\characters\hhl\hhl_07_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","Head_INS","Head_GUE","Head_CIV",""};
		};
		class Face07_camo1: Face07
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face07_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face07_camo2: Face07_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face07_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face07_camo3: Face07_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face07_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face07_camo4: Face07_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face07_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face07_camo5: Face07_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face07_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face07_camo6: Face07_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face07_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face08: Default
		{
			name = "$STR_FN_Man_Face08";
			texture = "\ca\characters\hhl\hhl_08_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","Head_INS","Head_GUE","Head_CIV",""};
		};
		class Face08_camo1: Face08
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face08_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face08_camo2: Face08_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face08_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face08_camo3: Face08_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face08_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face08_camo4: Face08_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face08_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face08_camo5: Face08_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face08_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face08_camo6: Face08_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face08_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face09: Default
		{
			name = "$STR_FN_Man_Face09";
			texture = "\ca\characters\hhl\hhl_09_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","Head_CDF","Head_CDF_CO","Head_INS","Head_GUE","Head_CIV",""};
		};
		class Face09_camo1: Face09
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face09_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","Head_CDF_Camo","Head_CDF_CO_Camo","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face09_camo2: Face09_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face09_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face09_camo3: Face09_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face09_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face09_camo4: Face09_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face09_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face09_camo5: Face09_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face09_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face09_camo6: Face09_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face09_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face10: Default
		{
			name = "$STR_FN_Man_Face10";
			texture = "\ca\characters\hhl\hhl_10_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","Head_CDF","Head_CDF_CO","","","Head_CIV",""};
		};
		class Face10_camo1: Face10
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face10_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face10_camo2: Face10_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face10_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face10_camo3: Face10_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face10_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face10_camo4: Face10_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face10_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face10_camo5: Face10_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face10_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face10_camo6: Face10_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face10_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face11: Default
		{
			name = "$STR_FN_Man_Face11";
			texture = "\ca\characters\hhl\hhl_11_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","Head_INS","Head_GUE","Head_CIV",""};
		};
		class Face11_camo1: Face11
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face11_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face11_camo2: Face11_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face11_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face11_camo3: Face11_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face11_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face11_camo4: Face11_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face11_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face11_camo5: Face11_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face11_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face11_camo6: Face11_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face11_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face12: Default
		{
			name = "$STR_FN_Man_Face12";
			texture = "\ca\characters\hhl\hhl_12_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","Head_INS","","",""};
		};
		class Face12_camo1: Face12
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face12_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","Head_INS_Camo",""};
		};
		class Face12_camo2: Face12_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face12_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face12_camo3: Face12_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face12_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face12_camo4: Face12_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face12_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face12_camo5: Face12_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face12_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face12_camo6: Face12_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face12_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face13: Default
		{
			name = "$STR_FN_Man_Face13";
			texture = "\ca\characters\hhl\hhl_13_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","","Head_CIV",""};
		};
		class Face13_camo1: Face13
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face13_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face13_camo2: Face13_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face13_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face13_camo3: Face13_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face13_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face13_camo4: Face13_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face13_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face13_camo5: Face13_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face13_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face13_camo6: Face13_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face13_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face14: Default
		{
			name = "$STR_FN_Man_Face14";
			texture = "\ca\characters\hhl\hhl_14_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","Head_INS","Head_GUE","Head_CIV",""};
		};
		class Face14_camo1: Face14
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face14_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face14_camo2: Face14_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face14_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face14_camo3: Face14_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face14_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face14_camo4: Face14_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face14_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face14_camo5: Face14_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face14_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face14_camo6: Face14_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face14_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face15: Default
		{
			name = "$STR_FN_Man_Face15";
			texture = "\ca\characters\hhl\hhl_15_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","Head_GUE","Head_CIV",""};
		};
		class Face15_camo1: Face15
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face15_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","","Head_GUE_Camo"};
		};
		class Face15_camo2: Face15_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face15_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face15_camo3: Face15_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face15_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face15_camo4: Face15_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face15_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face15_camo5: Face15_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face15_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face15_camo6: Face15_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face15_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face16: Default
		{
			name = "$STR_FN_Man_Face16";
			texture = "\ca\characters\hhl\hhl_16_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV",""};
		};
		class Face16_camo1: Face16
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face16_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face16_camo2: Face16_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face16_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face16_camo3: Face16_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face16_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face16_camo4: Face16_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face16_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face16_camo5: Face16_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face16_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face16_camo6: Face16_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face16_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face17: Default
		{
			name = "$STR_FN_Man_Face17";
			texture = "\ca\characters\hhl\hhl_17_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV",""};
		};
		class Face17_camo1: Face17
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face17_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face17_camo2: Face17_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face17_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face17_camo3: Face17_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face17_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face17_camo4: Face17_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face17_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face17_camo5: Face17_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face17_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face17_camo6: Face17_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face17_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face18: Default
		{
			name = "$STR_FN_Man_Face18";
			texture = "\ca\characters\hhl\hhl_18_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","Head_CDF","Head_CDF_CO","","","Head_CIV",""};
		};
		class Face18_camo1: Face18
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face18_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face18_camo2: Face18_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face18_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face18_camo3: Face18_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face18_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face18_camo4: Face18_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face18_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face18_camo5: Face18_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face18_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face18_camo6: Face18_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face18_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face19: Default
		{
			name = "$STR_FN_Man_Face19";
			texture = "\ca\characters\hhl\hhl_19_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","Head_INS","Head_GUE","Head_CIV",""};
		};
		class Face19_camo1: Face19
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face19_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face19_camo2: Face19_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face19_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face19_camo3: Face19_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face19_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face19_camo4: Face19_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face19_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face19_camo5: Face19_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face19_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face19_camo6: Face19_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face19_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face20: Default
		{
			name = "$STR_FN_Man_Face20";
			texture = "\ca\characters\hhl\hhl_20_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","Head_USMC_CO","","Head_RU_CO","","","Head_INS","","Head_CIV",""};
		};
		class Face20_camo1: Face20
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face20_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","Head_USMC_CO_Camo","","Head_RU_CO_Camo","","","Head_INS_Camo",""};
		};
		class Face20_camo2: Face20_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face20_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face20_camo3: Face20_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face20_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face20_camo4: Face20_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face20_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face20_camo5: Face20_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face20_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face20_camo6: Face20_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face20_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face21: Default
		{
			name = "$STR_FN_Man_Face21";
			texture = "\ca\characters\hhl\hhl_21_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","Head_INS","Head_GUE","Head_CIV",""};
		};
		class Face21_camo1: Face21
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face21_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face21_camo2: Face21_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face21_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face21_camo3: Face21_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face21_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face21_camo4: Face21_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face21_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face21_camo5: Face21_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face21_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face21_camo6: Face21_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face21_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face22: Default
		{
			name = "$STR_FN_Man_Face22";
			texture = "\ca\characters\hhl\hhl_22_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","","","Head_INS","","Head_CIV",""};
		};
		class Face22_camo1: Face22
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face22_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","","","Head_INS_Camo",""};
		};
		class Face22_camo2: Face22_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face22_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face22_camo3: Face22_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face22_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face22_camo4: Face22_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face22_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face22_camo5: Face22_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face22_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face22_camo6: Face22_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face22_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face23: Default
		{
			name = "$STR_FN_Man_Face23";
			texture = "\ca\characters\hhl\hhl_23_CO.paa";
			disabled = 0;
			identityTypes[] = {"","","","","","","","","","","Head_Special"};
		};
		class Face23_camo1: Face23
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face23_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","",""};
		};
		class Face23_camo2: Face23_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face23_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face23_camo3: Face23_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face23_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face23_camo4: Face23_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face23_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face23_camo5: Face23_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face23_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face23_camo6: Face23_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face23_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face24: Default
		{
			name = "$STR_FN_Man_Face24";
			texture = "\ca\characters\hhl\hhl_24_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","Head_INS","Head_GUE","Head_CIV",""};
		};
		class Face24_camo1: Face24
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face24_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face24_camo2: Face24_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face24_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face24_camo3: Face24_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face24_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face24_camo4: Face24_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face24_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face24_camo5: Face24_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face24_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face24_camo6: Face24_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face24_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face25: Default
		{
			name = "$STR_FN_Man_Face25";
			texture = "\ca\characters\hhl\hhl_25_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","","Head_CIV",""};
		};
		class Face25_camo1: Face25
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face25_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face25_camo2: Face25_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face25_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face25_camo3: Face25_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face25_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face25_camo4: Face25_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face25_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face25_camo5: Face25_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face25_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face25_camo6: Face25_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face25_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face26: Default
		{
			name = "$STR_FN_Man_Face26";
			texture = "\ca\characters\hhl\hhl_26_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face26_camo1: Face26
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face26_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face26_camo2: Face26_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face26_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face26_camo3: Face26_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face26_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face26_camo4: Face26_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face26_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face26_camo5: Face26_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face26_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face26_camo6: Face26_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face26_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face27: Default
		{
			name = "$STR_FN_Man_Face27";
			texture = "\ca\characters\hhl\hhl_27_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face27_camo1: Face27
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face27_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face27_camo2: Face27_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face27_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face27_camo3: Face27_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face27_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face27_camo4: Face27_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face27_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face27_camo5: Face27_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face27_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face27_camo6: Face27_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face27_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face28: Default
		{
			name = "$STR_FN_Man_Face28";
			texture = "\ca\characters\hhl\hhl_28_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face28_camo1: Face28
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face28_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face28_camo2: Face28_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face28_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face28_camo3: Face28_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face28_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face28_camo4: Face28_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face28_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face28_camo5: Face28_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face28_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face28_camo6: Face28_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face28_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face29: Default
		{
			name = "$STR_FN_Man_Face29";
			texture = "\ca\characters\hhl\hhl_29_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face29_camo1: Face29
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face29_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face29_camo2: Face29_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face29_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face29_camo3: Face29_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face29_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face29_camo4: Face29_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face29_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face29_camo5: Face29_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face29_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face29_camo6: Face29_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face29_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face30: Default
		{
			name = "$STR_FN_Man_Face30";
			texture = "\ca\characters\hhl\hhl_30_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face30_camo1: Face30
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face30_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face30_camo2: Face30_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face30_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face30_camo3: Face30_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face30_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face30_camo4: Face30_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face30_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face30_camo5: Face30_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face30_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face30_camo6: Face30_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face30_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face31: Default
		{
			name = "$STR_FN_Man_Face31";
			texture = "\ca\characters\hhl\hhl_31_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","","Head_USMC_CO",""};
		};
		class Face31_camo1: Face31
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face31_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"","Head_USMC_CO_Camo"};
		};
		class Face31_camo2: Face31_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face31_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face31_camo3: Face31_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face31_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face31_camo4: Face31_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face31_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face31_camo5: Face31_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face31_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face31_camo6: Face31_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face31_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face32: Default
		{
			name = "$STR_FN_Man_Face32";
			texture = "\ca\characters\hhl\hhl_32_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face32_camo1: Face32
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face32_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face32_camo2: Face32_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face32_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face32_camo3: Face32_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face32_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face32_camo4: Face32_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face32_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face32_camo5: Face32_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face32_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face32_camo6: Face32_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face32_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face33: Default
		{
			name = "$STR_FN_Man_Face33";
			texture = "\ca\characters\hhl\hhl_33_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face33_camo1: Face33
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face33_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face33_camo2: Face33_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face33_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face33_camo3: Face33_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face33_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face33_camo4: Face33_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face33_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face33_camo5: Face33_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face33_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face33_camo6: Face33_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face33_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face34: Default
		{
			name = "$STR_FN_Man_Face34";
			texture = "\ca\characters\hhl\hhl_34_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","","Head_USMC_CO",""};
		};
		class Face34_camo1: Face34
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face34_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"","Head_USMC_CO_Camo"};
		};
		class Face34_camo2: Face34_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face34_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face34_camo3: Face34_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face34_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face34_camo4: Face34_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face34_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face34_camo5: Face34_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face34_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face34_camo6: Face34_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face34_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face35: Default
		{
			name = "$STR_FN_Man_Face35";
			texture = "\ca\characters\hhl\hhl_35_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face35_camo1: Face35
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face35_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face35_camo2: Face35_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face35_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face35_camo3: Face35_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face35_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face35_camo4: Face35_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face35_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face35_camo5: Face35_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face35_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face35_camo6: Face35_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face35_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face36: Default
		{
			name = "$STR_FN_Man_Face36";
			texture = "\ca\characters\hhl\hhl_36_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","","Head_USMC_CO",""};
		};
		class Face36_camo1: Face36
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face36_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"","Head_USMC_CO_Camo"};
		};
		class Face36_camo2: Face36_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face36_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face36_camo3: Face36_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face36_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face36_camo4: Face36_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face36_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face36_camo5: Face36_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face36_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face36_camo6: Face36_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face36_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face37: Default
		{
			name = "$STR_FN_Man_Face37";
			texture = "\ca\characters\hhl\hhl_37_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face37_camo1: Face37
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face37_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face37_camo2: Face37_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face37_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face37_camo3: Face37_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face37_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face37_camo4: Face37_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face37_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face37_camo5: Face37_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face37_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face37_camo6: Face37_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face37_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face38: Default
		{
			name = "$STR_FN_Man_Face38";
			texture = "\ca\characters\hhl\hhl_38_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face38_camo1: Face38
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face38_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face38_camo2: Face38_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face38_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face38_camo3: Face38_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face38_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face38_camo4: Face38_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face38_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face38_camo5: Face38_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face38_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face38_camo6: Face38_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face38_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face39: Default
		{
			name = "$STR_FN_Man_Face39";
			texture = "\ca\characters\hhl\hhl_39_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face39_camo1: Face39
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face39_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face39_camo2: Face39_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face39_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face39_camo3: Face39_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face39_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face39_camo4: Face39_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face39_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face39_camo5: Face39_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face39_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face39_camo6: Face39_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face39_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face40: Default
		{
			name = "$STR_FN_Man_Face40";
			texture = "\ca\characters\hhl\hhl_40_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face40_camo1: Face40
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face40_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face40_camo2: Face40_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face40_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face40_camo3: Face40_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face40_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face40_camo4: Face40_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face40_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face40_camo5: Face40_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face40_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face40_camo6: Face40_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face40_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face41: Default
		{
			name = "$STR_FN_Man_Face41";
			texture = "\ca\characters\hhl\hhl_41_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV",""};
		};
		class Face41_camo1: Face41
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face41_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face41_camo2: Face41_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face41_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face41_camo3: Face41_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face41_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face41_camo4: Face41_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face41_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face41_camo5: Face41_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face41_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face41_camo6: Face41_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face41_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face42: Default
		{
			name = "$STR_FN_Man_Face42";
			texture = "\ca\characters\hhl\hhl_42_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV",""};
		};
		class Face42_camo1: Face42
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face42_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face42_camo2: Face42_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face42_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face42_camo3: Face42_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face42_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face42_camo4: Face42_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face42_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face42_camo5: Face42_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face42_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face42_camo6: Face42_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face42_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face43: Default
		{
			name = "$STR_FN_Man_Face43";
			texture = "\ca\characters\hhl\hhl_43_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","","Head_CIV",""};
		};
		class Face43_camo1: Face43
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face43_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face43_camo2: Face43_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face43_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face43_camo3: Face43_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face43_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face43_camo4: Face43_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face43_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face43_camo5: Face43_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face43_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face43_camo6: Face43_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face43_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face44: Default
		{
			name = "$STR_FN_Man_Face44";
			texture = "\ca\characters\hhl\hhl_44_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV",""};
		};
		class Face44_camo1: Face44
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face44_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face44_camo2: Face44_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face44_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face44_camo3: Face44_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face44_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face44_camo4: Face44_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face44_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face44_camo5: Face44_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face44_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face44_camo6: Face44_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face44_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face45: Default
		{
			name = "$STR_FN_Man_Face45";
			texture = "\ca\characters\hhl\hhl_45_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","Head_GUE","Head_CIV",""};
		};
		class Face45_camo1: Face45
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face45_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","","Head_GUE_Camo"};
		};
		class Face45_camo2: Face45_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face45_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face45_camo3: Face45_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face45_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face45_camo4: Face45_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face45_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face45_camo5: Face45_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face45_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face45_camo6: Face45_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face45_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face46: Default
		{
			name = "$STR_FN_Man_Face46";
			texture = "\ca\characters\hhl\hhl_46_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","","","","","",""};
		};
		class Face46_camo1: Face46
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face46_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face46_camo2: Face46_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face46_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face46_camo3: Face46_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face46_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face46_camo4: Face46_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face46_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face46_camo5: Face46_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face46_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face46_camo6: Face46_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face46_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face47: Default
		{
			name = "$STR_FN_Man_Face47";
			texture = "\ca\characters\hhl\hhl_47_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","","","","","Head_CIV",""};
		};
		class Face47_camo1: Face47
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face47_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","","","",""};
		};
		class Face47_camo2: Face47_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face47_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face47_camo3: Face47_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face47_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face47_camo4: Face47_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face47_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face47_camo5: Face47_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face47_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face47_camo6: Face47_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face47_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face48: Default
		{
			name = "$STR_FN_Man_Face48";
			texture = "\ca\characters\hhl\hhl_48_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV",""};
		};
		class Face48_camo1: Face48
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face48_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face48_camo2: Face48_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face48_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face48_camo3: Face48_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face48_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face48_camo4: Face48_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face48_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face48_camo5: Face48_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face48_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face48_camo6: Face48_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face48_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face49: Default
		{
			name = "$STR_FN_Man_Face49";
			texture = "\ca\characters\hhl\hhl_49_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","Head_CIV",""};
		};
		class Face49_camo1: Face49
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face49_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face49_camo2: Face49_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face49_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face49_camo3: Face49_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face49_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face49_camo4: Face49_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face49_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face49_camo5: Face49_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face49_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face49_camo6: Face49_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face49_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face50: Default
		{
			name = "$STR_FN_Man_Face50";
			texture = "\ca\characters\hhl\hhl_50_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV",""};
		};
		class Face50_camo1: Face50
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face50_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face50_camo2: Face50_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face50_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face50_camo3: Face50_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face50_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face50_camo4: Face50_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face50_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face50_camo5: Face50_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face50_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face50_camo6: Face50_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face50_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face51: Default
		{
			name = "$STR_FN_Man_Face51";
			texture = "\ca\characters\hhl\hhl_51_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV",""};
		};
		class Face51_camo1: Face51
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face51_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face51_camo2: Face51_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face51_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face51_camo3: Face51_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face51_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face51_camo4: Face51_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face51_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face51_camo5: Face51_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face51_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face51_camo6: Face51_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face51_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face52: Default
		{
			name = "$STR_FN_Man_Face52";
			texture = "\ca\characters\hhl\hhl_52_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","","","","","",""};
		};
		class Face52_camo1: Face52
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face52_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face52_camo2: Face52_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face52_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face52_camo3: Face52_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face52_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face52_camo4: Face52_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face52_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face52_camo5: Face52_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face52_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face52_camo6: Face52_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face52_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face53: Default
		{
			name = "$STR_FN_Man_Face53";
			texture = "\ca\characters\hhl\hhl_53_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","Head_CDF","Head_CDF_CO","","","Head_CIV",""};
		};
		class Face53_camo1: Face53
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face53_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face53_camo2: Face53_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face53_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face53_camo3: Face53_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face53_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face53_camo4: Face53_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face53_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face53_camo5: Face53_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face53_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face53_camo6: Face53_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face53_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face54: Default
		{
			name = "$STR_FN_Man_Face54";
			texture = "\ca\characters\hhl\hhl_54_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","Head_INS","Head_GUE","",""};
		};
		class Face54_camo1: Face54
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face54_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face54_camo2: Face54_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face54_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face54_camo3: Face54_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face54_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face54_camo4: Face54_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face54_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face54_camo5: Face54_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face54_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face54_camo6: Face54_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face54_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face55: Default
		{
			name = "$STR_FN_Man_Face55";
			texture = "\ca\characters\hhl\hhl_55_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","","","Head_CIV",""};
		};
		class Face55_camo1: Face55
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face55_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","",""};
		};
		class Face55_camo2: Face55_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face55_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face55_camo3: Face55_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face55_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face55_camo4: Face55_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face55_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face55_camo5: Face55_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face55_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face55_camo6: Face55_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face55_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face56: Default
		{
			name = "$STR_FN_Man_Face56";
			texture = "\ca\characters\hhl\hhl_56_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV",""};
		};
		class Face56_camo1: Face56
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face56_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face56_camo2: Face56_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face56_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face56_camo3: Face56_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face56_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face56_camo4: Face56_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face56_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face56_camo5: Face56_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face56_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face56_camo6: Face56_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face56_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face57: Default
		{
			name = "$STR_FN_Man_Face57";
			texture = "\ca\characters\hhl\hhl_57_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","","","","","",""};
		};
		class Face57_camo1: Face57
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face57_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face57_camo2: Face57_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face57_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face57_camo3: Face57_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face57_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face57_camo4: Face57_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face57_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face57_camo5: Face57_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face57_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face57_camo6: Face57_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face57_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face58: Default
		{
			name = "$STR_FN_Man_Face58";
			texture = "\ca\characters\hhl\hhl_58_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","","","","","",""};
		};
		class Face58_camo1: Face58
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face58_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","","","",""};
		};
		class Face58_camo2: Face58_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face58_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face58_camo3: Face58_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face58_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face58_camo4: Face58_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face58_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face58_camo5: Face58_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face58_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face58_camo6: Face58_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face58_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face59: Default
		{
			name = "$STR_FN_Man_Face59";
			texture = "\ca\characters\hhl\hhl_59_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","",""};
		};
		class Face59_camo1: Face59
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face59_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face59_camo2: Face59_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face59_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face59_camo3: Face59_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face59_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face59_camo4: Face59_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face59_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face59_camo5: Face59_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face59_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face59_camo6: Face59_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face59_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face60: Default
		{
			name = "$STR_FN_Man_Face60";
			texture = "\ca\characters\hhl\hhl_60_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","","","","","",""};
		};
		class Face60_camo1: Face60
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face60_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face60_camo2: Face60_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face60_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face60_camo3: Face60_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face60_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face60_camo4: Face60_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face60_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face60_camo5: Face60_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face60_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face60_camo6: Face60_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face60_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face60_Hair: Default
		{
			name = "$STR_FN_Man_Face60_Hair";
			texture = "\ca\characters\hhl\hhl_60_Hair_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","Head_CDF","Head_CDF_CO","","","Head_CIV",""};
		};
		class Face60_Hair_camo1: Face60_Hair
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face60_Hair_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face60_Hair_camo2: Face60_Hair_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face60_Hair_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face60_Hair_camo3: Face60_Hair_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face60_Hair_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face60_Hair_camo4: Face60_Hair_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face60_Hair_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face60_Hair_camo5: Face60_Hair_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face60_Hair_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face60_Hair_camo6: Face60_Hair_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face60_Hair_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face61: Default
		{
			name = "$STR_FN_Man_Face61";
			texture = "\ca\characters\hhl\hhl_61_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","","","","","",""};
		};
		class Face61_camo1: Face61
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face61_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","","","",""};
		};
		class Face61_camo2: Face61_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face61_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face61_camo3: Face61_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face61_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face61_camo4: Face61_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face61_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face61_camo5: Face61_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face61_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face61_camo6: Face61_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face61_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face61_Hair: Default
		{
			name = "$STR_FN_Man_Face61_Hair";
			texture = "\ca\characters\hhl\hhl_61_Hair_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","",""};
		};
		class Face61_Hair_camo1: Face61_Hair
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face61_Hair_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face61_Hair_camo2: Face61_Hair_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face61_Hair_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face61_Hair_camo3: Face61_Hair_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face61_Hair_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face61_Hair_camo4: Face61_Hair_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face61_Hair_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face61_Hair_camo5: Face61_Hair_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face61_Hair_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face61_Hair_camo6: Face61_Hair_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face61_Hair_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face62: Default
		{
			name = "$STR_FN_Man_Face62";
			texture = "\ca\characters\hhl\hhl_62_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV",""};
		};
		class Face62_camo1: Face62
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face62_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face62_camo2: Face62_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face62_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face62_camo3: Face62_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face62_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face62_camo4: Face62_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face62_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face62_camo5: Face62_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face62_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face62_camo6: Face62_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face62_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face63: Default
		{
			name = "$STR_FN_Man_Face63";
			texture = "\ca\characters\hhl\hhl_63_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","Head_CDF","Head_CDF_CO","","","",""};
		};
		class Face63_camo1: Face63
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face63_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face63_camo2: Face63_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face63_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face63_camo3: Face63_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face63_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face63_camo4: Face63_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face63_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face63_camo5: Face63_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face63_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face63_camo6: Face63_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face63_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face64: Default
		{
			name = "$STR_FN_Man_Face64";
			texture = "\ca\characters\hhl\hhl_64_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","Head_RU_CO","","","Head_INS","Head_GUE","Head_CIV",""};
		};
		class Face64_camo1: Face64
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face64_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","Head_RU_CO_Camo","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face64_camo2: Face64_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face64_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face64_camo3: Face64_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face64_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face64_camo4: Face64_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face64_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face64_camo5: Face64_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face64_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face64_camo6: Face64_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face64_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face65: Default
		{
			name = "$STR_FN_Man_Face65";
			texture = "\ca\characters\hhl\hhl_65_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","Head_RU_CO","","Head_CDF_CO","","","Head_CIV",""};
		};
		class Face65_camo1: Face65
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face65_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","Head_RU_CO_Camo","","Head_CDF_CO_Camo","",""};
		};
		class Face65_camo2: Face65_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face65_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face65_camo3: Face65_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face65_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face65_camo4: Face65_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face65_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face65_camo5: Face65_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face65_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face65_camo6: Face65_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face65_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face66: Default
		{
			name = "$STR_FN_Man_Face66";
			texture = "\ca\characters\hhl\hhl_66_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV",""};
		};
		class Face66_camo1: Face66
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face66_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face66_camo2: Face66_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face66_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face66_camo3: Face66_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face66_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face66_camo4: Face66_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face66_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face66_camo5: Face66_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face66_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face66_camo6: Face66_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face66_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face67: Default
		{
			name = "$STR_FN_Man_Face67";
			texture = "\ca\characters\hhl\hhl_67_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV",""};
		};
		class Face67_camo1: Face67
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face67_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face67_camo2: Face67_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face67_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face67_camo3: Face67_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face67_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face67_camo4: Face67_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face67_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face67_camo5: Face67_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face67_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face67_camo6: Face67_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face67_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face68: Default
		{
			name = "$STR_FN_Man_Face68";
			texture = "\ca\characters\hhl\hhl_68_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV",""};
		};
		class Face68_camo1: Face68
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face68_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face68_camo2: Face68_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face68_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face68_camo3: Face68_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face68_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face68_camo4: Face68_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face68_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face68_camo5: Face68_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face68_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face68_camo6: Face68_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face68_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face69: Default
		{
			name = "$STR_FN_Man_Face69";
			texture = "\ca\characters\hhl\hhl_69_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV",""};
		};
		class Face69_camo1: Face69
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face69_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face69_camo2: Face69_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face69_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face69_camo3: Face69_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face69_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face69_camo4: Face69_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face69_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face69_camo5: Face69_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face69_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face69_camo6: Face69_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face69_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face70: Default
		{
			name = "$STR_FN_Man_Face70";
			texture = "\ca\characters\hhl\hhl_70_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","Head_CDF_CO","","Head_GUE","",""};
		};
		class Face70_camo1: Face70
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face70_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","Head_CDF_CO_Camo","","Head_GUE_Camo"};
		};
		class Face70_camo2: Face70_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face70_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face70_camo3: Face70_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face70_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face70_camo4: Face70_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face70_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face70_camo5: Face70_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face70_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face70_camo6: Face70_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face70_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face71: Default
		{
			name = "$STR_FN_Man_Face71";
			texture = "\ca\characters\hhl\hhl_71_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV",""};
		};
		class Face71_camo1: Face71
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face71_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face71_camo2: Face71_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face71_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face71_camo3: Face71_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face71_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face71_camo4: Face71_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face71_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face71_camo5: Face71_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face71_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face71_camo6: Face71_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face71_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face72: Default
		{
			name = "$STR_FN_Man_Face72";
			texture = "\ca\characters\hhl\hhl_72_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","","","Head_CIV",""};
		};
		class Face72_camo1: Face72
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face72_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","",""};
		};
		class Face72_camo2: Face72_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face72_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face72_camo3: Face72_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face72_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face72_camo4: Face72_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face72_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face72_camo5: Face72_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face72_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face72_camo6: Face72_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face72_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face73: Default
		{
			name = "$STR_FN_Man_Face73";
			texture = "\ca\characters\hhl\hhl_73_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","","","Head_GUE","Head_CIV",""};
		};
		class Face73_camo1: Face73
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face73_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face73_camo2: Face73_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face73_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face73_camo3: Face73_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face73_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face73_camo4: Face73_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face73_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face73_camo5: Face73_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face73_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face73_camo6: Face73_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face73_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face74: Default
		{
			name = "$STR_FN_Man_Face74";
			texture = "\ca\characters\hhl\hhl_74_CO.paa";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","Head_Special"};
		};
		class Face74_camo1: Face74
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face74_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","",""};
		};
		class Face74_camo2: Face74_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face74_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face74_camo3: Face74_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face74_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face74_camo4: Face74_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face74_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face74_camo5: Face74_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face74_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face74_camo6: Face74_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face74_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face75: Default
		{
			name = "$STR_FN_Man_Face75";
			texture = "\ca\characters\hhl\hhl_75_CO.paa";
			disabled = 1;
			identityTypes[] = {"Default","","","","","","Head_CDF_CO","Head_INS","","Head_CIV",""};
		};
		class Face75_camo1: Face75
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face75_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","Head_CDF_CO_Camo","Head_INS_Camo",""};
		};
		class Face75_camo2: Face75_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face75_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face75_camo3: Face75_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face75_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face75_camo4: Face75_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face75_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face75_camo5: Face75_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face75_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face75_camo6: Face75_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face75_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face76: Default
		{
			name = "$STR_FN_Man_Face76";
			texture = "\ca\characters\hhl\hhl_76_CO.paa";
			disabled = 1;
			identityTypes[] = {"","","","","","","","","","","Head_Special"};
		};
		class Face76_camo1: Face76
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face76_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","",""};
		};
		class Face76_camo2: Face76_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face76_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face76_camo3: Face76_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face76_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face76_camo4: Face76_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face76_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face76_camo5: Face76_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face76_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face76_camo6: Face76_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face76_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face77: Default
		{
			name = "$STR_FN_Man_Face77";
			texture = "\ca\characters\hhl\hhl_77_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV",""};
		};
		class Face77_camo1: Face77
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face77_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face77_camo2: Face77_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face77_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face77_camo3: Face77_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face77_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face77_camo4: Face77_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face77_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face77_camo5: Face77_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face77_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face77_camo6: Face77_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face77_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face78: Default
		{
			name = "$STR_FN_Man_Face78";
			texture = "\ca\characters\hhl\hhl_78_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face78_camo1: Face78
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face78_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face78_camo2: Face78_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face78_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face78_camo3: Face78_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face78_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face78_camo4: Face78_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face78_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face78_camo5: Face78_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face78_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face78_camo6: Face78_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face78_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face79: Default
		{
			name = "$STR_FN_Man_Face79";
			texture = "\ca\characters\hhl\hhl_79_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face79_camo1: Face79
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face79_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face79_camo2: Face79_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face79_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face79_camo3: Face79_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face79_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face79_camo4: Face79_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face79_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face79_camo5: Face79_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face79_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face79_camo6: Face79_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face79_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face80: Default
		{
			name = "$STR_FN_Man_Face80";
			texture = "\ca\characters\hhl\hhl_80_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face80_camo1: Face80
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face80_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face80_camo2: Face80_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face80_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face80_camo3: Face80_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face80_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face80_camo4: Face80_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face80_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face80_camo5: Face80_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face80_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face80_camo6: Face80_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face80_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face81: Default
		{
			name = "$STR_FN_Man_Face81";
			texture = "\ca\characters\hhl\hhl_81_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face81_camo1: Face81
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face81_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face81_camo2: Face81_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face81_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face81_camo3: Face81_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face81_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face81_camo4: Face81_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face81_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face81_camo5: Face81_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face81_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face81_camo6: Face81_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face81_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face82: Default
		{
			name = "$STR_FN_Man_Face82";
			texture = "\ca\characters\hhl\hhl_82_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face82_camo1: Face82
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face82_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face82_camo2: Face82_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face82_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face82_camo3: Face82_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face82_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face82_camo4: Face82_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face82_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face82_camo5: Face82_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face82_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face82_camo6: Face82_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face82_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face83: Default
		{
			name = "$STR_FN_Man_Face83";
			texture = "\ca\characters\hhl\hhl_83_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face83_camo1: Face83
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face83_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face83_camo2: Face83_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face83_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face83_camo3: Face83_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face83_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face83_camo4: Face83_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face83_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face83_camo5: Face83_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face83_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face83_camo6: Face83_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face83_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face84: Default
		{
			name = "$STR_FN_Man_Face84";
			texture = "\ca\characters\hhl\hhl_84_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face84_camo1: Face84
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face84_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face84_camo2: Face84_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face84_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face84_camo3: Face84_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face84_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face84_camo4: Face84_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face84_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face84_camo5: Face84_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face84_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face84_camo6: Face84_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face84_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face86: Default
		{
			name = "$STR_FN_Man_Face86";
			texture = "\ca\characters\hhl\hhl_86_CO.paa";
			material = "\ca\characters\heads\male\blackhead\data\hhl_black.rvmat";
			head = "BlackHead";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO",""};
		};
		class Face86_camo1: Face86
		{
			head = "BlackHead_camo1";
			name = "$STR_FN_Man_Face86_camo1";
			material = "\ca\characters\heads\male\blackhead\data\Camo1_hhl_black.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo"};
		};
		class Face86_camo2: Face86_camo1
		{
			head = "BlackHead_camo2";
			name = "$STR_FN_Man_Face86_camo2";
			material = "\ca\characters\heads\male\blackhead\data\Camo2_hhl_black.rvmat";
			disabled = 1;
		};
		class Face86_camo3: Face86_camo1
		{
			head = "BlackHead_camo3";
			name = "$STR_FN_Man_Face86_camo3";
			material = "\ca\characters\heads\male\blackhead\data\Camo3_hhl_black.rvmat";
			disabled = 1;
		};
		class Face86_camo4: Face86_camo1
		{
			head = "BlackHead_camo4";
			name = "$STR_FN_Man_Face86_camo4";
			material = "\ca\characters\heads\male\blackhead\data\Camo4_hhl_black.rvmat";
			disabled = 1;
		};
		class Face86_camo5: Face86_camo1
		{
			head = "BlackHead_camo5";
			name = "$STR_FN_Man_Face86_camo5";
			material = "\ca\characters\heads\male\blackhead\data\Camo5_hhl_black.rvmat";
			disabled = 1;
		};
		class Face86_camo6: Face86_camo1
		{
			head = "BlackHead_camo6";
			name = "$STR_FN_Man_Face86_camo6";
			material = "\ca\characters\heads\male\blackhead\data\Camo6_hhl_black.rvmat";
			disabled = 1;
		};
		class Face85: Default
		{
			name = "$STR_FN_Man_Face85";
			texture = "\ca\characters\hhl\hhl_85_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","Head_GUE","",""};
		};
		class Face85_camo1: Face85
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face85_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face85_camo2: Face85_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face85_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face85_camo3: Face85_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face85_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face85_camo4: Face85_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face85_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face85_camo5: Face85_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face85_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face85_camo6: Face85_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face85_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face87: Default
		{
			name = "$STR_FN_Man_Face87";
			texture = "\ca\characters\hhl\hhl_87_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","","","","","",""};
		};
		class Face87_camo1: Face87
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face87_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face87_camo2: Face87_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face87_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face87_camo3: Face87_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face87_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face87_camo4: Face87_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face87_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face87_camo5: Face87_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face87_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face87_camo6: Face87_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face87_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face88: Default
		{
			name = "$STR_FN_Man_Face88";
			texture = "\ca\characters\hhl\hhl_88_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","Head_CDF","Head_CDF_CO","","","",""};
		};
		class Face88_camo1: Face88
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face88_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face88_camo2: Face88_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face88_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face88_camo3: Face88_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face88_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face88_camo4: Face88_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face88_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face88_camo5: Face88_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face88_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face88_camo6: Face88_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face88_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face89: Default
		{
			name = "$STR_FN_Man_Face89";
			texture = "\ca\characters\hhl\hhl_89_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","Head_INS","","Head_CIV",""};
		};
		class Face89_camo1: Face89
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face89_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","Head_INS_Camo",""};
		};
		class Face89_camo2: Face89_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face89_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face89_camo3: Face89_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face89_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face89_camo4: Face89_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face89_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face89_camo5: Face89_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face89_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face89_camo6: Face89_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face89_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face90: Default
		{
			name = "$STR_FN_Man_Face90";
			texture = "\ca\characters\hhl\hhl_90_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","Head_CIV",""};
		};
		class Face90_camo1: Face90
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face90_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face90_camo2: Face90_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face90_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face90_camo3: Face90_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face90_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face90_camo4: Face90_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face90_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face90_camo5: Face90_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face90_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face90_camo6: Face90_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face90_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face91: Default
		{
			name = "$STR_FN_Man_Face91";
			texture = "\ca\characters\hhl\hhl_91_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","Head_RU","Head_RU_CO","Head_CDF","Head_CDF_CO","","","",""};
		};
		class Face91_camo1: Face91
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face91_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","Head_RU_Camo","Head_RU_CO_Camo","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face91_camo2: Face91_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face91_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face91_camo3: Face91_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face91_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face91_camo4: Face91_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face91_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face91_camo5: Face91_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face91_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face91_camo6: Face91_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face91_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face92: Default
		{
			name = "$STR_FN_Man_Face92";
			texture = "\ca\characters\hhl\hhl_92_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","",""};
		};
		class Face92_camo1: Face92
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face92_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face92_camo2: Face92_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face92_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face92_camo3: Face92_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face92_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face92_camo4: Face92_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face92_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face92_camo5: Face92_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face92_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face92_camo6: Face92_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face92_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face93: Default
		{
			name = "$STR_FN_Man_Face93";
			texture = "\ca\characters\hhl\hhl_93_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","","Head_CIV",""};
		};
		class Face93_camo1: Face93
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face93_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face93_camo2: Face93_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face93_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face93_camo3: Face93_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face93_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face93_camo4: Face93_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face93_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face93_camo5: Face93_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face93_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face93_camo6: Face93_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face93_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face94: Default
		{
			name = "$STR_FN_Man_Face94";
			texture = "\ca\characters\hhl\hhl_94_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","","","","","Head_CIV",""};
		};
		class Face94_camo1: Face94
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face94_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","","","",""};
		};
		class Face94_camo2: Face94_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face94_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face94_camo3: Face94_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face94_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face94_camo4: Face94_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face94_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face94_camo5: Face94_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face94_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face94_camo6: Face94_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face94_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face95: Default
		{
			name = "$STR_FN_Man_Face95";
			texture = "\ca\characters\hhl\hhl_95_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","",""};
		};
		class Face95_camo1: Face95
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face95_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face95_camo2: Face95_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face95_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face95_camo3: Face95_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face95_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face95_camo4: Face95_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face95_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face95_camo5: Face95_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face95_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face95_camo6: Face95_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face95_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face96: Default
		{
			name = "$STR_FN_Man_Face96";
			texture = "\ca\characters\hhl\hhl_96_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","",""};
		};
		class Face96_camo1: Face96
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face96_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face96_camo2: Face96_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face96_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face96_camo3: Face96_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face96_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face96_camo4: Face96_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face96_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face96_camo5: Face96_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face96_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face96_camo6: Face96_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face96_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face97: Default
		{
			name = "$STR_FN_Man_Face97";
			texture = "\ca\characters\hhl\hhl_97_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","Head_USMC","Head_USMC_CO","","","","","","","",""};
		};
		class Face97_camo1: Face97
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face97_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"Head_USMC_Camo","Head_USMC_CO_Camo","","","","","",""};
		};
		class Face97_camo2: Face97_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face97_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face97_camo3: Face97_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face97_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face97_camo4: Face97_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face97_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face97_camo5: Face97_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face97_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face97_camo6: Face97_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face97_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face98: Default
		{
			name = "$STR_FN_Man_Face98";
			texture = "\ca\characters\hhl\hhl_98_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","Head_INS","","Head_CIV",""};
		};
		class Face98_camo1: Face98
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face98_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face98_camo2: Face98_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face98_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face98_camo3: Face98_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face98_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face98_camo4: Face98_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face98_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face98_camo5: Face98_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face98_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face98_camo6: Face98_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face98_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face99: Default
		{
			name = "$STR_FN_Man_Face99";
			texture = "\ca\characters\hhl\hhl_99_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","Head_GUE","",""};
		};
		class Face99_camo1: Face99
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face99_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","","Head_GUE_Camo"};
		};
		class Face99_camo2: Face99_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face99_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face99_camo3: Face99_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face99_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face99_camo4: Face99_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face99_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face99_camo5: Face99_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face99_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face99_camo6: Face99_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face99_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face100: Default
		{
			name = "$STR_FN_Man_Face100";
			texture = "\ca\characters\hhl\hhl_100_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","Head_INS","","",""};
		};
		class Face100_camo1: Face100
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face100_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo",""};
		};
		class Face100_camo2: Face100_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face100_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face100_camo3: Face100_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face100_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face100_camo4: Face100_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face100_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face100_camo5: Face100_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face100_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face100_camo6: Face100_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face100_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face101: Default
		{
			name = "$STR_FN_Man_Face101";
			texture = "\ca\characters\hhl\hhl_101_CO.paa";
			disabled = 0;
			identityTypes[] = {"","","","","","","","","","","Head_Special"};
		};
		class Face101_camo1: Face101
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face101_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","",""};
		};
		class Face101_camo2: Face101_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face101_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face101_camo3: Face101_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face101_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face101_camo4: Face101_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face101_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face101_camo5: Face101_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face101_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face101_camo6: Face101_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face101_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face102: Default
		{
			name = "$STR_FN_Man_Face102";
			texture = "\ca\characters\hhl\hhl_102_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","","","Head_CIV",""};
		};
		class Face102_camo1: Face102
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face102_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","",""};
		};
		class Face102_camo2: Face102_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face102_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face102_camo3: Face102_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face102_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face102_camo4: Face102_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face102_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face102_camo5: Face102_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face102_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face102_camo6: Face102_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face102_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face103: Default
		{
			name = "$STR_FN_Man_Face103";
			texture = "\ca\characters\hhl\hhl_103_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","Head_GUE","",""};
		};
		class Face103_camo1: Face103
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face103_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","","Head_GUE_Camo"};
		};
		class Face103_camo2: Face103_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face103_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face103_camo3: Face103_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face103_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face103_camo4: Face103_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face103_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face103_camo5: Face103_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face103_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face103_camo6: Face103_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face103_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face104: Default
		{
			name = "$STR_FN_Man_Face104";
			texture = "\ca\characters\hhl\hhl_104_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","","","","","",""};
		};
		class Face104_camo1: Face104
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face104_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","","","",""};
		};
		class Face104_camo2: Face104_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face104_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face104_camo3: Face104_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face104_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face104_camo4: Face104_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face104_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face104_camo5: Face104_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face104_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face104_camo6: Face104_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face104_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face105: Default
		{
			name = "$STR_FN_Man_Face105";
			texture = "\ca\characters\hhl\hhl_105_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","Head_RU","Head_RU_CO","Head_CDF","Head_CDF_CO","","","",""};
		};
		class Face105_camo1: Face105
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face105_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","Head_RU_Camo","Head_RU_CO_Camo","Head_CDF_Camo","Head_CDF_CO_Camo","",""};
		};
		class Face105_camo2: Face105_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face105_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face105_camo3: Face105_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face105_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face105_camo4: Face105_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face105_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face105_camo5: Face105_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face105_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face105_camo6: Face105_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face105_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face106: Default
		{
			name = "$STR_FN_Man_Face106";
			texture = "\ca\characters\hhl\hhl_106_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","Head_CDF","Head_CDF_CO","","Head_GUE","Head_CIV",""};
		};
		class Face106_camo1: Face106
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face106_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","Head_CDF_Camo","Head_CDF_CO_Camo","","Head_GUE_Camo"};
		};
		class Face106_camo2: Face106_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face106_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face106_camo3: Face106_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face106_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face106_camo4: Face106_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face106_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face106_camo5: Face106_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face106_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face106_camo6: Face106_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face106_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
		class Face107: Default
		{
			name = "$STR_FN_Man_Face107";
			texture = "\ca\characters\hhl\hhl_107_CO.paa";
			disabled = 0;
			identityTypes[] = {"Default","","","","","","","Head_INS","Head_GUE","Head_CIV",""};
		};
		class Face107_camo1: Face107
		{
			head = "defaultHead_camo1";
			name = "$STR_FN_Man_Face107_camo1";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo1_hhl.rvmat";
			disabled = 1;
			identityTypes[] = {"","","","","","","Head_INS_Camo","Head_GUE_Camo"};
		};
		class Face107_camo2: Face107_camo1
		{
			head = "defaultHead_camo2";
			name = "$STR_FN_Man_Face107_camo2";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo2_hhl.rvmat";
			disabled = 1;
		};
		class Face107_camo3: Face107_camo1
		{
			head = "defaultHead_camo3";
			name = "$STR_FN_Man_Face107_camo3";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo3_hhl.rvmat";
			disabled = 1;
		};
		class Face107_camo4: Face107_camo1
		{
			head = "defaultHead_camo4";
			name = "$STR_FN_Man_Face107_camo4";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo4_hhl.rvmat";
			disabled = 1;
		};
		class Face107_camo5: Face107_camo1
		{
			head = "defaultHead_camo5";
			name = "$STR_FN_Man_Face107_camo5";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo5_hhl.rvmat";
			disabled = 1;
		};
		class Face107_camo6: Face107_camo1
		{
			head = "defaultHead_camo6";
			name = "$STR_FN_Man_Face107_camo6";
			material = "\CA\characters\Heads\Male\DefaultHead\Data\Camo6_hhl.rvmat";
			disabled = 1;
		};
	};
	class AnimalHead
	{
		class Default
		{
			name = "$STR_FN_AnimalHead_Default";
			texture = "\ca\characters\hhl\hhl_01_CO.paa";
			head = "";
			identityTypes[] = {"Animal"};
			material = "";
		};
		class Animal: Default{};
	};
	class WomanHead
	{
		class Default
		{
			name = "$STR_CFG_FACES_DEFAULT";
			texture = "\ca\characters\hhl\hhl_01_CO.paa";
			head = "WomanHead";
			identityTypes[] = {"Woman"};
			material = "";
		};
		class Woman: Default{};
		class Secretary: Default{};
		class Damsel: Default
		{
			head = "Damsel";
			identityTypes[] = {"Damsel"};
		};
		class Farmwife: Default
		{
			head = "Farmwife";
			identityTypes[] = {"Farmwife"};
		};
		class Hooker: Default
		{
			head = "Hooker";
			identityTypes[] = {"Hooker"};
		};
		class HouseWife: Default
		{
			head = "HouseWife";
			identityTypes[] = {"HouseWife"};
		};
		class SportsWoman: Default
		{
			head = "SportsWoman";
			identityTypes[] = {"SportsWoman"};
		};
		class Valentina: Default
		{
			head = "Valentina";
			identityTypes[] = {"Valentina"};
		};
		class Wife: Default
		{
			head = "Wife";
			identityTypes[] = {"Wife"};
		};
	};
	class CooperHead
	{
		class Default
		{
			name = "$STR_FN_CooperHead_Default";
			texture = "\ca\characters\hhl\hhl_27_CO.paa";
			head = "Cooper";
			identityTypes[] = {"Cooper"};
			material = "";
		};
		class Cooper: Default{};
	};
	class MilesHead
	{
		class Default
		{
			name = "$STR_FN_MilesHead_Default";
			texture = "\ca\characters\hhl\hhl_27_CO.paa";
			head = "Miles";
			identityTypes[] = {"Miles"};
			material = "";
		};
		class Miles: Default{};
	};
	class OharaHead
	{
		class Default
		{
			name = "$STR_FN_OharaHead_Default";
			texture = "\ca\characters\hhl\hhl_04_CO.paa";
			head = "Ohara";
			identityTypes[] = {"Ohara"};
			material = "";
		};
		class Ohara: Default{};
	};
	class RodriguezHead
	{
		class Default
		{
			name = "$STR_FN_RodriguezHead_Default";
			texture = "\ca\characters\hhl\hhl_04_CO.paa";
			head = "Rodriguez";
			identityTypes[] = {"Rodriguez"};
			material = "";
		};
		class Rodriguez: Default{};
	};
	class SykesHead
	{
		class Default
		{
			name = "$STR_FN_SykesHead_Default";
			texture = "\ca\characters\hhl\hhl_04_CO.paa";
			head = "Sykes";
			identityTypes[] = {"Sykes"};
			material = "";
		};
		class Sykes: Default{};
	};
	class HeadMask1Black: Man
	{
		class default: Default
		{
			name = "$STR_FN_HeadMask1Black_default";
			head = "MaskHead_1";
			identityTypes[] = {};
		};
		class Custom: Custom
		{
			head = "MaskHead_1";
		};
		class Face01: Face01
		{
			head = "MaskHead_1";
		};
		class Face01_camo1: Face01
		{
			identityTypes[] = {};
		};
		class Face01_camo2: Face01_camo1{};
		class Face01_camo3: Face01_camo1{};
		class Face01_camo4: Face01_camo1{};
		class Face01_camo5: Face01_camo1{};
		class Face01_camo6: Face01_camo1{};
		class Face02: Face02
		{
			head = "MaskHead_1";
		};
		class Face02_camo1: Face02
		{
			identityTypes[] = {};
		};
		class Face02_camo2: Face02_camo1{};
		class Face02_camo3: Face02_camo1{};
		class Face02_camo4: Face02_camo1{};
		class Face02_camo5: Face02_camo1{};
		class Face02_camo6: Face02_camo1{};
		class Face03: Face03
		{
			head = "MaskHead_1";
		};
		class Face03_camo1: Face03
		{
			identityTypes[] = {};
		};
		class Face03_camo2: Face03_camo1{};
		class Face03_camo3: Face03_camo1{};
		class Face03_camo4: Face03_camo1{};
		class Face03_camo5: Face03_camo1{};
		class Face03_camo6: Face03_camo1{};
		class Face04: Face04
		{
			head = "MaskHead_1";
		};
		class Face04_camo1: Face04
		{
			identityTypes[] = {};
		};
		class Face04_camo2: Face04_camo1{};
		class Face04_camo3: Face04_camo1{};
		class Face04_camo4: Face04_camo1{};
		class Face04_camo5: Face04_camo1{};
		class Face04_camo6: Face04_camo1{};
		class Face05: Face05
		{
			head = "MaskHead_1";
		};
		class Face05_camo1: Face05
		{
			identityTypes[] = {};
		};
		class Face05_camo2: Face05_camo1{};
		class Face05_camo3: Face05_camo1{};
		class Face05_camo4: Face05_camo1{};
		class Face05_camo5: Face05_camo1{};
		class Face05_camo6: Face05_camo1{};
		class Face06: Face06
		{
			head = "MaskHead_1";
		};
		class Face06_camo1: Face06
		{
			identityTypes[] = {};
		};
		class Face06_camo2: Face06_camo1{};
		class Face06_camo3: Face06_camo1{};
		class Face06_camo4: Face06_camo1{};
		class Face06_camo5: Face06_camo1{};
		class Face06_camo6: Face06_camo1{};
		class Face07: Face07
		{
			head = "MaskHead_1";
		};
		class Face07_camo1: Face07
		{
			identityTypes[] = {};
		};
		class Face07_camo2: Face07_camo1{};
		class Face07_camo3: Face07_camo1{};
		class Face07_camo4: Face07_camo1{};
		class Face07_camo5: Face07_camo1{};
		class Face07_camo6: Face07_camo1{};
		class Face08: Face08
		{
			head = "MaskHead_1";
		};
		class Face08_camo1: Face08
		{
			identityTypes[] = {};
		};
		class Face08_camo2: Face08_camo1{};
		class Face08_camo3: Face08_camo1{};
		class Face08_camo4: Face08_camo1{};
		class Face08_camo5: Face08_camo1{};
		class Face08_camo6: Face08_camo1{};
		class Face09: Face09
		{
			head = "MaskHead_1";
		};
		class Face09_camo1: Face09
		{
			identityTypes[] = {};
		};
		class Face09_camo2: Face09_camo1{};
		class Face09_camo3: Face09_camo1{};
		class Face09_camo4: Face09_camo1{};
		class Face09_camo5: Face09_camo1{};
		class Face09_camo6: Face09_camo1{};
		class Face10: Face10
		{
			head = "MaskHead_1";
		};
		class Face10_camo1: Face10
		{
			identityTypes[] = {};
		};
		class Face10_camo2: Face10_camo1{};
		class Face10_camo3: Face10_camo1{};
		class Face10_camo4: Face10_camo1{};
		class Face10_camo5: Face10_camo1{};
		class Face10_camo6: Face10_camo1{};
		class Face11: Face11
		{
			head = "MaskHead_1";
		};
		class Face11_camo1: Face11
		{
			identityTypes[] = {};
		};
		class Face11_camo2: Face11_camo1{};
		class Face11_camo3: Face11_camo1{};
		class Face11_camo4: Face11_camo1{};
		class Face11_camo5: Face11_camo1{};
		class Face11_camo6: Face11_camo1{};
		class Face12: Face12
		{
			head = "MaskHead_1";
		};
		class Face12_camo1: Face12
		{
			identityTypes[] = {};
		};
		class Face12_camo2: Face12_camo1{};
		class Face12_camo3: Face12_camo1{};
		class Face12_camo4: Face12_camo1{};
		class Face12_camo5: Face12_camo1{};
		class Face12_camo6: Face12_camo1{};
		class Face13: Face13
		{
			head = "MaskHead_1";
		};
		class Face13_camo1: Face13
		{
			identityTypes[] = {};
		};
		class Face13_camo2: Face13_camo1{};
		class Face13_camo3: Face13_camo1{};
		class Face13_camo4: Face13_camo1{};
		class Face13_camo5: Face13_camo1{};
		class Face13_camo6: Face13_camo1{};
		class Face14: Face14
		{
			head = "MaskHead_1";
		};
		class Face14_camo1: Face14
		{
			identityTypes[] = {};
		};
		class Face14_camo2: Face14_camo1{};
		class Face14_camo3: Face14_camo1{};
		class Face14_camo4: Face14_camo1{};
		class Face14_camo5: Face14_camo1{};
		class Face14_camo6: Face14_camo1{};
		class Face15: Face15
		{
			head = "MaskHead_1";
		};
		class Face15_camo1: Face15
		{
			identityTypes[] = {};
		};
		class Face15_camo2: Face15_camo1{};
		class Face15_camo3: Face15_camo1{};
		class Face15_camo4: Face15_camo1{};
		class Face15_camo5: Face15_camo1{};
		class Face15_camo6: Face15_camo1{};
		class Face16: Face16
		{
			head = "MaskHead_1";
		};
		class Face16_camo1: Face16
		{
			identityTypes[] = {};
		};
		class Face16_camo2: Face16_camo1{};
		class Face16_camo3: Face16_camo1{};
		class Face16_camo4: Face16_camo1{};
		class Face16_camo5: Face16_camo1{};
		class Face16_camo6: Face16_camo1{};
		class Face17: Face17
		{
			head = "MaskHead_1";
		};
		class Face17_camo1: Face17
		{
			identityTypes[] = {};
		};
		class Face17_camo2: Face17_camo1{};
		class Face17_camo3: Face17_camo1{};
		class Face17_camo4: Face17_camo1{};
		class Face17_camo5: Face17_camo1{};
		class Face17_camo6: Face17_camo1{};
		class Face18: Face18
		{
			head = "MaskHead_1";
		};
		class Face18_camo1: Face18
		{
			identityTypes[] = {};
		};
		class Face18_camo2: Face18_camo1{};
		class Face18_camo3: Face18_camo1{};
		class Face18_camo4: Face18_camo1{};
		class Face18_camo5: Face18_camo1{};
		class Face18_camo6: Face18_camo1{};
		class Face19: Face19
		{
			head = "MaskHead_1";
		};
		class Face19_camo1: Face19
		{
			identityTypes[] = {};
		};
		class Face19_camo2: Face19_camo1{};
		class Face19_camo3: Face19_camo1{};
		class Face19_camo4: Face19_camo1{};
		class Face19_camo5: Face19_camo1{};
		class Face19_camo6: Face19_camo1{};
		class Face20: Face20
		{
			head = "MaskHead_1";
		};
		class Face20_camo1: Face20
		{
			identityTypes[] = {};
		};
		class Face20_camo2: Face20_camo1{};
		class Face20_camo3: Face20_camo1{};
		class Face20_camo4: Face20_camo1{};
		class Face20_camo5: Face20_camo1{};
		class Face20_camo6: Face20_camo1{};
		class Face21: Face21
		{
			head = "MaskHead_1";
		};
		class Face21_camo1: Face21
		{
			identityTypes[] = {};
		};
		class Face21_camo2: Face21_camo1{};
		class Face21_camo3: Face21_camo1{};
		class Face21_camo4: Face21_camo1{};
		class Face21_camo5: Face21_camo1{};
		class Face21_camo6: Face21_camo1{};
		class Face22: Face22
		{
			head = "MaskHead_1";
		};
		class Face22_camo1: Face22
		{
			identityTypes[] = {};
		};
		class Face22_camo2: Face22_camo1{};
		class Face22_camo3: Face22_camo1{};
		class Face22_camo4: Face22_camo1{};
		class Face22_camo5: Face22_camo1{};
		class Face22_camo6: Face22_camo1{};
		class Face23: Face23
		{
			head = "MaskHead_1";
		};
		class Face23_camo1: Face23
		{
			identityTypes[] = {};
		};
		class Face23_camo2: Face23_camo1{};
		class Face23_camo3: Face23_camo1{};
		class Face23_camo4: Face23_camo1{};
		class Face23_camo5: Face23_camo1{};
		class Face23_camo6: Face23_camo1{};
		class Face24: Face24
		{
			head = "MaskHead_1";
		};
		class Face24_camo1: Face24
		{
			identityTypes[] = {};
		};
		class Face24_camo2: Face24_camo1{};
		class Face24_camo3: Face24_camo1{};
		class Face24_camo4: Face24_camo1{};
		class Face24_camo5: Face24_camo1{};
		class Face24_camo6: Face24_camo1{};
		class Face25: Face25
		{
			head = "MaskHead_1";
		};
		class Face25_camo1: Face25
		{
			identityTypes[] = {};
		};
		class Face25_camo2: Face25_camo1{};
		class Face25_camo3: Face25_camo1{};
		class Face25_camo4: Face25_camo1{};
		class Face25_camo5: Face25_camo1{};
		class Face25_camo6: Face25_camo1{};
		class Face26: Face26
		{
			head = "MaskHead_1_black";
		};
		class Face26_camo1: Face26
		{
			identityTypes[] = {};
		};
		class Face26_camo2: Face26_camo1{};
		class Face26_camo3: Face26_camo1{};
		class Face26_camo4: Face26_camo1{};
		class Face26_camo5: Face26_camo1{};
		class Face26_camo6: Face26_camo1{};
		class Face27: Face27
		{
			head = "MaskHead_1_black";
		};
		class Face27_camo1: Face27
		{
			identityTypes[] = {};
		};
		class Face27_camo2: Face27_camo1{};
		class Face27_camo3: Face27_camo1{};
		class Face27_camo4: Face27_camo1{};
		class Face27_camo5: Face27_camo1{};
		class Face27_camo6: Face27_camo1{};
		class Face28: Face28
		{
			head = "MaskHead_1_black";
		};
		class Face28_camo1: Face28
		{
			identityTypes[] = {};
		};
		class Face28_camo2: Face28_camo1{};
		class Face28_camo3: Face28_camo1{};
		class Face28_camo4: Face28_camo1{};
		class Face28_camo5: Face28_camo1{};
		class Face28_camo6: Face28_camo1{};
		class Face29: Face29
		{
			head = "MaskHead_1_black";
		};
		class Face29_camo1: Face29
		{
			identityTypes[] = {};
		};
		class Face29_camo2: Face29_camo1{};
		class Face29_camo3: Face29_camo1{};
		class Face29_camo4: Face29_camo1{};
		class Face29_camo5: Face29_camo1{};
		class Face29_camo6: Face29_camo1{};
		class Face30: Face30
		{
			head = "MaskHead_1_black";
		};
		class Face30_camo1: Face30
		{
			identityTypes[] = {};
		};
		class Face30_camo2: Face30_camo1{};
		class Face30_camo3: Face30_camo1{};
		class Face30_camo4: Face30_camo1{};
		class Face30_camo5: Face30_camo1{};
		class Face30_camo6: Face30_camo1{};
		class Face31: Face31
		{
			head = "MaskHead_1_black";
		};
		class Face31_camo1: Face31
		{
			identityTypes[] = {};
		};
		class Face31_camo2: Face31_camo1{};
		class Face31_camo3: Face31_camo1{};
		class Face31_camo4: Face31_camo1{};
		class Face31_camo5: Face31_camo1{};
		class Face31_camo6: Face31_camo1{};
		class Face32: Face32
		{
			head = "MaskHead_1_black";
		};
		class Face32_camo1: Face32
		{
			identityTypes[] = {};
		};
		class Face32_camo2: Face32_camo1{};
		class Face32_camo3: Face32_camo1{};
		class Face32_camo4: Face32_camo1{};
		class Face32_camo5: Face32_camo1{};
		class Face32_camo6: Face32_camo1{};
		class Face33: Face33
		{
			head = "MaskHead_1_black";
		};
		class Face33_camo1: Face33
		{
			identityTypes[] = {};
		};
		class Face33_camo2: Face33_camo1{};
		class Face33_camo3: Face33_camo1{};
		class Face33_camo4: Face33_camo1{};
		class Face33_camo5: Face33_camo1{};
		class Face33_camo6: Face33_camo1{};
		class Face34: Face34
		{
			head = "MaskHead_1_black";
		};
		class Face34_camo1: Face34
		{
			identityTypes[] = {};
		};
		class Face34_camo2: Face34_camo1{};
		class Face34_camo3: Face34_camo1{};
		class Face34_camo4: Face34_camo1{};
		class Face34_camo5: Face34_camo1{};
		class Face34_camo6: Face34_camo1{};
		class Face35: Face35
		{
			head = "MaskHead_1_black";
		};
		class Face35_camo1: Face35
		{
			identityTypes[] = {};
		};
		class Face35_camo2: Face35_camo1{};
		class Face35_camo3: Face35_camo1{};
		class Face35_camo4: Face35_camo1{};
		class Face35_camo5: Face35_camo1{};
		class Face35_camo6: Face35_camo1{};
		class Face36: Face36
		{
			head = "MaskHead_1_black";
		};
		class Face36_camo1: Face36
		{
			identityTypes[] = {};
		};
		class Face36_camo2: Face36_camo1{};
		class Face36_camo3: Face36_camo1{};
		class Face36_camo4: Face36_camo1{};
		class Face36_camo5: Face36_camo1{};
		class Face36_camo6: Face36_camo1{};
		class Face37: Face37
		{
			head = "MaskHead_1_black";
		};
		class Face37_camo1: Face37
		{
			identityTypes[] = {};
		};
		class Face37_camo2: Face37_camo1{};
		class Face37_camo3: Face37_camo1{};
		class Face37_camo4: Face37_camo1{};
		class Face37_camo5: Face37_camo1{};
		class Face37_camo6: Face37_camo1{};
		class Face38: Face38
		{
			head = "MaskHead_1_black";
		};
		class Face38_camo1: Face38
		{
			identityTypes[] = {};
		};
		class Face38_camo2: Face38_camo1{};
		class Face38_camo3: Face38_camo1{};
		class Face38_camo4: Face38_camo1{};
		class Face38_camo5: Face38_camo1{};
		class Face38_camo6: Face38_camo1{};
		class Face39: Face39
		{
			head = "MaskHead_1_black";
		};
		class Face39_camo1: Face39
		{
			identityTypes[] = {};
		};
		class Face39_camo2: Face39_camo1{};
		class Face39_camo3: Face39_camo1{};
		class Face39_camo4: Face39_camo1{};
		class Face39_camo5: Face39_camo1{};
		class Face39_camo6: Face39_camo1{};
		class Face40: Face40
		{
			head = "MaskHead_1_black";
		};
		class Face40_camo1: Face40
		{
			identityTypes[] = {};
		};
		class Face40_camo2: Face40_camo1{};
		class Face40_camo3: Face40_camo1{};
		class Face40_camo4: Face40_camo1{};
		class Face40_camo5: Face40_camo1{};
		class Face40_camo6: Face40_camo1{};
		class Face41: Face41
		{
			head = "MaskHead_1";
		};
		class Face41_camo1: Face41
		{
			identityTypes[] = {};
		};
		class Face41_camo2: Face41_camo1{};
		class Face41_camo3: Face41_camo1{};
		class Face41_camo4: Face41_camo1{};
		class Face41_camo5: Face41_camo1{};
		class Face41_camo6: Face41_camo1{};
		class Face42: Face42
		{
			head = "MaskHead_1";
		};
		class Face42_camo1: Face42
		{
			identityTypes[] = {};
		};
		class Face42_camo2: Face42_camo1{};
		class Face42_camo3: Face42_camo1{};
		class Face42_camo4: Face42_camo1{};
		class Face42_camo5: Face42_camo1{};
		class Face42_camo6: Face42_camo1{};
		class Face43: Face43
		{
			head = "MaskHead_1";
		};
		class Face43_camo1: Face43
		{
			identityTypes[] = {};
		};
		class Face43_camo2: Face43_camo1{};
		class Face43_camo3: Face43_camo1{};
		class Face43_camo4: Face43_camo1{};
		class Face43_camo5: Face43_camo1{};
		class Face43_camo6: Face43_camo1{};
		class Face44: Face44
		{
			head = "MaskHead_1";
		};
		class Face44_camo1: Face44
		{
			identityTypes[] = {};
		};
		class Face44_camo2: Face44_camo1{};
		class Face44_camo3: Face44_camo1{};
		class Face44_camo4: Face44_camo1{};
		class Face44_camo5: Face44_camo1{};
		class Face44_camo6: Face44_camo1{};
		class Face45: Face45
		{
			head = "MaskHead_1";
		};
		class Face45_camo1: Face45
		{
			identityTypes[] = {};
		};
		class Face45_camo2: Face45_camo1{};
		class Face45_camo3: Face45_camo1{};
		class Face45_camo4: Face45_camo1{};
		class Face45_camo5: Face45_camo1{};
		class Face45_camo6: Face45_camo1{};
		class Face46: Face46
		{
			head = "MaskHead_1";
		};
		class Face46_camo1: Face46
		{
			identityTypes[] = {};
		};
		class Face46_camo2: Face46_camo1{};
		class Face46_camo3: Face46_camo1{};
		class Face46_camo4: Face46_camo1{};
		class Face46_camo5: Face46_camo1{};
		class Face46_camo6: Face46_camo1{};
		class Face47: Face47
		{
			head = "MaskHead_1";
		};
		class Face47_camo1: Face47
		{
			identityTypes[] = {};
		};
		class Face47_camo2: Face47_camo1{};
		class Face47_camo3: Face47_camo1{};
		class Face47_camo4: Face47_camo1{};
		class Face47_camo5: Face47_camo1{};
		class Face47_camo6: Face47_camo1{};
		class Face48: Face48
		{
			head = "MaskHead_1";
		};
		class Face48_camo1: Face48
		{
			identityTypes[] = {};
		};
		class Face48_camo2: Face48_camo1{};
		class Face48_camo3: Face48_camo1{};
		class Face48_camo4: Face48_camo1{};
		class Face48_camo5: Face48_camo1{};
		class Face48_camo6: Face48_camo1{};
		class Face49: Face49
		{
			head = "MaskHead_1";
		};
		class Face49_camo1: Face49
		{
			identityTypes[] = {};
		};
		class Face49_camo2: Face49_camo1{};
		class Face49_camo3: Face49_camo1{};
		class Face49_camo4: Face49_camo1{};
		class Face49_camo5: Face49_camo1{};
		class Face49_camo6: Face49_camo1{};
		class Face50: Face50
		{
			head = "MaskHead_1";
		};
		class Face50_camo1: Face50
		{
			identityTypes[] = {};
		};
		class Face50_camo2: Face50_camo1{};
		class Face50_camo3: Face50_camo1{};
		class Face50_camo4: Face50_camo1{};
		class Face50_camo5: Face50_camo1{};
		class Face50_camo6: Face50_camo1{};
		class Face52: Face52
		{
			head = "MaskHead_1";
		};
		class Face52_camo1: Face52
		{
			identityTypes[] = {};
		};
		class Face52_camo2: Face52_camo1{};
		class Face52_camo3: Face52_camo1{};
		class Face52_camo4: Face52_camo1{};
		class Face52_camo5: Face52_camo1{};
		class Face52_camo6: Face52_camo1{};
		class Face54: Face54
		{
			head = "MaskHead_1";
		};
		class Face54_camo1: Face54
		{
			identityTypes[] = {};
		};
		class Face54_camo2: Face54_camo1{};
		class Face54_camo3: Face54_camo1{};
		class Face54_camo4: Face54_camo1{};
		class Face54_camo5: Face54_camo1{};
		class Face54_camo6: Face54_camo1{};
		class Face55: Face55
		{
			head = "MaskHead_1";
		};
		class Face55_camo1: Face55
		{
			identityTypes[] = {};
		};
		class Face55_camo2: Face55_camo1{};
		class Face55_camo3: Face55_camo1{};
		class Face55_camo4: Face55_camo1{};
		class Face55_camo5: Face55_camo1{};
		class Face55_camo6: Face55_camo1{};
		class Face56: Face56
		{
			head = "MaskHead_1";
		};
		class Face56_camo1: Face56
		{
			identityTypes[] = {};
		};
		class Face56_camo2: Face56_camo1{};
		class Face56_camo3: Face56_camo1{};
		class Face56_camo4: Face56_camo1{};
		class Face56_camo5: Face56_camo1{};
		class Face56_camo6: Face56_camo1{};
		class Face57: Face57
		{
			head = "MaskHead_1";
		};
		class Face57_camo1: Face57
		{
			identityTypes[] = {};
		};
		class Face57_camo2: Face57_camo1{};
		class Face57_camo3: Face57_camo1{};
		class Face57_camo4: Face57_camo1{};
		class Face57_camo5: Face57_camo1{};
		class Face57_camo6: Face57_camo1{};
		class Face58: Face58
		{
			head = "MaskHead_1";
		};
		class Face58_camo1: Face58
		{
			identityTypes[] = {};
		};
		class Face58_camo2: Face58_camo1{};
		class Face58_camo3: Face58_camo1{};
		class Face58_camo4: Face58_camo1{};
		class Face58_camo5: Face58_camo1{};
		class Face58_camo6: Face58_camo1{};
		class Face59: Face59
		{
			head = "MaskHead_1";
		};
		class Face59_camo1: Face59
		{
			identityTypes[] = {};
		};
		class Face59_camo2: Face59_camo1{};
		class Face59_camo3: Face59_camo1{};
		class Face59_camo4: Face59_camo1{};
		class Face59_camo5: Face59_camo1{};
		class Face59_camo6: Face59_camo1{};
		class Face60: Face60
		{
			head = "MaskHead_1";
		};
		class Face60_camo1: Face60
		{
			identityTypes[] = {};
		};
		class Face60_camo2: Face60_camo1{};
		class Face60_camo3: Face60_camo1{};
		class Face60_camo4: Face60_camo1{};
		class Face60_camo5: Face60_camo1{};
		class Face60_camo6: Face60_camo1{};
		class Face61: Face61
		{
			head = "MaskHead_1";
		};
		class Face61_camo1: Face61
		{
			identityTypes[] = {};
		};
		class Face61_camo2: Face61_camo1{};
		class Face61_camo3: Face61_camo1{};
		class Face61_camo4: Face61_camo1{};
		class Face61_camo5: Face61_camo1{};
		class Face61_camo6: Face61_camo1{};
		class Face62: Face62
		{
			head = "MaskHead_1";
		};
		class Face62_camo1: Face62
		{
			identityTypes[] = {};
		};
		class Face62_camo2: Face62_camo1{};
		class Face62_camo3: Face62_camo1{};
		class Face62_camo4: Face62_camo1{};
		class Face62_camo5: Face62_camo1{};
		class Face62_camo6: Face62_camo1{};
		class Face63: Face63
		{
			head = "MaskHead_1";
		};
		class Face63_camo1: Face63
		{
			identityTypes[] = {};
		};
		class Face63_camo2: Face63_camo1{};
		class Face63_camo3: Face63_camo1{};
		class Face63_camo4: Face63_camo1{};
		class Face63_camo5: Face63_camo1{};
		class Face63_camo6: Face63_camo1{};
		class Face64: Face64
		{
			head = "MaskHead_1";
		};
		class Face64_camo1: Face64
		{
			identityTypes[] = {};
		};
		class Face64_camo2: Face64_camo1{};
		class Face64_camo3: Face64_camo1{};
		class Face64_camo4: Face64_camo1{};
		class Face64_camo5: Face64_camo1{};
		class Face64_camo6: Face64_camo1{};
		class Face65: Face65
		{
			head = "MaskHead_1";
		};
		class Face65_camo1: Face65
		{
			identityTypes[] = {};
		};
		class Face65_camo2: Face65_camo1{};
		class Face65_camo3: Face65_camo1{};
		class Face65_camo4: Face65_camo1{};
		class Face65_camo5: Face65_camo1{};
		class Face65_camo6: Face65_camo1{};
		class Face66: Face66
		{
			head = "MaskHead_1";
		};
		class Face66_camo1: Face66
		{
			identityTypes[] = {};
		};
		class Face66_camo2: Face66_camo1{};
		class Face66_camo3: Face66_camo1{};
		class Face66_camo4: Face66_camo1{};
		class Face66_camo5: Face66_camo1{};
		class Face66_camo6: Face66_camo1{};
		class Face67: Face67
		{
			head = "MaskHead_1";
		};
		class Face67_camo1: Face67
		{
			identityTypes[] = {};
		};
		class Face67_camo2: Face67_camo1{};
		class Face67_camo3: Face67_camo1{};
		class Face67_camo4: Face67_camo1{};
		class Face67_camo5: Face67_camo1{};
		class Face67_camo6: Face67_camo1{};
		class Face68: Face68
		{
			head = "MaskHead_1";
		};
		class Face68_camo1: Face68
		{
			identityTypes[] = {};
		};
		class Face68_camo2: Face68_camo1{};
		class Face68_camo3: Face68_camo1{};
		class Face68_camo4: Face68_camo1{};
		class Face68_camo5: Face68_camo1{};
		class Face68_camo6: Face68_camo1{};
		class Face69: Face69
		{
			head = "MaskHead_1";
		};
		class Face69_camo1: Face69
		{
			identityTypes[] = {};
		};
		class Face69_camo2: Face69_camo1{};
		class Face69_camo3: Face69_camo1{};
		class Face69_camo4: Face69_camo1{};
		class Face69_camo5: Face69_camo1{};
		class Face69_camo6: Face69_camo1{};
		class Face70: Face70
		{
			head = "MaskHead_1";
		};
		class Face70_camo1: Face70
		{
			identityTypes[] = {};
		};
		class Face70_camo2: Face70_camo1{};
		class Face70_camo3: Face70_camo1{};
		class Face70_camo4: Face70_camo1{};
		class Face70_camo5: Face70_camo1{};
		class Face70_camo6: Face70_camo1{};
		class Face71: Face71
		{
			head = "MaskHead_1";
		};
		class Face71_camo1: Face71
		{
			identityTypes[] = {};
		};
		class Face71_camo2: Face71_camo1{};
		class Face71_camo3: Face71_camo1{};
		class Face71_camo4: Face71_camo1{};
		class Face71_camo5: Face71_camo1{};
		class Face71_camo6: Face71_camo1{};
		class Face72: Face72
		{
			head = "MaskHead_1";
		};
		class Face72_camo1: Face72
		{
			identityTypes[] = {};
		};
		class Face72_camo2: Face72_camo1{};
		class Face72_camo3: Face72_camo1{};
		class Face72_camo4: Face72_camo1{};
		class Face72_camo5: Face72_camo1{};
		class Face72_camo6: Face72_camo1{};
		class Face73: Face73
		{
			head = "MaskHead_1";
		};
		class Face73_camo1: Face73
		{
			identityTypes[] = {};
		};
		class Face73_camo2: Face73_camo1{};
		class Face73_camo3: Face73_camo1{};
		class Face73_camo4: Face73_camo1{};
		class Face73_camo5: Face73_camo1{};
		class Face73_camo6: Face73_camo1{};
		class Face74: Face74
		{
			head = "MaskHead_1";
		};
		class Face74_camo1: Face74
		{
			identityTypes[] = {};
		};
		class Face74_camo2: Face74_camo1{};
		class Face74_camo3: Face74_camo1{};
		class Face74_camo4: Face74_camo1{};
		class Face74_camo5: Face74_camo1{};
		class Face74_camo6: Face74_camo1{};
		class Face75: Face75
		{
			head = "MaskHead_1";
		};
		class Face75_camo1: Face75
		{
			identityTypes[] = {};
		};
		class Face75_camo2: Face75_camo1{};
		class Face75_camo3: Face75_camo1{};
		class Face75_camo4: Face75_camo1{};
		class Face75_camo5: Face75_camo1{};
		class Face75_camo6: Face75_camo1{};
		class Face76: Face76
		{
			head = "MaskHead_1";
		};
		class Face76_camo1: Face76
		{
			identityTypes[] = {};
		};
		class Face76_camo2: Face76_camo1{};
		class Face76_camo3: Face76_camo1{};
		class Face76_camo4: Face76_camo1{};
		class Face76_camo5: Face76_camo1{};
		class Face76_camo6: Face76_camo1{};
		class Face77: Face77
		{
			head = "MaskHead_1";
		};
		class Face77_camo1: Face77
		{
			identityTypes[] = {};
		};
		class Face77_camo2: Face77_camo1{};
		class Face77_camo3: Face77_camo1{};
		class Face77_camo4: Face77_camo1{};
		class Face77_camo5: Face77_camo1{};
		class Face77_camo6: Face77_camo1{};
		class Face78: Face78
		{
			head = "MaskHead_1_black";
		};
		class Face78_camo1: Face78
		{
			identityTypes[] = {};
		};
		class Face78_camo2: Face78_camo1{};
		class Face78_camo3: Face78_camo1{};
		class Face78_camo4: Face78_camo1{};
		class Face78_camo5: Face78_camo1{};
		class Face78_camo6: Face78_camo1{};
		class Face79: Face79
		{
			head = "MaskHead_1_black";
		};
		class Face79_camo1: Face79
		{
			identityTypes[] = {};
		};
		class Face79_camo2: Face79_camo1{};
		class Face79_camo3: Face79_camo1{};
		class Face79_camo4: Face79_camo1{};
		class Face79_camo5: Face79_camo1{};
		class Face79_camo6: Face79_camo1{};
		class Face80: Face80
		{
			head = "MaskHead_1_black";
		};
		class Face80_camo1: Face80
		{
			identityTypes[] = {};
		};
		class Face80_camo2: Face80_camo1{};
		class Face80_camo3: Face80_camo1{};
		class Face80_camo4: Face80_camo1{};
		class Face80_camo5: Face80_camo1{};
		class Face80_camo6: Face80_camo1{};
		class Face81: Face81
		{
			head = "MaskHead_1_black";
		};
		class Face81_camo1: Face81
		{
			identityTypes[] = {};
		};
		class Face81_camo2: Face81_camo1{};
		class Face81_camo3: Face81_camo1{};
		class Face81_camo4: Face81_camo1{};
		class Face81_camo5: Face81_camo1{};
		class Face81_camo6: Face81_camo1{};
		class Face82: Face82
		{
			head = "MaskHead_1_black";
		};
		class Face82_camo1: Face82
		{
			identityTypes[] = {};
		};
		class Face82_camo2: Face82_camo1{};
		class Face82_camo3: Face82_camo1{};
		class Face82_camo4: Face82_camo1{};
		class Face82_camo5: Face82_camo1{};
		class Face82_camo6: Face82_camo1{};
		class Face83: Face83
		{
			head = "MaskHead_1_black";
		};
		class Face83_camo1: Face83
		{
			identityTypes[] = {};
		};
		class Face83_camo2: Face83_camo1{};
		class Face83_camo3: Face83_camo1{};
		class Face83_camo4: Face83_camo1{};
		class Face83_camo5: Face83_camo1{};
		class Face83_camo6: Face83_camo1{};
		class Face84: Face84
		{
			head = "MaskHead_1_black";
		};
		class Face84_camo1: Face84
		{
			identityTypes[] = {};
		};
		class Face84_camo2: Face84_camo1{};
		class Face84_camo3: Face84_camo1{};
		class Face84_camo4: Face84_camo1{};
		class Face84_camo5: Face84_camo1{};
		class Face84_camo6: Face84_camo1{};
		class Face85: Face85
		{
			head = "MaskHead_1";
		};
		class Face85_camo1: Face85
		{
			identityTypes[] = {};
		};
		class Face85_camo2: Face85_camo1{};
		class Face85_camo3: Face85_camo1{};
		class Face85_camo4: Face85_camo1{};
		class Face85_camo5: Face85_camo1{};
		class Face85_camo6: Face85_camo1{};
		class Face86: Face86
		{
			head = "MaskHead_1_black";
		};
		class Face86_camo1: Face86
		{
			identityTypes[] = {};
		};
		class Face86_camo2: Face86_camo1{};
		class Face86_camo3: Face86_camo1{};
		class Face86_camo4: Face86_camo1{};
		class Face86_camo5: Face86_camo1{};
		class Face86_camo6: Face86_camo1{};
		class Face87: Face87
		{
			head = "MaskHead_1";
		};
		class Face87_camo1: Face87
		{
			identityTypes[] = {};
		};
		class Face87_camo2: Face87_camo1{};
		class Face87_camo3: Face87_camo1{};
		class Face87_camo4: Face87_camo1{};
		class Face87_camo5: Face87_camo1{};
		class Face87_camo6: Face87_camo1{};
		class Face88: Face88
		{
			head = "MaskHead_1";
		};
		class Face88_camo1: Face88
		{
			identityTypes[] = {};
		};
		class Face88_camo2: Face88_camo1{};
		class Face88_camo3: Face88_camo1{};
		class Face88_camo4: Face88_camo1{};
		class Face88_camo5: Face88_camo1{};
		class Face88_camo6: Face88_camo1{};
		class Face89: Face89
		{
			head = "MaskHead_1";
		};
		class Face89_camo1: Face89
		{
			identityTypes[] = {};
		};
		class Face89_camo2: Face89_camo1{};
		class Face89_camo3: Face89_camo1{};
		class Face89_camo4: Face89_camo1{};
		class Face89_camo5: Face89_camo1{};
		class Face89_camo6: Face89_camo1{};
		class Face90: Face90
		{
			head = "MaskHead_1";
		};
		class Face90_camo1: Face90
		{
			identityTypes[] = {};
		};
		class Face90_camo2: Face90_camo1{};
		class Face90_camo3: Face90_camo1{};
		class Face90_camo4: Face90_camo1{};
		class Face90_camo5: Face90_camo1{};
		class Face90_camo6: Face90_camo1{};
		class Face91: Face91
		{
			head = "MaskHead_1";
		};
		class Face91_camo1: Face91
		{
			identityTypes[] = {};
		};
		class Face91_camo2: Face91_camo1{};
		class Face91_camo3: Face91_camo1{};
		class Face91_camo4: Face91_camo1{};
		class Face91_camo5: Face91_camo1{};
		class Face91_camo6: Face91_camo1{};
		class Face92: Face92
		{
			head = "MaskHead_1";
		};
		class Face92_camo1: Face92
		{
			identityTypes[] = {};
		};
		class Face92_camo2: Face92_camo1{};
		class Face92_camo3: Face92_camo1{};
		class Face92_camo4: Face92_camo1{};
		class Face92_camo5: Face92_camo1{};
		class Face92_camo6: Face92_camo1{};
		class Face93: Face93
		{
			head = "MaskHead_1";
		};
		class Face93_camo1: Face93
		{
			identityTypes[] = {};
		};
		class Face93_camo2: Face93_camo1{};
		class Face93_camo3: Face93_camo1{};
		class Face93_camo4: Face93_camo1{};
		class Face93_camo5: Face93_camo1{};
		class Face93_camo6: Face93_camo1{};
		class Face94: Face94
		{
			head = "MaskHead_1";
		};
		class Face94_camo1: Face94
		{
			identityTypes[] = {};
		};
		class Face94_camo2: Face94_camo1{};
		class Face94_camo3: Face94_camo1{};
		class Face94_camo4: Face94_camo1{};
		class Face94_camo5: Face94_camo1{};
		class Face94_camo6: Face94_camo1{};
		class Face95: Face95
		{
			head = "MaskHead_1";
		};
		class Face95_camo1: Face95
		{
			identityTypes[] = {};
		};
		class Face95_camo2: Face95_camo1{};
		class Face95_camo3: Face95_camo1{};
		class Face95_camo4: Face95_camo1{};
		class Face95_camo5: Face95_camo1{};
		class Face95_camo6: Face95_camo1{};
		class Face96: Face96
		{
			head = "MaskHead_1";
		};
		class Face96_camo1: Face96
		{
			identityTypes[] = {};
		};
		class Face96_camo2: Face96_camo1{};
		class Face96_camo3: Face96_camo1{};
		class Face96_camo4: Face96_camo1{};
		class Face96_camo5: Face96_camo1{};
		class Face96_camo6: Face96_camo1{};
		class Face97: Face97
		{
			head = "MaskHead_1";
		};
		class Face97_camo1: Face97
		{
			identityTypes[] = {};
		};
		class Face97_camo2: Face97_camo1{};
		class Face97_camo3: Face97_camo1{};
		class Face97_camo4: Face97_camo1{};
		class Face97_camo5: Face97_camo1{};
		class Face97_camo6: Face97_camo1{};
		class Face98: Face98
		{
			head = "MaskHead_1";
		};
		class Face98_camo1: Face98
		{
			identityTypes[] = {};
		};
		class Face98_camo2: Face98_camo1{};
		class Face98_camo3: Face98_camo1{};
		class Face98_camo4: Face98_camo1{};
		class Face98_camo5: Face98_camo1{};
		class Face98_camo6: Face98_camo1{};
		class Face99: Face99
		{
			head = "MaskHead_1";
		};
		class Face99_camo1: Face99
		{
			identityTypes[] = {};
		};
		class Face99_camo2: Face99_camo1{};
		class Face99_camo3: Face99_camo1{};
		class Face99_camo4: Face99_camo1{};
		class Face99_camo5: Face99_camo1{};
		class Face99_camo6: Face99_camo1{};
		class Face100: Face100
		{
			head = "MaskHead_1";
		};
		class Face100_camo1: Face100
		{
			identityTypes[] = {};
		};
		class Face100_camo2: Face100_camo1{};
		class Face100_camo3: Face100_camo1{};
		class Face100_camo4: Face100_camo1{};
		class Face100_camo5: Face100_camo1{};
		class Face100_camo6: Face100_camo1{};
		class Face101: Face101
		{
			head = "MaskHead_1";
		};
		class Face101_camo1: Face101
		{
			identityTypes[] = {};
		};
		class Face101_camo2: Face101_camo1{};
		class Face101_camo3: Face101_camo1{};
		class Face101_camo4: Face101_camo1{};
		class Face101_camo5: Face101_camo1{};
		class Face101_camo6: Face101_camo1{};
		class Face102: Face102
		{
			head = "MaskHead_1";
		};
		class Face102_camo1: Face102
		{
			identityTypes[] = {};
		};
		class Face102_camo2: Face102_camo1{};
		class Face102_camo3: Face102_camo1{};
		class Face102_camo4: Face102_camo1{};
		class Face102_camo5: Face102_camo1{};
		class Face102_camo6: Face102_camo1{};
		class Face103: Face103
		{
			head = "MaskHead_1";
		};
		class Face103_camo1: Face103
		{
			identityTypes[] = {};
		};
		class Face103_camo2: Face103_camo1{};
		class Face103_camo3: Face103_camo1{};
		class Face103_camo4: Face103_camo1{};
		class Face103_camo5: Face103_camo1{};
		class Face103_camo6: Face103_camo1{};
		class Face104: Face104
		{
			head = "MaskHead_1";
		};
		class Face104_camo1: Face104
		{
			identityTypes[] = {};
		};
		class Face104_camo2: Face104_camo1{};
		class Face104_camo3: Face104_camo1{};
		class Face104_camo4: Face104_camo1{};
		class Face104_camo5: Face104_camo1{};
		class Face104_camo6: Face104_camo1{};
		class Face105: Face105
		{
			head = "MaskHead_1";
		};
		class Face105_camo1: Face105
		{
			identityTypes[] = {};
		};
		class Face105_camo2: Face105_camo1{};
		class Face105_camo3: Face105_camo1{};
		class Face105_camo4: Face105_camo1{};
		class Face105_camo5: Face105_camo1{};
		class Face105_camo6: Face105_camo1{};
		class Face106: Face106
		{
			head = "MaskHead_1";
		};
		class Face106_camo1: Face106
		{
			identityTypes[] = {};
		};
		class Face106_camo2: Face106_camo1{};
		class Face106_camo3: Face106_camo1{};
		class Face106_camo4: Face106_camo1{};
		class Face106_camo5: Face106_camo1{};
		class Face106_camo6: Face106_camo1{};
		class Face107: Face107
		{
			head = "MaskHead_1";
		};
		class Face107_camo1: Face107
		{
			identityTypes[] = {};
		};
		class Face107_camo2: Face107_camo1{};
		class Face107_camo3: Face107_camo1{};
		class Face107_camo4: Face107_camo1{};
		class Face107_camo5: Face107_camo1{};
		class Face107_camo6: Face107_camo1{};
	};
	class HeadMask3Black: Man
	{
		class Default
		{
			name = "$STR_FN_HeadMask3Black_Default";
			head = "MaskHead_B";
			identityTypes[] = {};
		};
		class Custom: Custom
		{
			head = "MaskHead_B";
		};
		class Face01: Face01
		{
			head = "MaskHead_B";
		};
		class Face01_camo1: Face01
		{
			identityTypes[] = {};
		};
		class Face01_camo2: Face01_camo1{};
		class Face01_camo3: Face01_camo1{};
		class Face01_camo4: Face01_camo1{};
		class Face01_camo5: Face01_camo1{};
		class Face01_camo6: Face01_camo1{};
		class Face02: Face02
		{
			head = "MaskHead_B";
		};
		class Face02_camo1: Face02
		{
			identityTypes[] = {};
		};
		class Face02_camo2: Face02_camo1{};
		class Face02_camo3: Face02_camo1{};
		class Face02_camo4: Face02_camo1{};
		class Face02_camo5: Face02_camo1{};
		class Face02_camo6: Face02_camo1{};
		class Face03: Face03
		{
			head = "MaskHead_B";
		};
		class Face03_camo1: Face03
		{
			identityTypes[] = {};
		};
		class Face03_camo2: Face03_camo1{};
		class Face03_camo3: Face03_camo1{};
		class Face03_camo4: Face03_camo1{};
		class Face03_camo5: Face03_camo1{};
		class Face03_camo6: Face03_camo1{};
		class Face04: Face04
		{
			head = "MaskHead_B";
		};
		class Face04_camo1: Face04
		{
			identityTypes[] = {};
		};
		class Face04_camo2: Face04_camo1{};
		class Face04_camo3: Face04_camo1{};
		class Face04_camo4: Face04_camo1{};
		class Face04_camo5: Face04_camo1{};
		class Face04_camo6: Face04_camo1{};
		class Face05: Face05
		{
			head = "MaskHead_B";
		};
		class Face05_camo1: Face05
		{
			identityTypes[] = {};
		};
		class Face05_camo2: Face05_camo1{};
		class Face05_camo3: Face05_camo1{};
		class Face05_camo4: Face05_camo1{};
		class Face05_camo5: Face05_camo1{};
		class Face05_camo6: Face05_camo1{};
		class Face06: Face06
		{
			head = "MaskHead_B";
		};
		class Face06_camo1: Face06
		{
			identityTypes[] = {};
		};
		class Face06_camo2: Face06_camo1{};
		class Face06_camo3: Face06_camo1{};
		class Face06_camo4: Face06_camo1{};
		class Face06_camo5: Face06_camo1{};
		class Face06_camo6: Face06_camo1{};
		class Face07: Face07
		{
			head = "MaskHead_B";
		};
		class Face07_camo1: Face07
		{
			identityTypes[] = {};
		};
		class Face07_camo2: Face07_camo1{};
		class Face07_camo3: Face07_camo1{};
		class Face07_camo4: Face07_camo1{};
		class Face07_camo5: Face07_camo1{};
		class Face07_camo6: Face07_camo1{};
		class Face08: Face08
		{
			head = "MaskHead_B";
		};
		class Face08_camo1: Face08
		{
			identityTypes[] = {};
		};
		class Face08_camo2: Face08_camo1{};
		class Face08_camo3: Face08_camo1{};
		class Face08_camo4: Face08_camo1{};
		class Face08_camo5: Face08_camo1{};
		class Face08_camo6: Face08_camo1{};
		class Face09: Face09
		{
			head = "MaskHead_B";
		};
		class Face09_camo1: Face09
		{
			identityTypes[] = {};
		};
		class Face09_camo2: Face09_camo1{};
		class Face09_camo3: Face09_camo1{};
		class Face09_camo4: Face09_camo1{};
		class Face09_camo5: Face09_camo1{};
		class Face09_camo6: Face09_camo1{};
		class Face10: Face10
		{
			head = "MaskHead_B";
		};
		class Face10_camo1: Face10
		{
			identityTypes[] = {};
		};
		class Face10_camo2: Face10_camo1{};
		class Face10_camo3: Face10_camo1{};
		class Face10_camo4: Face10_camo1{};
		class Face10_camo5: Face10_camo1{};
		class Face10_camo6: Face10_camo1{};
		class Face11: Face11
		{
			head = "MaskHead_B";
		};
		class Face11_camo1: Face11
		{
			identityTypes[] = {};
		};
		class Face11_camo2: Face11_camo1{};
		class Face11_camo3: Face11_camo1{};
		class Face11_camo4: Face11_camo1{};
		class Face11_camo5: Face11_camo1{};
		class Face11_camo6: Face11_camo1{};
		class Face12: Face12
		{
			head = "MaskHead_B";
		};
		class Face12_camo1: Face12
		{
			identityTypes[] = {};
		};
		class Face12_camo2: Face12_camo1{};
		class Face12_camo3: Face12_camo1{};
		class Face12_camo4: Face12_camo1{};
		class Face12_camo5: Face12_camo1{};
		class Face12_camo6: Face12_camo1{};
		class Face13: Face13
		{
			head = "MaskHead_B";
		};
		class Face13_camo1: Face13
		{
			identityTypes[] = {};
		};
		class Face13_camo2: Face13_camo1{};
		class Face13_camo3: Face13_camo1{};
		class Face13_camo4: Face13_camo1{};
		class Face13_camo5: Face13_camo1{};
		class Face13_camo6: Face13_camo1{};
		class Face14: Face14
		{
			head = "MaskHead_B";
		};
		class Face14_camo1: Face14
		{
			identityTypes[] = {};
		};
		class Face14_camo2: Face14_camo1{};
		class Face14_camo3: Face14_camo1{};
		class Face14_camo4: Face14_camo1{};
		class Face14_camo5: Face14_camo1{};
		class Face14_camo6: Face14_camo1{};
		class Face15: Face15
		{
			head = "MaskHead_B";
		};
		class Face15_camo1: Face15
		{
			identityTypes[] = {};
		};
		class Face15_camo2: Face15_camo1{};
		class Face15_camo3: Face15_camo1{};
		class Face15_camo4: Face15_camo1{};
		class Face15_camo5: Face15_camo1{};
		class Face15_camo6: Face15_camo1{};
		class Face16: Face16
		{
			head = "MaskHead_B";
		};
		class Face16_camo1: Face16
		{
			identityTypes[] = {};
		};
		class Face16_camo2: Face16_camo1{};
		class Face16_camo3: Face16_camo1{};
		class Face16_camo4: Face16_camo1{};
		class Face16_camo5: Face16_camo1{};
		class Face16_camo6: Face16_camo1{};
		class Face17: Face17
		{
			head = "MaskHead_B";
		};
		class Face17_camo1: Face17
		{
			identityTypes[] = {};
		};
		class Face17_camo2: Face17_camo1{};
		class Face17_camo3: Face17_camo1{};
		class Face17_camo4: Face17_camo1{};
		class Face17_camo5: Face17_camo1{};
		class Face17_camo6: Face17_camo1{};
		class Face18: Face18
		{
			head = "MaskHead_B";
		};
		class Face18_camo1: Face18
		{
			identityTypes[] = {};
		};
		class Face18_camo2: Face18_camo1{};
		class Face18_camo3: Face18_camo1{};
		class Face18_camo4: Face18_camo1{};
		class Face18_camo5: Face18_camo1{};
		class Face18_camo6: Face18_camo1{};
		class Face19: Face19
		{
			head = "MaskHead_B";
		};
		class Face19_camo1: Face19
		{
			identityTypes[] = {};
		};
		class Face19_camo2: Face19_camo1{};
		class Face19_camo3: Face19_camo1{};
		class Face19_camo4: Face19_camo1{};
		class Face19_camo5: Face19_camo1{};
		class Face19_camo6: Face19_camo1{};
		class Face20: Face20
		{
			head = "MaskHead_B";
		};
		class Face20_camo1: Face20
		{
			identityTypes[] = {};
		};
		class Face20_camo2: Face20_camo1{};
		class Face20_camo3: Face20_camo1{};
		class Face20_camo4: Face20_camo1{};
		class Face20_camo5: Face20_camo1{};
		class Face20_camo6: Face20_camo1{};
		class Face21: Face21
		{
			head = "MaskHead_B";
		};
		class Face21_camo1: Face21
		{
			identityTypes[] = {};
		};
		class Face21_camo2: Face21_camo1{};
		class Face21_camo3: Face21_camo1{};
		class Face21_camo4: Face21_camo1{};
		class Face21_camo5: Face21_camo1{};
		class Face21_camo6: Face21_camo1{};
		class Face22: Face22
		{
			head = "MaskHead_B";
		};
		class Face22_camo1: Face22
		{
			identityTypes[] = {};
		};
		class Face22_camo2: Face22_camo1{};
		class Face22_camo3: Face22_camo1{};
		class Face22_camo4: Face22_camo1{};
		class Face22_camo5: Face22_camo1{};
		class Face22_camo6: Face22_camo1{};
		class Face23: Face23
		{
			head = "MaskHead_B";
		};
		class Face23_camo1: Face23
		{
			identityTypes[] = {};
		};
		class Face23_camo2: Face23_camo1{};
		class Face23_camo3: Face23_camo1{};
		class Face23_camo4: Face23_camo1{};
		class Face23_camo5: Face23_camo1{};
		class Face23_camo6: Face23_camo1{};
		class Face24: Face24
		{
			head = "MaskHead_B";
		};
		class Face24_camo1: Face24
		{
			identityTypes[] = {};
		};
		class Face24_camo2: Face24_camo1{};
		class Face24_camo3: Face24_camo1{};
		class Face24_camo4: Face24_camo1{};
		class Face24_camo5: Face24_camo1{};
		class Face24_camo6: Face24_camo1{};
		class Face25: Face25
		{
			head = "MaskHead_B";
		};
		class Face25_camo1: Face25
		{
			identityTypes[] = {};
		};
		class Face25_camo2: Face25_camo1{};
		class Face25_camo3: Face25_camo1{};
		class Face25_camo4: Face25_camo1{};
		class Face25_camo5: Face25_camo1{};
		class Face25_camo6: Face25_camo1{};
		class Face26: Face26
		{
			head = "MaskHead_B_Black";
		};
		class Face26_camo1: Face26
		{
			identityTypes[] = {};
		};
		class Face26_camo2: Face26_camo1{};
		class Face26_camo3: Face26_camo1{};
		class Face26_camo4: Face26_camo1{};
		class Face26_camo5: Face26_camo1{};
		class Face26_camo6: Face26_camo1{};
		class Face27: Face27
		{
			head = "MaskHead_B_Black";
		};
		class Face27_camo1: Face27
		{
			identityTypes[] = {};
		};
		class Face27_camo2: Face27_camo1{};
		class Face27_camo3: Face27_camo1{};
		class Face27_camo4: Face27_camo1{};
		class Face27_camo5: Face27_camo1{};
		class Face27_camo6: Face27_camo1{};
		class Face28: Face28
		{
			head = "MaskHead_B_Black";
		};
		class Face28_camo1: Face28
		{
			identityTypes[] = {};
		};
		class Face28_camo2: Face28_camo1{};
		class Face28_camo3: Face28_camo1{};
		class Face28_camo4: Face28_camo1{};
		class Face28_camo5: Face28_camo1{};
		class Face28_camo6: Face28_camo1{};
		class Face29: Face29
		{
			head = "MaskHead_B_Black";
		};
		class Face29_camo1: Face29
		{
			identityTypes[] = {};
		};
		class Face29_camo2: Face29_camo1{};
		class Face29_camo3: Face29_camo1{};
		class Face29_camo4: Face29_camo1{};
		class Face29_camo5: Face29_camo1{};
		class Face29_camo6: Face29_camo1{};
		class Face30: Face30
		{
			head = "MaskHead_B_Black";
		};
		class Face30_camo1: Face30
		{
			identityTypes[] = {};
		};
		class Face30_camo2: Face30_camo1{};
		class Face30_camo3: Face30_camo1{};
		class Face30_camo4: Face30_camo1{};
		class Face30_camo5: Face30_camo1{};
		class Face30_camo6: Face30_camo1{};
		class Face31: Face31
		{
			head = "MaskHead_B_Black";
		};
		class Face31_camo1: Face31
		{
			identityTypes[] = {};
		};
		class Face31_camo2: Face31_camo1{};
		class Face31_camo3: Face31_camo1{};
		class Face31_camo4: Face31_camo1{};
		class Face31_camo5: Face31_camo1{};
		class Face31_camo6: Face31_camo1{};
		class Face32: Face32
		{
			head = "MaskHead_B_Black";
		};
		class Face32_camo1: Face32
		{
			identityTypes[] = {};
		};
		class Face32_camo2: Face32_camo1{};
		class Face32_camo3: Face32_camo1{};
		class Face32_camo4: Face32_camo1{};
		class Face32_camo5: Face32_camo1{};
		class Face32_camo6: Face32_camo1{};
		class Face33: Face33
		{
			head = "MaskHead_B_Black";
		};
		class Face33_camo1: Face33
		{
			identityTypes[] = {};
		};
		class Face33_camo2: Face33_camo1{};
		class Face33_camo3: Face33_camo1{};
		class Face33_camo4: Face33_camo1{};
		class Face33_camo5: Face33_camo1{};
		class Face33_camo6: Face33_camo1{};
		class Face34: Face34
		{
			head = "MaskHead_B_Black";
		};
		class Face34_camo1: Face34
		{
			identityTypes[] = {};
		};
		class Face34_camo2: Face34_camo1{};
		class Face34_camo3: Face34_camo1{};
		class Face34_camo4: Face34_camo1{};
		class Face34_camo5: Face34_camo1{};
		class Face34_camo6: Face34_camo1{};
		class Face35: Face35
		{
			head = "MaskHead_B_Black";
		};
		class Face35_camo1: Face35
		{
			identityTypes[] = {};
		};
		class Face35_camo2: Face35_camo1{};
		class Face35_camo3: Face35_camo1{};
		class Face35_camo4: Face35_camo1{};
		class Face35_camo5: Face35_camo1{};
		class Face35_camo6: Face35_camo1{};
		class Face36: Face36
		{
			head = "MaskHead_B_Black";
		};
		class Face36_camo1: Face36
		{
			identityTypes[] = {};
		};
		class Face36_camo2: Face36_camo1{};
		class Face36_camo3: Face36_camo1{};
		class Face36_camo4: Face36_camo1{};
		class Face36_camo5: Face36_camo1{};
		class Face36_camo6: Face36_camo1{};
		class Face37: Face37
		{
			head = "MaskHead_B_Black";
		};
		class Face37_camo1: Face37
		{
			identityTypes[] = {};
		};
		class Face37_camo2: Face37_camo1{};
		class Face37_camo3: Face37_camo1{};
		class Face37_camo4: Face37_camo1{};
		class Face37_camo5: Face37_camo1{};
		class Face37_camo6: Face37_camo1{};
		class Face38: Face38
		{
			head = "MaskHead_B_Black";
		};
		class Face38_camo1: Face38
		{
			identityTypes[] = {};
		};
		class Face38_camo2: Face38_camo1{};
		class Face38_camo3: Face38_camo1{};
		class Face38_camo4: Face38_camo1{};
		class Face38_camo5: Face38_camo1{};
		class Face38_camo6: Face38_camo1{};
		class Face39: Face39
		{
			head = "MaskHead_B_Black";
		};
		class Face39_camo1: Face39
		{
			identityTypes[] = {};
		};
		class Face39_camo2: Face39_camo1{};
		class Face39_camo3: Face39_camo1{};
		class Face39_camo4: Face39_camo1{};
		class Face39_camo5: Face39_camo1{};
		class Face39_camo6: Face39_camo1{};
		class Face40: Face40
		{
			head = "MaskHead_B_Black";
		};
		class Face40_camo1: Face40
		{
			identityTypes[] = {};
		};
		class Face40_camo2: Face40_camo1{};
		class Face40_camo3: Face40_camo1{};
		class Face40_camo4: Face40_camo1{};
		class Face40_camo5: Face40_camo1{};
		class Face40_camo6: Face40_camo1{};
		class Face41: Face41
		{
			head = "MaskHead_B";
		};
		class Face41_camo1: Face41
		{
			identityTypes[] = {};
		};
		class Face41_camo2: Face41_camo1{};
		class Face41_camo3: Face41_camo1{};
		class Face41_camo4: Face41_camo1{};
		class Face41_camo5: Face41_camo1{};
		class Face41_camo6: Face41_camo1{};
		class Face42: Face42
		{
			head = "MaskHead_B";
		};
		class Face42_camo1: Face42
		{
			identityTypes[] = {};
		};
		class Face42_camo2: Face42_camo1{};
		class Face42_camo3: Face42_camo1{};
		class Face42_camo4: Face42_camo1{};
		class Face42_camo5: Face42_camo1{};
		class Face42_camo6: Face42_camo1{};
		class Face43: Face43
		{
			head = "MaskHead_B";
		};
		class Face43_camo1: Face43
		{
			identityTypes[] = {};
		};
		class Face43_camo2: Face43_camo1{};
		class Face43_camo3: Face43_camo1{};
		class Face43_camo4: Face43_camo1{};
		class Face43_camo5: Face43_camo1{};
		class Face43_camo6: Face43_camo1{};
		class Face44: Face44
		{
			head = "MaskHead_B";
		};
		class Face44_camo1: Face44
		{
			identityTypes[] = {};
		};
		class Face44_camo2: Face44_camo1{};
		class Face44_camo3: Face44_camo1{};
		class Face44_camo4: Face44_camo1{};
		class Face44_camo5: Face44_camo1{};
		class Face44_camo6: Face44_camo1{};
		class Face45: Face45
		{
			head = "MaskHead_B";
		};
		class Face45_camo1: Face45
		{
			identityTypes[] = {};
		};
		class Face45_camo2: Face45_camo1{};
		class Face45_camo3: Face45_camo1{};
		class Face45_camo4: Face45_camo1{};
		class Face45_camo5: Face45_camo1{};
		class Face45_camo6: Face45_camo1{};
		class Face46: Face46
		{
			head = "MaskHead_B";
		};
		class Face46_camo1: Face46
		{
			identityTypes[] = {};
		};
		class Face46_camo2: Face46_camo1{};
		class Face46_camo3: Face46_camo1{};
		class Face46_camo4: Face46_camo1{};
		class Face46_camo5: Face46_camo1{};
		class Face46_camo6: Face46_camo1{};
		class Face47: Face47
		{
			head = "MaskHead_B";
		};
		class Face47_camo1: Face47
		{
			identityTypes[] = {};
		};
		class Face47_camo2: Face47_camo1{};
		class Face47_camo3: Face47_camo1{};
		class Face47_camo4: Face47_camo1{};
		class Face47_camo5: Face47_camo1{};
		class Face47_camo6: Face47_camo1{};
		class Face48: Face48
		{
			head = "MaskHead_B";
		};
		class Face48_camo1: Face48
		{
			identityTypes[] = {};
		};
		class Face48_camo2: Face48_camo1{};
		class Face48_camo3: Face48_camo1{};
		class Face48_camo4: Face48_camo1{};
		class Face48_camo5: Face48_camo1{};
		class Face48_camo6: Face48_camo1{};
		class Face49: Face49
		{
			head = "MaskHead_B";
		};
		class Face49_camo1: Face49
		{
			identityTypes[] = {};
		};
		class Face49_camo2: Face49_camo1{};
		class Face49_camo3: Face49_camo1{};
		class Face49_camo4: Face49_camo1{};
		class Face49_camo5: Face49_camo1{};
		class Face49_camo6: Face49_camo1{};
		class Face50: Face50
		{
			head = "MaskHead_B";
		};
		class Face50_camo1: Face50
		{
			identityTypes[] = {};
		};
		class Face50_camo2: Face50_camo1{};
		class Face50_camo3: Face50_camo1{};
		class Face50_camo4: Face50_camo1{};
		class Face50_camo5: Face50_camo1{};
		class Face50_camo6: Face50_camo1{};
		class Face52: Face52
		{
			head = "MaskHead_B";
		};
		class Face52_camo1: Face52
		{
			identityTypes[] = {};
		};
		class Face52_camo2: Face52_camo1{};
		class Face52_camo3: Face52_camo1{};
		class Face52_camo4: Face52_camo1{};
		class Face52_camo5: Face52_camo1{};
		class Face52_camo6: Face52_camo1{};
		class Face54: Face54
		{
			head = "MaskHead_B";
		};
		class Face54_camo1: Face54
		{
			identityTypes[] = {};
		};
		class Face54_camo2: Face54_camo1{};
		class Face54_camo3: Face54_camo1{};
		class Face54_camo4: Face54_camo1{};
		class Face54_camo5: Face54_camo1{};
		class Face54_camo6: Face54_camo1{};
		class Face55: Face55
		{
			head = "MaskHead_B";
		};
		class Face55_camo1: Face55
		{
			identityTypes[] = {};
		};
		class Face55_camo2: Face55_camo1{};
		class Face55_camo3: Face55_camo1{};
		class Face55_camo4: Face55_camo1{};
		class Face55_camo5: Face55_camo1{};
		class Face55_camo6: Face55_camo1{};
		class Face56: Face56
		{
			head = "MaskHead_B";
		};
		class Face56_camo1: Face56
		{
			identityTypes[] = {};
		};
		class Face56_camo2: Face56_camo1{};
		class Face56_camo3: Face56_camo1{};
		class Face56_camo4: Face56_camo1{};
		class Face56_camo5: Face56_camo1{};
		class Face56_camo6: Face56_camo1{};
		class Face57: Face57
		{
			head = "MaskHead_B";
		};
		class Face57_camo1: Face57
		{
			identityTypes[] = {};
		};
		class Face57_camo2: Face57_camo1{};
		class Face57_camo3: Face57_camo1{};
		class Face57_camo4: Face57_camo1{};
		class Face57_camo5: Face57_camo1{};
		class Face57_camo6: Face57_camo1{};
		class Face58: Face58
		{
			head = "MaskHead_B";
		};
		class Face58_camo1: Face58
		{
			identityTypes[] = {};
		};
		class Face58_camo2: Face58_camo1{};
		class Face58_camo3: Face58_camo1{};
		class Face58_camo4: Face58_camo1{};
		class Face58_camo5: Face58_camo1{};
		class Face58_camo6: Face58_camo1{};
		class Face59: Face59
		{
			head = "MaskHead_B";
		};
		class Face59_camo1: Face59
		{
			identityTypes[] = {};
		};
		class Face59_camo2: Face59_camo1{};
		class Face59_camo3: Face59_camo1{};
		class Face59_camo4: Face59_camo1{};
		class Face59_camo5: Face59_camo1{};
		class Face59_camo6: Face59_camo1{};
		class Face60: Face60
		{
			head = "MaskHead_B";
		};
		class Face60_camo1: Face60
		{
			identityTypes[] = {};
		};
		class Face60_camo2: Face60_camo1{};
		class Face60_camo3: Face60_camo1{};
		class Face60_camo4: Face60_camo1{};
		class Face60_camo5: Face60_camo1{};
		class Face60_camo6: Face60_camo1{};
		class Face61: Face61
		{
			head = "MaskHead_B";
		};
		class Face61_camo1: Face61
		{
			identityTypes[] = {};
		};
		class Face61_camo2: Face61_camo1{};
		class Face61_camo3: Face61_camo1{};
		class Face61_camo4: Face61_camo1{};
		class Face61_camo5: Face61_camo1{};
		class Face61_camo6: Face61_camo1{};
		class Face62: Face62
		{
			head = "MaskHead_B";
		};
		class Face62_camo1: Face62
		{
			identityTypes[] = {};
		};
		class Face62_camo2: Face62_camo1{};
		class Face62_camo3: Face62_camo1{};
		class Face62_camo4: Face62_camo1{};
		class Face62_camo5: Face62_camo1{};
		class Face62_camo6: Face62_camo1{};
		class Face63: Face63
		{
			head = "MaskHead_B";
		};
		class Face63_camo1: Face63
		{
			identityTypes[] = {};
		};
		class Face63_camo2: Face63_camo1{};
		class Face63_camo3: Face63_camo1{};
		class Face63_camo4: Face63_camo1{};
		class Face63_camo5: Face63_camo1{};
		class Face63_camo6: Face63_camo1{};
		class Face64: Face64
		{
			head = "MaskHead_B";
		};
		class Face64_camo1: Face64
		{
			identityTypes[] = {};
		};
		class Face64_camo2: Face64_camo1{};
		class Face64_camo3: Face64_camo1{};
		class Face64_camo4: Face64_camo1{};
		class Face64_camo5: Face64_camo1{};
		class Face64_camo6: Face64_camo1{};
		class Face65: Face65
		{
			head = "MaskHead_B";
		};
		class Face65_camo1: Face65
		{
			identityTypes[] = {};
		};
		class Face65_camo2: Face65_camo1{};
		class Face65_camo3: Face65_camo1{};
		class Face65_camo4: Face65_camo1{};
		class Face65_camo5: Face65_camo1{};
		class Face65_camo6: Face65_camo1{};
		class Face66: Face66
		{
			head = "MaskHead_B";
		};
		class Face66_camo1: Face66
		{
			identityTypes[] = {};
		};
		class Face66_camo2: Face66_camo1{};
		class Face66_camo3: Face66_camo1{};
		class Face66_camo4: Face66_camo1{};
		class Face66_camo5: Face66_camo1{};
		class Face66_camo6: Face66_camo1{};
		class Face67: Face67
		{
			head = "MaskHead_B";
		};
		class Face67_camo1: Face67
		{
			identityTypes[] = {};
		};
		class Face67_camo2: Face67_camo1{};
		class Face67_camo3: Face67_camo1{};
		class Face67_camo4: Face67_camo1{};
		class Face67_camo5: Face67_camo1{};
		class Face67_camo6: Face67_camo1{};
		class Face68: Face68
		{
			head = "MaskHead_B";
		};
		class Face68_camo1: Face68
		{
			identityTypes[] = {};
		};
		class Face68_camo2: Face68_camo1{};
		class Face68_camo3: Face68_camo1{};
		class Face68_camo4: Face68_camo1{};
		class Face68_camo5: Face68_camo1{};
		class Face68_camo6: Face68_camo1{};
		class Face69: Face69
		{
			head = "MaskHead_B";
		};
		class Face69_camo1: Face69
		{
			identityTypes[] = {};
		};
		class Face69_camo2: Face69_camo1{};
		class Face69_camo3: Face69_camo1{};
		class Face69_camo4: Face69_camo1{};
		class Face69_camo5: Face69_camo1{};
		class Face69_camo6: Face69_camo1{};
		class Face70: Face70
		{
			head = "MaskHead_B";
		};
		class Face70_camo1: Face70
		{
			identityTypes[] = {};
		};
		class Face70_camo2: Face70_camo1{};
		class Face70_camo3: Face70_camo1{};
		class Face70_camo4: Face70_camo1{};
		class Face70_camo5: Face70_camo1{};
		class Face70_camo6: Face70_camo1{};
		class Face71: Face71
		{
			head = "MaskHead_B";
		};
		class Face71_camo1: Face71
		{
			identityTypes[] = {};
		};
		class Face71_camo2: Face71_camo1{};
		class Face71_camo3: Face71_camo1{};
		class Face71_camo4: Face71_camo1{};
		class Face71_camo5: Face71_camo1{};
		class Face71_camo6: Face71_camo1{};
		class Face72: Face72
		{
			head = "MaskHead_B";
		};
		class Face72_camo1: Face72
		{
			identityTypes[] = {};
		};
		class Face72_camo2: Face72_camo1{};
		class Face72_camo3: Face72_camo1{};
		class Face72_camo4: Face72_camo1{};
		class Face72_camo5: Face72_camo1{};
		class Face72_camo6: Face72_camo1{};
		class Face73: Face73
		{
			head = "MaskHead_B";
		};
		class Face73_camo1: Face73
		{
			identityTypes[] = {};
		};
		class Face73_camo2: Face73_camo1{};
		class Face73_camo3: Face73_camo1{};
		class Face73_camo4: Face73_camo1{};
		class Face73_camo5: Face73_camo1{};
		class Face73_camo6: Face73_camo1{};
		class Face74: Face74
		{
			head = "MaskHead_B";
		};
		class Face74_camo1: Face74
		{
			identityTypes[] = {};
		};
		class Face74_camo2: Face74_camo1{};
		class Face74_camo3: Face74_camo1{};
		class Face74_camo4: Face74_camo1{};
		class Face74_camo5: Face74_camo1{};
		class Face74_camo6: Face74_camo1{};
		class Face75: Face75
		{
			head = "MaskHead_B";
		};
		class Face75_camo1: Face75
		{
			identityTypes[] = {};
		};
		class Face75_camo2: Face75_camo1{};
		class Face75_camo3: Face75_camo1{};
		class Face75_camo4: Face75_camo1{};
		class Face75_camo5: Face75_camo1{};
		class Face75_camo6: Face75_camo1{};
		class Face76: Face76
		{
			head = "MaskHead_B";
		};
		class Face76_camo1: Face76
		{
			identityTypes[] = {};
		};
		class Face76_camo2: Face76_camo1{};
		class Face76_camo3: Face76_camo1{};
		class Face76_camo4: Face76_camo1{};
		class Face76_camo5: Face76_camo1{};
		class Face76_camo6: Face76_camo1{};
		class Face77: Face77
		{
			head = "MaskHead_B";
		};
		class Face77_camo1: Face77
		{
			identityTypes[] = {};
		};
		class Face77_camo2: Face77_camo1{};
		class Face77_camo3: Face77_camo1{};
		class Face77_camo4: Face77_camo1{};
		class Face77_camo5: Face77_camo1{};
		class Face77_camo6: Face77_camo1{};
		class Face78: Face78
		{
			head = "MaskHead_B_Black";
		};
		class Face78_camo1: Face78
		{
			identityTypes[] = {};
		};
		class Face78_camo2: Face78_camo1{};
		class Face78_camo3: Face78_camo1{};
		class Face78_camo4: Face78_camo1{};
		class Face78_camo5: Face78_camo1{};
		class Face78_camo6: Face78_camo1{};
		class Face79: Face79
		{
			head = "MaskHead_B_Black";
		};
		class Face79_camo1: Face79
		{
			identityTypes[] = {};
		};
		class Face79_camo2: Face79_camo1{};
		class Face79_camo3: Face79_camo1{};
		class Face79_camo4: Face79_camo1{};
		class Face79_camo5: Face79_camo1{};
		class Face79_camo6: Face79_camo1{};
		class Face80: Face80
		{
			head = "MaskHead_B_Black";
		};
		class Face80_camo1: Face80
		{
			identityTypes[] = {};
		};
		class Face80_camo2: Face80_camo1{};
		class Face80_camo3: Face80_camo1{};
		class Face80_camo4: Face80_camo1{};
		class Face80_camo5: Face80_camo1{};
		class Face80_camo6: Face80_camo1{};
		class Face81: Face81
		{
			head = "MaskHead_B_Black";
		};
		class Face81_camo1: Face81
		{
			identityTypes[] = {};
		};
		class Face81_camo2: Face81_camo1{};
		class Face81_camo3: Face81_camo1{};
		class Face81_camo4: Face81_camo1{};
		class Face81_camo5: Face81_camo1{};
		class Face81_camo6: Face81_camo1{};
		class Face82: Face82
		{
			head = "MaskHead_B_Black";
		};
		class Face82_camo1: Face82
		{
			identityTypes[] = {};
		};
		class Face82_camo2: Face82_camo1{};
		class Face82_camo3: Face82_camo1{};
		class Face82_camo4: Face82_camo1{};
		class Face82_camo5: Face82_camo1{};
		class Face82_camo6: Face82_camo1{};
		class Face83: Face83
		{
			head = "MaskHead_B_Black";
		};
		class Face83_camo1: Face83
		{
			identityTypes[] = {};
		};
		class Face83_camo2: Face83_camo1{};
		class Face83_camo3: Face83_camo1{};
		class Face83_camo4: Face83_camo1{};
		class Face83_camo5: Face83_camo1{};
		class Face83_camo6: Face83_camo1{};
		class Face84: Face84
		{
			head = "MaskHead_B_Black";
		};
		class Face84_camo1: Face84
		{
			identityTypes[] = {};
		};
		class Face84_camo2: Face84_camo1{};
		class Face84_camo3: Face84_camo1{};
		class Face84_camo4: Face84_camo1{};
		class Face84_camo5: Face84_camo1{};
		class Face84_camo6: Face84_camo1{};
		class Face85: Face85
		{
			head = "MaskHead_B";
		};
		class Face85_camo1: Face85
		{
			identityTypes[] = {};
		};
		class Face85_camo2: Face85_camo1{};
		class Face85_camo3: Face85_camo1{};
		class Face85_camo4: Face85_camo1{};
		class Face85_camo5: Face85_camo1{};
		class Face85_camo6: Face85_camo1{};
		class Face86: Face86
		{
			head = "MaskHead_B_Black";
		};
		class Face86_camo1: Face86
		{
			identityTypes[] = {};
		};
		class Face86_camo2: Face86_camo1{};
		class Face86_camo3: Face86_camo1{};
		class Face86_camo4: Face86_camo1{};
		class Face86_camo5: Face86_camo1{};
		class Face86_camo6: Face86_camo1{};
		class Face87: Face87
		{
			head = "MaskHead_B";
		};
		class Face87_camo1: Face87
		{
			identityTypes[] = {};
		};
		class Face87_camo2: Face87_camo1{};
		class Face87_camo3: Face87_camo1{};
		class Face87_camo4: Face87_camo1{};
		class Face87_camo5: Face87_camo1{};
		class Face87_camo6: Face87_camo1{};
		class Face88: Face88
		{
			head = "MaskHead_B";
		};
		class Face88_camo1: Face88
		{
			identityTypes[] = {};
		};
		class Face88_camo2: Face88_camo1{};
		class Face88_camo3: Face88_camo1{};
		class Face88_camo4: Face88_camo1{};
		class Face88_camo5: Face88_camo1{};
		class Face88_camo6: Face88_camo1{};
		class Face89: Face89
		{
			head = "MaskHead_B";
		};
		class Face89_camo1: Face89
		{
			identityTypes[] = {};
		};
		class Face89_camo2: Face89_camo1{};
		class Face89_camo3: Face89_camo1{};
		class Face89_camo4: Face89_camo1{};
		class Face89_camo5: Face89_camo1{};
		class Face89_camo6: Face89_camo1{};
		class Face90: Face90
		{
			head = "MaskHead_B";
		};
		class Face90_camo1: Face90
		{
			identityTypes[] = {};
		};
		class Face90_camo2: Face90_camo1{};
		class Face90_camo3: Face90_camo1{};
		class Face90_camo4: Face90_camo1{};
		class Face90_camo5: Face90_camo1{};
		class Face90_camo6: Face90_camo1{};
		class Face91: Face91
		{
			head = "MaskHead_B";
		};
		class Face91_camo1: Face91
		{
			identityTypes[] = {};
		};
		class Face91_camo2: Face91_camo1{};
		class Face91_camo3: Face91_camo1{};
		class Face91_camo4: Face91_camo1{};
		class Face91_camo5: Face91_camo1{};
		class Face91_camo6: Face91_camo1{};
		class Face92: Face92
		{
			head = "MaskHead_B";
		};
		class Face92_camo1: Face92
		{
			identityTypes[] = {};
		};
		class Face92_camo2: Face92_camo1{};
		class Face92_camo3: Face92_camo1{};
		class Face92_camo4: Face92_camo1{};
		class Face92_camo5: Face92_camo1{};
		class Face92_camo6: Face92_camo1{};
		class Face93: Face93
		{
			head = "MaskHead_B";
		};
		class Face93_camo1: Face93
		{
			identityTypes[] = {};
		};
		class Face93_camo2: Face93_camo1{};
		class Face93_camo3: Face93_camo1{};
		class Face93_camo4: Face93_camo1{};
		class Face93_camo5: Face93_camo1{};
		class Face93_camo6: Face93_camo1{};
		class Face94: Face94
		{
			head = "MaskHead_B";
		};
		class Face94_camo1: Face94
		{
			identityTypes[] = {};
		};
		class Face94_camo2: Face94_camo1{};
		class Face94_camo3: Face94_camo1{};
		class Face94_camo4: Face94_camo1{};
		class Face94_camo5: Face94_camo1{};
		class Face94_camo6: Face94_camo1{};
		class Face95: Face95
		{
			head = "MaskHead_B";
		};
		class Face95_camo1: Face95
		{
			identityTypes[] = {};
		};
		class Face95_camo2: Face95_camo1{};
		class Face95_camo3: Face95_camo1{};
		class Face95_camo4: Face95_camo1{};
		class Face95_camo5: Face95_camo1{};
		class Face95_camo6: Face95_camo1{};
		class Face96: Face96
		{
			head = "MaskHead_B";
		};
		class Face96_camo1: Face96
		{
			identityTypes[] = {};
		};
		class Face96_camo2: Face96_camo1{};
		class Face96_camo3: Face96_camo1{};
		class Face96_camo4: Face96_camo1{};
		class Face96_camo5: Face96_camo1{};
		class Face96_camo6: Face96_camo1{};
		class Face97: Face97
		{
			head = "MaskHead_B";
		};
		class Face97_camo1: Face97
		{
			identityTypes[] = {};
		};
		class Face97_camo2: Face97_camo1{};
		class Face97_camo3: Face97_camo1{};
		class Face97_camo4: Face97_camo1{};
		class Face97_camo5: Face97_camo1{};
		class Face97_camo6: Face97_camo1{};
		class Face98: Face98
		{
			head = "MaskHead_B";
		};
		class Face98_camo1: Face98
		{
			identityTypes[] = {};
		};
		class Face98_camo2: Face98_camo1{};
		class Face98_camo3: Face98_camo1{};
		class Face98_camo4: Face98_camo1{};
		class Face98_camo5: Face98_camo1{};
		class Face98_camo6: Face98_camo1{};
		class Face99: Face99
		{
			head = "MaskHead_B";
		};
		class Face99_camo1: Face99
		{
			identityTypes[] = {};
		};
		class Face99_camo2: Face99_camo1{};
		class Face99_camo3: Face99_camo1{};
		class Face99_camo4: Face99_camo1{};
		class Face99_camo5: Face99_camo1{};
		class Face99_camo6: Face99_camo1{};
		class Face100: Face100
		{
			head = "MaskHead_B";
		};
		class Face100_camo1: Face100
		{
			identityTypes[] = {};
		};
		class Face100_camo2: Face100_camo1{};
		class Face100_camo3: Face100_camo1{};
		class Face100_camo4: Face100_camo1{};
		class Face100_camo5: Face100_camo1{};
		class Face100_camo6: Face100_camo1{};
		class Face101: Face101
		{
			head = "MaskHead_B";
		};
		class Face101_camo1: Face101
		{
			identityTypes[] = {};
		};
		class Face101_camo2: Face101_camo1{};
		class Face101_camo3: Face101_camo1{};
		class Face101_camo4: Face101_camo1{};
		class Face101_camo5: Face101_camo1{};
		class Face101_camo6: Face101_camo1{};
		class Face102: Face102
		{
			head = "MaskHead_B";
		};
		class Face102_camo1: Face102
		{
			identityTypes[] = {};
		};
		class Face102_camo2: Face102_camo1{};
		class Face102_camo3: Face102_camo1{};
		class Face102_camo4: Face102_camo1{};
		class Face102_camo5: Face102_camo1{};
		class Face102_camo6: Face102_camo1{};
		class Face103: Face103
		{
			head = "MaskHead_B";
		};
		class Face103_camo1: Face103
		{
			identityTypes[] = {};
		};
		class Face103_camo2: Face103_camo1{};
		class Face103_camo3: Face103_camo1{};
		class Face103_camo4: Face103_camo1{};
		class Face103_camo5: Face103_camo1{};
		class Face103_camo6: Face103_camo1{};
		class Face104: Face104
		{
			head = "MaskHead_B";
		};
		class Face104_camo1: Face104
		{
			identityTypes[] = {};
		};
		class Face104_camo2: Face104_camo1{};
		class Face104_camo3: Face104_camo1{};
		class Face104_camo4: Face104_camo1{};
		class Face104_camo5: Face104_camo1{};
		class Face104_camo6: Face104_camo1{};
		class Face105: Face105
		{
			head = "MaskHead_B";
		};
		class Face105_camo1: Face105
		{
			identityTypes[] = {};
		};
		class Face105_camo2: Face105_camo1{};
		class Face105_camo3: Face105_camo1{};
		class Face105_camo4: Face105_camo1{};
		class Face105_camo5: Face105_camo1{};
		class Face105_camo6: Face105_camo1{};
		class Face106: Face106
		{
			head = "MaskHead_B";
		};
		class Face106_camo1: Face106
		{
			identityTypes[] = {};
		};
		class Face106_camo2: Face106_camo1{};
		class Face106_camo3: Face106_camo1{};
		class Face106_camo4: Face106_camo1{};
		class Face106_camo5: Face106_camo1{};
		class Face106_camo6: Face106_camo1{};
		class Face107: Face107
		{
			head = "MaskHead_B";
		};
		class Face107_camo1: Face107
		{
			identityTypes[] = {};
		};
		class Face107_camo2: Face107_camo1{};
		class Face107_camo3: Face107_camo1{};
		class Face107_camo4: Face107_camo1{};
		class Face107_camo5: Face107_camo1{};
		class Face107_camo6: Face107_camo1{};
	};
	class HeadMask3Khaki: Man
	{
		class default: Default
		{
			name = "$STR_FN_HeadMask3Khaki_default";
			head = "MaskHead";
			identityTypes[] = {};
		};
		class Custom: Custom
		{
			head = "MaskHead";
		};
		class Face01: Face01
		{
			head = "MaskHead";
		};
		class Face01_camo1: Face01
		{
			identityTypes[] = {};
		};
		class Face01_camo2: Face01_camo1{};
		class Face01_camo3: Face01_camo1{};
		class Face01_camo4: Face01_camo1{};
		class Face01_camo5: Face01_camo1{};
		class Face01_camo6: Face01_camo1{};
		class Face02: Face02
		{
			head = "MaskHead";
		};
		class Face02_camo1: Face02
		{
			identityTypes[] = {};
		};
		class Face02_camo2: Face02_camo1{};
		class Face02_camo3: Face02_camo1{};
		class Face02_camo4: Face02_camo1{};
		class Face02_camo5: Face02_camo1{};
		class Face02_camo6: Face02_camo1{};
		class Face03: Face03
		{
			head = "MaskHead";
		};
		class Face03_camo1: Face03
		{
			identityTypes[] = {};
		};
		class Face03_camo2: Face03_camo1{};
		class Face03_camo3: Face03_camo1{};
		class Face03_camo4: Face03_camo1{};
		class Face03_camo5: Face03_camo1{};
		class Face03_camo6: Face03_camo1{};
		class Face04: Face04
		{
			head = "MaskHead";
		};
		class Face04_camo1: Face04
		{
			identityTypes[] = {};
		};
		class Face04_camo2: Face04_camo1{};
		class Face04_camo3: Face04_camo1{};
		class Face04_camo4: Face04_camo1{};
		class Face04_camo5: Face04_camo1{};
		class Face04_camo6: Face04_camo1{};
		class Face05: Face05
		{
			head = "MaskHead";
		};
		class Face05_camo1: Face05
		{
			identityTypes[] = {};
		};
		class Face05_camo2: Face05_camo1{};
		class Face05_camo3: Face05_camo1{};
		class Face05_camo4: Face05_camo1{};
		class Face05_camo5: Face05_camo1{};
		class Face05_camo6: Face05_camo1{};
		class Face06: Face06
		{
			head = "MaskHead";
		};
		class Face06_camo1: Face06
		{
			identityTypes[] = {};
		};
		class Face06_camo2: Face06_camo1{};
		class Face06_camo3: Face06_camo1{};
		class Face06_camo4: Face06_camo1{};
		class Face06_camo5: Face06_camo1{};
		class Face06_camo6: Face06_camo1{};
		class Face07: Face07
		{
			head = "MaskHead";
		};
		class Face07_camo1: Face07
		{
			identityTypes[] = {};
		};
		class Face07_camo2: Face07_camo1{};
		class Face07_camo3: Face07_camo1{};
		class Face07_camo4: Face07_camo1{};
		class Face07_camo5: Face07_camo1{};
		class Face07_camo6: Face07_camo1{};
		class Face08: Face08
		{
			head = "MaskHead";
		};
		class Face08_camo1: Face08
		{
			identityTypes[] = {};
		};
		class Face08_camo2: Face08_camo1{};
		class Face08_camo3: Face08_camo1{};
		class Face08_camo4: Face08_camo1{};
		class Face08_camo5: Face08_camo1{};
		class Face08_camo6: Face08_camo1{};
		class Face09: Face09
		{
			head = "MaskHead";
		};
		class Face09_camo1: Face09
		{
			identityTypes[] = {};
		};
		class Face09_camo2: Face09_camo1{};
		class Face09_camo3: Face09_camo1{};
		class Face09_camo4: Face09_camo1{};
		class Face09_camo5: Face09_camo1{};
		class Face09_camo6: Face09_camo1{};
		class Face10: Face10
		{
			head = "MaskHead";
		};
		class Face10_camo1: Face10
		{
			identityTypes[] = {};
		};
		class Face10_camo2: Face10_camo1{};
		class Face10_camo3: Face10_camo1{};
		class Face10_camo4: Face10_camo1{};
		class Face10_camo5: Face10_camo1{};
		class Face10_camo6: Face10_camo1{};
		class Face11: Face11
		{
			head = "MaskHead";
		};
		class Face11_camo1: Face11
		{
			identityTypes[] = {};
		};
		class Face11_camo2: Face11_camo1{};
		class Face11_camo3: Face11_camo1{};
		class Face11_camo4: Face11_camo1{};
		class Face11_camo5: Face11_camo1{};
		class Face11_camo6: Face11_camo1{};
		class Face12: Face12
		{
			head = "MaskHead";
		};
		class Face12_camo1: Face12
		{
			identityTypes[] = {};
		};
		class Face12_camo2: Face12_camo1{};
		class Face12_camo3: Face12_camo1{};
		class Face12_camo4: Face12_camo1{};
		class Face12_camo5: Face12_camo1{};
		class Face12_camo6: Face12_camo1{};
		class Face13: Face13
		{
			head = "MaskHead";
		};
		class Face13_camo1: Face13
		{
			identityTypes[] = {};
		};
		class Face13_camo2: Face13_camo1{};
		class Face13_camo3: Face13_camo1{};
		class Face13_camo4: Face13_camo1{};
		class Face13_camo5: Face13_camo1{};
		class Face13_camo6: Face13_camo1{};
		class Face14: Face14
		{
			head = "MaskHead";
		};
		class Face14_camo1: Face14
		{
			identityTypes[] = {};
		};
		class Face14_camo2: Face14_camo1{};
		class Face14_camo3: Face14_camo1{};
		class Face14_camo4: Face14_camo1{};
		class Face14_camo5: Face14_camo1{};
		class Face14_camo6: Face14_camo1{};
		class Face15: Face15
		{
			head = "MaskHead";
		};
		class Face15_camo1: Face15
		{
			identityTypes[] = {};
		};
		class Face15_camo2: Face15_camo1{};
		class Face15_camo3: Face15_camo1{};
		class Face15_camo4: Face15_camo1{};
		class Face15_camo5: Face15_camo1{};
		class Face15_camo6: Face15_camo1{};
		class Face16: Face16
		{
			head = "MaskHead";
		};
		class Face16_camo1: Face16
		{
			identityTypes[] = {};
		};
		class Face16_camo2: Face16_camo1{};
		class Face16_camo3: Face16_camo1{};
		class Face16_camo4: Face16_camo1{};
		class Face16_camo5: Face16_camo1{};
		class Face16_camo6: Face16_camo1{};
		class Face17: Face17
		{
			head = "MaskHead";
		};
		class Face17_camo1: Face17
		{
			identityTypes[] = {};
		};
		class Face17_camo2: Face17_camo1{};
		class Face17_camo3: Face17_camo1{};
		class Face17_camo4: Face17_camo1{};
		class Face17_camo5: Face17_camo1{};
		class Face17_camo6: Face17_camo1{};
		class Face18: Face18
		{
			head = "MaskHead";
		};
		class Face18_camo1: Face18
		{
			identityTypes[] = {};
		};
		class Face18_camo2: Face18_camo1{};
		class Face18_camo3: Face18_camo1{};
		class Face18_camo4: Face18_camo1{};
		class Face18_camo5: Face18_camo1{};
		class Face18_camo6: Face18_camo1{};
		class Face19: Face19
		{
			head = "MaskHead";
		};
		class Face19_camo1: Face19
		{
			identityTypes[] = {};
		};
		class Face19_camo2: Face19_camo1{};
		class Face19_camo3: Face19_camo1{};
		class Face19_camo4: Face19_camo1{};
		class Face19_camo5: Face19_camo1{};
		class Face19_camo6: Face19_camo1{};
		class Face20: Face20
		{
			head = "MaskHead";
		};
		class Face20_camo1: Face20
		{
			identityTypes[] = {};
		};
		class Face20_camo2: Face20_camo1{};
		class Face20_camo3: Face20_camo1{};
		class Face20_camo4: Face20_camo1{};
		class Face20_camo5: Face20_camo1{};
		class Face20_camo6: Face20_camo1{};
		class Face21: Face21
		{
			head = "MaskHead";
		};
		class Face21_camo1: Face21
		{
			identityTypes[] = {};
		};
		class Face21_camo2: Face21_camo1{};
		class Face21_camo3: Face21_camo1{};
		class Face21_camo4: Face21_camo1{};
		class Face21_camo5: Face21_camo1{};
		class Face21_camo6: Face21_camo1{};
		class Face22: Face22
		{
			head = "MaskHead";
		};
		class Face22_camo1: Face22
		{
			identityTypes[] = {};
		};
		class Face22_camo2: Face22_camo1{};
		class Face22_camo3: Face22_camo1{};
		class Face22_camo4: Face22_camo1{};
		class Face22_camo5: Face22_camo1{};
		class Face22_camo6: Face22_camo1{};
		class Face23: Face23
		{
			head = "MaskHead";
		};
		class Face23_camo1: Face23
		{
			identityTypes[] = {};
		};
		class Face23_camo2: Face23_camo1{};
		class Face23_camo3: Face23_camo1{};
		class Face23_camo4: Face23_camo1{};
		class Face23_camo5: Face23_camo1{};
		class Face23_camo6: Face23_camo1{};
		class Face24: Face24
		{
			head = "MaskHead";
		};
		class Face24_camo1: Face24
		{
			identityTypes[] = {};
		};
		class Face24_camo2: Face24_camo1{};
		class Face24_camo3: Face24_camo1{};
		class Face24_camo4: Face24_camo1{};
		class Face24_camo5: Face24_camo1{};
		class Face24_camo6: Face24_camo1{};
		class Face25: Face25
		{
			head = "MaskHead";
		};
		class Face25_camo1: Face25
		{
			identityTypes[] = {};
		};
		class Face25_camo2: Face25_camo1{};
		class Face25_camo3: Face25_camo1{};
		class Face25_camo4: Face25_camo1{};
		class Face25_camo5: Face25_camo1{};
		class Face25_camo6: Face25_camo1{};
		class Face26: Face26
		{
			head = "MaskHead_Black";
		};
		class Face26_camo1: Face26
		{
			identityTypes[] = {};
		};
		class Face26_camo2: Face26_camo1{};
		class Face26_camo3: Face26_camo1{};
		class Face26_camo4: Face26_camo1{};
		class Face26_camo5: Face26_camo1{};
		class Face26_camo6: Face26_camo1{};
		class Face27: Face27
		{
			head = "MaskHead_Black";
		};
		class Face27_camo1: Face27
		{
			identityTypes[] = {};
		};
		class Face27_camo2: Face27_camo1{};
		class Face27_camo3: Face27_camo1{};
		class Face27_camo4: Face27_camo1{};
		class Face27_camo5: Face27_camo1{};
		class Face27_camo6: Face27_camo1{};
		class Face28: Face28
		{
			head = "MaskHead_Black";
		};
		class Face28_camo1: Face28
		{
			identityTypes[] = {};
		};
		class Face28_camo2: Face28_camo1{};
		class Face28_camo3: Face28_camo1{};
		class Face28_camo4: Face28_camo1{};
		class Face28_camo5: Face28_camo1{};
		class Face28_camo6: Face28_camo1{};
		class Face29: Face29
		{
			head = "MaskHead_Black";
		};
		class Face29_camo1: Face29
		{
			identityTypes[] = {};
		};
		class Face29_camo2: Face29_camo1{};
		class Face29_camo3: Face29_camo1{};
		class Face29_camo4: Face29_camo1{};
		class Face29_camo5: Face29_camo1{};
		class Face29_camo6: Face29_camo1{};
		class Face30: Face30
		{
			head = "MaskHead_Black";
		};
		class Face30_camo1: Face30
		{
			identityTypes[] = {};
		};
		class Face30_camo2: Face30_camo1{};
		class Face30_camo3: Face30_camo1{};
		class Face30_camo4: Face30_camo1{};
		class Face30_camo5: Face30_camo1{};
		class Face30_camo6: Face30_camo1{};
		class Face31: Face31
		{
			head = "MaskHead_Black";
		};
		class Face31_camo1: Face31
		{
			identityTypes[] = {};
		};
		class Face31_camo2: Face31_camo1{};
		class Face31_camo3: Face31_camo1{};
		class Face31_camo4: Face31_camo1{};
		class Face31_camo5: Face31_camo1{};
		class Face31_camo6: Face31_camo1{};
		class Face32: Face32
		{
			head = "MaskHead_Black";
		};
		class Face32_camo1: Face32
		{
			identityTypes[] = {};
		};
		class Face32_camo2: Face32_camo1{};
		class Face32_camo3: Face32_camo1{};
		class Face32_camo4: Face32_camo1{};
		class Face32_camo5: Face32_camo1{};
		class Face32_camo6: Face32_camo1{};
		class Face33: Face33
		{
			head = "MaskHead_Black";
		};
		class Face33_camo1: Face33
		{
			identityTypes[] = {};
		};
		class Face33_camo2: Face33_camo1{};
		class Face33_camo3: Face33_camo1{};
		class Face33_camo4: Face33_camo1{};
		class Face33_camo5: Face33_camo1{};
		class Face33_camo6: Face33_camo1{};
		class Face34: Face34
		{
			head = "MaskHead_Black";
		};
		class Face34_camo1: Face34
		{
			identityTypes[] = {};
		};
		class Face34_camo2: Face34_camo1{};
		class Face34_camo3: Face34_camo1{};
		class Face34_camo4: Face34_camo1{};
		class Face34_camo5: Face34_camo1{};
		class Face34_camo6: Face34_camo1{};
		class Face35: Face35
		{
			head = "MaskHead_Black";
		};
		class Face35_camo1: Face35
		{
			identityTypes[] = {};
		};
		class Face35_camo2: Face35_camo1{};
		class Face35_camo3: Face35_camo1{};
		class Face35_camo4: Face35_camo1{};
		class Face35_camo5: Face35_camo1{};
		class Face35_camo6: Face35_camo1{};
		class Face36: Face36
		{
			head = "MaskHead_Black";
		};
		class Face36_camo1: Face36
		{
			identityTypes[] = {};
		};
		class Face36_camo2: Face36_camo1{};
		class Face36_camo3: Face36_camo1{};
		class Face36_camo4: Face36_camo1{};
		class Face36_camo5: Face36_camo1{};
		class Face36_camo6: Face36_camo1{};
		class Face37: Face37
		{
			head = "MaskHead_Black";
		};
		class Face37_camo1: Face37
		{
			identityTypes[] = {};
		};
		class Face37_camo2: Face37_camo1{};
		class Face37_camo3: Face37_camo1{};
		class Face37_camo4: Face37_camo1{};
		class Face37_camo5: Face37_camo1{};
		class Face37_camo6: Face37_camo1{};
		class Face38: Face38
		{
			head = "MaskHead_Black";
		};
		class Face38_camo1: Face38
		{
			identityTypes[] = {};
		};
		class Face38_camo2: Face38_camo1{};
		class Face38_camo3: Face38_camo1{};
		class Face38_camo4: Face38_camo1{};
		class Face38_camo5: Face38_camo1{};
		class Face38_camo6: Face38_camo1{};
		class Face39: Face39
		{
			head = "MaskHead_Black";
		};
		class Face39_camo1: Face39
		{
			identityTypes[] = {};
		};
		class Face39_camo2: Face39_camo1{};
		class Face39_camo3: Face39_camo1{};
		class Face39_camo4: Face39_camo1{};
		class Face39_camo5: Face39_camo1{};
		class Face39_camo6: Face39_camo1{};
		class Face40: Face40
		{
			head = "MaskHead_Black";
		};
		class Face40_camo1: Face40
		{
			identityTypes[] = {};
		};
		class Face40_camo2: Face40_camo1{};
		class Face40_camo3: Face40_camo1{};
		class Face40_camo4: Face40_camo1{};
		class Face40_camo5: Face40_camo1{};
		class Face40_camo6: Face40_camo1{};
		class Face41: Face41
		{
			head = "MaskHead";
		};
		class Face41_camo1: Face41
		{
			identityTypes[] = {};
		};
		class Face41_camo2: Face41_camo1{};
		class Face41_camo3: Face41_camo1{};
		class Face41_camo4: Face41_camo1{};
		class Face41_camo5: Face41_camo1{};
		class Face41_camo6: Face41_camo1{};
		class Face42: Face42
		{
			head = "MaskHead";
		};
		class Face42_camo1: Face42
		{
			identityTypes[] = {};
		};
		class Face42_camo2: Face42_camo1{};
		class Face42_camo3: Face42_camo1{};
		class Face42_camo4: Face42_camo1{};
		class Face42_camo5: Face42_camo1{};
		class Face42_camo6: Face42_camo1{};
		class Face43: Face43
		{
			head = "MaskHead";
		};
		class Face43_camo1: Face43
		{
			identityTypes[] = {};
		};
		class Face43_camo2: Face43_camo1{};
		class Face43_camo3: Face43_camo1{};
		class Face43_camo4: Face43_camo1{};
		class Face43_camo5: Face43_camo1{};
		class Face43_camo6: Face43_camo1{};
		class Face44: Face44
		{
			head = "MaskHead";
		};
		class Face44_camo1: Face44
		{
			identityTypes[] = {};
		};
		class Face44_camo2: Face44_camo1{};
		class Face44_camo3: Face44_camo1{};
		class Face44_camo4: Face44_camo1{};
		class Face44_camo5: Face44_camo1{};
		class Face44_camo6: Face44_camo1{};
		class Face45: Face45
		{
			head = "MaskHead";
		};
		class Face45_camo1: Face45
		{
			identityTypes[] = {};
		};
		class Face45_camo2: Face45_camo1{};
		class Face45_camo3: Face45_camo1{};
		class Face45_camo4: Face45_camo1{};
		class Face45_camo5: Face45_camo1{};
		class Face45_camo6: Face45_camo1{};
		class Face46: Face46
		{
			head = "MaskHead";
		};
		class Face46_camo1: Face46
		{
			identityTypes[] = {};
		};
		class Face46_camo2: Face46_camo1{};
		class Face46_camo3: Face46_camo1{};
		class Face46_camo4: Face46_camo1{};
		class Face46_camo5: Face46_camo1{};
		class Face46_camo6: Face46_camo1{};
		class Face47: Face47
		{
			head = "MaskHead";
		};
		class Face47_camo1: Face47
		{
			identityTypes[] = {};
		};
		class Face47_camo2: Face47_camo1{};
		class Face47_camo3: Face47_camo1{};
		class Face47_camo4: Face47_camo1{};
		class Face47_camo5: Face47_camo1{};
		class Face47_camo6: Face47_camo1{};
		class Face48: Face48
		{
			head = "MaskHead";
		};
		class Face48_camo1: Face48
		{
			identityTypes[] = {};
		};
		class Face48_camo2: Face48_camo1{};
		class Face48_camo3: Face48_camo1{};
		class Face48_camo4: Face48_camo1{};
		class Face48_camo5: Face48_camo1{};
		class Face48_camo6: Face48_camo1{};
		class Face49: Face49
		{
			head = "MaskHead";
		};
		class Face49_camo1: Face49
		{
			identityTypes[] = {};
		};
		class Face49_camo2: Face49_camo1{};
		class Face49_camo3: Face49_camo1{};
		class Face49_camo4: Face49_camo1{};
		class Face49_camo5: Face49_camo1{};
		class Face49_camo6: Face49_camo1{};
		class Face50: Face50
		{
			head = "MaskHead";
		};
		class Face50_camo1: Face50
		{
			identityTypes[] = {};
		};
		class Face50_camo2: Face50_camo1{};
		class Face50_camo3: Face50_camo1{};
		class Face50_camo4: Face50_camo1{};
		class Face50_camo5: Face50_camo1{};
		class Face50_camo6: Face50_camo1{};
		class Face52: Face52
		{
			head = "MaskHead";
		};
		class Face52_camo1: Face52
		{
			identityTypes[] = {};
		};
		class Face52_camo2: Face52_camo1{};
		class Face52_camo3: Face52_camo1{};
		class Face52_camo4: Face52_camo1{};
		class Face52_camo5: Face52_camo1{};
		class Face52_camo6: Face52_camo1{};
		class Face54: Face54
		{
			head = "MaskHead";
		};
		class Face54_camo1: Face54
		{
			identityTypes[] = {};
		};
		class Face54_camo2: Face54_camo1{};
		class Face54_camo3: Face54_camo1{};
		class Face54_camo4: Face54_camo1{};
		class Face54_camo5: Face54_camo1{};
		class Face54_camo6: Face54_camo1{};
		class Face55: Face55
		{
			head = "MaskHead";
		};
		class Face55_camo1: Face55
		{
			identityTypes[] = {};
		};
		class Face55_camo2: Face55_camo1{};
		class Face55_camo3: Face55_camo1{};
		class Face55_camo4: Face55_camo1{};
		class Face55_camo5: Face55_camo1{};
		class Face55_camo6: Face55_camo1{};
		class Face56: Face56
		{
			head = "MaskHead";
		};
		class Face56_camo1: Face56
		{
			identityTypes[] = {};
		};
		class Face56_camo2: Face56_camo1{};
		class Face56_camo3: Face56_camo1{};
		class Face56_camo4: Face56_camo1{};
		class Face56_camo5: Face56_camo1{};
		class Face56_camo6: Face56_camo1{};
		class Face57: Face57
		{
			head = "MaskHead";
		};
		class Face57_camo1: Face57
		{
			identityTypes[] = {};
		};
		class Face57_camo2: Face57_camo1{};
		class Face57_camo3: Face57_camo1{};
		class Face57_camo4: Face57_camo1{};
		class Face57_camo5: Face57_camo1{};
		class Face57_camo6: Face57_camo1{};
		class Face58: Face58
		{
			head = "MaskHead";
		};
		class Face58_camo1: Face58
		{
			identityTypes[] = {};
		};
		class Face58_camo2: Face58_camo1{};
		class Face58_camo3: Face58_camo1{};
		class Face58_camo4: Face58_camo1{};
		class Face58_camo5: Face58_camo1{};
		class Face58_camo6: Face58_camo1{};
		class Face59: Face59
		{
			head = "MaskHead";
		};
		class Face59_camo1: Face59
		{
			identityTypes[] = {};
		};
		class Face59_camo2: Face59_camo1{};
		class Face59_camo3: Face59_camo1{};
		class Face59_camo4: Face59_camo1{};
		class Face59_camo5: Face59_camo1{};
		class Face59_camo6: Face59_camo1{};
		class Face60: Face60
		{
			head = "MaskHead";
		};
		class Face60_camo1: Face60
		{
			identityTypes[] = {};
		};
		class Face60_camo2: Face60_camo1{};
		class Face60_camo3: Face60_camo1{};
		class Face60_camo4: Face60_camo1{};
		class Face60_camo5: Face60_camo1{};
		class Face60_camo6: Face60_camo1{};
		class Face61: Face61
		{
			head = "MaskHead";
		};
		class Face61_camo1: Face61
		{
			identityTypes[] = {};
		};
		class Face61_camo2: Face61_camo1{};
		class Face61_camo3: Face61_camo1{};
		class Face61_camo4: Face61_camo1{};
		class Face61_camo5: Face61_camo1{};
		class Face61_camo6: Face61_camo1{};
		class Face62: Face62
		{
			head = "MaskHead";
		};
		class Face62_camo1: Face62
		{
			identityTypes[] = {};
		};
		class Face62_camo2: Face62_camo1{};
		class Face62_camo3: Face62_camo1{};
		class Face62_camo4: Face62_camo1{};
		class Face62_camo5: Face62_camo1{};
		class Face62_camo6: Face62_camo1{};
		class Face63: Face63
		{
			head = "MaskHead";
		};
		class Face63_camo1: Face63
		{
			identityTypes[] = {};
		};
		class Face63_camo2: Face63_camo1{};
		class Face63_camo3: Face63_camo1{};
		class Face63_camo4: Face63_camo1{};
		class Face63_camo5: Face63_camo1{};
		class Face63_camo6: Face63_camo1{};
		class Face64: Face64
		{
			head = "MaskHead";
		};
		class Face64_camo1: Face64
		{
			identityTypes[] = {};
		};
		class Face64_camo2: Face64_camo1{};
		class Face64_camo3: Face64_camo1{};
		class Face64_camo4: Face64_camo1{};
		class Face64_camo5: Face64_camo1{};
		class Face64_camo6: Face64_camo1{};
		class Face65: Face65
		{
			head = "MaskHead";
		};
		class Face65_camo1: Face65
		{
			identityTypes[] = {};
		};
		class Face65_camo2: Face65_camo1{};
		class Face65_camo3: Face65_camo1{};
		class Face65_camo4: Face65_camo1{};
		class Face65_camo5: Face65_camo1{};
		class Face65_camo6: Face65_camo1{};
		class Face66: Face66
		{
			head = "MaskHead";
		};
		class Face66_camo1: Face66
		{
			identityTypes[] = {};
		};
		class Face66_camo2: Face66_camo1{};
		class Face66_camo3: Face66_camo1{};
		class Face66_camo4: Face66_camo1{};
		class Face66_camo5: Face66_camo1{};
		class Face66_camo6: Face66_camo1{};
		class Face67: Face67
		{
			head = "MaskHead";
		};
		class Face67_camo1: Face67
		{
			identityTypes[] = {};
		};
		class Face67_camo2: Face67_camo1{};
		class Face67_camo3: Face67_camo1{};
		class Face67_camo4: Face67_camo1{};
		class Face67_camo5: Face67_camo1{};
		class Face67_camo6: Face67_camo1{};
		class Face68: Face68
		{
			head = "MaskHead";
		};
		class Face68_camo1: Face68
		{
			identityTypes[] = {};
		};
		class Face68_camo2: Face68_camo1{};
		class Face68_camo3: Face68_camo1{};
		class Face68_camo4: Face68_camo1{};
		class Face68_camo5: Face68_camo1{};
		class Face68_camo6: Face68_camo1{};
		class Face69: Face69
		{
			head = "MaskHead";
		};
		class Face69_camo1: Face69
		{
			identityTypes[] = {};
		};
		class Face69_camo2: Face69_camo1{};
		class Face69_camo3: Face69_camo1{};
		class Face69_camo4: Face69_camo1{};
		class Face69_camo5: Face69_camo1{};
		class Face69_camo6: Face69_camo1{};
		class Face70: Face70
		{
			head = "MaskHead";
		};
		class Face70_camo1: Face70
		{
			identityTypes[] = {};
		};
		class Face70_camo2: Face70_camo1{};
		class Face70_camo3: Face70_camo1{};
		class Face70_camo4: Face70_camo1{};
		class Face70_camo5: Face70_camo1{};
		class Face70_camo6: Face70_camo1{};
		class Face71: Face71
		{
			head = "MaskHead";
		};
		class Face71_camo1: Face71
		{
			identityTypes[] = {};
		};
		class Face71_camo2: Face71_camo1{};
		class Face71_camo3: Face71_camo1{};
		class Face71_camo4: Face71_camo1{};
		class Face71_camo5: Face71_camo1{};
		class Face71_camo6: Face71_camo1{};
		class Face72: Face72
		{
			head = "MaskHead";
		};
		class Face72_camo1: Face72
		{
			identityTypes[] = {};
		};
		class Face72_camo2: Face72_camo1{};
		class Face72_camo3: Face72_camo1{};
		class Face72_camo4: Face72_camo1{};
		class Face72_camo5: Face72_camo1{};
		class Face72_camo6: Face72_camo1{};
		class Face73: Face73
		{
			head = "MaskHead";
		};
		class Face73_camo1: Face73
		{
			identityTypes[] = {};
		};
		class Face73_camo2: Face73_camo1{};
		class Face73_camo3: Face73_camo1{};
		class Face73_camo4: Face73_camo1{};
		class Face73_camo5: Face73_camo1{};
		class Face73_camo6: Face73_camo1{};
		class Face74: Face74
		{
			head = "MaskHead";
		};
		class Face74_camo1: Face74
		{
			identityTypes[] = {};
		};
		class Face74_camo2: Face74_camo1{};
		class Face74_camo3: Face74_camo1{};
		class Face74_camo4: Face74_camo1{};
		class Face74_camo5: Face74_camo1{};
		class Face74_camo6: Face74_camo1{};
		class Face75: Face75
		{
			head = "MaskHead";
		};
		class Face75_camo1: Face75
		{
			identityTypes[] = {};
		};
		class Face75_camo2: Face75_camo1{};
		class Face75_camo3: Face75_camo1{};
		class Face75_camo4: Face75_camo1{};
		class Face75_camo5: Face75_camo1{};
		class Face75_camo6: Face75_camo1{};
		class Face76: Face76
		{
			head = "MaskHead";
		};
		class Face76_camo1: Face76
		{
			identityTypes[] = {};
		};
		class Face76_camo2: Face76_camo1{};
		class Face76_camo3: Face76_camo1{};
		class Face76_camo4: Face76_camo1{};
		class Face76_camo5: Face76_camo1{};
		class Face76_camo6: Face76_camo1{};
		class Face77: Face77
		{
			head = "MaskHead";
		};
		class Face77_camo1: Face77
		{
			identityTypes[] = {};
		};
		class Face77_camo2: Face77_camo1{};
		class Face77_camo3: Face77_camo1{};
		class Face77_camo4: Face77_camo1{};
		class Face77_camo5: Face77_camo1{};
		class Face77_camo6: Face77_camo1{};
		class Face78: Face78
		{
			head = "MaskHead_Black";
		};
		class Face78_camo1: Face78
		{
			identityTypes[] = {};
		};
		class Face78_camo2: Face78_camo1{};
		class Face78_camo3: Face78_camo1{};
		class Face78_camo4: Face78_camo1{};
		class Face78_camo5: Face78_camo1{};
		class Face78_camo6: Face78_camo1{};
		class Face79: Face79
		{
			head = "MaskHead_Black";
		};
		class Face79_camo1: Face79
		{
			identityTypes[] = {};
		};
		class Face79_camo2: Face79_camo1{};
		class Face79_camo3: Face79_camo1{};
		class Face79_camo4: Face79_camo1{};
		class Face79_camo5: Face79_camo1{};
		class Face79_camo6: Face79_camo1{};
		class Face80: Face80
		{
			head = "MaskHead_Black";
		};
		class Face80_camo1: Face80
		{
			identityTypes[] = {};
		};
		class Face80_camo2: Face80_camo1{};
		class Face80_camo3: Face80_camo1{};
		class Face80_camo4: Face80_camo1{};
		class Face80_camo5: Face80_camo1{};
		class Face80_camo6: Face80_camo1{};
		class Face81: Face81
		{
			head = "MaskHead_Black";
		};
		class Face81_camo1: Face81
		{
			identityTypes[] = {};
		};
		class Face81_camo2: Face81_camo1{};
		class Face81_camo3: Face81_camo1{};
		class Face81_camo4: Face81_camo1{};
		class Face81_camo5: Face81_camo1{};
		class Face81_camo6: Face81_camo1{};
		class Face82: Face82
		{
			head = "MaskHead_Black";
		};
		class Face82_camo1: Face82
		{
			identityTypes[] = {};
		};
		class Face82_camo2: Face82_camo1{};
		class Face82_camo3: Face82_camo1{};
		class Face82_camo4: Face82_camo1{};
		class Face82_camo5: Face82_camo1{};
		class Face82_camo6: Face82_camo1{};
		class Face83: Face83
		{
			head = "MaskHead_Black";
		};
		class Face83_camo1: Face83
		{
			identityTypes[] = {};
		};
		class Face83_camo2: Face83_camo1{};
		class Face83_camo3: Face83_camo1{};
		class Face83_camo4: Face83_camo1{};
		class Face83_camo5: Face83_camo1{};
		class Face83_camo6: Face83_camo1{};
		class Face84: Face84
		{
			head = "MaskHead_Black";
		};
		class Face84_camo1: Face84
		{
			identityTypes[] = {};
		};
		class Face84_camo2: Face84_camo1{};
		class Face84_camo3: Face84_camo1{};
		class Face84_camo4: Face84_camo1{};
		class Face84_camo5: Face84_camo1{};
		class Face84_camo6: Face84_camo1{};
		class Face85: Face85
		{
			head = "MaskHead";
		};
		class Face85_camo1: Face85
		{
			identityTypes[] = {};
		};
		class Face85_camo2: Face85_camo1{};
		class Face85_camo3: Face85_camo1{};
		class Face85_camo4: Face85_camo1{};
		class Face85_camo5: Face85_camo1{};
		class Face85_camo6: Face85_camo1{};
		class Face86: Face86
		{
			head = "MaskHead_Black";
		};
		class Face86_camo1: Face86
		{
			identityTypes[] = {};
		};
		class Face86_camo2: Face86_camo1{};
		class Face86_camo3: Face86_camo1{};
		class Face86_camo4: Face86_camo1{};
		class Face86_camo5: Face86_camo1{};
		class Face86_camo6: Face86_camo1{};
		class Face87: Face87
		{
			head = "MaskHead";
		};
		class Face87_camo1: Face87
		{
			identityTypes[] = {};
		};
		class Face87_camo2: Face87_camo1{};
		class Face87_camo3: Face87_camo1{};
		class Face87_camo4: Face87_camo1{};
		class Face87_camo5: Face87_camo1{};
		class Face87_camo6: Face87_camo1{};
		class Face88: Face88
		{
			head = "MaskHead";
		};
		class Face88_camo1: Face88
		{
			identityTypes[] = {};
		};
		class Face88_camo2: Face88_camo1{};
		class Face88_camo3: Face88_camo1{};
		class Face88_camo4: Face88_camo1{};
		class Face88_camo5: Face88_camo1{};
		class Face88_camo6: Face88_camo1{};
		class Face89: Face89
		{
			head = "MaskHead";
		};
		class Face89_camo1: Face89
		{
			identityTypes[] = {};
		};
		class Face89_camo2: Face89_camo1{};
		class Face89_camo3: Face89_camo1{};
		class Face89_camo4: Face89_camo1{};
		class Face89_camo5: Face89_camo1{};
		class Face89_camo6: Face89_camo1{};
		class Face90: Face90
		{
			head = "MaskHead";
		};
		class Face90_camo1: Face90
		{
			identityTypes[] = {};
		};
		class Face90_camo2: Face90_camo1{};
		class Face90_camo3: Face90_camo1{};
		class Face90_camo4: Face90_camo1{};
		class Face90_camo5: Face90_camo1{};
		class Face90_camo6: Face90_camo1{};
		class Face91: Face91
		{
			head = "MaskHead";
		};
		class Face91_camo1: Face91
		{
			identityTypes[] = {};
		};
		class Face91_camo2: Face91_camo1{};
		class Face91_camo3: Face91_camo1{};
		class Face91_camo4: Face91_camo1{};
		class Face91_camo5: Face91_camo1{};
		class Face91_camo6: Face91_camo1{};
		class Face92: Face92
		{
			head = "MaskHead";
		};
		class Face92_camo1: Face92
		{
			identityTypes[] = {};
		};
		class Face92_camo2: Face92_camo1{};
		class Face92_camo3: Face92_camo1{};
		class Face92_camo4: Face92_camo1{};
		class Face92_camo5: Face92_camo1{};
		class Face92_camo6: Face92_camo1{};
		class Face93: Face93
		{
			head = "MaskHead";
		};
		class Face93_camo1: Face93
		{
			identityTypes[] = {};
		};
		class Face93_camo2: Face93_camo1{};
		class Face93_camo3: Face93_camo1{};
		class Face93_camo4: Face93_camo1{};
		class Face93_camo5: Face93_camo1{};
		class Face93_camo6: Face93_camo1{};
		class Face94: Face94
		{
			head = "MaskHead";
		};
		class Face94_camo1: Face94
		{
			identityTypes[] = {};
		};
		class Face94_camo2: Face94_camo1{};
		class Face94_camo3: Face94_camo1{};
		class Face94_camo4: Face94_camo1{};
		class Face94_camo5: Face94_camo1{};
		class Face94_camo6: Face94_camo1{};
		class Face95: Face95
		{
			head = "MaskHead";
		};
		class Face95_camo1: Face95
		{
			identityTypes[] = {};
		};
		class Face95_camo2: Face95_camo1{};
		class Face95_camo3: Face95_camo1{};
		class Face95_camo4: Face95_camo1{};
		class Face95_camo5: Face95_camo1{};
		class Face95_camo6: Face95_camo1{};
		class Face96: Face96
		{
			head = "MaskHead";
		};
		class Face96_camo1: Face96
		{
			identityTypes[] = {};
		};
		class Face96_camo2: Face96_camo1{};
		class Face96_camo3: Face96_camo1{};
		class Face96_camo4: Face96_camo1{};
		class Face96_camo5: Face96_camo1{};
		class Face96_camo6: Face96_camo1{};
		class Face97: Face97
		{
			head = "MaskHead";
		};
		class Face97_camo1: Face97
		{
			identityTypes[] = {};
		};
		class Face97_camo2: Face97_camo1{};
		class Face97_camo3: Face97_camo1{};
		class Face97_camo4: Face97_camo1{};
		class Face97_camo5: Face97_camo1{};
		class Face97_camo6: Face97_camo1{};
		class Face98: Face98
		{
			head = "MaskHead";
		};
		class Face98_camo1: Face98
		{
			identityTypes[] = {};
		};
		class Face98_camo2: Face98_camo1{};
		class Face98_camo3: Face98_camo1{};
		class Face98_camo4: Face98_camo1{};
		class Face98_camo5: Face98_camo1{};
		class Face98_camo6: Face98_camo1{};
		class Face99: Face99
		{
			head = "MaskHead";
		};
		class Face99_camo1: Face99
		{
			identityTypes[] = {};
		};
		class Face99_camo2: Face99_camo1{};
		class Face99_camo3: Face99_camo1{};
		class Face99_camo4: Face99_camo1{};
		class Face99_camo5: Face99_camo1{};
		class Face99_camo6: Face99_camo1{};
		class Face100: Face100
		{
			head = "MaskHead";
		};
		class Face100_camo1: Face100
		{
			identityTypes[] = {};
		};
		class Face100_camo2: Face100_camo1{};
		class Face100_camo3: Face100_camo1{};
		class Face100_camo4: Face100_camo1{};
		class Face100_camo5: Face100_camo1{};
		class Face100_camo6: Face100_camo1{};
		class Face101: Face101
		{
			head = "MaskHead";
		};
		class Face101_camo1: Face101
		{
			identityTypes[] = {};
		};
		class Face101_camo2: Face101_camo1{};
		class Face101_camo3: Face101_camo1{};
		class Face101_camo4: Face101_camo1{};
		class Face101_camo5: Face101_camo1{};
		class Face101_camo6: Face101_camo1{};
		class Face102: Face102
		{
			head = "MaskHead";
		};
		class Face102_camo1: Face102
		{
			identityTypes[] = {};
		};
		class Face102_camo2: Face102_camo1{};
		class Face102_camo3: Face102_camo1{};
		class Face102_camo4: Face102_camo1{};
		class Face102_camo5: Face102_camo1{};
		class Face102_camo6: Face102_camo1{};
		class Face103: Face103
		{
			head = "MaskHead";
		};
		class Face103_camo1: Face103
		{
			identityTypes[] = {};
		};
		class Face103_camo2: Face103_camo1{};
		class Face103_camo3: Face103_camo1{};
		class Face103_camo4: Face103_camo1{};
		class Face103_camo5: Face103_camo1{};
		class Face103_camo6: Face103_camo1{};
		class Face104: Face104
		{
			head = "MaskHead";
		};
		class Face104_camo1: Face104
		{
			identityTypes[] = {};
		};
		class Face104_camo2: Face104_camo1{};
		class Face104_camo3: Face104_camo1{};
		class Face104_camo4: Face104_camo1{};
		class Face104_camo5: Face104_camo1{};
		class Face104_camo6: Face104_camo1{};
		class Face105: Face105
		{
			head = "MaskHead";
		};
		class Face105_camo1: Face105
		{
			identityTypes[] = {};
		};
		class Face105_camo2: Face105_camo1{};
		class Face105_camo3: Face105_camo1{};
		class Face105_camo4: Face105_camo1{};
		class Face105_camo5: Face105_camo1{};
		class Face105_camo6: Face105_camo1{};
		class Face106: Face106
		{
			head = "MaskHead";
		};
		class Face106_camo1: Face106
		{
			identityTypes[] = {};
		};
		class Face106_camo2: Face106_camo1{};
		class Face106_camo3: Face106_camo1{};
		class Face106_camo4: Face106_camo1{};
		class Face106_camo5: Face106_camo1{};
		class Face106_camo6: Face106_camo1{};
		class Face107: Face107
		{
			head = "MaskHead";
		};
		class Face107_camo1: Face107
		{
			identityTypes[] = {};
		};
		class Face107_camo2: Face107_camo1{};
		class Face107_camo3: Face107_camo1{};
		class Face107_camo4: Face107_camo1{};
		class Face107_camo5: Face107_camo1{};
		class Face107_camo6: Face107_camo1{};
	};
};
class CfgGlasses
{
	class None
	{
		scope = 2;
		name = "$STR_CFG_GLASSES_NONE";
		model = "";
		identityTypes[] = {"NoGlasses",1,"Civ_Glasses",882,"USMC_Glasses",825,"FR_Glasses",9,"RU_Glasses",939,"CDF_Glasses",930,"INS_Glasses",955,"Gue_Glasses",930,"pilot_sunglasses",8};
	};
	class Spectacles: None
	{
		name = "$STR_CFG_GLASSES_SPECTACLES";
		model = "\Ca\characters\glasses\Spectacles";
		identityTypes[] = {"Civ_Glasses",50,"USMC_Glasses",20,"CDF_Glasses",40,"Gue_Glasses",40,"INS_Glasses",20,"RU_Glasses",1,"Spectacles_Glasses",1};
	};
	class RoundGlasses: None
	{
		name = "$STR_CFG_GLASSES_READING";
		model = "\Ca\characters\glasses\RoundGlasses";
		identityTypes[] = {"Civ_Glasses",50,"CDF_Glasses",5,"Gue_Glasses",10,"INS_Glasses",5,"Reading_Glasses",1};
	};
	class Sunglasses: None
	{
		name = "$STR_CFG_GLASSES_AVIATOR_SUNGLASSES";
		model = "\Ca\characters\glasses\sunGlasses";
		identityTypes[] = {"Civ_SunGlasses",10,"USMC_Glasses",30,"CDF_Glasses",20,"Gue_Glasses",20,"INS_Glasses",20,"RU_Glasses",40,"aviator_sunglases",1,"pilot_sunglasses",2};
	};
	class Tactical: None
	{
		name = "$STR_CFG_GLASSES_TACTICAL";
		model = "\Ca\characters\glasses\TacticalGlasses";
		identityTypes[] = {"USMC_Glasses",100,"CDF_Glasses",5,"RU_Glasses",20,"Tactical_Glasses",1,"FR_Glasses",1};
	};
	class BlackSun: None
	{
		name = "$STR_CFG_GLASSES_SHADES_BLACK";
		model = "\Ca\characters\glasses\BlackSun";
		identityTypes[] = {"Civ_SunGlasses",10,"USMC_Glasses",5,"Black_sunglasses",1};
	};
	class BlueSun: None
	{
		name = "$STR_CFG_GLASSES_SHADES_BLUE";
		model = "\Ca\characters\glasses\BlueSun";
		identityTypes[] = {"USMC_Glasses",5,"Civ_SunGlasses",1,"Shade_sunglasses",1};
	};
	class RedSun: BlueSun
	{
		name = "$STR_CFG_GLASSES_SHADES_RED";
		model = "\Ca\characters\glasses\RedSun";
	};
	class GreenSun: BlueSun
	{
		name = "$STR_CFG_GLASSES_SHADES_YELLOW";
		model = "\Ca\characters\glasses\GreenSun";
	};
	class LHD_glasses: None
	{
		scope = 1;
		name = "LHD glasses";
		model = "\Ca\characters\glasses\LHDGlasses";
		identityTypes[] = {"LHD_glasses",1};
	};
};
//};
