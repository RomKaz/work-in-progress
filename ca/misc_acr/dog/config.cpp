////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:44 2014 : Source 'file' date Fri Oct 31 06:04:44 2014
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

//Class misc_acr : dog\config.bin{
class CfgPatches
{
	class CAMisc_ACR_Dog
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CAMisc_ACR"};
	};
};
class CfgMovesAnimalsBase
{
	class StandBase;
};
class CfgMovesDog: CfgMovesAnimalsBase
{
	class States
	{
		class Dog_Stop_NoIdle: StandBase
		{
			actions = "DogActions_NoIdle";
			duty = -1;
			file = "\CA\animals2\dogs\data\Anim\dogStop";
			variantsAI[] = {};
			variantAfter[] = {0,2,3};
			speed = 1e+010;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			looped = 1;
			collisionShape = "Ca\animals2\Dogs\Dog_CollShape.p3d";
			ArrayVariable_402 = 0.4;
			ArrayVariable_404 = 0.6;
			ArrayVariable_399 = "";
			ArrayVariable_400 = "";
			ConnectTo[] = {"Dog_TurnL_NoIdle",0.1,"Dog_TurnR_NoIdle",0.1,"Dog_StopV1_NoIdle",0.1,"Dog_StopV2_NoIdle",0.1,"Dog_Sit1_NoIdle",0.1,"Dog_Sprint_NoIdle",0.02,"Dog_Run_NoIdle",0.02,"Dog_Walk_NoIdle",0.2};
			InterpolateTo[] = {"Dog_TurnL_NoIdle",0.1,"Dog_TurnR_NoIdle",0.1,"Dog_Sprint_NoIdle",0.02,"Dog_Run_NoIdle",0.02,"Dog_Walk_NoIdle",0.2,"Dog_Die",0.02};
		};
		class Dog_TurnL_NoIdle: Dog_Stop_NoIdle
		{
			file = "\CA\animals2\Dogs\data\anim\dog_rotateL.rtm";
			speed = 1;
			ConnectTo[] = {"Dog_Stop_NoIdle",0.1};
			InterpolateTo[] = {"Dog_Stop_NoIdle",0.1};
		};
		class Dog_TurnR_NoIdle: Dog_TurnL_NoIdle
		{
			file = "\CA\animals2\Dogs\data\anim\dog_rotateR.rtm";
			ConnectTo[] = {"Dog_Stop_NoIdle",0.1};
			InterpolateTo[] = {"Dog_Stop_NoIdle",0.1};
		};
		class Dog_StopV1_NoIdle: Dog_Stop_NoIdle
		{
			file = "\CA\animals2\dogs\data\Anim\dogIDLE";
			speed = 2.14;
			variantAfter[] = {5,7,10};
			looped = 0;
			ConnectTo[] = {"Dog_Stop_NoIdle",0.1};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_StopV2_NoIdle: Dog_Stop_NoIdle
		{
			file = "\CA\animals2\dogs\data\Anim\dogBark";
			speed = 1;
			variantAfter[] = {1,1,1};
			looped = 0;
			ConnectTo[] = {"Dog_Stop_NoIdle",0.1};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_Sit1_NoIdle: Dog_Stop_NoIdle
		{
			actions = "DogSit_NoIdle";
			file = "\CA\animals2\dogs\data\Anim\dogSit1In";
			speed = 1.43;
			variantAfter[] = {1,1,1};
			looped = 0;
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			ConnectTo[] = {"Dog_Siting_NoIdle",0.0};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_Siting_NoIdle: Dog_Stop_NoIdle
		{
			actions = "DogSit_NoIdle";
			file = "\CA\animals2\dogs\data\Anim\dogSit2Idle";
			speed = 1.58;
			variantAfter[] = {1,1,1};
			looped = 1;
			ConnectTo[] = {"Dog_Sit3_NoIdle",0.1};
			InterpolateTo[] = {"Dog_Sit3_NoIdle",0.1,"Dog_Die",0.02};
		};
		class Dog_Sit3_NoIdle: Dog_Stop_NoIdle
		{
			actions = "DogSit_NoIdle";
			file = "\CA\animals2\dogs\data\Anim\dogSit3Out";
			speed = 1.08;
			variantAfter[] = {1,1,1};
			looped = 0;
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			ConnectTo[] = {"Dog_Stop_NoIdle",0.1};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_Sprint_NoIdle: Dog_Stop_NoIdle
		{
			actions = "DogSprint_NoIdle";
			file = "\CA\animals2\dogs\data\Anim\dogSprint";
			duty = 0.5;
			speed = 4.5;
			ConnectTo[] = {"Dog_Stop_NoIdle",0.02,"Dog_Run_NoIdle",0.02,"Dog_Walk_NoIdle",0.2};
			InterpolateTo[] = {"Dog_Stop_NoIdle",0.02,"Dog_Run_NoIdle",0.02,"Dog_Walk_NoIdle",0.2,"Dog_Die",0.02};
		};
		class Dog_Run_NoIdle: Dog_Stop_NoIdle
		{
			file = "\CA\animals2\dogs\data\Anim\dogRun";
			duty = -0.5;
			speed = 1.8;
			ConnectTo[] = {"Dog_Stop_NoIdle",0.02,"Dog_Sprint_NoIdle",0.02,"Dog_Walk_NoIdle",0.2};
			InterpolateTo[] = {"Dog_Stop_NoIdle",0.02,"Dog_Sprint_NoIdle",0.02,"Dog_Walk_NoIdle",0.2,"Dog_Die",0.02};
		};
		class Dog_Walk_NoIdle: Dog_Stop_NoIdle
		{
			duty = -0.7;
			file = "\CA\animals2\dogs\data\Anim\dogWalk";
			speed = 1.0;
			variantAfter[] = {3,10,20};
			ConnectTo[] = {"Dog_Stop_NoIdle",0.2,"Dog_Sprint_NoIdle",0.2,"Dog_Run_NoIdle",0.2};
			InterpolateTo[] = {"Dog_Stop_NoIdle",0.2,"Dog_Sprint_NoIdle",0.2,"Dog_Run_NoIdle",0.2,"Dog_Die",0.02};
		};
	};
	class Actions
	{
		class NoActions;
		class DogActions_NoIdle: NoActions
		{
			Stop = "Dog_Stop_NoIdle";
			StopRelaxed = "Dog_Stop_NoIdle";
			TurnL = "Dog_TurnL_NoIdle";
			TurnR = "Dog_TurnR_NoIdle";
			TurnLRelaxed = "Dog_TurnL_NoIdle";
			TurnRRelaxed = "Dog_TurnR_NoIdle";
			Default = "Dog_Stop_NoIdle";
			JumpOff = "Dog_Stop_NoIdle";
			WalkF = "Dog_Run_NoIdle";
			SlowF = "Dog_Run_NoIdle";
			FastF = "Dog_Sprint_NoIdle";
			EvasiveForward = "Dog_Sprint_NoIdle";
			Down = "Dog_Stop_NoIdle";
			Up = "Dog_Stop_NoIdle";
			PlayerStand = "Dog_Stop_NoIdle";
			PlayerProne = "Dog_Stop_NoIdle";
			PlayerCrouch = "Dog_Siting_NoIdle";
			Crouch = "Dog_Siting_NoIdle";
			Lying = "Dog_Stop_NoIdle";
			Stand = "Dog_Stop_NoIdle";
			Combat = "Dog_Stop_NoIdle";
			CanNotMove = "Dog_Stop_NoIdle";
			Civil = "Dog_Stop_NoIdle";
			CivilLying = "Dog_Stop_NoIdle";
			FireNotPossible = "Dog_StopV1_NoIdle";
			Die = "Dog_Die";
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
			StartSwim = "Dog_Die";
		};
		class DogSprint_NoIdle: DogActions_NoIdle
		{
			Die = "Dog_Die";
			turnSpeed = 4;
			limitFast = 5.5;
			useFastMove = 1;
		};
		class DogSit_NoIdle: NoActions
		{
			Up = "Dog_Stop_NoIdle";
			PlayerStand = "Dog_Stop_NoIdle";
			Stand = "Dog_Stop_NoIdle";
			WalkF = "Dog_Walk_NoIdle";
			SlowF = "Dog_Run_NoIdle";
			FastF = "Dog_Sprint_NoIdle";
			EvasiveForward = "Dog_Sprint_NoIdle";
			PlayerCrouch = "Dog_Stop_NoIdle";
			Crouch = "Dog_Stop_NoIdle";
			Die = "Dog_Die";
			upDegree = "ManPosNoWeapon";
			StartSwim = "Dog_Die";
		};
	};
};
class CfgVehicles
{
	class Pastor;
	class Pastor_ACR: Pastor
	{
		expansion = 3;
		scope = 2;
		displayName = "Alsatian ACR";
		agentTasks[] = {"DogTask"};
		class VariablesScalar
		{
			_runDistanceMax = 30;
			_maxIdleTime = 15;
			_movePrefer = 0.5;
			_threatMaxRadius = 50;
			_formationPrefer = 0.5;
			_scareLimit = 0.1;
			_dangerLimit = 1.0;
		};
		class VariablesString
		{
			_sound1 = "dog_01";
			_sound2 = "dog_02";
			_sound3 = "";
		};
	};
};
class CfgTasks
{
	class DogTask
	{
		name = "Dog Task";
		fsm = "\ca\misc_ACR\Dog\Data\scripts\dog.fsm";
		condition = "\ca\animals2\Data\scripts\createSingleTask.sqf";
		description = "Whoof!";
		destination = "";
		resources[] = {};
	};
};
//};
