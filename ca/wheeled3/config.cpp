////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:16 2014 : Source 'file' date Fri Oct 31 06:07:16 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class wheeled3 : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Bike_Driver = "Bike_Driver";
		Bike_Cargo = "Bike_Cargo";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Bike_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled3\TT650\DATA\anim\KIA_TT650_Driver.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
		};
		class Bike_Cargo_Dead: Bike_Dead
		{
			file = "\ca\wheeled3\TT650\DATA\anim\KIA_TT650_Cargo.rtm";
		};
		class Crew;
		class Bike_Driver: Crew
		{
			file = "\ca\wheeled3\TT650\DATA\anim\TT650_Driver.rtm";
			connectTo[] = {"Bike_Dead",1};
		};
		class Bike_Cargo: Crew
		{
			file = "\ca\wheeled3\TT650\DATA\anim\TT650_Cargo.rtm";
			connectTo[] = {"Bike_Cargo_Dead",1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		Bike_Driver = "";
		Bike_Cargo = "Bike_Cargo";
	};
	class States
	{
		class Crew;
		class CrewKIA;
		class Bike_Cargo: Crew
		{
			file = "\CA\wheeled3\TT650\DATA\ANIM\wmn\womantt650.rtm";
			interpolateTo[] = {"Bike_Cargo_Dead",1};
		};
		class Bike_Cargo_Dead: CrewKIA
		{
			file = "\CA\wheeled3\TT650\DATA\ANIM\wmn\KIA_womantt650.rtm";
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
	};
};
class CfgPatches
{
	class CAWheeled3
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWheeled"};
	};
};
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Car: LandVehicle
	{
		class Damage;
	};
	class Motorcycle: LandVehicle
	{
		alphaTracks = 0.1;
		textureTrackWheel = 1;
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffect";
			};
		};
		dammageHalf[] = {};
		dammageFull[] = {};
		canfloat = 0;
		transportSoldier = 1;
		driverAction = "Bike_Driver";
		cargoAction[] = {"Bike_Cargo"};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		hideWeaponsDriver = 0;
		hideWeaponsCargo = 0;
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 3;
		class AnimationSources
		{
			class FrontDamper
			{
				source = "damper";
				selection = "pravy predni tlumic nerot";
			};
			class BackDamper
			{
				source = "damper";
				selection = "pravy zadni tlumic";
			};
		};
		class DestructionEffects
		{
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect1";
				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
			};
			class Sound
			{
				simulation = "sound";
				type = "Fire";
				position = "destructionEffect1";
				intensity = 1;
				interval = 1;
				lifeTime = 3;
			};
			class Fire1
			{
				simulation = "particles";
				type = "BarelDestructionFire";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1
			{
				simulation = "particles";
				type = "BarelDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.2;
			};
		};
	};
};
//};
