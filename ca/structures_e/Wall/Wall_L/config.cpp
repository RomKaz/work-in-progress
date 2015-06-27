////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:12:00 2014 : Source 'file' date Fri Oct 31 06:12:00 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class structures_e : Wall\Wall_L\config.bin{
class CfgPatches
{
	class CAStructures_E_Wall_Wall_L
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAStructures_E_Wall"};
	};
};
class CfgVehicles
{
	class House;
	class House_EP1: House
	{
		class DestructionEffects;
	};
	class Ruins_EP1;
	class Land_Wall_L_2m5_gate_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Wall\Wall_L\Wall_L_2m5_gate_EP1";
		vehicleClass = "Test";
		destrType = "DestructTree";
	};
	class Land_Wall_L1_gate_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Wall\Wall_L\Wall_L1_gate_EP1";
		vehicleClass = "Test";
		destrType = "DestructTree";
		class AnimationSources
		{
			class Dvere1
			{
				animPeriod = 1;
			};
			class Dvere2
			{
				animPeriod = 1;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" >= 0.5";
				statement = "this animate [""Dvere1"", 0];this animate [""Dvere2"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1];this animate [""Dvere2"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors1";
		actionEnd2 = "OpenDoors1";
	};
	class Land_Wall_L3_gate_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Wall\Wall_L\Wall_L3_gate_EP1";
		vehicleClass = "Test";
		destrType = "DestructTree";
		class AnimationSources
		{
			class Dvere1
			{
				animPeriod = 1;
			};
			class Dvere2
			{
				animPeriod = 1;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "$STR_DN_OUT_O_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_O_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1];this animate [""Dvere2"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" >= 0.5";
				statement = "this animate [""Dvere1"", 0];this animate [""Dvere2"", 0]";
			};
			class OpenDoors2: OpenDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" < 0.5";
				statement = "this animate [""Dvere2"", 1];this animate [""Dvere1"", 1]";
			};
			class CloseDoors2: CloseDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" >= 0.5";
				statement = "this animate [""Dvere2"", 0];this animate [""Dvere1"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors1";
		actionEnd2 = "OpenDoors1";
	};
	class Land_Wall_L3_5m_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Wall\Wall_L\Wall_L3_5m_EP1";
		vehicleClass = "Test";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\Wall\Wall_L\Wall_L3_5m_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Wall_L3_pillar_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Wall\Wall_L\Wall_L3_pillar_EP1";
		vehicleClass = "Test";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\Wall\Wall_L\Wall_L3_pillar_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Wall_L3_5m_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\Wall\Wall_L\Wall_L3_5m_ruins_EP1";
	};
	class Land_Wall_L3_pillar_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\Wall\Wall_L\Wall_L3_pillar_ruins_EP1";
	};
	class Land_Wall_L_Mosque_1_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Wall\Wall_L\Wall_L_Mosque_1_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\Wall\Wall_L\Wall_L_Mosque_1_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Wall_L_Mosque_2_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Wall\Wall_L\Wall_L_Mosque_2_EP1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\Wall\Wall_L\Wall_L_Mosque_2_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Wall_L_Mosque_1_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\Wall\Wall_L\Wall_L_Mosque_1_ruins_EP1";
	};
	class Land_Wall_L_Mosque_2_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\Wall\Wall_L\Wall_L_Mosque_2_ruins_EP1";
	};
	class Wall_FenW2_6_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Wall\Wall_L\Wall_FenW2_6_EP1";
	};
	class Wall_L_2m5_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Wall\Wall_L\Wall_L_2m5_EP1";
	};
	class Wall_L1_2m5_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Wall\Wall_L\Wall_L1_2m5_EP1";
	};
	class Wall_L1_5m_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Wall\Wall_L\Wall_L1_5m_EP1";
	};
	class Wall_L2_5m_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Wall\Wall_L\Wall_L2_5m_EP1";
	};
	class Wall_L3_5m_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Wall\Wall_L\Wall_L3_5m_EP1";
	};
};
//};
