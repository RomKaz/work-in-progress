////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:03 2014 : Source 'file' date Fri Oct 31 06:11:03 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class missions_e : config.bin{
class CfgPatches
{
	class CA_Missions_E
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CA_Modules_E"};
	};
};
class CfgMissions
{
	class Missions
	{
		class SP_Benchmark
		{
			directory = "ca\missions_e\scenarios\SPE1_Benchmark1.takistan";
		};
		class SP_Jackal
		{
			directory = "ca\missions_e\scenarios\SPE1_Jackal.Takistan";
		};
		class SP_HikeInTheHills
		{
			directory = "ca\missions_e\scenarios\SPE1_HikeInTheHills.Takistan";
		};
		class SP_OneShotOneKill
		{
			directory = "ca\missions_e\scenarios\SPE1_OneShotOneKill.Takistan";
		};
		class SP_SteelPanthers
		{
			directory = "ca\missions_e\scenarios\SPE1_SteelPanthers.Takistan";
		};
		class SP_Littlebird
		{
			directory = "ca\missions_e\scenarios\SPE1_Littlebird.Takistan";
		};
		class SP_DeathFromAbove
		{
			directory = "ca\missions_e\scenarios\SPE1_DeathFromAbove.Takistan";
		};
		class SP_LaserShow
		{
			directory = "ca\missions_e\scenarios\SPE1_LaserShow.Takistan";
		};
		class SP_Showcase_Guerilla
		{
			directory = "ca\missions_e\scenarios\SPE1_Vehicles_TKG.Zargabad";
		};
		class SP_Showcase_TakistanArmy
		{
			directory = "ca\missions_e\scenarios\SPE1_Vehicles_TKA.Zargabad";
		};
		class SP_Showcase_Allies
		{
			directory = "ca\missions_e\scenarios\SPE1_Vehicles_Allies.Takistan";
		};
		class SP_Showcase_US
		{
			directory = "ca\missions_e\scenarios\SPE1_Vehicles_US.Takistan";
		};
		class SP_Showcase_Civilian
		{
			directory = "ca\missions_e\scenarios\SPE1_Vehicles_Civilian.Zargabad";
		};
	};
	class MPMissions
	{
		class MPE_HikeInTheHills
		{
			directory = "ca\missions_e\MPScenarios\MPE1_HikeInTheHills.Takistan";
		};
		class MPE_Dogfighters
		{
			directory = "ca\missions_e\MPScenarios\MPE1_Dogfighters.Takistan";
		};
		class MPE_OneShotOneKill
		{
			directory = "ca\Missions_e\MPScenarios\MPE1_OneShotOneKill.Takistan";
		};
		class MPE_SteelPanthers
		{
			directory = "ca\Missions_e\MPScenarios\MPE_SteelPanthers.Takistan";
		};
		class MPE_LaserShow
		{
			directory = "ca\Missions_e\MPScenarios\MPE1_LaserShow.Takistan";
		};
		class MPE_SectorControl
		{
			directory = "ca\missions_e\MPScenarios\MPE_SectorControl.Zargabad";
		};
		class MPE_MountainWarfare
		{
			directory = "ca\missions_e\MPScenarios\MPE_MountainWarfare.Takistan";
		};
		class MPE_MountainWarfare3Sided
		{
			directory = "ca\missions_e\MPScenarios\MPE_MountainWarfare3Sided.Takistan";
		};
	};
	class MPTemplates
	{
		class MTE_Deathmatch
		{
			directory = "ca\missions_e\MPTemplates\MPTE_Deathmatch";
		};
		class MTE_TeamDeathmatch
		{
			directory = "ca\missions_e\MPTemplates\MPTE_TeamDeathmatch";
		};
		class MTE_Coop
		{
			directory = "ca\missions_e\MPTemplates\MPTE_Coop";
		};
		class MTE_Town_Deathmatch
		{
			directory = "ca\missions_e\MPTemplates\MPTE_Town_Deathmatch";
		};
		class MTE_Town_TeamDeathmatch
		{
			directory = "ca\missions_e\MPTemplates\MPTE_Town_TeamDeathmatch";
		};
		class MTE_Town_Coop
		{
			directory = "ca\missions_e\MPTemplates\MPTE_Town_Coop";
		};
	};
	class Templates
	{
		class ST_BasicEast
		{
			directory = "ca\missions_e\Templates\Basic.East";
		};
		class ST_BasicRes
		{
			directory = "ca\missions_e\Templates\Basic.Res";
		};
		class ST_BasicWest
		{
			directory = "ca\missions_e\Templates\Basic.West";
		};
		class ST_SecOpsWest
		{
			directory = "ca\missions_e\Templates\SecOps.West";
		};
	};
	class Campaigns
	{
		class Arrowhead
		{
			directory = "ca\missions_e\campaign";
		};
	};
	class Tutorial
	{
		class TE01
		{
			directory = "ca\missions_e\Bootcamp\TE01_Basic_controls.Zargabad";
		};
		class TE02
		{
			directory = "ca\missions_e\Bootcamp\TE02_Tasks.Takistan";
		};
		class TE03
		{
			directory = "ca\missions_e\Bootcamp\TE03_Shooting_range.Zargabad";
		};
		class TE04
		{
			directory = "ca\missions_e\Bootcamp\TE04_First_aid.Zargabad";
		};
		class TE05
		{
			directory = "ca\missions_e\Bootcamp\TE05_Night_ops.Zargabad";
		};
		class TE06
		{
			directory = "ca\missions_e\Bootcamp\TE06_Parachute.Zargabad";
		};
		class TE07
		{
			directory = "ca\missions_e\Bootcamp\TE07_Driving.Zargabad";
		};
		class TE08
		{
			directory = "ca\missions_e\Bootcamp\TE08_Armor.Takistan";
		};
		class TE09
		{
			directory = "ca\missions_e\Bootcamp\TE09_Helicopter_basics.Takistan";
		};
		class TE10
		{
			directory = "ca\missions_e\Bootcamp\TE10_Attack_helicopter.Takistan";
		};
		class TE11
		{
			directory = "ca\missions_e\Bootcamp\TE11_Team_command.Zargabad";
		};
		class TE12
		{
			directory = "ca\missions_e\Bootcamp\TE12_Supports.Zargabad";
		};
		class TE13
		{
			directory = "ca\missions_e\Bootcamp\TE13_High_command.Zargabad";
		};
		class TE14
		{
			directory = "ca\missions_e\Bootcamp\TE14_Construction.Zargabad";
		};
		class TE15
		{
			directory = "ca\missions_e\Bootcamp\TE15_UAVs.Zargabad";
		};
	};
	class Procedural
	{
		class Armory
		{
			onLoadMission = "$STR_LIB_ONLOAD";
			debriefing = 0;
			playerKilledScript = "\ca\missions\armory\data\scripts\respawn.sqf";
			onPauseScript = "\ca\missions\armory\data\scripts\pauseOnload.sqf";
			onCheat = "[_this] call LIB_onCheatFunction";
		};
	};
};
class CfgIdentities
{
	class Kane
	{
		name = "C.F. Kane";
		face = "Face65";
		glasses = "None";
		speaker = "Male02EN";
		pitch = 1.0;
	};
	class Drake
	{
		name = "Howard Drake";
		face = "Default";
		glasses = "None";
		speaker = "Male04EN";
		pitch = 1.0;
	};
	class Herrera
	{
		name = "Ben Herrera";
		face = "Default";
		glasses = "None";
		speaker = "Male01EN";
		pitch = 1.0;
	};
	class Pierce
	{
		name = "Garry Pierce";
		face = "Default";
		glasses = "None";
		speaker = "Male05EN";
		pitch = 1.0;
	};
	class Graves
	{
		name = "Terry Graves";
		face = "Default";
		glasses = "None";
		speaker = "Male02EN";
		pitch = 1.0;
	};
	class Galar
	{
		name = "John Galar";
		face = "Face16";
		glasses = "None";
		speaker = "Male02EN";
		pitch = 1.0;
	};
	class Becker
	{
		name = "Paul Becker";
		face = "Face05";
		glasses = "None";
		speaker = "Male02EN";
		pitch = 1.0;
	};
	class Nyberg
	{
		name = "Peter Nyberg";
		face = "Face08";
		glasses = "None";
		speaker = "Male02EN";
		pitch = 1.0;
	};
	class Joker
	{
		name = "Simon 'Joker' Brown";
		face = "Face10";
		glasses = "None";
		speaker = "Male02EN";
		pitch = 1.0;
	};
	class LadyComm
	{
		name = "Vanessa Dench";
		face = "Face10";
		glasses = "None";
		speaker = "Female01EN_EP1";
		pitch = 1.0;
	};
	class Larry_Grover
	{
		name = "Larry Grover";
		face = "face_grover";
		glasses = "None";
		speaker = "Male02EN";
		pitch = 1.0;
	};
	class Larry_Grover_wounded
	{
		name = "Larry Grover";
		face = "face_grover_wounded";
		glasses = "None";
		speaker = "Male02EN";
		pitch = 1.0;
	};
	class Dr_Hladik
	{
		name = "MD Hladik";
		face = "Default";
		glasses = "None";
		speaker = "Male02EN";
		pitch = 1.0;
	};
	class Haris_Press_EP1
	{
		name = "Joe Harris";
		face = "Default";
		glasses = "None";
		speaker = "Male02EN";
		pitch = 1.0;
	};
	class Rita_Ensler
	{
		name = "Rita Ensler";
		face = "Default";
		glasses = "None";
		speaker = "Female01EN_EP1";
		pitch = 1.0;
	};
	class Dr_Annie_Baker
	{
		name = "MD Annie Baker";
		face = "Default";
		glasses = "None";
		speaker = "Female01EN_EP1";
		pitch = 1.0;
	};
	class Saed
	{
		name = "Sa'ed";
		face = "Default";
		glasses = "None";
		speaker = "Male01TK";
		pitch = 1.0;
	};
	class Elmudja
	{
		name = "Khaled";
		face = "Face04_EP1";
		glasses = "None";
		speaker = "Male01TK";
		pitch = 1.0;
	};
	class Col_Aziz
	{
		name = "Muhammad Rahim Aziz";
		face = "Default";
		glasses = "None";
		speaker = "Male01TK";
		pitch = 1.0;
	};
	class Yusuf
	{
		name = "Yusuf Shakir";
		face = "Face10_EP1";
		glasses = "None";
		speaker = "Male01TK";
		pitch = 1.0;
	};
	class Sadid
	{
		name = "Sadid Zafar";
		face = "Face12_EP1";
		glasses = "None";
		speaker = "Male01TK";
		pitch = 1.0;
	};
};
//};
