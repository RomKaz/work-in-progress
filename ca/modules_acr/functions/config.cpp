////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:58 2014 : Source 'file' date Fri Oct 31 06:04:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules_acr : functions\config.bin{
class CfgPatches
{
	class CA_Modules_ACR_Functions
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
		class ACR_Debug
		{
			file = "ca\modules_acr\functions\Debug";
			class error
			{
				description = "Display debug error";
				headerType = 1;
			};
			class param
			{
				description = "Define script param";
				headerType = 1;
			};
			class paramIn
			{
				description = "Define script param without overload ability";
				headerType = 1;
			};
			class log
			{
				description = "Debug message";
				headerType = 1;
			};
		};
		class ACR_Conversations
		{
			file = "ca\modules_acr\functions\Conversations";
			class kbTell
			{
				description = "Start the conversation";
			};
			class kbMenu
			{
				description = "Opens conversation menu";
			};
			class kbSentence
			{
				description = "Returns sentence name";
			};
			class kbTopicConfig
			{
				description = "Returns topic config";
			};
			class kbPriority
			{
				description = "Set conversations priority";
			};
			class kbCanSpeak
			{
				description = "Returns conversation availability of given person";
			};
			class kbSkip
			{
				description = "Skip conversation";
			};
			class kbCreateDummy
			{
				description = "Creates dummy speaker";
			};
			class kbIsSpeaking
			{
				description = "Check if speaker is locked for different conversation";
			};
		};
		class ACR_GUI
		{
			file = "ca\modules_acr\functions\GUI";
			class trophy
			{
				description = "Trophy manager";
			};
			class trophyUnlock
			{
				description = "Trophy unlocker";
			};
			class trophyReturn
			{
				description = "Returns all unlocked trophys from given list, excluding the one assigned to mission";
			};
			class coverMap
			{
				description = "Covers unused part of the map.";
			};
			class centerMap
			{
				description = "Centers map on specific position in briefing screen.";
			};
			class missionFinish
			{
				description = "Shows text with comletion status.";
			};
			class itemInfo
			{
				description = "System to handle showing information about items when looking at info signs.";
			};
			class itemInfoUI
			{
				description = "Initialize the item information display.";
			};
			class itemInfoLoad
			{
				description = "Load, store and show an item's information.";
			};
		};
		class ACR_Misc
		{
			file = "ca\modules_acr\functions\Misc";
			class canTransport
			{
				description = "Check how many troops a vehicle can transport.";
			};
			class hasVTOL
			{
				description = "Check an airplane supports VTOL.";
			};
			class hasWeapon
			{
				description = "Check a vehicle is armed.";
			};
			class isAmphibious
			{
				description = "Check a vehicle is amphibious.";
			};
			class onLoad
			{
				description = "Save/load manager";
			};
		};
		class ACR_WLibs
		{
			file = "ca\modules_acr\functions\WLib";
			class initWLib
			{
				description = "Code libs by Warka.";
			};
			class getActionName
			{
				description = "Returns formated text of the user action (e.g. 'Open door') in green color and apostrophes like it's used in OA hints.";
			};
		};
	};
};
//};
