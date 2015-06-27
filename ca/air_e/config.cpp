////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:35 2014 : Source 'file' date Fri Oct 31 06:07:35 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	stabilizedinaxisx = 1,
	compartment1 = 1,
	stabilizedinaxisy = 2,
	compartment2 = 2,
	stabilizedinaxesboth = 3,
	compartment3 = 4,
	compartment4 = 8,
	stabilizedinaxesnone = 0
};

//Class air_e : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AH64_gunner_EP1 = "AH64_gunner_EP1";
		AH64_pilot_EP1 = "AH64_pilot_EP1";
		AH6j_Cargo_EP1 = "AH6j_Cargo_EP1";
		AH6j_Pilot_EP1 = "AH6j_Pilot_EP1";
		AN2_Cargo_EP1 = "AN2_Cargo_EP1";
		AN2_Cargo01_EP1 = "AN2_Cargo01_EP1";
		AN2_Cargo02_EP1 = "AN2_Cargo02_EP1";
		AN2_Cargo03_EP1 = "AN2_Cargo03_EP1";
		AN2_Pilot_EP1 = "AN2_Pilot_EP1";
		CH47_Cargo_EP1 = "CH47_Cargo_EP1";
		CH47_Cargo01_EP1 = "CH47_Cargo01_EP1";
		CH47_Cargo02_EP1 = "CH47_Cargo02_EP1";
		CH47_Cargo03_EP1 = "CH47_Cargo03_EP1";
		CH47_Gunner_EP1 = "CH47_Gunner_EP1";
		CH47_Gunner01_EP1 = "CH47_Gunner01_EP1";
		CH47_Pilot_EP1 = "CH47_Pilot_EP1";
		Mi171_Gunner_EP1 = "Mi171_Gunner_EP1";
		UH1H_Cargo_EP1 = "UH1H_Cargo_EP1";
		UH1H_Pilot_EP1 = "UH1H_Pilot_EP1";
		UH60M_Gunner_EP1 = "UH60M_Gunner_EP1";
		UH60M_Pilot_EP1 = "UH60M_Pilot_EP1";
		UH60M_Cargo_EP1 = "UH60M_Cargo_EP1";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AH64_gunner_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\AH64_gunner";
			connectTo[] = {"KIA_AH64_gunner_EP1",1};
			speed = 1e+010;
		};
		class KIA_AH64_gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Air_e\Data\Anim\KIA_AH64_gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class AH64_pilot_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\AH64_pilot";
			connectTo[] = {"KIA_AH64_pilot_EP1",1};
			speed = 1e+010;
		};
		class KIA_AH64_pilot_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Air_e\Data\Anim\KIA_AH64_pilot";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class AH6j_Cargo_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\AH6j_Cargo";
			connectTo[] = {"AH6j_KIA_Cargo_EP1",1};
			speed = 1e+010;
		};
		class AH6j_KIA_Cargo_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Air_e\Data\Anim\AH6j_KIA_Cargo";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class AH6j_Pilot_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\AH6j_Pilot";
			connectTo[] = {"AH6j_KIA_Pilot_EP1",1};
			speed = 1e+010;
		};
		class AH6j_KIA_Pilot_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Air_e\Data\Anim\AH6j_KIA_Pilot";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class AN2_Cargo_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\AN2_Cargo";
			connectTo[] = {"AN2_KIA_Cargo01_EP1",1};
			speed = 1e+010;
		};
		class AN2_KIA_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Air_e\Data\Anim\AN2_KIA_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class AN2_Cargo01_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\AN2_Cargo01";
			interpolateTo[] = {"AN2_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"AN2_Cargo01_EP1",0.1,"AN2_Cargo01_V1_EP1",0.1,"AN2_Cargo01_V2_EP1",0.1,"AN2_Cargo01_V3_EP1",0.1,"AN2_Cargo01_V4_EP1",0.1,"AN2_Cargo01_V5_EP1",0.1};
			equivalentTo = "AN2_Cargo01_EP1";
			variantsAI[] = {"AN2_Cargo01_EP1",0.5,"AN2_Cargo01_V1_EP1",0.12,"AN2_Cargo01_V2_EP1",0.11,"AN2_Cargo01_V3_EP1",0.1,"AN2_Cargo01_V4_EP1",0.09,"AN2_Cargo01_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class AN2_Cargo01_V1_EP1: AN2_Cargo01_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo01_V1.rtm";
			connectTo[] = {"AN2_Cargo01_EP1",0.1};
			speed = 0.3125;
			variantAfter[] = {5,5,5};
		};
		class AN2_Cargo01_V2_EP1: AN2_Cargo01_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo01_V2.rtm";
			connectTo[] = {"AN2_Cargo01_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class AN2_Cargo01_V3_EP1: AN2_Cargo01_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo01_V3.rtm";
			connectTo[] = {"AN2_Cargo01_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
		};
		class AN2_Cargo01_V4_EP1: AN2_Cargo01_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo01_V4.rtm";
			connectTo[] = {"AN2_Cargo01_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class AN2_Cargo01_V5_EP1: AN2_Cargo01_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo01_V5.rtm";
			connectTo[] = {"AN2_Cargo01_EP1",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
		};
		class AN2_Cargo02_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\AN2_Cargo02";
			interpolateTo[] = {"AN2_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"AN2_Cargo02_EP1",0.1,"AN2_Cargo02_V1_EP1",0.1,"AN2_Cargo02_V2_EP1",0.1,"AN2_Cargo02_V3_EP1",0.1,"AN2_Cargo02_V4_EP1",0.1,"AN2_Cargo02_V5_EP1",0.1};
			equivalentTo = "AN2_Cargo02_EP1";
			variantsAI[] = {"AN2_Cargo02_EP1",0.5,"AN2_Cargo02_V1_EP1",0.12,"AN2_Cargo02_V2_EP1",0.11,"AN2_Cargo02_V3_EP1",0.1,"AN2_Cargo02_V4_EP1",0.09,"AN2_Cargo02_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class AN2_Cargo02_V1_EP1: AN2_Cargo02_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo02_V1.rtm";
			connectTo[] = {"AN2_Cargo02_EP1",0.1};
			speed = 0.3125;
			variantAfter[] = {5,5,5};
		};
		class AN2_Cargo02_V2_EP1: AN2_Cargo02_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo02_V2.rtm";
			connectTo[] = {"AN2_Cargo02_EP1",0.1};
			speed = 0.37037;
			variantAfter[] = {5,5,5};
		};
		class AN2_Cargo02_V3_EP1: AN2_Cargo02_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo02_V3.rtm";
			connectTo[] = {"AN2_Cargo02_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class AN2_Cargo02_V4_EP1: AN2_Cargo02_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo02_V4.rtm";
			connectTo[] = {"AN2_Cargo02_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
		};
		class AN2_Cargo02_V5_EP1: AN2_Cargo02_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo02_V5.rtm";
			connectTo[] = {"AN2_Cargo02_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
		};
		class AN2_Cargo03_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\AN2_Cargo03";
			interpolateTo[] = {"AN2_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"AN2_Cargo03_EP1",0.1,"AN2_Cargo03_V1_EP1",0.1,"AN2_Cargo03_V2_EP1",0.1,"AN2_Cargo03_V3_EP1",0.1,"AN2_Cargo03_V4_EP1",0.1,"AN2_Cargo03_V5_EP1",0.1};
			equivalentTo = "AN2_Cargo03_EP1";
			variantsAI[] = {"AN2_Cargo03_EP1",0.5,"AN2_Cargo03_V1_EP1",0.12,"AN2_Cargo03_V2_EP1",0.11,"AN2_Cargo03_V3_EP1",0.1,"AN2_Cargo03_V4_EP1",0.09,"AN2_Cargo03_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class AN2_Cargo03_V1_EP1: AN2_Cargo03_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo03_V1.rtm";
			connectTo[] = {"AN2_Cargo03_EP1",0.1};
			speed = 0.245902;
			variantAfter[] = {5,5,5};
		};
		class AN2_Cargo03_V2_EP1: AN2_Cargo03_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo03_V2.rtm";
			connectTo[] = {"AN2_Cargo03_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class AN2_Cargo03_V3_EP1: AN2_Cargo03_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo03_V3.rtm";
			connectTo[] = {"AN2_Cargo03_EP1",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
		};
		class AN2_Cargo03_V4_EP1: AN2_Cargo03_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo03_V4.rtm";
			connectTo[] = {"AN2_Cargo03_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class AN2_Cargo03_V5_EP1: AN2_Cargo03_EP1
		{
			file = "\ca\Air_E\Data\Anim\AN2_Cargo03_V5.rtm";
			connectTo[] = {"AN2_Cargo03_EP1",0.1};
			speed = 0.177515;
			variantAfter[] = {5,5,5};
		};
		class AN2_Pilot_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\AN2_Pilot";
			connectTo[] = {"AN2_Pilot_EP1",1};
			speed = 1e+010;
		};
		class CH47_Cargo_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\CH47_Cargo";
			connectTo[] = {"CH47_KIA_Cargo01_EP1",1};
			speed = 1e+010;
		};
		class CH47_KIA_Cargo01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Air_e\Data\Anim\CH47_KIA_Cargo01";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class CH47_Cargo01_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\CH47_Cargo01";
			connectTo[] = {"CH47_KIA_Cargo01_EP1",1};
			speed = 1e+010;
		};
		class CH47_Cargo02_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\CH47_Cargo02";
			interpolateTo[] = {"CH47_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"CH47_Cargo02_EP1",0.1,"CH47_Cargo02_V1_EP1",0.1,"CH47_Cargo02_V2_EP1",0.1,"CH47_Cargo02_V3_EP1",0.1,"CH47_Cargo02_V4_EP1",0.1,"CH47_Cargo02_V5_EP1",0.1};
			equivalentTo = "CH47_Cargo02_EP1";
			variantsAI[] = {"CH47_Cargo02_EP1",0.5,"CH47_Cargo02_V1_EP1",0.12,"CH47_Cargo02_V2_EP1",0.11,"CH47_Cargo02_V3_EP1",0.1,"CH47_Cargo02_V4_EP1",0.09,"CH47_Cargo02_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class CH47_Cargo02_V1_EP1: CH47_Cargo02_EP1
		{
			file = "\ca\Air_E\Data\Anim\CH47_Cargo02_V1.rtm";
			connectTo[] = {"CH47_Cargo02_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo02_V2_EP1: CH47_Cargo02_EP1
		{
			file = "\ca\Air_E\Data\Anim\CH47_Cargo02_V2.rtm";
			connectTo[] = {"CH47_Cargo02_EP1",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo02_V3_EP1: CH47_Cargo02_EP1
		{
			file = "\ca\Air_E\Data\Anim\CH47_Cargo02_V3.rtm";
			connectTo[] = {"CH47_Cargo02_EP1",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo02_V4_EP1: CH47_Cargo02_EP1
		{
			file = "\ca\Air_E\Data\Anim\CH47_Cargo02_V4.rtm";
			connectTo[] = {"CH47_Cargo02_EP1",0.1};
			speed = 0.32967;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo02_V5_EP1: CH47_Cargo02_EP1
		{
			file = "\ca\Air_E\Data\Anim\CH47_Cargo02_V5.rtm";
			connectTo[] = {"CH47_Cargo02_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo03_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\CH47_Cargo03";
			interpolateTo[] = {"CH47_KIA_Cargo01_EP1",0.1};
			connectTo[] = {"CH47_Cargo03_EP1",0.1,"CH47_Cargo03_V1_EP1",0.1,"CH47_Cargo03_V2_EP1",0.1,"CH47_Cargo03_V3_EP1",0.1,"CH47_Cargo03_V4_EP1",0.1,"CH47_Cargo03_V5_EP1",0.1};
			equivalentTo = "CH47_Cargo03_EP1";
			variantsAI[] = {"CH47_Cargo03_EP1",0.5,"CH47_Cargo03_V1_EP1",0.12,"CH47_Cargo03_V2_EP1",0.11,"CH47_Cargo03_V3_EP1",0.1,"CH47_Cargo03_V4_EP1",0.09,"CH47_Cargo03_V5_EP1",0.08};
			variantAfter[] = {5,10,20};
			speed = 1e+010;
		};
		class CH47_Cargo03_V1_EP1: CH47_Cargo03_EP1
		{
			file = "\ca\Air_E\Data\Anim\CH47_Cargo03_V1.rtm";
			connectTo[] = {"CH47_Cargo03_EP1",0.1};
			speed = 0.333333;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo03_V2_EP1: CH47_Cargo03_EP1
		{
			file = "\ca\Air_E\Data\Anim\CH47_Cargo03_V2.rtm";
			connectTo[] = {"CH47_Cargo03_EP1",0.1};
			speed = 0.625;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo03_V3_EP1: CH47_Cargo03_EP1
		{
			file = "\ca\Air_E\Data\Anim\CH47_Cargo03_V3.rtm";
			connectTo[] = {"CH47_Cargo03_EP1",0.1};
			speed = 0.410959;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo03_V4_EP1: CH47_Cargo03_EP1
		{
			file = "\ca\Air_E\Data\Anim\CH47_Cargo03_V4.rtm";
			connectTo[] = {"CH47_Cargo03_EP1",0.1};
			speed = 0.535714;
			variantAfter[] = {5,5,5};
		};
		class CH47_Cargo03_V5_EP1: CH47_Cargo03_EP1
		{
			file = "\ca\Air_E\Data\Anim\CH47_Cargo03_V5.rtm";
			connectTo[] = {"CH47_Cargo03_EP1",0.1};
			speed = 0.32967;
			variantAfter[] = {5,5,5};
		};
		class CH47_Pilot_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\CH47_Pilot";
			connectTo[] = {"CH47_KIA_Pilot_EP1",1};
			speed = 1e+010;
		};
		class CH47_KIA_Pilot_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Air_e\Data\Anim\CH47_KIA_Pilot";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class CH47_Gunner_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\CH47_Gunner02";
			connectTo[] = {"CH47_KIA_Gunner01_EP1",1};
			speed = 1e+010;
		};
		class CH47_Gunner01_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\CH47_Gunner";
			connectTo[] = {"CH47_KIA_Gunner01_EP1",1};
			speed = 1e+010;
		};
		class CH47_KIA_Gunner01_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Air_e\Data\Anim\CH47_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class Mi171_Gunner_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\MI171_Gunner";
			connectTo[] = {"Mi171_KIA_Gunner_EP1",1};
			speed = 1e+010;
		};
		class Mi171_KIA_Gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Air_e\Data\Anim\MI171_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class UH1H_Cargo_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\UH1H_Cargo";
			connectTo[] = {"UH1H_KIA_Pilot_EP1",1};
			speed = 1e+010;
		};
		class UH1H_KIA_Pilot_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Air_e\Data\Anim\UH1H_KIA_Pilot";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class UH1H_Pilot_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\UH1H_Pilot";
			connectTo[] = {"UH1H_KIA_Pilot_EP1",1};
			speed = 1e+010;
		};
		class UH60M_Gunner_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\UH60M_Gunner";
			connectTo[] = {"UH60M_KIA_Gunner_EP1",1};
			speed = 1e+010;
		};
		class UH60M_KIA_Gunner_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Air_e\Data\Anim\UH60M_KIA_Gunner";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class UH60M_Pilot_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\UH60M_Pilot";
			connectTo[] = {"UH60M_KIA_Pilot_EP1",1};
			speed = 1e+010;
		};
		class UH60M_KIA_Pilot_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Air_e\Data\Anim\UH60M_KIA_Pilot";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class UH60M_Cargo_EP1: Crew
		{
			file = "\ca\Air_e\Data\Anim\UH60M_Pilot";
			connectTo[] = {"UH60M_KIA_Pilot_EP1",1};
			speed = 1e+010;
		};
		class UH60M_KIA_Cargo_EP1: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\Air_e\Data\Anim\UH60M_KIA_Pilot";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class A10_Pilot: Crew
		{
			leaning = "crewShake_half";
		};
		class Su34_Pilot: Crew
		{
			leaning = "crewShake_half";
		};
		class Su34_Gunner: Crew
		{
			leaning = "crewShake_half";
		};
		class F35B_Pilot: Crew
		{
			leaning = "crewShake_half";
		};
		class SU25_Pilot: Crew
		{
			leaning = "crewShake_half";
		};
		class AV8B_Pilot: Crew
		{
			leaning = "crewShake_half";
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		AH64_gunner_EP1 = "";
		AH64_pilot_EP1 = "";
		AH6j_Cargo_EP1 = "crew";
		AH6j_Pilot_EP1 = "";
		AN2_Cargo_EP1 = "crew";
		AN2_Cargo01_EP1 = "crew";
		AN2_Cargo02_EP1 = "crew";
		AN2_Cargo03_EP1 = "crew";
		AN2_Pilot_EP1 = "";
		CH47_Cargo_EP1 = "crew";
		CH47_Cargo01_EP1 = "crew";
		CH47_Cargo02_EP1 = "crew";
		CH47_Cargo03_EP1 = "crew";
		CH47_Gunner_EP1 = "";
		CH47_Gunner01_EP1 = "";
		CH47_Pilot_EP1 = "";
		UH1H_Cargo_EP1 = "crew";
		UH1H_Pilot_EP1 = "";
		UH60M_Gunner_EP1 = "";
		UH60M_Pilot_EP1 = "";
		UH60M_Cargo_EP1 = "crew";
	};
};
class CfgPatches
{
	class CAAir_E
	{
		units[] = {"Mi24_D_TK_EP1","Su25_TK_EP1","A10_US_EP1","Parachute_US_EP1","Parachute_TK_EP1","Parachute_TK_GUE_EP1","MQ9PredatorB_US_EP1"};
		weapons[] = {};
		requiredVersion = 1.5;
		requiredAddons[] = {"CACharacters_E","CAWeapons_E","CA_Anims_Char","CAAir","CAAir2","CAAir2_MQ9PredatorB","CAAir3_Su34","CAA10","CAAir2_C130J","CAAir2_ChukarTarget","CAAir2_F35B","Arma2_Ka52","CA_AIR2_Su25","CAAir2_UH1Y","CAAir3","CAAir2_MV22"};
	};
};
class CfgVehicles
{
	class AllVehicles;
	class Plane;
	class Air: AllVehicles
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		class MarkerLights
		{
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {0.0388,0.0388,0.0388,1.0};
				ambient[] = {0.03,0.023,0.0056,1.0};
				brightness = 0.001;
				blinking = 0;
			};
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {0.12,0.006,0.006,1.0};
				ambient[] = {0.1,0.01,0.01,1.0};
				brightness = 0.001;
				blinking = 0;
			};
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0.006,0.12,0.006,1.0};
				ambient[] = {0.01,0.1,0.01,1.0};
				brightness = 0.001;
				blinking = 0;
			};
			class WhiteBlinking
			{
				name = "bily pozicni blik";
				color[] = {0.0388,0.0388,0.0388,1.0};
				ambient[] = {0.03,0.023,0.0056,1.0};
				brightness = 0.001;
				blinking = 1;
			};
			class RedBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {0.12,0.006,0.006,1.0};
				ambient[] = {0.1,0.01,0.01,1.0};
				brightness = 0.001;
				blinking = 1;
			};
		};
		radarType = 4;
	};
	class ParachuteBase;
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Mi24_Base: Helicopter
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerOpticsEffect[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"};
				gunnerOpticsModel = "CA\Air_E\gunnerOptics_HIND";
			};
		};
		class AnimationSources;
		radarType = 4;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlareMagazine"};
		LockDetectionSystem = 8;
		IncommingMisslieDetectionSystem = 16;
		irScanRangeMin = 500;
		irScanRangeMax = 2000;
		irScanToEyeFactor = 2;
	};
	class Mi24_Base_TK_EP1: Mi24_Base
	{
		expansion = 1;
		accuracy = 1.5;
		side = 0;
		faction = "BIS_TK";
	};
	class Mi24_Base_RU;
	class Mi24_P: Mi24_Base_RU
	{
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlareMagazine"};
	};
	class Mi24_Base_CDF;
	class Mi24_D: Mi24_Base_CDF
	{
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlareMagazine"};
	};
	class Mi24_D_Base_TK_EP1: Mi24_Base_TK_EP1
	{
		accuracy = 1000;
		displayName = "$STR_DN_MI24D";
		vehicleClass = "Air";
		model = "\ca\air_E\Mi35\mi35.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"YakB","AT2Launcher","57mmLauncher_128"};
				magazines[] = {"1470Rnd_127x108_YakB","4Rnd_AT2_Mi24D","128Rnd_57mm"};
			};
		};
		class AnimationSources: AnimationSources
		{
			class Gatling_1;
			class Doors;
		};
		class Library
		{
			libTextDesc = "$STR_LIB_MI24_D";
		};
	};
	class Mi24_D_TK_EP1: Mi24_D_Base_TK_EP1
	{
		scope = 2;
		accuracy = 1000;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Pilot_EP1";
		typicalCargo[] = {"TK_Soldier_Pilot_EP1","TK_Soldier_Pilot_EP1"};
		hiddenSelections[] = {"Camo1","Camo2","Camo3"};
		hiddenSelectionsTextures[] = {"\Ca\Air_E\Data\mi35_001_IND_co.paa","\Ca\Air_E\Data\mi35_002_IND_co.paa","\Ca\Air_E\Data\mi35_mlod_IND_co.paa"};
		class TransportMagazines
		{
			class _xx_20Rnd_762x51_FNFAL
			{
				magazine = "20Rnd_762x51_FNFAL";
				count = 30;
			};
			class _xx_HandGrenade_East
			{
				magazine = "HandGrenade_East";
				count = 5;
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
	};
	class Su25_base: Plane
	{
		class MFD
		{
			class AirplaneHUD
			{
				enableParallax = 1;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.52,0.03};
					pos10[] = {2.02,1.23};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0.1};
				class Bones
				{
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.5};
						pos3[] = {0.95,"(0.50)"};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.86};
					};
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.5,0.5};
					};
					class HorizonBankMGun
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = {0,0};
						min = -6.28319;
						max = 6.28319;
						minAngle = -360;
						maxAngle = 360;
						aspectRatio = 0.8;
					};
					class HorizonBankReverted
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = {0,0};
						min = "-3.14159265*2";
						max = "3.14159265*2";
						minAngle = 360;
						maxAngle = -360;
						aspectRatio = 0.8;
					};
					class HorizonDive
					{
						source = "horizonDive";
						type = "linear";
						min = -1;
						max = 1;
						minPos[] = {0.0,1};
						maxPos[] = {0.0,0};
					};
					class WeaponAim: Pos10Vector
					{
						source = "weapon";
					};
					class Target: Pos10Vector
					{
						source = "target";
					};
					class VelocityNotCenter: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.0,0.0};
						pos10[] = {1.5,1.2};
					};
					class SpdMove2
					{
						source = "speed";
						min = 0;
						max = 200;
						type = "linear";
						minPos[] = {0.0,0.0};
						maxPos[] = {0.0,1.0};
					};
					class ASLMove1
					{
						type = "linear";
						source = "altitudeASL";
						min = 0;
						max = 500;
						minPos[] = {0.0,0.1};
						maxPos[] = {0.0,0.8};
					};
					class Heading
					{
						type = "linear";
						source = "Heading";
						min = -36;
						max = 36;
						minPos[] = {0.0,0.0};
						maxPos[] = {1.0,0.0};
					};
				};
				class Draw
				{
					alpha = 0.6;
					color[] = {0.0,0.3,0.05};
					condition = "on";
					class Static
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ "PlaneW",{ -0.21,7.34351e-009 },1 },{ "PlaneW",{ -0.28,9.79135e-009 },1 },{  },{ "PlaneW",{ 0.21,-2.00338e-009 },1 },{ "PlaneW",{ 0.28,-2.67117e-009 },1 },{  },{ "PlaneW",{ -0.105,0.145492 },1 },{ "PlaneW",{ -0.14,0.19399 },1 },{  },{ "PlaneW",{ 0.105,0.145492 },1 },{ "PlaneW",{ 0.14,0.19399 },1 },{  },{ "PlaneW",{ -0.181865,0.084 },1 },{ "PlaneW",{ -0.242487,0.112 },1 },{  },{ "PlaneW",{ 0.181865,0.084 },1 },{ "PlaneW",{ 0.242487,0.112 },1 },{  },{ "PlaneW",{ -0.202844,0.0434816 },1 },{ "PlaneW",{ -0.270459,0.0579755 },1 },{  },{ "PlaneW",{ 0.202844,0.0434816 },1 },{ "PlaneW",{ 0.270459,0.0579755 },1 },{  },{ "PlaneW",{ -0.209201,0.0146422 },1 },{ "PlaneW",{ -0.244068,0.0170825 },1 },{  },{ "PlaneW",{ -0.20681,0.0291729 },1 },{ "PlaneW",{ -0.241278,0.034035 },1 },{  },{ "PlaneW",{ 0.20681,0.0291729 },1 },{ "PlaneW",{ 0.241278,0.034035 },1 },{  },{ "PlaneW",{ 0.209201,0.0146422 },1 },{ "PlaneW",{ 0.244068,0.0170825 },1 },{  }};
					};
					class HorizonBank
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.9};
						type = "line";
						points[] = {{ "PlaneW",1,"HorizonBankReverted",{ 0.21,0.0 },1 },{ "PlaneW",1,"HorizonBankReverted",{ 0.07,0.0 },1 },{  },{ "PlaneW",1,"HorizonBankReverted",{ -0.21,0.0 },1 },{ "PlaneW",1,"HorizonBankReverted",{ -0.07,0.0 },1 },{  },{ "PlaneW",1,"HorizonBankReverted",{ 0.0,0.14 },1 },{ "PlaneW",1,"HorizonBankReverted",{ 0.0,0.07 },1 }};
					};
					class HorizonDive
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ "HorizonDive",{ 0.8,0 },1 },{ "HorizonDive",{ 0.2,0 },1 }};
					};
					class Missile
					{
						condition = "missile";
						class Target
						{
							type = "line";
							points[] = {{ "Target",{ 0,-0.08 },1 },{ "Target",{ 0.05,-0.0696 },1 },{ "Target",{ 0.087,"-0.50*(0.10)*((1.2/1.5))" },1 },{ "Target",{ "+(0.10)",0 },1 },{ "Target",{ 0.087,0.04 },1 },{ "Target",{ 0.05,"+0.87*(0.10)*((1.2/1.5))" },1 },{ "Target",{ 0,0.08 },1 },{ "Target",{ -0.05,0.0696 },1 },{ "Target",{ -0.087,"+0.50*(0.10)*((1.2/1.5))" },1 },{ "Target",{ "-(0.10)",0 },1 },{ "Target",{ -0.087,-0.04 },1 },{ "Target",{ -0.05,"-0.87*(0.10)*((1.2/1.5))" },1 },{ "Target",{ 0,-0.08 },1 }};
						};
					};
					class Cros
					{
						condition = "on";
						class Cros
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0.05,0 },1 },{ "WeaponAim",{ 0.015,0 },1 },{  },{ "WeaponAim",{ 0,0.04 },1 },{ "WeaponAim",{ 0,0.012 },1 },{  },{ "WeaponAim",{ -0.05,0 },1 },{ "WeaponAim",{ -0.015,0 },1 },{  },{ "WeaponAim",{ 0,-0.04 },1 },{ "WeaponAim",{ 0,-0.012 },1 }};
						};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						pos[] = {{ 0.06,0.07 },1};
						right[] = {{ 0.14,0.07 },1};
						down[] = {{ 0.06,0.12 },1};
					};
					class AltNumber: SpeedNumber
					{
						source = "altitudeASL";
						sourceScale = 1;
						pos[] = {{ 0.86,0.07 },1};
						right[] = {{ 0.94,0.07 },1};
						down[] = {{ 0.86,0.12 },1};
					};
					class HeadingNumber: SpeedNumber
					{
						source = "HorizonDive";
						align = "right";
						sourceScale = 57.2958;
						pos[] = {"HorizonDive",{ 0.81,-0.05 },1};
						right[] = {"HorizonDive",{ 0.89,-0.05 },1};
						down[] = {"HorizonDive",{ 0.81,0.0 },1};
					};
					class MGun
					{
						condition = "mgun";
						class Lines
						{
							type = "line";
							points[] = {{ "VelocityNotCenter",0.001,"WeaponAim",1,"HorizonBankMGun",{ 0.2,0.0 },1 },{ "VelocityNotCenter",0.1,"WeaponAim",1,"HorizonBankMGun",{ 0.18,-0.01 },1 },{ "VelocityNotCenter",0.2,"WeaponAim",1,"HorizonBankMGun",{ 0.16,-0.03 },1 },{ "VelocityNotCenter",0.3,"WeaponAim",1,"HorizonBankMGun",{ 0.14,-0.06 },1 },{ "VelocityNotCenter",0.4,"WeaponAim",1,"HorizonBankMGun",{ 0.12,-0.1 },1 },{ "VelocityNotCenter",0.5,"WeaponAim",1,"HorizonBankMGun",{ 0.1,-0.15 },1 },{ "VelocityNotCenter",0.6,"WeaponAim",1,"HorizonBankMGun",{ 0.08,-0.21 },1 },{ "VelocityNotCenter",0.7,"WeaponAim",1,"HorizonBankMGun",{ 0.06,-0.28 },1 },{ "VelocityNotCenter",0.8,"WeaponAim",1,"HorizonBankMGun",{ 0.04,-0.4 },1 },{  },{ "VelocityNotCenter",0.001,"WeaponAim",1,"HorizonBankMGun",{ -0.2,0.0 },1 },{ "VelocityNotCenter",0.1,"WeaponAim",1,"HorizonBankMGun",{ -0.18,-0.01 },1 },{ "VelocityNotCenter",0.2,"WeaponAim",1,"HorizonBankMGun",{ -0.16,-0.03 },1 },{ "VelocityNotCenter",0.3,"WeaponAim",1,"HorizonBankMGun",{ -0.14,-0.06 },1 },{ "VelocityNotCenter",0.4,"WeaponAim",1,"HorizonBankMGun",{ -0.12,-0.1 },1 },{ "VelocityNotCenter",0.5,"WeaponAim",1,"HorizonBankMGun",{ -0.1,-0.15 },1 },{ "VelocityNotCenter",0.6,"WeaponAim",1,"HorizonBankMGun",{ -0.08,-0.21 },1 },{ "VelocityNotCenter",0.7,"WeaponAim",1,"HorizonBankMGun",{ -0.06,-0.28 },1 },{ "VelocityNotCenter",0.8,"WeaponAim",1,"HorizonBankMGun",{ -0.04,-0.4 },1 }};
						};
					};
					class weapons
					{
						type = "text";
						source = "weapon";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {{ 0.06,0.88 },1};
						right[] = {{ 0.12,0.88 },1};
						down[] = {{ 0.06,0.92 },1};
					};
					class ammo
					{
						type = "text";
						source = "ammo";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {{ 0.06,0.93 },1};
						right[] = {{ 0.12,0.93 },1};
						down[] = {{ 0.06,0.97 },1};
					};
					class ILS
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = {0.0,0.0};
							clipBR[] = {1.0,1.0};
							class ILS
							{
								type = "line";
								points[] = {{ "ILS_W",{ -0.4,0 },1 },{ "ILS_W",{ 0.4,0 },1 },{  },{ "ILS_W",{ 0,0.04 },1 },{ "ILS_W",{ 0,-0.04 },1 },{  },{ "ILS_W",{ 0.2,0.04 },1 },{ "ILS_W",{ 0.2,-0.04 },1 },{  },{ "ILS_W",{ 0.4,0.04 },1 },{ "ILS_W",{ 0.4,-0.04 },1 },{  },{ "ILS_W",{ -0.2,0.04 },1 },{ "ILS_W",{ -0.2,-0.04 },1 },{  },{ "ILS_W",{ -0.4,0.04 },1 },{ "ILS_W",{ -0.4,-0.04 },1 },{  },{ "ILS_H",{ 0,-0.4 },1 },{ "ILS_H",{ 0,0.4 },1 },{  },{ "ILS_H",{ 0.04,0 },1 },{ "ILS_H",{ -0.04,0 },1 },{  },{ "ILS_H",{ 0.04,0.2 },1 },{ "ILS_H",{ -0.04,0.2 },1 },{  },{ "ILS_H",{ 0.04,0.4 },1 },{ "ILS_H",{ -0.04,0.4 },1 },{  },{ "ILS_H",{ 0.04,-0.2 },1 },{ "ILS_H",{ -0.04,-0.2 },1 },{  },{ "ILS_H",{ 0.04,-0.4 },1 },{ "ILS_H",{ -0.04,-0.4 },1 },{  }};
							};
						};
					};
				};
			};
		};
		irScanRangeMin = 100;
		irScanRangeMax = 5000;
		irScanToEyeFactor = 2;
	};
	class Su25_TK_EP1: Su25_base
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Pilot_EP1";
		typicalCargo[] = {"TK_Soldier_Pilot_EP1"};
		hiddenSelectionsTextures[] = {"Ca\Air_E\Data\su25_body1_IND_co.paa","Ca\Air_E\Data\su25_body2_IND_co.paa"};
	};
	class A10: Plane
	{
		radarType = 4;
		weapons[] = {"GAU8","MaverickLauncher","SidewinderLaucher_AH1Z","BombLauncherA10","FFARLauncher_14","CMFlareLauncher"};
		magazines[] = {"1350Rnd_30mmAP_A10","2Rnd_Maverick_A10","2Rnd_Sidewinder_AH1Z","4Rnd_GBU12","14Rnd_FFAR","120Rnd_CMFlare_Chaff_Magazine"};
		LockDetectionSystem = 8;
		IncommingMisslieDetectionSystem = 0;
		class MFD
		{
			class AirplaneHUD
			{
				enableParallax = 1;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.51,0.305};
					pos10[] = {1.31,1.185};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0.1};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.51,0.375};
					};
					class WeaponAim: Pos10Vector
					{
						source = "weapon";
					};
					class Target: Pos10Vector
					{
						source = "target";
					};
					class Velocity: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.305};
						pos10[] = {1.3,1.185};
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.305};
						pos3[] = {0.74,0.305};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.569};
					};
					class Level0: Pos10Vector
					{
						pos0[] = {0.5,0.375};
						pos10[] = {1.3,1.255};
						type = "horizon";
						angle = 0;
					};
					class LevelP5: Level0
					{
						angle = 5;
					};
					class LevelM5: Level0
					{
						angle = -5;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP15: Level0
					{
						angle = 15;
					};
					class LevelM15: Level0
					{
						angle = -15;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP25: Level0
					{
						angle = 25;
					};
					class LevelM25: Level0
					{
						angle = -25;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP35: Level0
					{
						angle = 35;
					};
					class LevelM35: Level0
					{
						angle = -35;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP45: Level0
					{
						angle = 45;
					};
					class LevelM45: Level0
					{
						angle = -45;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
				};
				class Draw
				{
					alpha = 0.4;
					color[] = {0.0,0.3,0.05};
					condition = "on";
					class PlaneW
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ "PlaneW",{ -0.08,0 },1 },{ "PlaneW",{ -0.03,0 },1 },{ "PlaneW",{ -0.015,0.033 },1 },{ "PlaneW",{ 0.0,0 },1 },{ "PlaneW",{ 0.015,0.033 },1 },{ "PlaneW",{ 0.03,0 },1 },{ "PlaneW",{ 0.08,0 },1 }};
					};
					class PlaneHeading
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ "Velocity",{ 0,-0.022 },1 },{ "Velocity",{ 0.014,-0.0154 },1 },{ "Velocity",{ 0.02,0 },1 },{ "Velocity",{ 0.014,0.0154 },1 },{ "Velocity",{ 0,0.022 },1 },{ "Velocity",{ -0.014,0.0154 },1 },{ "Velocity",{ -0.02,0 },1 },{ "Velocity",{ -0.014,-0.0154 },1 },{ "Velocity",{ 0,-0.022 },1 },{  },{ "Velocity",{ 0.04,0 },1 },{ "Velocity",{ 0.02,0 },1 },{  },{ "Velocity",{ -0.04,0 },1 },{ "Velocity",{ -0.02,0 },1 },{  },{ "Velocity",{ 0,-0.044 },1 },{ "Velocity",{ 0,-0.022 },1 },{  }};
					};
					class Static
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ { 0.21,0.52 },1 },{ { 0.19,0.5 },1 },{ { 0.21,0.48 },1 },{  },{ { 0.18,0.2 },1 },{ { 0.18,0.85 },1 },{  },{ { 0.79,0.52 },1 },{ { 0.81,0.5 },1 },{ { 0.79,0.48 },1 },{  },{ { 0.82,0.2 },1 },{ { 0.82,0.85 },1 },{  },{ { 0.52,0.09 },1 },{ { 0.5,0.07 },1 },{ { 0.48,0.09 },1 },{  },{ { 0.2,0.065 },1 },{ { 0.8,0.065 },1 },{  }};
					};
					class Horizont
					{
						clipTL[] = {0.0,0.0};
						clipBR[] = {1.0,1.0};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] = {{ "Level0",{ -0.2,0 },1 },{ "Level0",{ -0.05,0 },1 },{  },{ "Level0",{ 0.05,0 },1 },{ "Level0",{ 0.2,0 },1 }};
							};
							class VALM_1_0
							{
								type = "text";
								source = "static";
								text = 0;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0",{ -0.23,-0.025 },1};
								right[] = {"Level0",{ -0.13,-0.025 },1};
								down[] = {"Level0",{ -0.23,0.025 },1};
							};
							class VALM_2_0: VALM_1_0
							{
								align = "right";
								pos[] = {"Level0",{ 0.22,-0.025 },1};
								right[] = {"Level0",{ 0.32,-0.025 },1};
								down[] = {"Level0",{ 0.22,0.025 },1};
							};
							class LevelM5: Level0
							{
								type = "line";
								points[] = {{ "LevelM5",{ -0.2,-0.03 },1 },{ "LevelM5",{ -0.2,0 },1 },{ "LevelM5",{ -0.15,0 },1 },{  },{ "LevelM5",{ -0.1,0 },1 },{ "LevelM5",{ -0.05,0 },1 },{  },{ "LevelM5",{ 0.05,0 },1 },{ "LevelM5",{ 0.1,0 },1 },{  },{ "LevelM5",{ 0.15,0 },1 },{ "LevelM5",{ 0.2,0 },1 },{ "LevelM5",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_5
							{
								type = "text";
								source = "static";
								text = -5;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM5",{ -0.23,-0.085 },1};
								right[] = {"LevelM5",{ -0.13,-0.085 },1};
								down[] = {"LevelM5",{ -0.23,-0.035 },1};
							};
							class VALM_2_5: VALM_1_5
							{
								align = "right";
								pos[] = {"LevelM5",{ 0.22,-0.085 },1};
								right[] = {"LevelM5",{ 0.32,-0.085 },1};
								down[] = {"LevelM5",{ 0.22,-0.035 },1};
							};
							class LevelP5: Level0
							{
								type = "line";
								points[] = {{ "LevelP5",{ -0.2,0.03 },1 },{ "LevelP5",{ -0.2,0 },1 },{ "LevelP5",{ -0.05,0 },1 },{  },{ "LevelP5",{ 0.05,0 },1 },{ "LevelP5",{ 0.2,0 },1 },{ "LevelP5",{ 0.2,0.03 },1 }};
							};
							class VALP_1_5
							{
								type = "text";
								source = "static";
								text = "5";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP5",{ -0.23,0.035 },1};
								right[] = {"LevelP5",{ -0.13,0.035 },1};
								down[] = {"LevelP5",{ -0.23,0.085 },1};
							};
							class VALP_2_5: VALP_1_5
							{
								align = "right";
								pos[] = {"LevelP5",{ 0.22,0.035 },1};
								right[] = {"LevelP5",{ 0.32,0.035 },1};
								down[] = {"LevelP5",{ 0.22,0.085 },1};
							};
							class LevelM10: Level0
							{
								type = "line";
								points[] = {{ "LevelM10",{ -0.2,-0.03 },1 },{ "LevelM10",{ -0.2,0 },1 },{ "LevelM10",{ -0.15,0 },1 },{  },{ "LevelM10",{ -0.1,0 },1 },{ "LevelM10",{ -0.05,0 },1 },{  },{ "LevelM10",{ 0.05,0 },1 },{ "LevelM10",{ 0.1,0 },1 },{  },{ "LevelM10",{ 0.15,0 },1 },{ "LevelM10",{ 0.2,0 },1 },{ "LevelM10",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_10
							{
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10",{ -0.23,-0.085 },1};
								right[] = {"LevelM10",{ -0.13,-0.085 },1};
								down[] = {"LevelM10",{ -0.23,-0.035 },1};
							};
							class VALM_2_10: VALM_1_10
							{
								align = "right";
								pos[] = {"LevelM10",{ 0.22,-0.085 },1};
								right[] = {"LevelM10",{ 0.32,-0.085 },1};
								down[] = {"LevelM10",{ 0.22,-0.035 },1};
							};
							class LevelP10: Level0
							{
								type = "line";
								points[] = {{ "LevelP10",{ -0.2,0.03 },1 },{ "LevelP10",{ -0.2,0 },1 },{ "LevelP10",{ -0.05,0 },1 },{  },{ "LevelP10",{ 0.05,0 },1 },{ "LevelP10",{ 0.2,0 },1 },{ "LevelP10",{ 0.2,0.03 },1 }};
							};
							class VALP_1_10
							{
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10",{ -0.23,0.035 },1};
								right[] = {"LevelP10",{ -0.13,0.035 },1};
								down[] = {"LevelP10",{ -0.23,0.085 },1};
							};
							class VALP_2_10: VALP_1_10
							{
								align = "right";
								pos[] = {"LevelP10",{ 0.22,0.035 },1};
								right[] = {"LevelP10",{ 0.32,0.035 },1};
								down[] = {"LevelP10",{ 0.22,0.085 },1};
							};
							class LevelM15: Level0
							{
								type = "line";
								points[] = {{ "LevelM15",{ -0.2,-0.03 },1 },{ "LevelM15",{ -0.2,0 },1 },{ "LevelM15",{ -0.15,0 },1 },{  },{ "LevelM15",{ -0.1,0 },1 },{ "LevelM15",{ -0.05,0 },1 },{  },{ "LevelM15",{ 0.05,0 },1 },{ "LevelM15",{ 0.1,0 },1 },{  },{ "LevelM15",{ 0.15,0 },1 },{ "LevelM15",{ 0.2,0 },1 },{ "LevelM15",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_15
							{
								type = "text";
								source = "static";
								text = -15;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM15",{ -0.23,-0.085 },1};
								right[] = {"LevelM15",{ -0.13,-0.085 },1};
								down[] = {"LevelM15",{ -0.23,-0.035 },1};
							};
							class VALM_2_15: VALM_1_15
							{
								align = "right";
								pos[] = {"LevelM15",{ 0.22,-0.085 },1};
								right[] = {"LevelM15",{ 0.32,-0.085 },1};
								down[] = {"LevelM15",{ 0.22,-0.035 },1};
							};
							class LevelP15: Level0
							{
								type = "line";
								points[] = {{ "LevelP15",{ -0.2,0.03 },1 },{ "LevelP15",{ -0.2,0 },1 },{ "LevelP15",{ -0.05,0 },1 },{  },{ "LevelP15",{ 0.05,0 },1 },{ "LevelP15",{ 0.2,0 },1 },{ "LevelP15",{ 0.2,0.03 },1 }};
							};
							class VALP_1_15
							{
								type = "text";
								source = "static";
								text = "15";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP15",{ -0.23,0.035 },1};
								right[] = {"LevelP15",{ -0.13,0.035 },1};
								down[] = {"LevelP15",{ -0.23,0.085 },1};
							};
							class VALP_2_15: VALP_1_15
							{
								align = "right";
								pos[] = {"LevelP15",{ 0.22,0.035 },1};
								right[] = {"LevelP15",{ 0.32,0.035 },1};
								down[] = {"LevelP15",{ 0.22,0.085 },1};
							};
							class LevelM20: Level0
							{
								type = "line";
								points[] = {{ "LevelM20",{ -0.2,-0.03 },1 },{ "LevelM20",{ -0.2,0 },1 },{ "LevelM20",{ -0.15,0 },1 },{  },{ "LevelM20",{ -0.1,0 },1 },{ "LevelM20",{ -0.05,0 },1 },{  },{ "LevelM20",{ 0.05,0 },1 },{ "LevelM20",{ 0.1,0 },1 },{  },{ "LevelM20",{ 0.15,0 },1 },{ "LevelM20",{ 0.2,0 },1 },{ "LevelM20",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_20
							{
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20",{ -0.23,-0.085 },1};
								right[] = {"LevelM20",{ -0.13,-0.085 },1};
								down[] = {"LevelM20",{ -0.23,-0.035 },1};
							};
							class VALM_2_20: VALM_1_20
							{
								align = "right";
								pos[] = {"LevelM20",{ 0.22,-0.085 },1};
								right[] = {"LevelM20",{ 0.32,-0.085 },1};
								down[] = {"LevelM20",{ 0.22,-0.035 },1};
							};
							class LevelP20: Level0
							{
								type = "line";
								points[] = {{ "LevelP20",{ -0.2,0.03 },1 },{ "LevelP20",{ -0.2,0 },1 },{ "LevelP20",{ -0.05,0 },1 },{  },{ "LevelP20",{ 0.05,0 },1 },{ "LevelP20",{ 0.2,0 },1 },{ "LevelP20",{ 0.2,0.03 },1 }};
							};
							class VALP_1_20
							{
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20",{ -0.23,0.035 },1};
								right[] = {"LevelP20",{ -0.13,0.035 },1};
								down[] = {"LevelP20",{ -0.23,0.085 },1};
							};
							class VALP_2_20: VALP_1_20
							{
								align = "right";
								pos[] = {"LevelP20",{ 0.22,0.035 },1};
								right[] = {"LevelP20",{ 0.32,0.035 },1};
								down[] = {"LevelP20",{ 0.22,0.085 },1};
							};
							class LevelM25: Level0
							{
								type = "line";
								points[] = {{ "LevelM25",{ -0.2,-0.03 },1 },{ "LevelM25",{ -0.2,0 },1 },{ "LevelM25",{ -0.15,0 },1 },{  },{ "LevelM25",{ -0.1,0 },1 },{ "LevelM25",{ -0.05,0 },1 },{  },{ "LevelM25",{ 0.05,0 },1 },{ "LevelM25",{ 0.1,0 },1 },{  },{ "LevelM25",{ 0.15,0 },1 },{ "LevelM25",{ 0.2,0 },1 },{ "LevelM25",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_25
							{
								type = "text";
								source = "static";
								text = -25;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM25",{ -0.23,-0.085 },1};
								right[] = {"LevelM25",{ -0.13,-0.085 },1};
								down[] = {"LevelM25",{ -0.23,-0.035 },1};
							};
							class VALM_2_25: VALM_1_25
							{
								align = "right";
								pos[] = {"LevelM25",{ 0.22,-0.085 },1};
								right[] = {"LevelM25",{ 0.32,-0.085 },1};
								down[] = {"LevelM25",{ 0.22,-0.035 },1};
							};
							class LevelP25: Level0
							{
								type = "line";
								points[] = {{ "LevelP25",{ -0.2,0.03 },1 },{ "LevelP25",{ -0.2,0 },1 },{ "LevelP25",{ -0.05,0 },1 },{  },{ "LevelP25",{ 0.05,0 },1 },{ "LevelP25",{ 0.2,0 },1 },{ "LevelP25",{ 0.2,0.03 },1 }};
							};
							class VALP_1_25
							{
								type = "text";
								source = "static";
								text = "25";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP25",{ -0.23,0.035 },1};
								right[] = {"LevelP25",{ -0.13,0.035 },1};
								down[] = {"LevelP25",{ -0.23,0.085 },1};
							};
							class VALP_2_25: VALP_1_25
							{
								align = "right";
								pos[] = {"LevelP25",{ 0.22,0.035 },1};
								right[] = {"LevelP25",{ 0.32,0.035 },1};
								down[] = {"LevelP25",{ 0.22,0.085 },1};
							};
							class LevelM30: Level0
							{
								type = "line";
								points[] = {{ "LevelM30",{ -0.2,-0.03 },1 },{ "LevelM30",{ -0.2,0 },1 },{ "LevelM30",{ -0.15,0 },1 },{  },{ "LevelM30",{ -0.1,0 },1 },{ "LevelM30",{ -0.05,0 },1 },{  },{ "LevelM30",{ 0.05,0 },1 },{ "LevelM30",{ 0.1,0 },1 },{  },{ "LevelM30",{ 0.15,0 },1 },{ "LevelM30",{ 0.2,0 },1 },{ "LevelM30",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_30
							{
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30",{ -0.23,-0.085 },1};
								right[] = {"LevelM30",{ -0.13,-0.085 },1};
								down[] = {"LevelM30",{ -0.23,-0.035 },1};
							};
							class VALM_2_30: VALM_1_30
							{
								align = "right";
								pos[] = {"LevelM30",{ 0.22,-0.085 },1};
								right[] = {"LevelM30",{ 0.32,-0.085 },1};
								down[] = {"LevelM30",{ 0.22,-0.035 },1};
							};
							class LevelP30: Level0
							{
								type = "line";
								points[] = {{ "LevelP30",{ -0.2,0.03 },1 },{ "LevelP30",{ -0.2,0 },1 },{ "LevelP30",{ -0.05,0 },1 },{  },{ "LevelP30",{ 0.05,0 },1 },{ "LevelP30",{ 0.2,0 },1 },{ "LevelP30",{ 0.2,0.03 },1 }};
							};
							class VALP_1_30
							{
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30",{ -0.23,0.035 },1};
								right[] = {"LevelP30",{ -0.13,0.035 },1};
								down[] = {"LevelP30",{ -0.23,0.085 },1};
							};
							class VALP_2_30: VALP_1_30
							{
								align = "right";
								pos[] = {"LevelP30",{ 0.22,0.035 },1};
								right[] = {"LevelP30",{ 0.32,0.035 },1};
								down[] = {"LevelP30",{ 0.22,0.085 },1};
							};
							class LevelM35: Level0
							{
								type = "line";
								points[] = {{ "LevelM35",{ -0.2,-0.03 },1 },{ "LevelM35",{ -0.2,0 },1 },{ "LevelM35",{ -0.15,0 },1 },{  },{ "LevelM35",{ -0.1,0 },1 },{ "LevelM35",{ -0.05,0 },1 },{  },{ "LevelM35",{ 0.05,0 },1 },{ "LevelM35",{ 0.1,0 },1 },{  },{ "LevelM35",{ 0.15,0 },1 },{ "LevelM35",{ 0.2,0 },1 },{ "LevelM35",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_35
							{
								type = "text";
								source = "static";
								text = -35;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM35",{ -0.23,-0.085 },1};
								right[] = {"LevelM35",{ -0.13,-0.085 },1};
								down[] = {"LevelM35",{ -0.23,-0.035 },1};
							};
							class VALM_2_35: VALM_1_35
							{
								align = "right";
								pos[] = {"LevelM35",{ 0.22,-0.085 },1};
								right[] = {"LevelM35",{ 0.32,-0.085 },1};
								down[] = {"LevelM35",{ 0.22,-0.035 },1};
							};
							class LevelP35: Level0
							{
								type = "line";
								points[] = {{ "LevelP35",{ -0.2,0.03 },1 },{ "LevelP35",{ -0.2,0 },1 },{ "LevelP35",{ -0.05,0 },1 },{  },{ "LevelP35",{ 0.05,0 },1 },{ "LevelP35",{ 0.2,0 },1 },{ "LevelP35",{ 0.2,0.03 },1 }};
							};
							class VALP_1_35
							{
								type = "text";
								source = "static";
								text = "35";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP35",{ -0.23,0.035 },1};
								right[] = {"LevelP35",{ -0.13,0.035 },1};
								down[] = {"LevelP35",{ -0.23,0.085 },1};
							};
							class VALP_2_35: VALP_1_35
							{
								align = "right";
								pos[] = {"LevelP35",{ 0.22,0.035 },1};
								right[] = {"LevelP35",{ 0.32,0.035 },1};
								down[] = {"LevelP35",{ 0.22,0.085 },1};
							};
							class LevelM40: Level0
							{
								type = "line";
								points[] = {{ "LevelM40",{ -0.2,-0.03 },1 },{ "LevelM40",{ -0.2,0 },1 },{ "LevelM40",{ -0.15,0 },1 },{  },{ "LevelM40",{ -0.1,0 },1 },{ "LevelM40",{ -0.05,0 },1 },{  },{ "LevelM40",{ 0.05,0 },1 },{ "LevelM40",{ 0.1,0 },1 },{  },{ "LevelM40",{ 0.15,0 },1 },{ "LevelM40",{ 0.2,0 },1 },{ "LevelM40",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40",{ -0.23,-0.085 },1};
								right[] = {"LevelM40",{ -0.13,-0.085 },1};
								down[] = {"LevelM40",{ -0.23,-0.035 },1};
							};
							class VALM_2_40: VALM_1_40
							{
								align = "right";
								pos[] = {"LevelM40",{ 0.22,-0.085 },1};
								right[] = {"LevelM40",{ 0.32,-0.085 },1};
								down[] = {"LevelM40",{ 0.22,-0.035 },1};
							};
							class LevelP40: Level0
							{
								type = "line";
								points[] = {{ "LevelP40",{ -0.2,0.03 },1 },{ "LevelP40",{ -0.2,0 },1 },{ "LevelP40",{ -0.05,0 },1 },{  },{ "LevelP40",{ 0.05,0 },1 },{ "LevelP40",{ 0.2,0 },1 },{ "LevelP40",{ 0.2,0.03 },1 }};
							};
							class VALP_1_40
							{
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40",{ -0.23,0.035 },1};
								right[] = {"LevelP40",{ -0.13,0.035 },1};
								down[] = {"LevelP40",{ -0.23,0.085 },1};
							};
							class VALP_2_40: VALP_1_40
							{
								align = "right";
								pos[] = {"LevelP40",{ 0.22,0.035 },1};
								right[] = {"LevelP40",{ 0.32,0.035 },1};
								down[] = {"LevelP40",{ 0.22,0.085 },1};
							};
							class LevelM45: Level0
							{
								type = "line";
								points[] = {{ "LevelM45",{ -0.2,-0.03 },1 },{ "LevelM45",{ -0.2,0 },1 },{ "LevelM45",{ -0.15,0 },1 },{  },{ "LevelM45",{ -0.1,0 },1 },{ "LevelM45",{ -0.05,0 },1 },{  },{ "LevelM45",{ 0.05,0 },1 },{ "LevelM45",{ 0.1,0 },1 },{  },{ "LevelM45",{ 0.15,0 },1 },{ "LevelM45",{ 0.2,0 },1 },{ "LevelM45",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_45
							{
								type = "text";
								source = "static";
								text = -45;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM45",{ -0.23,-0.085 },1};
								right[] = {"LevelM45",{ -0.13,-0.085 },1};
								down[] = {"LevelM45",{ -0.23,-0.035 },1};
							};
							class VALM_2_45: VALM_1_45
							{
								align = "right";
								pos[] = {"LevelM45",{ 0.22,-0.085 },1};
								right[] = {"LevelM45",{ 0.32,-0.085 },1};
								down[] = {"LevelM45",{ 0.22,-0.035 },1};
							};
							class LevelP45: Level0
							{
								type = "line";
								points[] = {{ "LevelP45",{ -0.2,0.03 },1 },{ "LevelP45",{ -0.2,0 },1 },{ "LevelP45",{ -0.05,0 },1 },{  },{ "LevelP45",{ 0.05,0 },1 },{ "LevelP45",{ 0.2,0 },1 },{ "LevelP45",{ 0.2,0.03 },1 }};
							};
							class VALP_1_45
							{
								type = "text";
								source = "static";
								text = "45";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP45",{ -0.23,0.035 },1};
								right[] = {"LevelP45",{ -0.13,0.035 },1};
								down[] = {"LevelP45",{ -0.23,0.085 },1};
							};
							class VALP_2_45: VALP_1_45
							{
								align = "right";
								pos[] = {"LevelP45",{ 0.22,0.035 },1};
								right[] = {"LevelP45",{ 0.32,0.035 },1};
								down[] = {"LevelP45",{ 0.22,0.085 },1};
							};
							class LevelM50: Level0
							{
								type = "line";
								points[] = {{ "LevelM50",{ -0.2,-0.03 },1 },{ "LevelM50",{ -0.2,0 },1 },{ "LevelM50",{ -0.15,0 },1 },{  },{ "LevelM50",{ -0.1,0 },1 },{ "LevelM50",{ -0.05,0 },1 },{  },{ "LevelM50",{ 0.05,0 },1 },{ "LevelM50",{ 0.1,0 },1 },{  },{ "LevelM50",{ 0.15,0 },1 },{ "LevelM50",{ 0.2,0 },1 },{ "LevelM50",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_50
							{
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50",{ -0.23,-0.085 },1};
								right[] = {"LevelM50",{ -0.13,-0.085 },1};
								down[] = {"LevelM50",{ -0.23,-0.035 },1};
							};
							class VALM_2_50: VALM_1_50
							{
								align = "right";
								pos[] = {"LevelM50",{ 0.22,-0.085 },1};
								right[] = {"LevelM50",{ 0.32,-0.085 },1};
								down[] = {"LevelM50",{ 0.22,-0.035 },1};
							};
							class LevelP50: Level0
							{
								type = "line";
								points[] = {{ "LevelP50",{ -0.2,0.03 },1 },{ "LevelP50",{ -0.2,0 },1 },{ "LevelP50",{ -0.05,0 },1 },{  },{ "LevelP50",{ 0.05,0 },1 },{ "LevelP50",{ 0.2,0 },1 },{ "LevelP50",{ 0.2,0.03 },1 }};
							};
							class VALP_1_50
							{
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50",{ -0.23,0.035 },1};
								right[] = {"LevelP50",{ -0.13,0.035 },1};
								down[] = {"LevelP50",{ -0.23,0.085 },1};
							};
							class VALP_2_50: VALP_1_50
							{
								align = "right";
								pos[] = {"LevelP50",{ 0.22,0.035 },1};
								right[] = {"LevelP50",{ 0.32,0.035 },1};
								down[] = {"LevelP50",{ 0.22,0.085 },1};
							};
						};
					};
					class RadarTargets
					{
						type = "radar";
						pos0[] = {0.51,0.305};
						pos10[] = {1.31,1.185};
						points[] = {{ { -0.05,-0.055 },1 },{ { 0.05,-0.055 },1 },{ { 0.05,0.055 },1 },{ { -0.05,0.055 },1 },{ { -0.05,-0.055 },1 }};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0.01,0 },1 },{ "WeaponAim",{ -0.01,0 },1 },{  },{ "WeaponAim",{ 0,0.011 },1 },{ "WeaponAim",{ 0,-0.011 },1 },{  },{ "WeaponAim",{ 0,-0.077 },1 },{ "WeaponAim",{ 0.049,-0.0539 },1 },{ "WeaponAim",{ 0.07,0 },1 },{ "WeaponAim",{ 0.049,0.0539 },1 },{ "WeaponAim",{ 0,0.077 },1 },{ "WeaponAim",{ -0.049,0.0539 },1 },{ "WeaponAim",{ -0.07,0 },1 },{ "WeaponAim",{ -0.049,-0.0539 },1 },{ "WeaponAim",{ 0,-0.077 },1 },{  },{ "WeaponAim",{ 0,-0.154 },1 },{ "WeaponAim",{ 0.07,-0.13398 },1 },{ "WeaponAim",{ 0.1218,-0.077 },1 },{ "WeaponAim",{ 0.14,0 },1 },{ "WeaponAim",{ 0.1218,0.077 },1 },{ "WeaponAim",{ 0.07,0.13398 },1 },{ "WeaponAim",{ 0,0.154 },1 },{ "WeaponAim",{ -0.07,0.13398 },1 },{ "WeaponAim",{ -0.1218,0.077 },1 },{ "WeaponAim",{ -0.14,0 },1 },{ "WeaponAim",{ -0.1218,-0.077 },1 },{ "WeaponAim",{ -0.07,-0.13398 },1 },{ "WeaponAim",{ 0,-0.154 },1 },{  },{ "WeaponAim",{ 0,-0.154 },1 },{ "WeaponAim",{ 0,-0.176 },1 },{  },{ "WeaponAim",{ -0.07,-0.133368 },1 },{ "WeaponAim",{ -0.08,-0.15242 },1 },{  },{ "WeaponAim",{ -0.121244,-0.077 },1 },{ "WeaponAim",{ -0.138564,-0.088 },1 },{  },{ "WeaponAim",{ -0.14,6.73155e-009 },1 },{ "WeaponAim",{ -0.16,7.6932e-009 },1 },{  },{ "WeaponAim",{ -0.121244,0.077 },1 },{ "WeaponAim",{ -0.138564,0.088 },1 },{  },{ "WeaponAim",{ -0.07,0.133368 },1 },{ "WeaponAim",{ -0.08,0.15242 },1 },{  },{ "WeaponAim",{ 1.22392e-008,0.154 },1 },{ "WeaponAim",{ 1.39876e-008,0.176 },1 },{  },{ "WeaponAim",{ 0.07,0.133368 },1 },{ "WeaponAim",{ 0.08,0.15242 },1 },{  },{ "WeaponAim",{ 0.121244,0.077 },1 },{ "WeaponAim",{ 0.138564,0.088 },1 },{  },{ "WeaponAim",{ 0.14,-1.83643e-009 },1 },{ "WeaponAim",{ 0.16,-2.09878e-009 },1 },{  },{ "WeaponAim",{ 0.121244,-0.077 },1 },{ "WeaponAim",{ 0.138564,-0.088 },1 },{  },{ "WeaponAim",{ 0.07,-0.133368 },1 },{ "WeaponAim",{ 0.08,-0.15242 },1 },{  }};
						};
					};
					class Bomb
					{
						condition = "bomb";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0,-0.11 },1 },{ "WeaponAim",{ 0.05,-0.0957 },1 },{ "WeaponAim",{ 0.087,-0.055 },1 },{ "WeaponAim",{ 0.1,0 },1 },{ "WeaponAim",{ 0.087,0.055 },1 },{ "WeaponAim",{ 0.05,0.0957 },1 },{ "WeaponAim",{ 0,0.11 },1 },{ "WeaponAim",{ -0.05,0.0957 },1 },{ "WeaponAim",{ -0.087,0.055 },1 },{ "WeaponAim",{ -0.1,0 },1 },{ "WeaponAim",{ -0.087,-0.055 },1 },{ "WeaponAim",{ -0.05,-0.0957 },1 },{ "WeaponAim",{ 0,-0.11 },1 },{  },{ "Velocity",0.001,"WeaponAim",{ 0.0,0.0 },1 },{ "Velocity",{ 0.0,0.0 },1 },{  },{ "Target",{ 0,-0.077 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.077 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.077 },1 }};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0,-0.275 },1 },{ "WeaponAim",{ 0.125,-0.23925 },1 },{ "WeaponAim",{ 0.2175,-0.1375 },1 },{ "WeaponAim",{ 0.25,0 },1 },{ "WeaponAim",{ 0.2175,0.1375 },1 },{ "WeaponAim",{ 0.125,0.23925 },1 },{ "WeaponAim",{ 0,0.275 },1 },{ "WeaponAim",{ -0.125,0.23925 },1 },{ "WeaponAim",{ -0.2175,0.1375 },1 },{ "WeaponAim",{ -0.25,0 },1 },{ "WeaponAim",{ -0.2175,-0.1375 },1 },{ "WeaponAim",{ -0.125,-0.23925 },1 },{ "WeaponAim",{ 0,-0.275 },1 },{  },{ "Target",{ 0,-0.077 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.077 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.077 },1 }};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0,-0.198 },1 },{ "WeaponAim",{ 0.09,-0.17226 },1 },{ "WeaponAim",{ 0.1566,-0.099 },1 },{ "WeaponAim",{ 0.18,0 },1 },{ "WeaponAim",{ 0.1566,0.099 },1 },{ "WeaponAim",{ 0.09,0.17226 },1 },{ "WeaponAim",{ 0,0.198 },1 },{ "WeaponAim",{ -0.09,0.17226 },1 },{ "WeaponAim",{ -0.1566,0.099 },1 },{ "WeaponAim",{ -0.18,0 },1 },{ "WeaponAim",{ -0.1566,-0.099 },1 },{ "WeaponAim",{ -0.09,-0.17226 },1 },{ "WeaponAim",{ 0,-0.198 },1 },{  },{ "Target",{ 0,-0.077 },1 },{ "Target",{ 0.07,0 },1 },{ "Target",{ 0,0.077 },1 },{ "Target",{ -0.07,0 },1 },{ "Target",{ 0,-0.077 },1 }};
						};
					};
					class Rockets
					{
						condition = "Rocket";
						class Circle
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0.01,0 },1 },{ "WeaponAim",{ -0.01,0 },1 },{  },{ "WeaponAim",{ 0,0.011 },1 },{ "WeaponAim",{ 0,-0.011 },1 },{  },{ "WeaponAim",{ 0,-0.132 },1 },{ "WeaponAim",{ 0.06,-0.11484 },1 },{ "WeaponAim",{ 0.1044,-0.066 },1 },{ "WeaponAim",{ 0.12,0 },1 },{ "WeaponAim",{ 0.1044,0.066 },1 },{ "WeaponAim",{ 0.06,0.11484 },1 },{ "WeaponAim",{ 0,0.132 },1 },{ "WeaponAim",{ -0.06,0.11484 },1 },{ "WeaponAim",{ -0.1044,0.066 },1 },{ "WeaponAim",{ -0.12,0 },1 },{ "WeaponAim",{ -0.1044,-0.066 },1 },{ "WeaponAim",{ -0.06,-0.11484 },1 },{ "WeaponAim",{ 0,-0.132 },1 },{  }};
						};
					};
					class AltScale
					{
						type = "scale";
						scale = 1;
						source = "altitudeASL";
						sourceScale = 1;
						align = "right";
						pos[] = {0.86,0.82};
						right[] = {0.94,0.82};
						down[] = {0.86,0.87};
						lineXleft = 0.825;
						lineYright = 0.835;
						lineXleftMajor = 0.825;
						lineYrightMajor = 0.845;
						bottom = 0.2;
						top = 0.85;
						center = 0.5;
						step = 20;
						StepSize = 0.0325;
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class SpeedScale
					{
						type = "scale";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						align = "right";
						pos[] = {0.06,0.17};
						right[] = {0.14,0.17};
						down[] = {0.06,0.22};
						lineXleft = 0.175;
						lineYright = 0.165;
						lineXleftMajor = 0.175;
						lineYrightMajor = 0.155;
						bottom = 0.85;
						center = 0.5;
						top = 0.2;
						step = 20;
						StepSize = 0.0325;
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class Gear
					{
						condition = "ils";
						class text
						{
							type = "text";
							source = "static";
							text = "GEAR";
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{ 0.84,0.88 },1};
							right[] = {{ 0.9,0.88 },1};
							down[] = {{ 0.84,0.92 },1};
						};
					};
					class Flaps
					{
						condition = "flaps";
						class text
						{
							type = "text";
							source = "static";
							text = "FLAPS";
							align = "right";
							scale = 0.5;
							sourceScale = 1;
							pos[] = {{ 0.84,0.93 },1};
							right[] = {{ 0.9,0.93 },1};
							down[] = {{ 0.84,0.97 },1};
						};
					};
					class weapons
					{
						type = "text";
						source = "weapon";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.88 },1};
						right[] = {{ 0.16,0.88 },1};
						down[] = {{ 0.1,0.92 },1};
					};
					class ammo
					{
						type = "text";
						source = "ammo";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.93 },1};
						right[] = {{ 0.16,0.93 },1};
						down[] = {{ 0.1,0.97 },1};
					};
					class VspeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "vspeed";
						sourceScale = 1;
						pos[] = {{ 0.86,0.12 },1};
						right[] = {{ 0.94,0.12 },1};
						down[] = {{ 0.86,0.17 },1};
					};
					class HeadingScale
					{
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						pos[] = {0.2,0.0};
						right[] = {0.28,0.0};
						down[] = {0.2,0.05};
						lineXleft = 0.06;
						lineYright = 0.05;
						lineXleftMajor = 0.06;
						lineYrightMajor = 0.04;
						bottom = 0.8;
						center = 0.5;
						top = 0.2;
						step = 2;
						StepSize = 0.03;
						horizontal = 1;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class ILS
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = {0.0,0.0};
							clipBR[] = {1.0,1.0};
							class ILS
							{
								type = "line";
								points[] = {{ "ILS_W",{ -0.24,0 },1 },{ "ILS_W",{ 0.24,0 },1 },{  },{ "ILS_W",{ 0,0.0264 },1 },{ "ILS_W",{ 0,-0.0264 },1 },{  },{ "ILS_W",{ 0.12,0.0264 },1 },{ "ILS_W",{ 0.12,-0.0264 },1 },{  },{ "ILS_W",{ 0.24,0.0264 },1 },{ "ILS_W",{ 0.24,-0.0264 },1 },{  },{ "ILS_W",{ -0.12,0.0264 },1 },{ "ILS_W",{ -0.12,-0.0264 },1 },{  },{ "ILS_W",{ -0.24,0.0264 },1 },{ "ILS_W",{ -0.24,-0.0264 },1 },{  },{ "ILS_H",{ 0,-0.264 },1 },{ "ILS_H",{ 0,0.264 },1 },{  },{ "ILS_H",{ 0.024,0 },1 },{ "ILS_H",{ -0.024,0 },1 },{  },{ "ILS_H",{ 0.024,0.132 },1 },{ "ILS_H",{ -0.024,0.132 },1 },{  },{ "ILS_H",{ 0.024,0.264 },1 },{ "ILS_H",{ -0.024,0.264 },1 },{  },{ "ILS_H",{ 0.024,-0.132 },1 },{ "ILS_H",{ -0.024,-0.132 },1 },{  },{ "ILS_H",{ 0.024,-0.264 },1 },{ "ILS_H",{ -0.024,-0.264 },1 }};
							};
						};
					};
				};
			};
		};
	};
	class A10_base: A10
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {"Soldier"};
	};
	class A10_US_EP1: A10_base
	{
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_Pilot_EP1";
		typicalCargo[] = {"US_Soldier_Pilot_EP1","US_Soldier_Pilot_EP1"};
	};
	class C130J: Plane
	{
		radarType = 4;
		LockDetectionSystem = 8;
		IncommingMisslieDetectionSystem = 16;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};
		class MFD
		{
			class AirplaneHUD
			{
				enableParallax = 1;
			};
		};
		irScanRangeMin = 500;
		irScanRangeMax = 2000;
		irScanToEyeFactor = 2;
	};
	class C130J_base: C130J
	{
		scope = 0;
		side = 4;
		expansion = 1;
		crew = "Civilian";
		typicalCargo[] = {"Soldier"};
	};
	class C130J_US_EP1: C130J_base
	{
		scope = 2;
		side = 1;
		expansion = 1;
		faction = "BIS_US";
		crew = "US_Soldier_Pilot_EP1";
		typicalCargo[] = {"US_Soldier_Pilot_EP1","US_Soldier_Pilot_EP1"};
		threat[] = {0,0,0};
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag
			{
				magazine = "30Rnd_556x45_Stanag";
				count = 30;
			};
			class _xx_HandGrenade_West
			{
				magazine = "HandGrenade_West";
				count = 5;
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
	};
	class Parachute_US_EP1: ParachuteBase
	{
		scope = 2;
		side = 1;
		expansion = 1;
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
		accuracy = 0.5;
		castDriverShadow = 1;
		Icon = "\ca\air\data\map_ico\icomap_Para_CA.paa";
		mapSize = 5;
	};
	class Parachute_TK_EP1: ParachuteBase
	{
		scope = 2;
		expansion = 1;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_EP1";
		typicalCargo[] = {"TK_Soldier_EP1"};
		accuracy = 0.5;
		castDriverShadow = 1;
		Icon = "\ca\air\data\map_ico\icomap_Para_CA.paa";
		mapSize = 5;
	};
	class Parachute_TK_GUE_EP1: ParachuteBase
	{
		scope = 2;
		expansion = 1;
		side = 2;
		faction = "BIS_TK_GUE";
		crew = "TK_GUE_Soldier_EP1";
		typicalCargo[] = {"TK_GUE_Soldier_EP1"};
		accuracy = 0.5;
		castDriverShadow = 1;
		Icon = "\ca\air\data\map_ico\icomap_Para_CA.paa";
		mapSize = 5;
	};
	class ParachuteBigBase;
	class ParachuteBigWest_EP1: ParachuteBigBase
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_Engineer_EP1";
		typicalCargo[] = {"US_Soldier_Engineer_EP1"};
	};
	class ParachuteBigEast_EP1: ParachuteBigBase
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Engineer_EP1";
		typicalCargo[] = {"TK_Soldier_Engineer_EP1"};
	};
	class ParachuteMediumBase;
	class ParachuteMediumWest_EP1: ParachuteMediumBase
	{
		expansion = 1;
		scope = 2;
		side = 1;
		faction = "BIS_US";
		crew = "US_Soldier_Engineer_EP1";
		typicalCargo[] = {"US_Soldier_Engineer_EP1"};
	};
	class ParachuteMediumEast_EP1: ParachuteMediumBase
	{
		expansion = 1;
		scope = 2;
		side = 0;
		faction = "BIS_TK";
		crew = "TK_Soldier_Engineer_EP1";
		typicalCargo[] = {"TK_Soldier_Engineer_EP1"};
	};
	class UAV: Plane
	{
		class NewTurret;
	};
	class MQ9PredatorB: UAV
	{
		threat[] = {0.3,0.8,0};
		radarType = 4;
		class Viewoptics
		{
			initFov = 0.85;
			minFov = 0.95;
			maxFov = 0.35;
			initAngleX = 0;
			minAngleX = 0;
			maxAngleX = 0;
			initAngleY = 0;
			minAngleY = 0;
			maxAngleY = 0;
			visionMode[] = {"Normal","Ti"};
			thermalMode[] = {0,1};
		};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				minElev = -90;
				maxElev = 90;
				initElev = -45;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				turretInfoType = "RscUnitInfoUAV_gunner";
				class Viewoptics
				{
					initFov = 0.2;
					minFov = 0.0104;
					maxFov = 0.2;
					initAngleX = 0;
					minAngleX = 30;
					maxAngleX = -30;
					initAngleY = 0;
					minAngleY = -180;
					maxAngleY = 180;
					visionMode[] = {"Normal","Ti"};
					thermalMode[] = {0,1};
					directionStabilized = 1;
					horizontallyStabilized = 1;
				};
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -85;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.42;
					maxFov = 0.85;
					directionStabilized = 1;
					horizontallyStabilized = 1;
				};
			};
		};
	};
	class MQ9PredatorB_US_EP1: MQ9PredatorB
	{
		scope = 2;
		side = 1;
		expansion = 1;
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
		class Library
		{
			libTextDesc = "$STR_EP1_LIB_MQ9PredatorB";
		};
	};
	class Kamov_Base: Helicopter{};
	class Ka52: Kamov_Base
	{
		radarType = 4;
		LockDetectionSystem = 8;
		IncommingMisslieDetectionSystem = 16;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};
		memoryPointCMDir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
		memoryPointCM[] = {"flare_launcher1","flare_launcher2"};
		class MFD
		{
			class AirplaneHUD
			{
				enableParallax = 1;
			};
		};
	};
	class AH1_Base: Helicopter{};
	class AH1Z: AH1_Base
	{
		radarType = 4;
		LockDetectionSystem = 8;
		IncommingMisslieDetectionSystem = 16;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlareMagazine"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				turretInfoType = "RscUnitInfo_AH64D_gunner";
				discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 2;
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						visionMode[] = {"Normal","NVG","Ti"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64";
					};
					class Medium: Wide
					{
						opticsDisplayName = "M";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64_2";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "N";
						gunnerOpticsModel = "\ca\air_e\gunnerOptics_ah64_3";
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 1.1;
						minFov = 0.133;
						maxFov = 1.1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
	};
	class Su34: Plane
	{
		radarType = 4;
		LockDetectionSystem = 8;
		IncommingMisslieDetectionSystem = 16;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"120Rnd_CMFlare_Chaff_Magazine"};
		class MFD
		{
			class HUD
			{
				enableParallax = 1;
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.51,0.031};
					pos10[] = {1.285,0.641};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0.1};
				class Bones
				{
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.331};
						pos3[] = {0.7325,"(0.331)"};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.514};
					};
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.5,0.331};
					};
					class HorizonBankMGun
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = {0,0};
						min = -6.28319;
						max = 6.28319;
						minAngle = -360;
						maxAngle = 360;
						aspectRatio = 0.787097;
					};
					class HorizonBankReverted
					{
						type = "rotational";
						source = "HorizonBank";
						center[] = {0,0};
						min = "-3.14159265*2";
						max = "3.14159265*2";
						minAngle = 360;
						maxAngle = -360;
						aspectRatio = 0.787097;
					};
					class HorizonDive
					{
						source = "horizonDive";
						type = "linear";
						min = -1;
						max = 1;
						minPos[] = {0.0,0.831};
						maxPos[] = {0.0,-0.169};
					};
					class WeaponAim: Pos10Vector
					{
						source = "weapon";
					};
					class Target: Pos10Vector
					{
						source = "target";
					};
					class VelocityNotCenter: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.0,0.0};
						pos10[] = {0.775,0.61};
					};
					class SpdMove2
					{
						source = "speed";
						min = 0;
						max = 200;
						type = "linear";
						minPos[] = {0.0,0.0};
						maxPos[] = {0.0,1.0};
					};
					class ASLMove1
					{
						type = "linear";
						source = "altitudeASL";
						min = 0;
						max = 500;
						minPos[] = {0.0,0.1};
						maxPos[] = {0.0,0.8};
					};
					class Heading
					{
						type = "linear";
						source = "Heading";
						min = -36;
						max = 36;
						minPos[] = {0.0,0.0};
						maxPos[] = {1.0,0.0};
					};
				};
				class Draw
				{
					alpha = 0.6;
					color[] = {0.0,0.3,0.05};
					condition = "on";
					class Static
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ "PlaneW",{ -0.21,7.22507e-009 },1 },{ "PlaneW",{ -0.28,9.63343e-009 },1 },{  },{ "PlaneW",{ 0.21,-1.97107e-009 },1 },{ "PlaneW",{ 0.28,-2.62809e-009 },1 },{  },{ "PlaneW",{ -0.105,0.143146 },1 },{ "PlaneW",{ -0.14,0.190861 },1 },{  },{ "PlaneW",{ 0.105,0.143146 },1 },{ "PlaneW",{ 0.14,0.190861 },1 },{  },{ "PlaneW",{ -0.181865,0.0826452 },1 },{ "PlaneW",{ -0.242487,0.110194 },1 },{  },{ "PlaneW",{ 0.181865,0.0826451 },1 },{ "PlaneW",{ 0.242487,0.110194 },1 },{  },{ "PlaneW",{ -0.202844,0.0427803 },1 },{ "PlaneW",{ -0.270459,0.0570404 },1 },{  },{ "PlaneW",{ 0.202844,0.0427803 },1 },{ "PlaneW",{ 0.270459,0.0570404 },1 },{  },{ "PlaneW",{ -0.209201,0.014406 },1 },{ "PlaneW",{ -0.244068,0.016807 },1 },{  },{ "PlaneW",{ -0.20681,0.0287024 },1 },{ "PlaneW",{ -0.241278,0.0334861 },1 },{  },{ "PlaneW",{ 0.20681,0.0287024 },1 },{ "PlaneW",{ 0.241278,0.0334861 },1 },{  },{ "PlaneW",{ 0.209201,0.014406 },1 },{ "PlaneW",{ 0.244068,0.016807 },1 },{  }};
					};
					class HorizonBank
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.9};
						type = "line";
						points[] = {{ "PlaneW",1,"HorizonBankReverted",{ 0.21,0.0 },1 },{ "PlaneW",1,"HorizonBankReverted",{ 0.07,0.0 },1 },{  },{ "PlaneW",1,"HorizonBankReverted",{ -0.21,0.0 },1 },{ "PlaneW",1,"HorizonBankReverted",{ -0.07,0.0 },1 },{  },{ "PlaneW",1,"HorizonBankReverted",{ 0.0,0.14 },1 },{ "PlaneW",1,"HorizonBankReverted",{ 0.0,0.07 },1 }};
					};
					class HorizonDive
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						points[] = {{ "HorizonDive",{ 0.8,0 },1 },{ "HorizonDive",{ 0.2,0 },1 }};
					};
					class Missile
					{
						condition = "missile";
						class Target
						{
							type = "line";
							points[] = {{ "Target",{ 0,-0.0787097 },1 },{ "Target",{ 0.05,-0.0684774 },1 },{ "Target",{ 0.087,"-0.50*(0.10)*((0.61/0.775))" },1 },{ "Target",{ "+(0.10)",0 },1 },{ "Target",{ 0.087,0.0393548 },1 },{ "Target",{ 0.05,"+0.87*(0.10)*((0.61/0.775))" },1 },{ "Target",{ 0,0.0787097 },1 },{ "Target",{ -0.05,0.0684774 },1 },{ "Target",{ -0.087,"+0.50*(0.10)*((0.61/0.775))" },1 },{ "Target",{ "-(0.10)",0 },1 },{ "Target",{ -0.087,-0.0393548 },1 },{ "Target",{ -0.05,"-0.87*(0.10)*((0.61/0.775))" },1 },{ "Target",{ 0,-0.0787097 },1 }};
						};
					};
					class Cros
					{
						condition = "on";
						class Cros
						{
							type = "line";
							points[] = {{ "WeaponAim",{ 0.05,0 },1 },{ "WeaponAim",{ 0.015,0 },1 },{  },{ "WeaponAim",{ 0,0.0393548 },1 },{ "WeaponAim",{ 0,0.0118065 },1 },{  },{ "WeaponAim",{ -0.05,0 },1 },{ "WeaponAim",{ -0.015,0 },1 },{  },{ "WeaponAim",{ 0,-0.0393548 },1 },{ "WeaponAim",{ 0,-0.0118065 },1 }};
						};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						pos[] = {{ 0.06,0.07 },1};
						right[] = {{ 0.14,0.07 },1};
						down[] = {{ 0.06,0.12 },1};
					};
					class AltNumber: SpeedNumber
					{
						source = "altitudeASL";
						sourceScale = 1;
						pos[] = {{ 0.86,0.07 },1};
						right[] = {{ 0.94,0.07 },1};
						down[] = {{ 0.86,0.12 },1};
					};
					class HeadingNumber: SpeedNumber
					{
						source = "HorizonDive";
						align = "right";
						sourceScale = 57.2958;
						pos[] = {"HorizonDive",{ 0.81,-0.05 },1};
						right[] = {"HorizonDive",{ 0.89,-0.05 },1};
						down[] = {"HorizonDive",{ 0.81,0.0 },1};
					};
					class MGun
					{
						condition = "mgun";
						class Lines
						{
							type = "line";
							points[] = {{ "VelocityNotCenter",0.001,"WeaponAim",1,"HorizonBankMGun",{ 0.2,0.0 },1 },{ "VelocityNotCenter",0.1,"WeaponAim",1,"HorizonBankMGun",{ 0.18,-0.01 },1 },{ "VelocityNotCenter",0.2,"WeaponAim",1,"HorizonBankMGun",{ 0.16,-0.03 },1 },{ "VelocityNotCenter",0.3,"WeaponAim",1,"HorizonBankMGun",{ 0.14,-0.06 },1 },{ "VelocityNotCenter",0.4,"WeaponAim",1,"HorizonBankMGun",{ 0.12,-0.1 },1 },{ "VelocityNotCenter",0.5,"WeaponAim",1,"HorizonBankMGun",{ 0.1,-0.15 },1 },{ "VelocityNotCenter",0.6,"WeaponAim",1,"HorizonBankMGun",{ 0.08,-0.21 },1 },{ "VelocityNotCenter",0.7,"WeaponAim",1,"HorizonBankMGun",{ 0.06,-0.28 },1 },{ "VelocityNotCenter",0.8,"WeaponAim",1,"HorizonBankMGun",{ 0.04,-0.4 },1 },{  },{ "VelocityNotCenter",0.001,"WeaponAim",1,"HorizonBankMGun",{ -0.2,0.0 },1 },{ "VelocityNotCenter",0.1,"WeaponAim",1,"HorizonBankMGun",{ -0.18,-0.01 },1 },{ "VelocityNotCenter",0.2,"WeaponAim",1,"HorizonBankMGun",{ -0.16,-0.03 },1 },{ "VelocityNotCenter",0.3,"WeaponAim",1,"HorizonBankMGun",{ -0.14,-0.06 },1 },{ "VelocityNotCenter",0.4,"WeaponAim",1,"HorizonBankMGun",{ -0.12,-0.1 },1 },{ "VelocityNotCenter",0.5,"WeaponAim",1,"HorizonBankMGun",{ -0.1,-0.15 },1 },{ "VelocityNotCenter",0.6,"WeaponAim",1,"HorizonBankMGun",{ -0.08,-0.21 },1 },{ "VelocityNotCenter",0.7,"WeaponAim",1,"HorizonBankMGun",{ -0.06,-0.28 },1 },{ "VelocityNotCenter",0.8,"WeaponAim",1,"HorizonBankMGun",{ -0.04,-0.4 },1 }};
						};
					};
					class weapons
					{
						type = "text";
						source = "weapon";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {{ 0.06,0.88 },1};
						right[] = {{ 0.12,0.88 },1};
						down[] = {{ 0.06,0.92 },1};
					};
					class ammo
					{
						type = "text";
						source = "ammo";
						align = "right";
						scale = 1;
						sourceScale = 1;
						pos[] = {{ 0.06,0.93 },1};
						right[] = {{ 0.12,0.93 },1};
						down[] = {{ 0.06,0.97 },1};
					};
					class ILS
					{
						condition = "ils";
						class Glideslope
						{
							clipTL[] = {0.0,0.0};
							clipBR[] = {1.0,1.0};
							class ILS
							{
								type = "line";
								points[] = {{ "ILS_W",{ -0.4,0 },1 },{ "ILS_W",{ 0.4,0 },1 },{  },{ "ILS_W",{ 0,0.04 },1 },{ "ILS_W",{ 0,-0.04 },1 },{  },{ "ILS_W",{ 0.2,0.04 },1 },{ "ILS_W",{ 0.2,-0.04 },1 },{  },{ "ILS_W",{ 0.4,0.04 },1 },{ "ILS_W",{ 0.4,-0.04 },1 },{  },{ "ILS_W",{ -0.2,0.04 },1 },{ "ILS_W",{ -0.2,-0.04 },1 },{  },{ "ILS_W",{ -0.4,0.04 },1 },{ "ILS_W",{ -0.4,-0.04 },1 },{  },{ "ILS_H",{ 0,-0.4 },1 },{ "ILS_H",{ 0,0.4 },1 },{  },{ "ILS_H",{ 0.04,0 },1 },{ "ILS_H",{ -0.04,0 },1 },{  },{ "ILS_H",{ 0.04,0.2 },1 },{ "ILS_H",{ -0.04,0.2 },1 },{  },{ "ILS_H",{ 0.04,0.4 },1 },{ "ILS_H",{ -0.04,0.4 },1 },{  },{ "ILS_H",{ 0.04,-0.2 },1 },{ "ILS_H",{ -0.04,-0.2 },1 },{  },{ "ILS_H",{ 0.04,-0.4 },1 },{ "ILS_H",{ -0.04,-0.4 },1 },{  }};
							};
						};
					};
				};
			};
		};
		irScanRangeMin = 500;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 3;
	};
	class F35_base: Plane
	{
		irScanRangeMin = 3500;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 3;
	};
	class F35B: F35_base
	{
		radarType = 4;
		LockDetectionSystem = 8;
		IncommingMisslieDetectionSystem = 16;
		weapons[] = {"GAU12","BombLauncherF35","SidewinderLaucher_F35","CMFlareLauncher"};
		magazines[] = {"300Rnd_25mm_GAU12","2Rnd_GBU12","2Rnd_Sidewinder_F35","120Rnd_CMFlare_Chaff_Magazine"};
		class MFD
		{
			class AirplaneHUD
			{
				class Pos10Vector
				{
					type = "vector";
					pos0[] = {0.5,0.5};
					pos10[] = {0.85,0.85};
				};
				topLeft = "HUD LH";
				topRight = "HUD PH";
				bottomLeft = "HUD LD";
				borderLeft = 0;
				borderRight = 0;
				borderTop = 0;
				borderBottom = 0;
				color[] = {0,1,0,0.1};
				class Bones
				{
					class PlaneW
					{
						type = "fixed";
						pos[] = {0.5,0.57};
					};
					class WeaponAim: Pos10Vector
					{
						source = "weapon";
					};
					class GunnerAim: Pos10Vector
					{
						source = "weapon";
						pos0[] = {0,-0.0025};
						pos10[] = {0.01,0.0025};
					};
					class Target: Pos10Vector
					{
						source = "target";
					};
					class Velocity: Pos10Vector
					{
						type = "vector";
						source = "velocity";
						pos0[] = {0.5,0.5};
						pos10[] = {0.85,0.85};
					};
					class ILS_H
					{
						type = "ils";
						pos0[] = {0.5,0.5};
						pos3[] = {0.605,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[] = {0.5,0.605};
					};
					class Level0: Pos10Vector
					{
						pos0[] = {0.5,0.57};
						pos10[] = {0.85,0.92};
						type = "horizon";
						angle = 0;
					};
					class LevelP10: Level0
					{
						angle = 10;
					};
					class LevelM10: Level0
					{
						angle = -10;
					};
					class LevelP20: Level0
					{
						angle = 20;
					};
					class LevelM20: Level0
					{
						angle = -20;
					};
					class LevelP30: Level0
					{
						angle = 30;
					};
					class LevelM30: Level0
					{
						angle = -30;
					};
					class LevelP40: Level0
					{
						angle = 40;
					};
					class LevelM40: Level0
					{
						angle = -40;
					};
					class LevelP50: Level0
					{
						angle = 50;
					};
					class LevelM50: Level0
					{
						angle = -50;
					};
					class LevelP60: Level0
					{
						angle = 60;
					};
					class LevelM60: Level0
					{
						angle = -60;
					};
					class LevelP70: Level0
					{
						angle = 70;
					};
					class LevelM70: Level0
					{
						angle = -70;
					};
					class LevelP80: Level0
					{
						angle = 80;
					};
					class LevelM80: Level0
					{
						angle = -80;
					};
				};
				class Draw
				{
					alpha = 0.6;
					color[] = {0.0,0.5,0.05};
					condition = "on";
					class PlaneHeading
					{
						clipTL[] = {0.0,1.0};
						clipBR[] = {1.0,0.0};
						type = "line";
						width = 4.0;
						points[] = {{ "Velocity",{ 0,-0.02 },1 },{ "Velocity",{ 0.014,-0.014 },1 },{ "Velocity",{ "+(0.02)",0 },1 },{ "Velocity",{ 0.014,0.014 },1 },{ "Velocity",{ 0,0.02 },1 },{ "Velocity",{ -0.014,0.014 },1 },{ "Velocity",{ "-(0.02)",0 },1 },{ "Velocity",{ -0.014,-0.014 },1 },{ "Velocity",{ 0,-0.02 },1 },{  },{ "Velocity",{ 0.04,0 },1 },{ "Velocity",{ 0.02,0 },1 },{  },{ "Velocity",{ -0.04,0 },1 },{ "Velocity",{ -0.02,0 },1 },{  },{ "Velocity",{ 0,-0.04 },1 },{ "Velocity",{ 0,-0.02 },1 },{  }};
					};
					class Static
					{
						clipTL[] = {0.0,0.1};
						clipBR[] = {1.0,0.0};
						type = "line";
						width = 4.0;
						points[] = {{ { 0.79,0.52 },1 },{ { 0.81,0.5 },1 },{ { 0.79,0.48 },1 },{  },{ { 0.52,0.14 },1 },{ { 0.5,0.12 },1 },{ { 0.48,0.14 },1 },{  }};
					};
					class Horizont
					{
						clipTL[] = {0.0,0.0};
						clipBR[] = {1.0,1.0};
						class Dimmed
						{
							class Level0
							{
								type = "line";
								points[] = {{ "Level0",{ -0.2,0 },1 },{ "Level0",{ -0.05,0 },1 },{  },{ "Level0",{ 0.05,0 },1 },{ "Level0",{ 0.2,0 },1 }};
							};
							class VALM_1_0
							{
								type = "text";
								source = "static";
								text = 0;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"Level0",{ -0.23,-0.025 },1};
								right[] = {"Level0",{ -0.13,-0.025 },1};
								down[] = {"Level0",{ -0.23,0.025 },1};
							};
							class VALM_2_0: VALM_1_0
							{
								align = "right";
								pos[] = {"Level0",{ 0.22,-0.025 },1};
								right[] = {"Level0",{ 0.32,-0.025 },1};
								down[] = {"Level0",{ 0.22,0.025 },1};
							};
							class LevelM10: Level0
							{
								type = "line";
								points[] = {{ "LevelM10",{ -0.2,-0.03 },1 },{ "LevelM10",{ -0.2,0 },1 },{ "LevelM10",{ -0.15,0 },1 },{  },{ "LevelM10",{ -0.1,0 },1 },{ "LevelM10",{ -0.05,0 },1 },{  },{ "LevelM10",{ 0.05,0 },1 },{ "LevelM10",{ 0.1,0 },1 },{  },{ "LevelM10",{ 0.15,0 },1 },{ "LevelM10",{ 0.2,0 },1 },{ "LevelM10",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_10
							{
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10",{ -0.23,-0.085 },1};
								right[] = {"LevelM10",{ -0.13,-0.085 },1};
								down[] = {"LevelM10",{ -0.23,-0.035 },1};
							};
							class VALM_2_10: VALM_1_10
							{
								align = "right";
								pos[] = {"LevelM10",{ 0.22,-0.085 },1};
								right[] = {"LevelM10",{ 0.32,-0.085 },1};
								down[] = {"LevelM10",{ 0.22,-0.035 },1};
							};
							class LevelP10: Level0
							{
								type = "line";
								points[] = {{ "LevelP10",{ -0.2,0.03 },1 },{ "LevelP10",{ -0.2,0 },1 },{ "LevelP10",{ -0.05,0 },1 },{  },{ "LevelP10",{ 0.05,0 },1 },{ "LevelP10",{ 0.2,0 },1 },{ "LevelP10",{ 0.2,0.03 },1 }};
							};
							class VALP_1_10
							{
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10",{ -0.23,0.035 },1};
								right[] = {"LevelP10",{ -0.13,0.035 },1};
								down[] = {"LevelP10",{ -0.23,0.085 },1};
							};
							class VALP_2_10: VALP_1_10
							{
								align = "right";
								pos[] = {"LevelP10",{ 0.22,0.035 },1};
								right[] = {"LevelP10",{ 0.32,0.035 },1};
								down[] = {"LevelP10",{ 0.22,0.085 },1};
							};
							class LevelM20: Level0
							{
								type = "line";
								points[] = {{ "LevelM20",{ -0.2,-0.03 },1 },{ "LevelM20",{ -0.2,0 },1 },{ "LevelM20",{ -0.15,0 },1 },{  },{ "LevelM20",{ -0.1,0 },1 },{ "LevelM20",{ -0.05,0 },1 },{  },{ "LevelM20",{ 0.05,0 },1 },{ "LevelM20",{ 0.1,0 },1 },{  },{ "LevelM20",{ 0.15,0 },1 },{ "LevelM20",{ 0.2,0 },1 },{ "LevelM20",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_20
							{
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20",{ -0.23,-0.085 },1};
								right[] = {"LevelM20",{ -0.13,-0.085 },1};
								down[] = {"LevelM20",{ -0.23,-0.035 },1};
							};
							class VALM_2_20: VALM_1_20
							{
								align = "right";
								pos[] = {"LevelM20",{ 0.22,-0.085 },1};
								right[] = {"LevelM20",{ 0.32,-0.085 },1};
								down[] = {"LevelM20",{ 0.22,-0.035 },1};
							};
							class LevelP20: Level0
							{
								type = "line";
								points[] = {{ "LevelP20",{ -0.2,0.03 },1 },{ "LevelP20",{ -0.2,0 },1 },{ "LevelP20",{ -0.05,0 },1 },{  },{ "LevelP20",{ 0.05,0 },1 },{ "LevelP20",{ 0.2,0 },1 },{ "LevelP20",{ 0.2,0.03 },1 }};
							};
							class VALP_1_20
							{
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20",{ -0.23,0.035 },1};
								right[] = {"LevelP20",{ -0.13,0.035 },1};
								down[] = {"LevelP20",{ -0.23,0.085 },1};
							};
							class VALP_2_20: VALP_1_20
							{
								align = "right";
								pos[] = {"LevelP20",{ 0.22,0.035 },1};
								right[] = {"LevelP20",{ 0.32,0.035 },1};
								down[] = {"LevelP20",{ 0.22,0.085 },1};
							};
							class LevelM30: Level0
							{
								type = "line";
								points[] = {{ "LevelM30",{ -0.2,-0.03 },1 },{ "LevelM30",{ -0.2,0 },1 },{ "LevelM30",{ -0.15,0 },1 },{  },{ "LevelM30",{ -0.1,0 },1 },{ "LevelM30",{ -0.05,0 },1 },{  },{ "LevelM30",{ 0.05,0 },1 },{ "LevelM30",{ 0.1,0 },1 },{  },{ "LevelM30",{ 0.15,0 },1 },{ "LevelM30",{ 0.2,0 },1 },{ "LevelM30",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_30
							{
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30",{ -0.23,-0.085 },1};
								right[] = {"LevelM30",{ -0.13,-0.085 },1};
								down[] = {"LevelM30",{ -0.23,-0.035 },1};
							};
							class VALM_2_30: VALM_1_30
							{
								align = "right";
								pos[] = {"LevelM30",{ 0.22,-0.085 },1};
								right[] = {"LevelM30",{ 0.32,-0.085 },1};
								down[] = {"LevelM30",{ 0.22,-0.035 },1};
							};
							class LevelP30: Level0
							{
								type = "line";
								points[] = {{ "LevelP30",{ -0.2,0.03 },1 },{ "LevelP30",{ -0.2,0 },1 },{ "LevelP30",{ -0.05,0 },1 },{  },{ "LevelP30",{ 0.05,0 },1 },{ "LevelP30",{ 0.2,0 },1 },{ "LevelP30",{ 0.2,0.03 },1 }};
							};
							class VALP_1_30
							{
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30",{ -0.23,0.035 },1};
								right[] = {"LevelP30",{ -0.13,0.035 },1};
								down[] = {"LevelP30",{ -0.23,0.085 },1};
							};
							class VALP_2_30: VALP_1_30
							{
								align = "right";
								pos[] = {"LevelP30",{ 0.22,0.035 },1};
								right[] = {"LevelP30",{ 0.32,0.035 },1};
								down[] = {"LevelP30",{ 0.22,0.085 },1};
							};
							class LevelM40: Level0
							{
								type = "line";
								points[] = {{ "LevelM40",{ -0.2,-0.03 },1 },{ "LevelM40",{ -0.2,0 },1 },{ "LevelM40",{ -0.15,0 },1 },{  },{ "LevelM40",{ -0.1,0 },1 },{ "LevelM40",{ -0.05,0 },1 },{  },{ "LevelM40",{ 0.05,0 },1 },{ "LevelM40",{ 0.1,0 },1 },{  },{ "LevelM40",{ 0.15,0 },1 },{ "LevelM40",{ 0.2,0 },1 },{ "LevelM40",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40",{ -0.23,-0.085 },1};
								right[] = {"LevelM40",{ -0.13,-0.085 },1};
								down[] = {"LevelM40",{ -0.23,-0.035 },1};
							};
							class VALM_2_40: VALM_1_40
							{
								align = "right";
								pos[] = {"LevelM40",{ 0.22,-0.085 },1};
								right[] = {"LevelM40",{ 0.32,-0.085 },1};
								down[] = {"LevelM40",{ 0.22,-0.035 },1};
							};
							class LevelP40: Level0
							{
								type = "line";
								points[] = {{ "LevelP40",{ -0.2,0.03 },1 },{ "LevelP40",{ -0.2,0 },1 },{ "LevelP40",{ -0.05,0 },1 },{  },{ "LevelP40",{ 0.05,0 },1 },{ "LevelP40",{ 0.2,0 },1 },{ "LevelP40",{ 0.2,0.03 },1 }};
							};
							class VALP_1_40
							{
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40",{ -0.23,0.035 },1};
								right[] = {"LevelP40",{ -0.13,0.035 },1};
								down[] = {"LevelP40",{ -0.23,0.085 },1};
							};
							class VALP_2_40: VALP_1_40
							{
								align = "right";
								pos[] = {"LevelP40",{ 0.22,0.035 },1};
								right[] = {"LevelP40",{ 0.32,0.035 },1};
								down[] = {"LevelP40",{ 0.22,0.085 },1};
							};
							class LevelM50: Level0
							{
								type = "line";
								points[] = {{ "LevelM50",{ -0.2,-0.03 },1 },{ "LevelM50",{ -0.2,0 },1 },{ "LevelM50",{ -0.15,0 },1 },{  },{ "LevelM50",{ -0.1,0 },1 },{ "LevelM50",{ -0.05,0 },1 },{  },{ "LevelM50",{ 0.05,0 },1 },{ "LevelM50",{ 0.1,0 },1 },{  },{ "LevelM50",{ 0.15,0 },1 },{ "LevelM50",{ 0.2,0 },1 },{ "LevelM50",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_50
							{
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50",{ -0.23,-0.085 },1};
								right[] = {"LevelM50",{ -0.13,-0.085 },1};
								down[] = {"LevelM50",{ -0.23,-0.035 },1};
							};
							class VALM_2_50: VALM_1_50
							{
								align = "right";
								pos[] = {"LevelM50",{ 0.22,-0.085 },1};
								right[] = {"LevelM50",{ 0.32,-0.085 },1};
								down[] = {"LevelM50",{ 0.22,-0.035 },1};
							};
							class LevelP50: Level0
							{
								type = "line";
								points[] = {{ "LevelP50",{ -0.2,0.03 },1 },{ "LevelP50",{ -0.2,0 },1 },{ "LevelP50",{ -0.05,0 },1 },{  },{ "LevelP50",{ 0.05,0 },1 },{ "LevelP50",{ 0.2,0 },1 },{ "LevelP50",{ 0.2,0.03 },1 }};
							};
							class VALP_1_50
							{
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50",{ -0.23,0.035 },1};
								right[] = {"LevelP50",{ -0.13,0.035 },1};
								down[] = {"LevelP50",{ -0.23,0.085 },1};
							};
							class VALP_2_50: VALP_1_50
							{
								align = "right";
								pos[] = {"LevelP50",{ 0.22,0.035 },1};
								right[] = {"LevelP50",{ 0.32,0.035 },1};
								down[] = {"LevelP50",{ 0.22,0.085 },1};
							};
							class LevelM60: Level0
							{
								type = "line";
								points[] = {{ "LevelM60",{ -0.2,-0.03 },1 },{ "LevelM60",{ -0.2,0 },1 },{ "LevelM60",{ -0.15,0 },1 },{  },{ "LevelM60",{ -0.1,0 },1 },{ "LevelM60",{ -0.05,0 },1 },{  },{ "LevelM60",{ 0.05,0 },1 },{ "LevelM60",{ 0.1,0 },1 },{  },{ "LevelM60",{ 0.15,0 },1 },{ "LevelM60",{ 0.2,0 },1 },{ "LevelM60",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_60
							{
								type = "text";
								source = "static";
								text = -60;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM60",{ -0.23,-0.085 },1};
								right[] = {"LevelM60",{ -0.13,-0.085 },1};
								down[] = {"LevelM60",{ -0.23,-0.035 },1};
							};
							class VALM_2_60: VALM_1_60
							{
								align = "right";
								pos[] = {"LevelM60",{ 0.22,-0.085 },1};
								right[] = {"LevelM60",{ 0.32,-0.085 },1};
								down[] = {"LevelM60",{ 0.22,-0.035 },1};
							};
							class LevelP60: Level0
							{
								type = "line";
								points[] = {{ "LevelP60",{ -0.2,0.03 },1 },{ "LevelP60",{ -0.2,0 },1 },{ "LevelP60",{ -0.05,0 },1 },{  },{ "LevelP60",{ 0.05,0 },1 },{ "LevelP60",{ 0.2,0 },1 },{ "LevelP60",{ 0.2,0.03 },1 }};
							};
							class VALP_1_60
							{
								type = "text";
								source = "static";
								text = "60";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP60",{ -0.23,0.035 },1};
								right[] = {"LevelP60",{ -0.13,0.035 },1};
								down[] = {"LevelP60",{ -0.23,0.085 },1};
							};
							class VALP_2_60: VALP_1_60
							{
								align = "right";
								pos[] = {"LevelP60",{ 0.22,0.035 },1};
								right[] = {"LevelP60",{ 0.32,0.035 },1};
								down[] = {"LevelP60",{ 0.22,0.085 },1};
							};
							class LevelM70: Level0
							{
								type = "line";
								points[] = {{ "LevelM70",{ -0.2,-0.03 },1 },{ "LevelM70",{ -0.2,0 },1 },{ "LevelM70",{ -0.15,0 },1 },{  },{ "LevelM70",{ -0.1,0 },1 },{ "LevelM70",{ -0.05,0 },1 },{  },{ "LevelM70",{ 0.05,0 },1 },{ "LevelM70",{ 0.1,0 },1 },{  },{ "LevelM70",{ 0.15,0 },1 },{ "LevelM70",{ 0.2,0 },1 },{ "LevelM70",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_70
							{
								type = "text";
								source = "static";
								text = -70;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM70",{ -0.23,-0.085 },1};
								right[] = {"LevelM70",{ -0.13,-0.085 },1};
								down[] = {"LevelM70",{ -0.23,-0.035 },1};
							};
							class VALM_2_70: VALM_1_70
							{
								align = "right";
								pos[] = {"LevelM70",{ 0.22,-0.085 },1};
								right[] = {"LevelM70",{ 0.32,-0.085 },1};
								down[] = {"LevelM70",{ 0.22,-0.035 },1};
							};
							class LevelP70: Level0
							{
								type = "line";
								points[] = {{ "LevelP70",{ -0.2,0.03 },1 },{ "LevelP70",{ -0.2,0 },1 },{ "LevelP70",{ -0.05,0 },1 },{  },{ "LevelP70",{ 0.05,0 },1 },{ "LevelP70",{ 0.2,0 },1 },{ "LevelP70",{ 0.2,0.03 },1 }};
							};
							class VALP_1_70
							{
								type = "text";
								source = "static";
								text = "70";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP70",{ -0.23,0.035 },1};
								right[] = {"LevelP70",{ -0.13,0.035 },1};
								down[] = {"LevelP70",{ -0.23,0.085 },1};
							};
							class VALP_2_70: VALP_1_70
							{
								align = "right";
								pos[] = {"LevelP70",{ 0.22,0.035 },1};
								right[] = {"LevelP70",{ 0.32,0.035 },1};
								down[] = {"LevelP70",{ 0.22,0.085 },1};
							};
							class LevelM80: Level0
							{
								type = "line";
								points[] = {{ "LevelM80",{ -0.2,-0.03 },1 },{ "LevelM80",{ -0.2,0 },1 },{ "LevelM80",{ -0.15,0 },1 },{  },{ "LevelM80",{ -0.1,0 },1 },{ "LevelM80",{ -0.05,0 },1 },{  },{ "LevelM80",{ 0.05,0 },1 },{ "LevelM80",{ 0.1,0 },1 },{  },{ "LevelM80",{ 0.15,0 },1 },{ "LevelM80",{ 0.2,0 },1 },{ "LevelM80",{ 0.2,-0.03 },1 }};
							};
							class VALM_1_80
							{
								type = "text";
								source = "static";
								text = -80;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM80",{ -0.23,-0.085 },1};
								right[] = {"LevelM80",{ -0.13,-0.085 },1};
								down[] = {"LevelM80",{ -0.23,-0.035 },1};
							};
							class VALM_2_80: VALM_1_80
							{
								align = "right";
								pos[] = {"LevelM80",{ 0.22,-0.085 },1};
								right[] = {"LevelM80",{ 0.32,-0.085 },1};
								down[] = {"LevelM80",{ 0.22,-0.035 },1};
							};
							class LevelP80: Level0
							{
								type = "line";
								points[] = {{ "LevelP80",{ -0.2,0.03 },1 },{ "LevelP80",{ -0.2,0 },1 },{ "LevelP80",{ -0.05,0 },1 },{  },{ "LevelP80",{ 0.05,0 },1 },{ "LevelP80",{ 0.2,0 },1 },{ "LevelP80",{ 0.2,0.03 },1 }};
							};
							class VALP_1_80
							{
								type = "text";
								source = "static";
								text = "80";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP80",{ -0.23,0.035 },1};
								right[] = {"LevelP80",{ -0.13,0.035 },1};
								down[] = {"LevelP80",{ -0.23,0.085 },1};
							};
							class VALP_2_80: VALP_1_80
							{
								align = "right";
								pos[] = {"LevelP80",{ 0.22,0.035 },1};
								right[] = {"LevelP80",{ 0.32,0.035 },1};
								down[] = {"LevelP80",{ 0.22,0.085 },1};
							};
						};
					};
					class MGun
					{
						condition = "mgun";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ 0.05,0 },1 },{ "WeaponAim",{ 0.015,0 },1 },{  },{ "WeaponAim",{ 0,0.05 },1 },{ "WeaponAim",{ 0,0.015 },1 },{  },{ "WeaponAim",{ -0.05,0 },1 },{ "WeaponAim",{ -0.015,0 },1 },{  },{ "WeaponAim",{ 0,-0.05 },1 },{ "WeaponAim",{ 0,-0.015 },1 },{  }};
						};
					};
					class Bomb
					{
						condition = "bomb";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ 0,-0.1 },1 },{ "WeaponAim",{ 0.05,-0.087 },1 },{ "WeaponAim",{ 0.087,-0.05 },1 },{ "WeaponAim",{ 0.1,0 },1 },{ "WeaponAim",{ 0.087,0.05 },1 },{ "WeaponAim",{ 0.05,0.087 },1 },{ "WeaponAim",{ 0,0.1 },1 },{ "WeaponAim",{ -0.05,0.087 },1 },{ "WeaponAim",{ -0.087,0.05 },1 },{ "WeaponAim",{ -0.1,0 },1 },{ "WeaponAim",{ -0.087,-0.05 },1 },{ "WeaponAim",{ -0.05,-0.087 },1 },{ "WeaponAim",{ 0,-0.1 },1 },{  },{ "Velocity",0.001,"WeaponAim",{ 0.0,0.0 },1 },{ "Velocity",{ 0.0,0.0 },1 },{  }};
						};
					};
					class AAMissile
					{
						condition = "AAmissile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ 0,-0.25 },1 },{ "WeaponAim",{ 0.125,-0.2175 },1 },{ "WeaponAim",{ 0.2175,-0.125 },1 },{ "WeaponAim",{ 0.25,0 },1 },{ "WeaponAim",{ 0.2175,0.125 },1 },{ "WeaponAim",{ 0.125,0.2175 },1 },{ "WeaponAim",{ 0,0.25 },1 },{ "WeaponAim",{ -0.125,0.2175 },1 },{ "WeaponAim",{ -0.2175,0.125 },1 },{ "WeaponAim",{ -0.25,0 },1 },{ "WeaponAim",{ -0.2175,-0.125 },1 },{ "WeaponAim",{ -0.125,-0.2175 },1 },{ "WeaponAim",{ 0,-0.25 },1 },{  }};
						};
					};
					class ATMissile
					{
						condition = "ATmissile";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ -0.15,-0.15 },1 },{ "WeaponAim",{ -0.15,"-0.15+0.02" },1 },{  },{ "WeaponAim",{ -0.15,0.15 },1 },{ "WeaponAim",{ -0.15,"+0.15-0.02" },1 },{  },{ "WeaponAim",{ 0.15,-0.15 },1 },{ "WeaponAim",{ 0.15,"-0.15+0.02" },1 },{  },{ "WeaponAim",{ 0.15,0.15 },1 },{ "WeaponAim",{ 0.15,"+0.15-0.02" },1 },{  },{ "WeaponAim",{ -0.15,-0.15 },1 },{ "WeaponAim",{ "-0.15+0.02",-0.15 },1 },{  },{ "WeaponAim",{ -0.15,0.15 },1 },{ "WeaponAim",{ "-0.15+0.02",0.15 },1 },{  },{ "WeaponAim",{ 0.15,-0.15 },1 },{ "WeaponAim",{ "0.15-0.02",-0.15 },1 },{  },{ "WeaponAim",{ 0.15,0.15 },1 },{ "WeaponAim",{ "0.15-0.02",0.15 },1 },{  }};
						};
					};
					class Rockets
					{
						condition = "Rocket";
						class Circle
						{
							type = "line";
							width = 4.0;
							points[] = {{ "WeaponAim",{ -0.25,-0.25 },1 },{ "WeaponAim",{ -0.25,"-0.25+0.05" },1 },{  },{ "WeaponAim",{ -0.25,0.25 },1 },{ "WeaponAim",{ -0.25,"+0.25-0.05" },1 },{  },{ "WeaponAim",{ 0.25,-0.25 },1 },{ "WeaponAim",{ 0.25,"-0.25+0.05" },1 },{  },{ "WeaponAim",{ 0.25,0.25 },1 },{ "WeaponAim",{ 0.25,"+0.25-0.05" },1 },{  },{ "WeaponAim",{ -0.25,-0.25 },1 },{ "WeaponAim",{ "-0.25+0.05",-0.25 },1 },{  },{ "WeaponAim",{ -0.25,0.25 },1 },{ "WeaponAim",{ "-0.25+0.05",0.25 },1 },{  },{ "WeaponAim",{ 0.25,-0.25 },1 },{ "WeaponAim",{ "0.25-0.05",-0.25 },1 },{  },{ "WeaponAim",{ 0.25,0.25 },1 },{ "WeaponAim",{ "0.25-0.05",0.25 },1 },{  }};
						};
					};
					class SpeedNumber
					{
						type = "text";
						align = "right";
						scale = 1;
						source = "speed";
						sourceScale = 3.6;
						pos[] = {{ 0.06,0.47 },1};
						right[] = {{ "0.14-0.02",0.47 },1};
						down[] = {{ 0.06,0.52 },1};
					};
					class AltNumber: SpeedNumber
					{
						source = "altitudeAGL";
						sourceScale = 1;
						pos[] = {{ "0.86-0.15",0.47 },1};
						right[] = {{ "0.94-0.15-0.02",0.47 },1};
						down[] = {{ "0.86-0.15",0.52 },1};
					};
					class AltScale
					{
						type = "scale";
						scale = 1;
						source = "altitudeAGL";
						sourceScale = 1;
						align = "right";
						width = 4.0;
						pos[] = {0.86,0.82};
						right[] = {0.92,0.82};
						down[] = {0.86,0.87};
						lineXleft = 0.825;
						lineYright = 0.835;
						lineXleftMajor = 0.825;
						lineYrightMajor = 0.845;
						bottom = 0.2;
						top = 0.85;
						center = 0.5;
						step = 20;
						StepSize = 0.0325;
						horizontal = 0;
						min = "none";
						max = "none";
						numberEach = 5;
						majorLineEach = 5;
					};
					class weapons
					{
						type = "text";
						source = "weapon";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.88 },1};
						right[] = {{ "0.16-0.02",0.88 },1};
						down[] = {{ 0.1,0.92 },1};
					};
					class ammo
					{
						type = "text";
						source = "ammo";
						align = "right";
						scale = 0.5;
						sourceScale = 1;
						pos[] = {{ 0.1,0.93 },1};
						right[] = {{ "0.16-0.02",0.93 },1};
						down[] = {{ 0.1,0.97 },1};
					};
					class HeadingScale
					{
						type = "scale";
						scale = 1;
						source = "Heading";
						sourceScale = 1;
						align = "center";
						width = 4.0;
						pos[] = {"0.32-0.01","0.0+0.05"};
						right[] = {"0.38-0.01","0.0+0.05"};
						down[] = {"0.32-0.01","0.04+0.05"};
						lineXleft = "0.06+0.05";
						lineYright = "0.05+0.05";
						lineXleftMajor = "0.07+0.05";
						lineYrightMajor = "0.04+0.05";
						bottom = 0.7;
						center = 0.5;
						top = 0.3;
						step = 10;
						StepSize = "(0.70- 0.3)/15";
						horizontal = 1;
						min = "none";
						max = "none";
						numberEach = 3;
						majorLineEach = 3;
					};
				};
				helmetMountedDisplay = 1;
				helmetPosition[] = {-0.025,0.025,0.1};
				helmetRight[] = {0.05,0.0,0.0};
				helmetDown[] = {-0.0,-0.05,0.0};
			};
		};
		irScanRangeMin = 3500;
		irScanRangeMax = 10000;
		irScanToEyeFactor = 3;
	};
	class AV8B2: Plane
	{
		weapons[] = {"GAU12","Mk82BombLauncher_6","SidewinderLaucher_AH1Z","FFARLauncher_14","CMFlareLauncher"};
		magazines[] = {"300Rnd_25mm_GAU12","6Rnd_Mk82","2Rnd_Sidewinder_AH1Z","14Rnd_FFAR","120Rnd_CMFlare_Chaff_Magazine"};
		radarType = 4;
		LockDetectionSystem = 8;
		IncommingMisslieDetectionSystem = 16;
		class MFD
		{
			class HUD
			{
				enableParallax = 1;
			};
		};
	};
	class AV8B: AV8B2
	{
		weapons[] = {"GAU12","BombLauncher","CMFlareLauncher"};
		magazines[] = {"300Rnd_25mm_GAU12","6Rnd_GBU12_AV8B","120Rnd_CMFlare_Chaff_Magazine"};
		radarType = 4;
		LockDetectionSystem = 8;
		IncommingMisslieDetectionSystem = 16;
	};
	class Chukar;
	class Chukar_EP1: Chukar
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		scope = 2;
		expansion = 1;
		model = "\Ca\Air_E\Chukar\chukar";
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Air_E\Chukar\Data\CHUKAR.rvmat","Ca\Air_E\Chukar\Data\chukar_damage.rvmat","Ca\Air_E\Chukar\Data\chukar_destruct.rvmat"};
		};
	};
	class Chukar_AllwaysEnemy;
	class Chukar_AllwaysEnemy_EP1: Chukar_AllwaysEnemy
	{
		htMin = 60;
		htMax = 1800;
		afMax = 200;
		mfMax = 100;
		mFact = 0;
		tBody = 0;
		scope = 1;
		expansion = 1;
		model = "\Ca\Air_E\Chukar\chukar";
		faction = "BIS_US";
		crew = "US_Soldier_EP1";
		typicalCargo[] = {"US_Soldier_EP1"};
		class Damage
		{
			tex[] = {};
			mat[] = {"Ca\Air_E\Chukar\Data\CHUKAR.rvmat","Ca\Air_E\Chukar\Data\chukar_damage.rvmat","Ca\Air_E\Chukar\Data\chukar_destruct.rvmat"};
		};
	};
	class UH60_Base: Helicopter
	{
		irScanRangeMin = 500;
		irScanRangeMax = 2000;
		irScanToEyeFactor = 2;
	};
	class Mi17_base: Helicopter
	{
		irScanRangeMin = 500;
		irScanRangeMax = 2000;
		irScanToEyeFactor = 2;
	};
	class MV22: Plane
	{
		irScanRangeMin = 500;
		irScanRangeMax = 2000;
		irScanToEyeFactor = 2;
	};
};
class CfgNonAIVehicles
{
	class ProxyWeapon;
	class ProxyAGM114Hellfire: ProxyWeapon
	{
		model = "\ca\Air_E\AGM114Hellfire";
		simulation = "maverickweapon";
	};
	class ProxyAGM65: ProxyWeapon
	{
		model = "\Ca\Air_E\AGM65";
		simulation = "maverickweapon";
	};
	class ProxyAIM9XSidewinder: ProxyWeapon
	{
		model = "\Ca\Air_E\AIM9XSidewinder";
		simulation = "maverickweapon";
	};
	class ProxyGBU12: ProxyWeapon
	{
		model = "\ca\air_e\gbu12_proxy";
		simulation = "maverickweapon";
	};
	class ProxyFab250: ProxyWeapon
	{
		model = "\ca\air_e\fab250";
		simulation = "maverickweapon";
	};
	class ProxyFalanga: ProxyWeapon
	{
		model = "\CA\air_e\falanga";
		simulation = "maverickweapon";
	};
	class ProxyR73_proxy: ProxyWeapon
	{
		model = "\ca\air_e\R73_proxy";
		simulation = "maverickweapon";
	};
};
//};
