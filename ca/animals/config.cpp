////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:46 2014 : Source 'file' date Fri Oct 31 06:00:46 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class animals : config.bin{
class CfgPatches
{
	class CAAnimals
	{
		units[] = {"SeaGull","Hawk","DragonFly","HouseFly","HoneyBee","Mosquito"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class cfgNonAiVehicles
{
	class Insect;
	class Bird;
	class SeaGull: Bird
	{
		model = "\ca\animals\racekT.p3d";
		singSound[] = {"\ca\animals\Data\Sound\gullsb",0.1,1,200};
		canBeShot = 0;
	};
	class Hawk: Bird
	{
		model = "\ca\Animals\hawk.p3d";
		singSound[] = {"\ca\animals\Data\Sound\hawk",0.1,1,200};
		minHeight = 60;
		avgHeight = 70;
		maxHeight = 80;
		canBeShot = 0;
	};
	class DragonFly: Insect
	{
		model = "\ca\Animals\dragonfly.p3d";
		flySound[] = {"\ca\Animals\Data\Sound\fly3final",0.1,1,1.5};
		fsm[] = {"Dragonfly"};
		straightDistance = 10;
		maxSpeed = 5;
	};
	class ButterFly: Insect
	{
		model = "\ca\Animals\aglais_urticae.p3d";
		fsm[] = {"Butterfly"};
		moves = "CfgMovesButterfly";
		minHeight = -0.1;
		avgHeight = 0.3;
		maxHeight = 1.5;
		minSpeed = -0.1;
		maxSpeed = 1;
		acceleration = 5;
		straightDistance = 2;
		turning = 5;
		reversed = 0;
		autocenter = 0;
	};
	class HouseFly: Insect
	{
		model = "\ca\Animals\fly.p3d";
		flySound[] = {"\ca\Animals\Data\Sound\fly3final",0.01,1,1.2};
		minSpeed = -0.1;
		maxSpeed = 5;
		minHeight = -0.1;
		avgHeight = 1.4;
		maxHeight = 2;
		straightDistance = 0.5;
	};
	class HoneyBee: Insect
	{
		flySound[] = {"\ca\Animals\Data\Sound\bee4final",0.01,1,1.2};
		model = "\ca\Animals\honeybee.p3d";
		minSpeed = -0.1;
		maxSpeed = 0.2;
		minHeight = -0.1;
		avgHeight = 0.2;
		maxHeight = 1;
		fsm[] = {"HoneyBee"};
		reversed = 0;
		straightDistance = 0.5;
	};
	class Mosquito: Insect
	{
		model = "\ca\Animals\mosquito.p3d";
		flySound[] = {"\ca\Animals\Data\Sound\mosquito4final",0.01,1,1.2};
		minSpeed = -0.05;
		maxSpeed = 2;
		minHeight = -0.1;
		avgHeight = 1;
		maxHeight = 2;
		straightDistance = 0.4;
	};
};
class CfgFSMs
{
	class Dragonfly
	{
		class States
		{
			class Random_Move
			{
				name = "Random_Move";
				class Init
				{
					function = "randomMove";
					parameters[] = {1,-0.1,1.2,5.0};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1.0;
						to = "SetRandom3";
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class TimeElapsed
					{
						priority = 0.0;
						to = "SetRandom2";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class LongerWait
			{
				name = "LongerWait";
				class Init
				{
					function = "wait";
					parameters[] = {0.8,2.0};
					thresholds[] = {};
				};
				class Links
				{
					class WaitCompleted
					{
						priority = 0.0;
						to = "SetTimerRandom";
						class Condition
						{
							function = "waitCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Init
			{
				name = "Init";
				class Init
				{
					function = "setNoBackwards";
					parameters[] = {1.0};
					thresholds[] = {{ 0,0.5,0.5 }};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "SetTimerRandom";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetTimerRandom
			{
				name = "SetTimerRandom";
				class Init
				{
					function = "setTimer";
					parameters[] = {0.5,2};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "SetRandom";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class ShortWait
			{
				name = "ShortWait";
				class Init
				{
					function = "wait";
					parameters[] = {0.6,1.5};
					thresholds[] = {};
				};
				class Links
				{
					class WaitCompleted
					{
						priority = 0.0;
						to = "SetTimerRandom";
						class Condition
						{
							function = "waitCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetRandom2
			{
				name = "SetRandom2";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{ 1,0,1.0 }};
				};
				class Links
				{
					class constProbability
					{
						priority = 1.0;
						to = "LongWait";
						class Condition
						{
							function = "const";
							parameters[] = {0.1};
							threshold = 1;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Always
					{
						priority = 0.0;
						to = "LongerWait";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetRandom3
			{
				name = "SetRandom3";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{ 1,0,1.0 }};
				};
				class Links
				{
					class constProbability
					{
						priority = 1.0;
						to = "LongWait";
						class Condition
						{
							function = "const";
							parameters[] = {0.15};
							threshold = 1;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Always
					{
						priority = 0.0;
						to = "ShortWait";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class LongWait
			{
				name = "LongWait";
				class Init
				{
					function = "wait";
					parameters[] = {4.0,8.0};
					thresholds[] = {};
				};
				class Links
				{
					class WaitCompleted
					{
						priority = 0.0;
						to = "SetTimerRandom";
						class Condition
						{
							function = "waitCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetRandom
			{
				name = "SetRandom";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{ 1,0,1.0 }};
				};
				class Links
				{
					class constProbability
					{
						priority = 1.0;
						to = "LongMove";
						class Condition
						{
							function = "const";
							parameters[] = {0.1};
							threshold = 1;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Always
					{
						priority = 0.0;
						to = "Random_Move";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class LongMove
			{
				name = "LongMove";
				class Init
				{
					function = "randomMove";
					parameters[] = {2.5,-0.1,1.2,5.0};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1.0;
						to = "SetRandom3";
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class TimeElapsed
					{
						priority = 0.0;
						to = "SetRandom2";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
		};
		initState = "Init";
		finalStates[] = {};
	};
	class Butterfly
	{
		class States
		{
			class Init
			{
				name = "Init";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{ 0,0.5,0.5 }};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "SetTimer";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class MoveLand
			{
				name = "MoveLand";
				class Init
				{
					function = "randomMoveLand";
					parameters[] = {2};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1.0;
						to = "SetTimer3";
						class Condition
						{
							function = "moveCompletedVertical";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "wait";
							parameters[] = {5,15};
							thresholds[] = {};
						};
					};
					class TimeElapsed
					{
						priority = 0.0;
						to = "Land";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetTimer3
			{
				name = "SetTimer3";
				class Init
				{
					function = "setTimer";
					parameters[] = {4,6};
					thresholds[] = {};
				};
				class Links
				{
					class TimeElapsed
					{
						priority = 0.0;
						to = "checkWait";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "switchAction";
							parameters[] = {1};
							thresholds[] = {};
						};
					};
				};
			};
			class checkWait
			{
				name = "checkWait";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class WaitCompleted
					{
						priority = 1.0;
						to = "SetTimer";
						class Condition
						{
							function = "waitCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "switchAction";
							parameters[] = {0};
							thresholds[] = {};
						};
					};
					class Always
					{
						priority = 0.0;
						to = "SetTimer3";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetTimer
			{
				name = "SetTimer";
				class Init
				{
					function = "setTimer";
					parameters[] = {10,25};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "Move";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Land
			{
				name = "Land";
				class Init
				{
					function = "Land";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "Wait";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Wait
			{
				name = "Wait";
				class Init
				{
					function = "wait";
					parameters[] = {3,10};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "SetTimer3";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Move
			{
				name = "Move";
				class Init
				{
					function = "randomMove";
					parameters[] = {3};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1.0;
						to = "Continue";
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class TimeElapsed
					{
						priority = 0.0;
						to = "SetTimer2";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetTimer2
			{
				name = "SetTimer2";
				class Init
				{
					function = "setTimer";
					parameters[] = {3,6};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "MoveLand";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Continue
			{
				name = "Continue";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "Move";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
		};
		initState = "Init";
		finalStates[] = {};
	};
	class HoneyBee
	{
		class States
		{
			class ShortMove
			{
				name = "ShortMove";
				class Init
				{
					function = "randomMove";
					parameters[] = {0.2};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1.0;
						to = "SetRandom";
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class TimeElapsed
					{
						priority = 0.0;
						to = "SetRandom";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Break
			{
				name = "Break";
				class Init
				{
					function = "break";
					parameters[] = {50.0};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "SetTimer";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Init
			{
				name = "Init";
				class Init
				{
					function = "setNoBackwards";
					parameters[] = {0.0};
					thresholds[] = {{ 0,0.5,0.5 }};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "SetTimerRandom";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetTimerRandom
			{
				name = "SetTimerRandom";
				class Init
				{
					function = "setTimer";
					parameters[] = {0.5,2};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0.0;
						to = "SetRandom_1";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetTimer
			{
				name = "SetTimer";
				class Init
				{
					function = "setTimer";
					parameters[] = {0.1,0.3};
					thresholds[] = {};
				};
				class Links
				{
					class TimeElapsed
					{
						priority = 0.0;
						to = "SetTimerRandom";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetRandom
			{
				name = "SetRandom";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{ 1,0,1.0 }};
				};
				class Links
				{
					class constProbability
					{
						priority = 1.0;
						to = "SetRandom_1";
						class Condition
						{
							function = "const";
							parameters[] = {0.5};
							threshold = 1;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Always
					{
						priority = 0.0;
						to = "Break";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetRandom_1
			{
				name = "SetRandom_1";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{ 1,0,1.0 }};
				};
				class Links
				{
					class constProbability
					{
						priority = 1.0;
						to = "LongMove";
						class Condition
						{
							function = "const";
							parameters[] = {0.1};
							threshold = 1;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Always
					{
						priority = 0.0;
						to = "ShortMove";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class LongMove
			{
				name = "LongMove";
				class Init
				{
					function = "randomMove";
					parameters[] = {1.5};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1.0;
						to = "SetRandom";
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class TimeElapsed
					{
						priority = 0.0;
						to = "SetRandom";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
		};
		initState = "Init";
		finalStates[] = {};
	};
};
class CfgMovesButterfly
{
	access = 0;
	collisionVertexPattern[] = {};
	collisionGeomCompPattern[] = {};
	class ManActions
	{
		default = "";
		open = "";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			upDegree = -1;
			turnSpeed = 1;
			limitFast = 5;
			useFastMove = 0;
		};
		class DefaultActions: NoActions
		{
			default = "Fly";
			open = "Open";
			upDegree = 0;
		};
	};
	class Default
	{
		actions = "DefaultActions";
		file = "";
		looped = 1;
		speed = 0.5;
		onLandBeg = 0;
		onLandEnd = 0;
		predictSpeedCoef = 1;
		relSpeedMin = 1.0;
		relSpeedMax = 1.0;
		soundEnabled = 0;
		soundOverride = "";
		soundEdge[] = {};
		terminal = 0;
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
		controlHead = 0;
		headBobMode = 0;
		headBobStrength = 0;
		walkcycles = 1;
		forceAim = 0;
	};
	class States
	{
		class Fly: Default
		{
			file = "\ca\animals\data\rtm\Butterfly_Fly.rtm";
			looped = 1;
			speed = -0.25;
		};
		class Open: Default
		{
			file = "\ca\animals\data\rtm\Butterfly_Open.rtm";
			looped = 0;
			speed = -1;
			connectFrom[] = {"Fly",1};
			connectTo[] = {"Fly",1};
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
};
//};
