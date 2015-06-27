////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:11:51 2014 : Source 'file' date Fri Oct 31 06:11:51 2014
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

//Class structures_e : Ind\Ind_Coltan_Mine\config.bin{
class CfgPatches
{
	class CAStructures_E_Ind_Ind_Coltan_Mine
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAStructures_E"};
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
	class Land_Ind_Coltan_Conv1_10_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Coltan_mine\Ind_Coltan_Conv1_10_EP1";
		vehicleClass = "Test";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\Ind\Ind_Coltan_Mine\Ind_Coltan_Conv1_10_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Ind_Coltan_Conv1_Main_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Coltan_mine\Ind_Coltan_Conv1_Main_EP1";
		vehicleClass = "Test";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\Ind\Ind_Coltan_Mine\Ind_Coltan_Conv1_Main_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Ind_Coltan_Conv1_end_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Coltan_mine\Ind_Coltan_Conv1_end_EP1";
		vehicleClass = "Test";
	};
	class Land_Ind_Coltan_Conv2_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Coltan_mine\Ind_Coltan_Conv2_EP1";
		vehicleClass = "Test";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\Ind\Ind_Coltan_Mine\Ind_Coltan_Conv2_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Ind_Coltan_Hopper_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Coltan_mine\Ind_Coltan_Hopper_EP1";
		vehicleClass = "Test";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\Ind\Ind_Coltan_Mine\Ind_Coltan_Hopper_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Ind_Coltan_Main_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Coltan_mine\Ind_Coltan_Main_EP1";
		vehicleClass = "Test";
		ladders[] = {{ "start1","end1" }};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures_E\Ind\Ind_Coltan_Mine\Ind_Coltan_Main_ruins_EP1.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Structures_E\Ind\Ind_Coltan_mine\data\Ind_Coltan_Mine_metal2.rvmat","Ca\Structures_E\Ind\Ind_Coltan_mine\data\destruct_half_Ind_Coltan_Mine_metal2.rvmat","Ca\Structures_E\Ind\Ind_Coltan_mine\data\destruct_full_Ind_Coltan_Mine_metal2.rvmat","Ca\Structures_E\Ind\Ind_Coltan_mine\data\Ind_Coltan_Mine_metalRoof.rvmat","Ca\Structures_E\Ind\Ind_Coltan_mine\data\destruct_half_Ind_Coltan_Mine_metalRoof.rvmat","Ca\Structures_E\Ind\Ind_Coltan_mine\data\destruct_full_Ind_Coltan_Mine_metalRoof.rvmat","Ca\Structures_E\Ind\Ind_Coltan_mine\data\Ind_Coltan_Mine_MULTI.rvmat","Ca\Structures_E\Ind\Ind_Coltan_mine\data\destruct_half_Ind_Coltan_Mine_MULTI.rvmat","Ca\Structures_E\Ind\Ind_Coltan_mine\data\destruct_full_Ind_Coltan_Mine_MULTI.rvmat"};
		};
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
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = "$STR_DN_OUT_C_DOOR_DEFAULT";
				displayName = "$STR_DN_OUT_C_DOOR";
				position = "osa Door_1";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
			class OpenDoors2: OpenDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" >= 0.5";
				statement = "this animate [""Dvere2"", 0]";
			};
			class CloseDoors2: CloseDoors1
			{
				position = "osa Door_2";
				condition = "this animationPhase ""Dvere2"" < 0.5";
				statement = "this animate [""Dvere2"", 1]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors2";
		actionEnd2 = "OpenDoors2";
		featureSize = 16;
	};
	class Land_Misc_Coltan_Heap_EP1: House_EP1
	{
		scope = 1;
		model = "\ca\Structures_E\Ind\Ind_Coltan_mine\Misc_Coltan_Heap_EP1";
		vehicleClass = "Test";
		featureSize = 10;
	};
	class Land_Ind_Coltan_Conv1_10_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\Ind\Ind_Coltan_Mine\Ind_Coltan_Conv1_10_ruins_EP1";
	};
	class Land_Ind_Coltan_Conv1_Main_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\Ind\Ind_Coltan_Mine\Ind_Coltan_Conv1_Main_ruins_EP1";
	};
	class Land_Ind_Coltan_Conv2_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\Ind\Ind_Coltan_Mine\Ind_Coltan_Conv2_ruins_EP1";
	};
	class Land_Ind_Coltan_Hopper_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\Ind\Ind_Coltan_Mine\Ind_Coltan_Hopper_ruins_EP1";
	};
	class Land_Ind_Coltan_Main_ruins_EP1: Ruins_EP1
	{
		scope = 1;
		vehicleClass = "Ruins";
		model = "\Ca\Structures_E\Ind\Ind_Coltan_Mine\Ind_Coltan_Main_ruins_EP1";
	};
};
//};
