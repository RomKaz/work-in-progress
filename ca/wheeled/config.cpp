////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:06 2014 : Source 'file' date Fri Oct 31 06:07:06 2014
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

//Class wheeled : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		BRDM2_Driver = "BRDM2_Driver";
		BRDM2_Gunner = "BRDM2_Gunner";
		BRDM2_Cargo01 = "BRDM2_Cargo01";
		BRDM2_Cargo02 = "BRDM2_Cargo02";
		CityBus_Driver = "CityBus_Driver";
		Datsun_Driver = "Datsun_Driver";
		Hatchback_Driver = "Hatchback_Driver";
		Hatchback_Cargo01 = "Hatchback_Cargo01";
		Hilux_Driver = "Hilux_Driver";
		Hilux_Cargo01 = "Hilux_Cargo01";
		Hilux_Gunner = "Hilux_Gunner";
		HMMWV_Driver = "HMMWV_Driver";
		HMMWV_Gunner01 = "HMMWV_Gunner01";
		HMMWV_Gunner02 = "HMMWV_Gunner02";
		HMMWV_Gunner03 = "HMMWV_Gunner03";
		HMMWV_Gunner04 = "HMMWV_Gunner04";
		HMMWV_Cargo01 = "HMMWV_Cargo01";
		Landrover_Driver = "Landrover_Driver";
		Landrover_Gunner = "Landrover_Gunner";
		Landrover_Cargo01 = "Landrover_Cargo01";
		Landrover_Cargo02 = "Landrover_Cargo02";
		Landrover_Cargo03 = "Landrover_Cargo03";
		Sedan_Driver = "Sedan_Driver";
		Skodovka_Driver = "Skodovka_Driver";
		Skodovka2_Driver = "Skodovka2_Driver";
		Skodovka_Cargo01 = "Skodovka_Cargo01";
		Stryker_Driver = "Stryker_Driver";
		Stryker_DriverOut = "Stryker_DriverOut";
		Stryker_Gunner = "Stryker_Gunner";
		Stryker_GunnerOut = "Stryker_GunnerOut";
		Stryker_Cargo01 = "Stryker_Cargo01";
		Tractor_Driver = "Tractor_Driver";
		Truck_Driver = "Truck_Driver";
		Truck_Gunner = "Truck_Gunner";
		Truck_Cargo01 = "Truck_Cargo01";
		Truck_Cargo02 = "Truck_Cargo02";
		Truck_Cargo03 = "Truck_Cargo03";
		Truck_Cargo04 = "Truck_Cargo04";
		UAZ_Driver = "UAZ_Driver";
		UAZ_Gunner01 = "UAZ_Gunner01";
		UAZ_Gunner02 = "UAZ_Gunner02";
		UAZ_Cargo01 = "UAZ_Cargo01";
		UAZ_Cargo02 = "UAZ_Cargo02";
		datsun_Gunner01 = "datsun_Gunner01";
		datsun_Gunner02 = "datsun_Gunner01";
		datsun_cargo02 = "datsun_cargo02";
		SPG_Car_Gunner = "SPG_Car_Gunner";
		Grad_Gunner = "Grad_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Stryker_Dead: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\wheeled\Data\Anim\Stryker_Dead.rtm";
			connectTo[] = {"DeadState",0.1};
		};
		class Crew;
		class KIA_BRDM2_Driver: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\wheeled\Data\Anim\KIA_BRDM2_Driver.rtm";
			connectTo[] = {"DeadState",0.1};
		};
		class BRDM2_Driver: Crew
		{
			file = "\ca\wheeled\Data\Anim\BRDM2_Driver.rtm";
			interpolateTo[] = {"KIA_BRDM2_Driver",1};
		};
		class KIA_BRDM2_Gunner: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\wheeled\Data\Anim\KIA_BRDM2_Gunner.rtm";
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BRDM2_Gunner: Crew
		{
			file = "\ca\wheeled\Data\Anim\BRDM2_Gunner.rtm";
			interpolateTo[] = {"KIA_BRDM2_Gunner",1};
		};
		class KIA_BRDM2_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\wheeled\Data\Anim\KIA_BRDM2_Cargo01.rtm";
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BRDM2_Cargo01: Crew
		{
			file = "\ca\wheeled\Data\Anim\BRDM2_Cargo01.rtm";
			interpolateTo[] = {"KIA_BRDM2_Cargo01",1};
		};
		class KIA_BRDM2_Cargo02: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\wheeled\Data\Anim\KIA_BRDM2_Cargo02.rtm";
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BRDM2_Cargo02: Crew
		{
			file = "\ca\wheeled\Data\Anim\BRDM2_Cargo02.rtm";
			interpolateTo[] = {"KIA_BRDM2_Cargo02",1};
		};
		class KIA_Bus_city_Driver: Crew
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\wheeled\Data\Anim\KIA_Bus_city_Driver.rtm";
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class CityBus_Driver: Crew
		{
			file = "\ca\wheeled\Data\Anim\CityBus_Driver.rtm";
			interpolateTo[] = {"KIA_Bus_city_Driver",1};
		};
		class KIA_Datsun_Driver: Crew
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\wheeled\Data\Anim\KIA_Datsun_Driver.rtm";
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Datsun_Driver: Crew
		{
			file = "\ca\wheeled\Data\Anim\Datsun_Driver.rtm";
			interpolateTo[] = {"KIA_Datsun_Driver",1};
		};
		class KIA_Hatchback_Driver: Crew
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\wheeled\Data\Anim\KIA_Hatchback_Driver.rtm";
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Hatchback_Driver: Crew
		{
			file = "\ca\wheeled\Data\Anim\Hatchback_Driver.rtm";
			interpolateTo[] = {"KIA_Hatchback_Driver",1};
		};
		class KIA_Hatchback_Cargo01: Crew
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\wheeled\Data\Anim\KIA_Hatchback_Cargo01.rtm";
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Hatchback_Cargo01: Crew
		{
			file = "\ca\wheeled\Data\Anim\Hatchback_Cargo01.rtm";
			interpolateTo[] = {"KIA_Hatchback_Cargo01",1};
		};
		class KIA_Hilux_Driver: Crew
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\KIA_Hilux_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class Hilux_Driver: Crew
		{
			file = "\ca\wheeled\Data\Anim\Hilux_Driver.rtm";
			interpolateTo[] = {"KIA_Hilux_Driver",1};
		};
		class KIA_Hilux_Cargo01: Crew
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\KIA_Hilux_Cargo01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class Hilux_Cargo01: Crew
		{
			file = "\ca\wheeled\Data\Anim\Hilux_Cargo01.rtm";
			interpolateTo[] = {"KIA_Hilux_Cargo01",1};
		};
		class Hilux_Gunner: Crew
		{
			file = "\ca\wheeled\Hilux_Armed\Data\Anim\gunner.rtm";
			interpolateTo[] = {"Stryker_Dead",1};
		};
		class KIA_HMMWV_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\KIA_HMMWV_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class HMMWV_Driver: Crew
		{
			file = "\ca\wheeled\Data\Anim\HMMWV_Driver.rtm";
			interpolateTo[] = {"KIA_HMMWV_Driver",1};
		};
		class KIA_HMMWV_Gunner: KIA_HMMWV_Driver
		{
			file = "\ca\wheeled\Data\Anim\KIA_hmmwv_gunnerOUT.rtm";
		};
		class HMMWV_Gunner01: Crew
		{
			file = "\ca\wheeled\Data\Anim\hmmwv_M2gunnerOUT.rtm";
			interpolateTo[] = {"KIA_HMMWV_Gunner",1};
		};
		class HMMWV_Gunner02: Crew
		{
			file = "\ca\wheeled\Data\Anim\hmmwv_mk19gunnerOUT.rtm";
			interpolateTo[] = {"KIA_HMMWV_Gunner",1};
		};
		class HMMWV_Gunner03: Crew
		{
			file = "\ca\wheeled\Data\Anim\hmmwv_TOW_gunnerOUT.rtm";
			interpolateTo[] = {"KIA_HMMWV_Gunner",1};
		};
		class HMMWV_Gunner04: Crew
		{
			file = "\ca\wheeled\Data\Anim\hmmwv_M240gunner.rtm";
			interpolateTo[] = {"KIA_HMMWV_Gunner04",1};
		};
		class KIA_HMMWV_Cargo01: KIA_HMMWV_Driver
		{
			file = "\ca\wheeled\Data\Anim\KIA_HMMWV_Cargo01.rtm";
		};
		class KIA_HMMWV_Gunner04: KIA_HMMWV_Gunner
		{
			file = "\ca\wheeled\Data\Anim\KIA_hmmwv_M240gunner.rtm";
		};
		class HMMWV_Cargo01: Crew
		{
			file = "\ca\wheeled\Data\Anim\hmmwv_Cargo01_V0.rtm";
			interpolateTo[] = {"KIA_HMMWV_Cargo01",0.1};
			connectTo[] = {"HMMWV_Cargo01",0.1,"HMMWV_Cargo01_V1",0.1,"HMMWV_Cargo01_V2",0.1};
			equivalentTo = "HMMWV_Cargo01";
			variantsAI[] = {"HMMWV_Cargo01",0.6,"HMMWV_Cargo01_V1",0.2,"HMMWV_Cargo01_V2",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class HMMWV_Cargo01_V1: HMMWV_Cargo01
		{
			file = "\ca\wheeled\Data\Anim\hmmwv_Cargo01_V1.rtm";
			interpolateTo[] = {"KIA_HMMWV_Cargo01",0.1};
			connectTo[] = {"HMMWV_Cargo01",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class HMMWV_Cargo01_V2: HMMWV_Cargo01
		{
			file = "\ca\wheeled\Data\Anim\hmmwv_Cargo01_V2.rtm";
			interpolateTo[] = {"KIA_HMMWV_Cargo01",0.1};
			connectTo[] = {"HMMWV_Cargo01",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class KIA_Landrover_Driver: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\wheeled\Data\Anim\KIA_Landrover_Driver.rtm";
			connectTo[] = {"DeadState",0.1};
		};
		class Landrover_Driver: Crew
		{
			file = "\ca\wheeled\Data\Anim\Landrover_Driver.rtm";
			interpolateTo[] = {"KIA_Landrover_Driver",1};
		};
		class Landrover_Gunner: Crew
		{
			file = "\ca\wheeled\Data\Anim\Landrover_Gunner.rtm";
			interpolateTo[] = {"Stryker_Dead",1};
		};
		class KIA_Landrover_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\KIA_Landrover_Cargo01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class Landrover_Cargo01: Crew
		{
			file = "\ca\wheeled\Data\Anim\Landrover_Cargo01_V1.rtm";
			interpolateTo[] = {"KIA_landrover_Cargo01",1};
		};
		class KIA_Landrover_Cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\KIA_landrover_Cargo02.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class Landrover_Cargo02: Crew
		{
			file = "\ca\wheeled\Data\Anim\Landrover_Cargo02_V0.rtm";
			interpolateTo[] = {"KIA_landrover_Cargo02",0.1};
			connectTo[] = {"Landrover_Cargo02",0.1,"Landrover_Cargo02_V1",0.1,"Landrover_Cargo02_V2",0.1,"Landrover_Cargo02_V3",0.1,"Landrover_Cargo02_V4",0.1,"Landrover_Cargo02_V5",0.1};
			equivalentTo = "Landrover_Cargo02";
			variantsAI[] = {"Landrover_Cargo02",0.6,"Landrover_Cargo02_V1",0.07,"Landrover_Cargo02_V2",0.07,"Landrover_Cargo02_V3",0.07,"Landrover_Cargo02_V4",0.07,"Landrover_Cargo02_V5",0.07};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class Landrover_Cargo02_V1: Landrover_Cargo02
		{
			file = "\ca\wheeled\Data\Anim\Landrover_Cargo02_V1.rtm";
			interpolateTo[] = {"KIA_landrover_Cargo02",0.1};
			connectTo[] = {"Landrover_Cargo02",0.1};
			speed = 0.196;
			variantAfter[] = {5,5,5};
		};
		class Landrover_Cargo02_V2: Landrover_Cargo02
		{
			file = "\ca\wheeled\Data\Anim\Landrover_Cargo02_V2.rtm";
			interpolateTo[] = {"KIA_landrover_Cargo02",0.1};
			connectTo[] = {"Landrover_Cargo02",0.1};
			speed = 0.196;
			variantAfter[] = {5,5,5};
		};
		class Landrover_Cargo02_V3: Landrover_Cargo02
		{
			file = "\ca\wheeled\Data\Anim\Landrover_Cargo02_V3.rtm";
			interpolateTo[] = {"KIA_landrover_Cargo02",0.1};
			connectTo[] = {"Landrover_Cargo02",0.1};
			speed = 0.462;
			variantAfter[] = {2,2,2};
			head = "headNo";
		};
		class Landrover_Cargo02_V4: Landrover_Cargo02
		{
			file = "\ca\wheeled\Data\Anim\Landrover_Cargo02_V4.rtm";
			interpolateTo[] = {"KIA_landrover_Cargo02",0.1};
			connectTo[] = {"Landrover_Cargo02",0.1};
			speed = 0.666;
			variantAfter[] = {1.5,1.5,1.5};
		};
		class Landrover_Cargo02_V5: Landrover_Cargo02
		{
			file = "\ca\wheeled\Data\Anim\Landrover_Cargo02_V5.rtm";
			interpolateTo[] = {"KIA_landrover_Cargo02",0.1};
			connectTo[] = {"Landrover_Cargo02",0.1};
			speed = 0.214;
			variantAfter[] = {4.5,4.5,4.5};
		};
		class Landrover_Cargo03: Crew
		{
			file = "\ca\wheeled\Data\Anim\Landrover_Cargo03_V0.rtm";
			interpolateTo[] = {"KIA_landrover_Cargo02",0.1};
			connectTo[] = {"Landrover_Cargo03",0.1,"Landrover_Cargo03_V1",0.1,"Landrover_Cargo03_V2",0.1};
			equivalentTo = "Landrover_Cargo03";
			variantsAI[] = {"Landrover_Cargo03",0.6,"Landrover_Cargo03_V1",0.2,"Landrover_Cargo03_V2",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class Landrover_Cargo03_V1: Landrover_Cargo03
		{
			file = "\ca\wheeled\Data\Anim\Landrover_Cargo03_V1.rtm";
			interpolateTo[] = {"KIA_landrover_Cargo02",0.1};
			connectTo[] = {"Landrover_Cargo03",0.1};
			speed = 0.196;
			variantAfter[] = {5,5,5};
		};
		class Landrover_Cargo03_V2: Landrover_Cargo03_V1
		{
			file = "\ca\wheeled\Data\Anim\Landrover_Cargo03_V2.rtm";
			interpolateTo[] = {"KIA_landrover_Cargo02",0.1};
			connectTo[] = {"Landrover_Cargo03",0.1};
			variantAfter[] = {5,5,5};
		};
		class KIA_Sedan_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\KIA_Sedan_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class Sedan_Driver: Crew
		{
			file = "\ca\wheeled\Data\Anim\Sedan_Driver.rtm";
			interpolateTo[] = {"KIA_Sedan_Driver",1};
		};
		class KIA_Skodovka_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\KIA_Skodovka_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class Skodovka_Driver: Crew
		{
			file = "\ca\wheeled\Data\Anim\Skodovka_Driver.rtm";
			interpolateTo[] = {"KIA_Skodovka_Driver",1};
		};
		class KIA_Skodovka2_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\KIA_Skodovka2_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class Skodovka2_Driver: Crew
		{
			file = "\ca\wheeled\Data\Anim\Skodovka2_Driver.rtm";
			interpolateTo[] = {"KIA_Skodovka2_Driver",1};
		};
		class KIA_Skodovka_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\KIA_Skodovka_Cargo01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class Skodovka_Cargo01: Crew
		{
			file = "\ca\wheeled\Data\Anim\Skodovka_Cargo01.rtm";
			interpolateTo[] = {"KIA_Skodovka_Cargo01",1};
		};
		class KIA_Stryker_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\KIA_Stryker_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class Stryker_Driver: Crew
		{
			file = "\ca\wheeled\Data\Anim\Stryker_Driver.rtm";
			interpolateTo[] = {"KIA_Stryker_Driver",1};
		};
		class Stryker_DriverOut: Crew
		{
			file = "\ca\wheeled\Data\Anim\Stryker_DriverOut.rtm";
			interpolateTo[] = {"KIA_Stryker_Driver",1};
		};
		class KIA_Stryker_Gunner: KIA_Stryker_Driver
		{
			file = "\ca\wheeled\Data\Anim\KIA_Stryker_Gunner.rtm";
		};
		class Stryker_Gunner: Crew
		{
			file = "\ca\wheeled\Data\Anim\Stryker_Gunner.rtm";
			interpolateTo[] = {"KIA_Stryker_Gunner",1};
		};
		class Stryker_GunnerOut: Crew
		{
			file = "\ca\wheeled\Data\Anim\Stryker_GunnerOut.rtm";
			interpolateTo[] = {"KIA_Stryker_Gunner",1};
		};
		class KIA_Stryker_Cargo01: KIA_Stryker_Driver
		{
			file = "\ca\wheeled\Data\Anim\KIA_Stryker_Cargo01.rtm";
		};
		class Stryker_Cargo01: Crew
		{
			file = "\ca\wheeled\Data\Anim\Stryker_Cargo01_V0.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1,"Stryker_Cargo01_V1",0.1,"Stryker_Cargo01_V2",0.1,"Stryker_Cargo01_V3",0.1,"Stryker_Cargo01_V4",0.1};
			equivalentTo = "Stryker_Cargo01";
			variantsAI[] = {"Stryker_Cargo01",0.6,"Stryker_Cargo01_V1",0.1,"Stryker_Cargo01_V2",0.1,"Stryker_Cargo01_V3",0.1,"Stryker_Cargo01_V4",0.1};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class Stryker_Cargo01_V1: Stryker_Cargo01
		{
			file = "\ca\wheeled\Data\Anim\Stryker_Cargo01_V1.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.236;
			variantAfter[] = {4,4,4};
		};
		class Stryker_Cargo01_V2: Stryker_Cargo01
		{
			file = "\ca\wheeled\Data\Anim\Stryker_Cargo01_V2.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.169;
			variantAfter[] = {6,6,6};
		};
		class Stryker_Cargo01_V3: Stryker_Cargo01
		{
			file = "\ca\wheeled\Data\Anim\Stryker_Cargo01_V3.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};
		class Stryker_Cargo01_V4: Stryker_Cargo01
		{
			file = "\ca\wheeled\Data\Anim\Stryker_Cargo01_V4.rtm";
			interpolateTo[] = {"KIA_Stryker_Cargo01",0.1};
			connectTo[] = {"Stryker_Cargo01",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
		};
		class KIA_Tractor_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\KIA_Tractor_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class Tractor_Driver: Crew
		{
			file = "\ca\wheeled\Data\Anim\Tractor_Driver.rtm";
			interpolateTo[] = {"KIA_Tractor_Driver",1};
		};
		class KIA_Truck_Driver: DefaultDie
		{
			actions = "DeadActions";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			file = "\ca\wheeled\Data\Anim\KIA_Truck_Driver.rtm";
			connectTo[] = {"DeadState",0.1};
		};
		class Truck_Driver: Crew
		{
			file = "\ca\wheeled\Data\Anim\Truck_Driver.rtm";
			interpolateTo[] = {"KIA_Truck_Driver",1};
		};
		class KIA_Truck_Cargo01: KIA_Truck_Driver
		{
			file = "\ca\wheeled\Data\Anim\KIA_Truck_Cargo01.rtm";
		};
		class Truck_Gunner: Crew
		{
			file = "\ca\wheeled\Data\Anim\Truck_Gunner.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo01",1};
		};
		class Truck_Cargo01: Crew
		{
			file = "\ca\wheeled\Data\Anim\Truck_Cargo01.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo01",1};
		};
		class Grad_Gunner: Crew
		{
			file = "\ca\wheeled\Data\Anim\Truck_Cargo01.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo01",1};
		};
		class KIA_Truck_Cargo02: KIA_Truck_Driver
		{
			file = "\ca\wheeled\Data\Anim\KIA_Truck_Cargo02.rtm";
		};
		class Truck_Cargo02: Crew
		{
			file = "\ca\wheeled\Data\Anim\Truck_Cargo02_V0.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo02",0.1};
			connectTo[] = {"Truck_Cargo02",0.1,"Truck_Cargo02_V1",0.1,"Truck_Cargo02_V2",0.1,"Truck_Cargo02_V3",0.1,"Truck_Cargo02_V4",0.1};
			equivalentTo = "Truck_Cargo02";
			variantsAI[] = {"Truck_Cargo02",0.6,"Truck_Cargo02_V1",0.1,"Truck_Cargo02_V2",0.1,"Truck_Cargo02_V3",0.1,"Truck_Cargo02_V4",0.1};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class Truck_Cargo02_V1: Truck_Cargo02
		{
			file = "\ca\wheeled\Data\Anim\Truck_Cargo02_V1.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo02",0.1};
			connectTo[] = {"Truck_Cargo02",0.1};
			speed = 0.197;
			variantAfter[] = {5,5,5};
			head = "headNo";
		};
		class Truck_Cargo02_V2: Truck_Cargo02
		{
			file = "\ca\wheeled\Data\Anim\Truck_Cargo02_V2.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo02",0.1};
			connectTo[] = {"Truck_Cargo02",0.1};
			speed = 0.517;
			variantAfter[] = {2,2,2};
		};
		class Truck_Cargo02_V3: Truck_Cargo02
		{
			file = "\ca\wheeled\Data\Anim\Truck_Cargo02_V3.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo02",0.1};
			connectTo[] = {"Truck_Cargo02",0.1};
			speed = 0.24;
			variantAfter[] = {4,4,4};
		};
		class Truck_Cargo02_V4: Truck_Cargo02_V1
		{
			file = "\ca\wheeled\Data\Anim\Truck_Cargo02_V4.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo02",0.1};
			connectTo[] = {"Truck_Cargo02",0.1};
			speed = 0.197;
		};
		class KIA_Truck_Cargo03: KIA_Truck_Driver
		{
			file = "\ca\wheeled\Data\Anim\KIA_Truck_Cargo03.rtm";
		};
		class Truck_Cargo03: Crew
		{
			file = "\ca\wheeled\Data\Anim\Truck_Cargo03_V0.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo03",0.1};
			connectTo[] = {"Truck_Cargo03",0.1,"Truck_Cargo03_V1",0.1,"Truck_Cargo03_V2",0.1};
			equivalentTo = "Truck_Cargo03";
			variantsAI[] = {"Truck_Cargo03",0.6,"Truck_Cargo03_V1",0.2,"Truck_Cargo03_V2",0.2};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class Truck_Cargo03_V1: Truck_Cargo03
		{
			file = "\ca\wheeled\Data\Anim\Truck_Cargo03_V1.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo03",0.1};
			connectTo[] = {"Truck_Cargo03",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class Truck_Cargo03_V2: Truck_Cargo03
		{
			file = "\ca\wheeled\Data\Anim\Truck_Cargo03_V2.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo03",0.1};
			connectTo[] = {"Truck_Cargo03",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.238;
		};
		class KIA_Truck_Cargo04: KIA_Truck_Driver
		{
			file = "\ca\wheeled\Data\Anim\KIA_Truck_Cargo04.rtm";
		};
		class Truck_Cargo04: Crew
		{
			file = "\ca\wheeled\Data\Anim\Truck_Cargo04_V0.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo04",0.1};
			connectTo[] = {"Truck_Cargo04",0.1,"Truck_Cargo04_V1",0.1,"Truck_Cargo04_V2",0.1,"Truck_Cargo04_V3",0.1};
			equivalentTo = "Truck_Cargo04";
			variantsAI[] = {"Truck_Cargo04",0.6,"Truck_Cargo04_V1",0.13,"Truck_Cargo04_V2",0.13,"Truck_Cargo04_V3",0.13};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class Truck_Cargo04_V1: Truck_Cargo04
		{
			file = "\ca\wheeled\Data\Anim\Truck_Cargo04_V1.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo04",0.1};
			connectTo[] = {"Truck_Cargo04",0.1};
			variantAfter[] = {7,7,7};
			speed = 0.141;
			head = "headNo";
		};
		class Truck_Cargo04_V2: Truck_Cargo04
		{
			file = "\ca\wheeled\Data\Anim\Truck_Cargo04_V2.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo04",0.1};
			connectTo[] = {"Truck_Cargo04",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.196;
			head = "headNo";
		};
		class Truck_Cargo04_V3: Truck_Cargo04
		{
			file = "\ca\wheeled\Data\Anim\Truck_Cargo04_V3.rtm";
			interpolateTo[] = {"KIA_Truck_Cargo04",0.1};
			connectTo[] = {"Truck_Cargo04",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.195;
		};
		class KIA_UAZ_Driver: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\KIA_UAZ_Driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class UAZ_Driver: Crew
		{
			file = "\ca\wheeled\Data\Anim\UAZ_Driver.rtm";
			interpolateTo[] = {"KIA_UAZ_Driver",1};
		};
		class UAZ_Gunner01: Crew
		{
			file = "\ca\wheeled\Data\Anim\UAZ_Gunner01.rtm";
			interpolateTo[] = {"Stryker_Dead",1};
		};
		class UAZ_Gunner02: Crew
		{
			file = "\ca\wheeled\Data\Anim\UAZ_Gunner02.rtm";
			interpolateTo[] = {"Stryker_Dead",1};
		};
		class KIA_UAZ_Cargo01: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\KIA_UAZ_Cargo01.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class UAZ_Cargo01: Crew
		{
			file = "\ca\wheeled\Data\Anim\UAZ_Cargo01_V0.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo01",0.1};
			connectTo[] = {"UAZ_Cargo01",0.1,"UAZ_Cargo01_V1",0.1,"UAZ_Cargo01_V2",0.1,"UAZ_Cargo01_V3",0.1};
			equivalentTo = "UAZ_Cargo01";
			variantsAI[] = {"UAZ_Cargo01",0.6,"UAZ_Cargo01_V1",0.1,"UAZ_Cargo01_V2",0.15,"UAZ_Cargo01_V3",0.07};
			variantAfter[] = {5,10,20};
			speed = 0.3;
		};
		class UAZ_Cargo01_V1: UAZ_Cargo01
		{
			file = "\ca\wheeled\Data\Anim\UAZ_Cargo01_V1.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo01",0.1};
			connectTo[] = {"UAZ_Cargo01",0.1};
			variantAfter[] = {4,4,4};
			speed = 0.246;
		};
		class UAZ_Cargo01_V2: UAZ_Cargo01
		{
			file = "\ca\wheeled\Data\Anim\UAZ_Cargo01_V2.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo01",0.1};
			connectTo[] = {"UAZ_Cargo01",0.1};
			variantAfter[] = {2.5,2.5,2.5};
			speed = 0.39;
		};
		class UAZ_Cargo01_V3: UAZ_Cargo01
		{
			file = "\ca\wheeled\Data\Anim\UAZ_Cargo01_V3.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo01",0.1};
			connectTo[] = {"UAZ_Cargo01",0.1};
			variantAfter[] = {5,5,5};
			speed = 0.197;
		};
		class KIA_UAZ_Cargo02: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\wheeled\Data\Anim\UAZ_Cargo01_V0.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			connectTo[] = {"DeadState",0.1};
			soundEnabled = 0;
		};
		class UAZ_Cargo02: Crew
		{
			file = "\ca\wheeled\Data\Anim\UAZ_Cargo01_V0.rtm";
			interpolateTo[] = {"KIA_UAZ_Cargo02",0.1};
		};
		class datsun_Gunner01: Crew
		{
			file = "\ca\wheeled\Datsun_Armed\data\Anim\datsun_gunner01.rtm";
			interpolateTo[] = {"KIA_HMMWV_Gunner",1};
		};
		class datsun_Gunner02: Crew
		{
			file = "\ca\wheeled\Datsun_Armed\data\Anim\datsun_gunner02.rtm";
			interpolateTo[] = {"KIA_HMMWV_Gunner",1};
		};
		class datsun_cargo02: Crew
		{
			file = "\ca\wheeled\Datsun_Armed\data\Anim\Datsun_Cargo02.rtm";
			interpolateTo[] = {"Stryker_Dead",1};
		};
		class SPG_Car_Gunner: Crew
		{
			file = "\ca\wheeled\data\anim\UAZ_spg9_gunner.rtm";
			interpolateTo[] = {"Stryker_Dead",1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		BRDM2_Driver = "";
		BRDM2_Gunner = "";
		BRDM2_Cargo01 = "Crew";
		BRDM2_Cargo02 = "Crew";
		CityBus_Driver = "";
		Datsun_Driver = "";
		Hatchback_Driver = "";
		Hatchback_Cargo01 = "Crew";
		Hilux_Driver = "";
		Hilux_Cargo01 = "Crew";
		Hilux_Gunner = "";
		HMMWV_Driver = "";
		HMMWV_Gunner01 = "";
		HMMWV_Gunner02 = "";
		HMMWV_Gunner03 = "";
		HMMWV_Gunner04 = "";
		HMMWV_Cargo01 = "Crew";
		Landrover_Driver = "";
		Landrover_Gunner = "";
		Landrover_Cargo01 = "Crew";
		Landrover_Cargo02 = "Crew";
		Landrover_Cargo03 = "Crew";
		Sedan_Driver = "";
		Skodovka_Driver = "Skodovka_Driver";
		Skodovka2_Driver = "";
		Skodovka_Cargo01 = "Crew";
		Stryker_Driver = "";
		Stryker_DriverOut = "";
		Stryker_Gunner = "";
		Stryker_GunnerOut = "";
		Stryker_Cargo01 = "Crew";
		Tractor_Driver = "";
		Truck_Driver = "";
		Truck_Gunner = "";
		Truck_Cargo01 = "Crew";
		Truck_Cargo02 = "Crew";
		Truck_Cargo03 = "Crew";
		Truck_Cargo04 = "Crew";
		UAZ_Driver = "";
		UAZ_Gunner01 = "";
		UAZ_Gunner02 = "";
		UAZ_Cargo01 = "Crew";
		datsun_Gunner01 = "";
		datsun_Gunner02 = "";
		datsun_cargo02 = "Crew";
		SPG_Car_Gunner = "";
		Grad_Gunner = "";
	};
	class States
	{
		class Crew;
		class CrewKIA;
		class KIA_Skodovka_Driver: CrewKIA
		{
			actions = "DeadActions";
			file = "\ca\wheeled\data\anim\wmn\kia_skodovka_w_driver.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Skodovka_Driver: Crew
		{
			file = "\ca\wheeled\data\anim\wmn\skodovka_w_driver.rtm";
			interpolateTo[] = {"KIA_Golf_Driver",1};
		};
	};
};
class DefaultEventhandlers;
class CfgPatches
{
	class CAWheeled
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAData","CACharacters2","CAWeapons","CAWeapons2","CASounds","CA_Anims_Char"};
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
		class ViewPilot;
		class Sounds;
	};
	class Car: LandVehicle
	{
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		insideSoundCoef = 0.9;
		class HitPoints
		{
			class HitRGlass
			{
				armor = 0.3;
				material = -1;
				name = "sklo predni P";
				passThrough = 0;
			};
			class HitLGlass
			{
				armor = 0.3;
				material = -1;
				name = "sklo predni L";
				passThrough = 0;
			};
			class HitGlass1
			{
				armor = 0.1;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			class HitGlass2
			{
				armor = 0.1;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			class HitGlass3
			{
				armor = 0.1;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			class HitGlass4
			{
				armor = 0.1;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
			class HitBody
			{
				armor = 1;
				material = -1;
				name = "karoserie";
				visual = "";
				passThrough = 1;
			};
			class HitFuel
			{
				armor = 0.3;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 0.5;
			};
			class HitLFWheel
			{
				armor = 0.15;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "";
				passThrough = 0.3;
			};
			class HitLBWheel
			{
				armor = 0.15;
				material = -1;
				name = "wheel_1_2_steering";
				visual = "";
				passThrough = 0.3;
			};
			class HitLMWheel
			{
				armor = 0.15;
				material = -1;
				name = "wheel_1_3_steering";
				visual = "";
				passThrough = 0.3;
			};
			class HitLF2Wheel
			{
				armor = 0.15;
				material = -1;
				name = "wheel_1_4_steering";
				visual = "";
				passThrough = 0.3;
			};
			class HitRFWheel
			{
				armor = 0.15;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "";
				passThrough = 0.3;
			};
			class HitRBWheel
			{
				armor = 0.15;
				material = -1;
				name = "wheel_2_2_steering";
				visual = "";
				passThrough = 0.3;
			};
			class HitRMWheel
			{
				armor = 0.15;
				material = -1;
				name = "wheel_2_3_steering";
				visual = "";
				passThrough = 0.3;
			};
			class HitRF2Wheel
			{
				armor = 0.15;
				material = -1;
				name = "wheel_2_4_steering";
				visual = "";
				passThrough = 0.3;
			};
			class HitEngine
			{
				armor = 0.4;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
		};
		secondaryExplosion = 0;
		dammageHalf[] = {};
		dammageFull[] = {};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		weapons[] = {"CarHorn"};
		gunnerHasFlares = 0;
		turnCoef = 2.0;
		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.8;
		predictTurnSimul = 0.4;
		brakeDistance = 1;
		terrainCoef = 2.0;
		class ViewPilot: ViewPilot
		{
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.4;
			initAngleX = 0;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				outGunnerMayFire = 1;
				memoryPointGun = "machinegun";
				body = "";
				gun = "";
				gunnerAction = "ManActTestDriverOut";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.31622776,1.0,15};
				minElev = -5;
				maxElev = 40;
				minTurn = -360;
				maxTurn = 360;
				gunnerOpticsModel = "\ca\weapons\optika_empty";
				primaryGunner = 1;
				enableManualFire = 0;
				gunnerForceOptics = 0;
				startEngine = 0;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 0.3;
					};
					class HitGun
					{
						armor = 0.4;
						material = -1;
						name = "zbran";
						visual = "zbran";
						passThrough = 0.1;
					};
				};
				castGunnerShadow = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
			};
		};
		soundEnviron[] = {"",0.0005623413,1.0};
		soundCrash[] = {"\ca\wheeled\Data\Sound\crash2",1.0,1};
		extCameraPosition[] = {0.5,2,-10};
		soundGear[] = {"",1e-005,1};
		supplyRadius = 1.2;
		driverAction = "ManActTestDriver";
		cargoAction[] = {"ManActTestDriver"};
		hideUnitInfo = 0;
		class Exhausts;
		castDriverShadow = 0;
		castCargoShadow = 0;
		class AnimationSources
		{
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint = "HitRFWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint = "HitLBWheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint = "HitRBWheel";
			};
			class HitLF2Wheel: HitLFWheel
			{
				hitpoint = "HitLF2Wheel";
			};
			class HitRF2Wheel: HitLFWheel
			{
				hitpoint = "HitRF2Wheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint = "HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint = "HitRMWheel";
			};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2: HitGlass1
			{
				hitpoint = "HitGlass2";
			};
			class HitGlass3: HitGlass1
			{
				hitpoint = "HitGlass3";
			};
			class HitGlass4: HitGlass1
			{
				hitpoint = "HitGlass4";
			};
		};
		class Eventhandlers: DefaultEventhandlers{};
	};
	class Truck: Car
	{
		displayName = "$STR_DN_TRUCK";
		supplyRadius = 2.5;
		threat[] = {0.0,0.0,0.0};
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoGetInAction[] = {"GetInHigh"};
		cargoGetOutAction[] = {"GetOutHigh"};
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		turnCoef = 5.0;
		steerAheadSimul = 0.2;
		steerAheadPlan = 0.3;
		predictTurnSimul = 0.9;
		predictTurnPlan = 1.0;
		brakeDistance = 3.0;
		terrainCoef = 2.5;
	};
	class Wheeled_APC: Car
	{
		displayName = "$STR_DN_APC";
		terrainCoef = 1.5;
		preferRoads = 0;
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		turnCoef = 5.0;
		steerAheadSimul = 0.2;
		steerAheadPlan = 0.3;
		predictTurnSimul = 0.9;
		predictTurnPlan = 1.0;
		brakeDistance = 3.0;
	};
	class UAZ_Base: Car
	{
		model = "\ca\wheeled\uaz_mg";
		displayName = "$STR_DN_UAZ";
		vehicleClass = "Car";
		picture = "\Ca\wheeled\data\ico\uaz_mg_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_Uaz_mg_CA.paa";
		mapSize = 4;
		magazines[] = {};
		accuracy = 0.25;
		terrainCoef = 2.5;
		wheelCircumference = 2.51;
		turnCoef = 1.5;
		steerAheadPlan = 0.26;
		unitInfoType = "UnitInfoShip";
		driverAction = "UAZ_Driver";
		cargoAction[] = {"UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo01","UAZ_Cargo02","UAZ_Cargo01","UAZ_Cargo02"};
		gunnerOpticsShowCursor = 1;
		transportSoldier = 1;
		threat[] = {0.5,0.5,0.1};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				outGunnerMayFire = 1;
				forceHideGunner = 0;
				castGunnerShadow = 1;
				viewGunnerInExternal = 1;
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				gunnerForceOptics = 0;
				weapons[] = {"DShKM"};
				soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.1,1.0,15};
				magazines[] = {"50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM"};
				gunnerAction = "UAZ_Gunner01";
				gunnerInAction = "UAZ_Gunner01";
				ejectDeadGunner = 1;
				minElev = -25;
				maxElev = 60;
				stabilizedInAxes = "StabilizedInAxesNone";
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.38;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.38;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.38;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.38;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\data\detailmapy\uaz_main_metal.rvmat","ca\wheeled\data\detailmapy\uaz_main_metal_damage.rvmat","ca\wheeled\data\detailmapy\uaz_main_metal_destruct.rvmat","ca\wheeled\data\detailmapy\uaz_other_metal.rvmat","ca\wheeled\data\detailmapy\uaz_other_metal_damage.rvmat","ca\wheeled\data\detailmapy\uaz_other_metal_destruct.rvmat","ca\wheeled\data\detailmapy\uaz_skla.rvmat","ca\wheeled\data\detailmapy\uaz_skla_damage.rvmat","ca\wheeled\data\detailmapy\uaz_skla_destruct.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk_damage.rvmat","ca\weapons\data\dshk_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\data\Uaz_main_002_CO.paa","\ca\wheeled\data\uaz_mount_002_co.paa"};
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"\ca\sounds\vehicles\wheeled\UAZ\ext\ext-uaz-getin",0.56234133,1};
		soundGetOut[] = {"\ca\sounds\vehicles\wheeled\UAZ\ext\ext-uaz-getin",0.56234133,1,20};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\int\int-uaz-start",0.31622776,1.0};
		soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-start",0.31622776,1.0,200};
		soundEngineOffInt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\int\int-uaz-engineoff",0.31622776,1.0};
		soundEngineOffExt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engineoff",0.31622776,1.0,200};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.70794576,1,200};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.70794576,1,200};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.70794576,1,200};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.70794576,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.70794576,1,200};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.70794576,1,200};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.70794576,1,200};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.70794576,1,200};
		WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.70794576,1,200};
		WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.70794576,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.70794576,1,200};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.70794576,1,200};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.70794576,1,200};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.70794576,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\int\int-uaz-acceleration1",0.56234133,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-acceleration",0.56234133,1.0,200};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engine-low",1.0,1.0,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.5, 0.7]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engine-high-1",0.7943282,1.0,400};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-idle",0.56234133,1.0,100};
				frequency = "1";
				volume = "camPos*engineOn*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.15848932,1.0,30};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-noise",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\int\int-uaz-engine-low",0.56234133,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\int\int-uaz-engine-high",0.56234133,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\int\int-uaz-idle",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*engineOn*(rpm factor[0.35, 0])";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\int\int-noise",0.11220185,1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement: Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_UAZ";
		};
	};
	class UAZ_MG_Base: UAZ_Base
	{
		model = "\ca\wheeled\uaz_mg";
		displayName = "$STR_DN_UAZ_MG";
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "DShKM";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "DShKM";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "DShKM";
			};
		};
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"\ca\sounds\vehicles\wheeled\UAZ\ext\ext-uaz-getin",0.56234133,1};
		soundGetOut[] = {"\ca\sounds\vehicles\wheeled\UAZ\ext\ext-uaz-getin",0.56234133,1,20};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-start",0.31622776,1.0};
		soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-start",0.31622776,1.0,200};
		soundEngineOffInt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engineoff",0.31622776,1.0};
		soundEngineOffExt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engineoff",0.31622776,1.0,200};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.70794576,1,200};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.70794576,1,200};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.70794576,1,200};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.70794576,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.70794576,1,200};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.70794576,1,200};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.70794576,1,200};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.70794576,1,200};
		WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.70794576,1,200};
		WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.70794576,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.70794576,1,200};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.70794576,1,200};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.70794576,1,200};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.70794576,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-acceleration",0.56234133,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-acceleration",0.56234133,1.0,250};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engine-low",1.0,1.0,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.15, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engine-high-1",1.0,0.8,350};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-idle",0.39810717,1.0,100};
				frequency = "1";
				volume = "camPos*engineOn*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.15848932,1.0,30};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-noise",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engine-low",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.8, 0.6]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engine-high-1",1.0,0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 1.0])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-idle",0.35481337,1.0};
				frequency = "1";
				volume = "(1-camPos)*engineOn*(rpm factor[0.35, 0])";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-noise",0.31622776,1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement: Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
	};
	class UAZ_AGS30_Base: UAZ_Base
	{
		model = "\ca\wheeled\uaz_granade";
		picture = "\Ca\wheeled\data\ico\uaz_granade_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_Uaz_gl_CA.paa";
		mapSize = 4;
		displayName = "$STR_DN_UAZ_AGS";
		vehicleClass = "Car";
		gunnerHasFlares = 1;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"\ca\sounds\vehicles\wheeled\UAZ\ext\ext-uaz-getin",0.56234133,1};
		soundGetOut[] = {"\ca\sounds\vehicles\wheeled\UAZ\ext\ext-uaz-getin",0.56234133,1,20};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-start",0.31622776,1.0};
		soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-start",0.31622776,1.0,200};
		soundEngineOffInt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engineoff",0.31622776,1.0};
		soundEngineOffExt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engineoff",0.31622776,1.0,200};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.70794576,1,200};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.70794576,1,200};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.70794576,1,200};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.70794576,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.70794576,1,200};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.70794576,1,200};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.70794576,1,200};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.70794576,1,200};
		WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.70794576,1,200};
		WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.70794576,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.70794576,1,200};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.70794576,1,200};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.70794576,1,200};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.70794576,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-acceleration",0.56234133,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-acceleration",0.56234133,1.0,250};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engine-low",1.0,1.0,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.15, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engine-high-1",1.0,0.8,350};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-idle",0.39810717,1.0,100};
				frequency = "1";
				volume = "camPos*engineOn*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.15848932,1.0,30};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-noise",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engine-low",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.8, 0.6]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engine-high-1",1.0,0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 1.0])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-idle",0.56234133,1.0};
				frequency = "1";
				volume = "(1-camPos)*engineOn*(rpm factor[0.4, 0])";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.17782794,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-noise",0.31622776,1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement: Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				weapons[] = {"AGS30"};
				soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.031622775,1.0,15};
				magazines[] = {"29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30"};
				gunnerAction = "UAZ_Gunner02";
				gunnerInAction = "UAZ_Gunner02";
				ejectDeadGunner = 1;
				gunnerOpticsModel = "\ca\weapons\optika_AGS30";
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				class ViewOptics: ViewOptics
				{
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\weapons\data\ags30.rvmat","ca\weapons\data\ags30.rvmat","ca\weapons\data\ags30_destruct.rvmat","ca\weapons\data\tripod_ags.rvmat","ca\weapons\data\tripod_ags.rvmat","ca\weapons\data\tripod_ags_destruct.rvmat","ca\wheeled\data\detailmapy\uaz_main_metal.rvmat","ca\wheeled\data\detailmapy\uaz_main_metal_damage.rvmat","ca\wheeled\data\detailmapy\uaz_main_metal_destruct.rvmat","ca\wheeled\data\detailmapy\uaz_other_metal.rvmat","ca\wheeled\data\detailmapy\uaz_other_metal_damage.rvmat","ca\wheeled\data\detailmapy\uaz_other_metal_destruct.rvmat","ca\wheeled\data\detailmapy\uaz_skla.rvmat","ca\wheeled\data\detailmapy\uaz_skla_damage.rvmat","ca\wheeled\data\detailmapy\uaz_skla_destruct.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\data\Uaz_main_002_CO.paa","\ca\wheeled\data\uaz_mount_002_co.paa"};
	};
	class UAZ_Unarmed_Base: UAZ_Base
	{
		class HitPoints: HitPoints
		{
			class HitGlass1
			{
				armor = 0.05;
				material = -1;
				name = "glass1";
				visual = "glass1";
				passThrough = 0;
			};
			class HitGlass2
			{
				armor = 0.05;
				material = -1;
				name = "glass2";
				visual = "glass2";
				passThrough = 0;
			};
			class HitGlass3
			{
				armor = 0.05;
				material = -1;
				name = "glass3";
				visual = "glass3";
				passThrough = 0;
			};
			class HitGlass4
			{
				armor = 0.05;
				material = -1;
				name = "glass4";
				visual = "glass4";
				passThrough = 0;
			};
		};
		model = "\ca\wheeled\uaz";
		picture = "\Ca\wheeled\data\ico\uaz_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_Uaz_CA.paa";
		mapSize = 4;
		displayName = "$STR_DN_UAZ";
		vehicleClass = "Car";
		transportSoldier = 6;
		transportAmmo = 0;
		maxSpeed = 90;
		cost = 25000;
		armor = 40;
		damageResistance = 0.00845;
		armorWheels = 0.12;
		soundGear[] = {"",0.0005623413,1};
		threat[] = {0,0,0};
		class Turrets{};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\data\detailmapy\uaz_main_metal.rvmat","ca\wheeled\data\detailmapy\uaz_main_metal_damage.rvmat","ca\wheeled\data\detailmapy\uaz_main_metal_destruct.rvmat","ca\wheeled\data\detailmapy\uaz_other_metal.rvmat","ca\wheeled\data\detailmapy\uaz_other_metal_damage.rvmat","ca\wheeled\data\detailmapy\uaz_other_metal_destruct.rvmat","ca\wheeled\data\detailmapy\uaz_skla.rvmat","ca\wheeled\data\detailmapy\uaz_skla_damage.rvmat","ca\wheeled\data\detailmapy\uaz_skla_destruct.rvmat","ca\wheeled\data\detailmapy\uaz_skla_in.rvmat","ca\wheeled\data\detailmapy\uaz_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\uaz_skla_in_damage.rvmat"};
		};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\data\Uaz_main_002_CO.paa"};
	};
	class UAZ_SPG9_Base: UAZ_Base
	{
		model = "\ca\wheeled\uaz_spg9";
		picture = "\Ca\wheeled\data\ico\uaz_spg9_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_Uaz_spg9_CA.paa";
		mapSize = 4;
		displayName = "$STR_DN_UAZ_SPG";
		vehicleClass = "Car";
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"\ca\sounds\vehicles\wheeled\UAZ\ext\ext-uaz-getin",0.56234133,1};
		soundGetOut[] = {"\ca\sounds\vehicles\wheeled\UAZ\ext\ext-uaz-getin",0.56234133,1,20};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-start",0.31622776,1.0};
		soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-start",0.31622776,1.0,200};
		soundEngineOffInt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engineoff",0.31622776,1.0};
		soundEngineOffExt[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engineoff",0.31622776,1.0,200};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.70794576,1,200};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.70794576,1,200};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.70794576,1,200};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.70794576,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.70794576,1,200};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.70794576,1,200};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.70794576,1,200};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.70794576,1,200};
		WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.70794576,1,200};
		WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.70794576,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.70794576,1,200};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.70794576,1,200};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.70794576,1,200};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.70794576,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-acceleration",0.56234133,1.0,250};
				limit = "0.15";
				expression = "engineOn*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engine-low",1.0,1.0,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*((rpm factor[0.15, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-engine-high-1",1.0,0.8,350};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-uaz-idle",0.39810717,1.0,100};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.17782794,1.0,30};
				frequency = "1";
				volume = "rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.17782794,1.0,30};
				frequency = "1";
				volume = "sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.17782794,1.0,30};
				frequency = "1";
				volume = "grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.17782794,1.0,30};
				frequency = "1";
				volume = "mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.17782794,1.0,30};
				frequency = "1";
				volume = "gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.15848932,1.0,30};
				frequency = "1";
				volume = "asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\UAZ\ext\ext-noise",0.31622776,1.0,30};
				frequency = "1";
				volume = "(damper0 max 0.02)*(speed factor[0, 8])";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				weapons[] = {"SPG9"};
				soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.031622775,1.0,15};
				magazines[] = {"PG9_AT","OG9_HE","PG9_AT","OG9_HE","PG9_AT","OG9_HE","PG9_AT","OG9_HE","PG9_AT","OG9_HE","PG9_AT","OG9_HE","PG9_AT","OG9_HE","PG9_AT","OG9_HE"};
				gunnerAction = "SPG_Car_Gunner";
				gunnerInAction = "SPG_Car_Gunner";
				ejectDeadGunner = 1;
				gunnerOpticsModel = "\ca\weapons\2Dscope_SPG_4";
				class ViewOptics: ViewOptics
				{
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "SPG9";
			};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\data\Uaz_main_001_CO.paa","\ca\wheeled\data\uaz_mount_001_co.paa"};
	};
	class Ural_Base_withTurret: Truck
	{
		displayName = "$STR_DN_URAL";
		vehicleClass = "Car";
		model = "\ca\wheeled\ural";
		picture = "\Ca\wheeled\data\ico\ural_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_URAL_CA.paa";
		mapSize = 8;
		accuracy = 0.25;
		maxSpeed = 80;
		wheelCircumference = 3.87;
		transportSoldier = 14;
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = "30*1";
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = "5*1";
			};
			class _xx_8Rnd_9x18_Makarov
			{
				magazine = "8Rnd_9x18_Makarov";
				count = "20*1";
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = "10*1";
			};
			class _xx_5Rnd_127x108_KSVK
			{
				magazine = "5Rnd_127x108_KSVK";
				count = "10*1";
			};
			class _xx_PG7VR
			{
				magazine = "PG7VR";
				count = "3*1";
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = "3*1";
			};
			class _xx_FlareWhite_GP25
			{
				magazine = "FlareWhite_GP25";
				count = "3*1";
			};
			class _xx_FlareGreen_GP25
			{
				magazine = "FlareGreen_GP25";
				count = "3*1";
			};
			class _xx_FlareRed_GP25
			{
				magazine = "FlareRed_GP25";
				count = "3*1";
			};
			class _xx_FlareYellow_GP25
			{
				magazine = "FlareYellow_GP25";
				count = "3*1";
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = "3*1";
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = "3*1";
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = "3*1";
			};
		};
		transportAmmo = 0;
		transportRepair = 0;
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		cost = 50000;
		armor = 32;
		damageResistance = 0.00243;
		initCargoAngleY = 185;
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.06;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.06;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.05;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.05;
			};
		};
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"\ca\sounds\vehicles\Wheeled\URAL\ext\ext-ural-getout",1.0,1};
		soundGetOut[] = {"\ca\sounds\vehicles\Wheeled\URAL\ext\ext-ural-getout",1.0,1,30};
		soundEngineOnInt[] = {"\ca\sounds\Vehicles\Wheeled\URAL\int\int-URAL-start",0.56234133,1.0};
		soundEngineOnExt[] = {"\ca\SOUNDS\Vehicles\Wheeled\URAL\ext\ext-URAL-start",0.56234133,1.0,200};
		soundEngineOffInt[] = {"\ca\sounds\vehicles\Wheeled\URAL\int\int-ural-stop",0.56234133,1.0};
		soundEngineOffExt[] = {"\ca\sounds\vehicles\Wheeled\URAL\ext\ext-ural-stop",0.56234133,1.0,200};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.70794576,1,200};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.70794576,1,200};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.70794576,1,200};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.70794576,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.70794576,1,200};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.70794576,1,200};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.70794576,1,200};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.70794576,1,200};
		WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.70794576,1,200};
		WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.70794576,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.70794576,1,200};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.70794576,1,200};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.70794576,1,200};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.70794576,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\URAL\int\int-ural-acceleration",0.56234133,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\URAL\ext\ext-ural-acceleration",0.56234133,1.0,350};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\URAL\ext\ext-URAL-low",1.0,1.0,400};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.15, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\URAL\ext\ext-URAL-high",1.0,1.0,500};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\URAL\ext\ext-URAL-idle",0.4466836,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.31622776,1.0,40};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.31622776,1.0,40};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.31622776,1.0,40};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.31622776,1.0,40};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.31622776,1.0,40};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.31622776,1.0,40};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3",0.31622776,1.0,40};
				frequency = "1";
				volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\URAL\int\int-URAL-low",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.8, 0.6]))";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\URAL\int\int-URAL-high",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 1.0])";
			};
			class IdleIn
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\URAL\int\int-URAL-idle",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4",0.31622776,1.0};
				frequency = "1";
				volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
		driverAction = "Truck_Driver";
		cargoAction[] = {"Truck_Cargo01","Truck_Cargo01","Truck_Cargo04","Truck_Cargo01","Truck_Cargo01","Truck_Cargo04","Truck_Cargo02","Truck_Cargo02","Truck_Cargo04","Truck_Cargo01","Truck_Cargo01","Truck_Cargo02","Truck_Cargo02","Truck_Cargo04"};
		cargoIsCoDriver[] = {1,1,0};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow","GetInLow","GetInHigh"};
		cargoGetOutAction[] = {"GetOutLow","GetOutLow","GetOutHigh"};
		class Turrets: Turrets
		{
			class MainTurret;
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\data\ural_kabina_camo_co.paa","\ca\wheeled\data\ural_plachta_camo_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\data\detailmapy\ural_interier.rvmat","ca\wheeled\data\detailmapy\ural_interier_damage.rvmat","ca\wheeled\data\detailmapy\ural_interier_destruct.rvmat","ca\wheeled\data\detailmapy\ural_kabina.rvmat","ca\wheeled\data\detailmapy\ural_kabina_damage.rvmat","ca\wheeled\data\detailmapy\ural_kabina_destruct.rvmat","ca\wheeled\data\detailmapy\ural_plachta.rvmat","ca\wheeled\data\detailmapy\ural_plachta_damage.rvmat","ca\wheeled\data\detailmapy\ural_plachta_destruct.rvmat","ca\wheeled\data\detailmapy\ural_open.rvmat","ca\wheeled\data\detailmapy\ural_open_damage.rvmat","ca\wheeled\data\detailmapy\ural_open_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_URAL";
		};
	};
	class Ural_Base: Ural_Base_withTurret
	{
		class Turrets{};
	};
	class UralOpen_Base: Ural_Base
	{
		displayName = "$STR_DN_URAL_OPEN";
		vehicleClass = "Car";
		model = "\ca\wheeled\Ural_Open";
		picture = "\Ca\wheeled\data\ico\Ural_Open_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_URAL_open_CA.paa";
		mapSize = 8;
		castCargoShadow = 1;
		hiddenSelectionsTextures[] = {"\ca\wheeled\data\ural_kabina_camo_co.paa","\ca\wheeled\data\ural_open_cdf_co.paa"};
	};
	class UralRepair_Base: Ural_Base
	{
		picture = "\Ca\wheeled\data\ico\ural_repair_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_URAL_Rep_CA.paa";
		mapSize = 8;
		vehicleClass = "Support";
		displayName = "$STR_DN_URAL_REPAIR";
		model = "\ca\wheeled\ural_repair";
		transportSoldier = 2;
		transportRepair = 200000000;
		supplyRadius = 6.8;
		type = 0;
		threat[] = {0.0,0.0,0.0};
		driverAction = "Truck_Driver";
		cargoAction[] = {"Truck_Cargo01","Truck_Cargo01"};
		cargoIsCoDriver[] = {1,1,0};
		hiddenSelectionsTextures[] = {"\ca\wheeled\data\ural_kabina_camo_co.paa","\ca\wheeled\data\ural_repair_cdf_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\data\detailmapy\ural_interier.rvmat","ca\wheeled\data\detailmapy\ural_interier_damage.rvmat","ca\wheeled\data\detailmapy\ural_interier_destruct.rvmat","ca\wheeled\data\detailmapy\ural_kabina.rvmat","ca\wheeled\data\detailmapy\ural_kabina_damage.rvmat","ca\wheeled\data\detailmapy\ural_kabina_destruct.rvmat","ca\wheeled\data\detailmapy\ural_repair.rvmat","ca\wheeled\data\detailmapy\ural_repair_damage.rvmat","ca\wheeled\data\detailmapy\ural_repair_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
		};
	};
	class UralReammo_Base: Ural_Base
	{
		vehicleClass = "Support";
		displayName = "$STR_DN_URAL_AMMO";
		model = "\ca\wheeled\ural_reammo";
		picture = "\Ca\wheeled\data\ico\ural_reammo_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_URAL_Rea_CA.paa";
		mapSize = 8;
		transportSoldier = 2;
		driverAction = "Truck_Driver";
		cargoAction[] = {"Truck_Cargo01","Truck_Cargo01"};
		cargoIsCoDriver[] = {1,1,0};
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 150;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 25;
			};
			class _xx_8Rnd_9x18_Makarov
			{
				magazine = "8Rnd_9x18_Makarov";
				count = 100;
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = 50;
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 50;
			};
			class _xx_5Rnd_127x108_KSVK
			{
				magazine = "5Rnd_127x108_KSVK";
				count = 50;
			};
			class _xx_PG7VR
			{
				magazine = "PG7VR";
				count = 15;
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = 15;
			};
			class _xx_FlareWhite_GP25
			{
				magazine = "FlareWhite_GP25";
				count = 15;
			};
			class _xx_FlareGreen_GP25
			{
				magazine = "FlareGreen_GP25";
				count = 15;
			};
			class _xx_FlareRed_GP25
			{
				magazine = "FlareRed_GP25";
				count = 15;
			};
			class _xx_FlareYellow_GP25
			{
				magazine = "FlareYellow_GP25";
				count = 15;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 15;
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = 15;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 15;
			};
			class _xx_Strela
			{
				magazine = "Strela";
				count = 1;
			};
			class _xx_PipeBomb
			{
				magazine = "PipeBomb";
				count = 15;
			};
		};
		class TransportWeapons
		{
			class _xx_Strela
			{
				weapon = "Strela";
				count = 1;
			};
			class _xx_RPG7V
			{
				weapon = "RPG7V";
				count = 2;
			};
		};
		transportAmmo = 300000;
		type = 0;
		threat[] = {0.0,0.0,0.0};
		hiddenSelectionsTextures[] = {"\ca\wheeled\data\ural_kabina_camo_co.paa","\ca\wheeled\data\ural_plachta_camo_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\data\detailmapy\ural_reammo.rvmat","ca\wheeled\data\detailmapy\ural_reammo_damage.rvmat","ca\wheeled\data\detailmapy\ural_reammo_destruct.rvmat","ca\wheeled\data\detailmapy\ural_interier.rvmat","ca\wheeled\data\detailmapy\ural_interier_damage.rvmat","ca\wheeled\data\detailmapy\ural_interier_destruct.rvmat","ca\wheeled\data\detailmapy\ural_kabina.rvmat","ca\wheeled\data\detailmapy\ural_kabina_damage.rvmat","ca\wheeled\data\detailmapy\ural_kabina_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
		};
	};
	class UralRefuel_Base: Ural_Base
	{
		vehicleClass = "Support";
		displayName = "$STR_DN_URAL_FUEL";
		model = "\ca\wheeled\ural_refuel";
		picture = "\Ca\wheeled\data\ico\ural_refuel_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_URAL_Ref_CA.paa";
		mapSize = 8;
		driverAction = "Truck_Driver";
		cargoAction[] = {"Truck_Cargo01","Truck_Cargo01"};
		cargoIsCoDriver[] = {1,1,0};
		transportFuel = 3000;
		transportSoldier = 2;
		transportAmmo = 0;
		type = 0;
		threat[] = {0.0,0.0,0.0};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\data\ural_kabina_camo_co.paa","\ca\wheeled\data\ural_open_cdf_co.paa","\ca\wheeled\data\ural_fuel_cdf_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\data\detailmapy\barel_01.rvmat","ca\wheeled\data\detailmapy\barel_01.rvmat","ca\wheeled\data\detailmapy\barel_01_destruct.rvmat","ca\wheeled\data\detailmapy\ural_interier.rvmat","ca\wheeled\data\detailmapy\ural_interier_damage.rvmat","ca\wheeled\data\detailmapy\ural_interier_destruct.rvmat","ca\wheeled\data\detailmapy\ural_kabina.rvmat","ca\wheeled\data\detailmapy\ural_kabina_damage.rvmat","ca\wheeled\data\detailmapy\ural_kabina_destruct.rvmat","ca\wheeled\data\detailmapy\ural_open.rvmat","ca\wheeled\data\detailmapy\ural_open_damage.rvmat","ca\wheeled\data\detailmapy\ural_open_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
		};
	};
	class Ural_ZU23_Base: Ural_Base_withTurret
	{
		displayName = "$STR_DN_URAL_ZU";
		model = "\ca\wheeled\Ural_ZU23";
		vehicleClass = "Car";
		picture = "\Ca\wheeled\data\ico\ural_zu23_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_URAL_zu23_CA.paa";
		mapSize = 8;
		accuracy = 0.22;
		maxSpeed = 80;
		wheelCircumference = 4.513;
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = "30*1";
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = "5*1";
			};
			class _xx_8Rnd_9x18_Makarov
			{
				magazine = "8Rnd_9x18_Makarov";
				count = "20*1";
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = "10*1";
			};
			class _xx_5Rnd_127x108_KSVK
			{
				magazine = "5Rnd_127x108_KSVK";
				count = "10*1";
			};
			class _xx_PG7VR
			{
				magazine = "PG7VR";
				count = "3*1";
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = "3*1";
			};
			class _xx_FlareWhite_GP25
			{
				magazine = "FlareWhite_GP25";
				count = "3*1";
			};
			class _xx_FlareGreen_GP25
			{
				magazine = "FlareGreen_GP25";
				count = "3*1";
			};
			class _xx_FlareRed_GP25
			{
				magazine = "FlareRed_GP25";
				count = "3*1";
			};
			class _xx_FlareYellow_GP25
			{
				magazine = "FlareYellow_GP25";
				count = "3*1";
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = "3*1";
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = "3*1";
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = "3*1";
			};
		};
		transportAmmo = 0;
		transportRepair = 0;
		cost = 50000;
		armor = 32;
		damageResistance = 0.00243;
		initCargoAngleY = 185;
		driverAction = "Truck_Driver";
		cargoAction[] = {"Truck_Cargo01","Truck_Cargo01","Hilux_cargo01"};
		cargoIsCoDriver[] = {1,1,0};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow","GetInLow","GetInHigh"};
		cargoGetOutAction[] = {"GetOutLow","GetOutLow","GetOutHigh"};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\data\detailmapy\ural_interier.rvmat","ca\wheeled\data\detailmapy\ural_interier_damage.rvmat","ca\wheeled\data\detailmapy\ural_interier_destruct.rvmat","ca\wheeled\data\detailmapy\ural_kabina.rvmat","ca\wheeled\data\detailmapy\ural_kabina_damage.rvmat","ca\wheeled\data\detailmapy\ural_kabina_destruct.rvmat","ca\wheeled\data\detailmapy\ural_plachta.rvmat","ca\wheeled\data\detailmapy\ural_plachta_damage.rvmat","ca\wheeled\data\detailmapy\ural_plachta_destruct.rvmat","ca\wheeled\data\detailmapy\ural_open.rvmat","ca\wheeled\data\detailmapy\ural_open_damage.rvmat","ca\wheeled\data\detailmapy\ural_open_destruct.rvmat","ca\weapons\zu23\data\zu23_base.rvmat","ca\weapons\zu23\data\zu23_base_damage.rvmat","ca\weapons\zu23\data\zu23_base_destruct.rvmat","ca\weapons\zu23\data\zu23.rvmat","ca\weapons\zu23\data\zu23_damage.rvmat","ca\weapons\zu23\data\zu23_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_URAL";
		};
		transportSoldier = 3;
		driverCompartments = 1;
		cargoCompartments[] = {1,1,2};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\data\ural_kabina_camo_co.paa","\ca\wheeled\data\ural_open_cdf_co.paa"};
		enableManualFire = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				commanding = -1;
				body = "mainTurret";
				gun = "mainGun";
				minElev = -10;
				maxElev = 85;
				initElev = 11.5;
				weapons[] = {"2A14"};
				magazines[] = {"40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85","40Rnd_23mm_AZP85"};
				gunnerAction = "Hilux_cargo01";
				gunnerOpticsModel = "\ca\weapons\2Dscope_RUAA5";
				gunnergetInAction = "GetInHigh";
				gunnergetOutAction = "GetOutHigh";
				stabilizedInAxes = "StabilizedInAxesNone";
				memoryPointsGetInGunner = "pos_Gunner";
				memoryPointsGetInGunnerDir = "pos_Gunner_dir";
				gunnerCompartments = 2;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class fire_anim
			{
				source = "reload";
				weapon = "2A14";
			};
		};
	};
	class GRAD_Base: Ural_Base_withTurret
	{
		model = "\ca\wheeled\bm21.p3d";
		icon = "\ca\wheeled\data\map_ico\icomap_URAL_BM21_CA.paa";
		picture = "\ca\wheeled\data\ico\ural_bm21_CA.paa";
		displayname = "$STR_DN_GRAD";
		class Library
		{
			libTextDesc = "$STR_LIB_GRAD";
		};
		mapSize = 8;
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = "30*1";
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = "5*1";
			};
			class _xx_8Rnd_9x18_Makarov
			{
				magazine = "8Rnd_9x18_Makarov";
				count = "20*1";
			};
			class _xx_HandGrenade
			{
				magazine = "HandGrenade";
				count = "10*1";
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = "10*1";
			};
			class _xx_5Rnd_127x108_KSVK
			{
				magazine = "5Rnd_127x108_KSVK";
				count = "10*1";
			};
			class _xx_PG7VR
			{
				magazine = "PG7VR";
				count = "3*1";
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = "3*1";
			};
			class _xx_FlareWhite_GP25
			{
				magazine = "FlareWhite_GP25";
				count = "3*1";
			};
			class _xx_FlareGreen_GP25
			{
				magazine = "FlareGreen_GP25";
				count = "3*1";
			};
			class _xx_FlareRed_GP25
			{
				magazine = "FlareRed_GP25";
				count = "3*1";
			};
			class _xx_FlareYellow_GP25
			{
				magazine = "FlareYellow_GP25";
				count = "3*1";
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = "3*1";
			};
			class _xx_SmokeShellRed
			{
				magazine = "SmokeShellRed";
				count = "3*1";
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = "3*1";
			};
		};
		transportAmmo = 0;
		transportRepair = 0;
		cost = 50000;
		armor = 32;
		damageResistance = 0.00243;
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\data\detailmapy\ural_interier.rvmat","ca\wheeled\data\detailmapy\ural_interier_damage.rvmat","ca\wheeled\data\detailmapy\ural_interier_destruct.rvmat","ca\wheeled\data\detailmapy\ural_kabina.rvmat","ca\wheeled\data\detailmapy\ural_kabina_damage.rvmat","ca\wheeled\data\detailmapy\ural_kabina_destruct.rvmat","ca\wheeled\data\detailmapy\ural_plachta.rvmat","ca\wheeled\data\detailmapy\ural_plachta_damage.rvmat","ca\wheeled\data\detailmapy\ural_plachta_destruct.rvmat","ca\wheeled\data\ural_BM21.rvmat","ca\wheeled\data\ural_bm21_damage.rvmat","ca\wheeled\data\ural_bm21_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"};
		};
		transportSoldier = 1;
		hiddenSelections[] = {"camo1","camo3"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				commanding = 1;
				body = "mainTurret";
				gun = "mainGun";
				minElev = 0;
				maxElev = 85;
				initElev = 11.5;
				weapons[] = {"GRAD"};
				magazines[] = {"40Rnd_GRAD"};
				gunnerAction = "Grad_Gunner";
				gunnerOpticsModel = "\ca\weapons\2Dscope_RUAA5";
				gunnergetInAction = "GetInHigh";
				gunnergetOutAction = "GetOutHigh";
				stabilizedInAxes = "StabilizedInAxesNone";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.093;
					minFov = 0.093;
					maxFov = 0.093;
				};
				lockWhenVehicleSpeed = 5;
			};
		};
	};
	class BRDM2_Base: Wheeled_APC
	{
		displayName = "$STR_DN_BRDM2";
		vehicleClass = "Armored";
		model = "\ca\wheeled\brdm2";
		picture = "\Ca\wheeled\data\ico\brdm2_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_brdm_CA.paa";
		mapSize = 6;
		armor = 120;
		damageResistance = 0.02409;
		armorStructural = 8.0;
		crewVulnerable = 0;
		type = 1;
		cost = 100000;
		canFloat = 1;
		accuracy = 0.5;
		enableGPS = 1;
		transportSoldier = 3;
		transportAmmo = 0;
		transportMaxMagazines = 100;
		transportMaxWeapons = 10;
		weapons[] = {};
		magazines[] = {};
		maxSpeed = 100;
		driverAction = "BRDM2_Driver";
		cargoAction[] = {"BRDM2_Cargo01","BRDM2_Cargo02"};
		cargoIsCoDriver[] = {1,0};
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoGetInAction[] = {"GetInHigh"};
		cargoGetOutAction[] = {"GetOutHigh"};
		viewCargoShadow = 1;
		commanderCanSee = 31;
		gunnerCanSee = 31;
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getin",1.0,1};
		soundGetOut[] = {"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-getout",1.0,1,40};
		soundEngineOnInt[] = {"\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-start-02",1.0,1.0};
		soundEngineOnExt[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-start-02",1.0,1.0,300};
		soundEngineOffInt[] = {"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\int\int-AV-stop-02",1.0,1.0};
		soundEngineOffExt[] = {"\ca\sounds\vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-stop-02",1.0,1.0,300};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_building_01",0.70794576,1,150};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_building_02",0.70794576,1,150};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_building_03",0.70794576,1,150};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_building_04",0.70794576,1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_wood_01",0.70794576,1,150};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_wood_02",0.70794576,1,150};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_wood_03",0.70794576,1,150};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_wood_04",0.70794576,1,150};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_01",0.70794576,1,150};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_02",0.70794576,1,150};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_03",0.70794576,1,150};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_04",0.70794576,1,150};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-acce-01",1.0,1.0};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-acce-01",1.0,1.0,300};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-engine-02low",2.5118864,1.0,400};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*camPos*(thrust factor[0.7, 0.2])";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-engine-02high",2.5118864,1.0,500};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "engineOn*camPos*(thrust factor[0.5, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\ext\ext-AV-idle-02",1.0,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.31622776,1.0,50};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.31622776,1.0,50};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.31622776,1.0,50};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.31622776,1.0,50};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.31622776,1.0,50};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.31622776,1.0,50};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise3",0.31622776,1.0,50};
				frequency = "1";
				volume = "camPos*(damper0 max 0.04)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-engine-02low",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "((engineOn*thrust) factor[0.65, 0.2])*(1-camPos)";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-engine-02high",1.0,0.8};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "((engineOn*thrust) factor[0.55, 1.0])*(1-camPos)";
			};
			class IdleIn
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\Armored_Vehicle\int\int-AV-idle-02",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",0.31622776,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise4",0.56234133,1.0};
				frequency = "1";
				volume = "(damper0 max 0.04)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
		class ViewPilot
		{
			initAngleX = 10;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			initFov = 0.7;
			minFov = 0.42;
			maxFov = 0.85;
		};
		threat[] = {0.5,0.5,0.1};
		hideProxyInCombat = 0;
		wheelCircumference = 3.399;
		turnCoef = 2;
		terrainCoef = 2.0;
		class HitPoints: HitPoints
		{
			class HitEngine
			{
				armor = 1;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0.2;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.4;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.4;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.4;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.4;
			};
		};
		armorGlass = 0.5;
		armorWheels = 0.15;
		armorBody = 0.4;
		armorFuel = 1.4;
		armorLights = 0.4;
		hiddenSelections[] = {"camo1","camo2"};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\data\detailmapy\brdm2_01.rvmat","ca\wheeled\data\detailmapy\brdm2_01.rvmat","ca\wheeled\data\detailmapy\brdm2_01_destruct.rvmat","ca\wheeled\data\detailmapy\brdm2_02.rvmat","ca\wheeled\data\detailmapy\brdm2_02.rvmat","ca\wheeled\data\detailmapy\brdm2_02_destruct.rvmat","ca\wheeled\data\brdm_in_base.rvmat","ca\wheeled\data\brdm_in_base.rvmat","ca\wheeled\data\brdm_in_base_destruct.rvmat","ca\wheeled\data\brdm_in_second.rvmat","ca\wheeled\data\brdm_in_second.rvmat","ca\wheeled\data\brdm_in_second_destruct.rvmat","ca\wheeled\data\brdm_in_forth.rvmat","ca\wheeled\data\brdm_in_forth.rvmat","ca\wheeled\data\brdm_in_forth_destruct.rvmat","ca\wheeled\data\brdm_in_third.rvmat","ca\wheeled\data\brdm_in_third.rvmat","ca\wheeled\data\brdm_in_third_destruct.rvmat","ca\wheeled\data\detailmapy\brdm2_atgm_01.rvmat","ca\wheeled\data\detailmapy\brdm2_atgm_01.rvmat","ca\wheeled\data\detailmapy\brdm2_atgm_01_destruct.rvmat"};
		};
		gunnerHasFlares = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				weapons[] = {"KPVT","PKT"};
				soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.1,1.0,15};
				magazines[] = {"500Rnd_145x115_KPVT","1500Rnd_762x54_PKT"};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 60;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
				};
				gunnerAction = "BRDM2_Gunner";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerOpticsModel = "\ca\weapons\2Dscope_BMPgun";
				gunnerForceOptics = 1;
				startEngine = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				class HitPoints: HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "vez";
						passThrough = 1;
					};
				};
			};
		};
		canLock = 0;
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffect";
			};
			class Exhaust2: Exhaust1
			{
				position = "vyfuk start 2";
				direction = "vyfuk konec 2";
			};
		};
		unitInfoType = "UnitInfoShip";
		class AnimationSources: AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "KPVT";
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_BRDM2";
		};
	};
	class BRDM2_ATGM_Base: BRDM2_Base
	{
		displayName = "$STR_DN_BRDM2_ATGM";
		vehicleClass = "Armored";
		model = "\ca\wheeled\brdm2_atgm";
		picture = "\Ca\wheeled\data\ico\brdm2_atgm_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_brdm_atgm_CA.paa";
		mapSize = 6;
		transportSoldier = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"AT5Launcher"};
				soundServo[] = {"\ca\sounds\vehicles\servos\turret-1",0.1,1.0,15};
				magazines[] = {"5Rnd_AT5_BRDM2","5Rnd_AT5_BRDM2"};
				gunBeg = "spice rakety";
				gunEnd = "konec rakety";
				gunnerOpticsModel = "\ca\weapons\2Dscope_ATGM";
				gunnerAction = "BRDM2_Cargo01";
				class ViewOptics
				{
					initAngleX = 5;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
				};
			};
		};
	};
	class BRDM2_HQ_Base: BRDM2_Base
	{
		displayName = "$STR_DN_BRDM2_HQ";
		vehicleClass = "Armored";
		model = "\ca\wheeled\BRDM2_HQ";
		Icon = "\ca\wheeled\data\map_ico\icomap_brdm_hq_CA.paa";
		mapSize = 6;
		transportSoldier = 0;
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "PKT";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "PKT";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "PKT";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"PKT"};
				magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
				class Turrets{};
				startEngine = 0;
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				gunnerAction = "GAZ_Gunner";
				gunnerInAction = "GAZ_Gunner";
				memoryPointGun = "usti hlavne";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "eye";
				LODTurnedIn = 1000;
				LODTurnedOut = 1000;
				viewGunnerInExternal = 1;
				gunnerForceOptics = 0;
				outGunnerMayFire = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				castGunnerShadow = 0;
				forceHideGunner = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				minTurn = -90;
				maxTurn = 90;
				minElev = -34.3775;
				maxElev = 26.3561;
				commanding = 1;
				primaryGunner = 0;
				primaryObserver = 1;
			};
		};
		threat[] = {0.3,0.0,0.1};
	};
	class HMMWV_Base: Car
	{
		scope = 0;
		accuracy = 0.3;
		side = 1;
		faction = "USMC";
		wheelCircumference = 2.834;
		Model = "\ca\wheeled\HMMWV50";
		Picture = "\Ca\wheeled\data\ico\HMMWV50_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_hmwv50_CA.paa";
		mapSize = 5;
		displayName = "$STR_DN_HMMWV";
		vehicleClass = "Car";
		crew = "USMC_Soldier";
		typicalCargo[] = {"USMC_Soldier","USMC_Soldier","USMC_Soldier_AT","USMC_Soldier_Officer"};
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		armor = 40;
		damageResistance = 0.00562;
		turnCoef = 2.0;
		steerAheadPlan = 0.2;
		steerAheadSimul = 0.4;
		predictTurnPlan = 0.9;
		predictTurnSimul = 0.5;
		brakeDistance = 1.0;
		terrainCoef = 2.0;
		enableGPS = 1;
		type = 1;
		cost = 100000;
		armorGlass = 0.5;
		armorWheels = 0.1;
		soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1.0,10};
		soundEnviron[] = {"",0.56234133,1};
		transportSoldier = 3;
		class Library
		{
			libTextDesc = "$STR_LIB_HMMWV";
		};
		castDriverShadow = 0;
		driverAction = "HMMWV_Driver";
		cargoAction[] = {"HMMWV_Cargo01","HMMWV_Cargo01","UAZ_Cargo01"};
		unitInfoType = "UnitInfoShip";
		threat[] = {1,0.1,0.4};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				hasGunner = 1;
				weapons[] = {"M2"};
				magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2"};
				soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1.0,10};
				minElev = -25;
				maxElev = 60;
				gunnerAction = "HMMWV_Gunner01";
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
			};
		};
		class HitPoints: HitPoints
		{
			class HitGlass1: HitGlass1
			{
				armor = 0.1;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.1;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.1;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.38;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.38;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.38;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.38;
			};
			class HitFuel
			{
				armor = 1.4;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\hmmwv\data\hmmwv_details.rvmat","Ca\wheeled\HMMWV\data\hmmwv_details_damage.rvmat","Ca\wheeled\HMMWV\data\hmmwv_details_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_body.rvmat","Ca\wheeled\HMMWV\data\hmmwv_body_damage.rvmat","Ca\wheeled\HMMWV\data\hmmwv_body_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\data\hmmwv_clocks_destruct.rvmat","ca\weapons\data\m2.rvmat","ca\weapons\data\m2.rvmat","ca\weapons\data\m2_destruct.rvmat","ca\tracked\data\detailmapy\m1abrams_mg_mount.rvmat","ca\tracked\data\detailmapy\m1abrams_mg_mount.rvmat","ca\tracked\data\detailmapy\m1abrams_mg_mount_destruct.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
		};
		insideSoundCoef = 0.9;
		soundGear[] = {"",5.6234134e-005,1};
		soundGetIn[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\get_in2",0.56234133,1};
		soundGetOut[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\get_in2",0.56234133,1,20};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\HMMWV\int\int-engine_start1",0.17782794,1.0};
		soundEngineOnExt[] = {"ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\engine_ON1",0.17782794,1.0,100};
		soundEngineOffInt[] = {"ca\sounds\vehicles\Wheeled\HMMWV\int\int-engine_off2",0.17782794,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\Wheeled\HMMWV\ext\engine_OFF2",0.17782794,1.0,100};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_building_01",0.70794576,1,200};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_building_02",0.70794576,1,200};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_building_03",0.70794576,1,200};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_building_04",0.70794576,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_01",0.70794576,1,200};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_02",0.70794576,1,200};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_03",0.70794576,1,200};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_04",0.70794576,1,200};
		WoodCrash4[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_05",0.70794576,1,200};
		WoodCrash5[] = {"Ca\sounds\Vehicles\Crash\crash_mix_wood_06",0.70794576,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_01",0.70794576,1,200};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_02",0.70794576,1,200};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_03",0.70794576,1,200};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\crash_vehicle_04",0.70794576,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\int-acceleration1",0.1,1.0};
				limit = "0.8";
				expression = "(engineOn*(1-camPos))*gmeterZ";
			};
			class AccelerationOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\turspecial1",0.1,1.0,200};
				limit = "0.8";
				expression = "(engineOn*camPos)*gmeterZ";
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_Low_1b",1.0,1.0,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.15, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\ext\Engine_Loop_High_1b",1.0,1.0,400};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.8])";
			};
			class IdleOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\ext\idle_2",0.56234133,1.0,100};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.3, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.31622776,1.0,30};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\ext\noise2",0.17782794,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.03)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\int-engine_low1",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.8, 0.6]))";
			};
			class EngineHighIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\HMMWV\int\int-engine_high2",1.0,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.5, 1.0])";
			};
			class IdleIn
			{
				sound[] = {"\ca\sounds\Vehicles\Wheeled\HMMWV\int\int-engine_idle2",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.4, 0])*(1-camPos)";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-asphalt3",1.0,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.4466836,1.0};
				frequency = "1";
				volume = "(damper0 max 0.03)*(speed factor[0, 8])*(1-camPos)";
			};
			class Movement: Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
		};
	};
	class HMMWV_M2: HMMWV_Base
	{
		scope = 0;
		displayName = "$STR_DN_HMMWV50";
		accuracy = 0.32;
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "M2";
			};
		};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa"};
	};
	class HMMWV_TOW: HMMWV_Base
	{
		scope = 0;
		accuracy = 0.32;
		displayName = "$STR_DN_HMMWVTOW";
		model = "\ca\Wheeled\HMMWVTOW";
		picture = "\Ca\wheeled\data\ico\HMMWVTOW_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_hmwvTOW_CA.paa";
		mapSize = 5;
		transportAmmo = 0;
		gunnerHasFlares = 1;
		cost = 150000;
		commanderCanSee = 31;
		gunnerCanSee = 31;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -10;
				maxElev = 20;
				weapons[] = {"TOWLauncherSingle"};
				magazines[] = {"6Rnd_TOW_HMMWV"};
				soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1.0,10};
				gunnerAction = "HMMWV_Gunner03";
				gunnerOpticsModel = "\ca\weapons\optika_TOW";
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.058;
					maxFov = 0.2;
				};
			};
		};
		class Damage: Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\hmmwv\data\hmmwv_details.rvmat","Ca\wheeled\HMMWV\data\hmmwv_details_damage.rvmat","Ca\wheeled\HMMWV\data\hmmwv_details_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_body.rvmat","Ca\wheeled\HMMWV\data\hmmwv_body_damage.rvmat","Ca\wheeled\HMMWV\data\hmmwv_body_destruct.rvmat","ca\weapons\data\tow.rvmat","ca\weapons\data\tow.rvmat","ca\weapons\data\tow_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\data\hmmwv_clocks_destruct.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa","\ca\weapons\data\tow_co.paa"};
		threat[] = {0.9,0.7,0.3};
	};
	class HMMWV_MK19: HMMWV_Base
	{
		scope = 0;
		accuracy = 0.32;
		displayName = "$STR_DN_HMMWVMK";
		model = "\ca\Wheeled\HMMWVmk19";
		picture = "\Ca\wheeled\data\ico\HMMWVmk19_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_hmwvmk19_CA.paa";
		mapSize = 5;
		class AnimationSources: AnimationSources
		{
			class belt_rotation
			{
				source = "reload";
				weapon = "MK19";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"MK19"};
				magazines[] = {"48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19","48Rnd_40mm_MK19"};
				soundServo[] = {"\Ca\sounds\Vehicles\Servos\turret-1",0.01,1.0,10};
				gunnerAction = "HMMWV_Gunner02";
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\hmmwv\data\hmmwv_details.rvmat","Ca\wheeled\HMMWV\data\hmmwv_details_damage.rvmat","Ca\wheeled\HMMWV\data\hmmwv_details_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_body.rvmat","Ca\wheeled\HMMWV\data\hmmwv_body_damage.rvmat","Ca\wheeled\HMMWV\data\hmmwv_body_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\data\hmmwv_clocks_destruct.rvmat","ca\weapons\data\mk19.rvmat","ca\weapons\data\mk19.rvmat","ca\weapons\data\mk19_destruct.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
		};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa"};
	};
	class HMMWV: HMMWV_Base
	{
		scope = 0;
		accuracy = 0.32;
		model = "\ca\wheeled\HMMWV.p3d";
		picture = "\Ca\wheeled\data\ico\HMMWV_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_hmwv_CA.paa";
		mapSize = 5;
		displayName = "$STR_DN_HMMWV";
		hasGunner = 0;
		class Turrets{};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\hmmwv\data\hmmwv_details.rvmat","Ca\wheeled\HMMWV\data\hmmwv_details_damage.rvmat","Ca\wheeled\HMMWV\data\hmmwv_details_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_body.rvmat","Ca\wheeled\HMMWV\data\hmmwv_body_damage.rvmat","Ca\wheeled\HMMWV\data\hmmwv_body_destruct.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\data\hmmwv_clocks_destruct.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat","ca\wheeled\HMMWV\data\hmmwv_glass_in_Half_D.rvmat"};
		};
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa"};
	};
};
class CfgDestroy
{
	access = 1;
	class EngineHit
	{
		sound[] = {"\ca\wheeled\Data\Sound\fuel_explosion",10.0,1};
	};
};
class CfgNonAIVehicles
{
	class ProxyFlag;
	class ProxyWeapon;
	class ProxyFlag_Auto: ProxyFlag
	{
		model = "\ca\wheeled\flag_auto";
	};
	class ProxyFlag_Alone: ProxyFlag
	{
		model = "\ca\wheeled\flag_Alone";
	};
};
//};
