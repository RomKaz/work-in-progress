////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:57 2014 : Source 'file' date Fri Oct 31 06:04:57 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class modules : Alice\config.bin{
class CfgPatches
{
	class CA_Modules_Alice
	{
		units[] = {"AliceManager","BIS_alice_emptydoor"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgMovesBasic
{
	class ManActions
	{
		dooraction = "amovpercmwlksnonwnondf";
	};
	class ALICE_anims
	{
		class BIS
		{
			moves0[] = {"AidlPercSnonWnonDnon_talk1","AidlPercSnonWnonDnon_talk2","AidlPercSnonWnonDnon_talk3","AidlPercSnonWnonDnon_talk4","AidlPercSnonWnonDnon_talkBS"};
			moves1[] = {"AidlPercSnonWnonDnon_talk1","AidlPercSnonWnonDnon_talk2","AidlPercSnonWnonDnon_talk3","AidlPercSnonWnonDnon_talk5","AidlPercSnonWnonDnon_talkBS"};
			moves2[] = {"AidlPercSnonWnonDnon_talk1","AidlPercSnonWnonDnon_talk2","AidlPercSnonWnonDnon_talk3","AidlPercSnonWnonDnon_talk5","AidlPercSnonWnonDnon_talkAS","AidlPercSnonWnonDnon_talkBS"};
			moves3[] = {"AidlPercSnonWnonDnon_talk1","AidlPercSnonWnonDnon_talk2","AidlPercSnonWnonDnon_talk4"};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		dooraction = "AmovPercMwlkSnonWnonDf_B";
	};
	class ALICE_anims
	{
		class BIS
		{
			moves0[] = {"CwmnPerc_diskuse1","CwmnPerc_diskuse3","CwmnPerc_diskuse4","CwmnPerc_diskuse7","CwmnPerc_diskuse8","CwmnPerc_diskuse9","CwmnPerc_diskuse10","CwmnPerc_diskuse12"};
			moves1[] = {"CwmnPerc_diskuse4","CwmnPerc_diskuse7","CwmnPerc_diskuse8","CwmnPerc_diskuse9","CwmnPerc_diskuse10","CwmnPerc_diskuse12"};
			moves2[] = {"CwmnPerc_diskuse1","CwmnPerc_diskuse5","CwmnPerc_diskuse9","CwmnPerc_diskuse10","CwmnPerc_diskuse12"};
			moves3[] = {"CwmnPerc_diskuse2","CwmnPerc_diskuse6","CwmnPerc_diskuse9","CwmnPerc_diskuse11","CwmnPerc_diskuse12"};
		};
	};
};
class CfgMovesOldWomen: CfgMovesWomen
{
	class ALICE_anims
	{
		class BIS
		{
			moves0[] = {"ActsPercMstpDnon_babka13brblani","ActsPercMstpDnon_babka11talkA","ActsPercMstpDnon_babka11talkB","ActsPercMstpDnon_babka11talkC"};
			moves1[] = {"ActsPercMstpDnon_babka13brblani","ActsPercMstpDnon_babka11talkA","ActsPercMstpDnon_babka11talkB","ActsPercMstpDnon_babka11talkC"};
			moves2[] = {"ActsPercMstpDnon_babka14rozcilovani","ActsPercMstpDnon_babka13brblani","ActsPercMstpDnon_babka11talkA","ActsPercMstpDnon_babka11talkB"};
			moves3[] = {"ActsPercMstpDnon_babka15zoufalstvi","ActsPercMstpDnon_babka13brblani","ActsPercMstpDnon_babka11talkA","ActsPercMstpDnon_babka11talkC"};
		};
	};
};
class CfgVehicles
{
	class Logic;
	class AliceManager: Logic
	{
		displayName = "$STR_ALICE_NAME";
		icon = "\ca\ui\data\icon_ALICE_ca.paa";
		picture = "\ca\ui\data\icon_ALICE_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "if (isnil 'BIS_alice_mainscope') then {BIS_alice_mainscope = _this select 0; publicvariable 'BIS_alice_mainscope'; if (isServer) then {private [""_ok""];_ok = _this execVM ""ca\modules\alice\data\scripts\main.sqf""};};";
		};
		class DestructionEffects{};
	};
	class Car;
	class BIS_alice_emptydoor: Car
	{
		scope = 1;
		side = 3;
		model = "\ca\modules\alice\emptydoor\emptydoor.p3d";
		transportSoldier = 20;
		displayName = "";
		icon = "";
		getInRadius = 10;
		cargoAction[] = {"Truck_Cargo02"};
		SoundGetIn[] = {"\ca\wheeled\Data\Sound\UAZ_OpenClose",0.0056234132,1};
		SoundGetOut[] = {"\ca\wheeled\Data\Sound\UAZ_OpenClose",0.0031622776,1};
		memoryPointsGetInCargo = "pos Cargo";
		memoryPointsGetInCargoDir = "pos Cargo dir";
		simulation = "door";
	};
};
class cfgFunctions
{
	class BIS_ALICE
	{
		class Default
		{
			class civilianHit
			{
				description = "Decrease respect when ALICE civilian is hit (and commit cleanup when he dies).";
				file = "\ca\modules\alice\data\scripts\fnc_civilianHit.sqf";
			};
			class civilianKilled
			{
				description = "Cleanup when civilian is killed.";
				file = "\ca\modules\alice\data\scripts\fnc_civilianKilled.sqf";
			};
			class civilianSet
			{
				description = "Adds civilian unit to ALICE system.";
				file = "\ca\modules\alice\data\scripts\fnc_civilianSet.sqf";
			};
			class doorCreate
			{
				description = "Creates AI door attached to given house.";
				file = "\ca\modules\alice\data\scripts\fnc_createDoor.sqf";
			};
			class houseEffects
			{
				description = "Creates effects on house (lights in windows, chimney smoke)";
				file = "\ca\modules\alice\data\scripts\fnc_houseEffects.sqf";
			};
			class soundEffects
			{
				description = "Generic civilian sounds";
				file = "\ca\modules\alice\data\scripts\fnc_SFX.sqf";
			};
			class debug
			{
				description = "Debug output";
				file = "\ca\modules\alice\data\scripts\fnc_debug.sqf";
			};
		};
	};
};
class CfgCivilianConversations
{
	class BIS
	{
		path = "ca\modules\alice\data\kb\";
		class positive
		{
			type = 1;
			class ALICE_Positive_01
			{
				endSentences[] = {"ALICE_Positive_05"};
			};
			class ALICE_Positive_06
			{
				endSentences[] = {"ALICE_Positive_11"};
			};
			class ALICE_Positive_12
			{
				endSentences[] = {"ALICE_Positive_14"};
			};
			class ALICE_Positive_15
			{
				endSentences[] = {"ALICE_Positive_18"};
			};
			class ALICE_Positive_19
			{
				endSentences[] = {"ALICE_Positive_22"};
			};
			class ALICE_Positive_23
			{
				endSentences[] = {"ALICE_Positive_25"};
			};
			class ALICE_Positive_26
			{
				endSentences[] = {"ALICE_Positive_28"};
			};
			class ALICE_Positive_29
			{
				endSentences[] = {"ALICE_Positive_33","ALICE_Positive_34"};
			};
			class ALICE_Positive_35
			{
				endSentences[] = {"ALICE_Positive_38"};
			};
		};
		class neutral
		{
			type = 0;
			class ALICE_Neutral_01
			{
				endSentences[] = {"ALICE_Neutral_04"};
			};
			class ALICE_Neutral_05
			{
				endSentences[] = {"ALICE_Neutral_07"};
			};
			class ALICE_Neutral_08
			{
				endSentences[] = {"ALICE_Neutral_10"};
			};
			class ALICE_Neutral_11
			{
				endSentences[] = {"ALICE_Neutral_14"};
			};
			class ALICE_Neutral_15
			{
				endSentences[] = {"ALICE_Neutral_19","ALICE_Neutral_20"};
			};
			class ALICE_Neutral_16
			{
				endSentences[] = {"ALICE_Neutral_19","ALICE_Neutral_20"};
			};
			class ALICE_Neutral_17
			{
				endSentences[] = {"ALICE_Neutral_19","ALICE_Neutral_20"};
			};
			class ALICE_Neutral_21
			{
				endSentences[] = {"ALICE_Neutral_23","ALICE_Neutral_24"};
			};
			class ALICE_Neutral_25
			{
				endSentences[] = {"ALICE_Neutral_27"};
			};
			class ALICE_Neutral_28
			{
				endSentences[] = {"ALICE_Neutral_28","ALICE_Neutral_30"};
			};
			class ALICE_Neutral_31
			{
				endSentences[] = {"ALICE_Neutral_34"};
			};
			class ALICE_Neutral_35
			{
				endSentences[] = {"ALICE_Neutral_37","ALICE_Generic_04","ALICE_Generic_07"};
			};
			class ALICE_Neutral_38
			{
				endSentences[] = {"ALICE_Generic_04","ALICE_Generic_07"};
			};
		};
		class negative
		{
			type = 2;
			class ALICE_Negative_01
			{
				endSentences[] = {"ALICE_Negative_04"};
			};
			class ALICE_Negative_05
			{
				endSentences[] = {"ALICE_Negative_07"};
			};
			class ALICE_Negative_08
			{
				endSentences[] = {"ALICE_Negative_12"};
			};
			class ALICE_Negative_13
			{
				endSentences[] = {"ALICE_Negative_16"};
			};
			class ALICE_Negative_14
			{
				endSentences[] = {"ALICE_Negative_16"};
			};
			class ALICE_Negative_15
			{
				endSentences[] = {"ALICE_Negative_16"};
			};
		};
		class sad
		{
			type = 3;
			class ALICE_Sad_01
			{
				endSentences[] = {"ALICE_Sad_05"};
			};
			class ALICE_Sad_06
			{
				endSentences[] = {"ALICE_Sad_11"};
			};
			class ALICE_Sad_13
			{
				endSentences[] = {"ALICE_Sad_17"};
			};
			class ALICE_Sad_18
			{
				endSentences[] = {"ALICE_Sad_34","ALICE_Sad_35","ALICE_Sad_37"};
			};
			class ALICE_Sad_21
			{
				endSentences[] = {"ALICE_Sad_33","ALICE_Sad_34","ALICE_Sad_35","ALICE_Sad_37","ALICE_Sad_38"};
			};
			class ALICE_Sad_25
			{
				endSentences[] = {"ALICE_Sad_33","ALICE_Sad_34","ALICE_Sad_35","ALICE_Sad_37","ALICE_Sad_38"};
			};
			class ALICE_Sad_28
			{
				endSentences[] = {"ALICE_Sad_32"};
			};
			class ALICE_Sad_29
			{
				endSentences[] = {"ALICE_Sad_30","ALICE_Sad_32"};
			};
			class ALICE_Sad_36
			{
				endSentences[] = {"ALICE_Sad_33","ALICE_Sad_34","ALICE_Sad_35","ALICE_Sad_37","ALICE_Sad_38"};
			};
		};
	};
};
class CfgCivilianScreams
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
class CfgCivilianRemarks
{
	class BIS
	{
		class ALICE_Remark_01{};
		class ALICE_Remark_04{};
		class ALICE_Remark_05{};
		class ALICE_Remark_06{};
		class ALICE_Remark_07{};
		class ALICE_Remark_08{};
		class ALICE_Remark_09{};
		class ALICE_Remark_10{};
		class ALICE_Remark_11{};
		class ALICE_Remark_15{};
		class ALICE_Remark_17{};
		class ALICE_Remark_18{};
		class ALICE_Remark_19{};
		class ALICE_Remark_20{};
		class ALICE_Remark_21{};
		class ALICE_Remark_22{};
		class ALICE_Remark_23{};
		class ALICE_Remark_24{};
		class ALICE_Sigh01{};
		class ALICE_Sigh02{};
		class ALICE_Sigh03{};
		class ALICE_Sigh04{};
		class ALICE_Weep01{};
		class ALICE_Weep02{};
		class ALICE_Weep03{};
		class ALICE_Weep04{};
		class ALICE_Whistle01{};
		class ALICE_Whistle02{};
		class ALICE_Yawn01{};
		class ALICE_Yawn02{};
	};
};
class CfgCivilianActions
{
	class BIS
	{
		class stay
		{
			condition = "_twnthreat <= 0";
			fsm = "ca\modules\alice\data\actions\safe_stay.fsm";
			rarity = 1;
			locked = 0;
			canRepeat = 1;
		};
		class goHomeLimit
		{
			condition = "_twnthreat <= 0 && ((typeof vehicle _unit == 'bis_alice_emptydoor') || (_twnstatus == 'black') || ((count _population * _populationCoef + 1) < count _populationActive))";
			fsm = "ca\modules\alice\data\actions\safe_goHomeLimit.fsm";
			rarity = 1000;
			locked = 1;
			canRepeat = 1;
		};
		class goHomeEnv
		{
			condition = "_twnthreat == 0 && (((count _population * _populationCoef + 1) >= count _populationActive) && (daytime < _daytimeStart || daytime > _daytimeEnd) || rain > _rain || overcast > _overcast || fog > _fog)";
			fsm = "ca\modules\alice\data\actions\safe_goHomeEnv.fsm";
			rarity = 1000;
			locked = 1;
			canRepeat = 1;
			initVariables[] = {"_daytimeStart","_daytimeEnd","_rain","_overcast","_fog"};
			init = "_daytimeStart = 5 + 4*_randomValue; _daytimeEnd = 18 + 2*_randomValue; _rain = 0.2*_randomValue; _overcast = 0.8 + 0.2*_randomValue; _fog = 0.8 + 0.2*_randomValue;";
		};
		class walk
		{
			condition = "_twnthreat == 0";
			fsm = "ca\modules\alice\data\actions\safe_walk.fsm";
			rarity = 0.1;
		};
		class drive
		{
			condition = "_twnthreat <= 1 && _twnthreat >= 0 && !isnil 'bis_silvie_mainscope' && {_x getvariable 'ALICE_threat' <= 1} count _nearbyTowns > 0 && getnumber(configfile >> 'cfgvehicles' >> typeof (_this select 0) >> 'woman') == 0;";
			fsm = "ca\modules\alice\data\actions\safe_drive.fsm";
			rarity = 0.01;
			locked = 1;
			canRepeat = 0;
		};
		class hideIn
		{
			condition = "_twnthreat > 0 && (count _doors > 0 || (typeof vehicle _unit == 'bis_alice_emptydoor'))";
			fsm = "ca\modules\alice\data\actions\combat_hideIn.fsm";
			rarity = 1.0;
			locked = 1;
		};
		class hideInLimit
		{
			condition = "_twnthreat > 0 && (_twnstatus == 'black') && (count _doors > 0 || (typeof vehicle _unit == 'bis_alice_emptydoor'))";
			fsm = "ca\modules\alice\data\actions\combat_hideIn.fsm";
			rarity = 1000;
			locked = 1;
		};
		class hideOut
		{
			condition = "_twnthreat > 0";
			fsm = "ca\modules\alice\data\actions\combat_hideOut.fsm";
			rarity = 0.1;
			locked = 1;
		};
		class flee
		{
			condition = "_twnthreat > 1 && _twnstatus != 'black' && (count _nearbyTowns > 0)";
			fsm = "ca\modules\alice\data\actions\combat_flee.fsm";
			rarity = 0.01;
			locked = 1;
		};
		class fleeForced
		{
			condition = "_playersNear && (count _nearbyTowns > 0) && (count _doors < (_doorcountdef * _doorcountlimit))";
			fsm = "ca\modules\alice\data\actions\combat_flee.fsm";
			rarity = 10;
			locked = 1;
		};
		class hooker
		{
			condition = "_twnthreat <= 0 && _unitType == 6 && daytime > 14 && daytime < 24";
			fsm = "ca\modules\alice\data\actions\safe_hooker.fsm";
			rarity = 2;
			locked = 1;
		};
	};
};
//};
