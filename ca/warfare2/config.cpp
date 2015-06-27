////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:14 2014 : Source 'file' date Fri Oct 31 06:13:14 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class warfare2 : config.bin{
class CfgPatches
{
	class Warfare2
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"CA_Missions_SecOps"};
		requiredVersion = 0.1;
	};
};
class CfgSecOps
{
	class aerial_reconnaissance;
	class aerial_reconnaissanceWF: aerial_reconnaissance
	{
		scriptPath = "ca\missions\som\data\scripts\secops\aerial_reconnaissance\";
		maxCount = 1;
		timeAvailable = 10000;
		price = 5000;
		timeNotAddedAfterUse = 30;
	};
	class tactical_airstrike;
	class tactical_airstrikeWF: tactical_airstrike
	{
		scriptPath = "ca\missions\som\data\scripts\secops\tactical_airstrike\";
		maxCount = 1;
		timeAvailable = 10000;
		price = 6000;
	};
	class artillery_barrage;
	class artillery_barrageWF: artillery_barrage
	{
		scriptPath = "ca\missions\som\data\scripts\secops\artillery_barrage\";
		maxCount = 1;
		timeAvailable = 10000;
		price = 6000;
	};
	class transport;
	class transportWF: transport
	{
		scriptPath = "ca\missions\som\data\scripts\secops\transport\";
		maxCount = 1;
		timeAvailable = 10000;
		price = 3000;
	};
	class supply_drop;
	class supply_dropWF: supply_drop
	{
		scriptPath = "ca\missions\som\data\scripts\secops\supply_drop\";
		maxCount = 1;
		timeAvailable = 10000;
		price = 5000;
	};
};
class CfgIdentities
{
	class WFHQ_EN0
	{
		name = "$STR_DN_WARFARE_HQ_BASE_UNFOLDED";
		face = "Default";
		glasses = "None";
		speaker = "Male03EN";
		pitch = 1.0;
	};
	class WFHQ_EN1: WFHQ_EN0
	{
		speaker = "Male05EN";
	};
	class WFHQ_EN2: WFHQ_EN0
	{
		speaker = "Male03EN";
	};
	class WFHQ_RU0: WFHQ_EN0
	{
		speaker = "Female01RU";
	};
	class WFHQ_RU1: WFHQ_EN0
	{
		speaker = "Male03RU";
	};
	class WFHQ_RU2: WFHQ_EN0
	{
		speaker = "Female01RU";
	};
	class WFHQ_CZ0: WFHQ_EN0
	{
		speaker = "Female01CZ";
	};
	class WFHQ_CZ1: WFHQ_EN0
	{
		speaker = "Male03CZ";
	};
	class WFHQ_CZ2: WFHQ_EN0
	{
		speaker = "Female02CZ";
	};
};
class CfgLocationTypes
{
	class Strategic;
	class StrongpointArea: Strategic
	{
		logicClass = "LocationLogicCamp";
	};
	class FlatArea: Strategic
	{
		logicClass = "LocationLogicFlat";
	};
	class FlatAreaCity: FlatArea
	{
		logicClass = "LocationLogicCity";
	};
	class FlatAreaCitySmall: FlatAreaCity
	{
		logicClass = "LocationLogicCitySmall";
	};
	class CityCenter: Strategic
	{
		logicClass = "LocationLogicCityCenter";
	};
	class Airport: Strategic
	{
		logicClass = "LocationLogicAirport";
	};
};
class CfgMissions
{
	class Missions
	{
		class WarfareSPtesting
		{
			directory = "CA\Warfare2\ExampleMissions\WarfareExample.Chernarus";
			hidden = 1;
		};
	};
	class MPMissions{};
};
class CfgSounds
{
	class HeadquartersAttacked0
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_03.ogg",1,1};
		titles[] = {};
	};
	class HeadquartersAttacked1
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_03b.ogg",1,1};
		titles[] = {};
	};
	class BaseAttacked0
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_02.ogg",1,1};
		titles[] = {};
	};
	class BaseAttacked1
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_02b.ogg",1,1};
		titles[] = {};
	};
	class BaseSpotted0
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_01.ogg",1,1};
		titles[] = {};
	};
	class BaseSpotted1
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_01b.ogg",1,1};
		titles[] = {};
	};
	class TownAttacked0
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_04.ogg",1,1};
		titles[] = {};
	};
	class TownAttacked1
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_04b.ogg",1,1};
		titles[] = {};
	};
	class VoteForNewCommander
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_05.ogg",1,1};
		titles[] = {};
	};
	class RequestReinforcements0
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_06.ogg",1,1};
		titles[] = {};
	};
	class RequestReinforcements1
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_06b.ogg",1,1};
		titles[] = {};
	};
	class Reinforced
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_07.ogg",1,1};
		titles[] = {};
	};
	class RequestFireMission0
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_08.ogg",1,1};
		titles[] = {};
	};
	class RequestFireMission1
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_08b.ogg",1,1};
		titles[] = {};
	};
	class TownCaptured
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_09.ogg",1,1};
		titles[] = {};
	};
	class StrongpointCaptured
	{
		sound[] = {"\CA\Warfare2\Sounds\Sushi\warfare_10.ogg",1,1};
		titles[] = {};
	};
};
class WFGUIText
{
	type = 0;
	idc = -1;
	style = 0;
	colorText[] = {0.5,0.75,0.5,1};
	colorBackground[] = {0,0,0,0};
	font = "Bitstream";
	sizeEx = 0.025;
	w = 0.275;
	h = 0.04;
	text = "";
	shadow = 0;
};
class WFGUILargeText: WFGUIText
{
	sizeEx = 0.029;
	w = 0.275;
	h = 0.1;
};
class WFGUIButton
{
	type = 1;
	idc = -1;
	style = 2;
	borderSize = 0;
	colorText[] = {0.82,1.0,0.82,1.0};
	colorDisabled[] = {0.82,1.0,0.82,1.0};
	colorBackground[] = {0.24,0.5,0.24,1.0};
	colorBackgroundActive[] = {0.2,0.5,0.2,1.0};
	colorBackgroundDisabled[] = {0.82,1.0,0.82,1.0};
	colorFocused[] = {0.2,0.5,0.2,1.0};
	colorShadow[] = {0.1,0.1,0.1,1};
	colorBorder[] = {0,0,0,0};
	font = "Bitstream";
	sizeEx = 0.029;
	offsetX = 0.005;
	offsetY = 0.005;
	offsetPressedX = 0.0025;
	offsetPressedY = 0.0025;
	soundPush[] = {"\ca\ui\data\sound\new1",0.09,1};
	soundClick[] = {"\ca\ui\data\sound\mouse3",0.07,1};
	soundEnter[] = {"",0.1,1};
	soundEscape[] = {"ui\ui_cc",0.2,1};
	default = 0;
	text = "";
	action = "";
	w = 0.275;
	h = 0.04;
	shadow = 0;
};
class WFGUIImage
{
	type = 0;
	idc = -1;
	style = 48;
	colorText[] = {0.75,0.75,0.75,1};
	colorBackground[] = {0,0,0,0};
	font = "Bitstream";
	sizeEx = 0.025;
	soundClick[] = {"ui\ui_ok",0.2,1};
	soundEnter[] = {"ui\ui_over",0.2,1};
	soundEscape[] = {"ui\ui_cc",0.2,1};
	soundPush[] = {"",0.2,1};
	default = 0;
	w = 0.275;
	h = 0.04;
	text = "";
	shadow = 0;
};
class WFGUIImageAspectRatio: WFGUIImage
{
	style = "48 + 0x800";
};
class WFGUIListBox
{
	type = 5;
	style = 0;
	idc = -1;
	colorBackground[] = {0.2,0.35,0.2,1};
	colorSelect[] = {0.2,0.4,0.2,1};
	colorSelectBackground[] = {0.3,0.6,0.3,1};
	colorText[] = {0.5,0.75,0.5,1};
	font = "Bitstream";
	sizeEx = 0.029;
	rowHeight = 0.03;
	soundSelect[] = {"",0.1,1};
	soundExpand[] = {"",0.1,1};
	soundCollapse[] = {"",0.1,1};
	maxHistoryDelay = 10;
	w = 0.275;
	h = 0.04;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	colorScrollbar[] = {0.95,0.95,0.95,1};
	period = 1;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
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
	shadow = 0;
};
class WFGUIListNBox: WFGUIListBox
{
	type = 102;
	style = 16;
	color[] = {1,1,1,1};
	colorText[] = {1,1,1,0.75};
	colorScrollbar[] = {1,1,1,1};
	colorSelect[] = {1,1,1,1};
	colorSelect2[] = {1,1,1,1};
	colorSelectBackground[] = {0.5,0.75,0.5,1};
	colorSelectBackground2[] = {0.5,0.75,0.5,1};
	period = 1;
	colorBackground[] = {0,0,0,1};
	columns[] = {0.1,0.7,0.1,0.1};
	font = "Zeppelin32";
	drawSideArrows = 1;
	idcRight = -1;
	idcLeft = -1;
	lineSpacing = 1;
	text = "";
	class ScrollBar
	{
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		thumb = "\ca\ui\data\igui_scrollbar_thumb_ca.paa";
		arrowFull = "\ca\ui\data\igui_arrow_top_active_ca.paa";
		arrowEmpty = "\ca\ui\data\igui_arrow_top_ca.paa";
		border = "\ca\ui\data\igui_border_scroll_ca.paa";
	};
};
class WFGUIComboBox
{
	type = 4;
	style = 0;
	idc = -1;
	colorBackground[] = {0.2,0.35,0.2,1};
	colorSelect[] = {0.2,0.4,0.2,1};
	colorSelectBackground[] = {0.3,0.6,0.3,1};
	colorText[] = {0.5,0.75,0.5,1};
	font = "Bitstream";
	sizeEx = 0.029;
	rowHeight = 0.04;
	soundSelect[] = {"",0.1,1};
	soundExpand[] = {"",0.1,1};
	soundCollapse[] = {"",0.1,1};
	maxHistoryDelay = 10;
	w = 0.275;
	h = 0.04;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	wholeHeight = 0.3;
	colorScrollbar[] = {0.95,0.95,0.95,1};
	period = 1;
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
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
	shadow = 0;
};
class WFGUIActiveText
{
	type = 11;
	idc = -1;
	style = 0;
	SizeEx = 0.05;
	font = "BitStream";
	color[] = {0.5,0.75,0.5,1};
	colorActive[] = {1,1,1,1};
	colorText[] = {0.5,0.75,0.5,1};
	colorBackground[] = {0,0,0,0};
	soundEnter[] = {"",0.1,1};
	soundPush[] = {"",0.1,1};
	soundClick[] = {"",0.1,1};
	soundEscape[] = {"",0.1,1};
	text = "";
	shadow = 0;
};
class WFGUIActiveImage: WFGUIActiveText
{
	style = 48;
	color[] = {0.75,0.75,0.75,1};
	colorText[] = {0.75,0.75,0.75,1};
	colorActive[] = {1,1,1,1};
};
class WFGUIActiveImageAspectRatio: WFGUIActiveImage
{
	style = "48 + 0x800";
};
class WFGUIStructuredText
{
	idc = -1;
	type = 13;
	style = 0;
	size = 0.02;
	w = 0.275;
	h = 0.04;
	text = "";
	colorText[] = {1,1,1,1};
	class Attributes
	{
		font = "Zeppelin32";
		color = "#FFFFFF";
		align = "left";
		shadow = 0;
	};
	shadow = 0;
};
class WFGUISlider
{
	type = 43;
	style = "0x400  + 				0x10";
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.2;
	color[] = {1,1,1,0.4};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.2};
	arrowEmpty = "\ca\ui\data\ui_arrow_left_ca.paa";
	arrowFull = "\ca\ui\data\ui_arrow_left_active_ca.paa";
	border = "\ca\ui\data\ui_border_frame_ca.paa";
	thumb = "\ca\ui\data\ui_slider_bar_ca.paa";
	shadow = 0;
};
class WFGUIShortcutButton
{
	type = 16;
	idc = -1;
	style = 2;
	x = 0;
	y = 0;
	w = 0.275;
	h = 0.04;
	default = 0;
	color[] = {1,1,1,1};
	color2[] = {1,1,1,0.85};
	colorBackground[] = {1,1,1,1};
	colorbackground2[] = {1,1,1,0.85};
	colorDisabled[] = {1,1,1,0.4};
	periodFocus = 1.2;
	periodOver = 0.8;
	class HitZone
	{
		left = 0.002;
		top = 0.003;
		right = 0.002;
		bottom = 0.016;
	};
	class ShortcutPos
	{
		left = -0.006;
		top = -0.007;
		w = 0.039;
		h = 0.052;
	};
	class TextPos
	{
		left = 0.02;
		top = 0.0;
		right = 0.002;
		bottom = 0.016;
	};
	animTextureNormal = "\ca\ui\data\igui_button_normal_ca.paa";
	animTextureDisabled = "\ca\ui\data\igui_button_disabled_ca.paa";
	animTextureOver = "\ca\ui\data\igui_button_over_ca.paa";
	animTextureFocused = "\ca\ui\data\igui_button_focus_ca.paa";
	animTexturePressed = "\ca\ui\data\igui_button_down_ca.paa";
	animTextureDefault = "\ca\ui\data\igui_button_normal_ca.paa";
	soundEnter[] = {"\ca\ui\data\sound\mouse2",0.09,1};
	soundPush[] = {"\ca\ui\data\sound\new1",0.09,1};
	soundClick[] = {"\ca\ui\data\sound\mouse3",0.07,1};
	soundEscape[] = {"\ca\ui\data\sound\mouse1",0.09,1};
	textureNoShortcut = "";
	period = 0.4;
	font = "Zeppelin32";
	size = 0.039;
	sizeEx = 0.039;
	text = "";
	action = "";
	class Attributes
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "center";
		shadow = "true";
	};
	class AttributesImage
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
	};
	shadow = 0;
};
class WFGUIGearShortcutButton: WFGUIShortcutButton
{
	w = 0.0392;
	h = 0.0523;
	class HitZone
	{
		left = 0.0;
		top = 0.0;
		right = 0.0;
		bottom = 0.0;
	};
	class TextPos
	{
		left = 0.003;
		top = 0.001;
		right = 0.0;
		bottom = 0.0;
	};
	sizeEx = 0.1;
	animTextureNormal = "\ca\ui\data\igui_gear_normal_ca.paa";
	animTextureDisabled = "\ca\ui\data\igui_gear_disabled_ca.paa";
	animTextureOver = "\ca\ui\data\igui_gear_over_ca.paa";
	animTextureFocused = "\ca\ui\data\igui_gear_focus_ca.paa";
	animTexturePressed = "\ca\ui\data\igui_gear_down_ca.paa";
	animTextureDefault = "\ca\ui\data\igui_gear_normal_ca.paa";
	class Attributes
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "center";
		shadow = "false";
	};
};
class WFBuyMenuBase
{
	idd = 220100;
	movingEnable = 1;
	enableSimulation = 1;
	enableDisplay = 1;
	class controlsBackground
	{
		class Background: WFGUIImage
		{
			x = 0.04;
			y = 0.01;
			w = 1.25;
			h = 1.67;
			moving = 1;
			text = "\ca\ui\data\igui_background_buy_units_ca.paa";
		};
	};
	class controls
	{
		class MenuTitle: WFGUIText
		{
			sizeEx = 0.04;
			style = 0;
			x = 0.05;
			y = 0.005;
			colorText[] = {0.7,1,0.7,1};
		};
		class FundsLabel: WFGUIText
		{
			idc = "3600 + 2";
			style = 0;
			x = 0.5;
			y = 0.05;
			w = 0.225;
			sizeEx = 0.04;
			colorText[] = {0.7,1,0.7,1};
		};
		class CostLabel: FundsLabel
		{
			idc = "3600 + 1";
			x = 0.725;
		};
		class MainListLabel: FundsLabel
		{
			idc = "3600 + 3";
			x = 0.0433014;
			y = 0.125;
			w = 0.4;
		};
		class MainList: WFGUIListNBox
		{
			idc = 3700;
			columns[] = {0.01,0.24};
			drawSideArrows = 0;
			idcRight = -1;
			idcLeft = -1;
			x = 0.043;
			y = 0.167676;
			w = 0.45;
			h = 0.444;
		};
		class SelectedItemName: MainListLabel
		{
			idc = "3600 + 4";
			x = 0.0416704;
			y = 0.627451;
			w = 0.2;
			text = "";
		};
		class SelectedItemDescription: WFGUIStructuredText
		{
			idc = 3800;
			size = 0.03;
			x = 0.0414969;
			y = 0.663641;
			w = 0.458;
			h = 0.152;
			colorText[] = {1,1,1,1};
			class Attributes
			{
				font = "Zeppelin32";
				color = "#F2F2F2";
				align = "left";
				shadow = 1;
			};
		};
		class CloseButton: WFGUIShortcutButton
		{
			idc = "3400 + 10";
			x = 0.0392;
			y = 0.897;
			w = 0.185;
			h = 0.052;
			shortcuts[] = {327681};
			text = "$STR_DISP_CLOSE";
		};
		class FilterButton: CloseButton
		{
			idc = "3400 + 11";
			x = "0.0392 + 0.245";
			shortcuts[] = {327683};
			text = "$STR_GEAR_FILTER";
		};
		class UpgradeButton: CloseButton
		{
			idc = "3400 + 12";
			x = "0.0392 + 0.245 * 2";
			shortcuts[] = {327682};
			text = "$STRWFUPGRADE";
		};
		class CancelButton: CloseButton
		{
			idc = "3400 + 13";
			x = "0.0392 + 0.245 * 3";
			w = 0.18;
			shortcuts[] = {327680};
			text = "$STRWFCANCEL";
		};
	};
};
class WFFactoryMenu: WFBuyMenuBase
{
	onLoad = "BIS_WF_UIFactoryMenuActive = true;[_this] Call BIS_WF_OpenFactoryMenu";
	onUnload = "BIS_WF_UIFactoryMenuActive = false";
	class controls: controls
	{
		class MenuTitle: MenuTitle
		{
			text = "$STR_client_playerrespawn.sqf1";
		};
		class FundsLabel: FundsLabel{};
		class CostLabel: CostLabel{};
		class MessageLabel: FundsLabel
		{
			idc = "3600 + 5";
			y = 0.08;
		};
		class InUseLabel: WFGUIText
		{
			idc = "3600 + 3";
			style = 2;
			x = 0.5;
			y = 0.125;
			w = 0.45;
			sizeEx = 0.04;
			colorText[] = {0.7,1,0.7,1};
			text = "";
		};
		class FilterButtonBarracks: WFGUIActiveImageAspectRatio
		{
			idc = 3400;
			x = 0.085;
			y = 0.047;
			w = 0.053;
			h = 0.086;
			text = "\CA\Warfare2\Images\FactoryIconBarracks.paa";
			action = "[FindDisplay 220100,BIS_WF_FACTORYFILTER,BIS_WF_FILTERBARRACKS] Call BIS_WF_UpdateFactoryMenuEvent";
			color[] = {1,1,1,1};
			colorActive[] = {0.7,1,0.7,1};
		};
		class FilterButtonLight: FilterButtonBarracks
		{
			idc = "3400 + 1";
			x = 0.139;
			text = "\CA\Warfare2\Images\FactoryIconLight.paa";
			action = "[FindDisplay 220100,BIS_WF_FACTORYFILTER,BIS_WF_FILTERLIGHT] Call BIS_WF_UpdateFactoryMenuEvent";
		};
		class FilterButtonHeavy: FilterButtonBarracks
		{
			idc = "3400 + 2";
			x = 0.203;
			text = "\CA\Warfare2\Images\FactoryIconHeavy.paa";
			action = "[FindDisplay 220100,BIS_WF_FACTORYFILTER,BIS_WF_FILTERHEAVY] Call BIS_WF_UpdateFactoryMenuEvent";
		};
		class FilterButtonAircraft: FilterButtonBarracks
		{
			idc = "3400 + 3";
			x = 0.267;
			text = "\CA\Warfare2\Images\FactoryIconAircraft.paa";
			action = "[FindDisplay 220100,BIS_WF_FACTORYFILTER,BIS_WF_FILTERAIRCRAFT] Call BIS_WF_UpdateFactoryMenuEvent";
		};
		class FilterButtonAirport: FilterButtonBarracks
		{
			idc = "3400 + 4";
			x = 0.331;
			text = "\CA\Warfare2\Images\FactoryIconAirport.paa";
			action = "[FindDisplay 220100,BIS_WF_FACTORYFILTER,BIS_WF_FILTERAIRPORT] Call BIS_WF_UpdateFactoryMenuEvent";
		};
		class FilterButtonDepot: FilterButtonBarracks
		{
			idc = "3400 + 5";
			x = 0.395;
			text = "\CA\Warfare2\Images\FactoryIconDepot.paa";
			action = "[FindDisplay 220100,BIS_WF_FACTORYFILTER,BIS_WF_FILTERDEPOT] Call BIS_WF_UpdateFactoryMenuEvent";
		};
		class FactoryListLabel: MainListLabel
		{
			text = "$STR_GEAR_ITEMS";
		};
		class FactoryList: MainList
		{
			onLBSelChanged = "[FindDisplay 220100,BIS_WF_FACTORYUNITSELECT] Call BIS_WF_UpdateFactoryMenuEvent";
			onLBDblClick = "[FindDisplay 220100,BIS_WF_FACTORYUNITADD,false] Call BIS_WF_UpdateFactoryMenuEvent";
		};
		class SelectedItemDescription: SelectedItemDescription
		{
			idc = 3800;
			size = 0.04;
			h = 0.2;
			w = 0.29;
		};
		class SelectedItemDetailedDescription: SelectedItemDescription
		{
			idc = "3800 + 1";
			size = 0.0232;
			x = 0.5;
			h = 0.225;
			w = 0.465;
		};
		class SelectedItemImage: WFGUIImageAspectRatio
		{
			idc = 3500;
			x = 0.3;
			y = 0.663641;
			w = 0.2;
			h = 0.2;
			text = "";
		};
		class BuildQueue: WFGUIListNBox
		{
			idc = "3700 + 1";
			columns[] = {0.01,0.15};
			drawSideArrows = 0;
			x = 0.501;
			y = 0.167676;
			w = 0.45;
			h = 0.444;
			onLBSelChanged = "[FindDisplay 220100,BIS_WF_QUEUESELECT] Call BIS_WF_UpdateFactoryMenuEvent";
			onLBDblClick = "[FindDisplay 220100,BIS_WF_QUEUEREMOVE] Call BIS_WF_UpdateFactoryMenuEvent";
		};
		class FactoryCloseButton: CloseButton
		{
			action = "CloseDialog 0";
		};
		class FactoryFilterButton: FilterButton
		{
			action = "[FindDisplay 220100,BIS_WF_FACTORYFILTER,-1] Call BIS_WF_UpdateFactoryMenuEvent";
		};
		class FactoryBuyEmptyButton: UpgradeButton
		{
			idc = "3400 + 6";
			text = "$STRWFADDEMPTY";
			action = "[FindDisplay 220100,BIS_WF_FACTORYUNITADD,true] Call BIS_WF_UpdateFactoryMenuEvent";
		};
		class FactoryClearQueueButton: CancelButton
		{
			text = "$STRWFCLEAR";
			action = "[FindDisplay 220100,BIS_WF_FACTORYCLEARQUEUE] Call BIS_WF_UpdateFactoryMenuEvent";
		};
	};
};
class WFGearMenu: WFBuyMenuBase
{
	idd = 220100;
	onLoad = "if (IsNil 'BIS_WF_UIGearFilter') then {BIS_WF_UIGearFilter = 0};if (BIS_WF_UIGearFilter == BIS_WF_FILTERCLASSIC) then {BIS_WF_UIGearFilter = 0};[_this,BIS_WF_UIGearFilter] Call BIS_WF_OpenGearMenu";
	onUnload = "if (BIS_WF_UICurrentPrimary != -2) then {[FindDisplay 220100,BIS_WF_GEARBUY,-1] Call BIS_WF_UpdateGearMenuEvent};";
	movingEnable = 1;
	enableSimulation = 1;
	enableDisplay = 1;
	class controlsBackground: controlsBackground
	{
		class Background: Background
		{
			text = "\ca\ui\data\igui_background_gear_ca.paa";
		};
	};
	class controls: controls
	{
		class FilterButtonSidearm: WFGUIActiveImageAspectRatio
		{
			idc = "3400 + 4";
			x = 0.325;
			y = 0.047;
			w = 0.086;
			h = 0.086;
			color[] = {1,1,1,1};
			colorActive[] = {0.7,1,0.7,1};
			text = "\CA\Warfare2\Images\GearIconSidearm.paa";
			action = "[FindDisplay 220100,BIS_WF_GEARFILTER,BIS_WF_FILTERSIDEARM] Call BIS_WF_UpdateGearMenuEvent";
		};
		class FilterButtonMisc: FilterButtonSidearm
		{
			idc = "3400 + 5";
			x = 0.375;
			text = "\CA\Warfare2\Images\GearIconMisc.paa";
			action = "[FindDisplay 220100,BIS_WF_GEARFILTER,BIS_WF_FILTERMISC] Call BIS_WF_UpdateGearMenuEvent";
		};
		class FilterButtonSecondary: FilterButtonSidearm
		{
			idc = "3400 + 3";
			x = 0.266;
			text = "\CA\Warfare2\Images\GearIconSecondary.paa";
			action = "[FindDisplay 220100,BIS_WF_GEARFILTER,BIS_WF_FILTERSECONDARY] Call BIS_WF_UpdateGearMenuEvent";
		};
		class FilterButtonPrimary: FilterButtonSidearm
		{
			idc = "3400 + 2";
			x = 0.193;
			text = "\CA\Warfare2\Images\GearIconPrimary.paa";
			action = "[FindDisplay 220100,BIS_WF_GEARFILTER,BIS_WF_FILTERPRIMARY] Call BIS_WF_UpdateGearMenuEvent";
		};
		class FilterButtonTemplate: FilterButtonSidearm
		{
			idc = 3400;
			x = 0.075;
			text = "\CA\Warfare2\Images\GearIconTemplate.paa";
			action = "[FindDisplay 220100,BIS_WF_GEARFILTER,BIS_WF_FILTERTEMPLATE] Call BIS_WF_UpdateGearMenuEvent";
		};
		class FilterButtonAll: FilterButtonTemplate
		{
			idc = "3400 + 1";
			x = 0.125;
			text = "\CA\Warfare2\Images\GearIconAll.paa";
			action = "[FindDisplay 220100,BIS_WF_GEARFILTER,BIS_WF_FILTERALL] Call BIS_WF_UpdateGearMenuEvent";
		};
		class MenuTitle: MenuTitle
		{
			text = "$STR_MAP_GEAR";
		};
		class FundsLabel: FundsLabel{};
		class UpgradeLabel: FundsLabel
		{
			idc = "3600 + 1";
			x = 0.725;
		};
		class AvailableItemsLabel: MainListLabel
		{
			text = "$STR_GEAR_ITEMS";
		};
		class MessageLabel: FundsLabel
		{
			idc = "3600 + 5";
			y = 0.86;
		};
		class MainList: MainList
		{
			onLBSelChanged = "[FindDisplay 220100,BIS_WF_GEARSELECT,-1,IDCGENERICLIST] Call BIS_WF_UpdateGearMenuEvent";
			onLBDblClick = "[FindDisplay 220100,BIS_WF_GEARADD,-1,IDCGENERICLIST] Call BIS_WF_UpdateGearMenuEvent";
		};
		class SelectedItemDescription: SelectedItemDescription{};
		class SelectedItemImage: WFGUIImageAspectRatio
		{
			idc = "3500 + 37";
			x = 0.045;
			y = 0.786;
			w = 0.157;
			h = 0.105;
			text = "";
		};
		class SelectedItemImage1: SelectedItemImage
		{
			idc = "3500 + 38";
			x = 0.225;
			text = "";
		};
		class SelectedItemImage2: SelectedItemImage
		{
			idc = "3500 + 39";
			x = 0.39;
			w = 0.11;
			h = 0.0735;
			text = "";
		};
		class PrimaryWeapon: WFGUIActiveImageAspectRatio
		{
			idc = 3500;
			x = 0.502;
			y = 0.244;
			w = 0.286;
			h = 0.15;
			soundDoubleClick[] = {"",0.1,1};
			colorBackground[] = {0.6,0.83,0.47,1};
			colorBackgroundSelected[] = {0.6,0.83,0.47,1};
			colorFocused[] = {0,0,0,0};
			color[] = {0.85,0.85,0.85,1};
			colorText[] = {0.85,0.85,0.85,1};
			colorActive[] = {1,1,1,1};
			text = "\Ca\UI\Data\ui_gear_gun_gs.paa";
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVEPRIMARY,-1] Call BIS_WF_UpdateGearMenuEvent";
		};
		class SecondaryWeapon: PrimaryWeapon
		{
			idc = "3500 + 1";
			y = 0.398;
			text = "\Ca\UI\Data\ui_gear_sec_gs.paa";
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVESECONDARY,-1] Call BIS_WF_UpdateGearMenuEvent";
		};
		class Sidearm: PrimaryWeapon
		{
			idc = "3500 + 2";
			x = 0.56;
			y = 0.551;
			w = 0.113;
			h = 0.15;
			text = "\Ca\UI\Data\ui_gear_hgun_gs.paa";
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVESIDEARM,-1] Call BIS_WF_UpdateGearMenuEvent";
		};
		class InventorySlot0: PrimaryWeapon
		{
			idc = "3500 + 3";
			x = 0.79;
			y = 0.244;
			w = 0.055;
			h = 0.074;
			text = "\Ca\UI\Data\ui_gear_mag_gs.paa";
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVEMISC,0] Call BIS_WF_UpdateGearMenuEvent";
		};
		class InventorySlot1: InventorySlot0
		{
			idc = "3500 + 4";
			x = 0.847;
			y = 0.244;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVEMISC,1] Call BIS_WF_UpdateGearMenuEvent";
		};
		class InventorySlot2: InventorySlot0
		{
			idc = "3500 + 5";
			x = 0.904366;
			y = 0.244;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVEMISC,2] Call BIS_WF_UpdateGearMenuEvent";
		};
		class InventorySlot3: InventorySlot0
		{
			idc = "3500 + 6";
			x = 0.79;
			y = 0.321;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVEMISC,3] Call BIS_WF_UpdateGearMenuEvent";
		};
		class InventorySlot4: InventorySlot0
		{
			idc = "3500 + 7";
			x = 0.847;
			y = 0.321;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVEMISC,4] Call BIS_WF_UpdateGearMenuEvent";
		};
		class InventorySlot5: InventorySlot0
		{
			idc = "3500 + 8";
			x = 0.904366;
			y = 0.321;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVEMISC,5] Call BIS_WF_UpdateGearMenuEvent";
		};
		class InventorySlot6: InventorySlot0
		{
			idc = "3500 + 9";
			x = 0.79;
			y = 0.398;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVEMISC,6] Call BIS_WF_UpdateGearMenuEvent";
		};
		class InventorySlot7: InventorySlot0
		{
			idc = "3500 + 10";
			x = 0.847;
			y = 0.398;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVEMISC,7] Call BIS_WF_UpdateGearMenuEvent";
		};
		class InventorySlot8: InventorySlot0
		{
			idc = "3500 + 11";
			x = 0.904366;
			y = 0.398;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVEMISC,8] Call BIS_WF_UpdateGearMenuEvent";
		};
		class InventorySlot9: InventorySlot0
		{
			idc = "3500 + 12";
			x = 0.79;
			y = 0.474;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVEMISC,9] Call BIS_WF_UpdateGearMenuEvent";
		};
		class InventorySlot10: InventorySlot0
		{
			idc = "3500 + 13";
			x = 0.847;
			y = 0.474;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVEMISC,10] Call BIS_WF_UpdateGearMenuEvent";
		};
		class InventorySlot11: InventorySlot0
		{
			idc = "3500 + 14";
			x = 0.904366;
			y = 0.474;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVEMISC,11] Call BIS_WF_UpdateGearMenuEvent";
		};
		class SidearmInventorySlot0: InventorySlot0
		{
			idc = "3500 + 15";
			x = 0.674;
			y = 0.551;
			w = 0.055;
			h = 0.074;
			text = "\Ca\UI\Data\ui_gear_hgunmag_gs.paa";
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVESIDEARMMISC,0] Call BIS_WF_UpdateGearMenuEvent";
		};
		class SidearmInventorySlot1: SidearmInventorySlot0
		{
			idc = "3500 + 16";
			x = 0.733;
			y = 0.551;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVESIDEARMMISC,1] Call BIS_WF_UpdateGearMenuEvent";
		};
		class SidearmInventorySlot2: SidearmInventorySlot0
		{
			idc = "3500 + 17";
			x = 0.79;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVESIDEARMMISC,2] Call BIS_WF_UpdateGearMenuEvent";
		};
		class SidearmInventorySlot3: SidearmInventorySlot0
		{
			idc = "3500 + 18";
			x = 0.847;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVESIDEARMMISC,3] Call BIS_WF_UpdateGearMenuEvent";
		};
		class SidearmInventorySlot4: SidearmInventorySlot0
		{
			idc = "3500 + 19";
			x = 0.674;
			y = 0.628;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVESIDEARMMISC,4] Call BIS_WF_UpdateGearMenuEvent";
		};
		class SidearmInventorySlot5: SidearmInventorySlot0
		{
			idc = "3500 + 20";
			x = 0.733;
			y = 0.628;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVESIDEARMMISC,5] Call BIS_WF_UpdateGearMenuEvent";
		};
		class SidearmInventorySlot6: SidearmInventorySlot0
		{
			idc = "3500 + 21";
			x = 0.79;
			y = 0.628;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVESIDEARMMISC,6] Call BIS_WF_UpdateGearMenuEvent";
		};
		class SidearmInventorySlot7: SidearmInventorySlot0
		{
			idc = "3500 + 22";
			x = 0.847;
			y = 0.628;
			action = "[FindDisplay 220100,BIS_WF_GEARREMOVESIDEARMMISC,7] Call BIS_WF_UpdateGearMenuEvent";
		};
		class MiscInventorySlot0: InventorySlot0
		{
			idc = "3500 + 23";
			x = 0.56;
			y = 0.705;
			w = 0.055;
			h = 0.074;
			colorActive[] = {0.85,0.85,0.85,1};
			text = "\Ca\UI\Data\ui_gear_eq_gs.paa";
			action = "";
		};
		class MiscInventorySlot1: MiscInventorySlot0
		{
			idc = "3500 + 24";
			x = 0.617;
			y = 0.705;
		};
		class MiscInventorySlot2: MiscInventorySlot0
		{
			idc = "3500 + 25";
			x = 0.674;
			y = 0.705;
		};
		class MiscInventorySlot3: MiscInventorySlot0
		{
			idc = "3500 + 26";
			x = 0.733;
			y = 0.705;
		};
		class MiscInventorySlot4: MiscInventorySlot0
		{
			idc = "3500 + 27";
			x = 0.79;
			y = 0.705;
		};
		class MiscInventorySlot5: MiscInventorySlot0
		{
			idc = "3500 + 28";
			x = 0.847;
			y = 0.705;
		};
		class MiscInventorySlot6: MiscInventorySlot0
		{
			idc = "3500 + 29";
			x = 0.56;
			y = 0.782;
		};
		class MiscInventorySlot7: MiscInventorySlot0
		{
			idc = "3500 + 30";
			x = 0.617;
			y = 0.782;
		};
		class MiscInventorySlot8: MiscInventorySlot0
		{
			idc = "3500 + 31";
			x = 0.674;
			y = 0.782;
		};
		class MiscInventorySlot9: MiscInventorySlot0
		{
			idc = "3500 + 32";
			x = 0.733;
			y = 0.782;
		};
		class MiscInventorySlot10: MiscInventorySlot0
		{
			idc = "3500 + 33";
			x = 0.79;
			y = 0.782;
		};
		class MiscInventorySlot11: MiscInventorySlot0
		{
			idc = "3500 + 34";
			x = 0.847;
			y = 0.782;
		};
		class SpecialInventorySlot0: InventorySlot0
		{
			idc = "3500 + 35";
			x = 0.502;
			y = 0.09;
			w = 0.113;
			h = 0.15;
			colorActive[] = {0.85,0.85,0.85,1};
			text = "\Ca\UI\Data\ui_gear_eq_gs.paa";
			action = "";
		};
		class SpecialInventorySlot1: SpecialInventorySlot0
		{
			idc = "3500 + 36";
			x = 0.847;
			y = 0.09;
		};
		class CloseButton: CloseButton
		{
			x = 0.0392;
			w = 0.174;
			action = "[FindDisplay 220100,BIS_WF_GEARBUY,-1] Call BIS_WF_UpdateGearMenuEvent";
		};
		class FilterButton: FilterButton
		{
			x = "0.0392 + 0.185";
			w = 0.174;
			action = "BIS_WF_UIGearFilter = (BIS_WF_UIGearFilter + 1) % (BIS_WF_FILTERMISC + 1);[FindDisplay 220100,BIS_WF_GEARFILTER,BIS_WF_UIGearFilter] Call BIS_WF_UpdateGearMenuEvent";
		};
		class UpgradeButton: UpgradeButton
		{
			x = "0.0392 + 0.185 * 2";
			w = 0.174;
			action = "[FindDisplay 220100,BIS_WF_GEARUPGRADE,-1] Call BIS_WF_UpdateGearMenuEvent";
		};
		class RearmButton: UpgradeButton
		{
			text = "$STR_GEAR_REARM";
			x = "0.0392 + 0.185 * 3";
			w = 0.174;
			action = "[FindDisplay 220100,BIS_WF_GEARREARM,-1] Call BIS_WF_UpdateGearMenuEvent";
			shortcuts[] = {};
		};
		class CancelButton: CancelButton
		{
			x = "0.0392 + 0.185 * 4";
			w = 0.174;
			action = "BIS_WF_UICurrentPrimary = -2;CloseDialog 0";
		};
	};
};
class WFCityMenu
{
	idd = 220100;
	movingEnable = 1;
	enableSimulation = 1;
	enableDisplay = 1;
	onLoad = "[_this] Call BIS_WF_OpenCityMenu";
	class controlsBackground
	{
		class Background: WFGUIImage
		{
			x = 0.25;
			y = 0.4;
			w = 1.1;
			h = 0.25;
			moving = 1;
			text = "\ca\ui\data\ui_background_messagebox_ca.paa";
		};
	};
	class controls
	{
		class MenuTitle: WFGUIText
		{
			idc = 3600;
			style = 2;
			sizeEx = 0.035;
			x = 0.35;
			y = 0.41;
			w = 0.4;
			colorText[] = {0.7,1,0.7,1};
		};
		class SupplyRatioIncrease: WFGUIActiveImageAspectRatio
		{
			idc = 3400;
			x = 0.25;
			y = 0.455;
			w = 0.064;
			h = 0.064;
			color[] = {1,1,1,1};
			colorActive[] = {0.7,1,0.7,1};
			text = "\ca\ui\data\arrow_left_ca.paa";
			action = "[FindDisplay 220100,0] Call BIS_WF_UpdateCityMenuEvent";
			shortcuts[] = {327682};
		};
		class SupplyRatioReduce: SupplyRatioIncrease
		{
			idc = "3400 + 1";
			x = 0.8;
			text = "\ca\ui\data\arrow_right_ca.paa";
			action = "[FindDisplay 220100,1] Call BIS_WF_UpdateCityMenuEvent";
			shortcuts[] = {327683};
		};
		class SupplyRatioButton0: WFGUIActiveImageAspectRatio
		{
			idc = "3400 + 2";
			x = 0.3;
			y = 0.455;
			w = 0.064;
			h = 0.064;
			color[] = {0.9,0.9,0.9,0.7};
			colorActive[] = {0.7,1,0.7,1};
			text = "\CA\Warfare2\Images\wf_iconcity_supply_ca.paa";
			action = "[FindDisplay 220100,0.1] Call BIS_WF_UpdateCityMenuEvent";
		};
		class SupplyRatioButton1: SupplyRatioButton0
		{
			idc = "3400 + 3";
			x = 0.35;
			color[] = {1,1,1,1};
			action = "[FindDisplay 220100,0.2] Call BIS_WF_UpdateCityMenuEvent";
		};
		class SupplyRatioButton2: SupplyRatioButton1
		{
			idc = "3400 + 4";
			x = 0.4;
			action = "[FindDisplay 220100,0.3] Call BIS_WF_UpdateCityMenuEvent";
		};
		class SupplyRatioButton3: SupplyRatioButton1
		{
			idc = "3400 + 5";
			x = 0.45;
			action = "[FindDisplay 220100,0.4] Call BIS_WF_UpdateCityMenuEvent";
		};
		class SupplyRatioButton4: SupplyRatioButton1
		{
			idc = "3400 + 6";
			x = 0.5;
			action = "[FindDisplay 220100,0.5] Call BIS_WF_UpdateCityMenuEvent";
		};
		class SupplyRatioButton5: SupplyRatioButton1
		{
			idc = "3400 + 7";
			x = 0.55;
			action = "[FindDisplay 220100,0.6] Call BIS_WF_UpdateCityMenuEvent";
		};
		class SupplyRatioButton6: SupplyRatioButton1
		{
			idc = "3400 + 8";
			x = 0.6;
			action = "[FindDisplay 220100,0.7] Call BIS_WF_UpdateCityMenuEvent";
		};
		class SupplyRatioButton7: SupplyRatioButton1
		{
			idc = "3400 + 9";
			x = 0.65;
			action = "[FindDisplay 220100,0.8] Call BIS_WF_UpdateCityMenuEvent";
		};
		class SupplyRatioButton8: SupplyRatioButton1
		{
			idc = "3400 + 10";
			x = 0.7;
			action = "[FindDisplay 220100,0.9] Call BIS_WF_UpdateCityMenuEvent";
		};
		class SupplyRatioButton9: SupplyRatioButton0
		{
			idc = "3400 + 11";
			x = 0.75;
			action = "[FindDisplay 220100,0.9] Call BIS_WF_UpdateCityMenuEvent";
		};
		class CloseButton: WFGUIShortcutButton
		{
			x = 0.7;
			y = 0.54;
			w = 0.185;
			h = 0.052;
			shortcuts[] = {327681};
			text = "$STR_DISP_CLOSE";
			action = "CloseDialog 0;";
		};
	};
};
class WFTeamMenu
{
	idd = 220100;
	movingEnable = 1;
	enableSimulation = 1;
	enableDisplay = 1;
	onLoad = "[_this] Call BIS_WF_OpenTeamMenu";
	onUnload = "BIS_WF_UISelectedTeam = ObjNull;";
	class controlsBackground
	{
		class Background: WFGUIImage
		{
			x = 0.2;
			y = 0.1;
			w = 0.95;
			h = 0.8;
			moving = 1;
			text = "\ca\ui\data\igui_wf_vote_background_ca.paa";
		};
	};
	class controls
	{
		class MenuTitle: WFGUIText
		{
			idc = "3600 + 50";
			style = 2;
			sizeEx = 0.035;
			x = 0.45;
			y = 0.098;
			w = 0.2;
			colorText[] = {0.7,1,0.7,1};
			text = "$STRWFTEAMS";
		};
		class PlayerHUDButton: WFGUIActiveImageAspectRatio
		{
			idc = "3400 + 4";
			x = 0.215;
			y = 0.1;
			w = 0.035;
			h = 0.035;
			color[] = {0.7,1,0.7,1};
			colorActive[] = {1,1,1,1};
			text = "\CA\Warfare2\Images\CheckboxEmpty.paa";
			action = "[FindDisplay 220100,BIS_WF_TEAMTOGGLEHUD] Call BIS_WF_UpdateTeamMenuEvent";
		};
		class PlayerHUDText: MenuTitle
		{
			idc = "3600 + 51";
			style = 0;
			x = 0.245;
			colorText[] = {0.7,1,0.7,1};
			text = "$STR_WFPLAYERHUD";
		};
		class NameLabel: WFGUIText
		{
			idc = 3600;
			style = 0;
			sizeEx = 0.03;
			x = 0.245;
			y = 0.135;
			w = 0.2;
			colorText[] = {0.7,1,0.7,1};
			text = "$STRWFTEAM";
		};
		class SizeLabel: NameLabel
		{
			idc = "3600 + 1";
			x = 0.408;
			text = "$STRWFQTY";
		};
		class FundsLabel: NameLabel
		{
			idc = "3600 + 2";
			x = 0.4875;
			text = "$STRWFFUNDS";
		};
		class MissionLabel: NameLabel
		{
			idc = "3600 + 3";
			x = 0.5775;
			text = "$STRWFMISSION";
		};
		class LocationNearLabel: NameLabel
		{
			idc = "3600 + 4";
			x = 0.6975;
			text = "$STRWFLOCATION";
		};
		class MainList: WFGUIListNBox
		{
			idc = 3700;
			columns[] = {-0.01,0.07,0.285,0.4,0.5325,0.7125};
			drawSideArrows = 0;
			sizeEx = 0.03;
			rowHeight = 0.034;
			x = 0.21;
			y = 0.17;
			w = 0.675;
			h = 0.5;
			onLBSelChanged = "[FindDisplay 220100,BIS_WF_TEAMLISTSELECT] Call BIS_WF_UpdateTeamMenuEvent";
			onLBDblClick = "[FindDisplay 220100,BIS_WF_TEAMSETTYPE] Call BIS_WF_UpdateTeamMenuEvent";
		};
		class TeamTypeList: MainList
		{
			idc = "3700 + 1";
			columns[] = {0.04};
		};
		class TeamMember0: WFGUIImageAspectRatio
		{
			idc = 3500;
			x = 0.21;
			y = 0.665;
			w = 0.05;
		};
		class TeamMember1: TeamMember0
		{
			idc = "3500 + 1";
			x = 0.265;
		};
		class TeamMember2: TeamMember0
		{
			idc = "3500 + 2";
			x = 0.32;
		};
		class TeamMember3: TeamMember0
		{
			idc = "3500 + 3";
			x = 0.375;
		};
		class TeamMember4: TeamMember0
		{
			idc = "3500 + 4";
			x = 0.43;
		};
		class TeamMember5: TeamMember0
		{
			idc = "3500 + 5";
			x = 0.485;
		};
		class TeamMember6: TeamMember0
		{
			idc = "3500 + 6";
			x = 0.54;
		};
		class TeamMember7: TeamMember0
		{
			idc = "3500 + 7";
			x = 0.595;
		};
		class TeamMember8: TeamMember0
		{
			idc = "3500 + 8";
			x = 0.65;
		};
		class TeamMember9: TeamMember0
		{
			idc = "3500 + 9";
			x = 0.705;
		};
		class TeamMember10: TeamMember0
		{
			idc = "3500 + 10";
			x = 0.76;
		};
		class TeamMember11: TeamMember0
		{
			idc = "3500 + 11";
			x = 0.815;
		};
		class TransferSlider: WFGUISlider
		{
			idc = 3800;
			x = 0.21;
			y = 0.715;
			w = 0.34;
			onMouseButtonDown = "[FindDisplay 220100,BIS_WF_TEAMFUNDSCHANGED] Call BIS_WF_UpdateTeamMenuEvent";
			onMouseButtonUp = "[FindDisplay 220100,BIS_WF_TEAMFUNDSCHANGED] Call BIS_WF_UpdateTeamMenuEvent";
		};
		class TransferFundsLabel: NameLabel
		{
			idc = "3800 + 1";
			x = 0.55;
			y = 0.715;
			w = 0.09;
			sizeEx = 0.035;
			text = "";
		};
		class TransferButton: WFGUIShortcutButton
		{
			idc = 3400;
			x = 0.65;
			y = 0.715;
			w = 0.2;
			h = 0.051;
			shortcuts[] = {};
			text = "$STR_SQLSENDMONEY";
			action = "[FindDisplay 220100,BIS_WF_TEAMTRANSFERFUNDS] Call BIS_WF_UpdateTeamMenuEvent";
			size = 0.035;
		};
		class SetTypeButton: WFGUIShortcutButton
		{
			idc = "3400 + 1";
			x = 0.2;
			y = 0.765;
			w = 0.17;
			h = 0.051;
			shortcuts[] = {327682};
			text = "$STRWFSETTYPE";
			action = "[FindDisplay 220100,BIS_WF_TEAMSETTYPE] Call BIS_WF_UpdateTeamMenuEvent";
			size = 0.035;
		};
		class SetAutomaticAIButton: SetTypeButton
		{
			idc = "3400 + 2";
			x = 0.37;
			shortcuts[] = {327683};
			text = "$STRWFENABLEAI";
			action = "[FindDisplay 220100,BIS_WF_TEAMSETAUTOMATICAI] Call BIS_WF_UpdateTeamMenuEvent";
		};
		class RespawnButton: SetTypeButton
		{
			idc = "3400 + 3";
			x = 0.54;
			shortcuts[] = {327680};
			text = "$STR_DISP_INT_RESPAWN";
			action = "[FindDisplay 220100,BIS_WF_TEAMRESPAWN] Call BIS_WF_UpdateTeamMenuEvent";
		};
		class CloseButton: SetTypeButton
		{
			x = 0.71;
			shortcuts[] = {327681};
			text = "$STR_DISP_CLOSE";
			action = "CloseDialog 0;";
		};
	};
};
class WFDiplomacyMenu
{
	idd = 220100;
	movingEnable = 1;
	enableSimulation = 1;
	enableDisplay = 1;
	onLoad = "BIS_WF_UIDiplomacyMenuActive = true;[_this] Call BIS_WF_OpenDiplomacyMenu";
	onUnload = "BIS_WF_UIDiplomacyMenuActive = false";
	class controlsBackground
	{
		class Background: WFGUIImage
		{
			x = 0.05;
			y = 0.2;
			w = 1.25;
			h = 0.55;
			moving = 1;
			text = "\ca\ui\data\ui_background_controlers_ca.paa";
		};
	};
	class controls
	{
		class MenuTitle: WFGUIText
		{
			style = 2;
			sizeEx = 0.04;
			x = 0.41;
			y = 0.215;
			w = 0.2;
			colorText[] = {0.7,1,0.7,1};
			text = "$STRWFDIPLOMACY";
		};
		class Side0Status: WFGUIText
		{
			idc = 3600;
			sizeEx = 0.035;
			x = 0.055;
			y = 0.25;
			w = 0.29;
			h = 0.052;
			colorText[] = {0.7,1,0.7,1};
		};
		class Side1Status: Side0Status
		{
			idc = "3600 + 1";
			y = 0.3;
		};
		class Side0ToggleCeaseFireButton: WFGUIShortcutButton
		{
			idc = 3400;
			x = 0.35;
			y = 0.26;
			w = 0.28;
			h = 0.052;
			action = "[FindDisplay 220100,BIS_WF_DIPLOMACYSIDE0CEASEFIRE] Call BIS_WF_UpdateDiplomacyMenuEvent";
		};
		class Side0ToggleAllianceButton: Side0ToggleCeaseFireButton
		{
			idc = "3400 + 1";
			x = 0.65;
			action = "[FindDisplay 220100,BIS_WF_DIPLOMACYSIDE0ALLIANCE] Call BIS_WF_UpdateDiplomacyMenuEvent";
		};
		class Side1ToggleCeaseFireButton: Side0ToggleCeaseFireButton
		{
			idc = "3400 + 2";
			y = 0.31;
			action = "[FindDisplay 220100,BIS_WF_DIPLOMACYSIDE1CEASEFIRE] Call BIS_WF_UpdateDiplomacyMenuEvent";
		};
		class Side1ToggleAllianceButton: Side0ToggleAllianceButton
		{
			idc = "3400 + 3";
			y = 0.31;
			action = "[FindDisplay 220100,BIS_WF_DIPLOMACYSIDE1ALLIANCE] Call BIS_WF_UpdateDiplomacyMenuEvent";
		};
		class Messages: WFGUIListNBox
		{
			idc = 3700;
			columns[] = {0.06,0.18};
			drawSideArrows = 0;
			sizeEx = 0.03;
			rowHeight = 0.034;
			x = -0.01;
			y = 0.36;
			w = 0.97;
			h = 0.31;
			colorSelectBackground[] = {0,0,0,0};
			colorSelectBackground2[] = {0,0,0,0};
		};
		class NewMessage: WFGUIText
		{
			type = 2;
			idc = 3800;
			colorSelection[] = {1,1,1,1};
			autoComplete = 0;
			sizeEx = 0.035;
			x = 0.0575;
			y = 0.69;
			w = 0.3;
			h = 0.045;
			colorText[] = {0.7,1,0.7,1};
		};
		class SendToSide0: WFGUIShortcutButton
		{
			idc = "3400 + 4";
			x = 0.365;
			y = 0.689;
			w = 0.195;
			h = 0.057;
			text = "";
			action = "[FindDisplay 220100,BIS_WF_DIPLOMACYSIDE0SEND] Call BIS_WF_UpdateDiplomacyMenuEvent";
		};
		class SendToSide1: SendToSide0
		{
			idc = "3400 + 5";
			x = 0.575;
			text = "";
			action = "[FindDisplay 220100,BIS_WF_DIPLOMACYSIDE1SEND] Call BIS_WF_UpdateDiplomacyMenuEvent";
		};
		class CloseButton: WFGUIShortcutButton
		{
			x = 0.7825;
			y = 0.689;
			w = 0.185;
			h = 0.057;
			shortcuts[] = {327681};
			text = "$STR_DISP_CLOSE";
			action = "CloseDialog 0;";
		};
	};
};
class WFGUIMap
{
	type = 101;
	style = 48;
	idc = -1;
	font = "Bitstream";
	sizeEx = 0.025;
	default = 0;
	colorBackground[] = {0.8,0.8,0.8,1};
	colorText[] = {0,0,0,1};
	colorRailway[] = {0.5,0.5,0.5,0.5};
	colorSea[] = {0.56,0.8,0.98,0.5};
	colorForest[] = {0.6,0.8,0.2,0.5};
	colorRocks[] = {0.5,0.5,0.5,0.5};
	colorCountlines[] = {0.65,0.45,0.27,0.5};
	colorMainCountlines[] = {0.65,0.45,0.27,1};
	colorCountlinesWater[] = {0,0.53,1,0.5};
	colorMainCountlinesWater[] = {0,0.53,1,1};
	colorForestBorder[] = {0.4,0.8,0,1};
	colorRocksBorder[] = {0.5,0.5,0.5,1};
	colorPowerLines[] = {0,0,0,1};
	colorNames[] = {0,0,0,1};
	colorInactive[] = {1,1,1,0.5};
	colorLevels[] = {0,0,0,1};
	fontLabel = "TahomaB";
	sizeExLabel = 0.04;
	fontGrid = "TahomaB";
	sizeExGrid = 0.04;
	fontUnits = "TahomaB";
	sizeExUnits = 0.04;
	fontNames = "TahomaB";
	sizeExNames = 0.04;
	fontInfo = "TahomaB";
	sizeExInfo = 0.04;
	fontLevel = "TahomaB";
	sizeExLevel = 0.04;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	stickX[] = {0.2,{ "Gamma",1,1.5 }};
	stickY[] = {0.2,{ "Gamma",1,1.5 }};
	ptsPerSquareSea = 6;
	ptsPerSquareTxt = 8;
	ptsPerSquareCLn = 8;
	ptsPerSquareExp = 8;
	ptsPerSquareCost = 8;
	ptsPerSquareFor = "4.0f";
	ptsPerSquareForEdge = "10.0f";
	ptsPerSquareRoad = 2;
	ptsPerSquareObj = 10;
	showCountourInterval = "true";
	x = 0.0;
	y = 0.05;
	w = 1.0;
	h = 0.8;
	class task
	{
		icon = "";
		color[] = {0,0,1,1};
		size = 10;
		coefMin = 1;
		coefMax = 4;
		importance = 1;
	};
	class CustomMark
	{
		icon = "\ca\ui\data\map_waypoint_ca.paa";
		color[] = {0,0,1,1};
		size = 18;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
	};
	class Bunker
	{
		icon = "\ca\ui\data\map_bunker_ca.paa";
		color[] = {0,0,1,1};
		size = 14;
		importance = "1.5 * 14 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Bush
	{
		icon = "\ca\ui\data\map_bush_ca.paa";
		color[] = {0.55,0.64,0.43,1};
		size = 14;
		importance = "0.2 * 14 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class BusStop
	{
		icon = "\ca\ui\data\map_busstop_ca.paa";
		color[] = {0,0,1,1};
		size = 10;
		importance = "1 * 10 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Command
	{
		icon = "#(argb,8,8,3)color(1,1,1,1)";
		color[] = {0,0.9,0,1};
		size = 18;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
	};
	class Cross
	{
		icon = "\ca\ui\data\map_cross_ca.paa";
		color[] = {0,0,1,1};
		size = 16;
		importance = "0.7 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Fortress
	{
		icon = "\ca\ui\data\map_bunker_ca.paa";
		color[] = {0,0,1,1};
		size = 16;
		importance = "2 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Fuelstation
	{
		icon = "#(argb,8,8,3)color(0,0,0,1)";
		color[] = {0,0,0,1};
		size = 16;
		importance = "2 * 16 * 0.05";
		coefMin = 0.75;
		coefMax = 4;
	};
	class Fountain
	{
		icon = "\ca\ui\data\map_fountain_ca.paa";
		color[] = {0,0.35,0.7,1};
		size = 12;
		importance = "1 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Hospital
	{
		icon = "\ca\ui\data\map_hospital_ca.paa";
		color[] = {0.78,0,0.05,1};
		size = 16;
		importance = "2 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Chapel
	{
		icon = "\ca\ui\data\map_chapel_ca.paa";
		color[] = {0,0,1,1};
		size = 16;
		importance = "1 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Church
	{
		icon = "\ca\ui\data\map_church_ca.paa";
		color[] = {0,0,1,1};
		size = 16;
		importance = "2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Lighthouse
	{
		icon = "\ca\ui\data\map_lighthouse_ca.paa";
		color[] = {0.78,0,0.05,1};
		size = 20;
		importance = "3 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Quay
	{
		icon = "\ca\ui\data\map_quay_ca.paa";
		color[] = {0,0,1,1};
		size = 16;
		importance = "2 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Rock
	{
		icon = "\ca\ui\data\map_rock_ca.paa";
		color[] = {0,0,1,1};
		size = 12;
		importance = "0.5 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Ruin
	{
		icon = "\ca\ui\data\map_ruin_ca.paa";
		color[] = {0.78,0,0.05,1};
		size = 16;
		importance = "1.2 * 16 * 0.05";
		coefMin = 1;
		coefMax = 4;
	};
	class SmallTree
	{
		icon = "\ca\ui\data\map_smalltree_ca.paa";
		color[] = {0.55,0.64,0.43,1};
		size = 12;
		importance = "0.6 * 12 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Stack
	{
		icon = "\ca\ui\data\map_stack_ca.paa";
		color[] = {0,0,1,1};
		size = 20;
		importance = "2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Tree
	{
		icon = "\ca\ui\data\map_tree_ca.paa";
		color[] = {0.55,0.64,0.43,1};
		size = 12;
		importance = "0.9 * 16 * 0.05";
		coefMin = 0.25;
		coefMax = 4;
	};
	class Tourism
	{
		icon = "\ca\ui\data\map_tourism_ca.paa";
		color[] = {0.78,0,0.05,1};
		size = 16;
		importance = "1 * 16 * 0.05";
		coefMin = 0.7;
		coefMax = 4;
	};
	class Transmitter
	{
		icon = "\ca\ui\data\map_transmitter_ca.paa";
		color[] = {0,0,1,1};
		size = 20;
		importance = "2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class ViewTower
	{
		icon = "\ca\ui\data\map_viewtower_ca.paa";
		color[] = {0,0,1,1};
		size = 16;
		importance = "2.5 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class Watertower
	{
		icon = "\ca\ui\data\map_watertower_ca.paa";
		color[] = {0,0.35,0.7,1};
		size = 32;
		importance = "1.2 * 16 * 0.05";
		coefMin = 0.9;
		coefMax = 4;
	};
	class Waypoint
	{
		icon = "\ca\ui\data\map_waypoint_ca.paa";
		color[] = {0,0,1,1};
		size = 14;
		importance = "2.5 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class WaypointCompleted
	{
		icon = "\ca\ui\data\map_waypoint_completed_ca.paa";
		color[] = {0,0,1,1};
		size = 14;
		importance = "2.5 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
	class ActiveMarker
	{
		icon = "";
		color[] = {0,0,1,1};
		size = 14;
		importance = "2.5 * 16 * 0.05";
		coefMin = 0.5;
		coefMax = 4;
	};
};
class WFViewMission
{
	controls[] = {"MissionLabel","MissionMap","MissionBriefing","AcceptAbortMissionButton","ExitButton"};
	controlsBackground[] = {"Background"};
	objects[] = {};
	idd = -1;
	movingEnable = 0;
	onLoad = "_this ExecVM (corePath + ""Client\GUI\GUI_UpdateViewMission.sqf"")";
	class Background: WFGUIText
	{
		style = 128;
		colorBackground[] = {0.1,0.17,0.1,0.8};
		x = 0.296875;
		y = 0.175;
		w = 0.40625;
		h = 0.645833;
	};
	class MissionLabel: WFGUIText
	{
		IDC = 3600;
		style = 2;
		sizeEx = 0.029;
		x = 0.351563;
		y = 0.183333;
		w = 0.296875;
		h = 0.05625;
	};
	class MissionMap: WFGUIMap
	{
		IDC = 3500;
		x = 0.3125;
		y = 0.24375;
		w = 0.375;
		h = 0.270833;
	};
	class MissionBriefing: WFGUIText
	{
		type = 13;
		style = 16;
		IDC = 3800;
		size = 0.03;
		colorText[] = {1,1,1,1};
		class Attributes
		{
			font = "Zeppelin32";
			color = "#ffffff";
			align = "left";
			shadow = 0;
		};
		x = 0.3125;
		y = 0.51875;
		w = 0.375;
		h = 0.21875;
	};
	class AcceptAbortMissionButton: WFGUIButton
	{
		IDC = 3400;
		x = 0.359375;
		y = 0.741667;
		w = 0.28125;
		h = 0.0625;
		action = "BIS_WF_MenuAcceptAbort = true;CloseDialog 0";
	};
	class ExitButton: WFGUIActiveText
	{
		style = "48 + 0x800";
		x = 0.654688;
		y = 0.183333;
		w = 0.042188;
		h = 0.05625;
		text = "\CA\Warfare2\Images\button_x.paa";
		action = "CloseDialog 0;BIS_WF_MenuExit = true";
		colorActive[] = {0.72,0.48,0.24,1.0};
		SizeEx = 0.03;
	};
};
class WFCommanderViewMission
{
	controls[] = {"MissionLabel","MissionMap","MissionBriefing","CreateAbortMissionButton","MissionsStatsList","TeamsOnMissionLabel","TeamsOnMissionList","OnMissionTeamTypeList","RespawnTeamOnMissionButton","RemoveTeamOnMissionButton","TeamsAvailableLabel","TeamAvailableList","AvailableTeamType","RespawnAvailableTeamButton","AddAvailableTeamButton","ExitButton"};
	controlsBackground[] = {"Background"};
	objects[] = {};
	idd = -1;
	movingEnable = 0;
	onLoad = "_this ExecVM (corePath + ""Client\GUI\GUI_UpdateCommanderViewMission.sqf"")";
	class Background: WFGUIText
	{
		style = 128;
		colorBackground[] = {0.1,0.17,0.1,0.8};
		x = 0.109375;
		y = 0.045833;
		w = 0.78125;
		h = 0.902083;
	};
	class MissionLabel: WFGUIText
	{
		style = 2;
		IDC = 3600;
		sizeEx = 0.029;
		x = 0.351563;
		y = 0.054167;
		w = 0.296875;
		h = 0.05625;
	};
	class MissionMap: WFGUIMap
	{
		IDC = 3500;
		x = 0.3125;
		y = 0.114583;
		w = 0.375;
		h = 0.270833;
	};
	class MissionBriefing: WFGUIText
	{
		type = 13;
		style = 16;
		IDC = 3800;
		size = 0.03;
		colorText[] = {0.5,0.75,0.5,1};
		class Attributes
		{
			font = "Zeppelin32";
			color = "#ffffff";
			align = "left";
			shadow = 0;
		};
		x = 0.3125;
		y = 0.389583;
		w = 0.375;
		h = 0.21875;
	};
	class CreateAbortMissionButton: WFGUIButton
	{
		IDC = 3400;
		x = 0.359375;
		y = 0.616;
		w = 0.28125;
		h = 0.0625;
		action = "BIS_WF_MenuAcceptAbort = true";
	};
	class MissionsStatsList: WFGUIListBox
	{
		IDC = "3700 + 1";
		x = 0.3125;
		y = 0.7;
		w = 0.375;
		h = 0.225;
		onLBDblClick = "BIS_WF_MenuAcceptAbort = true";
	};
	class TeamsOnMissionLabel: WFGUIText
	{
		x = 0.125;
		y = 0.06875;
		w = 0.171875;
		h = 0.041667;
		text = "On Mission";
	};
	class TeamsOnMissionList: WFGUIListBox
	{
		IDC = "3700 + 2";
		x = 0.125;
		y = 0.116667;
		w = 0.171875;
		h = 0.664583;
		onLBDblClick = "BIS_WF_MenuAction = 1";
		onLBSelChanged = "BIS_WF_LBSelectionChanged = _this";
	};
	class OnMissionTeamTypeList: WFGUIComboBox
	{
		IDC = "3700 + 3";
		x = 0.125;
		y = 0.789583;
		w = 0.171875;
		h = 0.041667;
		wholeHeight = 0.7;
		onLBSelChanged = "BIS_WF_LBSelectionChanged = _this";
	};
	class RespawnTeamOnMissionButton: WFGUIButton
	{
		x = 0.125;
		y = 0.8375;
		w = 0.171875;
		h = 0.041667;
		text = "Respawn";
		action = "BIS_WF_MenuAction = 0";
	};
	class RemoveTeamOnMissionButton: WFGUIButton
	{
		x = 0.125;
		y = 0.885417;
		w = 0.171875;
		h = 0.041667;
		text = "Remove";
		action = "BIS_WF_MenuAction = 1";
	};
	class TeamsAvailableLabel: WFGUIText
	{
		x = 0.704688;
		y = 0.06875;
		w = 0.129688;
		h = 0.041667;
		text = "Teams";
	};
	class TeamAvailableList: WFGUIListBox
	{
		IDC = "3700 + 4";
		x = 0.704688;
		y = 0.116667;
		w = 0.171875;
		h = 0.664583;
		onLBDblClick = "BIS_WF_MenuAction = 3";
		onLBSelChanged = "BIS_WF_LBSelectionChanged = _this";
	};
	class AvailableTeamType: WFGUIComboBox
	{
		IDC = "3700 + 5";
		x = 0.704688;
		y = 0.789583;
		w = 0.171875;
		h = 0.041667;
		wholeHeight = 0.7;
		onLBSelChanged = "BIS_WF_LBSelectionChanged = _this";
	};
	class RespawnAvailableTeamButton: WFGUIButton
	{
		x = 0.704688;
		y = 0.8375;
		w = 0.171875;
		h = 0.041667;
		text = "Respawn";
		action = "BIS_WF_MenuAction = 2";
	};
	class AddAvailableTeamButton: WFGUIButton
	{
		x = 0.704688;
		y = 0.885417;
		w = 0.171875;
		h = 0.041667;
		text = "Assign";
		action = "BIS_WF_MenuAction = 3";
	};
	class ExitButton: WFGUIActiveText
	{
		style = "48 + 0x800";
		idc = -1;
		x = 0.842188;
		y = 0.054167;
		w = 0.042188;
		h = 0.05625;
		text = "\CA\Warfare2\Images\button_x.paa";
		action = "CloseDialog 0;BIS_WF_MenuExit = true";
		colorActive[] = {0.72,0.48,0.24,1.0};
		SizeEx = 0.03;
	};
};
class WFEndOfGameMenu
{
	idd = 220100;
	movingEnable = 1;
	enableSimulation = 1;
	enableDisplay = 1;
	onLoad = "[_this] Call BIS_WF_OpenEndOfGameMenu";
	class controlsBackground
	{
		class Background: WFGUIImage
		{
			style = 128;
			x = -0.08;
			y = 0.15;
			w = 1.16;
			h = 0.7;
			colorBackground[] = {0.1,0.1,0.1,0.3};
			text = "";
		};
	};
	class controls
	{
		class MenuTitle: WFGUIText
		{
			idc = 3600;
			style = 2;
			sizeEx = 0.06;
			x = 0.3;
			y = 0.18;
			w = 0.4;
			colorText[] = {0.9,0.9,0.9,1};
			text = "";
		};
		class WestFlag: WFGUIImageAspectRatio
		{
			idc = 3500;
			sizeEx = 0.035;
			x = 0.17;
			y = 0.245;
			w = 0.08;
			h = 0.08;
			colorText[] = {1,1,1,1};
		};
		class EastFlag: WestFlag
		{
			idc = "3500 + 1";
			x = 0.47;
		};
		class ResistanceFlag: WestFlag
		{
			idc = "3500 + 2";
			x = 0.77;
		};
		class SoldiersRecruitedLabel: WFGUIText
		{
			style = 0;
			x = -0.07;
			y = 0.4;
			w = 0.25;
			sizeEx = 0.04;
			text = "$STRWFSOLDIERSRECRUITED";
			colorText[] = {0.25,0.8,0.25,1};
		};
		class SoldiersLostLabel: SoldiersRecruitedLabel
		{
			y = 0.5;
			text = "$STRWFSOLDIERSLOST";
			colorText[] = {0.8,0.25,0.25,1};
		};
		class VehiclesBuiltLabel: SoldiersRecruitedLabel
		{
			y = 0.6;
			text = "$STRWFVEHICLESBUILT";
		};
		class VehiclesLostLabel: SoldiersRecruitedLabel
		{
			y = 0.7;
			text = "$STRWFVEHICLESLOST";
			colorText[] = {0.8,0.25,0.25,1};
		};
		class WestSoldiersRecruitedBar: WFGUIText
		{
			idc = "3500 + 3";
			style = 128;
			x = 0.165;
			y = 0.39;
			w = 0.23;
			h = 0.06;
			colorBackground[] = {0.1,0.7,0.1,0.7};
		};
		class WestCasualtiesBar: WestSoldiersRecruitedBar
		{
			idc = "3500 + 4";
			y = 0.49;
			colorBackground[] = {0.7,0.1,0.1,1.0};
		};
		class WestVehiclesBuiltBar: WestSoldiersRecruitedBar
		{
			idc = "3500 + 5";
			y = 0.59;
		};
		class WestVehiclesLostBar: WestSoldiersRecruitedBar
		{
			idc = "3500 + 6";
			y = 0.69;
			colorBackground[] = {0.7,0.1,0.1,1.0};
		};
		class WestSoldiersRecruitedCount: MenuTitle
		{
			idc = 3800;
			style = 0;
			x = 0.17;
			y = 0.4;
			w = 0.1;
			sizeEx = 0.05;
			text = "0";
		};
		class WestCasualtyCount: WestSoldiersRecruitedCount
		{
			idc = "3800 + 1";
			y = 0.5;
		};
		class WestVehiclesBuiltCount: WestSoldiersRecruitedCount
		{
			idc = "3800 + 2";
			y = 0.6;
		};
		class WestVehiclesLostCount: WestSoldiersRecruitedCount
		{
			idc = "3800 + 3";
			y = 0.7;
		};
		class EastSoldiersRecruitedBar: WestSoldiersRecruitedBar
		{
			idc = "3500 + 7";
			x = 0.465;
		};
		class EastCasualtiesBar: EastSoldiersRecruitedBar
		{
			idc = "3500 + 8";
			y = 0.49;
			colorBackground[] = {0.7,0.1,0.1,1.0};
		};
		class EastVehiclesBuiltBar: EastSoldiersRecruitedBar
		{
			idc = "3500 + 9";
			y = 0.59;
		};
		class EastVehiclesLostBar: EastSoldiersRecruitedBar
		{
			idc = "3500 + 10";
			y = 0.69;
			colorBackground[] = {0.7,0.1,0.1,1.0};
		};
		class EastSoldiersRecruitedCount: WestSoldiersRecruitedCount
		{
			idc = "3800 + 4";
			x = 0.47;
		};
		class EastCasualtyCount: EastSoldiersRecruitedCount
		{
			idc = "3800 + 5";
			y = 0.5;
		};
		class EastVehiclesBuiltCount: EastSoldiersRecruitedCount
		{
			idc = "3800 + 6";
			y = 0.6;
		};
		class EastVehiclesLostCount: EastSoldiersRecruitedCount
		{
			idc = "3800 + 7";
			y = 0.7;
		};
		class ResistanceSoldiersRecruitedBar: WestSoldiersRecruitedBar
		{
			idc = "3500 + 11";
			x = 0.765;
		};
		class ResistanceCasualtiesBar: ResistanceSoldiersRecruitedBar
		{
			idc = "3500 + 12";
			y = 0.49;
			colorBackground[] = {0.7,0.1,0.1,1.0};
		};
		class ResistanceVehiclesBuiltBar: ResistanceSoldiersRecruitedBar
		{
			idc = "3500 + 13";
			y = 0.59;
		};
		class ResistanceVehiclesLostBar: ResistanceSoldiersRecruitedBar
		{
			idc = "3500 + 14";
			y = 0.69;
			colorBackground[] = {0.7,0.1,0.1,1.0};
		};
		class ResistanceSoldiersRecruitedCount: WestSoldiersRecruitedCount
		{
			idc = "3800 + 8";
			x = 0.77;
		};
		class ResistanceCasualtyCount: ResistanceSoldiersRecruitedCount
		{
			idc = "3800 + 9";
			y = 0.5;
		};
		class ResistanceVehiclesBuiltCount: ResistanceSoldiersRecruitedCount
		{
			idc = "3800 + 10";
			y = 0.6;
		};
		class ResistanceVehiclesLostCount: ResistanceSoldiersRecruitedCount
		{
			idc = "3800 + 11";
			y = 0.7;
		};
	};
};
class WFLoadingScreen
{
	idd = 220200;
	class controlsBackground
	{
		class LoadingBackground: WFGUIText
		{
			x = -5;
			y = -5;
			w = 10;
			h = 10;
			colortext[] = {0.0235,0,0.0314,1};
			colorBackground[] = {0.0235,0,0.0314,1};
		};
		class LoadingImage: WFGUIImageAspectRatio
		{
			idc = 105;
			x = "SafeZoneX";
			y = "SafezoneY + SafezoneH * 0.075";
			w = "SafezoneW";
			h = "SafezoneH * 0.85";
			colortext[] = {1,1,1,1};
			text = "\CA\Warfare2\Images\warfare2_logo_ca.paa";
		};
	};
	class controls
	{
		class LoadingText: WFGUIText
		{
			idc = 101;
			x = "SafezoneX + 0.025";
			y = "SafezoneY";
			w = "SafezoneW * 0.95";
			h = "SafezoneH * 0.075";
			sizeEx = 0.05;
			colorText[] = {0.7,1,0.7,1};
		};
	};
};
class CfgMarkers
{
	class TownDefense0Supply4
	{
		scope = 0;
		name = "$STRWFTOWN";
		icon = "\CA\Warfare2\Images\wf_citybar_D0S4_ca.paa";
		color[] = {1,1,1,1};
		size = 32;
		shadow = 0;
	};
	class TownDefense1Supply3: TownDefense0Supply4
	{
		icon = "\CA\Warfare2\Images\wf_citybar_D1S3_ca.paa";
	};
	class TownDefense2Supply2: TownDefense0Supply4
	{
		icon = "\CA\Warfare2\Images\wf_citybar_D2S2_ca.paa";
	};
	class TownDefense3Supply1: TownDefense0Supply4
	{
		icon = "\CA\Warfare2\Images\wf_citybar_D3S1_ca.paa";
	};
	class TownDefense4Supply0: TownDefense0Supply4
	{
		icon = "\CA\Warfare2\Images\wf_citybar_D4S0_ca.paa";
	};
};
//};
