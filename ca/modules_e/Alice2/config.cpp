////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:08 2014 : Source 'file' date Fri Oct 31 06:11:08 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules_e : Alice2\config.bin{
class CfgPatches
{
	class CA_Modules_Alice2
	{
		units[] = {"Alice2Manager"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_Modules"};
	};
};
class CfgVehicles
{
	class Logic;
	class Alice2Manager: Logic
	{
		displayName = "$STR_EP1_cfgVehicles.hppCfgVehicles_Alice2Manager0";
		icon = "\ca\ui\data\icon_ALICE_ca.paa";
		picture = "\ca\ui\data\icon_ALICE_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "if (isnil 'BIS_alice_mainscope') then {BIS_alice_mainscope = _this select 0; publicvariable 'BIS_alice_mainscope'; if (isServer) then {private [""_ok""];_ok = _this execVM ""ca\modules_e\alice2\data\scripts\main.sqf""};};";
		};
		class DestructionEffects{};
	};
};
class cfgFunctions
{
	class BIS_ALICE2
	{
		class Default
		{
			file = "\ca\modules_e\alice2\data\scripts";
			class civilianSet
			{
				description = "Adds civilian unit to ALICE2 system.";
			};
			class civilianHit
			{
				description = "Decrease respect when ALICE2 civilian is hit (and commit cleanup when he dies).";
			};
			class civilianKilled
			{
				description = "Cleanup when civilian is killed.";
			};
		};
	};
};
class CfgCivilianConversations_EP1
{
	class BIS
	{
		path = "ca\modules_e\alice2\data\kb\";
		class neutral
		{
			type = 0;
			class ALICE_Neutral_01
			{
				endSentences[] = {"ALICE_Neutral_04"};
			};
			class ALICE_Neutral_08
			{
				endSentences[] = {"ALICE_Neutral_14"};
			};
			class ALICE_Neutral_15
			{
				endSentences[] = {"ALICE_Neutral_18"};
			};
			class ALICE_Neutral_19
			{
				endSentences[] = {"ALICE_Neutral_20"};
			};
			class ALICE_Neutral_21
			{
				endSentences[] = {"ALICE_Neutral_26"};
			};
			class ALICE_Neutral_27
			{
				endSentences[] = {"ALICE_Neutral_29"};
			};
		};
	};
};
class CfgCivilianScreams_EP1
{
	class BIS
	{
		class ALICE_Scream_01{};
		class ALICE_Scream_02{};
		class ALICE_Scream_03{};
		class ALICE_Scream_04{};
		class ALICE_Scream_05{};
		class ALICE_Scream_06{};
		class ALICE_Scream_07{};
		class ALICE_Scream_08{};
	};
};
class CfgCivilianRemarks_EP1
{
	class BIS{};
};
class CfgCivilianActions_EP1
{
	class BIS
	{
		class stay
		{
			condition = "_twnthreat <= 0";
			fsm = "ca\modules_e\alice2\data\actions\safe_stay.fsm";
			rarity = 1;
			locked = 0;
			canRepeat = 1;
		};
		class walk
		{
			condition = "_twnthreat == 0";
			fsm = "ca\modules_e\alice2\data\actions\safe_walk.fsm";
			rarity = 1;
		};
		class hideOut
		{
			condition = "_twnthreat > 0";
			fsm = "ca\modules_e\alice2\data\actions\combat_hideOut.fsm";
			rarity = 0.1;
			locked = 1;
		};
	};
};
//};
