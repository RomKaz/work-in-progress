////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:58 2014 : Source 'file' date Fri Oct 31 06:13:58 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Editor_AdditionalGroups\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Editor_AdditionalGroups
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgGroups
{
	class West
	{
		class BIS_BAF_MTP
		{
			class Air
			{
				name = "Air";
				class BAF_CH47FFlight
				{
					name = "Chinook HC4 Squadron";
					faction = "BIS_BAF";
					rarityGroup = 0.3;
					minAltitude = 60;
					maxAltitude = 150;
					class Unit0
					{
						side = 1;
						vehicle = "CH_47F_BAF";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
				};
				class BAF_AW159LynxFlight
				{
					name = "Wildcat AH11 Squadron";
					faction = "BIS_BAF";
					rarityGroup = 0.3;
					minAltitude = 40;
					maxAltitude = 100;
					class Unit0
					{
						side = 1;
						vehicle = "AW159_Lynx_BAF";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
				};
				class BAF_AH1DFlight
				{
					name = "Apache AH1 Squadron";
					faction = "BIS_BAF";
					rarityGroup = 0.3;
					minAltitude = 40;
					maxAltitude = 100;
					class Unit0
					{
						side = 1;
						vehicle = "BAF_Apache_AH1_D";
						rank = "CAPTAIN";
						position[] = {0,20,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "BAF_Apache_AH1_D";
						position[] = {20,0,0};
						rank = "LIEUTENANT";
					};
				};
				class BAF_HC3DMerlinFlight
				{
					name = "Merlin HC3 Squadron";
					faction = "BIS_BAF";
					rarityGroup = 0.3;
					minAltitude = 60;
					maxAltitude = 150;
					class Unit0
					{
						side = 1;
						vehicle = "BAF_Merlin_HC3_D";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
				};
			};
		};
	};
	class Guerrila
	{
		class BIS_TK_GUE
		{
			class Air
			{
				name = "Air";
				class TK_GUE_UH1HFlight
				{
					name = "UH-1H Squadron";
					faction = "TK_GUE";
					rarityGroup = 0.3;
					minAltitude = 60;
					maxAltitude = 150;
					class Unit0
					{
						side = 2;
						vehicle = "UH1H_TK_GUE_EP1";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
				};
			};
		};
	};
};
//};
