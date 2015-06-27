////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:11 2014 : Source 'file' date Fri Oct 31 06:07:11 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=4
enum {
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0
};

//Class wheeled2 : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Bike_Driver = "Bike_Driver";
		Bike_Cargo = "Bike_Cargo";
		BTR_Driver = "BTR_Driver";
		BTR_Driver_out = "BTR_Driver_out";
		BTR_Gunner = "BTR_Gunner";
		BTR_Gunner_out = "BTR_Gunner_out";
		BTR_Commander = "BTR_Commander";
		BTR_Commander_out = "BTR_Commander_out";
		BTR_Cargo01 = "BTR_Cargo01";
		BTR_Cargo02 = "BTR_Cargo02";
		BTR_Cargo03 = "BTR_Cargo03";
		BTR_Cargo04 = "BTR_Cargo04";
		Golf_Driver = "Golf_Driver";
		Golf_Cargo01 = "Golf_Cargo01";
		Golf_Cargo02 = "Golf_Cargo02";
		Golf_Cargo03 = "Golf_Cargo03";
		Mutt_Driver = "Mutt_Driver";
		Mutt_Cargo01 = "Mutt_Cargo01";
		Mutt_Cargo02 = "Mutt_Cargo02";
		V3S_Driver = "V3S_Driver";
		V3S_Cargo01 = "V3S_Cargo01";
		GAZ_Gunner = "GAZ_Gunner";
		GAZ_Driver = "GAZ_Driver";
		MTVR_Driver = "MTVR_Driver";
		Kamaz_Driver = "Kamaz_Driver";
		LAV25_Driver = "LAV25_Driver";
		LAV25_Gunner = "LAV25_Gunner";
		LAV25_Commander = "LAV25_Commander_out";
		LAV25_Driver_out = "LAV25_Driver_out";
		LAV25_Gunner_out = "LAV25_Gunner_out";
		LAV25_Commander_out = "LAV25_Commander_out";
		LAV25_Gunner2 = "LAV25_Gunner2";
		Ikarus_Driver = "Ikarus_Driver";
		Ikarus_Cargo = "Ikarus_Cargo";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Bike_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\TT650\DATA\anim\TT650_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Crew;
		class Bike_Driver: Crew
		{
			file = "\ca\wheeled2\TT650\DATA\anim\TT650_Driver.rtm";
			interpolateTo[] = {"Bike_Dead",1};
		};
		class Bike_Cargo: Crew
		{
			file = "\ca\wheeled2\TT650\DATA\anim\TT650_Cargo.rtm";
			interpolateTo[] = {"Bike_Dead",1};
		};
		class KIA_BTR_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\BTR90\DATA\anim\KIA_BTR90_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR_Driver: Crew
		{
			file = "\ca\wheeled2\BTR90\DATA\anim\BTR90_Driver.rtm";
			interpolateTo[] = {"KIA_BTR_Driver",1};
		};
		class KIA_BTR_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\BTR90\DATA\anim\KIA_BTR90_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR_Gunner: Crew
		{
			file = "\ca\wheeled2\BTR90\DATA\anim\BTR90_Gunner.rtm";
			interpolateTo[] = {"KIA_BTR_Gunner",1};
		};
		class KIA_BTR_Commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\BTR90\DATA\anim\KIA_BTR90_Commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR_Commander: Crew
		{
			file = "\ca\wheeled2\BTR90\DATA\anim\BTR90_Commander.rtm";
			interpolateTo[] = {"KIA_BTR_Commander",1};
		};
		class BTR_Driver_out: Crew
		{
			file = "\ca\wheeled2\BTR90\Data\Anim\btr90_driver_out.rtm";
			interpolateTo[] = {"KIA_BTR_Driver",1};
		};
		class BTR_Gunner_out: Crew
		{
			file = "\ca\wheeled2\BTR90\Data\Anim\btr90_gunner_out.rtm";
			interpolateTo[] = {"KIA_BTR_Gunner",1};
		};
		class BTR_Commander_out: Crew
		{
			file = "\ca\wheeled2\BTR90\Data\Anim\btr90_Commander_out.rtm";
			interpolateTo[] = {"KIA_BTR_Commander",1};
		};
		class KIA_BTR_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\BTR90\DATA\anim\KIA_BTR90_Cargo01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR_Cargo01: Crew
		{
			file = "\ca\wheeled2\BTR90\DATA\anim\BTR90_Cargo01.rtm";
			interpolateTo[] = {"KIA_BTR_Cargo01",1};
		};
		class KIA_BTR_Cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\BTR90\DATA\anim\KIA_BTR90_Cargo02.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR_Cargo02: Crew
		{
			file = "\ca\wheeled2\BTR90\DATA\anim\BTR90_Cargo02.rtm";
			interpolateTo[] = {"KIA_BTR_Cargo02",1};
		};
		class KIA_BTR_Cargo03: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\BTR90\DATA\anim\KIA_BTR90_Cargo03.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR_Cargo03: Crew
		{
			file = "\ca\wheeled2\BTR90\DATA\anim\BTR90_Cargo03.rtm";
			interpolateTo[] = {"KIA_BTR_Cargo03",1};
		};
		class KIA_BTR_Cargo04: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\BTR90\DATA\anim\KIA_BTR90_Cargo04.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR_Cargo04: Crew
		{
			file = "\ca\wheeled2\BTR90\DATA\anim\BTR90_Cargo04.rtm";
			interpolateTo[] = {"KIA_BTR_Cargo04",1};
		};
		class KIA_Golf_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\VWGolf\DATA\anim\KIA_Golf_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Golf_Driver: Crew
		{
			file = "\ca\wheeled2\VWGolf\DATA\anim\Golf_Driver.rtm";
			interpolateTo[] = {"KIA_Golf_Driver",1};
		};
		class KIA_Golf_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\VWGolf\DATA\anim\KIA_Golf_Cargo1.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Golf_Cargo01: Crew
		{
			file = "\ca\wheeled2\VWGolf\DATA\anim\Golf_Cargo1.rtm";
			interpolateTo[] = {"KIA_Golf_Cargo01",1};
		};
		class KIA_Golf_Cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\VWGolf\DATA\anim\KIA_Golf_Cargo2.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Golf_Cargo02: Crew
		{
			file = "\ca\wheeled2\VWGolf\DATA\anim\Golf_Cargo2.rtm";
			interpolateTo[] = {"KIA_Golf_Cargo02",1};
		};
		class KIA_Golf_Cargo03: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\VWGolf\DATA\anim\KIA_Golf_Cargo3.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Golf_Cargo03: Crew
		{
			file = "\ca\wheeled2\VWGolf\DATA\anim\Golf_Cargo3.rtm";
			interpolateTo[] = {"KIA_Golf_Cargo03",1};
		};
		class KIA_Mutt_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\DATA\anim\KIA_M151A1_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Mutt_Driver: Crew
		{
			file = "\ca\wheeled2\DATA\anim\M151A1_Driver.rtm";
			interpolateTo[] = {"KIA_Mutt_Driver",1};
		};
		class KIA_Mutt_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\DATA\anim\KIA_M151A1_Cargo1.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Mutt_Cargo01: Crew
		{
			file = "\ca\wheeled2\DATA\anim\M151A1_Cargo1.rtm";
			interpolateTo[] = {"KIA_Mutt_Cargo01",1};
		};
		class KIA_Mutt_Cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\DATA\anim\KIA_M151A1_Cargo2.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Mutt_Cargo02: Crew
		{
			file = "\ca\wheeled2\DATA\anim\M151A1_Cargo2.rtm";
			interpolateTo[] = {"KIA_Mutt_Cargo02",1};
		};
		class KIA_V3S_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\DATA\anim\KIA_V3S_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class V3S_Driver: Crew
		{
			file = "\ca\wheeled2\DATA\anim\V3S_Driver.rtm";
			interpolateTo[] = {"KIA_V3S_Driver",1};
		};
		class KIA_V3S_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\DATA\anim\KIA_V3S_Cargo1.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class V3S_Cargo01: Crew
		{
			file = "\ca\wheeled2\DATA\anim\V3S_Cargo1.rtm";
			interpolateTo[] = {"KIA_V3S_Cargo01",1};
		};
		class KIA_GAZ_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\DATA\anim\KIA_GAZ_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class GAZ_Gunner: Crew
		{
			file = "\ca\wheeled\Data\Anim\Stryker_GunnerOut.rtm";
			interpolateTo[] = {"KIA_GAZ_Gunner",1};
		};
		class KIA_GAZ_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\KIA_HMMWV_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class GAZ_Driver: Crew
		{
			file = "\ca\wheeled2\Data\Anim\vodnik_driver.rtm";
			interpolateTo[] = {"KIA_GAZ_Driver",1};
		};
		class KIA_MTVR_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\MTVR\Data\Anim\KIA_mtvr_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class MTVR_Driver: Crew
		{
			file = "\ca\wheeled2\MTVR\Data\Anim\Driver.rtm";
			interpolateTo[] = {"KIA_MTVR_Driver",1};
		};
		class KIA_Kamaz_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\Kamaz\Data\Anim\kia_kamaz_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Kamaz_Driver: Crew
		{
			file = "\ca\wheeled2\Kamaz\Data\Anim\kamazdriver.rtm";
			interpolateTo[] = {"KIA_Kamaz_Driver",1};
		};
		class KIA_LAV25_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\LAV25\DATA\anim\kia_lav25_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LAV25_Driver: Crew
		{
			file = "\ca\wheeled2\LAV25\Data\Anim\lav25_driver.rtm";
			interpolateTo[] = {"KIA_LAV25_Driver",1};
		};
		class LAV25_Driver_out: Crew
		{
			file = "\ca\wheeled2\LAV25\Data\Anim\lav25_driver_turnout.rtm";
			interpolateTo[] = {"KIA_LAV25_Driver",1};
		};
		class KIA_LAV25_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\LAV25\DATA\anim\kia_lav25_Gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LAV25_Gunner: Crew
		{
			file = "\ca\wheeled2\LAV25\Data\Anim\lav25_Gunner.rtm";
			interpolateTo[] = {"KIA_LAV25_Gunner",1};
		};
		class LAV25_Gunner_out: Crew
		{
			file = "\ca\wheeled2\LAV25\Data\Anim\lav25_gunner_turnout.rtm";
			interpolateTo[] = {"KIA_LAV25_Gunner",1};
		};
		class KIA_LAV25_Gunner2: KIA_LAV25_Gunner
		{
			file = "\ca\tracked\Data\Anim\KIA_Abrams_CommanderOut.rtm";
		};
		class LAV25_Gunner2: Crew
		{
			file = "\ca\tracked\Data\Anim\Abrams_CommanderOut.rtm";
			interpolateTo[] = {"KIA_LAV25_Gunner2",1};
		};
		class KIA_LAV25_commander: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\LAV25\DATA\anim\kia_lav25_commander.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LAV25_commander: Crew
		{
			file = "\ca\wheeled2\LAV25\Data\Anim\lav25_commander.rtm";
			interpolateTo[] = {"KIA_LAV25_commander",1};
		};
		class LAV25_commander_out: Crew
		{
			file = "\ca\wheeled2\LAV25\Data\Anim\lav25_commander_turnout.rtm";
			interpolateTo[] = {"KIA_LAV25_commander",1};
		};
		class KIA_Ikarus_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\Ikarus\Data\Anim\KIA_Ikarus_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Ikarus_Driver: Crew
		{
			file = "\ca\wheeled2\Ikarus\Data\Anim\Ikarus_driver.rtm";
			interpolateTo[] = {"KIA_Ikarus_Driver",1};
		};
		class KIA_Ikarus_Cargo: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\Ikarus\Data\Anim\KIA_Ikarus_Cargo.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Ikarus_Cargo: Crew
		{
			file = "\ca\wheeled2\Ikarus\Data\Anim\Ikarus_Cargo.rtm";
			interpolateTo[] = {"KIA_Ikarus_Cargo",1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		Bike_Driver = "";
		Bike_Cargo = "";
		BTR_Driver = "";
		BTR_Driver_out = "";
		BTR_Gunner = "";
		BTR_Gunner_out = "";
		BTR_Commander = "";
		BTR_Commander_out = "";
		BTR_Cargo01 = "crew";
		BTR_Cargo02 = "crew";
		BTR_Cargo03 = "crew";
		BTR_Cargo04 = "crew";
		Golf_Driver = "Golf_Driver";
		Golf_Cargo01 = "Golf_Cargo01";
		Golf_Cargo02 = "Golf_Cargo01";
		Golf_Cargo03 = "Golf_Cargo01";
		Mutt_Driver = "";
		Mutt_Cargo01 = "crew";
		Mutt_Cargo02 = "crew";
		V3S_Driver = "";
		V3S_Cargo01 = "crew";
		GAZ_Gunner = "";
		GAZ_Driver = "";
		MTVR_Driver = "";
		Kamaz_Driver = "";
		LAV25_Driver = "";
		LAV25_Gunner = "";
		LAV25_Commander = "";
		LAV25_Driver_out = "";
		LAV25_Gunner_out = "";
		LAV25_Commander_out = "";
		Ikarus_Driver = "";
		Ikarus_Cargo = "";
		LAV25_Gunner2 = "";
	};
	class States
	{
		class Crew;
		class CrewKIA;
		class KIA_Golf_Driver: CrewKIA
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\VWGolf\DATA\anim\wmn\KIA_Golf_woman_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Golf_Driver: Crew
		{
			file = "\ca\wheeled2\VWGolf\DATA\anim\wmn\Golf_woman_Driver.rtm";
			interpolateTo[] = {"KIA_Golf_Driver",1};
		};
		class KIA_Golf_Cargo01: CrewKIA
		{
			actions = "DeadActions";
			file = "\ca\wheeled2\VWGolf\DATA\anim\wmn\KIA_Golf_woman_Cargo1.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Golf_Cargo01: Crew
		{
			file = "\ca\wheeled2\VWGolf\DATA\anim\wmn\Golf_woman_Cargo1.rtm";
			interpolateTo[] = {"KIA_Golf_Cargo01",1};
		};
	};
};
class CfgPatches
{
	class CAWheeled2
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWheeled","CA_Anims_Char"};
	};
};
//};
