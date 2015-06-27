////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:33 2014 : Source 'file' date Fri Oct 31 06:13:33 2014
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

//Class wheeled_e : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		BTR40_Driver_EP1 = "BTR40_Driver_EP1";
		BTR40_Cargo01_EP1 = "BTR40_Cargo01_EP1";
		BTR40_Cargo02_EP1 = "BTR40_Cargo02_EP1";
		BTR40_Cargo03_EP1 = "BTR40_Cargo03_EP1";
		BTR40_Cargo_EP1 = "BTR40_Cargo01_EP1";
		BTR40_Gunner_EP1 = "BTR40_Gunner_EP1";
		BTR60_Driver_EP1 = "BTR60_Driver_EP1";
		BTR60_DriverOut_EP1 = "BTR60_DriverOut_EP1";
		BTR60_Cargo01_EP1 = "BTR60_Cargo01_EP1";
		BTR60_Cargo02_EP1 = "BTR60_Cargo02_EP1";
		BTR60_Cargo03_EP1 = "BTR60_Cargo03_EP1";
		BTR60_Cargo04_EP1 = "BTR60_Cargo04_EP1";
		BTR60_Commander_EP1 = "BTR60_Commander_EP1";
		BTR60_CommanderOut_EP1 = "BTR60_CommanderOut_EP1";
		BTR60_Gunner_EP1 = "BTR60_Gunner_EP1";
		S1203_cargo_EP1 = "S1203_cargo_EP1";
		S1203_cargo01_EP1 = "S1203_cargo01_EP1";
		S1203_cargo02_EP1 = "S1203_cargo02_EP1";
		S1203_cargo03_EP1 = "S1203_cargo03_EP1";
		S1203_driver_EP1 = "S1203_driver_EP1";
		SCUD_Cargo_EP1 = "SCUD_Cargo_EP1";
		SCUD_Cargo01_EP1 = "SCUD_Cargo01_EP1";
		SCUD_Driver_EP1 = "SCUD_Driver_EP1";
		volha_cargo_EP1 = "volha_cargo_EP1";
		volha_cargo01_EP1 = "volha_cargo01_EP1";
		volha_cargo02_EP1 = "volha_cargo02_EP1";
		volha_driver_EP1 = "volha_driver_EP1";
		ATV_Cargo_EP1 = "ATV_Cargo_EP1";
		ATV_Driver_EP1 = "ATV_Driver_EP1";
		LR_driver_EP1 = "LR_driver_EP1";
		LR_gunner_EP1 = "LR_gunner_EP1";
		LR_gunner01_EP1 = "LR_gunner01_EP1";
		LR_gunner02_EP1 = "LR_gunner02_EP1";
		LR_gunner03_EP1 = "LR_gunner03_EP1";
		LR_Cargo01_EP1 = "LR_Cargo01_EP1";
		LR_Cargo02_EP1 = "LR_Cargo02_EP1";
		LR_Cargo03_EP1 = "LR_Cargo03_EP1";
		LR_Cargo04_EP1 = "LR_Cargo04_EP1";
		LR_Cargo05_EP1 = "LR_Cargo05_EP1";
		SUV_Cargo_EP1 = "SUV_Cargo_EP1";
		SUV_Cargo01_EP1 = "SUV_Cargo01_EP1";
		SUV_Cargo02_EP1 = "SUV_Cargo02_EP1";
		SUV_Driver_EP1 = "SUV_Driver_EP1";
		HMMWV_Cargo_EP1 = "HMMWV_Cargo_EP1";
		HMMWV_Cargo01_EP1 = "HMMWV_Cargo01_EP1";
		HMMWV_Cargo02_EP1 = "HMMWV_Cargo02_EP1";
		HMMWV_Cargo03_EP1 = "HMMWV_Cargo03_EP1";
		HMMWV_Cargo04_EP1 = "HMMWV_Cargo04_EP1";
		HMMWV_Driver_EP1 = "HMMWV_Driver_EP1";
		HMMWV_Gunner_EP1 = "HMMWV_Gunner_EP1";
		HMMWV_Gunner02_EP1 = "HMMWV_Gunner02_EP1";
		HMMWV_Gunner03_EP1 = "HMMWV_Gunner03_EP1";
		HMMWV_Gunner04_EP1 = "HMMWV_Gunner04_EP1";
		Stryker_Commander_EP1 = "Stryker_Commander_EP1";
		Stryker_CommanderOut_EP1 = "Stryker_CommanderOut_EP1";
		Stryker_Driver_EP1 = "Stryker_Driver_EP1";
		Stryker_DriverOut_EP1 = "Stryker_DriverOut_EP1";
		Stryker_Gunner_EP1 = "Stryker_Gunner_EP1";
		V3S_Driver_EP1 = "V3S_Driver_EP1";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class Stryker_Dead;
		class BTR40_Driver_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR40_Driver";
			interpolateTo[] = {"BTR40_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		class BTR40_KIA_Driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\BTR40_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR40_Cargo01_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR40_Commander";
			interpolateTo[] = {"BTR40_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"BTR40_Cargo01_EP1",0.1,"BTR40_Cargo01_V1_EP1",0.1,"BTR40_Cargo01_V2_EP1",0.1,"BTR40_Cargo01_V3_EP1",0.1,"BTR40_Cargo01_V4_EP1",0.1,"BTR40_Cargo01_V5_EP1",0.1};
			equivalentTo = "BTR40_Cargo01_EP1";
			variantsAI[] = {"BTR40_Cargo01_EP1",0.5,"BTR40_Cargo01_V1_EP1",0.12,"BTR40_Cargo01_V2_EP1",0.11,"BTR40_Cargo01_V3_EP1",0.1,"BTR40_Cargo01_V4_EP1",0.09,"BTR40_Cargo01_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class BTR40_Cargo01_V1_EP1: BTR40_Cargo01_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR40_Cargo_V1.rtm";
			connectTo[] = {"BTR40_Cargo01_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class BTR40_Cargo01_V2_EP1: BTR40_Cargo01_V1_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR40_Cargo_V2.rtm";
			speed = 0.3125;
		};
		class BTR40_Cargo01_V3_EP1: BTR40_Cargo01_V2_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR40_Cargo_V3.rtm";
			speed = 0.625;
		};
		class BTR40_Cargo01_V4_EP1: BTR40_Cargo01_V3_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR40_Cargo_V4.rtm";
			speed = 0.410959;
		};
		class BTR40_Cargo01_V5_EP1: BTR40_Cargo01_V4_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR40_Cargo_V5.rtm";
			speed = 0.333333;
		};
		class BTR40_KIA_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\BTR40_KIA_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR40_Cargo02_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR40_Cargo02";
			interpolateTo[] = {"BTR40_KIA_Cargo02_EP1",1};
			speed = 1e+010;
		};
		class BTR40_KIA_Cargo02_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\BTR40_KIA_Cargo02";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR40_Cargo03_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR40_Cargo03";
			interpolateTo[] = {"BTR40_KIA_Cargo03_EP1",1};
			speed = 1e+010;
		};
		class BTR40_KIA_Cargo03_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\BTR40_KIA_Cargo03";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR40_Cargo_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR40_Commander";
			interpolateTo[] = {"BTR40_KIA_Cargo_EP1",1};
			speed = 1e+010;
		};
		class BTR40_KIA_Cargo_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\BTR40_KIA_Commander";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR40_Gunner_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR40_Gunner";
			interpolateTo[] = {"BTR40_KIA_Gunner_EP1",1};
			speed = 1e+010;
		};
		class BTR40_KIA_Gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\BTR40_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR60_Driver_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Driver";
			interpolateTo[] = {"BTR60_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		class BTR60_KIA_Driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\BTR60_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR60_DriverOut_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_DriverOut";
			interpolateTo[] = {"BTR60_KIA_DriverOut_EP1",1};
			speed = 1e+010;
		};
		class BTR60_KIA_DriverOut_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\BTR60_KIA_DriverOut";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR60_Cargo01_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo01";
			interpolateTo[] = {"BTR60_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"BTR60_Cargo01_EP1",0.1,"BTR60_Cargo01_V1_EP1",0.1,"BTR60_Cargo01_V2_EP1",0.1,"BTR60_Cargo01_V3_EP1",0.1,"BTR60_Cargo01_V4_EP1",0.1,"BTR60_Cargo01_V5_EP1",0.1};
			equivalentTo = "BTR60_Cargo01_EP1";
			variantsAI[] = {"BTR60_Cargo01_EP1",0.5,"BTR60_Cargo01_V1_EP1",0.12,"BTR60_Cargo01_V2_EP1",0.11,"BTR60_Cargo01_V3_EP1",0.1,"BTR60_Cargo01_V4_EP1",0.09,"BTR60_Cargo01_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class BTR60_Cargo01_V1_EP1: BTR60_Cargo01_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo01_V1.rtm";
			connectTo[] = {"BTR60_Cargo01_EP1",0.1};
			speed = 0.245902;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo01_EP1",0.1};
		};
		class BTR60_Cargo01_V2_EP1: BTR60_Cargo01_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo01_V2.rtm";
			connectTo[] = {"BTR60_Cargo01_EP1",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo01_EP1",0.1};
		};
		class BTR60_Cargo01_V3_EP1: BTR60_Cargo01_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo01_V3.rtm";
			connectTo[] = {"BTR60_Cargo01_EP1",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo01_EP1",0.1};
		};
		class BTR60_Cargo01_V4_EP1: BTR60_Cargo01_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo01_V4.rtm";
			connectTo[] = {"BTR60_Cargo01_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo01_EP1",0.1};
		};
		class BTR60_Cargo01_V5_EP1: BTR60_Cargo01_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo01_V5.rtm";
			connectTo[] = {"BTR60_Cargo01_EP1",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo01_EP1",0.1};
		};
		class BTR60_KIA_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\BTR60_KIA_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR60_Cargo02_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo02";
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
			connectTo[] = {"BTR60_Cargo02_EP1",0.1,"BTR60_Cargo02_V1_EP1",0.1,"BTR60_Cargo02_V2_EP1",0.1,"BTR60_Cargo02_V3_EP1",0.1,"BTR60_Cargo02_V4_EP1",0.1,"BTR60_Cargo02_V5_EP1",0.1};
			equivalentTo = "BTR60_Cargo02_EP1";
			variantsAI[] = {"BTR60_Cargo02_EP1",0.5,"BTR60_Cargo02_V1_EP1",0.12,"BTR60_Cargo02_V2_EP1",0.11,"BTR60_Cargo02_V3_EP1",0.1,"BTR60_Cargo02_V4_EP1",0.09,"BTR60_Cargo02_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class BTR60_Cargo02_V1_EP1: BTR60_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo02_V1.rtm";
			connectTo[] = {"BTR60_Cargo02_EP1",0.1};
			speed = 0.3125;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_Cargo02_V2_EP1: BTR60_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo02_V2.rtm";
			connectTo[] = {"BTR60_Cargo02_EP1",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_Cargo02_V3_EP1: BTR60_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo02_V3.rtm";
			connectTo[] = {"BTR60_Cargo02_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_Cargo02_V4_EP1: BTR60_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo02_V4.rtm";
			connectTo[] = {"BTR60_Cargo02_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_Cargo02_V5_EP1: BTR60_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo02_V5.rtm";
			connectTo[] = {"BTR60_Cargo02_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_KIA_Cargo02_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\BTR60_KIA_Cargo02";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR60_Cargo03_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo03";
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
			connectTo[] = {"BTR60_Cargo03_EP1",0.1,"BTR60_Cargo03_V1_EP1",0.1,"BTR60_Cargo03_V2_EP1",0.1,"BTR60_Cargo03_V3_EP1",0.1,"BTR60_Cargo03_V4_EP1",0.1,"BTR60_Cargo03_V5_EP1",0.1};
			equivalentTo = "BTR60_Cargo03_EP1";
			variantsAI[] = {"BTR60_Cargo03_EP1",0.5,"BTR60_Cargo03_V1_EP1",0.12,"BTR60_Cargo03_V2_EP1",0.11,"BTR60_Cargo03_V3_EP1",0.1,"BTR60_Cargo03_V4_EP1",0.09,"BTR60_Cargo03_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class BTR60_Cargo03_V1_EP1: BTR60_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo03_V1.rtm";
			connectTo[] = {"BTR60_Cargo03_EP1",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_Cargo03_V2_EP1: BTR60_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo03_V2.rtm";
			connectTo[] = {"BTR60_Cargo03_EP1",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_Cargo03_V3_EP1: BTR60_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo03_V3.rtm";
			connectTo[] = {"BTR60_Cargo03_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_Cargo03_V4_EP1: BTR60_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo03_V4.rtm";
			connectTo[] = {"BTR60_Cargo03_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_Cargo03_V5_EP1: BTR60_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo03_V5.rtm";
			connectTo[] = {"BTR60_Cargo03_EP1",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_Cargo04_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo04";
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
			connectTo[] = {"BTR60_Cargo04_EP1",0.1,"BTR60_Cargo04_V1_EP1",0.1,"BTR60_Cargo04_V2_EP1",0.1,"BTR60_Cargo04_V3_EP1",0.1,"BTR60_Cargo04_V4_EP1",0.1,"BTR60_Cargo04_V5_EP1",0.1};
			equivalentTo = "BTR60_Cargo04_EP1";
			variantsAI[] = {"BTR60_Cargo04_EP1",0.5,"BTR60_Cargo04_V1_EP1",0.12,"BTR60_Cargo04_V2_EP1",0.11,"BTR60_Cargo04_V3_EP1",0.1,"BTR60_Cargo04_V4_EP1",0.09,"BTR60_Cargo04_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class BTR60_Cargo04_V1_EP1: BTR60_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo04_V1.rtm";
			connectTo[] = {"BTR60_Cargo04_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_Cargo04_V2_EP1: BTR60_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo04_V2.rtm";
			connectTo[] = {"BTR60_Cargo04_EP1",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_Cargo04_V3_EP1: BTR60_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo04_V3.rtm";
			connectTo[] = {"BTR60_Cargo04_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_Cargo04_V4_EP1: BTR60_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo04_V4.rtm";
			connectTo[] = {"BTR60_Cargo04_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_Cargo04_V5_EP1: BTR60_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Cargo04_V5.rtm";
			connectTo[] = {"BTR60_Cargo04_EP1",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"BTR60_KIA_Cargo02_EP1",0.1};
		};
		class BTR60_Commander_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Commander";
			interpolateTo[] = {"BTR60_KIA_Commander_EP1",1};
			speed = 1e+010;
		};
		class BTR60_KIA_Commander_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\BTR60_KIA_Commander";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR60_CommanderOut_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_CommanderOut";
			interpolateTo[] = {"BTR60_KIA_CommanderOut_EP1",1};
			speed = 1e+010;
		};
		class BTR60_KIA_CommanderOut_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\BTR60_KIA_CommanderOut";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class BTR60_Gunner_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\BTR60_Gunner";
			interpolateTo[] = {"BTR60_KIA_Gunner_EP1",1};
			speed = 1e+010;
		};
		class BTR60_KIA_Gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\BTR60_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class S1203_cargo_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\S1203_cargo01";
			interpolateTo[] = {"S1203_KIA_cargo_EP1",1};
			speed = 1e+010;
		};
		class S1203_KIA_cargo_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\S1203_KIA_cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class S1203_cargo01_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\S1203_cargo02";
			interpolateTo[] = {"S1203_KIA_cargo01_EP1",1};
			speed = 1e+010;
		};
		class S1203_KIA_cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\S1203_KIA_cargo02";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class S1203_cargo02_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\S1203_cargo03";
			interpolateTo[] = {"S1203_KIA_cargo02_EP1",1};
			speed = 1e+010;
		};
		class S1203_KIA_cargo02_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\S1203_KIA_cargo03";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class S1203_cargo03_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\S1203_KIA_Cargo04";
			interpolateTo[] = {"S1203_KIA_cargo03_EP1",1};
			speed = 1e+010;
		};
		class S1203_KIA_cargo03_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\S1203_Cargo04";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class S1203_driver_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\S1203_driver";
			interpolateTo[] = {"S1203_KIA_driver_EP1",1};
			speed = 1e+010;
		};
		class S1203_KIA_driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\S1203_KIA_driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class SCUD_Cargo_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\SCUD_Cargo";
			interpolateTo[] = {"SCUD_KIA_Cargo_EP1",0.1};
			connectTo[] = {"SCUD_Cargo_EP1",0.1,"SCUD_Cargo_V1_EP1",0.1,"SCUD_Cargo_V2_EP1",0.1,"SCUD_Cargo_V3_EP1",0.1,"SCUD_Cargo_V4_EP1",0.1,"SCUD_Cargo_V5_EP1",0.1};
			equivalentTo = "SCUD_Cargo_EP1";
			variantsAI[] = {"SCUD_Cargo_EP1",0.5,"SCUD_Cargo_V1_EP1",0.12,"SCUD_Cargo_V2_EP1",0.11,"SCUD_Cargo_V3_EP1",0.1,"SCUD_Cargo_V4_EP1",0.09,"SCUD_Cargo_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class SCUD_Cargo_V1_EP1: SCUD_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\SCUD_Cargo_V1.rtm";
			connectTo[] = {"SCUD_Cargo_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"SCUD_KIA_Cargo_EP1",0.1};
		};
		class SCUD_Cargo_V2_EP1: SCUD_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\SCUD_Cargo_V2.rtm";
			connectTo[] = {"SCUD_Cargo_EP1",0.1};
			speed = 0.245902;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"SCUD_KIA_Cargo_EP1",0.1};
		};
		class SCUD_Cargo_V3_EP1: SCUD_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\SCUD_Cargo_V3.rtm";
			connectTo[] = {"SCUD_Cargo_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"SCUD_KIA_Cargo_EP1",0.1};
		};
		class SCUD_Cargo_V4_EP1: SCUD_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\SCUD_Cargo_V4.rtm";
			connectTo[] = {"SCUD_Cargo_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"SCUD_KIA_Cargo_EP1",0.1};
		};
		class SCUD_Cargo_V5_EP1: SCUD_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\SCUD_Cargo_V5.rtm";
			connectTo[] = {"SCUD_Cargo_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"SCUD_KIA_Cargo_EP1",0.1};
		};
		class SCUD_KIA_Cargo_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\SCUD_KIA_Cargo";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class SCUD_Cargo01_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\SCUD_Cargo01";
			interpolateTo[] = {"SCUD_KIA_Cargo01_EP1",1};
			speed = 1e+010;
		};
		class SCUD_KIA_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\SCUD_KIA_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class SCUD_Driver_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\SCUD_Driver";
			interpolateTo[] = {"SCUD_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		class SCUD_KIA_Driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\SCUD_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class volha_cargo_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\volha_cargo";
			interpolateTo[] = {"volha_KIA_cargo_EP1",1};
			speed = 1e+010;
		};
		class volha_KIA_cargo_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\volha_KIA_cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class volha_cargo01_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\volha_cargo01";
			interpolateTo[] = {"volha_KIA_cargo01_EP1",1};
			speed = 1e+010;
		};
		class volha_KIA_cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\volha_KIA_cargo02";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class volha_cargo02_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\volha_cargo02";
			interpolateTo[] = {"volha_KIA_cargo02_EP1",1};
			speed = 1e+010;
		};
		class volha_KIA_cargo02_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\volha_KIA_cargo03";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class volha_driver_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\volha_driver";
			interpolateTo[] = {"volha_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		class volha_KIA_Driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\volha_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class ATV_Cargo_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\ATV_Cargo";
			interpolateTo[] = {"KIA_ATV_cargo_EP1",0.1};
			connectTo[] = {"ATV_Cargo_EP1",0.1,"ATV_Cargo_V1_EP1",0.1,"ATV_Cargo_V2_EP1",0.1,"ATV_Cargo_V3_EP1",0.1,"ATV_Cargo_V4_EP1",0.1,"ATV_Cargo_V5_EP1",0.1};
			equivalentTo = "ATV_Cargo_EP1";
			variantsAI[] = {"ATV_Cargo_EP1",0.5,"ATV_Cargo_V1_EP1",0.12,"ATV_Cargo_V2_EP1",0.11,"ATV_Cargo_V3_EP1",0.1,"ATV_Cargo_V4_EP1",0.09,"ATV_Cargo_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class ATV_Cargo_V1_EP1: ATV_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\ATV_Cargo_V1.rtm";
			connectTo[] = {"ATV_Cargo_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_ATV_cargo_EP1",0.1};
		};
		class ATV_Cargo_V2_EP1: ATV_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\ATV_Cargo_V2.rtm";
			connectTo[] = {"ATV_Cargo_EP1",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_ATV_cargo_EP1",0.1};
		};
		class ATV_Cargo_V3_EP1: ATV_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\ATV_Cargo_V3.rtm";
			connectTo[] = {"ATV_Cargo_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_ATV_cargo_EP1",0.1};
		};
		class ATV_Cargo_V4_EP1: ATV_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\ATV_Cargo_V4.rtm";
			connectTo[] = {"ATV_Cargo_EP1",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_ATV_cargo_EP1",0.1};
		};
		class ATV_Cargo_V5_EP1: ATV_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\ATV_Cargo_V5.rtm";
			connectTo[] = {"ATV_Cargo_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_ATV_cargo_EP1",0.1};
		};
		class KIA_ATV_cargo_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\KIA_ATV_cargo";
			speed = 0.9375;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class ATV_Driver_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\ATV_Driver";
			interpolateTo[] = {"KIA_ATV_driver_EP1",1};
			speed = 1e+010;
		};
		class KIA_ATV_driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\KIA_ATV_driver";
			speed = 0.810811;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LR_driver_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_driver";
			interpolateTo[] = {"KIA_LR_driver_EP1",1};
			speed = 1e+010;
		};
		class KIA_LR_driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\KIA_LR_driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LR_gunner_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_gunner";
			connectTo[] = {"Stryker_Dead",1};
			speed = 1e+010;
		};
		class LR_gunner01_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_gunner01";
			connectTo[] = {"Stryker_Dead",1};
			speed = 1e+010;
		};
		class LR_gunner02_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_gunner02";
			connectTo[] = {"Stryker_Dead",1};
			speed = 1e+010;
		};
		class LR_gunner03_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_gunner03";
			connectTo[] = {"Stryker_Dead",1};
			speed = 1e+010;
		};
		class LR_Cargo01_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo01";
			interpolateTo[] = {"KIA_LR_Cargo01_EP1",1};
			speed = 1e+010;
		};
		class KIA_LR_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\KIA_LR_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LR_Cargo02_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo02";
			interpolateTo[] = {"KIA_LR_Cargo02_EP1",0.1};
			connectTo[] = {"LR_Cargo02_EP1",0.1,"LR_Cargo02_V1_EP1",0.1,"LR_Cargo02_V2_EP1",0.1,"LR_Cargo02_V3_EP1",0.1,"LR_Cargo02_V4_EP1",0.1,"LR_Cargo02_V5_EP1",0.1};
			equivalentTo = "LR_Cargo02_EP1";
			variantsAI[] = {"LR_Cargo02_EP1",0.5,"LR_Cargo02_V1_EP1",0.12,"LR_Cargo02_V2_EP1",0.11,"LR_Cargo02_V3_EP1",0.1,"LR_Cargo02_V4_EP1",0.09,"LR_Cargo02_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class LR_Cargo02_V1_EP1: LR_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo02_V1.rtm";
			connectTo[] = {"LR_Cargo02_EP1",0.1};
			speed = 0.243902;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo02_EP1",0.1};
		};
		class LR_Cargo02_V2_EP1: LR_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo02_V2.rtm";
			connectTo[] = {"LR_Cargo02_EP1",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo02_EP1",0.1};
		};
		class LR_Cargo02_V3_EP1: LR_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo02_V3.rtm";
			connectTo[] = {"LR_Cargo02_EP1",0.1};
			speed = 0.3125;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo02_EP1",0.1};
		};
		class LR_Cargo02_V4_EP1: LR_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo02_V4.rtm";
			connectTo[] = {"LR_Cargo02_EP1",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo02_EP1",0.1};
		};
		class LR_Cargo02_V5_EP1: LR_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo02_V5.rtm";
			connectTo[] = {"LR_Cargo02_EP1",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo02_EP1",0.1};
		};
		class KIA_LR_Cargo02_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\KIA_LR_Cargo02";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LR_Cargo03_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo03";
			interpolateTo[] = {"KIA_LR_Cargo03_EP1",0.1};
			connectTo[] = {"LR_Cargo03_EP1",0.1,"LR_Cargo03_V1_EP1",0.1,"LR_Cargo03_V2_EP1",0.1,"LR_Cargo03_V3_EP1",0.1,"LR_Cargo03_V4_EP1",0.1,"LR_Cargo03_V5_EP1",0.1};
			equivalentTo = "LR_Cargo03_EP1";
			variantsAI[] = {"LR_Cargo03_EP1",0.5,"LR_Cargo03_V1_EP1",0.12,"LR_Cargo03_V2_EP1",0.11,"LR_Cargo03_V3_EP1",0.1,"LR_Cargo03_V4_EP1",0.09,"LR_Cargo03_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class LR_Cargo03_V1_EP1: LR_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo03_V1.rtm";
			connectTo[] = {"LR_Cargo03_EP1",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo03_EP1",0.1};
		};
		class LR_Cargo03_V2_EP1: LR_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo03_V2.rtm";
			connectTo[] = {"LR_Cargo03_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo03_EP1",0.1};
		};
		class LR_Cargo03_V3_EP1: LR_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo03_V3.rtm";
			connectTo[] = {"LR_Cargo03_EP1",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo03_EP1",0.1};
		};
		class LR_Cargo03_V4_EP1: LR_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo03_V4.rtm";
			connectTo[] = {"LR_Cargo03_EP1",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo03_EP1",0.1};
		};
		class LR_Cargo03_V5_EP1: LR_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo03_V5.rtm";
			connectTo[] = {"LR_Cargo03_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo03_EP1",0.1};
		};
		class KIA_LR_Cargo03_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\KIA_LR_Cargo03";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LR_Cargo04_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo04";
			interpolateTo[] = {"KIA_LR_Cargo04_EP1",0.1};
			connectTo[] = {"LR_Cargo04_EP1",0.1,"LR_Cargo04_V1_EP1",0.1,"LR_Cargo04_V2_EP1",0.1,"LR_Cargo04_V3_EP1",0.1,"LR_Cargo04_V4_EP1",0.1,"LR_Cargo04_V5_EP1",0.1};
			equivalentTo = "LR_Cargo04_EP1";
			variantsAI[] = {"LR_Cargo04_EP1",0.5,"LR_Cargo04_V1_EP1",0.12,"LR_Cargo04_V2_EP1",0.11,"LR_Cargo04_V3_EP1",0.1,"LR_Cargo04_V4_EP1",0.09,"LR_Cargo04_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class LR_Cargo04_V1_EP1: LR_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo04_V1.rtm";
			connectTo[] = {"LR_Cargo04_EP1",0.1};
			speed = 0.3125;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo04_EP1",0.1};
		};
		class LR_Cargo04_V2_EP1: LR_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo04_V2.rtm";
			connectTo[] = {"LR_Cargo04_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo04_EP1",0.1};
		};
		class LR_Cargo04_V3_EP1: LR_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo04_V3.rtm";
			connectTo[] = {"LR_Cargo04_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo04_EP1",0.1};
		};
		class LR_Cargo04_V4_EP1: LR_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo04_V4.rtm";
			connectTo[] = {"LR_Cargo04_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo04_EP1",0.1};
		};
		class LR_Cargo04_V5_EP1: LR_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo04_V5.rtm";
			connectTo[] = {"LR_Cargo04_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo04_EP1",0.1};
		};
		class KIA_LR_Cargo04_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\KIA_LR_Cargo04";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class LR_Cargo05_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo05";
			interpolateTo[] = {"KIA_LR_Cargo05_EP1",0.1};
			connectTo[] = {"LR_Cargo05_EP1",0.1,"LR_Cargo05_V1_EP1",0.1,"LR_Cargo05_V2_EP1",0.1,"LR_Cargo05_V3_EP1",0.1,"LR_Cargo05_V4_EP1",0.1,"LR_Cargo05_V5_EP1",0.1};
			equivalentTo = "LR_Cargo05_EP1";
			variantsAI[] = {"LR_Cargo05_EP1",0.5,"LR_Cargo05_V1_EP1",0.12,"LR_Cargo05_V2_EP1",0.11,"LR_Cargo05_V3_EP1",0.1,"LR_Cargo05_V4_EP1",0.09,"LR_Cargo05_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class LR_Cargo05_V1_EP1: LR_Cargo05_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo05_V1.rtm";
			connectTo[] = {"LR_Cargo05_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo05_EP1",0.1};
		};
		class LR_Cargo05_V2_EP1: LR_Cargo05_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo05_V2.rtm";
			connectTo[] = {"LR_Cargo05_EP1",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo05_EP1",0.1};
		};
		class LR_Cargo05_V3_EP1: LR_Cargo05_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo05_V3.rtm";
			connectTo[] = {"LR_Cargo05_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo05_EP1",0.1};
		};
		class LR_Cargo05_V4_EP1: LR_Cargo05_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo05_V4.rtm";
			connectTo[] = {"LR_Cargo05_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo05_EP1",0.1};
		};
		class LR_Cargo05_V5_EP1: LR_Cargo05_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\LR_Cargo05_V5.rtm";
			connectTo[] = {"LR_Cargo05_EP1",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"KIA_LR_Cargo05_EP1",0.1};
		};
		class KIA_LR_Cargo05_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\KIA_LR_Cargo05";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class SUV_Cargo_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\SUV_Cargo";
			interpolateTo[] = {"SUV_KIA_Cargo_EP1",1};
			speed = 1e+010;
		};
		class SUV_KIA_Cargo_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\SUV_KIA_Cargo";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class SUV_Cargo01_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\SUV_Cargo01";
			interpolateTo[] = {"SUV_KIA_Cargo01_EP1",1};
			speed = 1e+010;
		};
		class SUV_KIA_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\SUV_KIA_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class SUV_Cargo02_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\SUV_Cargo02";
			interpolateTo[] = {"SUV_KIA_Cargo02_EP1",1};
			speed = 1e+010;
		};
		class SUV_KIA_Cargo02_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\SUV_KIA_Cargo02";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class SUV_Driver_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\SUV_Driver";
			interpolateTo[] = {"SUV_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		class SUV_KIA_Driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\SUV_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class HMMWV_Cargo_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_Cargo";
			interpolateTo[] = {"HMMWV_KIA_Cargo_EP1",0.1};
			connectTo[] = {"HMMWV_Cargo_EP1",0.1,"HMMWV_Cargo_V1_EP1",0.1,"HMMWV_Cargo_V2_EP1",0.1,"HMMWV_Cargo_V3_EP1",0.1,"HMMWV_Cargo_V4_EP1",0.1,"HMMWV_Cargo_V5_EP1",0.1};
			equivalentTo = "HMMWV_Cargo_EP1";
			variantsAI[] = {"HMMWV_Cargo_EP1",0.5,"HMMWV_Cargo_V1_EP1",0.12,"HMMWV_Cargo_V2_EP1",0.11,"HMMWV_Cargo_V3_EP1",0.1,"HMMWV_Cargo_V4_EP1",0.09,"HMMWV_Cargo_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class HMMWV_Cargo_V1_EP1: HMMWV_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo_V1.rtm";
			connectTo[] = {"HMMWV_Cargo_EP1",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo_EP1",0.1};
		};
		class HMMWV_Cargo_V2_EP1: HMMWV_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo_V2.rtm";
			connectTo[] = {"HMMWV_Cargo_EP1",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo_EP1",0.1};
		};
		class HMMWV_Cargo_V3_EP1: HMMWV_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo_V3.rtm";
			connectTo[] = {"HMMWV_Cargo_EP1",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo_EP1",0.1};
		};
		class HMMWV_Cargo_V4_EP1: HMMWV_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo_V4.rtm";
			connectTo[] = {"HMMWV_Cargo_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo_EP1",0.1};
		};
		class HMMWV_Cargo_V5_EP1: HMMWV_Cargo_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo_V5.rtm";
			connectTo[] = {"HMMWV_Cargo_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo_EP1",0.1};
		};
		class HMMWV_KIA_Cargo_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_KIA_Cargo";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class HMMWV_Cargo01_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_Cargo01";
			interpolateTo[] = {"HMMWV_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"HMMWV_Cargo01_EP1",0.1,"HMMWV_Cargo01_V1_EP1",0.1,"HMMWV_Cargo01_V2_EP1",0.1,"HMMWV_Cargo01_V3_EP1",0.1,"HMMWV_Cargo01_V4_EP1",0.1,"HMMWV_Cargo01_V5_EP1",0.1};
			equivalentTo = "HMMWV_Cargo01_EP1";
			variantsAI[] = {"HMMWV_Cargo01_EP1",0.5,"HMMWV_Cargo01_V1_EP1",0.12,"HMMWV_Cargo01_V2_EP1",0.11,"HMMWV_Cargo01_V3_EP1",0.1,"HMMWV_Cargo01_V4_EP1",0.09,"HMMWV_Cargo01_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class HMMWV_Cargo01_V1_EP1: HMMWV_Cargo01_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo01_V1.rtm";
			connectTo[] = {"HMMWV_Cargo01_EP1",0.1};
			speed = 0.245902;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo01_EP1",0.1};
		};
		class HMMWV_Cargo01_V2_EP1: HMMWV_Cargo01_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo01_V2.rtm";
			connectTo[] = {"HMMWV_Cargo01_EP1",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo01_EP1",0.1};
		};
		class HMMWV_Cargo01_V3_EP1: HMMWV_Cargo01_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo01_V3.rtm";
			connectTo[] = {"HMMWV_Cargo01_EP1",0.1};
			speed = 0.337079;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo01_EP1",0.1};
		};
		class HMMWV_Cargo01_V4_EP1: HMMWV_Cargo01_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo01_V4.rtm";
			connectTo[] = {"HMMWV_Cargo01_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo01_EP1",0.1};
		};
		class HMMWV_Cargo01_V5_EP1: HMMWV_Cargo01_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo01_V5.rtm";
			connectTo[] = {"HMMWV_Cargo01_EP1",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo01_EP1",0.1};
		};
		class HMMWV_KIA_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_KIA_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class HMMWV_Cargo02_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_Cargo02";
			interpolateTo[] = {"HMMWV_KIA_Cargo02_EP1",0.1};
			connectTo[] = {"HMMWV_Cargo02_EP1",0.1,"HMMWV_Cargo02_V1_EP1",0.1,"HMMWV_Cargo02_V2_EP1",0.1,"HMMWV_Cargo02_V3_EP1",0.1,"HMMWV_Cargo02_V4_EP1",0.1,"HMMWV_Cargo02_V5_EP1",0.1};
			equivalentTo = "HMMWV_Cargo02_EP1";
			variantsAI[] = {"HMMWV_Cargo02_EP1",0.5,"HMMWV_Cargo02_V1_EP1",0.12,"HMMWV_Cargo02_V2_EP1",0.11,"HMMWV_Cargo02_V3_EP1",0.1,"HMMWV_Cargo02_V4_EP1",0.09,"HMMWV_Cargo02_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class HMMWV_Cargo02_V1_EP1: HMMWV_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo02_V1.rtm";
			connectTo[] = {"HMMWV_Cargo02_EP1",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo02_EP1",0.1};
		};
		class HMMWV_Cargo02_V2_EP1: HMMWV_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo02_V2.rtm";
			connectTo[] = {"HMMWV_Cargo02_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo02_EP1",0.1};
		};
		class HMMWV_Cargo02_V3_EP1: HMMWV_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo02_V3.rtm";
			connectTo[] = {"HMMWV_Cargo02_EP1",0.1};
			speed = 0.337079;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo02_EP1",0.1};
		};
		class HMMWV_Cargo02_V4_EP1: HMMWV_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo02_V4.rtm";
			connectTo[] = {"HMMWV_Cargo02_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo02_EP1",0.1};
		};
		class HMMWV_Cargo02_V5_EP1: HMMWV_Cargo02_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo02_V5.rtm";
			connectTo[] = {"HMMWV_Cargo02_EP1",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo02_EP1",0.1};
		};
		class HMMWV_KIA_Cargo02_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_KIA_Cargo02";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class HMMWV_Cargo03_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_Cargo03";
			interpolateTo[] = {"HMMWV_KIA_Cargo03_EP1",0.1};
			connectTo[] = {"HMMWV_Cargo03_EP1",0.1,"HMMWV_Cargo03_V1_EP1",0.1,"HMMWV_Cargo03_V2_EP1",0.1,"HMMWV_Cargo03_V3_EP1",0.1,"HMMWV_Cargo03_V4_EP1",0.1,"HMMWV_Cargo03_V5_EP1",0.1};
			equivalentTo = "HMMWV_Cargo03_EP1";
			variantsAI[] = {"HMMWV_Cargo03_EP1",0.5,"HMMWV_Cargo03_V1_EP1",0.12,"HMMWV_Cargo03_V2_EP1",0.11,"HMMWV_Cargo03_V3_EP1",0.1,"HMMWV_Cargo03_V4_EP1",0.09,"HMMWV_Cargo03_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class HMMWV_Cargo03_V1_EP1: HMMWV_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo03_V1.rtm";
			connectTo[] = {"HMMWV_Cargo03_EP1",0.1};
			speed = 0.3125;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo03_EP1",0.1};
		};
		class HMMWV_Cargo03_V2_EP1: HMMWV_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo03_V2.rtm";
			connectTo[] = {"HMMWV_Cargo03_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo03_EP1",0.1};
		};
		class HMMWV_Cargo03_V3_EP1: HMMWV_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo03_V3.rtm";
			connectTo[] = {"HMMWV_Cargo03_EP1",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo03_EP1",0.1};
		};
		class HMMWV_Cargo03_V4_EP1: HMMWV_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo03_V4.rtm";
			connectTo[] = {"HMMWV_Cargo03_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo03_EP1",0.1};
		};
		class HMMWV_Cargo03_V5_EP1: HMMWV_Cargo03_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo03_V5.rtm";
			connectTo[] = {"HMMWV_Cargo03_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo03_EP1",0.1};
		};
		class HMMWV_KIA_Cargo03_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_KIA_Cargo03";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class HMMWV_Cargo04_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_Cargo04";
			interpolateTo[] = {"HMMWV_KIA_Cargo04_EP1",0.1};
			connectTo[] = {"HMMWV_Cargo04_EP1",0.1,"HMMWV_Cargo04_V1_EP1",0.1,"HMMWV_Cargo04_V2_EP1",0.1,"HMMWV_Cargo04_V3_EP1",0.1,"HMMWV_Cargo04_V4_EP1",0.1,"HMMWV_Cargo04_V5_EP1",0.1};
			equivalentTo = "HMMWV_Cargo04_EP1";
			variantsAI[] = {"HMMWV_Cargo04_EP1",0.5,"HMMWV_Cargo04_V1_EP1",0.12,"HMMWV_Cargo04_V2_EP1",0.11,"HMMWV_Cargo04_V3_EP1",0.1,"HMMWV_Cargo04_V4_EP1",0.09,"HMMWV_Cargo04_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class HMMWV_Cargo04_V1_EP1: HMMWV_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo04_V1.rtm";
			connectTo[] = {"HMMWV_Cargo04_EP1",0.1};
			speed = 0.29703;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo04_EP1",0.1};
		};
		class HMMWV_Cargo04_V2_EP1: HMMWV_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo04_V2.rtm";
			connectTo[] = {"HMMWV_Cargo04_EP1",0.1};
			speed = 0.245902;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo04_EP1",0.1};
		};
		class HMMWV_Cargo04_V3_EP1: HMMWV_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo04_V3.rtm";
			connectTo[] = {"HMMWV_Cargo04_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo04_EP1",0.1};
		};
		class HMMWV_Cargo04_V4_EP1: HMMWV_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo04_V4.rtm";
			connectTo[] = {"HMMWV_Cargo04_EP1",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo04_EP1",0.1};
		};
		class HMMWV_Cargo04_V5_EP1: HMMWV_Cargo04_EP1
		{
			file = "\ca\Wheeled_E\Data\Anim\HMMWV_Cargo04_V5.rtm";
			connectTo[] = {"HMMWV_Cargo04_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
			interpolateTo[] = {"HMMWV_KIA_Cargo04_EP1",0.1};
		};
		class HMMWV_KIA_Cargo04_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_KIA_Cargo04";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class HMMWV_Driver_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_Driver";
			interpolateTo[] = {"HMMWV_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		class HMMWV_KIA_Driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class HMMWV_Gunner_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_Gunner";
			interpolateTo[] = {"HMMWV_KIA_Gunner_EP1",1};
			speed = 1e+010;
		};
		class HMMWV_KIA_Gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class HMMWV_Gunner02_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_Gunner02";
			connectTo[] = {"Stryker_Dead",1};
			speed = 1e+010;
		};
		class HMMWV_Gunner03_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_Gunner03";
			connectTo[] = {"Stryker_Dead",1};
			speed = 1e+010;
		};
		class HMMWV_Gunner04_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\HMWVW_Gunner04";
			interpolateTo[] = {"HMMWV_KIA_Cargo_EP1",1};
			speed = 1e+010;
		};
		class Stryker_Commander_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\Stryker_Commander";
			interpolateTo[] = {"Stryker_KIA_Commander_EP1",1};
			speed = 1e+010;
		};
		class Stryker_KIA_Commander_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\Stryker_KIA_Commander";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Stryker_CommanderOut_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\Stryker_CommanderOut";
			interpolateTo[] = {"Stryker_KIA_Commander_EP1",1};
			speed = 1e+010;
		};
		class Stryker_Driver_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\Stryker_Driver";
			interpolateTo[] = {"Stryker_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		class Stryker_KIA_Driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\Stryker_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Stryker_DriverOut_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\Stryker_DriverOut";
			interpolateTo[] = {"Stryker_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		class Stryker_Gunner_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\Stryker_Gunner";
			interpolateTo[] = {"Stryker_KIA_Gunner_EP1",1};
			speed = 1e+010;
		};
		class Stryker_KIA_Gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\Stryker_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class V3S_Driver_EP1: Crew
		{
			file = "\ca\Wheeled_E\Data\Anim\V3S_Driver";
			interpolateTo[] = {"V3S_KIA_Driver_EP1",1};
			speed = 1e+010;
		};
		class V3S_KIA_Driver_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Wheeled_E\Data\Anim\V3S_KIA_Driver";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		BTR40_Driver_EP1 = "";
		BTR40_Cargo01_EP1 = "crew";
		BTR40_Cargo02_EP1 = "crew";
		BTR40_Cargo03_EP1 = "crew";
		BTR40_Commander_EP1 = "";
		BTR40_Gunner_EP1 = "";
		BTR60_Driver_EP1 = "";
		BTR60_DriverOut_EP1 = "";
		BTR60_Cargo01_EP1 = "crew";
		BTR60_Cargo02_EP1 = "crew";
		BTR60_Cargo03_EP1 = "crew";
		BTR60_Cargo04_EP1 = "crew";
		BTR60_Commander_EP1 = "";
		BTR60_CommanderOut_EP1 = "";
		BTR60_Gunner_EP1 = "";
		S1203_cargo_EP1 = "crew";
		S1203_cargo01_EP1 = "crew";
		S1203_cargo02_EP1 = "crew";
		S1203_cargo03_EP1 = "";
		S1203_driver_EP1 = "";
		SCUD_Cargo_EP1 = "crew";
		SCUD_Cargo01_EP1 = "crew";
		SCUD_Driver_EP1 = "";
		volha_cargo_EP1 = "crew";
		volha_cargo01_EP1 = "crew";
		volha_cargo02_EP1 = "crew";
		volha_driver_EP1 = "";
		ATV_Cargo_EP1 = "crew";
		ATV_Driver_EP1 = "";
		LR_driver_EP1 = "";
		LR_gunner_EP1 = "";
		LR_gunner01_EP1 = "";
		LR_gunner02_EP1 = "";
		LR_gunner03_EP1 = "";
		LR_Cargo01_EP1 = "crew";
		LR_Cargo02_EP1 = "crew";
		LR_Cargo03_EP1 = "crew";
		LR_Cargo04_EP1 = "crew";
		LR_Cargo05_EP1 = "crew";
		SUV_Cargo_EP1 = "crew";
		SUV_Cargo01_EP1 = "crew";
		SUV_Cargo02_EP1 = "crew";
		SUV_Driver_EP1 = "";
		HMMWV_Cargo_EP1 = "crew";
		HMMWV_Cargo01_EP1 = "crew";
		HMMWV_Cargo02_EP1 = "crew";
		HMMWV_Cargo03_EP1 = "crew";
		HMMWV_Cargo04_EP1 = "crew";
		HMMWV_Driver_EP1 = "";
		HMMWV_Gunner_EP1 = "";
		HMMWV_Gunner02_EP1 = "";
		HMMWV_Gunner03_EP1 = "";
		HMMWV_Gunner04_EP1 = "";
		Stryker_Commander_EP1 = "";
		Stryker_CommanderOut_EP1 = "";
		Stryker_Driver_EP1 = "";
		Stryker_DriverOut_EP1 = "";
		Stryker_Gunner_EP1 = "";
		V3S_Driver_EP1 = "";
	};
};
class DefaultEventhandlers;
class CfgPatches
{
	class CAWheeled_E
	{
		units[] = {"hilux1_civil_3_open_EP1","Ural_UN_EP1","Ural_TK_CIV_EP1","UralRepair_TK_EP1","UralReammo_TK_EP1","UralRefuel_TK_EP1","Ural_ZU23_TK_EP1","Ural_ZU23_TK_GUE_EP1","UralSupply_TK_EP1","UralSalvage_TK_EP1","Pickup_PK_TK_GUE_EP1","Offroad_DSHKM_TK_GUE_EP1","Offroad_SPG9_TK_GUE_EP1","HMMWV_DES_EP1","HMMWV_MK19_DES_EP1","HMMWV_Ambulance_DES_EP1","HMMWV_Ambulance_CZ_DES_EP1","HMMWV_Avenger_DES_EP1","UAZ_MG_TK_EP1","UAZ_AGS30_TK_EP1","UAZ_Unarmed_TK_EP1","UAZ_Unarmed_UN_EP1","UAZ_Unarmed_TK_CIV_EP1","MTVR_DES_EP1","MtvrReammo_DES_EP1","MtvrRefuel_DES_EP1","MtvrRepair_DES_EP1","MtvrSupply_DES_EP1","MtvrSalvage_DES_EP1","Lada1_TK_CIV_EP1","Lada2_TK_CIV_EP1","GRAD_TK_EP1","Ikarus_TK_CIV_EP1","TT650_TK_CIV_EP1","TT650_TK_EP1","M1030_US_DES_EP1"};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CACharacters","CAWeapons","CAWheeled2","CA_Anims_Char","CAWheeled","CAWheeled_Pickup","CAWheeled_Offroad","CAWheeled2_V3S","CAWheeled2_LADA","CAWheeled2_M1114_Armored","CAWheeled2_HMMWV_Ambulance","CAWheeled2_M998A2_Avenger","CAWheeled2_MTVR"};
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class All;
	class AllVehicles: All
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
	};
	class Land;
	class LandVehicle: Land
	{
		class Sounds;
	};
	class Car: LandVehicle
	{
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		transportMaxBackpacks = 2;
		brakeDistance = 7.0;
	};
	class UAZ_Base: Car
	{
		brakeDistance = 8.5;
	};
	class UAZ_Unarmed_Base: UAZ_Base
	{
		brakeDistance = 7;
	};
	class UAZ_MG_Base;
	class UAZ_MG_TK_EP1: UAZ_MG_Base
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 250;
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		accuracy = 0.3;
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1","TK_Soldier_EP1","TK_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\UAZ\Data\Uaz_main_IND_CO.paa","\ca\wheeled\data\uaz_mount_001_co.paa"};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 15;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\UAZ\Data\uaz_main_metal.rvmat","Ca\wheeled_E\UAZ\Data\uaz_main_metal_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_main_metal_destruct.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal_destruct.rvmat","Ca\wheeled_E\UAZ\Data\uaz_mount.rvmat","Ca\wheeled_E\UAZ\Data\uaz_mount_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_mount_destruct.rvmat","Ca\wheeled_E\UAZ\Data\uaz_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","ca\weapons\data\dshk.rvmat","ca\weapons\data\dshk_damage.rvmat","ca\weapons\data\dshk_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class UAZ_AGS30_Base;
	class UAZ_AGS30_TK_EP1: UAZ_AGS30_Base
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 250;
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		accuracy = 0.3;
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1","TK_Soldier_EP1","TK_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\UAZ\Data\Uaz_main_IND_CO.paa","\ca\wheeled\data\uaz_mount_001_co.paa"};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 15;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\UAZ\Data\uaz_main_metal.rvmat","Ca\wheeled_E\UAZ\Data\uaz_main_metal_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_main_metal_destruct.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_other_metal_destruct.rvmat","Ca\wheeled_E\UAZ\Data\uaz_mount.rvmat","Ca\wheeled_E\UAZ\Data\uaz_mount_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_mount_destruct.rvmat","Ca\wheeled_E\UAZ\Data\uaz_skla.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\Data\auta_skla_damage.rvmat","Ca\wheeled_E\UAZ\Data\uaz_skla_in.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\wheeled_E\Data\auta_skla_in_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class UAZ_Unarmed_TK_EP1: UAZ_Unarmed_Base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		accuracy = 0.3;
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1","TK_Soldier_EP1","TK_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\UAZ\Data\Uaz_main_IND_CO.paa"};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 15;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 2;
			};
		};
		class TransportWeapons{};
	};
	class UAZ_Unarmed_UN_EP1: UAZ_Unarmed_Base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		accuracy = 0.3;
		faction = "BIS_UN";
		crew = "UN_CDF_Soldier_EP1";
		typicalCargo[] = {"UN_CDF_Soldier_EP1","UN_CDF_Soldier_EP1","UN_CDF_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\UAZ\Data\Uaz_main_UN_CO.paa"};
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
		};
		class TransportWeapons{};
	};
	class UAZ_Unarmed_TK_CIV_EP1: UAZ_Unarmed_Base
	{
		expansion = 1;
		scope = 2;
		side = 3;
		accuracy = 0.3;
		faction = "BIS_TK_CIV";
		crew = "TK_CIV_Takistani01_EP1";
		typicalCargo[] = {"TK_CIV_Takistani01_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\UAZ\Data\Uaz_main_CIVIL_CO.paa"};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 15;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 2;
			};
		};
		class TransportWeapons{};
	};
	class UralOpen_Base;
	class Ural_Base;
	class UralRepair_Base;
	class UralReammo_Base;
	class UralRefuel_Base;
	class Ural_ZU23_Base;
	class Ural_UN_EP1: Ural_Base
	{
		expansion = 1;
		scope = 2;
		side = 2;
		accuracy = 0.3;
		faction = "BIS_UN";
		crew = "UN_CDF_Soldier_EP1";
		typicalCargo[] = {"UN_CDF_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\Ural\Data\Ural_kabina_UN_CO.paa","\CA\wheeled_E\Ural\Data\Ural_plachta_UN_CO.paa"};
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 30;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 5;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 5;
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 10;
			};
			class _xx_1Rnd_HE_GP25
			{
				magazine = "1Rnd_HE_GP25";
				count = 2;
			};
			class _xx_FlareWhite_GP25
			{
				magazine = "FlareWhite_GP25";
				count = 2;
			};
			class _xx_FlareGreen_GP25
			{
				magazine = "FlareGreen_GP25";
				count = 2;
			};
			class _xx_FlareRed_GP25
			{
				magazine = "FlareRed_GP25";
				count = 2;
			};
			class _xx_FlareYellow_GP25
			{
				magazine = "FlareYellow_GP25";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_AK_74
			{
				weapon = "AK_74";
				count = 2;
			};
		};
	};
	class Ural_TK_CIV_EP1: Ural_Base
	{
		expansion = 1;
		scope = 2;
		side = 3;
		accuracy = 0.3;
		faction = "BIS_TK_CIV";
		crew = "TK_CIV_Takistani01_EP1";
		typicalCargo[] = {"TK_CIV_Takistani01_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\Ural\Data\Ural_kabina_CIVIL_CO.paa","\CA\wheeled_E\Ural\Data\Ural_plachta_CIVIL_CO.paa"};
	};
	class UralRepair_TK_EP1: UralRepair_Base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		accuracy = 0.3;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\Ural\Data\Ural_kabina_TKA_CO.paa","\CA\wheeled_E\Ural\Data\Ural_repair_TKA_CO.paa"};
	};
	class UralReammo_TK_EP1: UralReammo_Base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		accuracy = 0.3;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\Ural\Data\Ural_kabina_TKA_CO.paa","\CA\wheeled_E\Ural\Data\Ural_ammo_TKA_CO.paa"};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 60;
			};
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 60;
			};
			class _xx_100Rnd_762x54_PK
			{
				magazine = "100Rnd_762x54_PK";
				count = 10;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 10;
			};
			class _xx_75Rnd_545x39_RPK
			{
				magazine = "75Rnd_545x39_RPK";
				count = 10;
			};
			class _xx_10Rnd_762x54_SVD
			{
				magazine = "10Rnd_762x54_SVD";
				count = 5;
			};
			class _xx_PG7VR
			{
				magazine = "PG7VR";
				count = 5;
			};
			class _xx_5Rnd_127x108_KSVK
			{
				magazine = "5Rnd_127x108_KSVK";
				count = 5;
			};
			class _xx_SmokeShellOrange
			{
				magazine = "SmokeShellOrange";
				count = 10;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 10;
			};
			class _xx_smokeshellBlue
			{
				magazine = "smokeshellBlue";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_FN_FAL
			{
				weapon = "FN_FAL";
				count = 4;
			};
			class _xx_RPG7V
			{
				weapon = "RPG7V";
				count = 1;
			};
		};
	};
	class UralRefuel_TK_EP1: UralRefuel_Base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		accuracy = 0.3;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\Ural\Data\Ural_kabina_TKA_CO.paa","\CA\wheeled_E\Ural\Data\Ural_open_TKA_CO.paa","\CA\wheeled_E\Ural\Data\Ural_fuel_TKA_CO.paa"};
	};
	class Ural_ZU23_TK_EP1: Ural_ZU23_Base
	{
		expansion = 1;
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 250;
		scope = 2;
		side = 0;
		accuracy = 0.27;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\Ural\Data\Ural_kabina_TKA_CO.paa","\CA\wheeled_E\Ural\Data\Ural_open_TKA_CO.paa"};
	};
	class Ural_ZU23_TK_GUE_EP1: Ural_ZU23_Base
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 250;
		accuracy = 0.27;
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1","TK_GUE_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled\Data\ural_kabina_KHK_CO.paa","\CA\wheeled\Data\ural_korba_KHK_CO.paa"};
	};
	class UralSupply_TK_EP1: UralOpen_Base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		accuracy = 0.3;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\Ural\Data\Ural_kabina_TKA_CO.paa","\CA\wheeled_E\Ural\Data\Ural_open_TKA_CO.paa"};
		displayName = "$STR_wfsupplytruck";
		transportSoldier = 1;
		class TransportMagazines{};
		class TransportWeapons{};
		vehicleClass = "Support";
	};
	class UralSalvage_TK_EP1: UralRepair_TK_EP1
	{
		displayName = "$STR_wfsalvagetruck";
		transportSoldier = 1;
		class TransportMagazines{};
		class TransportWeapons{};
		vehicleClass = "Support";
	};
	class Wheeled_APC: Car
	{
		holdOffroadFormation = 1;
		transportMaxBackpacks = 5;
		radarType = 4;
		brakeDistance = 8.5;
	};
	class Truck: Car
	{
		transportMaxBackpacks = 8;
		brakeDistance = 7.0;
	};
	class tractor: Car
	{
		brakeDistance = 2;
	};
	class VWGolf: Car
	{
		brakeDistance = 20;
	};
	class SkodaBase: Car
	{
		brakeDistance = 9;
	};
	class car_hatchback: SkodaBase
	{
		brakeDistance = 10;
	};
	class datsun1_civil_1_open: SkodaBase
	{
		brakeDistance = 10.5;
	};
	class car_sedan: SkodaBase
	{
		brakeDistance = 10;
	};
	class V3S_Base: Truck
	{
		brakeDistance = 6.5;
		steerAheadSimul = 0.2;
		steerAheadPlan = 0.3;
	};
	class TowingTractor: Car
	{
		brakeDistance = 1;
	};
	class Kamaz_Base: Truck
	{
		steerAheadSimul = 0.2;
		steerAheadPlan = 0.3;
	};
	class BTR90_Base: Wheeled_APC
	{
		steerAheadSimul = 0.2;
		steerAheadPlan = 0.3;
	};
	class LAV25_Base: Wheeled_APC
	{
		steerAheadSimul = 0.2;
		steerAheadPlan = 0.3;
	};
	class Motorcycle: LandVehicle
	{
		outsideSoundFilter = 0;
		class Library
		{
			libTextDesc = "$STR_EP1_lib_motorcycle";
		};
		brakeDistance = 16.5;
	};
	class Bicycle: Motorcycle
	{
		brakeDistance = 4;
	};
	class Pickup_PK_base: Car
	{
		class EventHandlers;
		outsideSoundFilter = 1;
		insideSoundCoef = 0.8;
		brakeDistance = 13;
	};
	class Pickup_PK_TK_GUE_EP1: Pickup_PK_base
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 250;
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1","TK_GUE_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\Datsun_Armed\Data\datsun_trup1_EINS_CO.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\wheeled_E\Datsun_Armed\Data\datsun_trup1_EINS_CO"",""\CA\wheeled_E\Datsun_Armed\Data\datsun_trup2_EINS_CO"",""\CA\wheeled_E\Datsun_Armed\Data\datsun_trup3_EINS_CO""] select floor random 3]";
		};
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 15;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 2;
			};
		};
		class TransportWeapons{};
	};
	class Offroad_DSHKM_base: Car
	{
		outsideSoundFilter = 1;
		insideSoundCoef = 0.8;
		brakeDistance = 13;
	};
	class hilux1_civil_1_open: Car
	{
		brakeDistance = 11;
	};
	class Offroad_DSHKM_TK_GUE_EP1: Offroad_DSHKM_base
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 250;
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1","TK_GUE_Soldier_EP1"};
		displayName = "$STR_DN_ADD_HILUX_MG";
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\Hilux_Armed\Data\coyota_trup1_EINS_CO.paa"};
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 15;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 2;
			};
		};
		class TransportWeapons{};
	};
	class Offroad_SPG9_Gue;
	class Offroad_SPG9_base: Offroad_SPG9_Gue
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class Offroad_SPG9_TK_GUE_EP1: Offroad_SPG9_base
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 250;
		expansion = 1;
		scope = 2;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1","TK_GUE_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\Hilux_Armed\Data\coyota_trup2_EINS_CO.paa"};
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine = "30Rnd_545x39_AK";
				count = 15;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 2;
			};
		};
		class TransportWeapons{};
	};
	class HMMWV;
	class HMMWV_DES_EP1: HMMWV
	{
		expansion = 1;
		scope = 2;
		faction = "BIS_US";
		side = 1;
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa"};
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_2.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_in_BASE.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class HMMWV_MK19;
	class HMMWV_MK19_DES_EP1: HMMWV_MK19
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa"};
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_2.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_in_BASE.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class HMMWV_Ambulance;
	class HMMWV_Ambulance_base: HMMWV_Ambulance
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class HMMWV_Ambulance_DES_EP1: HMMWV_Ambulance_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa","\ca\wheeled\hmmwv\data\hmmwv_parts_1_ca.paa"};
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_2.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class HMMWV_Ambulance_CZ_DES_EP1: HMMWV_Ambulance_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_CZ";
		crew = "CZ_Soldier_DES_EP1";
		typicalCargo[] = {"CZ_Soldier_DES_EP1","CZ_Soldier_DES_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa","\ca\wheeled\hmmwv\data\hmmwv_parts_1_ca.paa"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_2.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_destruct.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_parts_1_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class HMMWV_base: Car
	{
		class Turrets;
		brakeDistance = 8.5;
	};
	class HMMWV_Avenger: HMMWV_base
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
		displayname = "$STR_EP1_DN_HMMWV_Avenger";
	};
	class HMMWV_Avenger_base: HMMWV_Avenger
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class HMMWV_Avenger_DES_EP1: HMMWV_Avenger_base
	{
		expansion = 1;
		scope = 2;
		model = "\ca\wheeled_e\HMMWV\M998A2_Avenger.p3d";
		side = 1;
		faction = "BIS_US";
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\HMMWV\Data\HMMWV_body_US_CO.paa","\CA\wheeled_E\HMMWV\Data\M998A2_Avenger_1_US_CO.paa","\CA\wheeled_E\HMMWV\Data\M998A2_Avenger_3_US_CO.paa"};
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 15;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
		};
		class TransportWeapons{};
		gunnerCanSee = 31;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
			};
		};
		class NVGMarkers{};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\wheeled_E\HMMWV\data\hmmwv_body_2.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_damage.rvmat","Ca\wheeled_E\HMMWV\data\hmmwv_body_2_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_details_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_damage.rvmat","Ca\wheeled_E\HMMWV\Data\hmmwv_glass_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\m998a2_avenger_1.rvmat","Ca\wheeled_E\HMMWV\Data\m998a2_avenger_1_damage.rvmat","Ca\wheeled_E\HMMWV\Data\m998a2_avenger_1_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2.rvmat","Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_damage.rvmat","Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_destruct.rvmat","Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_in.rvmat","Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_in_damage.rvmat","Ca\wheeled_E\HMMWV\Data\m998a2_avenger_2_in_damage.rvmat","Ca\wheeled_E\HMMWV\Data\m998a2_avenger_3.rvmat","Ca\wheeled_E\HMMWV\Data\m998a2_avenger_3_damage.rvmat","Ca\wheeled_E\HMMWV\Data\m998a2_avenger_3_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
	};
	class TT650_base;
	class TT650_TK_CIV_EP1: TT650_base
	{
		expansion = 1;
		faction = "BIS_TK_CIV";
		side = 3;
		scope = 2;
		crew = "TK_CIV_Takistani01_EP1";
		typicalCargo[] = {"TK_CIV_Takistani01_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\TT650\Data\TT650_ECIV_CO.paa"};
		rarityUrban = 0.8;
	};
	class TT650_TK_EP1: TT650_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\TT650\Data\TT650_ECIV_CO.paa"};
	};
	class M1030;
	class M1030_base: M1030
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class M1030_US_DES_EP1: M1030_base
	{
		expansion = 1;
		scope = 2;
		faction = "BIS_US";
		side = 1;
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
	};
	class MTVR: Truck
	{
		brakeDistance = 9;
	};
	class MTVR_base: MTVR
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class MTVR_DES_EP1: MTVR_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		displayName = "$STR_EP1_DN_MTVR_DES_EP1";
		faction = "BIS_US";
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\MTVR\Data\MTVR_body_desert_co.paa","\CA\wheeled_E\MTVR\Data\MTVR_body2_desert_co.paa","\CA\wheeled_E\MTVR\Data\MTVR_interier_desert_co.paa","\CA\wheeled_E\MTVR\Data\MTVR_tarp_desert_co.paa"};
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 30;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 5;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 2;
			};
			class _xx_200Rnd_556x45_M249
			{
				magazine = "200Rnd_556x45_M249";
				count = 5;
			};
			class _xx_MAAWS_HEDP
			{
				magazine = "MAAWS_HEDP";
				count = 2;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_FlareWhite_M203
			{
				magazine = "FlareWhite_M203";
				count = 2;
			};
			class _xx_FlareGreen_M203
			{
				magazine = "FlareGreen_M203";
				count = 2;
			};
			class _xx_FlareRed_M203
			{
				magazine = "FlareRed_M203";
				count = 2;
			};
			class _xx_FlareYellow_M203
			{
				magazine = "FlareYellow_M203";
				count = 2;
			};
		};
		class TransportWeapons
		{
			class _xx_SCAR_L_STD_HOLO
			{
				weapon = "SCAR_L_STD_HOLO";
				count = 2;
			};
		};
	};
	class MtvrReammo;
	class MtvrReammo_base: MtvrReammo
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class MtvrReammo_DES_EP1: MtvrReammo_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		displayName = "$STR_EP1_DN_MtvrReammo_DES_EP1";
		faction = "BIS_US";
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\MTVR\Data\MTVR_body_desert_co.paa","\CA\wheeled_E\MTVR\Data\MTVR_body2_desert_co.paa","\CA\wheeled_E\MTVR\Data\MTVR_interier_desert_co.paa","\CA\wheeled_E\MTVR\Data\MTVR_tarp_desert_co.paa"};
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 60;
			};
			class _xx_1Rnd_HE_M203
			{
				magazine = "1Rnd_HE_M203";
				count = 10;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 20;
			};
			class _xx_200Rnd_556x45_M249
			{
				magazine = "200Rnd_556x45_M249";
				count = 10;
			};
			class _xx_MAAWS_HEDP
			{
				magazine = "MAAWS_HEDP";
				count = 5;
			};
			class _xx_SmokeShellGreen
			{
				magazine = "SmokeShellGreen";
				count = 10;
			};
			class _xx_SmokeShell
			{
				magazine = "SmokeShell";
				count = 10;
			};
			class _xx_FlareWhite_M203
			{
				magazine = "FlareWhite_M203";
				count = 10;
			};
			class _xx_FlareGreen_M203
			{
				magazine = "FlareGreen_M203";
				count = 10;
			};
			class _xx_FlareRed_M203
			{
				magazine = "FlareRed_M203";
				count = 10;
			};
			class _xx_FlareYellow_M203
			{
				magazine = "FlareYellow_M203";
				count = 10;
			};
		};
		class TransportWeapons
		{
			class _xx_SCAR_L_STD_HOLO
			{
				weapon = "SCAR_L_STD_HOLO";
				count = 2;
			};
			class _xx_MAAWS
			{
				weapon = "MAAWS";
				count = 1;
			};
		};
	};
	class MtvrRefuel;
	class MtvrRefuel_base: MtvrRefuel
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class MtvrRefuel_DES_EP1: MtvrRefuel_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		displayName = "$STR_EP1_DN_MtvrRefuel_DES_EP1";
		faction = "BIS_US";
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\MTVR\Data\MTVR_body_desert_co.paa","\CA\wheeled_E\MTVR\Data\MTVR_body2_desert_co.paa","\CA\wheeled_E\MTVR\Data\MTVR_interier_desert_co.paa","\CA\wheeled_E\MTVR\Data\MTVR_Fuel_desert_CO.paa"};
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
	};
	class MtvrRepair;
	class MtvrRepair_base: MtvrRepair
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class MtvrRepair_DES_EP1: MtvrRepair_base
	{
		expansion = 1;
		scope = 2;
		side = 1;
		displayName = "$STR_EP1_DN_MtvrRepair_DES_EP1";
		faction = "BIS_US";
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\MTVR\Data\MTVR_body_desert_co.paa","\CA\wheeled_E\MTVR\Data\MTVR_body2_desert_co.paa","\CA\wheeled_E\MTVR\Data\MTVR_interier_desert_co.paa","\CA\wheeled_E\Ural\Data\ural_repair_desert_co.paa"};
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1","US_Soldier_EP1","US_Soldier_EP1"};
	};
	class MtvrSupply_DES_EP1: MTVR_DES_EP1
	{
		displayName = "$STR_wfsupplytruck";
		transportSoldier = 1;
		class TransportMagazines{};
		class TransportWeapons{};
		vehicleClass = "Support";
	};
	class MtvrSalvage_DES_EP1: MtvrRepair_DES_EP1
	{
		displayName = "$STR_wfsalvagetruck";
		transportSoldier = 1;
		class TransportMagazines{};
		class TransportWeapons{};
		vehicleClass = "Support";
	};
	class Lada_base;
	class Lada1_TK_CIV_EP1: Lada_base
	{
		expansion = 1;
		scope = 2;
		side = 3;
		faction = "BIS_TK_CIV";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\Lada\Data\Lada_ECIV1_CO.paa","\Ca\wheeled_E\Lada\Data\Lada_glass_ECIV1_CA.paa"};
		displayname = "$STR_EP1_DN_Lada1_TK_CIV_EP1";
		accuracy = 1000;
		rarityUrban = 0.4;
		crew = "TK_CIV_Takistani01_EP1";
		typicalCargo[] = {"TK_CIV_Takistani01_EP1"};
	};
	class Lada2_TK_CIV_EP1: Lada_base
	{
		expansion = 1;
		scope = 2;
		side = 3;
		faction = "BIS_TK_CIV";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\Lada\Data\Lada_ECIV2_CO.paa","\Ca\wheeled_E\Lada\Data\Lada_glass_ECIV2_CA.paa"};
		displayname = "$STR_EP1_DN_Lada2_TK_CIV_EP1";
		accuracy = 1000;
		rarityUrban = 0.4;
		crew = "TK_CIV_Takistani01_EP1";
		typicalCargo[] = {"TK_CIV_Takistani01_EP1"};
	};
	class GRAD_Base;
	class GRAD_TK_EP1: GRAD_Base
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 1;
		tBody = 250;
		expansion = 1;
		scope = 2;
		side = 0;
		accuracy = 0.3;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		hiddenSelectionsTextures[] = {"\CA\wheeled_E\Ural\Data\Ural_kabina_TKA_CO.paa","\ca\wheeled_E\Ural\Data\Ural_BM21_TKA_CO.paa"};
	};
	class Ikarus;
	class Ikarus_base: Ikarus
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {};
	};
	class Ikarus_TK_CIV_EP1: Ikarus_base
	{
		expansion = 1;
		scope = 2;
		side = 3;
		faction = "BIS_TK_CIV";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"\ca\wheeled_E\Ikarus\Data\Bus_exterior_ECIV_CO"};
		rarityUrban = 0.4;
		crew = "TK_CIV_Takistani01_EP1";
		typicalCargo[] = {"TK_CIV_Takistani01_EP1"};
	};
	class hilux1_civil_3_open_EP1: Car
	{
		brakeDistance = 10.5;
		expansion = 1;
		scope = 2;
		side = 3;
		faction = "BIS_TK_CIV";
		displayName = "$STR_EP1_DN_hilux1_civil_3_open_EP1";
		model = "\Ca\wheeled_E\Hilux_Armed\hilux1_civil_3_open";
		picture = "\Ca\wheeled\data\ico\hilux1_civil_3_open_CA.paa";
		Icon = "\Ca\wheeled\data\map_ico\icomap_hilux_CA.paa";
		mapSize = 7;
		maxSpeed = 125;
		typicalCargo[] = {"TK_CIV_Takistani05_EP1"};
		crew = "TK_CIV_Takistani05_EP1";
		transportSoldier = 1;
		driverAction = "Hilux_Driver";
		terrainCoef = 2.5;
		wheelCircumference = 2.532;
		steerAheadPlan = 0.2;
		cargoIsCoDriver[] = {1};
		outsideSoundFilter = 1;
		insideSoundCoef = 0.8;
		soundGear[] = {"",0.0005623413,1};
		SoundGetIn[] = {"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",0.56234133,1};
		SoundGetOut[] = {"\ca\sounds\vehicles\wheeled\offroad\ext\ext-offroad-getout-1",0.56234133,1,30};
		soundEngineOnInt[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-start-1",0.39810717,1.0};
		soundEngineOnExt[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-start-1",0.39810717,1.0,250};
		soundEngineOffInt[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-stop-1",0.39810717,1.0};
		soundEngineOffExt[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-stop-1",0.39810717,1.0,250};
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
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-acce-1",0.17782794,1.0};
				limit = "0.7";
				expression = "(engineOn*(1-camPos))*gmeterZ*(speed factor[2.5, 4])";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-acce-1",0.17782794,1.0,250};
				limit = "0.7";
				expression = "(engineOn*camPos)*gmeterZ*(speed factor[2.5, 4])";
			};
		};
		class Sounds: Sounds
		{
			class Engine: Engine
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-low-1",0.56234133,1.0,300};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*((rpm factor[0.21, 0.5]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-high-2",0.56234133,1.0,350};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "camPos*engineOn*(rpm factor[0.5, 0.85])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-idle-5",0.35481337,1.0,150};
				frequency = "1";
				volume = "camPos*engineOn*(rpm factor[0.4, 0])";
			};
			class TiresRockOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-rock2",0.1,1.0,30};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-sand2",0.1,1.0,30};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-grass3",0.1,1.0,30};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-mud2",0.1,1.0,30};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-gravel2",0.12589253,1.0,30};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\ext\ext-tires-asphalt3",0.08912508,1.0,30};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\ext\ext-offroad-acce-2",0.1,1.0,30};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class EngineLowIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-low-1",0.56234133,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*((rpm factor[0.2, 0.4]) min (rpm factor[0.7, 0.5]))";
			};
			class EngineHighIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-high-2",0.56234133,1.0};
				frequency = "(randomizer*0.05+0.95)*rpm";
				volume = "(1-camPos)*engineOn*(rpm factor[0.56, 0.8])";
			};
			class IdleIn
			{
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-idle-5",0.35481337,1.0};
				frequency = "1";
				volume = "(1-camPos)*engineOn*(rpm factor[0.35, 0])";
			};
			class TiresRockIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-rock2",0.1,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-sand2",0.1,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-grass3",0.1,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-mud2",0.1,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Tires\int\int-tires-gravel2",0.14125374,1.0};
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
				sound[] = {"ca\sounds\Vehicles\Wheeled\offroad\int\int-offroad-noise-1",0.31622776,1.0};
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
		cargoAction[] = {"Hilux_Cargo01"};
		hasGunner = 0;
		class Turrets{};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\data\detailmapy\coyota_trup1.rvmat","ca\wheeled\data\detailmapy\coyota_trup1.rvmat","ca\wheeled\data\detailmapy\coyota_trup1_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola.rvmat","ca\wheeled\data\detailmapy\coyota_kola_destruct.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier.rvmat","ca\wheeled\data\detailmapy\coyota_interier_destruct.rvmat","ca\wheeled\data\detailmapy\auta_skla.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
		};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\data\coyota_trup3.paa"};
		class Library
		{
			libTextDesc = "$STR_LIB_HILUX";
		};
		rarityUrban = 0.8;
	};
};
//};
