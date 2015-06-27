////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:47 2014 : Source 'file' date Fri Oct 31 06:04:47 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=21
enum {
	_windowborder = 1,
	_stripeheight = 3,
	_yinit = 0,
	_stripewidth = 32,
	_hintsw = 31,
	_hintsh = 4,
	_hintsx = 0,
	_buttonheight = 3,
	_hintsy = 0,
	_hintsx1 = 0,
	_windowheight = 42,
	_availableitemsheight = 35,
	_buttonwidth = 16,
	sptpercents = 1,
	_xspacing = 0,
	_hintsy1 = 0,
	_xinit = 0,
	sptplain = 0,
	_yspacing = 0,
	_windowwidth = 44,
	_bulgarianconstant = 0
};

//Class missions : armory\config.bin{
class CfgPatches
{
	class CA_Missions_Armory2
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAUI"};
	};
};
pboTryEntity = "playScriptedMission [""utes"", {titleCut [(localize ""STR_LIB_START""), ""BLACK FADED"", 0]; [configFile >> ""CfgVehicles"" >> ""%1""] execVM ""\ca\missions\armory\data\scripts\init.sqf""}, configFile >> ""CfgMissions"" >> ""Procedural"" >> ""Armory"", true]";
pboTryWeapon = "playScriptedMission [""utes"", {titleCut [(localize ""STR_LIB_START""), ""BLACK FADED"", 0]; [configFile >> ""CfgWeapons"" >> ""%1""] execVM ""\ca\missions\armory\data\scripts\init.sqf""}, configFile >> ""CfgMissions"" >> ""Procedural"" >> ""Armory"", true]";
pboIsEntityLocked = "(configFile >> ""CfgVehicles"" >> ""%1"") call compile preprocessFileLineNumbers ""\ca\missions\armory\data\scripts\functions\isItemLocked.sqf""";
pboIsWeaponLocked = "(configFile >> ""CfgWeapons"" >> ""%1"") call compile preprocessFileLineNumbers ""\ca\missions\armory\data\scripts\functions\isItemLocked.sqf""";
class CfgSounds
{
	class IncomingChallenge
	{
		scope = 1;
		name = "Armory - Incoming challenge";
		sound[] = {"\ca\missions\armory\data\sound\incoming_challenge.wss",1,1};
		titles[] = {};
	};
	class LaunchSkeet
	{
		scope = 1;
		name = "Armory - Launch skeet";
		sound[] = {"\ca\sounds\Weapons\hits\hit_fence_01",0.1,1};
		titles[] = {};
	};
	class PopUp1: LaunchSkeet
	{
		name = "Armory - Pop-up 1";
		sound[] = {"\ca\sounds\Weapons\hits\hit_rubber_01",0.1,1};
	};
	class PopUp1Down: LaunchSkeet
	{
		name = "Armory - Pop-up 1 down";
		sound[] = {"\ca\sounds\Weapons\hits\hit_rubber_02",0.1,1};
	};
	class PopUp2: LaunchSkeet
	{
		name = "Armory - Pop-up 2";
		sound[] = {"\ca\sounds\Weapons\hits\hit_vehicle_plate_09",0.1,1};
	};
	class PopUp2Down: LaunchSkeet
	{
		name = "Armory - Pop-up 2 down";
		sound[] = {"\ca\sounds\Weapons\hits\hit_vehicle_plate_12",0.1,1};
	};
};
class CfgIdentities
{
	class Librarian
	{
		name = "$STR_LIB_ARMORER";
		face = "Face97";
		glasses = "Tactical";
		speaker = "Male01EN";
		pitch = 1.0;
	};
	class LibrarianKorneel: Librarian
	{
		face = "Face87";
		glasses = "Sunglasses";
	};
};
class CfgArmory
{
	class Challenges
	{
		class Primary
		{
			id = -1;
			title = "";
			type = 0;
			script = "";
			tidExclusions[] = {};
			configConditions[] = {};
			runtimeConditions[] = {};
			explicitEnable = 0;
		};
		class MobilityRange: Primary
		{
			id = 0;
			title = "$STR_LIB_CHAL_MOB_RANGE";
			script = "mobRange";
			tidExclusions[] = {2,3,4,6,7,8,9,10,11,12};
			explicitEnable = 1;
		};
		class FiringRange: Primary
		{
			id = 1;
			title = "$STR_LIB_CHAL_FIRING_RANGE";
			script = "fireRange";
			tidExclusions[] = {11,12};
			configConditions[] = {"hasWeapon"};
			explicitEnable = 1;
		};
		class AttackPosition: Primary
		{
			id = 2;
			title = "$STR_LIB_CHAL_ATTACK_LOC";
			script = "attackPos";
			tidExclusions[] = {2,10,12};
			configConditions[] = {"hasWeapon"};
		};
		class DefendPosition: Primary
		{
			id = 3;
			title = "$STR_LIB_CHAL_DEFEND_LOC";
			script = "defendPos";
			tidExclusions[] = {4,10,12};
			configConditions[] = {"hasWeapon"};
		};
		class CheckpointRace: Primary
		{
			id = 12;
			title = "$STR_LIB_CHAL_CHECK_RACE";
			script = "checkRace";
			tidExclusions[] = {2,4,6,7,8,9,10,11,12};
		};
		class FitnessTrack: Primary
		{
			id = 13;
			title = "$STR_LIB_CHAL_FIT_TRACK";
			script = "fitTrack";
			tidExclusions[] = {0,1,2,3,4,5,6,7,8,9,10};
			explicitEnable = 1;
		};
		class Taxi: Primary
		{
			id = 11;
			title = "$STR_LIB_CHAL_TAXI";
			script = "taxi";
			tidExclusions[] = {2,4,6,7,8,9,10,11,12};
			configConditions[] = {"hasTransport"};
		};
		class StealTheItem: Primary
		{
			id = 14;
			title = "$STR_LIB_CHAL_STEAL_ITEM";
			script = "stealTheItem";
			tidExclusions[] = {2,5,12};
			configConditions[] = {"hasWeapon","isNotWoman"};
		};
		class KillHouse: Primary
		{
			id = 22;
			title = "$STR_LIB_CHAL_KILL_HOUSE";
			script = "killHouse";
			tidExclusions[] = {2,3,4,9,10,12};
			explicitEnable = 1;
			configConditions[] = {"hasWeapon"};
		};
		class Hunted: Primary
		{
			id = 23;
			title = "$STR_LIB_CHAL_HUNTED";
			script = "hunted";
			tidExclusions[] = {0,1,2,3,4,5,6,7,8,9,10,11};
		};
		class Survival: Primary
		{
			id = 24;
			title = "$STR_LIB_CHAL_SURVIVAL";
			script = "survival";
			tidExclusions[] = {12};
			configConditions[] = {"hasWeapon"};
		};
		class Assassination: Primary
		{
			id = 25;
			title = "$STR_LIB_CHAL_ASSASSINATION";
			script = "assassination";
			tidExclusions[] = {2,4,5,12};
			configConditions[] = {"hasWeapon"};
		};
		class SkeetShooting: Primary
		{
			id = 26;
			title = "$STR_LIB_CHAL_SKEET_SHOOT";
			script = "skeetShooting";
			tidExclusions[] = {3,4,10,12};
			configConditions[] = {"hasWeapon"};
		};
		class Hunter: Primary
		{
			id = 27;
			title = "$STR_LIB_CHAL_HUNTER";
			script = "hunter";
			tidExclusions[] = {0,1,2,3,4,5,9,10,12};
			configConditions[] = {"hasWeapon"};
		};
		class Secondary: Primary
		{
			type = 1;
		};
		class MinimumSpeed: Secondary
		{
			id = 4;
			title = "$STR_LIB_CHAL_MIN_SPEED";
			script = "minSpeed";
			tidExclusions[] = {2,6,7,8,9,10,11,12};
		};
		class SwimDistance: Secondary
		{
			id = 5;
			title = "$STR_LIB_CHAL_SWIM";
			script = "swimDist";
			tidExclusions[] = {2,3,4,5,6,7,8,9,10,12};
			configConditions[] = {"amphibious"};
			runtimeConditions[] = {"nearWater"};
		};
		class AccelerateSpeed: Secondary
		{
			id = 6;
			title = "$STR_LIB_CHAL_ACC_SPEED";
			script = "accSpeed";
			tidExclusions[] = {2,6,7,8,9,10,11,12};
		};
		class MinimumAltitude: Secondary
		{
			id = 7;
			title = "$STR_LIB_CHAL_MIN_ALT";
			script = "minAlt";
			tidExclusions[] = {0,1,2,5,6,7,8,9,10,11,12};
		};
		class ReachAltitude: Secondary
		{
			id = 8;
			title = "$STR_LIB_CHAL_REACH_ALT";
			script = "reachAlt";
			tidExclusions[] = {0,1,2,5,6,7,8,9,10,11,12};
		};
		class GetAway: Secondary
		{
			id = 9;
			title = "$STR_LIB_CHAL_GET_AWAY";
			script = "getAway";
			tidExclusions[] = {2,6,7,8,9,10};
		};
		class Land: Secondary
		{
			id = 10;
			title = "$STR_LIB_CHAL_LAND";
			script = "land";
			tidExclusions[] = {0,1,2,5,6,7,8,9,10,11,12};
			runtimeConditions[] = {"flying"};
		};
		class ReachPosition: Secondary
		{
			id = 15;
			title = "$STR_LIB_CHAL_REACH_POS";
			script = "reachPosition";
			tidExclusions[] = {2,6,7,8,9,10};
		};
		class Roadrunner: Secondary
		{
			id = 16;
			title = "$STR_LIB_CHAL_ROADRUN";
			script = "roadrunner";
			tidExclusions[] = {2,3,4,5,6,7,8,9,10,11,12};
			runtimeConditions[] = {"nearRoad"};
		};
		class Stop: Secondary
		{
			id = 17;
			title = "$STR_LIB_CHAL_STOP";
			script = "stop";
			tidExclusions[] = {2,6,7,8,9,10,11,12};
			runtimeConditions[] = {"movingFast"};
		};
		class Dirtship: Secondary
		{
			id = 18;
			title = "$STR_LIB_CHAL_DIRTSHIP";
			script = "dirtship";
			tidExclusions[] = {0,1,2,3,4,6,7,8,9,10,11,12};
		};
		class OneEighty: Secondary
		{
			id = 19;
			title = "$STR_LIB_CHAL_ONE_EIGHTY";
			script = "oneEighty";
			tidExclusions[] = {2,6,7,8,9,10,11,12};
		};
		class InsideLoop: Secondary
		{
			id = 20;
			title = "$STR_LIB_CHAL_INNER_LOOP";
			script = "insideLoop";
			tidExclusions[] = {0,1,2,5,6,7,8,9,10,11,12};
			runtimeConditions[] = {"flying"};
		};
		class Roll: Secondary
		{
			id = 21;
			title = "$STR_LIB_CHAL_ROLL";
			script = "roll";
			tidExclusions[] = {0,1,2,5,6,7,8,9,10,11,12};
			runtimeConditions[] = {"flying"};
		};
	};
	class Unlockables{};
};
class RscActiveText;
class RscStructuredText
{
	class Attributes;
};
class RscText;
class RscPicture;
class RscListbox;
class RscShortcutButton;
class RscProgress;
class RscControlsGroup;
class CA_Mainback;
class CA_Back;
class CA_Title;
class RscLibrary_Main
{
	idd = 10001;
	movingEnable = 0;
	onLoad = "[_this select 0] execVM (LIB_path + ""initDlg.sqf"")";
	onUnload = "if (!LIB_tryout && !LIB_manualShutdown) then {if (!LIB_unloading) then {titleCut [(localize ""STR_LIB_SHUT_DOWN""), ""BLACK FADED"", 0]} else {titleCut ["""", ""BLACK FADED"", 0]}}";
	class ControlsBackground{};
	class Controls
	{
		class CA_Viewer: RscActiveText
		{
			idc = 10006;
			style = 48;
			x = -1;
			y = -1;
			w = 3;
			h = 1.9;
			default = 0;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			color[] = {0,0,0,0};
			colorActive[] = {0,0,0,0};
			onMouseMoving = "[""onMouseMoving"", _this select 0, _this select 1, _this select 2] call LIB_funcViewerInput;";
			onMouseButtonDown = "if ((_this select 1) == 0) then {LIB_mouseDownLeft = true}; if ((_this select 1) == 1) then {LIB_mouseDownRight = true}; call LIB_restoreFocusFunction;";
			onMouseButtonUp = "if ((_this select 1) == 0) then {LIB_mouseDownLeft = false}; if ((_this select 1) == 1) then {LIB_mouseDownRight = false}; ";
			onMouseButtonDblClick = "[""onMouseButtonDblClick""] call LIB_funcViewerInput; call LIB_restoreFocusFunction;";
		};
		class G_Statistics: RscControlsGroup
		{
			idc = 10004;
			x = 0;
			y = -2;
			w = 1.1;
			h = 0.87;
			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
				border = "\ca\ui\data\ui_border_scroll_ca.paa";
			};
			class VScrollbar
			{
				color[] = {1,1,1,0};
				width = 0.008;
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.01;
			};
			class Controls
			{
				class CA_Background: RscPicture
				{
					idc = 20106;
					x = 0.044;
					y = 0.065;
					w = 1.254902;
					h = 0.8366013;
					text = "\ca\ui\data\ui_background_armory_info_ca.paa";
				};
				class StatTitle1: RscStructuredText
				{
					idc = 20401;
					x = 0.54;
					y = 0.2;
					w = 0.26;
					h = 0.04;
					class Attributes: Attributes
					{
						align = "right";
						color = "#E5E5E5";
						shadow = 0;
					};
				};
				class StatTitle2: StatTitle1
				{
					idc = 20402;
					y = 0.245;
				};
				class StatTitle3: StatTitle1
				{
					idc = 20403;
					y = 0.289;
				};
				class StatTitle4: StatTitle1
				{
					idc = 20404;
					y = 0.333;
				};
				class StatTitle5: StatTitle1
				{
					idc = 20405;
					y = 0.377;
				};
				class StatTitle6: StatTitle1
				{
					idc = 20406;
					y = 0.421;
				};
				class StatTitle7: StatTitle1
				{
					idc = 20407;
					y = 0.465;
				};
				class StatTitle8: StatTitle1
				{
					idc = 20408;
					y = 0.553;
				};
				class Stat1: StatTitle1
				{
					idc = 20421;
					x = 0.79;
					y = 0.2;
					w = 0.197;
					class Attributes: Attributes
					{
						align = "left";
						color = "#c2e9f3";
						shadow = 0;
					};
				};
				class Stat2: Stat1
				{
					idc = 20422;
					y = 0.245;
				};
				class Stat3: Stat1
				{
					idc = 20423;
					y = 0.289;
				};
				class Stat4: Stat1
				{
					idc = 20424;
					y = 0.333;
				};
				class Stat5: Stat1
				{
					idc = 20425;
					y = 0.377;
				};
				class Stat6: Stat1
				{
					idc = 20426;
					y = 0.421;
				};
				class Stat7: Stat1
				{
					idc = 20427;
					y = 0.465;
				};
				class Stat8: Stat1
				{
					idc = 20428;
					y = 0.553;
					h = 0.1;
				};
			};
		};
		class G_Description: RscControlsGroup
		{
			idc = 10003;
			style = 16;
			x = 0.059;
			y = 0.78;
			w = 0.488;
			h = 0.48;
			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
				border = "\ca\ui\data\ui_border_scroll_ca.paa";
			};
			class VScrollbar
			{
				color[] = {0.8,0.8,0.8,1};
				width = 0.021;
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
			};
			class HScrollbar
			{
				color[] = {0.8,0.8,0.8,1};
				height = 0.021;
			};
			class Controls
			{
				class Description: RscStructuredText
				{
					idc = 20301;
					x = 0;
					y = 0;
					h = 2.404;
					w = 0.476;
					class Attributes
					{
						font = "Zeppelin32";
						color = "#e5e5e5";
						align = "left";
						shadow = 0;
					};
				};
			};
		};
		class G_Door: RscControlsGroup
		{
			idc = 10008;
			x = "SafeZoneXAbs";
			y = "SafeZoneY";
			w = "SafeZoneWAbs";
			h = "SafeZoneH";
			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
				border = "\ca\ui\data\ui_border_scroll_ca.paa";
			};
			class VScrollbar
			{
				color[] = {0,0,0,0};
				width = 0.0001;
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
			};
			class HScrollbar
			{
				color[] = {0,0,0,0};
				height = 0.0001;
			};
			class Controls
			{
				class Background1: RscText
				{
					x = 0;
					y = 0;
					w = "SafeZoneWAbs";
					h = "SafeZoneH";
					colorBackground[] = {0,0,0,1};
				};
				class LoadingPic: RscPicture
				{
					x = "-SafeZoneXAbs - 0.7549020";
					y = "-SafeZoneY - 0.3366013";
					w = 2.509804;
					h = 1.6732026;
					text = "\ca\ui\data\ui_background_armory_co.paa";
					colortext[] = {1,1,1,1};
				};
			};
		};
		class CA_Background: RscPicture
		{
			idc = 10016;
			x = -0.754902;
			y = 0.8011765;
			w = 2.509804;
			h = 0.4183007;
			text = "\ca\ui\data\ui_background_transparent_bottom_ca.paa";
		};
		class G_Filters: RscControlsGroup
		{
			idc = 10002;
			x = -0.782902;
			y = -0.3366013;
			w = 2.509804;
			h = 1.25;
			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
				border = "\ca\ui\data\ui_border_scroll_ca.paa";
			};
			class VScrollbar
			{
				color[] = {1,1,1,0};
				width = 0;
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0;
			};
			class ControlsBackground{};
			class Controls
			{
				class MainWizardBack: RscPicture
				{
					idc = 20107;
					x = 0.792902;
					y = 0.4836013;
					w = 1.254902;
					h = 0.8366013;
					text = "\ca\ui\data\ui_armory_background_ca.paa";
				};
				class CA_ArmoryTitle: CA_Title
				{
					idc = 20104;
					x = 0.819;
					y = 0.505;
					text = "$STR_LIB_TITLE";
				};
				class Side_Filter: RscListbox
				{
					idc = 20002;
					x = 0.8105;
					y = 0.5846013;
					w = 0.185;
					h = 0.464;
					rowHeight = 0.0238462;
					toolTip = "$STR_LIB_TOOLTIP_SIDE_FILTER";
					onLBSelChanged = "[""onLBSelChanged"", _this] call LIB_interfaceInputFunction";
				};
				class Set_Filter: Side_Filter
				{
					idc = 20003;
					x = 1.0031;
					toolTip = "$STR_LIB_TOOLTIP_SET_FILTER";
					onLBSelChanged = "[""onLBSelChanged"", _this] call LIB_interfaceInputFunction";
				};
				class Type_Filter: Side_Filter
				{
					idc = 20004;
					x = 1.198;
					toolTip = "$STR_LIB_TOOLTIP_TYPE_FILTER";
					onLBSelChanged = "[""onLBSelChanged"", _this] call LIB_interfaceInputFunction";
				};
				class Item_Select: Side_Filter
				{
					idc = 20001;
					x = 1.394;
					w = 0.359;
					toolTip = "$STR_LIB_TOOLTIP_ITEM";
					onLBSelChanged = "[""onLBSelChanged"", _this] call LIB_interfaceInputFunction";
					onLBDblClick = "[""onLBDblClick"", _this] call LIB_interfaceInputFunction";
				};
				class Item_Sorter: RscListbox
				{
					idc = 200011;
					x = 0;
					y = 0;
					w = 0;
					h = 0;
				};
				class T_PercentageComplete: RscText
				{
					idc = 20104;
					x = 1.41;
					y = 1.105;
					w = 0.15;
					text = "$STR_LIB_UNLOCKED";
				};
				class P_PercentageComplete: RscProgress
				{
					idc = 800004;
					x = 1.528;
					y = 1.109;
					h = 0.03;
					w = 0.1568627;
				};
				class PercentageComplete: RscStructuredText
				{
					idc = 800001;
					x = 1.528;
					y = 1.105;
					w = 0.1;
					h = 0.03;
					class Attributes: Attributes
					{
						align = "left";
						shadow = 1;
					};
				};
				class T_Points: RscText
				{
					idc = 20104;
					x = 0.818;
					y = 1.105;
					text = "$STR_LIB_INFO_POINTS";
				};
				class Points: RscStructuredText
				{
					idc = 800002;
					x = 0.908;
					y = 1.105;
					class Attributes: Attributes
					{
						align = "left";
						shadow = 1;
					};
				};
			};
		};
		class G_Buttons: RscControlsGroup
		{
			idc = 10010;
			x = 0.0;
			y = 0.88;
			w = 1.0;
			h = 1.0;
			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
				border = "\ca\ui\data\ui_border_scroll_ca.paa";
			};
			class VScrollbar
			{
				color[] = {1,1,1,0};
				width = 0.001;
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
				class B_Scene: RscShortcutButton
				{
					idc = 20005;
					shortcuts[] = {"0x00050000 + 2"};
					x = 0.59;
					y = 0.02;
					text = "$STR_LIB_BUTTON_SCENE";
					toolTip = "$STR_LIB_TOOLTIP_SCENE";
					onButtonClick = "(_this select 0) call LIB_processButtonsFunction";
				};
				class B_Viewer: RscShortcutButton
				{
					idc = 20101;
					x = 0.59;
					y = 0.02;
					shortcuts[] = {"0x00050000 + 2"};
					text = "$STR_LIB_BUTTON_VIEWER";
					toolTip = "$STR_LIB_TOOLTIP_VIEWER";
					onButtonClick = "(_this select 0) call LIB_processButtonsFunction";
				};
				class B_Try: RscShortcutButton
				{
					idc = 20102;
					default = 1;
					shortcuts[] = {"0x00050000 + 0"};
					x = 0.79;
					y = 0.02;
					text = "$STR_LIB_BUTTON_TRY";
					toolTip = "$STR_LIB_TOOLTIP_TRY";
					onButtonClick = "(_this select 0) call LIB_processButtonsFunction";
				};
				class B_Info: RscShortcutButton
				{
					idc = 20108;
					shortcuts[] = {"0x00050000 + 3"};
					x = 0.39;
					y = 0.02;
					text = "$STR_LIB_SHOW_INFO";
					toolTip = "$STR_LIB_TOOLTIP_SHOW_INFO";
					onButtonClick = "(_this select 0) call LIB_processButtonsFunction";
				};
				class B_Quit: RscShortcutButton
				{
					idc = 20103;
					shortcuts[] = {"0x00050000 + 1"};
					x = 0.19;
					y = 0.02;
					text = "$STR_LIB_BUTTON_QUIT";
					toolTip = "$STR_LIB_TOOLTIP_QUIT";
					onButtonClick = "(_this select 0) call LIB_processButtonsFunction";
				};
			};
		};
		class TextStatus: RscStructuredText
		{
			idc = 10011;
			style = 2;
			x = 0.05;
			y = 0.85;
			w = 0.9;
			h = 0.04;
			size = 0.0208333;
			colorText[] = {0.023529,0,0.0313725,1};
			class Attributes: Attributes
			{
				align = "center";
			};
		};
		class TextItem: TextStatus
		{
			idc = 10015;
			y = 0.02;
			size = 0.03921;
		};
		class TextLoad: TextStatus
		{
			idc = 10017;
			y = 0.67;
			size = 0.03921;
		};
		class P_Status: RscProgress
		{
			idc = 800007;
			x = 0.343137;
			y = 0.617647;
			w = 0.3137255;
		};
	};
};
class RscLibrary_Challenge
{
	idd = 10002;
	movingEnable = 0;
	enableSimulation = 0;
	onLoad = "private [""_dummy""]; _dummy = [] call compile preprocessFile ""\ca\ui\scripts\uiPostEffectBlur.sqf""";
	onUnload = "private [""_dummy""]; _dummy = [] call compile preprocessFile ""\ca\ui\scripts\uiNoPostEffect.sqf""";
	class Controls
	{
		class CA_Background: RscPicture
		{
			idc = 20106;
			x = 0.202;
			y = 0.16;
			w = 0.627451;
			h = 0.8366013;
			text = "\ca\ui\data\ui_audio_background_ca.paa";
		};
		class Title: CA_Title
		{
			idc = 20001;
			x = 0.241;
			y = 0.1825;
			w = 0.5;
		};
		class Image: RscPicture
		{
			idc = 20005;
			x = 0.337;
			y = 0.26;
			w = 0.32;
			h = 0.21;
			text = "";
		};
		class Description: RscStructuredText
		{
			idc = 20002;
			x = 0.215;
			y = 0.48;
			w = 0.568;
			h = 0.28;
			class Attributes: Attributes
			{
				align = "left";
			};
		};
		class Accept: RscShortcutButton
		{
			idc = 20003;
			x = 0.227;
			y = 0.752;
			w = 0.15;
			text = "$STR_LIB_YES";
			toolTip = "$STR_LIB_TOOLTIP_YES_CHAL";
			default = 1;
			shortcuts[] = {"0x00050000 + 0"};
			onButtonClick = "LIB_chalChoice = 2;";
		};
		class Decline: Accept
		{
			idc = 20004;
			x = 0.4;
			text = "$STR_LIB_NO";
			toolTip = "$STR_LIB_TOOLTIP_NO_CHAL";
			default = 0;
			shortcuts[] = {"0x00050000 + 1"};
			onButtonClick = "LIB_chalChoice = 1;";
		};
		class Disable: Accept
		{
			idc = 20006;
			x = 0.573;
			w = 0.2;
			text = "$STR_LIB_BUTTON_DISABLE";
			toolTip = "$STR_LIB_TOOLTIP_DISABLE_CHAL";
			default = 0;
			shortcuts[] = {"0x00050000 + 2"};
			onButtonClick = "LIB_chalDisabled = true; LIB_chalChoice = 1;";
		};
	};
};
class RscLoadingText;
class RscStandardDisplay;
class RscLibrary_Load: RscStandardDisplay
{
	idd = 10003;
	class controlsBackground
	{
		class Background1: RscText
		{
			x = "SafeZoneXAbs";
			y = "SafeZoneY";
			w = "SafeZoneWAbs";
			h = "SafeZoneH";
			colorBackground[] = {0,0,0,1};
		};
	};
	class controls
	{
		class LoadText: RscLoadingText
		{
			idc = 101;
			colorText[] = {1,1,1,1};
		};
	};
};
//};
