////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:06:49 2014 : Source 'file' date Fri Oct 31 06:06:49 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=6
enum {
	_k = 0,
	_c = 50,
	_r = 0,
	_d = 0,
	_t = -1,
	_e = 1
};

//Class weapons : config.bin{
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		D30_Commander = "D30_Commander";
		D30_Gunner = "D30_Gunner";
		D30_Cargo = "D30_Cargo";
		M119_Commander = "M119_Commander";
		M119_Gunner = "M119_Gunner";
		M119_Cargo = "M119_Cargo";
		M2_Gunner = "M2_Gunner";
		AGS_Gunner = "AGS_Gunner";
		DShKM_Gunner = "DShKM_Gunner";
		searchlight_Gunner = "searchlight_Gunner";
		SPG_Gunner = "SPG_Gunner";
		TOW_Gunner = "TOW_Gunner";
		Metis_Gunner = "Metis_Gunner";
		LowTripod_Gunner = "LowTripod_Gunner";
		LowKORD_Gunner = "LowKORD_Gunner";
		KORD_Gunner = "KORD_Gunner";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Static_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\weapons\Data\Anim\Static_Dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",1};
		};
		class Crew;
		class D30_Commander: Crew
		{
			file = "\ca\weapons\Data\Anim\D30_Commander.rtm";
			connectTo[] = {"Static_Dead",1};
		};
		class D30_Gunner: Crew
		{
			file = "\ca\weapons\Data\Anim\D30_Gunner.rtm";
			connectTo[] = {"Static_Dead",1};
		};
		class D30_Cargo: Crew
		{
			file = "\ca\weapons\Data\Anim\D30_Cargo.rtm";
			connectTo[] = {"Static_Dead",1};
		};
		class M119_Commander: Crew
		{
			file = "\ca\weapons\Data\Anim\M119_Commander.rtm";
			connectTo[] = {"Static_Dead",1};
		};
		class M119_Gunner: Crew
		{
			file = "\ca\weapons\Data\Anim\M119_Gunner.rtm";
			connectTo[] = {"Static_Dead",1};
		};
		class M119_Cargo: Crew
		{
			file = "\ca\weapons\Data\Anim\M119_Cargo.rtm";
			connectTo[] = {"Static_Dead",1};
		};
		class M2_Gunner: Crew
		{
			file = "\ca\weapons\Data\Anim\M2_Gunner.rtm";
			connectTo[] = {"Static_Dead",1};
		};
		class AGS_Gunner: Crew
		{
			file = "\ca\weapons\Data\Anim\AGS_Gunner.rtm";
			connectTo[] = {"Static_Dead",1};
		};
		class LowTripod_Gunner: Crew
		{
			file = "\ca\weapons\Data\Anim\LowTripod_Gunner.rtm";
			connectTo[] = {"Static_Dead",1};
		};
		class DShKM_Gunner: Crew
		{
			file = "\ca\weapons\Data\Anim\DShKM_Gunner.rtm";
			connectTo[] = {"Static_Dead",1};
		};
		class searchlight_Gunner: Crew
		{
			file = "\ca\weapons\Data\Anim\searchlight_Gunner.rtm";
			connectTo[] = {"Static_Dead",1};
		};
		class KIA_SPG_Gunner: DefaultDie
		{
			actions = "DeadActions";
			file = "\ca\weapons\SPG9\DATA\anim\KIA_SPG9_gunner.rtm";
			speed = 0.5;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"DeadState",0.1};
		};
		class SPG_Gunner: Crew
		{
			file = "\ca\weapons\SPG9\DATA\anim\SPG9_gunner.rtm";
			interpolateTo[] = {"KIA_SPG_Gunner",1};
		};
		class TOW_Gunner: Crew
		{
			file = "\ca\weapons\Data\Anim\D30_Cargo.rtm";
			connectTo[] = {"Static_Dead",1};
		};
		class Metis_Gunner: Crew
		{
			file = "\ca\weapons\Data\Anim\Metis_Gunner.rtm";
			interpolateTo[] = {"KIA_SPG_Gunner",1};
		};
		class LowKORD_Gunner: Crew
		{
			file = "CA\weapons\KORD\Data\anim\sittingGunner.rtm";
			interpolateTo[] = {"KIA_SPG_Gunner",1};
		};
		class KORD_Gunner: Crew
		{
			file = "CA\weapons\KORD\Data\anim\standingGunner.rtm";
			connectTo[] = {"Static_Dead",1};
		};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	class ManActions
	{
		D30_Commander = "";
		D30_Gunner = "";
		D30_Cargo = "";
		M119_Commander = "";
		M119_Gunner = "";
		M119_Cargo = "";
		M2_Gunner = "";
		AGS_Gunner = "";
		DShKM_Gunner = "";
		searchlight_Gunner = "";
		SPG_Gunner = "";
		TOW_Gunner = "";
		Metis_Gunner = "";
		LowTripod_Gunner = "";
		LowKORD_Gunner = "";
		KORD_Gunner = "";
	};
};
class cfgRecoils
{
	pistolBase[] = {0,0,0,0.08,0.003,0.02,0.05,-0.003,-0.033,0.05,0,0};
	subMachineGunBase[] = {0,0,0,0.06,0.005,0.005,0.05,0,-0.02,0.06,-0.005,0.005,0.05,0,0};
	assaultRifleBase[] = {0,0,0,0.06,0.01,0.01,0.1,0,-0.02,0.1,-0.01,0.01,0.05,0,0};
	machinegunBase[] = {0,0,0,0.08,0.01,0.04,0.05,-0.003,-0.01,0.2,0,0};
	launcherBase[] = {0,0,0,0.01,0,0.05,0.025,0,0};
	AK74Recoil[] = {0,0,0,0.06,0.01,0.012,0.1,0,-0.02,0.1,-0.01,0.01,0.05,0,0};
	M240Recoil[] = {0,0,0,0.08,0.01,0.05,0.05,-0.003,-0.008,0.2,0,0};
	M240RecoilProne[] = {0,0,0,0.1,0.003,0.005,0.05,-0.003,-0.01,0.05,0,0};
	M249Recoil[] = {0,0,0,0.07,0.002,0.01,0.035,-0.002,-0.02,0.05,0,0};
	M249RecoilProne[] = {0,0,0,0.1,0.003,0.004,0.05,-0.003,-0.008,0.05,0,0};
	M4Recoil[] = {0,0,0,0.06,0.01,0.01,0.1,0,-0.018,0.1,-0.01,0.01,0.05,0,0};
	PKMRecoil[] = {0,0,0,0.1,0.03,0.04,0.05,-0.03,-0.08,0.05,0,0};
	PKMRecoilProne[] = {0,0,0,0.1,0.003,0.005,0.05,-0.003,-0.01,0.05,0,0};
	recoil_single_primary_1outof10[] = {0.04,"0.006*(  (1/7))","0.05*.5*(  (1/7))",0.01,"0.009*(  (1/7))",0,0.045,0,"-0.025*.5*(  (1/7))"};
	recoil_single_primary_2outof10[] = {0.04,"0.006*(  (2/7))","0.05*.5*(  (2/7))",0.01,"0.009*(  (2/7))",0,0.045,0,"-0.025*.5*(  (2/7))"};
	recoil_single_primary_3outof10[] = {0.04,"0.006*(  (3/7))","0.05*.5*(  (3/7))",0.01,"0.009*(  (3/7))",0,0.045,0,"-0.025*.5*(  (3/7))"};
	recoil_single_primary_4outof10[] = {0.04,"0.006*(  (4/7))","0.05*.5*(  (4/7))",0.01,"0.009*(  (4/7))",0,0.045,0,"-0.025*.5*(  (4/7))"};
	recoil_single_primary_5outof10[] = {0.04,"0.006*(  (5/7))","0.05*.5*(  (5/7))",0.01,"0.009*(  (5/7))",0,0.045,0,"-0.025*.5*(  (5/7))"};
	recoil_single_primary_6outof10[] = {0.04,"0.006*(  (6/7))","0.05*.5*(  (6/7))",0.01,"0.009*(  (6/7))",0,0.045,0,"-0.025*.5*(  (6/7))"};
	recoil_single_primary_7outof10[] = {0.04,"0.006*(  (7/7))","0.05*.5*(  (7/7))",0.01,"0.009*(  (7/7))",0,0.045,0,"-0.025*.5*(  (7/7))"};
	recoil_single_primary_8outof10[] = {0.04,"0.006*(  (8/7))","0.05*.5*(  (8/7))",0.01,"0.009*(  (8/7))",0,0.045,0,"-0.025*.5*(  (8/7))"};
	recoil_single_primary_9outof10[] = {0.04,"0.006*(  (9/7))","0.05*.5*(  (9/7))",0.01,"0.009*(  (9/7))",0,0.045,0,"-0.025*.5*(  (9/7))"};
	recoil_single_primary_10outof10[] = {0.04,"0.006*( (10/7))","0.05*.5*( (10/7))",0.01,"0.009*( (10/7))",0,0.045,0,"-0.025*.5*( (10/7))"};
	recoil_single_primary_prone_1outof10[] = {0.035,"0.004*(  (1/7))","0.035*.5*(  (1/7))",0.01,"0.006*(  (1/7))",0,0.045,0,"-0.025*.25*(  (1/7))",0.01,0,"-0.025*.25*(  (1/7))"};
	recoil_single_primary_prone_2outof10[] = {0.035,"0.004*(  (2/7))","0.035*.5*(  (2/7))",0.01,"0.006*(  (2/7))",0,0.045,0,"-0.025*.25*(  (2/7))",0.01,0,"-0.025*.25*(  (2/7))"};
	recoil_single_primary_prone_3outof10[] = {0.035,"0.004*(  (3/7))","0.035*.5*(  (3/7))",0.01,"0.006*(  (3/7))",0,0.045,0,"-0.025*.25*(  (3/7))",0.01,0,"-0.025*.25*(  (3/7))"};
	recoil_single_primary_prone_4outof10[] = {0.035,"0.004*(  (4/7))","0.035*.5*(  (4/7))",0.01,"0.006*(  (4/7))",0,0.045,0,"-0.025*.25*(  (4/7))",0.01,0,"-0.025*.25*(  (4/7))"};
	recoil_single_primary_prone_5outof10[] = {0.035,"0.004*(  (5/7))","0.035*.5*(  (5/7))",0.01,"0.006*(  (5/7))",0,0.045,0,"-0.025*.25*(  (5/7))",0.01,0,"-0.025*.25*(  (5/7))"};
	recoil_single_primary_prone_6outof10[] = {0.035,"0.004*(  (6/7))","0.035*.5*(  (6/7))",0.01,"0.006*(  (6/7))",0,0.045,0,"-0.025*.25*(  (6/7))",0.01,0,"-0.025*.25*(  (6/7))"};
	recoil_single_primary_prone_7outof10[] = {0.035,"0.004*(  (7/7))","0.035*.5*(  (7/7))",0.01,"0.006*(  (7/7))",0,0.045,0,"-0.025*.25*(  (7/7))",0.01,0,"-0.025*.25*(  (7/7))"};
	recoil_single_primary_prone_8outof10[] = {0.035,"0.004*(  (8/7))","0.035*.5*(  (8/7))",0.01,"0.006*(  (8/7))",0,0.045,0,"-0.025*.25*(  (8/7))",0.01,0,"-0.025*.25*(  (8/7))"};
	recoil_single_primary_prone_9outof10[] = {0.035,"0.004*(  (9/7))","0.035*.5*(  (9/7))",0.01,"0.006*(  (9/7))",0,0.045,0,"-0.025*.25*(  (9/7))",0.01,0,"-0.025*.25*(  (9/7))"};
	recoil_single_primary_prone_10outof10[] = {0.035,"0.004*( (10/7))","0.035*.5*( (10/7))",0.01,"0.006*( (10/7))",0,0.045,0,"-0.025*.25*( (10/7))",0.01,0,"-0.025*.25*( (10/7))"};
	recoil_auto_primary_1outof10[] = {0,"0.006*(  (1/7))","0.035*.5*(  (1/7))",0.04,"0.009*(  (1/7))","0.015*(  (1/7))",0.025,0,"0.0125*(  (1/7))"};
	recoil_auto_primary_2outof10[] = {0,"0.006*(  (2/7))","0.035*.5*(  (2/7))",0.04,"0.009*(  (2/7))","0.015*(  (2/7))",0.025,0,"0.0125*(  (2/7))"};
	recoil_auto_primary_3outof10[] = {0,"0.006*(  (3/7))","0.035*.5*(  (3/7))",0.04,"0.009*(  (3/7))","0.015*(  (3/7))",0.025,0,"0.0125*(  (3/7))"};
	recoil_auto_primary_4outof10[] = {0,"0.006*(  (4/7))","0.035*.5*(  (4/7))",0.04,"0.009*(  (4/7))","0.015*(  (4/7))",0.025,0,"0.0125*(  (4/7))"};
	recoil_auto_primary_5outof10[] = {0,"0.006*(  (5/7))","0.035*.5*(  (5/7))",0.04,"0.009*(  (5/7))","0.015*(  (5/7))",0.025,0,"0.0125*(  (5/7))"};
	recoil_auto_primary_6outof10[] = {0,"0.006*(  (6/7))","0.035*.5*(  (6/7))",0.04,"0.009*(  (6/7))","0.015*(  (6/7))",0.025,0,"0.0125*(  (6/7))"};
	recoil_auto_primary_7outof10[] = {0,"0.006*(  (7/7))","0.035*.5*(  (7/7))",0.04,"0.009*(  (7/7))","0.015*(  (7/7))",0.025,0,"0.0125*(  (7/7))"};
	recoil_auto_primary_8outof10[] = {0,"0.006*(  (8/7))","0.035*.5*(  (8/7))",0.04,"0.009*(  (8/7))","0.015*(  (8/7))",0.025,0,"0.0125*(  (8/7))"};
	recoil_auto_primary_9outof10[] = {0,"0.006*(  (9/7))","0.035*.5*(  (9/7))",0.04,"0.009*(  (9/7))","0.015*(  (9/7))",0.025,0,"0.0125*(  (9/7))"};
	recoil_auto_primary_10outof10[] = {0,"0.006*( (10/7))","0.035*.5*( (10/7))",0.04,"0.009*( (10/7))","0.015*( (10/7))",0.025,0,"0.0125*( (10/7))"};
	recoil_auto_primary_prone_1outof10[] = {0,"0.004*(  (1/7))","0.035*.25*(  (1/7))",0.035,"0.006*(  (1/7))","0.035*(  (1/7))",0.01,"0.006*(  (1/7))",0,0.012,0,"-0.0125*(  (1/7))",0.01,0,"-0.0025*(  (1/7))"};
	recoil_auto_primary_prone_2outof10[] = {0,"0.004*(  (2/7))","0.035*.25*(  (2/7))",0.035,"0.006*(  (2/7))","0.035*(  (2/7))",0.01,"0.006*(  (2/7))",0,0.012,0,"-0.0125*(  (2/7))",0.01,0,"-0.0025*(  (2/7))"};
	recoil_auto_primary_prone_3outof10[] = {0,"0.004*(  (3/7))","0.035*.25*(  (3/7))",0.035,"0.006*(  (3/7))","0.035*(  (3/7))",0.01,"0.006*(  (3/7))",0,0.012,0,"-0.0125*(  (3/7))",0.01,0,"-0.0025*(  (3/7))"};
	recoil_auto_primary_prone_4outof10[] = {0,"0.004*(  (4/7))","0.035*.25*(  (4/7))",0.035,"0.006*(  (4/7))","0.035*(  (4/7))",0.01,"0.006*(  (4/7))",0,0.012,0,"-0.0125*(  (4/7))",0.01,0,"-0.0025*(  (4/7))"};
	recoil_auto_primary_prone_5outof10[] = {0,"0.004*(  (5/7))","0.035*.25*(  (5/7))",0.035,"0.006*(  (5/7))","0.035*(  (5/7))",0.01,"0.006*(  (5/7))",0,0.012,0,"-0.0125*(  (5/7))",0.01,0,"-0.0025*(  (5/7))"};
	recoil_auto_primary_prone_6outof10[] = {0,"0.004*(  (6/7))","0.035*.25*(  (6/7))",0.035,"0.006*(  (6/7))","0.035*(  (6/7))",0.01,"0.006*(  (6/7))",0,0.012,0,"-0.0125*(  (6/7))",0.01,0,"-0.0025*(  (6/7))"};
	recoil_auto_primary_prone_7outof10[] = {0,"0.004*(  (7/7))","0.035*.25*(  (7/7))",0.035,"0.006*(  (7/7))","0.035*(  (7/7))",0.01,"0.006*(  (7/7))",0,0.012,0,"-0.0125*(  (7/7))",0.01,0,"-0.0025*(  (7/7))"};
	recoil_auto_primary_prone_8outof10[] = {0,"0.004*(  (8/7))","0.035*.25*(  (8/7))",0.035,"0.006*(  (8/7))","0.035*(  (8/7))",0.01,"0.006*(  (8/7))",0,0.012,0,"-0.0125*(  (8/7))",0.01,0,"-0.0025*(  (8/7))"};
	recoil_auto_primary_prone_9outof10[] = {0,"0.004*(  (9/7))","0.035*.25*(  (9/7))",0.035,"0.006*(  (9/7))","0.035*(  (9/7))",0.01,"0.006*(  (9/7))",0,0.012,0,"-0.0125*(  (9/7))",0.01,0,"-0.0025*(  (9/7))"};
	recoil_auto_primary_prone_10outof10[] = {0,"0.004*( (10/7))","0.035*.25*( (10/7))",0.035,"0.006*( (10/7))","0.035*( (10/7))",0.01,"0.006*( (10/7))",0,0.012,0,"-0.0125*( (10/7))",0.01,0,"-0.0025*( (10/7))"};
	recoil_auto_machinegun_1outof10[] = {0,"0.006*.5*(  (1/7))","0.0005*2*(  (1/7))",0.03,"0.009*.5*(  (1/7))","0.001*2*(  (1/7))",0.04,0,"0.01*2*(  (1/7))"};
	recoil_auto_machinegun_2outof10[] = {0,"0.006*.5*(  (2/7))","0.0005*2*(  (2/7))",0.03,"0.009*.5*(  (2/7))","0.001*2*(  (2/7))",0.04,0,"0.01*2*(  (2/7))"};
	recoil_auto_machinegun_3outof10[] = {0,"0.006*.5*(  (3/7))","0.0005*2*(  (3/7))",0.03,"0.009*.5*(  (3/7))","0.001*2*(  (3/7))",0.04,0,"0.01*2*(  (3/7))"};
	recoil_auto_machinegun_4outof10[] = {0,"0.006*.5*(  (4/7))","0.0005*2*(  (4/7))",0.03,"0.009*.5*(  (4/7))","0.001*2*(  (4/7))",0.04,0,"0.01*2*(  (4/7))"};
	recoil_auto_machinegun_5outof10[] = {0,"0.006*.5*(  (5/7))","0.0005*2*(  (5/7))",0.03,"0.009*.5*(  (5/7))","0.001*2*(  (5/7))",0.04,0,"0.01*2*(  (5/7))"};
	recoil_auto_machinegun_6outof10[] = {0,"0.006*.5*(  (6/7))","0.0005*2*(  (6/7))",0.03,"0.009*.5*(  (6/7))","0.001*2*(  (6/7))",0.04,0,"0.01*2*(  (6/7))"};
	recoil_auto_machinegun_7outof10[] = {0,"0.006*.5*(  (7/7))","0.0005*2*(  (7/7))",0.03,"0.009*.5*(  (7/7))","0.001*2*(  (7/7))",0.04,0,"0.01*2*(  (7/7))"};
	recoil_auto_machinegun_8outof10[] = {0,"0.006*.5*(  (8/7))","0.0005*2*(  (8/7))",0.03,"0.009*.5*(  (8/7))","0.001*2*(  (8/7))",0.04,0,"0.01*2*(  (8/7))"};
	recoil_auto_machinegun_9outof10[] = {0,"0.006*.5*(  (9/7))","0.0005*2*(  (9/7))",0.03,"0.009*.5*(  (9/7))","0.001*2*(  (9/7))",0.04,0,"0.01*2*(  (9/7))"};
	recoil_auto_machinegun_10outof10[] = {0,"0.006*.5*( (10/7))","0.0005*2*( (10/7))",0.03,"0.009*.5*( (10/7))","0.001*2*( (10/7))",0.04,0,"0.01*2*( (10/7))"};
	recoil_auto_machinegun_prone_1outof10[] = {0,"0.004*.5*(  (1/7))","0.0035*.25*(  (1/7))",0.03,"0.006*.5*(  (1/7))","0.007*(  (1/7))",0.01,"0.006*.5*(  (1/7))",0,0.084,0,"-0.0025*(  (1/7))",0.084,0,"-0.0025*(  (1/7))"};
	recoil_auto_machinegun_prone_2outof10[] = {0,"0.004*.5*(  (2/7))","0.0035*.25*(  (2/7))",0.03,"0.006*.5*(  (2/7))","0.007*(  (2/7))",0.01,"0.006*.5*(  (2/7))",0,0.084,0,"-0.0025*(  (2/7))",0.084,0,"-0.0025*(  (2/7))"};
	recoil_auto_machinegun_prone_3outof10[] = {0,"0.004*.5*(  (3/7))","0.0035*.25*(  (3/7))",0.03,"0.006*.5*(  (3/7))","0.007*(  (3/7))",0.01,"0.006*.5*(  (3/7))",0,0.084,0,"-0.0025*(  (3/7))",0.084,0,"-0.0025*(  (3/7))"};
	recoil_auto_machinegun_prone_4outof10[] = {0,"0.004*.5*(  (4/7))","0.0035*.25*(  (4/7))",0.03,"0.006*.5*(  (4/7))","0.007*(  (4/7))",0.01,"0.006*.5*(  (4/7))",0,0.084,0,"-0.0025*(  (4/7))",0.084,0,"-0.0025*(  (4/7))"};
	recoil_auto_machinegun_prone_5outof10[] = {0,"0.004*.5*(  (5/7))","0.0035*.25*(  (5/7))",0.03,"0.006*.5*(  (5/7))","0.007*(  (5/7))",0.01,"0.006*.5*(  (5/7))",0,0.084,0,"-0.0025*(  (5/7))",0.084,0,"-0.0025*(  (5/7))"};
	recoil_auto_machinegun_prone_6outof10[] = {0,"0.004*.5*(  (6/7))","0.0035*.25*(  (6/7))",0.03,"0.006*.5*(  (6/7))","0.007*(  (6/7))",0.01,"0.006*.5*(  (6/7))",0,0.084,0,"-0.0025*(  (6/7))",0.084,0,"-0.0025*(  (6/7))"};
	recoil_auto_machinegun_prone_7outof10[] = {0,"0.004*.5*(  (7/7))","0.0035*.25*(  (7/7))",0.03,"0.006*.5*(  (7/7))","0.007*(  (7/7))",0.01,"0.006*.5*(  (7/7))",0,0.084,0,"-0.0025*(  (7/7))",0.084,0,"-0.0025*(  (7/7))"};
	recoil_auto_machinegun_prone_8outof10[] = {0,"0.004*.5*(  (8/7))","0.0035*.25*(  (8/7))",0.03,"0.006*.5*(  (8/7))","0.007*(  (8/7))",0.01,"0.006*.5*(  (8/7))",0,0.084,0,"-0.0025*(  (8/7))",0.084,0,"-0.0025*(  (8/7))"};
	recoil_auto_machinegun_prone_9outof10[] = {0,"0.004*.5*(  (9/7))","0.0035*.25*(  (9/7))",0.03,"0.006*.5*(  (9/7))","0.007*(  (9/7))",0.01,"0.006*.5*(  (9/7))",0,0.084,0,"-0.0025*(  (9/7))",0.084,0,"-0.0025*(  (9/7))"};
	recoil_auto_machinegun_prone_10outof10[] = {0,"0.004*.5*( (10/7))","0.0035*.25*( (10/7))",0.03,"0.006*.5*( (10/7))","0.007*( (10/7))",0.01,"0.006*.5*( (10/7))",0,0.084,0,"-0.0025*( (10/7))",0.084,0,"-0.0025*( (10/7))"};
	recoil_single_pistol_1outof3[] = {0.04,"0.006*(  (3/7))","0.05*.5*(  (3/7))",0.01,"0.009*(  (3/7))",0,0.045,0,"-0.025*.5*(  (3/7))"};
	recoil_single_pistol_2outof3[] = {0.04,"0.006*(  (5/7))","0.05*.5*(  (5/7))",0.01,"0.009*(  (5/7))",0,0.045,0,"-0.025*.5*(  (5/7))"};
	recoil_single_pistol_3outof3[] = {0.04,"0.006*(  (7/7))","0.05*.5*(  (7/7))",0.01,"0.009*(  (7/7))",0,0.045,0,"-0.025*.5*(  (7/7))"};
	recoil_single_pistol_prone_1outof3[] = {0.035,"0.004*(  (4/7))","0.035*.5*(  (4/7))",0.01,"0.006*(  (4/7))",0,0.045,0,"-0.025*.25*(  (4/7))",0.01,0,"-0.025*.25*(  (4/7))"};
	recoil_single_pistol_prone_2outof3[] = {0.035,"0.004*(  (6/7))","0.035*.5*(  (6/7))",0.01,"0.006*(  (6/7))",0,0.045,0,"-0.025*.25*(  (6/7))",0.01,0,"-0.025*.25*(  (6/7))"};
	recoil_single_pistol_prone_3outof3[] = {0.035,"0.004*(  (8/7))","0.035*.5*(  (8/7))",0.01,"0.006*(  (8/7))",0,0.045,0,"-0.025*.25*(  (8/7))",0.01,0,"-0.025*.25*(  (8/7))"};
	recoil_recoiless_weapon[] = {0.5,0,0.04};
	recoil_empty[] = {0,0,0};
};
class CfgAmmo
{
	class Default;
	class TimeBombCore;
	class MineCore;
	class BulletCore;
	class BombCore;
	class BulletBase: BulletCore
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		model = "\ca\Weapons\shell";
		caliber = 1;
		soundFly[] = {"",1e-008,1};
		soundDefault1[] = {"ca\sounds\weapons\hits\hit_concrete_01",0.31622776,1,60};
		soundDefault2[] = {"ca\sounds\weapons\hits\hit_concrete_02",0.31622776,1,60};
		soundDefault3[] = {"ca\sounds\weapons\hits\hit_concrete_03",0.31622776,1,60};
		soundDefault4[] = {"ca\sounds\weapons\hits\hit_concrete_04",0.31622776,1,60};
		soundDefault5[] = {"ca\sounds\weapons\hits\rico_hit_concrete_01",0.31622776,1,60};
		soundDefault6[] = {"ca\sounds\weapons\hits\rico_hit_concrete_02",0.31622776,1,60};
		soundDefault7[] = {"ca\sounds\weapons\hits\rico_hit_concrete_03",0.31622776,1,60};
		soundDefault8[] = {"ca\sounds\weapons\hits\rico_hit_concrete_04",0.31622776,1,60};
		soundGroundSoft1[] = {"ca\sounds\weapons\hits\hit_earth_01",0.056234132,1,60};
		soundGroundSoft2[] = {"ca\sounds\weapons\hits\hit_earth_02",0.056234132,1,60};
		soundGroundSoft3[] = {"ca\sounds\weapons\hits\hit_earth_03",0.056234132,1,60};
		soundGroundSoft4[] = {"ca\sounds\weapons\hits\hit_earth_04",0.056234132,1,60};
		soundGroundSoft5[] = {"ca\sounds\weapons\hits\rico_hit_earth_01",0.056234132,1,60};
		soundGroundSoft6[] = {"ca\sounds\weapons\hits\rico_hit_earth_02",0.056234132,1,60};
		soundGroundSoft7[] = {"ca\sounds\weapons\hits\rico_hit_earth_03",0.056234132,1,60};
		soundGroundSoft8[] = {"ca\sounds\weapons\hits\rico_hit_earth_04",0.056234132,1,60};
		soundGroundHard1[] = {"ca\sounds\weapons\hits\hit_concrete_01",0.12589253,1,80};
		soundGroundHard2[] = {"ca\sounds\weapons\hits\hit_concrete_02",0.12589253,1,80};
		soundGroundHard3[] = {"ca\sounds\weapons\hits\hit_concrete_03",0.12589253,1,80};
		soundGroundHard4[] = {"ca\sounds\weapons\hits\hit_concrete_04",0.12589253,1,80};
		soundGroundHard5[] = {"ca\sounds\weapons\hits\rico_hit_concrete_01",0.12589253,1,80};
		soundGroundHard6[] = {"ca\sounds\weapons\hits\rico_hit_concrete_02",0.12589253,1,80};
		soundGroundHard7[] = {"ca\sounds\weapons\hits\rico_hit_concrete_03",0.12589253,1,80};
		soundGroundHard8[] = {"ca\sounds\weapons\hits\rico_hit_concrete_04",0.12589253,1,80};
		soundMetal1[] = {"ca\sounds\weapons\hits\hit_metalplate_01",0.31622776,1,90};
		soundMetal2[] = {"ca\sounds\weapons\hits\hit_metalplate_02",0.31622776,1,90};
		soundMetal3[] = {"ca\sounds\weapons\hits\hit_metalplate_03",0.31622776,1,90};
		soundMetal4[] = {"ca\sounds\weapons\hits\hit_metalplate_04",0.31622776,1,90};
		soundMetal5[] = {"ca\sounds\weapons\hits\hit_metalplate_05",0.31622776,1,90};
		soundMetal6[] = {"ca\sounds\weapons\hits\hit_metalplate_06",0.31622776,1,90};
		soundMetal7[] = {"ca\sounds\weapons\hits\hit_metalplate_07",0.31622776,1,90};
		soundMetal8[] = {"ca\sounds\weapons\hits\hit_metalplate_08",0.31622776,1,90};
		soundMetal9[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_01",0.31622776,1,90};
		soundMetal10[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_02",0.31622776,1,90};
		soundMetal11[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_03",0.31622776,1,90};
		soundMetal12[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_04",0.31622776,1,90};
		soundGlass1[] = {"ca\sounds\weapons\hits\hit_glass_01",0.17782794,1,50};
		soundGlass2[] = {"ca\sounds\weapons\hits\hit_glass_02",0.17782794,1,50};
		soundGlass3[] = {"ca\sounds\weapons\hits\hit_glass_03",0.17782794,1,50};
		soundGlass4[] = {"ca\sounds\weapons\hits\hit_glass_04",0.17782794,1,50};
		soundGlass5[] = {"ca\sounds\weapons\hits\hit_glass_05",0.17782794,1,50};
		soundGlass6[] = {"ca\sounds\weapons\hits\hit_glass_06",0.17782794,1,50};
		soundGlass7[] = {"ca\sounds\weapons\hits\hit_glass_07",0.17782794,1,50};
		soundGlass8[] = {"ca\sounds\weapons\hits\hit_glass_08",0.17782794,1,50};
		soundGlass9[] = {"ca\sounds\weapons\hits\hit_glass_09",0.17782794,1,50};
		soundGlass10[] = {"ca\sounds\weapons\hits\hit_glass_10",0.17782794,1,50};
		soundIron1[] = {"ca\sounds\weapons\hits\hit_iron_01",0.31622776,1,90};
		soundIron2[] = {"ca\sounds\weapons\hits\hit_iron_02",0.31622776,1,90};
		soundIron3[] = {"ca\sounds\weapons\hits\hit_iron_03",0.31622776,1,90};
		soundIron4[] = {"ca\sounds\weapons\hits\hit_iron_04",0.31622776,1,90};
		soundIron5[] = {"ca\sounds\weapons\hits\hit_iron_05",0.31622776,1,90};
		soundIron6[] = {"ca\sounds\weapons\hits\hit_iron_06",0.31622776,1,90};
		soundIron7[] = {"ca\sounds\weapons\hits\hit_iron_07",0.31622776,1,90};
		soundIron8[] = {"ca\sounds\weapons\hits\hit_iron_08",0.31622776,1,90};
		soundIron9[] = {"ca\sounds\weapons\hits\rico_hit_iron_01",0.31622776,1,90};
		soundIron10[] = {"ca\sounds\weapons\hits\rico_hit_iron_02",0.31622776,1,90};
		soundIron11[] = {"ca\sounds\weapons\hits\rico_hit_iron_03",0.31622776,1,90};
		soundIron12[] = {"ca\sounds\weapons\hits\rico_hit_iron_04",0.31622776,1,90};
		soundGlassArmored1[] = {"ca\sounds\weapons\hits\hit_glass_armored_01",0.17782794,1,60};
		soundGlassArmored2[] = {"ca\sounds\weapons\hits\hit_glass_armored_02",0.17782794,1,60};
		soundGlassArmored3[] = {"ca\sounds\weapons\hits\hit_glass_armored_03",0.17782794,1,60};
		soundGlassArmored4[] = {"ca\sounds\weapons\hits\hit_glass_armored_04",0.17782794,1,60};
		soundGlassArmored5[] = {"ca\sounds\weapons\hits\hit_glass_armored_05",0.17782794,1,60};
		soundGlassArmored6[] = {"ca\sounds\weapons\hits\hit_glass_armored_06",0.17782794,1,60};
		soundGlassArmored7[] = {"ca\sounds\weapons\hits\hit_glass_armored_07",0.17782794,1,60};
		soundGlassArmored8[] = {"ca\sounds\weapons\hits\hit_glass_armored_08",0.17782794,1,60};
		soundVehiclePlate1[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_01",0.56234133,1,90};
		soundVehiclePlate2[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_02",0.56234133,1,90};
		soundVehiclePlate3[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_03",0.56234133,1,90};
		soundVehiclePlate4[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_04",0.56234133,1,90};
		soundVehiclePlate5[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_05",0.56234133,1,90};
		soundVehiclePlate6[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_06",0.56234133,1,90};
		soundVehiclePlate7[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_07",0.56234133,1,90};
		soundVehiclePlate8[] = {"ca\sounds\weapons\hits\hit_vehicle_plate_08",0.56234133,1,90};
		soundVehiclePlate9[] = {"ca\sounds\weapons\hits\rico_hit_vehicle_plate_01",0.56234133,1,90};
		soundVehiclePlate10[] = {"ca\sounds\weapons\hits\rico_hit_vehicle_plate_02",0.56234133,1,90};
		soundVehiclePlate11[] = {"ca\sounds\weapons\hits\rico_hit_vehicle_plate_03",0.56234133,1,90};
		soundVehiclePlate12[] = {"ca\sounds\weapons\hits\rico_hit_vehicle_plate_04",0.56234133,1,90};
		soundWood1[] = {"ca\sounds\weapons\hits\hit_wood_01",0.31622776,1,60};
		soundWood2[] = {"ca\sounds\weapons\hits\hit_wood_02",0.31622776,1,60};
		soundWood3[] = {"ca\sounds\weapons\hits\hit_wood_03",0.31622776,1,60};
		soundWood4[] = {"ca\sounds\weapons\hits\hit_wood_04",0.31622776,1,60};
		soundWood5[] = {"ca\sounds\weapons\hits\hit_wood_05",0.31622776,1,60};
		soundWood6[] = {"ca\sounds\weapons\hits\hit_wood_06",0.31622776,1,60};
		soundWood7[] = {"ca\sounds\weapons\hits\hit_wood_07",0.31622776,1,60};
		soundWood8[] = {"ca\sounds\weapons\hits\hit_wood_08",0.31622776,1,60};
		soundWood9[] = {"ca\sounds\weapons\hits\rico_hit_wood_01",0.31622776,1,60};
		soundWood10[] = {"ca\sounds\weapons\hits\rico_hit_wood_02",0.31622776,1,60};
		soundWood11[] = {"ca\sounds\weapons\hits\rico_hit_wood_03",0.31622776,1,60};
		soundWood12[] = {"ca\sounds\weapons\hits\rico_hit_wood_04",0.31622776,1,60};
		soundHitBody1[] = {"ca\sounds\weapons\hits\hit_body_01",0.017782794,1,50};
		soundHitBody2[] = {"ca\sounds\weapons\hits\hit_body_02",0.017782794,1,50};
		soundHitBody3[] = {"ca\sounds\weapons\hits\hit_body_03",0.017782794,1,50};
		soundHitBody4[] = {"ca\sounds\weapons\hits\hit_body_04",0.017782794,1,50};
		soundHitBody5[] = {"ca\sounds\weapons\hits\hit_body_05",0.017782794,1,50};
		soundHitBody6[] = {"ca\sounds\weapons\hits\hit_body_06",0.017782794,1,50};
		soundHitBody7[] = {"ca\sounds\weapons\hits\hit_body_07",0.017782794,1,50};
		soundHitBody8[] = {"ca\sounds\weapons\hits\hit_body_08",0.017782794,1,50};
		soundHitBody9[] = {"ca\sounds\weapons\hits\hit_body_09",0.017782794,1,50};
		soundHitBody10[] = {"ca\sounds\weapons\hits\hit_body_10",0.017782794,1,50};
		soundHitBody11[] = {"ca\sounds\weapons\hits\hit_body_11",0.017782794,1,50};
		soundHitBody12[] = {"ca\sounds\weapons\hits\hit_body_12",0.017782794,1,50};
		soundHitBody13[] = {"ca\sounds\weapons\hits\hit_body_13",0.017782794,1,50};
		soundMetalPlate1[] = {"ca\sounds\weapons\hits\hit_metalplate_01",0.56234133,1,90};
		soundMetalPlate2[] = {"ca\sounds\weapons\hits\hit_metalplate_02",0.56234133,1,90};
		soundMetalPlate3[] = {"ca\sounds\weapons\hits\hit_metalplate_03",0.56234133,1,90};
		soundMetalPlate4[] = {"ca\sounds\weapons\hits\hit_metalplate_04",0.56234133,1,90};
		soundMetalPlate5[] = {"ca\sounds\weapons\hits\hit_metalplate_05",0.56234133,1,90};
		soundMetalPlate6[] = {"ca\sounds\weapons\hits\hit_metalplate_06",0.56234133,1,90};
		soundMetalPlate7[] = {"ca\sounds\weapons\hits\hit_metalplate_07",0.56234133,1,90};
		soundMetalPlate8[] = {"ca\sounds\weapons\hits\hit_metalplate_08",0.56234133,1,90};
		soundMetalPlate9[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_01",0.56234133,1,90};
		soundMetalPlate10[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_02",0.56234133,1,90};
		soundMetalPlate11[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_03",0.56234133,1,90};
		soundMetalPlate12[] = {"ca\sounds\weapons\hits\rico_hit_metalplate_04",0.56234133,1,90};
		soundHitBuilding1[] = {"ca\sounds\weapons\hits\hit_wall_01",0.25118864,1,60};
		soundHitBuilding2[] = {"ca\sounds\weapons\hits\hit_wall_02",0.25118864,1,60};
		soundHitBuilding3[] = {"ca\sounds\weapons\hits\hit_wall_03",0.25118864,1,60};
		soundHitBuilding4[] = {"ca\sounds\weapons\hits\hit_wall_04",0.25118864,1,60};
		soundHitBuilding5[] = {"ca\sounds\weapons\hits\hit_wall_05",0.25118864,1,60};
		soundHitBuilding6[] = {"ca\sounds\weapons\hits\rico_hit_wall_01",0.25118864,1,60};
		soundHitBuilding7[] = {"ca\sounds\weapons\hits\rico_hit_wall_02",0.25118864,1,60};
		soundHitBuilding8[] = {"ca\sounds\weapons\hits\rico_hit_wall_03",0.25118864,1,60};
		soundHitBuilding9[] = {"ca\sounds\weapons\hits\rico_hit_wall_04",0.25118864,1,60};
		soundHitBuilding10[] = {"ca\sounds\weapons\hits\rico_hit_wall_05",0.25118864,1,60};
		soundHitFoliage1[] = {"ca\sounds\weapons\hits\hit_grass_01",0.17782794,1,50};
		soundHitFoliage2[] = {"ca\sounds\weapons\hits\hit_grass_02",0.17782794,1,50};
		soundHitFoliage3[] = {"ca\sounds\weapons\hits\hit_grass_03",0.17782794,1,50};
		soundHitFoliage4[] = {"ca\sounds\weapons\hits\hit_grass_04",0.17782794,1,50};
		soundPlastic1[] = {"ca\sounds\weapons\hits\hit_Rubber_01",0.17782794,1,50};
		soundPlastic2[] = {"ca\sounds\weapons\hits\hit_Rubber_02",0.17782794,1,50};
		soundConcrete1[] = {"ca\sounds\weapons\hits\hit_concrete_01",0.17782794,1,70};
		soundConcrete2[] = {"ca\sounds\weapons\hits\hit_concrete_02",0.17782794,1,70};
		soundConcrete3[] = {"ca\sounds\weapons\hits\hit_concrete_03",0.17782794,1,70};
		soundConcrete4[] = {"ca\sounds\weapons\hits\hit_concrete_04",0.17782794,1,70};
		soundConcrete5[] = {"ca\sounds\weapons\hits\rico_hit_concrete_01",0.17782794,1,70};
		soundConcrete6[] = {"ca\sounds\weapons\hits\rico_hit_concrete_02",0.17782794,1,70};
		soundConcrete7[] = {"ca\sounds\weapons\hits\rico_hit_concrete_03",0.17782794,1,70};
		soundConcrete8[] = {"ca\sounds\weapons\hits\rico_hit_concrete_04",0.17782794,1,70};
		soundRubber1[] = {"ca\sounds\weapons\hits\hit_Rubber_01",0.31622776,1,50};
		soundRubber2[] = {"ca\sounds\weapons\hits\hit_Rubber_02",0.31622776,1,50};
		soundRubber3[] = {"ca\sounds\weapons\hits\hit_Rubber_03",0.31622776,1,50};
		soundRubber4[] = {"ca\sounds\weapons\hits\hit_Rubber_04",0.31622776,1,50};
		soundRubber5[] = {"ca\sounds\weapons\hits\hit_Rubber_05",0.31622776,1,50};
		hitGroundSoft[] = {"soundGroundSoft1",0.2,"soundGroundSoft2",0.2,"soundGroundSoft3",0.1,"soundGroundSoft4",0.1,"soundGroundSoft5",0.1,"soundGroundSoft6",0.1,"soundGroundSoft7",0.1,"soundGroundSoft8",0.1};
		hitGroundHard[] = {"soundGroundHard1",0.2,"soundGroundHard2",0.2,"soundGroundHard3",0.1,"soundGroundHard4",0.1,"soundGroundHard5",0.1,"soundGroundHard6",0.1,"soundGroundHard7",0.1,"soundGroundHard8",0.1};
		hitMan[] = {"soundHitBody1",0.077,"soundHitBody2",0.077,"soundHitBody3",0.077,"soundHitBody4",0.077,"soundHitBody5",0.077,"soundHitBody6",0.077,"soundHitBody7",0.077,"soundHitBody8",0.077,"soundHitBody9",0.077,"soundHitBody10",0.077,"soundHitBody11",0.077,"soundHitBody12",0.077,"soundHitBody13",0.077};
		hitArmor[] = {"soundVehiclePlate1",0.1,"soundVehiclePlate2",0.1,"soundVehiclePlate3",0.05,"soundVehiclePlate4",0.05,"soundVehiclePlate5",0.1,"soundVehiclePlate6",0.05,"soundVehiclePlate7",0.1,"soundVehiclePlate8",0.1,"soundVehiclePlate9",0.05,"soundVehiclePlate10",0.1,"soundVehiclePlate11",0.1,"soundVehiclePlate12",0.1};
		hitIron[] = {"soundIron1",0.1,"soundIron2",0.1,"soundIron3",0.1,"soundIron4",0.1,"soundIron5",0.1,"soundIron6",0.1,"soundIron7",0.05,"soundIron8",0.05,"soundIron9",0.1,"soundIron10",0.1,"soundIron11",0.05,"soundIron12",0.05};
		hitBuilding[] = {"soundHitBuilding1",0.1,"soundHitBuilding2",0.1,"soundHitBuilding3",0.1,"soundHitBuilding4",0.1,"soundHitBuilding5",0.1,"soundHitBuilding6",0.1,"soundHitBuilding7",0.1,"soundHitBuilding8",0.1,"soundHitBuilding9",0.1,"soundHitBuilding10",0.1};
		hitFoliage[] = {"soundHitFoliage1",0.25,"soundHitFoliage2",0.25,"soundHitFoliage3",0.25,"soundHitFoliage4",0.25};
		hitWood[] = {"soundWood1",0.1,"soundWood2",0.1,"soundWood3",0.1,"soundWood4",0.05,"soundWood5",0.05,"soundWood6",0.1,"soundWood7",0.1,"soundWood8",0.1,"soundWood9",0.1,"soundWood10",0.1,"soundWood11",0.05,"soundWood12",0.05};
		hitGlass[] = {"soundGlass1",0.1,"soundGlass2",0.1,"soundGlass3",0.1,"soundGlass4",0.1,"soundGlass5",0.1,"soundGlass6",0.1,"soundGlass7",0.1,"soundGlass8",0.1,"soundGlass9",0.1,"soundGlass10",0.1};
		hitGlassArmored[] = {"soundGlassArmored1",0.125,"soundGlassArmored2",0.125,"soundGlassArmored3",0.125,"soundGlassArmored4",0.125,"soundGlassArmored5",0.125,"soundGlassArmored6",0.125,"soundGlassArmored7",0.125,"soundGlassArmored8",0.125};
		hitConcrete[] = {"soundConcrete1",0.2,"soundConcrete2",0.2,"soundConcrete3",0.2,"soundConcrete4",0.05,"soundConcrete5",0.05,"soundConcrete6",0.1,"soundConcrete7",0.1,"soundConcrete8",0.1};
		hitRubber[] = {"soundRubber1",0.2,"soundRubber2",0.2,"soundRubber3",0.2,"soundRubber4",0.2,"soundRubber5",0.2};
		hitPlastic[] = {"soundPlastic1",0.5,"soundPlastic2",0.5};
		hitDefault[] = {"soundDefault1",0.2,"soundDefault2",0.2,"soundDefault3",0.1,"soundDefault4",0.1,"soundDefault5",0.1,"soundDefault6",0.1,"soundDefault7",0.1,"soundDefault8",0.1};
		hitMetal[] = {"soundMetal1",0.1,"soundMetal2",0.1,"soundMetal3",0.1,"soundMetal4",0.05,"soundMetal5",0.1,"soundMetal6",0.1,"soundMetal7",0.05,"soundMetal8",0.1,"soundMetal9",0.05,"soundMetal10",0.05,"soundMetal11",0.1,"soundMetal12",0.1};
		hitMetalplate[] = {"soundMetalPlate1",0.1,"soundMetalPlate2",0.1,"soundMetalPlate3",0.1,"soundMetalPlate4",0.05,"soundMetalPlate5",0.05,"soundMetalPlate6",0.05,"soundMetalPlate7",0.1,"soundMetalPlate8",0.1,"soundMetalPlate9",0.1,"soundMetalPlate10",0.1,"soundMetalPlate11",0.1,"soundMetalPlate12",0.05};
		bulletFly1[] = {"ca\sounds\weapons\hits\bullet_by1",1.0,1,50};
		bulletFly2[] = {"ca\sounds\weapons\hits\bullet_by2",1.0,1,50};
		bulletFly3[] = {"ca\sounds\weapons\hits\bullet_by3",1.0,1,50};
		bulletFly4[] = {"ca\sounds\weapons\hits\bullet_by4",1.0,1,50};
		bulletFly5[] = {"ca\sounds\weapons\hits\bullet_by5",1.0,1,50};
		bulletFly6[] = {"ca\sounds\weapons\hits\bullet_by6",1.0,1,50};
		bulletFly[] = {"bulletFly1",0.166,"bulletFly2",0.166,"bulletFly3",0.166,"bulletFly4",0.166,"bulletFly5",0.166,"bulletFly6",0.167};
		supersonicCrackNear[] = {"Ca\sounds\Weapons\explosions\supersonic_crack_close",1,1,150};
		supersonicCrackFar[] = {"Ca\sounds\Weapons\explosions\supersonic_crack_50meters",1,1,250};
		cartridge = "FxCartridge_556";
		cost = 0.7;
		timeToLive = 6;
		deflecting = 10;
		tracerStartTime = -1;
		class HitEffects
		{
			Hit_Foliage = "ImpactLeaves";
			Hit_Glass = "ImpactGlass";
			Hit_Glass_Thin = "ImpactGlassThin";
			Hit_Wood = "ImpactWood";
			Hit_Metal = "ImpactMetal";
			Hit_Plaster = "ImpactPlaster";
			Hit_Rubber = "ImpactRubber";
			Hit_Concrete = "ImpactConcrete";
			Hit_Blood = "ImpactBlood";
		};
		muzzleEffect = "BIS_Effects_Rifle";
	};
	class FlareCore;
	class FlareBase: FlareCore
	{
		muzzleEffect = "BIS_Effects_Rifle";
	};
	class B_9x18_Ball: BulletBase
	{
		hit = 6;
		cartridge = "FxCartridge_9mm";
		cost = 5;
		typicalSpeed = 350;
		airFriction = -0.002751;
		caliber = 0.33;
	};
	class B_9x18_SD: B_9x18_Ball
	{
		hit = 6;
		visibleFire = 0.035;
		audibleFire = 0.035;
		visibleFireTime = 2;
		cost = 5;
		typicalSpeed = 310;
		airFriction = -0.001893;
	};
	class B_9x19_Ball: B_9x18_Ball
	{
		hit = 5;
		cost = 5;
		typicalSpeed = 398;
		airFriction = -0.001513;
	};
	class B_9x19_SD: B_9x19_Ball
	{
		hit = 5;
		visibleFire = 0.035;
		audibleFire = 0.035;
		visibleFireTime = 2;
		cost = 5;
		typicalSpeed = 315;
		airFriction = -0.001312;
	};
	class B_45ACP_Ball: BulletBase
	{
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		caliber = 0.33;
		visibleFire = 16;
		audibleFire = 18;
		cost = 5;
		typicalSpeed = 260;
		airFriction = -0.001;
	};
	class B_545x39_Ball: BulletBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		airFriction = -0.001412;
		caliber = 0.5;
		model = "\ca\Weapons\Data\bullettracer\tracer_green";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
	};
	class B_545x39_SD: BulletBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 0.07;
		audibleFire = 0.07;
		visibleFireTime = 2;
		cost = 1;
		typicalSpeed = 320;
		airFriction = -0.0006;
		caliber = 0.5;
	};
	class B_556x45_Ball: BulletBase
	{
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		cost = 1;
		airFriction = -0.001425;
		caliber = 0.5;
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 1;
	};
	class B_556x45_SD: BulletBase
	{
		hit = 7;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 0.07;
		audibleFire = 0.07;
		visibleFireTime = 2;
		cost = 1;
		typicalSpeed = 320;
		airFriction = -0.0006;
		caliber = 0.5;
	};
	class B_9x39_SP5: BulletBase
	{
		hit = 13;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		cost = 5;
		typicalSpeed = 150;
		visibleFire = 0.07;
		audibleFire = 0.07;
		visibleFireTime = 2;
		airFriction = -0.001;
		caliber = 0.33;
	};
	class B_12Gauge_74Slug: BulletBase
	{
		hit = 11;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_slug";
		cost = 5;
		typicalSpeed = 400;
		visibleFire = 18;
		audibleFire = 18;
		airFriction = -0.005;
		caliber = 0.5;
	};
	class B_762x39_Ball: BulletBase
	{
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 18;
		audibleFire = 18;
		cost = 1;
		typicalSpeed = 710;
		tracerColor[] = {0.2,0.8,0.1,0.04};
		tracerColorR[] = {0,0,0,0};
		airFriction = -0.00195;
		caliber = 0.83;
	};
	class B_762x51_Ball: BulletBase
	{
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.0009324;
	};
	class B_762x51_3RndBurst: B_762x51_Ball
	{
		hit = 25;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 25;
		audibleFire = 22;
		visibleFireTime = 4;
	};
	class B_762x51_noTracer: B_762x51_Ball
	{
		visibleFire = 18;
		audibleFire = 18;
		visibleFireTime = 2;
		tracerStartTime = -1;
	};
	class B_762x54_Ball: BulletBase
	{
		hit = 12;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		model = "\ca\Weapons\Data\bullettracer\tracer_green";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00096;
	};
	class B_762x54_noTracer: B_762x54_Ball
	{
		airLock = 0;
		visibleFire = 18;
		audibleFire = 18;
		visibleFireTime = 2;
		tracerStartTime = -1;
	};
	class B_77x56_Ball: BulletBase
	{
		hit = 15;
		indirectHit = 5;
		indirectHitRange = 0.3;
		visibleFire = 22;
		audibleFire = 20;
		visibleFireTime = 3;
		cost = 1.2;
		airLock = 1;
		tracerColor[] = {0.8,0.8,0.1,0.04};
		tracerColorR[] = {0.8,0.8,0.1,0.04};
		airFriction = -0.001;
		model = "\ca\Weapons\Data\bullettracer\tracer_yellow";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
	};
	class B_127x99_Ball: BulletBase
	{
		hit = 26;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 22;
		audibleFire = 22;
		visibleFireTime = 3;
		cost = 20;
		airLock = 1;
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale = 1.5;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		airFriction = -0.00068;
		caliber = 2.07;
	};
	class B_127x99_Ball_noTracer: B_127x99_Ball
	{
		visibleFire = 20;
		audibleFire = 22;
		visibleFireTime = 3;
		tracerColor[] = {0,0,0,0};
		tracerColorR[] = {0,0,0,0};
		tracerStartTime = -1;
		airFriction = -0.0005;
		muzzleEffect = "BIS_Effects_HeavySniper";
	};
	class B_127x107_Ball: BulletBase
	{
		hit = 28;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 20;
		audibleFire = 22;
		visibleFireTime = 3;
		cost = 20;
		airLock = 1;
		caliber = 2.07;
		model = "\ca\Weapons\Data\bullettracer\tracer_green";
		tracerScale = 1.5;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		airFriction = -0.0006;
	};
	class B_127x108_Ball: BulletBase
	{
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 21;
		audibleFire = 22;
		visibleFireTime = 3;
		cost = 20;
		airLock = 1;
		airFriction = -0.00055;
		muzzleEffect = "BIS_Effects_HeavySniper";
		caliber = 2.07;
	};
	class B_127x108_APHE: BulletBase
	{
		hit = 24;
		indirectHit = 5;
		indirectHitRange = 0.1;
		cartridge = "FxCartridge_127";
		visibleFire = 22;
		audibleFire = 22;
		explosive = 0.1;
		visibleFireTime = 3;
		cost = 20;
		airLock = 1;
		model = "\ca\Weapons\Data\bullettracer\tracer_green";
		tracerScale = 1.5;
		tracerStartTime = 0.05;
		tracerEndTime = 2.3;
		airFriction = -0.00055;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		caliber = 2.07;
	};
	class B_145x115_AP: BulletBase
	{
		hit = 31;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 25;
		audibleFire = 25;
		visibleFireTime = 3;
		cost = 22;
		airLock = 1;
		model = "\ca\Weapons\Data\bullettracer\tracer_green";
		tracerScale = 1.6;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00068;
		caliber = 1.87;
	};
	class B_20mm_AP: BulletBase
	{
		hit = 40;
		indirectHit = 10;
		indirectHitRange = 2;
		visibleFire = 28;
		audibleFire = 28;
		visibleFireTime = 3;
		cost = 25;
		airLock = 1;
		explosive = 0.6;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00077;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		caliber = 2.33;
	};
	class B_20mm_AA: BulletBase
	{
		hit = 57;
		indirectHit = 20;
		indirectHitRange = 0.4;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		soundHit[] = {"Ca\sounds\Weapons\explosions\AZP85_explosion1",17.782795,1,1500};
		explosive = 0.6;
		airLock = 1;
		cost = 25;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale = 1.8;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00077;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		caliber = 2.33;
	};
	class B_23mm_AA: BulletBase
	{
		hit = 84;
		indirectHit = 30;
		indirectHitRange = 0.3;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		soundHit[] = {"Ca\sounds\Weapons\explosions\AZP85_explosion1",3.1622777,1,1500};
		explosive = 0.6;
		airLock = 1;
		cost = 150;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\ca\Weapons\Data\bullettracer\tracer_green";
		tracerScale = 1.85;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.000824;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		caliber = 1.11;
	};
	class B_23mm_HE: B_23mm_AA
	{
		hit = 42;
		indirectHit = 15;
		indirectHitRange = 0.3;
		cost = 75;
	};
	class B_23mm_AP: B_23mm_AA
	{
		hit = 108;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		cost = 75;
		airFriction = -0.000612;
		caliber = 3.33;
	};
	class B_23mm_APHE: BulletBase
	{
		hit = 45;
		indirectHit = 10;
		indirectHitRange = 0.2;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		soundHit[] = {"Ca\sounds\Weapons\explosions\AZP85_explosion1",3.1622777,1,1500};
		explosive = 0.5;
		airLock = 1;
		cost = 35;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\ca\Weapons\Data\bullettracer\tracer_green";
		tracerScale = 1.85;
		tracerStartTime = 0.05;
		tracerEndTime = 2;
		airFriction = -0.000824;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		caliber = 1.11;
	};
	class B_25mm_HE: BulletBase
	{
		hit = 124;
		indirectHit = 30;
		indirectHitRange = 0.75;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		explosive = 0.6;
		cost = 40;
		airLock = 1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale = 1.9;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00086;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		caliber = 1.22;
	};
	class B_25mm_HEI: B_25mm_HE
	{
		hit = 42;
		indirectHit = 25;
		indirectHitRange = 0.75;
	};
	class B_25mm_APDS: BulletBase
	{
		hit = 65;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		cost = 40;
		airLock = 1;
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale = 1.9;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.000774;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		caliber = 3.67;
	};
	class B_30mm_AP: BulletBase
	{
		hit = 79;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 3;
		cost = 50;
		model = "\ca\Weapons\Data\bullettracer\tracer_green";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.000855;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		caliber = 4.17;
	};
	class B_30mmA10_AP: BulletBase
	{
		hit = 210;
		indirectHit = 36;
		indirectHitRange = 3;
		visibleFire = 25;
		audibleFire = 28;
		visibleFireTime = 4;
		cost = 80;
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		airFriction = -0.00076;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		explosive = 0.1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		caliber = 4.17;
	};
	class B_30mm_HE: BulletBase
	{
		hit = 55;
		indirectHit = 30;
		indirectHitRange = 1;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 3;
		explosive = 0.6;
		cost = 50;
		airLock = 1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\ca\Weapons\Data\bullettracer\tracer_green";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00095;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		caliber = 1.39;
	};
	class B_30mm_AA: BulletBase
	{
		hit = 101;
		indirectHit = 35;
		indirectHitRange = 0.5;
		visibleFire = 38;
		audibleFire = 38;
		visibleFireTime = 5;
		soundHit[] = {"Ca\sounds\Weapons\explosions\AZP85_explosion1",3.1622777,1,1500};
		explosive = 0.6;
		airLock = 1;
		cost = 42;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		model = "\ca\Weapons\Data\bullettracer\tracer_green";
		tracerScale = 1.85;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00095;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		caliber = 1.39;
	};
	class GrenadeCore;
	class GrenadeBase: GrenadeCore
	{
		soundHit[] = {"Ca\sounds\Weapons\explosions\grenade_new1",3.1622777,1,600};
		supersonicCrackNear[] = {"Ca\sounds\Weapons\explosions\supersonic_crack_close",1,1,100};
		supersonicCrackFar[] = {"Ca\sounds\Weapons\explosions\supersonic_crack_50meters",1,1,150};
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		muzzleEffect = "BIS_Effects_Rifle";
	};
	class G_30mm_HE: GrenadeBase
	{
		model = "\ca\Weapons\granat";
		simulation = "shotShell";
		soundHit[] = {"Ca\sounds\Weapons\explosions\GP25_explosion",3.1622777,1,1300};
		hit = 13;
		indirectHit = 10;
		indirectHitRange = 5.5;
		visibleFire = 18;
		audibleFire = 18;
		visibleFireTime = 3;
		explosive = 1;
		cost = 10;
		deflecting = 5;
		airFriction = -0.001064;
		fuseDistance = 15;
		whistleDist = 5.5;
	};
	class G_40mm_HE: GrenadeBase
	{
		soundHit[] = {"Ca\sounds\Weapons\explosions\GP25_explosion",3.1622777,1,1300};
		simulation = "shotShell";
		model = "\ca\Weapons\granat";
		hit = 12;
		indirectHit = 10;
		indirectHitRange = 5;
		visibleFire = 16;
		audibleFire = 18;
		visibleFireTime = 3;
		explosive = 1;
		cost = 10;
		deflecting = 5;
		airFriction = -0.001064;
		fuseDistance = 15;
		whistleDist = 5;
	};
	class F_40mm_White: FlareBase
	{
		model = "\ca\Weapons\granat";
		lightColor[] = {0.5,0.5,0.5,0};
		deflecting = 30;
	};
	class F_40mm_Green: F_40mm_White
	{
		lightColor[] = {0.25,0.5,0.25,0};
	};
	class F_40mm_Red: F_40mm_White
	{
		lightColor[] = {0.5,0.25,0.25,0};
	};
	class F_40mm_Yellow: F_40mm_White
	{
		lightColor[] = {0.5,0.5,0.25,0};
	};
	class ShellCore;
	class ShellBase: ShellCore
	{
		soundHit[] = {"Ca\sounds\Weapons\explosions\explo_large_03",56.23413,1,1800};
		supersonicCrackNear[] = {"Ca\sounds\Weapons\explosions\supersonic_crack_close",1,1,100};
		supersonicCrackFar[] = {"Ca\sounds\Weapons\explosions\supersonic_crack_50meters",1,1,150};
		CraterEffects = "HEShellCrater";
		ExplosionEffects = "HEShellExplosion";
		visibleFire = 64;
		audibleFire = 64;
		timeToLive = 60;
		muzzleEffect = "BIS_Effects_Cannon";
		caliber = 33.33;
		whistleOnFire = 2;
	};
	class Sh_105_HE: ShellBase
	{
		hit = 210;
		indirectHit = 40;
		indirectHitRange = 20;
		typicalSpeed = 1300;
		explosive = 0.8;
		cost = 300;
		model = "\ca\Weapons\shell";
		airFriction = -0.00045;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ArtyShellExplosion";
		caliber = 6;
		whistleDist = 40;
	};
	class Sh_100_HE: Sh_105_HE
	{
		timeToLive = 15;
	};
	class Sh_120_HE: ShellBase
	{
		hit = 330;
		indirectHit = 42;
		indirectHitRange = 7;
		typicalSpeed = 1300;
		explosive = 0.8;
		cost = 300;
		simulation = "shotBullet";
		airFriction = -0.00045;
		caliber = 10;
		timeToLive = 15;
		whistleDist = 14;
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
	};
	class Sh_120_SABOT: ShellBase
	{
		hit = 800;
		indirectHit = 10;
		indirectHitRange = 1;
		typicalSpeed = 1900;
		cost = 1000;
		deflecting = 15;
		airFriction = -4e-005;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		simulation = "shotBullet";
		caliber = 33.33;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\ca\Weapons\Data\bullettracer\tracer_red";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
	};
	class Sh_122_HE: ShellBase
	{
		hit = 340;
		indirectHit = 45;
		indirectHitRange = 30;
		typicalSpeed = 1300;
		explosive = 0.8;
		cost = 300;
		model = "\ca\Weapons\shell";
		airFriction = -0.00045;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ArtyShellExplosion";
		caliber = 7;
		whistleDist = 60;
	};
	class Sh_125_HE: ShellBase
	{
		hit = 350;
		indirectHit = 45;
		indirectHitRange = 7;
		typicalSpeed = 1000;
		explosive = 0.8;
		cost = 300;
		airFriction = -0.00045;
		simulation = "shotBullet";
		model = "\ca\Weapons\Data\bullettracer\tracer_green";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		caliber = 12;
		timeToLive = 15;
		whistleDist = 14;
	};
	class Sh_125_SABOT: ShellBase
	{
		hit = 650;
		indirectHit = 11;
		indirectHitRange = 1;
		typicalSpeed = 1800;
		cost = 1000;
		deflecting = 15;
		airFriction = -4e-005;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		simulation = "shotBullet";
		model = "\ca\Weapons\Data\bullettracer\tracer_green";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		caliber = 21.67;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
	};
	class Sh_85_HE: ShellBase
	{
		hit = 180;
		indirectHit = 32;
		indirectHitRange = 12;
		explosive = 0.8;
		typicalSpeed = 790;
		cost = 200;
		airFriction = -0.000112;
		simulation = "shotBullet";
		model = "\ca\Weapons\Data\bullettracer\tracer_green";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		caliber = 5;
		timeToLive = 15;
		whistleDist = 12;
	};
	class Sh_85_AP: ShellBase
	{
		hit = 386;
		indirectHit = 8;
		indirectHitRange = 1;
		typicalSpeed = 790;
		cost = 200;
		deflecting = 15;
		airFriction = -0.000112;
		simulation = "shotBullet";
		model = "\ca\Weapons\Data\bullettracer\tracer_green";
		tracerScale = 2;
		tracerStartTime = 0.1;
		tracerEndTime = 2.3;
		caliber = 15;
		whistleOnFire = 1;
		whistleDist = 12;
	};
	class RocketCore;
	class RocketBase: RocketCore
	{
		model = "\ca\weapons\AT1";
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2;
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_large1",44.668358,1,1800};
		soundFly[] = {"Ca\sounds\Weapons\explosions\rocket_fly1",0.1,1.5,400};
		soundEngine[] = {"Ca\sounds\Weapons\explosions\noise",0.0031622776,1,20};
		supersonicCrackNear[] = {"Ca\sounds\Weapons\explosions\supersonic_crack_close",1,1,150};
		supersonicCrackFar[] = {"Ca\sounds\Weapons\explosions\supersonic_crack_50meters",1,1,250};
		maxSpeed = 1;
		initTime = 0;
		thrustTime = 0.2;
		thrust = 2000;
		CraterEffects = "HERocketCrater";
		explosionEffects = "HERocketExplosion";
		muzzleEffect = "BIS_Effects_Rocket";
		effectsMissile = "missile1";
	};
	class G_Camel_HE: RocketCore
	{
		model = "\ca\Weapons\granat";
		hit = 20;
		indirectHit = 12;
		indirectHitRange = 5;
		visibleFire = 18;
		audibleFire = 18;
		visibleFireTime = 3;
		explosive = 1;
		cost = 10;
		initTime = 0;
		thrustTime = 0.01;
		thrust = 0.01;
		whistleDist = 10;
	};
	class R_Hydra_HE: RocketBase
	{
		model = "\ca\air\70mmRocket";
		hit = 150;
		indirectHit = 40;
		indirectHitRange = 12;
		cost = 200;
		maxSpeed = 740;
		thrustTime = 1.1;
		thrust = 570;
		sideAirFriction = 0.2;
		timeToLive = 20;
		fuseDistance = 40;
		whistleDist = 24;
	};
	class R_57mm_HE: RocketBase
	{
		model = "\ca\air\70mmRocket";
		hit = 150;
		indirectHit = 40;
		indirectHitRange = 12;
		cost = 200;
		maxSpeed = 580;
		thrustTime = 1.1;
		thrust = 450;
		sideAirFriction = 0.15;
		fuseDistance = 40;
		timeToLive = 20;
		whistleDist = 24;
	};
	class R_80mm_HE: RocketBase
	{
		model = "\ca\air\70mmRocket";
		hit = 210;
		indirectHit = 55;
		indirectHitRange = 15;
		cost = 300;
		maxSpeed = 610;
		thrustTime = 1.1;
		thrust = 470;
		sideAirFriction = 0.22;
		fuseDistance = 50;
		whistleDist = 30;
		timeToLive = 60;
	};
	class R_S8T_AT: RocketBase
	{
		model = "\ca\air\70mmRocket";
		hit = 430;
		indirectHit = 30;
		indirectHitRange = 5;
		cost = 300;
		maxSpeed = 470;
		thrustTime = 1.1;
		thrust = 362;
		sideAirFriction = 0.22;
		fuseDistance = 30;
		timeToLive = 60;
		whistleDist = 10;
	};
	class R_M136_AT: RocketBase
	{
		hit = 335;
		indirectHit = 11;
		indirectHitRange = 1.1;
		model = "\ca\weapons\m136_Rocket";
		cost = 200;
		initTime = 0.1;
		thrust = 280;
		thrustTime = 1.0;
		maxSpeed = 290;
		sideAirFriction = 0.5;
		timeToLive = 6;
		fuseDistance = 5;
		visibleFire = 24;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 2;
	};
	class R_RPG18_AT: RocketBase
	{
		model = "\ca\weapons\m136_Rocket";
		hit = 300;
		indirectHit = 7.5;
		indirectHitRange = 1;
		cost = 200;
		timeToLive = 6;
		initTime = 0;
		thrust = 80;
		thrustTime = 1;
		maxSpeed = 115;
		sideAirFriction = 0.5;
		fuseDistance = 5;
		visibleFire = 24;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 2;
	};
	class R_PG7V_AT: RocketBase
	{
		hit = 208;
		indirectHit = 20;
		indirectHitRange = 2;
		model = "\ca\weapons\PG7_Rocket";
		cost = 100;
		initTime = 0.1;
		thrust = 280;
		thrustTime = 1;
		maxSpeed = 295;
		sideAirFriction = 0.5;
		timeToLive = 4.5;
		fuseDistance = 5;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 4;
	};
	class R_PG7VL_AT: R_PG7V_AT
	{
		hit = 320;
		indirectHit = 10;
		indirectHitRange = 1;
		model = "\ca\weapons\PG7VL_Rocket";
		cost = 200;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 2;
	};
	class R_PG7VR_AT: R_PG7V_AT
	{
		hit = 510;
		indirectHit = 20;
		model = "\ca\weapons\PG7VR_Rocket";
		cost = 300;
		maxSpeed = 200;
		initTime = 0.15;
		thrust = 165;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 4;
	};
	class R_OG7_AT: R_PG7V_AT
	{
		hit = 75;
		indirectHit = 20;
		indirectHitRange = 12;
		model = "\ca\weapons\OG7V_Rocket";
		cost = 100;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 24;
	};
	class R_PG9_AT: RocketBase
	{
		hit = 320;
		indirectHit = 10;
		indirectHitRange = 1;
		model = "\ca\weapons\SPG9\PG9_Projectile";
		initTime = 0.05;
		timeToLive = 3;
		cost = 400;
		maxSpeed = 700;
		thrustTime = 1;
		thrust = 500;
		fuseDistance = 5;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 2;
	};
	class R_OG9_HE: R_PG9_AT
	{
		hit = 120;
		indirectHit = 30;
		indirectHitRange = 10;
		model = "\ca\weapons\SPG9\OG9_Projectile";
		cost = 200;
		fuseDistance = 12;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		whistleDist = 20;
	};
	class R_SMAW_HEDP: RocketBase
	{
		model = "\ca\weapons2\SMAW\SMAW_rocket_inflight.p3d";
		hit = 150;
		indirectHit = 40;
		indirectHitRange = 12;
		cost = 200;
		initTime = 0.02;
		thrust = 610;
		thrustTime = 1;
		maxSpeed = 750;
		sideAirFriction = 0.22;
		timeToLive = 6;
		fuseDistance = 15;
		visibleFire = 28;
		audibleFire = 16;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissile = "missile2";
		whistleDist = 24;
	};
	class R_SMAW_HEAA: R_SMAW_HEDP
	{
		hit = 480;
		indirectHit = 12;
		indirectHitRange = 1.2;
		cost = 500;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		whistleDist = 2;
	};
	class R_GRAD: RocketBase
	{
		hit = 340;
		indirectHit = 45;
		indirectHitRange = 30;
		model = "\ca\weapons\grad";
		initTime = 0.05;
		timeToLive = 3;
		cost = 400;
		maxSpeed = 700;
		thrustTime = 1;
		thrust = 500;
		fuseDistance = 5;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ArtyShellExplosion";
		effectsMissile = "missile5";
		whistleOnFire = 2;
		whistleDist = 60;
	};
	class R_MLRS: RocketBase
	{
		hit = 1000;
		indirectHit = 100;
		indirectHitRange = 40;
		model = "\ca\weapons\grad";
		initTime = 0.05;
		timeToLive = 3;
		cost = 400;
		maxSpeed = 700;
		thrustTime = 1;
		thrust = 500;
		fuseDistance = 5;
		whistleOnFire = 2;
		whistleDist = 80;
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "ArtyShellExplosion";
		effectsMissile = "missile5";
	};
	class MissileCore;
	class MissileBase: MissileCore
	{
		manualControl = 0;
		maneuvrability = 20;
		maxSpeed = 500;
		simulationStep = 0.01;
		sideAirFriction = 0.2;
		maxControlRange = 4000;
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_large1",19.952627,1,1800};
		soundFly[] = {"Ca\sounds\Weapons\explosions\rocket_fly1",0.1,1.5,400};
		soundEngine[] = {"Ca\sounds\Weapons\explosions\noise",0.0031622776,1,50};
		supersonicCrackNear[] = {"Ca\sounds\Weapons\explosions\supersonic_crack_close",1,1,100};
		supersonicCrackFar[] = {"Ca\sounds\Weapons\explosions\supersonic_crack_50meters",1,1,250};
		CraterEffects = "ATMissileCrater";
		explosionEffects = "ATMissileExplosion";
		muzzleEffect = "BIS_Effects_Rocket";
		effectsMissile = "missile4";
		deflecting = 0;
	};
	class M_Javelin_AT: MissileBase
	{
		model = "\ca\weapons\Javelin_Rocket";
		hit = 800;
		indirectHit = 20;
		indirectHitRange = 2;
		maneuvrability = 12;
		simulationStep = 0.001;
		irLock = 1;
		cost = 10000;
		timeToLive = 30;
		sideAirFriction = 0.1;
		trackOversteer = 1.0;
		trackLead = 1;
		maxSpeed = 430;
		initTime = 0.3;
		thrustTime = 5.0;
		thrust = 125;
		fuseDistance = 5;
		whistleDist = 4;
	};
	class M_Stinger_AA: MissileBase
	{
		model = "\ca\weapons\Stinger_Rocket";
		hit = 70;
		indirectHit = 50;
		indirectHitRange = 8;
		maneuvrability = 14;
		simulationStep = 0.002;
		trackOversteer = 0.85;
		trackLead = 0;
		airLock = 1;
		irLock = 1;
		cost = 10000;
		timeToLive = 15;
		sideAirFriction = 0.75;
		maxSpeed = 750;
		initTime = 0.25;
		thrustTime = 2;
		thrust = 1050;
		fuseDistance = 50;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		whistleDist = 16;
	};
	class M_Sidewinder_AA: MissileBase
	{
		model = "\ca\air\sidewinder_fly";
		proxyShape = "\ca\air\sidewinder_proxy";
		hit = 200;
		indirectHit = 85;
		indirectHitRange = 10;
		maneuvrability = 27;
		simulationStep = 0.002;
		airLock = 1;
		irLock = 1;
		cost = 15000;
		maxSpeed = 828;
		timeToLive = 35;
		sideAirFriction = 0.2;
		trackOversteer = 1.0;
		trackLead = 1;
		initTime = 0.0;
		thrustTime = 5.0;
		thrust = 2900;
		fuseDistance = 500;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		whistleDist = 20;
	};
	class M_Sidewinder_AA_F35: M_Sidewinder_AA
	{
		proxyShape = "\ca\weapons\empty";
	};
	class M_Strela_AA: MissileBase
	{
		model = "\ca\weapons\strela_Rocket";
		hit = 66;
		indirectHit = 50;
		indirectHitRange = 8;
		maneuvrability = 10;
		simulationStep = 0.002;
		trackOversteer = 0.75;
		trackLead = 0;
		airLock = 1;
		irLock = 1;
		cost = 7500;
		maxSpeed = 580;
		initTime = 0.25;
		thrustTime = 1.5;
		thrust = 609;
		fuseDistance = 120;
		timeToLive = 15;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		whistleDist = 16;
	};
	class M_Igla_AA: M_Strela_AA
	{
		model = "\ca\weapons\strela_Rocket";
		hit = 70;
		indirectHit = 50;
		indirectHitRange = 8;
		maneuvrability = 14;
		trackOversteer = 0.85;
		sideAirFriction = 0.75;
		cost = 10000;
		maxSpeed = 800;
		initTime = 0.25;
		thrustTime = 1.5;
		thrust = 840;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		whistleDist = 16;
	};
	class M_AT5_AT: MissileBase
	{
		model = "\ca\weapons\AT1";
		hit = 480;
		indirectHit = 12;
		indirectHitRange = 1.2;
		cost = 8000;
		irLock = 1;
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_large1",17.782795,1,1900};
		soundFly[] = {"Ca\sounds\Weapons\explosions\rocket_fly1",0.31622776,1.5,300};
		soundEngine[] = {"Ca\sounds\Weapons\explosions\noise",0.031622775,1,50};
		manualControl = 1;
		maxControlRange = 4000;
		trackOversteer = 0.95;
		trackLead = 0.9;
		maneuvrability = 8;
		timeToLive = 25;
		simulationStep = 0.005;
		sideAirFriction = 0.05;
		maxSpeed = 200;
		initTime = 0.25;
		thrustTime = 1.5;
		thrust = 210;
		deflecting = 0;
		fuseDistance = 5;
		whistleDist = 2;
	};
	class M_AT13_AT: M_AT5_AT
	{
		hit = 670;
		indirectHit = 16;
		indirectHitRange = 1.5;
		whistleDist = 3;
	};
	class M_TOW_AT: MissileBase
	{
		model = "\ca\weapons\tow";
		hit = 480;
		indirectHit = 12;
		indirectHitRange = 1.2;
		cost = 8000;
		irLock = 1;
		manualControl = 1;
		trackOversteer = 0.95;
		trackLead = 0.9;
		timeToLive = 9;
		maneuvrability = 10;
		simulationStep = 0.005;
		sideAirFriction = 0.05;
		maxControlRange = 3750;
		maxSpeed = 296;
		initTime = 0.151;
		thrustTime = 1.45;
		thrust = 300;
		deflecting = 0;
		fuseDistance = 5;
		effectsMissile = "missile2";
		whistleDist = 2;
	};
	class M_TOW2_AT: M_TOW_AT
	{
		hit = 850;
		indirectHit = 20;
		indirectHitRange = 2;
		maxSpeed = 329;
		thrust = 334;
		whistleDist = 4;
	};
	class M_AT10_AT: MissileBase
	{
		model = "\ca\weapons\AT1";
		hit = 600;
		indirectHit = 15;
		indirectHitRange = 1.5;
		cost = 10000;
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_large1",17.782795,1,1900};
		soundFly[] = {"Ca\sounds\Weapons\explosions\rocket_fly1",0.31622776,1.5,300};
		soundEngine[] = {"Ca\sounds\Weapons\explosions\noise",0.031622775,1,50};
		maneuvrability = 8;
		simulationStep = 0.002;
		irLock = 1;
		timeToLive = 32;
		sideAirFriction = 0.1;
		trackOversteer = 0.95;
		trackLead = 0.8;
		maxSpeed = 430;
		initTime = 1.5;
		thrustTime = 6.0;
		thrust = 1806;
		fuseDistance = 15;
		effectsMissile = "missile2";
		whistleDist = 3;
	};
	class M_AT11_AT: M_AT10_AT
	{
		hit = 760;
		indirectHit = 18;
		indirectHitRange = 1.8;
		cost = 20000;
		whistleDist = 4;
	};
	class M_Hellfire_AT: MissileBase
	{
		model = "\ca\weapons\Hellfire";
		proxyShape = "\ca\weapons\Hellfire_proxy";
		hit = 800;
		indirectHit = 20;
		indirectHitRange = 2;
		cost = 10000;
		maxSpeed = 425;
		irLock = 1;
		laserLock = 1;
		maxControlRange = 8000;
		trackOversteer = 1;
		trackLead = 1;
		maneuvrability = 9;
		timeToLive = 20;
		simulationStep = 0.01;
		sideAirFriction = 0.2;
		initTime = 0.0;
		thrustTime = 3.25;
		thrust = 130;
		fuseDistance = 5;
		effectsMissile = "missile2";
		whistleDist = 4;
	};
	class M_Vikhr_AT: MissileBase
	{
		model = "\ca\weapons\AT1";
		hit = 800;
		indirectHit = 20;
		indirectHitRange = 2;
		cost = 10000;
		irLock = 1;
		airLock = 1;
		laserLock = 1;
		manualControl = 1;
		maxControlRange = 8000;
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_large1",35.481346,1,1800};
		initTime = 0;
		trackOversteer = 1;
		trackLead = 1;
		timeToLive = 23;
		maneuvrability = 10;
		simulationStep = 0.002;
		sideAirFriction = 0.2;
		maxSpeed = 600;
		thrustTime = 4.0;
		thrust = 1680;
		fuseDistance = 50;
		effectsMissile = "missile2";
		whistleDist = 4;
	};
	class M_Maverick_AT: MissileBase
	{
		model = "\ca\a10\agm65_fly";
		proxyShape = "\ca\a10\agm65";
		hit = 850;
		indirectHit = 20;
		indirectHitRange = 2;
		cost = 10000;
		irLock = 1;
		maxControlRange = 27000;
		initTime = 0.15;
		trackOversteer = 1;
		trackLead = 1;
		timeToLive = 120;
		maneuvrability = 8;
		simulationStep = 0.01;
		sideAirFriction = 0.2;
		maxSpeed = 300;
		thrustTime = 2.0;
		thrust = 141;
		effectsMissile = "missile4";
		whistleDist = 4;
	};
	class M_R73_AA: MissileBase
	{
		model = "\ca\air3\su34\r73_fly";
		proxyShape = "\ca\air3\su34\r73_proxy";
		hit = 160;
		indirectHit = 70;
		indirectHitRange = 9;
		maneuvrability = 35;
		simulationStep = 0.002;
		trackOversteer = 1.0;
		trackLead = 1;
		airLock = 1;
		irLock = 1;
		cost = 10000;
		maxSpeed = 828;
		timeToLive = 23;
		sideAirFriction = 0.2;
		initTime = 0.0;
		thrustTime = 5.0;
		thrust = 2900;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissile = "missile3";
		whistleDist = 18;
	};
	class M_Ch29_AT: MissileBase
	{
		hit = 4000;
		indirectHit = 900;
		indirectHitRange = 9;
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_large1",28.183832,1,1900};
		model = "\ca\air3\su34\ch29fly";
		proxyShape = "\ca\air3\su34\ch29_proxy";
		trackLead = 0.95;
		timeToLive = 120;
		irLock = 1;
		laserLock = 1;
		maneuvrability = 5;
		simulationStep = 0.01;
		sideAirFriction = 0.3;
		trackOversteer = 50;
		maxSpeed = 805;
		initTime = 0.8;
		thrustTime = 2.0;
		thrust = 150;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		effectsMissile = "missile4";
		whistleDist = 18;
	};
	class M_AT2_AT: MissileBase
	{
		model = "\CA\weapons\at1_proxy";
		proxyShape = "\CA\weapons\at1_proxy";
		hit = 400;
		indirectHit = 10;
		indirectHitRange = 1;
		deflecting = 0;
		cost = 7000;
		irLock = 1;
		manualControl = 1;
		maxControlRange = 3750;
		trackOversteer = 0.3;
		trackLead = 0.3;
		maneuvrability = 4;
		simulationStep = 0.005;
		sideAirFriction = 0.05;
		initTime = 0.151;
		thrustTime = 1.45;
		thrust = 191;
		maxSpeed = 323;
		timeToLive = 9;
		effectsMissile = "missile2";
		whistleDist = 2;
	};
	class M_AT6_AT: MissileBase
	{
		model = "\ca\weapons\AT1";
		hit = 400;
		indirectHit = 10;
		indirectHitRange = 1;
		cost = 5000;
		irLock = 1;
		manualControl = 1;
		maxControlRange = 5000;
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_large1",35.481346,1,1900};
		initTime = 0;
		trackOversteer = 0.75;
		trackLead = 0.75;
		timeToLive = 120;
		maneuvrability = 6;
		simulationStep = 0.002;
		sideAirFriction = 0.05;
		maxSpeed = 345;
		thrustTime = 3.5;
		thrust = 845;
		effectsMissile = "missile2";
		whistleDist = 2;
	};
	class M_AT9_AT: M_AT6_AT
	{
		hit = 640;
		indirectHit = 16;
		indirectHitRange = 1.6;
		cost = 10000;
		maxControlRange = 6000;
		maneuvrability = 8;
		trackOversteer = 0.95;
		trackLead = 0.95;
		sideAirFriction = 0.1;
		maxSpeed = 550;
		thrust = 1348;
		effectsMissile = "missile2";
		whistleDist = 3;
	};
	class M_9M311_AA: MissileBase
	{
		model = "\ca\air\sidewinder_fly";
		proxyShape = "\ca\air\sidewinder_proxy";
		hit = 198;
		indirectHit = 135;
		indirectHitRange = 21;
		maneuvrability = 25;
		sideAirFriction = 1;
		simulationStep = 0.002;
		trackOversteer = 1;
		trackLead = 0.8;
		airLock = 1;
		irLock = 1;
		cost = 50000;
		maxSpeed = 900;
		initTime = 0;
		thrustTime = 6.5;
		thrust = 4095;
		fuseDistance = 500;
		maxControlRange = 10000;
		timeToLive = 15;
		effectsMissile = "missile3";
		whistleDist = 42;
	};
	class LaserBombCore;
	class Bo_GBU12_LGB: LaserBombCore
	{
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_large1",28.183832,1,1900};
		model = "\ca\air\gbu12fly";
		proxyShape = "\ca\air\gbu12_proxy";
		trackOversteer = 1;
		trackLead = 0.95;
		maneuvrability = 20;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		explosionTime = 2;
		fuseDistance = 35;
		whistleDist = 24;
	};
	class Bo_GBU12_LGB_F35: Bo_GBU12_LGB
	{
		proxyShape = "\ca\weapons\empty";
	};
	class Bo_FAB_250: BombCore
	{
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		cost = 1000;
		irLock = 0;
		laserLock = 0;
		maxControlRange = 10;
		maneuvrability = 16.0;
		sideAirFriction = 0.1;
		simulation = "shotRocket";
		maxSpeed = 100;
		timeToLive = 120;
		initTime = 0;
		thrustTime = 0;
		thrust = 0;
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_large1",28.183832,1,1900};
		model = "\ca\air\fab250";
		proxyShape = "\ca\air\fab250";
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		whistleDist = 24;
	};
	class Bo_Mk82: Bo_FAB_250
	{
		model = "\ca\air\mk82";
		proxyShape = "\ca\air\mk82";
	};
	class Grenade: Default
	{
		model = "\ca\Weapons\granat";
		hit = 20;
		indirectHit = 18;
		indirectHitRange = 7;
		typicalspeed = 60;
		cost = 40;
		simulation = "shotShell";
		simulationStep = 0.05;
		soundHit[] = {"Ca\sounds\Weapons\explosions\grenade_new1",15.848933,1,1000};
		soundFly[] = {"Ca\sounds\Weapons\explosions\noise",0.0001,1,20};
		soundEngine[] = {"",0.0001,4};
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 0;
		class HitEffects{};
		whistleDist = 7;
	};
	class GrenadeHand: Grenade
	{
		typicalspeed = 20;
		model = "\ca\Weapons\frag_rgd5";
		visibleFire = 0.5;
		audibleFire = 0.05;
		visibleFireTime = 1;
		fuseDistance = 5;
	};
	class GrenadeHandTimedWest: GrenadeHand
	{
		model = "\ca\Weapons\M67";
		deflecting = 90;
		explosionTime = 4;
	};
	class GrenadeHandTimedEast: GrenadeHandTimedWest
	{
		model = "\ca\Weapons\frag_rgd5";
	};
	class GrenadeHand_stone: GrenadeHand
	{
		hit = 0.5;
		indirectHit = 0.2;
		indirectHitRange = 1;
		model = "\ca\Weapons\sutr_grenade";
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		explosive = 0;
		soundHit[] = {"",15.848933,1};
		cost = 1;
		whistleDist = 0;
	};
	class SmokeShell: GrenadeHand
	{
		model = "\ca\Weapons\anm8_white";
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 0.2;
		cost = 100;
		simulation = "shotSmoke";
		explosive = 0;
		deflecting = 60;
		explosionTime = 2;
		timeToLive = 60;
		fuseDistance = 0;
		soundHit[] = {"",0,1};
		smokeColor[] = {1,1,1,1};
		effectsSmoke = "SmokeShellWhite";
		whistleDist = 0;
	};
	class G_40mm_Smoke: SmokeShell
	{
		model = "\ca\Weapons\granat";
	};
	class G_40mm_SmokeRed: G_40mm_Smoke
	{
		smokeColor[] = {0.8438,0.2383,0.1953,1};
	};
	class G_40mm_SmokeGreen: G_40mm_Smoke
	{
		smokeColor[] = {0.3125,0.6758,0.2891,1};
	};
	class G_40mm_SmokeYellow: G_40mm_Smoke
	{
		smokeColor[] = {0.9883,0.9606,0.1719,1};
	};
	class SmokeShellRed: SmokeShell
	{
		model = "\ca\Weapons\m18_red";
		smokeColor[] = {0.8438,0.2383,0.1953,1};
	};
	class SmokeShellGreen: SmokeShell
	{
		model = "\ca\Weapons\m18_green";
		smokeColor[] = {0.3125,0.6758,0.2891,1};
	};
	class SmokeShellYellow: SmokeShell
	{
		smokeColor[] = {0.9883,0.9606,0.1719,1};
	};
	class SmokeShellPurple: SmokeShell
	{
		model = "\ca\Weapons\m18_red";
		smokeColor[] = {0.6641,0.2188,0.7344,1};
	};
	class SmokeShellBlue: SmokeShell
	{
		model = "\ca\Weapons\m18_green";
		smokeColor[] = {0.2383,0.3867,0.6016,1};
	};
	class SmokeShellOrange: SmokeShell
	{
		smokeColor[] = {0.9297,0.4375,0.1953,1};
	};
	class SmokeShellVehicle: SmokeShell
	{
		soundFly[] = {"\ca\Weapons\Data\Sound\noise",0.1,1};
		effectsSmoke = "NoEffect";
	};
	class FlareCountermeasure: SmokeShellVehicle
	{
		airFriction = -0.05;
		model = "\ca\weapons\empty";
		deflecting = 70;
	};
	class TimeBomb: TimeBombCore
	{
		hit = 1200;
		indirectHit = 1100;
		indirectHitRange = 4;
		model = "\ca\Weapons\satchel";
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_mega_08",56.23413,1,1500};
		whistleDist = 10;
	};
	class PipeBomb: TimeBomb
	{
		simulation = "shotPipeBomb";
	};
	class Mine: MineCore
	{
		hit = 1200;
		indirectHit = 1100;
		indirectHitRange = 2;
		model = "\ca\Weapons\at15";
		defaultMagazine = "Mine";
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_mega_08",56.23413,1,1500};
		explosionEffects = "ATRocketExplosion";
		CraterEffects = "HERocketCrater";
		whistleDist = 4;
	};
	class MineE: Mine
	{
		model = "\ca\Weapons\tm46";
		defaultMagazine = "MineE";
	};
	class FuelExplosion: Default
	{
		hit = 100;
		indirectHit = 80;
		indirectHitRange = 2.5;
		model = "";
		simulation = "";
		cost = 1;
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_small_11",6.3095737,1,1600};
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,4};
		explosionEffects = "VehicleExplosionEffects";
	};
	class Laserbeam: Default
	{
		hit = 500;
		indirectHit = 150;
		indirectHitRange = 2.5;
		model = "\ca\weapons\empty";
		simulation = "laserDesignate";
		simulationStep = 0.1;
		cost = 5000;
		timeToLive = 0;
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_mega_09",19.952627,1,1500};
		soundFly[] = {"Ca\sounds\Weapons\explosions\rocket_fly1",0.0001,4};
		maxSpeed = 350;
		irLock = 1;
		manualControl = 1;
		maxControlRange = 0;
		aiRateOfFire = 0;
		aiRateOfFireDistance = 500;
		initTime = 0;
		maneuvrability = 0;
	};
	class HelicopterExploSmall: ShellBase
	{
		hit = 2500;
		indirectHit = 500;
		indirectHitRange = 10;
		typicalSpeed = 100;
		explosive = 1;
		cost = 300;
		model = "\ca\weapons\empty";
		airFriction = 0;
		timeToLive = 1;
		explosionTime = 0.001;
		soundFly[] = {"",1,1};
		soundEngine[] = {"",1,4};
		explosionEffects = "HelicopterExplosionEffects";
	};
	class HelicopterExploBig: HelicopterExploSmall
	{
		hit = 10000;
		indirectHit = 200;
		indirectHitRange = 6;
		explosionEffects = "HelicopterExplosionEffects2";
		soundHit[] = {"Ca\sounds\Weapons\explosions\explosion_small_11",5,1,1000};
	};
	class SmallSecondary: HelicopterExploSmall
	{
		hit = 5;
		indirectHit = 2;
		indirectHitRange = 5;
		explosionEffects = "SencondaryExplosion";
		craterEffects = "GrenadeCrater";
		soundHit[] = {"Ca\sounds\Weapons\explosions\grenade_new1",15.848933,1,999};
	};
	class SmokeLauncherAmmo: BulletBase
	{
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0;
		timeToLive = 0.01;
		muzzleEffect = "BIS_Effects_SmokeLauncher";
	};
	class FlareLauncherAmmo: SmokeLauncherAmmo
	{
		muzzleEffect = "BIS_Effects_Flares";
	};
};
class NoCrater{};
class NoExplosion{};
class CfgDestructPos
{
	scope = 1;
	class DelayedDestruction;
	class DelayedDestructionAmmo: DelayedDestruction
	{
		timeBeforeHiding = "21";
		hideDuration = "10";
	};
};
class WeaponCloudsMGun;
class CfgVehicles
{
	class All;
	class Strategic;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
	};
	class StaticWeapon: LandVehicle
	{
		vehicleClass = "Static";
		driverOpticsModel = "\ca\weapons\optika_empty";
		selectionClan = "clan";
		selectionDashboard = "podsvit pristroju";
		selectionShowDamage = "poskozeni";
		selectionBackLights = "light_back";
		bounding = "usti hlavne";
		alphaTracks = 0.7;
		textureTrackWheel = 0;
		selectionLeftOffset = "";
		selectionRightOffset = "";
		memoryPointTrack1L = "";
		memoryPointTrack1R = "";
		memoryPointTrack2L = "";
		memoryPointTrack2R = "";
		tracksSpeed = 1;
		unitInfoType = "RscUnitInfoSoldier";
		selectionFireAnim = "zasleh";
		fireDustEffect = "FDustEffects";
		class DestructionEffects{};
		memoryPointMissile[] = {"spice rakety","usti hlavne"};
		memoryPointMissileDir[] = {"konec rakety","konec hlavne"};
		memoryPointCargoLight = "cargo light";
		gunnerCanSee = "2+8+32+4";
		gunnerHasFlares = 0;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun = "usti hlavne";
				outGunnerMayFire = 1;
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				minElev = -7;
				maxElev = 70;
				initElev = 0;
				castGunnerShadow = 1;
				ejectDeadGunner = 1;
				gunnerGetInAction = "";
				gunnerGetOutAction = "";
				gunnerForceOptics = 0;
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
			};
		};
		damperSize = 1.4;
		damperForce = 0.8;
		gearBox[] = {-1,0,1};
		soundEnviron[] = {"",1.0,0.7};
		soundEngine[] = {"",10.0,1};
		soundCrash[] = {"",0.56234133,1};
		soundGear[] = {"",0.00031622776,1};
		soundDammage[] = {"",0.01,1};
		getInAction = "";
		getOutAction = "";
		cargoGetInAction[] = {""};
		cargoGetOutAction[] = {""};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		icon = "iconTank";
		mapSize = 5;
		getInRadius = 3.5;
		fuelCapacity = 0;
		irScanRangeMin = 500;
		irScanRangeMax = 4000;
		irScanToEyeFactor = 1;
		armor = 20;
		armorStructural = 2.0;
		class HitPoints
		{
			class HitEngine
			{
				armor = 0.8;
				material = -1;
				name = "motor";
				passThrough = 1;
			};
			class HitHull
			{
				armor = 1;
				material = -1;
				name = "telo";
				passThrough = 1;
			};
			class HitTurret
			{
				armor = 0.8;
				material = -1;
				name = "vez";
				passThrough = 1;
			};
			class HitGun
			{
				armor = 0.6;
				material = -1;
				name = "zbran";
				passThrough = 1;
			};
			class HitLTrack
			{
				armor = 0.6;
				material = -1;
				name = "pas_L";
				passThrough = 1;
			};
			class HitRTrack
			{
				armor = 0.6;
				material = -1;
				name = "pas_P";
				passThrough = 1;
			};
			class HitBody
			{
				armor = 1;
				material = -1;
				name = "NEzbytek";
				visual = "zbytek";
				passThrough = 1;
			};
		};
		extCameraPosition[] = {0,1.5,-9};
		class ViewPilot: ViewPilot
		{
			initAngleX = 7;
			minAngleX = -15;
			maxAngleX = 25;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};
		cost = 10000;
		steerAheadSimul = 0.4;
		steerAheadPlan = 0.6;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.8;
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		hasDriver = 0;
		nightVision = 0;
		driverAction = "ManActCargo";
		driverInAction = "ManActCargo";
		simulation = "tank";
		occludeSoundsWhenIn = 1.0;
		obstructSoundsWhenIn = 1.0;
		formationX = 10;
		formationZ = 10;
		precision = 1;
		brakeDistance = 0;
		maxSpeed = 0;
		canFloat = 0;
		weapons[] = {"FakeWeapon"};
		magazines[] = {"FakeWeapon"};
		type = 1;
		threat[] = {0.7,1,0.3};
		camouflage = 1;
		audible = 1;
		hideProxyInCombat = 0;
		driverOpticsColor[] = {0,0,0,1};
		class CargoLight
		{
			color[] = {0,0,0,0};
			ambient[] = {0.6,0,0.15,1};
			brightness = 0.007;
		};
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		class Reflectors{};
		secondaryExplosion = 0;
	};
	class StaticMGWeapon: StaticWeapon
	{
		displayName = "$STR_DN_STATICMGWEAPON";
		accuracy = 0.12;
		cost = 10000;
		threat[] = {0.7,0,0.3};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		icon = "\Ca\UI\Data\iconMG_ca.paa";
	};
	class StaticATWeapon: StaticWeapon
	{
		displayName = "$STR_DN_STATICATWEAPON";
		accuracy = 0.12;
		cost = 50000;
		threat[] = {0,1,0.2};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		icon = "\Ca\UI\Data\iconAA_ca.paa";
	};
	class StaticAAWeapon: StaticWeapon
	{
		displayName = "$STR_DN_STATICAAWEAPON";
		accuracy = 0.12;
		cost = 70000;
		threat[] = {0,0.3,1};
		gunnerCanSee = "2+8+32+1+4";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		icon = "\Ca\UI\Data\iconAA_ca.paa";
	};
	class StaticCannon: StaticWeapon
	{
		displayName = "$STR_DN_STATICCANNON";
		accuracy = 0.12;
		cost = 100000;
		threat[] = {0.8,0.8,0};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				gunnerForceOptics = 1;
			};
		};
		icon = "\Ca\UI\Data\iconCannon_ca.paa";
		class Eventhandlers
		{
			init = "_scr = _this execVM ""\ca\Data\ParticleEffects\SCRIPTS\init.sqf"";";
			fired = "_this call BIS_Effects_EH_Fired;";
		};
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		displayName = "$STR_DN_STATICGRENADELAUNCHER";
		accuracy = 0.12;
		cost = 10000;
		threat[] = {1,0.5,0};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		icon = "\Ca\UI\Data\iconMG_ca.paa";
	};
	class StaticMortar: StaticWeapon
	{
		displayName = "$STR_DN_STATICMORTAR";
		accuracy = 0.12;
		cost = 10000;
		threat[] = {1,0.5,0};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
			};
		};
		icon = "\Ca\UI\Data\iconMortar.paa";
	};
	class StaticSEARCHLight: StaticWeapon
	{
		displayName = "$STR_DN_STATICSEARCHLIGHT";
		accuracy = 0.12;
		cost = 1000;
		threat[] = {0.1,0.1,0.1};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
		icon = "\Ca\weapons\data\map_ico\icomap_searchlight_manual_CA.paa";
	};
	class M2StaticMG_base: StaticMGWeapon
	{
		model = "\ca\Weapons\m2_mg";
		picture = "\ca\Weapons\data\ico\m2_mg_CA.paa";
		icon = "\Ca\weapons\Data\map_ico\icomap_M2_CA.paa";
		mapSize = 3;
		begin1[] = {"ca\sounds\Weapons\machineguns\M2_single_1",1.7782794,1,1400};
		begin2[] = {"ca\sounds\Weapons\machineguns\M2_single_2",1.7782794,1,1400};
		soundBegin[] = {"begin1",0.5,"begin2",0.5};
		reloadMagazineSound[] = {"\Ca\sounds\Weapons\rifles\reload-belt-1",0.056234132,1,40};
		displayName = "$STR_DN_M2_MG";
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,25};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03",0.07079458,1,25};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02",0.07079458,1,25};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,25};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01",0.07079458,1,25};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02",0.07079458,1,25};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03",0.07079458,1,25};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.07079458,1,25};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.07079458,1,25};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.07079458,1,25};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.07079458,1,25};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.07079458,1,25};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -20;
				weapons[] = {"M2"};
				magazines[] = {"100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2","100Rnd_127x99_M2"};
				gunnerAction = "M2_Gunner";
			};
		};
		class AnimationSources
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
		soundGetOut[] = {"Ca\sounds\Weapons\machineguns\m2gun_inout",0.001,1,45};
		soundGetIn[] = {"Ca\sounds\Weapons\machineguns\m2gun_inout",0.00031622776,1,45};
		armorStructural = 10.0;
		class Library
		{
			libTextDesc = "$STR_LIB_M2_MG";
		};
	};
	class M119: StaticCannon
	{
		scope = 0;
		displayName = "$STR_DN_M119";
		sound[] = {"Ca\sounds\Weapons\cannon\gun120",100.0,1,1800};
		reloadMagazineSound[] = {"Ca\sounds\Weapons\cannon\gun120reload",0.031622775,1,40};
		model = "\ca\Weapons\M119";
		picture = "\ca\Weapons\data\ico\M119_CA.paa";
		mapSize = 7;
		icon = "\Ca\weapons\Data\map_ico\icomap_m119_CA.paa";
		cargoAction[] = {"M119_Cargo","M119_Commander"};
		typicalCargo[] = {"USMC_Soldier","USMC_Soldier","USMC_Soldier"};
		transportSoldier = 2;
		gunnerHasFlares = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"M119"};
				magazines[] = {"30Rnd_105mmHE_M119"};
				gunnerAction = "M119_Gunner";
				gunnerOpticsModel = "\ca\weapons\optika_M119";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				class ViewOptics: ViewOptics
				{
					initFov = 0.155;
					minFov = 0.155;
					maxFov = 0.155;
				};
			};
		};
		class AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "M119";
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_M119";
		};
	};
	class DSHKM_base: StaticMGWeapon
	{
		sound[] = {"Ca\sounds\Weapons\cannon\dshk_2",17.782795,1,1300};
		reloadMagazineSound[] = {"Ca\sounds\Weapons\cannon\M60gun_reload",0.031622775,1,35};
		model = "\ca\Weapons\DShKM_mg";
		picture = "\ca\Weapons\data\ico\DShKM_mg_CA.paa";
		icon = "\Ca\weapons\Data\map_ico\icomap_DShKM_CA.paa";
		mapSize = 2.5;
		displayName = "$STR_DN_DSHKM";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -20;
				weapons[] = {"DSHKM"};
				magazines[] = {"50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM","50Rnd_127x107_DSHKM"};
				gunnerAction = "DShKM_Gunner";
			};
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "DSHKM";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "DSHKM";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "DSHKM";
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_DSHKM";
		};
	};
	class AGS_base: StaticGrenadeLauncher
	{
		model = "\ca\Weapons\AGS_static";
		picture = "\ca\Weapons\data\ico\AGS_static_CA.paa";
		icon = "\Ca\weapons\Data\map_ico\icomap_ags_CA.paa";
		mapSize = 2;
		armor = 150;
		sound[] = {"Ca\sounds\Weapons\cannon\AGS30_shot1",17.782795,1,1200};
		reloadMagazineSound[] = {"Ca\sounds\Weapons\cannon\M60gun_reload",0.031622775,1,25};
		displayName = "$STR_DN_AGS30";
		gunnerHasFlares = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -10;
				minTurn = -90;
				maxTurn = 90;
				initTurn = 0;
				weapons[] = {"AGS30"};
				magazines[] = {"29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30","29Rnd_30mm_AGS30"};
				gunnerAction = "AGS_Gunner";
				gunnerOpticsModel = "\ca\weapons\optika_AGS30";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				gunnerForceOptics = 0;
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.7;
					minFov = 0.25;
					maxFov = 1.1;
				};
				class ViewOptics: ViewOptics
				{
					initFov = 0.25;
					minFov = 0.25;
					maxFov = 0.25;
				};
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_AGS30";
		};
	};
	class D30_base: StaticCannon
	{
		side = 0;
		faction = "INS";
		crew = "Ins_Soldier_1";
		displayName = "$STR_DN_D30";
		model = "\ca\Weapons\D30";
		picture = "\ca\Weapons\data\ico\D30_CA.paa";
		icon = "\Ca\weapons\Data\map_ico\icomap_d30_CA.paa";
		mapSize = 7.5;
		cargoAction[] = {"D30_Cargo","D30_Commander"};
		typicalCargo[] = {"Ins_Soldier_1","Ins_Soldier_1","Ins_Soldier_1"};
		transportSoldier = 2;
		gunnerHasFlares = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"D30"};
				magazines[] = {"30Rnd_122mmHE_D30"};
				gunnerAction = "D30_Gunner";
				gunnerOpticsModel = "\ca\weapons\2Dscope_D30";
				gunnerOpticsEffect[] = {"OpticsCHAbera1","OpticsBlur2"};
				class ViewOptics: ViewOptics
				{
					initFov = 0.096;
					minFov = 0.096;
					maxFov = 0.096;
				};
			};
		};
		class AnimationSources
		{
			class recoil_source
			{
				source = "reload";
				weapon = "D30";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\weapons\Data\d30.rvmat","ca\weapons\Data\d30_damage.rvmat","ca\weapons\Data\d30_destruct.rvmat"};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_D30";
		};
	};
	class SearchLight: StaticSEARCHLight
	{
		scope = 0;
		model = "\ca\Weapons\searchlight_manual";
		picture = "\ca\Weapons\data\ico\searchlight_manual_CA.paa";
		icon = "\Ca\weapons\Data\map_ico\icomap_searchlight_manual_CA.paa";
		mapSize = 3;
		nameSound = "light";
		displayName = "$STR_DN_SEARCHLIGHT";
		gunnerHasFlares = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"SEARCHLIGHT"};
				minElev = -20;
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				gunnerAction = "searchlight_Gunner";
			};
		};
		class Reflectors
		{
			class main_reflector
			{
				color[] = {0.8,0.8,0.9,1.0};
				ambient[] = {0.1,0.1,0.1,1.0};
				position = "light";
				direction = "lightEnd";
				hitpoint = "light";
				selection = "light";
				size = 1.0;
				brightness = 5.0;
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_SEARCHLIGHT";
		};
	};
	class ThingEffect;
	class FxExploGround1: ThingEffect
	{
		model = "\ca\weapons\sutr2";
		displayName = "$STR_DN_FX_EXPLO_GROUND_1";
	};
	class FxExploGround2: ThingEffect
	{
		model = "\ca\weapons\sutr3";
		displayName = "$STR_DN_FX_EXPLO_GROUND_2";
	};
	class FxExploArmor1: ThingEffect
	{
		model = "\ca\weapons\kusplechu";
		displayName = "Internal: FxExploArmor1";
	};
	class FxExploArmor2: ThingEffect
	{
		model = "\ca\weapons\kusplechu2";
		displayName = "Internal: FxExploArmor2";
	};
	class FxExploArmor3: ThingEffect
	{
		model = "\ca\weapons\ohorelavec";
		displayName = "Internal: FxExploArmor3";
	};
	class FxExploArmor4: ThingEffect
	{
		model = "\ca\weapons\strepina";
		displayName = "Internal: FxExploArmor4";
	};
	class FxCartridge: ThingEffect
	{
		model = "\ca\weapons\nabojnice";
		displayName = "$STR_DN_FX_CARTRIDGE";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 5;
		disappearAtContact = 1;
		airRotation = 1.5;
	};
	class FxCartridge_Small: ThingEffect
	{
		model = "\ca\weapons\nabojnice_small";
		displayName = "$STR_DN_FX_CARTRIDGE";
		submerged = 0;
		submergeSpeed = 0;
		timeToLive = 5;
		disappearAtContact = 1;
		airRotation = 1.5;
	};
	class FxCartridge_9mm: FxCartridge_Small{};
	class FxCartridge_556: FxCartridge{};
	class FxCartridge_762: FxCartridge
	{
		model = "\ca\weapons\nabojnice_762";
	};
	class FxCartridge_127: FxCartridge
	{
		model = "\ca\weapons\nabojnice_127";
	};
	class FxCartridge_slug: FxCartridge
	{
		model = "\ca\weapons\nabojnice_slug";
	};
	class LaserTarget: All
	{
		icon = "\ca\data\data\Unknown_object";
		displayName = "$STR_DN_LASER_TARGET";
		model = "\ca\Weapons\laserTgt.p3d";
		picture = "\ca\Weapons\data\ico\i_regular_CA.paa";
		weapons[] = {"M2"};
		magazines[] = {};
		threat[] = {0.2,0.5,1.0};
		simulation = "laserTarget";
	};
	class LaserTargetBase: LaserTarget{};
	class LaserTargetCBase: LaserTargetBase
	{
		scope = 1;
		side = 3;
	};
	class LaserTargetWBase: LaserTargetBase
	{
		scope = 1;
		side = 0;
	};
	class LaserTargetEBase: LaserTargetBase
	{
		scope = 1;
		side = 1;
	};
	class LaserTargetC: LaserTargetCBase
	{
		accuracy = 1000;
		weapons[] = {};
		magazines[] = {};
	};
	class LaserTargetW: LaserTargetWBase
	{
		accuracy = 1000;
		weapons[] = {};
		magazines[] = {};
	};
	class LaserTargetE: LaserTargetEBase
	{
		accuracy = 1000;
		weapons[] = {};
		magazines[] = {};
	};
	class Bomb: Strategic
	{
		access = 2;
		scope = 2;
		displayName = "$STR_DN_OUT_BOMB";
		model = "\ca\Weapons\shell";
		transportFuel = 50000;
		destrType = "DestructEngine";
	};
	class MineGeneric
	{
		scope = 0;
		animated = 0;
		side = -1;
		faction = "None";
		vehicleClass = "Mines";
		icon = "\Ca\weapons\Data\map_ico\icomap_mine_ca.paa";
		mapSize = 1;
	};
	class MineMine: MineGeneric
	{
		scope = 2;
		displayName = "$STR_DN_MINE";
		ammo = "Mine";
	};
	class MineMineE: MineGeneric
	{
		scope = 2;
		displayName = "$STR_DN_MINEE";
		ammo = "MineE";
	};
	class Logic: All
	{
		icon = "\ca\weapons\data\iconLogic";
		model = "\ca\weapons\empty";
		picture = "pictureLogic";
	};
	class ReammoBox: Strategic
	{
		animated = 0;
		scope = 0;
		icon = "\Ca\weapons\Data\map_ico\icomap_ammo_CA.paa";
		model = "\ca\weapons\dummyweapon.p3d";
		displayName = "$STR_DN_AMMO_CRATES";
		accuracy = 0.2;
		typicalCargo[] = {};
		vehicleClass = "Ammo";
		destrType = "DestructBuilding";
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
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Fire1
			{
				simulation = "particles";
				type = "ObjectDestructionFire1";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Fire2
			{
				simulation = "particles";
				type = "ObjectDestructionFire1";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3;
			};
			class Smoke1
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.2;
			};
			class Smoke2
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.15;
				interval = 1;
				lifeTime = 3.4;
			};
			class Smoke3
			{
				simulation = "particles";
				type = "ObjectDestructionSmoke";
				position = "destructionEffect1";
				intensity = 0.125;
				interval = 1;
				lifeTime = 3.5;
			};
			class HouseDestr
			{
				simulation = "destroy";
				type = "DelayedDestructionAmmo";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		transportMaxBackpacks = 1;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		supplyRadius = 1.4;
		cost = 0;
		armor = 200;
		mapSize = 2.0;
	};
	class WeaponHolder: ReammoBox
	{
		scope = 1;
		model = "\ca\weapons\dummyweapon.p3d";
		accuracy = 0.2;
		class TransportMagazines{};
		forceSupply = 1;
		showWeaponCargo = 1;
		transportMaxMagazines = 1e+009;
		transportMaxWeapons = 1e+009;
		displayName = "";
		destrType = "DestructNo";
		transportMaxBackpacks = 0;
	};
};
class CfgNonAIVehicles
{
	class ProxyGunner;
	class ProxyM2Gunner: ProxyGunner{};
	class ProxyPKGunner: ProxyGunner{};
	class ProxyD30_stani_proxy: ProxyGunner{};
	class ProxyGoggles;
	class ProxyLeftHand;
	class ProxyNVG_Proxy: ProxyGoggles
	{
		model = "\ca\Weapons\NVG_Proxy";
	};
	class ProxyNVG_Head: ProxyGoggles
	{
		model = "\ca\Weapons\NVG_Head";
	};
	class ProxyNVG_Head_Big: ProxyGoggles
	{
		model = "\ca\Weapons\NVG_Head_Big";
	};
	class ProxyNVG_Head_R: ProxyGoggles
	{
		model = "\ca\Weapons\NVG_Head_R";
	};
	class ProxyNVG_Head_C: ProxyGoggles
	{
		model = "\ca\Weapons\NVG_Head_C";
	};
	class ProxyNVG_Head_S: ProxyGoggles
	{
		model = "\ca\Weapons\NVG_Head_S";
	};
	class ProxyDalekohled_Proxy: ProxyLeftHand{};
	class ProxyWeapon{};
	class ProxySecWeapon{};
	class ProxyM16_Proxy: ProxyWeapon{};
	class ProxyAK_47_Proxy: ProxyWeapon{};
	class ProxyAK_47_v58_Proxy: ProxyWeapon{};
	class ProxyAK_47_granatomet_Proxy: ProxyWeapon{};
	class ProxyRPG7_Proxy: ProxySecWeapon{};
	class ProxyLAW_Proxy: ProxySecWeapon{};
	class ProxyBizon: ProxyWeapon{};
	class ProxyG36: ProxyWeapon{};
	class ProxyKozlice: ProxyWeapon{};
	class ProxySteyr: ProxyWeapon{};
	class ProxyXMS: ProxyWeapon{};
	class ProxyHandGun: ProxyWeapon
	{
		simulation = "ProxyHandGun";
	};
	class ProxyBeretta: ProxyHandGun{};
	class ProxyGlock17: ProxyHandGun{};
	class ProxyStinger_Proxy: ProxySecWeapon{};
	class ProxyAT1_Proxy: ProxyWeapon
	{
		model = "\ca\Weapons\AT1_Proxy";
		simulation = "alwaysshow";
	};
	class ProxyMaverik_Proxy: ProxyWeapon
	{
		model = "\ca\Weapons\Maverik_Proxy";
		simulation = "maverickweapon";
	};
	class ProxyScud_Strela_Proxy: ProxyWeapon
	{
		model = "\ca\Weapons\Scud_Strela_Proxy";
		simulation = "scud";
	};
	class ProxyHMMWVTOWLauncher: ProxyWeapon
	{
		model = "\ca\Weapons\TOWnew";
		simulation = "maverickweapon";
	};
	class ProxyM2_Static: ProxyWeapon
	{
		model = "\ca\Weapons\M2_Static";
		simulation = "alwaysshow";
	};
	class ProxyDriver;
	class ProxyParasutista: ProxyDriver{};
	class ProxyR73_proxy: ProxyWeapon
	{
		model = "\ca\air3\SU34\R73_proxy";
		simulation = "maverickweapon";
	};
	class ProxyCh29_proxy: ProxyWeapon
	{
		model = "\ca\air3\su34\Ch29_proxy";
		simulation = "maverickweapon";
	};
	class ProxyFlag;
	class ProxyFlag_Plane: ProxyFlag
	{
		model = "\ca\air\flag_plane";
	};
	class ProxyFlag_Plane_Big: ProxyFlag
	{
		model = "\ca\air\flag_plane_big";
	};
	class ProxyAGM65: ProxyWeapon
	{
		model = "\ca\a10\AGM65";
		simulation = "maverickweapon";
	};
	class Proxymk82: ProxyWeapon
	{
		model = "\ca\air\mk82";
		simulation = "maverickweapon";
	};
};
class CfgMagazines
{
	class Default;
	class CA_Magazine: Default
	{
		scope = 1;
		value = 1;
		displayName = "";
		model = "\ca\weapons\mag_univ.p3d";
		picture = "";
		modelSpecial = "";
		useAction = 0;
		useActionTitle = "";
		reloadAction = "ManActReloadMagazine";
		ammo = "";
		count = 30;
		type = 256;
		initSpeed = 900;
		selectionFireAnim = "zasleh";
		nameSound = "magazine";
		maxLeadSpeed = 23;
	};
	class VehicleMagazine: CA_Magazine
	{
		type = 0;
		reloadAction = "";
		maxLeadSpeed = 100;
	};
	class 8Rnd_9x18_Makarov: CA_Magazine
	{
		scope = 2;
		type = 16;
		displayName = "$STR_DN_8RND_MAKAROV";
		picture = "\Ca\weapons\Data\Equip\m_makarov_CA.paa";
		ammo = "B_9x18_Ball";
		count = 8;
		initSpeed = 320;
		descriptionShort = "$STR_DSS_8RND_MAKAROV";
	};
	class 8Rnd_9x18_MakarovSD: 8Rnd_9x18_Makarov
	{
		scope = 2;
		type = 16;
		displayName = "$STR_DN_8RND_MAKAROVSD";
		picture = "\Ca\weapons\Data\Equip\m_makarov_CA.paa";
		ammo = "B_9x18_SD";
		initSpeed = 310;
		descriptionShort = "$STR_DSS_8RND_MAKAROVSD";
	};
	class 15Rnd_9x19_M9: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_15RND_M9";
		type = 16;
		picture = "\Ca\weapons\Data\Equip\m_m9_beretta_CA.paa";
		ammo = "B_9x19_Ball";
		count = 15;
		sound[] = {"\ca\Weapons\Data\Sound\Beretta_single_shot_v3",0.31622776,1,700};
		initSpeed = 398;
		descriptionShort = "$STR_DSS_15RND_M9";
	};
	class 15Rnd_9x19_M9SD: 15Rnd_9x19_M9
	{
		displayName = "$STR_DN_15RND_M9SD";
		type = 16;
		picture = "\Ca\weapons\Data\Equip\m_m9_beretta_CA.paa";
		ammo = "B_9x19_SD";
		sound[] = {"\ca\Weapons\Data\Sound\Beretta_single_shot_v3",0.31622776,1,700};
		initSpeed = 315;
		descriptionShort = "$STR_DSS_15RND_M9SD";
	};
	class 30Rnd_9x19_MP5SD: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_30RND_MP5SD";
		initSpeed = 320;
		ammo = "B_9x19_SD";
		picture = "\Ca\weapons\Data\Equip\m_HKM5_CA.paa";
		descriptionShort = "$STR_DSS_30RND_MP5SD";
	};
	class 30Rnd_9x19_MP5: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_30RND_MP5";
		initSpeed = 400;
		ammo = "B_9x19_Ball";
		picture = "\Ca\weapons\Data\Equip\m_HKM5_CA.paa";
		descriptionShort = "$STR_DSS_30RND_MP5";
	};
	class 7Rnd_45ACP_1911: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_7RND_45ACP_1911";
		ammo = "B_45ACP_Ball";
		count = 7;
		initSpeed = 260;
		picture = "\CA\weapons\data\equip\m_colt1911_ca.paa";
		type = 16;
		descriptionShort = "$STR_DSS_7RND_45ACP_1911";
	};
	class 30Rnd_545x39_AK: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_30RND_AK";
		ammo = "B_545x39_Ball";
		count = 30;
		initSpeed = 900;
		picture = "\CA\weapons\ak\data\equip\m_ak74_ca.paa";
		tracersEvery = 0;
		descriptionShort = "$STR_DSS_30RND_AK";
	};
	class 30Rnd_545x39_AKSD: 30Rnd_545x39_AK
	{
		displayName = "$STR_DN_30RND_AKSD";
		ammo = "B_545x39_SD";
		initSpeed = 320;
		descriptionShort = "$STR_DSS_30RND_AKSD";
	};
	class 75Rnd_545x39_RPK: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_75Rnd_545x39_RPK";
		ammo = "B_545x39_Ball";
		count = 75;
		type = "2*		256";
		picture = "\CA\weapons\AK\data\equip\M_RPK_74_CA.paa";
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "$STR_DSS_75Rnd_RPK";
	};
	class 30Rnd_762x39_AK47: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_MN_AK47";
		ammo = "B_762x39_Ball";
		count = 30;
		initSpeed = 710;
		picture = "\CA\weapons\AK\data\equip\M_AK47_CA.paa";
		descriptionShort = "$STR_DSS_30RDN_AK47";
	};
	class 20Rnd_556x45_Stanag: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_20RND_STANAG";
		picture = "\ca\weapons\data\equip\m_20stanag_CA.paa";
		ammo = "B_556x45_Ball";
		count = 20;
		initSpeed = 930;
		tracersEvery = 0;
		descriptionShort = "$STR_DSS_20RND_STANAG";
	};
	class 30Rnd_556x45_Stanag: 20Rnd_556x45_Stanag
	{
		displayName = "$STR_DN_30RND_STANAG";
		picture = "\ca\weapons\data\equip\m_30stanag_CA.paa";
		count = 30;
		tracersEvery = 0;
		descriptionShort = "$STR_DSS_30RND_STANAG";
	};
	class 30Rnd_556x45_StanagSD: 30Rnd_556x45_Stanag
	{
		displayName = "$STR_DN_30RND_STANAGSD";
		ammo = "B_556x45_SD";
		initSpeed = 320;
		descriptionShort = "$STR_DSS_30RND_STANAGSD";
	};
	class 30Rnd_556x45_G36: 30Rnd_556x45_Stanag
	{
		scope = 2;
		displayName = "$STR_DN_30RND_G36";
		picture = "\ca\weapons\data\equip\m_G36_CA.paa";
		initSpeed = 920;
		tracersEvery = 0;
		descriptionShort = "$STR_DSS_30RND_G36";
	};
	class 30Rnd_556x45_G36SD: 30Rnd_556x45_G36
	{
		displayName = "$STR_DN_30RND_556X45_G36SD";
		ammo = "B_556x45_SD";
		initSpeed = 320;
		descriptionShort = "$STR_DSS_30RND_G36SD";
	};
	class 200Rnd_556x45_M249: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_200RND_M249";
		picture = "\CA\weapons\data\equip\m_m249_ca.paa";
		ammo = "B_556x45_Ball";
		count = 200;
		type = "2*		256";
		initSpeed = 915;
		sound[] = {"\ca\Weapons\Data\Sound\M249_1_SS",17.782795,1,1300};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\FAL_reload",0.01,1,20};
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "$STR_DSS_200RND_M249";
	};
	class 100Rnd_556x45_BetaCMag: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_100Rnd_556x45_BetaCMag";
		ammo = "B_556x45_Ball";
		count = 100;
		initSpeed = 920;
		picture = "\ca\weapons\g36\data\equip\M_MG36_CA.paa";
		type = "2 * 256";
		tracersEvery = 4;
		lastRoundsTracer = 4;
		descriptionShort = "$STR_DSS_100Rnd_BetaCMag";
	};
	class 5Rnd_762x51_M24: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_5RND_M24";
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		count = 5;
		ammo = "B_762x51_noTracer";
		initSpeed = 900;
		sound[] = {"\ca\Weapons\Data\Sound\M21_single_shot_v3",10.0,1,1600};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\M21_reload_v4",0.01,1,10};
		descriptionShort = "$STR_DSS_5Rnd_M24";
	};
	class 100Rnd_762x51_M240: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_100RND_M240";
		picture = "\CA\weapons\data\equip\m_m240_ca.paa";
		count = 100;
		type = "2*		256";
		ammo = "B_762x51_Ball";
		initSpeed = 900;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "$STR_DSS_100RND_M240";
	};
	class 10Rnd_762x54_SVD: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_MN_SVD";
		picture = "\CA\weapons\data\equip\m_svd_ca.paa";
		count = 10;
		ammo = "B_762x54_noTracer";
		initSpeed = 870;
		sound[] = {"\ca\Weapons\Data\Sound\m82_single_shot_v1",5.623413,1,1400};
		descriptionShort = "$STR_DSS_10RND_SVD";
	};
	class 100Rnd_762x54_PK: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_MN_PK";
		picture = "\CA\weapons\data\equip\m_pk_ca.paa";
		ammo = "B_762x54_Ball";
		count = 100;
		type = "2 * 		256";
		initSpeed = 850;
		sound[] = {"\ca\Weapons\Data\Sound\PK_1_SS",3.1622777,1,1500};
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "$STR_DSS_100RND_PK";
	};
	class 60Rnd_762x54_DT: 100Rnd_762x54_PK
	{
		displayName = "$STR_MN_60Rnd_762x54_DT";
		count = 60;
		ammo = "B_762x54_noTracer";
	};
	class 64Rnd_9x19_Bizon: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_64RND_BIZON_BALL";
		ammo = "B_9x18_Ball";
		count = 64;
		initSpeed = 350;
		picture = "\CA\weapons\data\equip\m_bizon_ca.paa";
		descriptionShort = "$STR_DSS_64RND_Bizon";
	};
	class 64Rnd_9x19_SD_Bizon: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_64RND_BIZONSD";
		cartridge = "FxCartridge_Small";
		ammo = "B_9x18_SD";
		count = 64;
		initSpeed = 320;
		picture = "\CA\weapons\data\equip\m_bizon_ca.paa";
		descriptionShort = "$STR_DSS_64RND_BizonSD";
	};
	class 10Rnd_9x39_SP5_VSS: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_10Rnd_9x39_SP5_VSS";
		ammo = "B_9x39_SP5";
		count = 10;
		initSpeed = 300;
		picture = "\CA\weapons\data\equip\M_VSSx10_CA.paa";
		descriptionShort = "$STR_DSS_10RND_VSS";
	};
	class 20Rnd_9x39_SP5_VSS: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_20Rnd_9x39_SP5_VSS";
		ammo = "B_9x39_SP5";
		count = 20;
		initSpeed = 300;
		picture = "\CA\weapons\data\equip\M_VSSx20_CA.paa";
		descriptionShort = "$STR_DSS_20RND_VSS";
	};
	class 8Rnd_B_Saiga12_74Slug: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_10Rnd_B_12Gauge_74Slug";
		ammo = "B_12Gauge_74Slug";
		count = 8;
		initSpeed = 396;
		picture = "\CA\weapons\data\equip\M_Saiga12K_CA.paa";
		descriptionShort = "$STR_DSS_8RND_Saiga12";
	};
	class 8Rnd_B_Beneli_74Slug: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_10Rnd_B_12Gauge_74Slug";
		ammo = "B_12Gauge_74Slug";
		count = 8;
		initSpeed = 396;
		picture = "\CA\weapons\data\equip\M_12gauge_CA.paa";
		descriptionShort = "$STR_DSS_8RND_Beneli";
	};
	class 5Rnd_127x108_KSVK: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_5RND_KSVK";
		ammo = "B_127x108_Ball";
		count = 5;
		initSpeed = 850;
		picture = "\CA\weapons\data\Equip\M_ksvk_CA.paa";
		descriptionShort = "$STR_DSS_5RND_KSVK";
	};
	class 10Rnd_127x99_m107: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_MN_10RND_M107";
		ammo = "B_127x99_Ball_noTracer";
		count = 10;
		initSpeed = 850;
		picture = "\CA\weapons\data\Equip\M_107_CA.paa";
		descriptionShort = "$STR_DSS_10RND_M107";
	};
	class 1Rnd_HE_M203: CA_Magazine
	{
		scope = 2;
		type = 16;
		displayName = "$STR_DN_HE_M203";
		picture = "\Ca\weapons\Data\Equip\m_40mmHP_CA.paa";
		ammo = "G_40mm_HE";
		initSpeed = 80;
		count = 1;
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_DSS_1Rnd_HE_M203";
	};
	class FlareWhite_M203: CA_Magazine
	{
		scope = 2;
		type = 16;
		displayName = "$STR_DN_FLAREWHITE_M203";
		picture = "\Ca\weapons\Data\Equip\m_FlareWhite_CA.paa";
		ammo = "F_40mm_White";
		initSpeed = 80;
		count = 1;
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_DSS_1Rnd_FLAREWHITE_M203";
	};
	class FlareGreen_M203: FlareWhite_M203
	{
		displayName = "$STR_DN_FLAREGREEN_M203";
		ammo = "F_40mm_Green";
		picture = "\Ca\weapons\Data\Equip\m_FlareGreen_CA.paa";
		descriptionShort = "$STR_DSS_1Rnd_FLAREGREEN_M203";
	};
	class FlareRed_M203: FlareWhite_M203
	{
		displayName = "$STR_DN_FLARERED_M203";
		ammo = "F_40mm_Red";
		picture = "\Ca\weapons\Data\Equip\m_FlareRed_CA.paa";
		descriptionShort = "$STR_DSS_1Rnd_FLARERED_M203";
	};
	class FlareYellow_M203: FlareWhite_M203
	{
		displayName = "$STR_DN_FLAREYELLOW_M203";
		ammo = "F_40mm_Yellow";
		picture = "\Ca\weapons\Data\Equip\m_FlareYelow_CA.paa";
		descriptionShort = "$STR_DSS_1Rnd_FLAREYELLOW_M203";
	};
	class 1Rnd_Smoke_M203: 1Rnd_HE_M203
	{
		displayName = "$STR_MN_SMOKE_M203";
		picture = "\Ca\weapons\Data\Equip\m_40mmHP_CA.paa";
		ammo = "G_40mm_Smoke";
		descriptionShort = "$STR_DSS_1Rnd_SMOKE_M203";
	};
	class 1Rnd_SmokeRed_M203: 1Rnd_Smoke_M203
	{
		ammo = "G_40mm_SmokeRed";
		displayName = "$STR_DN_1Rnd_SmokeRed_M203";
		descriptionShort = "$STR_DSS_1Rnd_SMOKERED_M203";
	};
	class 1Rnd_SmokeGreen_M203: 1Rnd_Smoke_M203
	{
		ammo = "G_40mm_SmokeGreen";
		displayName = "$STR_DN_1Rnd_SmokeGreen_M203";
		descriptionShort = "$STR_DSS_1Rnd_SMOKEGREEN_M203";
	};
	class 1Rnd_SmokeYellow_M203: 1Rnd_Smoke_M203
	{
		ammo = "G_40mm_SmokeYellow";
		displayName = "$STR_DN_1Rnd_SmokeYellow_M203";
		descriptionShort = "$STR_DSS_1Rnd_SMOKEYELLOW_M203";
	};
	class 1Rnd_HE_GP25: CA_Magazine
	{
		scope = 2;
		type = 16;
		displayName = "$STR_DN_HE_GP25";
		picture = "\Ca\weapons\Data\Equip\m_40mmHP_CA.paa";
		ammo = "G_40mm_HE";
		initSpeed = 80;
		count = 1;
		nameSound = "grenadelauncher";
		descriptionShort = "$STR_DSS_1Rnd_HE_GP25";
	};
	class FlareWhite_GP25: CA_Magazine
	{
		scope = 2;
		type = 16;
		displayName = "$STR_DN_FLAREWHITE_GP25";
		picture = "\Ca\weapons\Data\Equip\m_FlareWhite_CA.paa";
		ammo = "F_40mm_White";
		initSpeed = 80;
		count = 1;
		nameSound = "grenadelauncher";
	};
	class FlareGreen_GP25: FlareWhite_GP25
	{
		displayName = "$STR_DN_FLAREGREEN_GP25";
		ammo = "F_40mm_Green";
		picture = "\Ca\weapons\Data\Equip\m_FlareGreen_CA.paa";
		descriptionShort = "$STR_DSS_1Rnd_FLAREGREEN_GP25";
	};
	class FlareRed_GP25: FlareWhite_GP25
	{
		displayName = "$STR_DN_FLARERED_GP25";
		ammo = "F_40mm_Red";
		picture = "\Ca\weapons\Data\Equip\m_FlareRed_CA.paa";
		descriptionShort = "$STR_DSS_1Rnd_FLARERED_GP25";
	};
	class FlareYellow_GP25: FlareWhite_GP25
	{
		displayName = "$STR_DN_FLAREYELLOW_GP25";
		ammo = "F_40mm_Yellow";
		picture = "\Ca\weapons\Data\Equip\m_FlareYelow_CA.paa";
		descriptionShort = "$STR_DSS_1Rnd_FLAREYELLOW_GP25";
	};
	class 1Rnd_SMOKE_GP25: 1Rnd_HE_GP25
	{
		displayName = "$STR_MN_SMOKE_GP25";
		picture = "\Ca\weapons\Data\Equip\m_40mmHP_CA.paa";
		ammo = "G_40mm_Smoke";
		descriptionShort = "$STR_DSS_1Rnd_SMOKE_GP25";
	};
	class 1Rnd_SmokeRed_GP25: 1Rnd_SMOKE_GP25
	{
		displayName = "$STR_DN_1Rnd_SmokeRed_GP25";
		picture = "\Ca\weapons\Data\Equip\m_40mmHPred_CA.paa";
		ammo = "G_40mm_SmokeRed";
		descriptionShort = "$STR_DSS_1Rnd_SMOKERED_GP25";
	};
	class 1Rnd_SmokeGreen_GP25: 1Rnd_SMOKE_GP25
	{
		displayName = "$STR_DN_1Rnd_SmokeGreen_GP25";
		picture = "\Ca\weapons\Data\Equip\m_40mmHPgreen_CA.paa";
		ammo = "G_40mm_SmokeGreen";
		descriptionShort = "$STR_DSS_1Rnd_SMOKEGREEN_GP25";
	};
	class 1Rnd_SmokeYellow_GP25: 1Rnd_SMOKE_GP25
	{
		displayName = "$STR_DN_1Rnd_SmokeYellow_GP25";
		picture = "\Ca\weapons\Data\Equip\m_40mmHPyellow_CA.paa";
		ammo = "G_40mm_SmokeYellow";
		descriptionShort = "$STR_DSS_1Rnd_SMOKEYELLOW_GP25";
	};
	class CA_LauncherMagazine: CA_Magazine
	{
		model = "";
		value = 5;
		type = "2 * 		256";
		count = 1;
		initSpeed = 5;
		picture = "\CA\weapons\data\equip\m_M136_ca.paa";
		nameSound = "handgrenade";
	};
	class M136: CA_LauncherMagazine
	{
		scope = 2;
		displayName = "$STR_MN_M136";
		ammo = "R_M136_AT";
		type = "6 * 		256";
		picture = "\CA\weapons\data\equip\m_M136_ca.paa";
		modelSpecial = "\ca\weapons\m136_launcher_loaded";
		model = "\ca\weapons\M136_ammo";
		initSpeed = 285;
		descriptionShort = "$STR_DSS_1Rnd_M136";
	};
	class Javelin: CA_LauncherMagazine
	{
		scope = 2;
		displayName = "$STR_MN_JAVELIN";
		ammo = "M_Javelin_AT";
		type = "6 * 		256";
		picture = "\CA\weapons\data\equip\m_Javelin_ca.paa";
		modelSpecial = "\ca\weapons\javelin_launcher_loaded";
		model = "\ca\weapons\Javelin_proxy";
		initSpeed = 20;
		descriptionShort = "$STR_DSS_1Rnd_JAVELIN";
	};
	class AT13: CA_LauncherMagazine
	{
		scope = 2;
		displayName = "$STR_MN_AT13";
		ammo = "M_AT13_AT";
		initSpeed = 55.1688;
		type = "6 * 		256";
		picture = "\Ca\weapons\data\equip\m_metis_CA.paa";
		modelSpecial = "\ca\weapons\Metis_AT_13\metis_launcher_loaded";
		model = "\ca\weapons\Javelin_proxy";
	};
	class PG7V: CA_LauncherMagazine
	{
		scope = 2;
		model = "\ca\weapons\PG7_proxy";
		modelSpecial = "\ca\weapons\rpg7_launcher_loaded";
		displayName = "$STR_MN_PG7V";
		ammo = "R_PG7V_AT";
		reloadAction = "ManActReloadAT";
		picture = "\CA\weapons\data\equip\m_pg7_ca.paa";
		initSpeed = 115;
		descriptionShort = "$STR_DSS_1Rnd_PG7V";
	};
	class PG7VL: PG7V
	{
		model = "\ca\weapons\PG7VL_proxy";
		modelSpecial = "\ca\weapons\rpg7L_launcher_loaded";
		displayName = "$STR_MN_PG7VL";
		ammo = "R_PG7VL_AT";
		picture = "\CA\weapons\data\equip\m_PG7VL_ca.paa";
		descriptionShort = "$STR_DSS_1Rnd_PG7VL";
	};
	class PG7VR: PG7V
	{
		model = "\ca\weapons\PG7VR_proxy";
		modelSpecial = "\ca\weapons\rpg7VR_launcher_loaded";
		displayName = "$STR_MN_PG7VR";
		ammo = "R_PG7VR_AT";
		picture = "\CA\weapons\data\equip\M_PG7VR_ca.paa";
		initSpeed = 70;
		descriptionShort = "$STR_DSS_1Rnd_PG7VR";
		type = "3 * 256";
	};
	class OG7: CA_LauncherMagazine
	{
		scope = 2;
		model = "\ca\weapons\OG7V_proxy";
		modelSpecial = "\ca\weapons\rpg7o_launcher_loaded";
		displayName = "$STR_MN_OG7";
		ammo = "R_OG7_AT";
		reloadAction = "ManActReloadAT";
		picture = "\CA\weapons\data\equip\M_OG7V_ca.paa";
		initSpeed = 115;
		descriptionShort = "$STR_DSS_1Rnd_OG7";
	};
	class PG9_AT: CA_LauncherMagazine
	{
		scope = 2;
		model = "\ca\weapons\SPG9\PG9";
		displayName = "$STR_MN_PG9";
		ammo = "R_PG9_AT";
		count = 1;
		picture = "\CA\weapons\Data\Equip\m_pg9_ca.paa";
		type = "3 * 256";
		initSpeed = 435;
		nameSound = "sabot";
	};
	class OG9_HE: CA_LauncherMagazine
	{
		scope = 2;
		model = "\ca\weapons\SPG9\OG9";
		displayName = "$STR_MN_OG9";
		ammo = "R_OG9_HE";
		count = 1;
		picture = "\CA\weapons\data\equip\M_og9_CA.paa";
		type = "3 * 256";
		initSpeed = 316;
		nameSound = "heat";
	};
	class Stinger: CA_LauncherMagazine
	{
		scope = 2;
		displayName = "$STR_MN_STINGER";
		ammo = "M_Stinger_AA";
		type = "6 * 		256";
		picture = "\CA\weapons\data\equip\m_Stinger_ca.paa";
		modelSpecial = "\ca\weapons\stinger_launcher_loaded";
		model = "\ca\weapons\Stinger_proxy";
		initSpeed = 40;
		maxLeadSpeed = 320;
		descriptionShort = "$STR_DSS_1Rnd_STINGER";
	};
	class 8Rnd_Stinger: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_STINGER";
		ammo = "M_Stinger_AA";
		count = 8;
		initSpeed = 40;
		sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1600};
		soundHit[] = {"\ca\Weapons\Data\Sound\explosion_large1",15.848933,1,2000};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
		nameSound = "missiles";
		maxLeadSpeed = 320;
	};
	class 2Rnd_Stinger: 8Rnd_Stinger
	{
		count = 2;
	};
	class Strela: CA_LauncherMagazine
	{
		scope = 2;
		displayName = "$STR_MN_9K32";
		ammo = "M_Strela_AA";
		type = "6 * 		256";
		picture = "\CA\weapons\data\equip\m_strela_ca.paa";
		modelSpecial = "\ca\weapons\strela_launcher_loaded";
		model = "\ca\weapons\strela_proxy";
		initSpeed = 40;
		descriptionShort = "$STR_DSS_1Rnd_Strela";
		maxLeadSpeed = 320;
	};
	class RPG18: CA_LauncherMagazine
	{
		scope = 2;
		model = "\ca\weapons2\rpg18\rpg18_ammo";
		modelSpecial = "\ca\weapons2\rpg18\rpg18_loaded";
		displayName = "$STR_MN_RPG18";
		ammo = "R_RPG18_AT";
		reloadAction = "ManActReloadAT";
		picture = "\Ca\weapons2\rpg18\data\equip\M_RPG18_CA.paa";
		initSpeed = 115;
		type = "6 * 		256";
		descriptionShort = "$STR_DSS_1Rnd_RPG18";
	};
	class SMAW_HEDP: CA_LauncherMagazine
	{
		scope = 2;
		model = "\ca\weapons2\SMAW\SMAW_rocket.p3d";
		modelSpecial = "\ca\weapons2\SMAW\SMAW_loaded.p3d";
		displayName = "$STR_MN_SMAW_HEDP";
		ammo = "R_SMAW_HEDP";
		reloadAction = "ManActReloadAT";
		picture = "\ca\weapons2\smaw\data\equip\M_SMAW_CA.paa";
		initSpeed = 250;
		descriptionShort = "$STR_DSS_1Rnd_SMAW_HEDP";
	};
	class SMAW_HEAA: SMAW_HEDP
	{
		displayName = "$STR_MN_SMAW_HEAA";
		ammo = "R_SMAW_HEAA";
		descriptionShort = "$STR_DSS_1Rnd_SMAW_HEAA";
	};
	class Igla: Strela
	{
		displayName = "$STR_MN_IGLA";
		ammo = "M_Igla_AA";
		type = "6 * 		256";
		picture = "\Ca\weapons\IGLA\Data\equip\M_IGLA_CA.paa";
		modelSpecial = "\ca\weapons\IGLA\igla_loaded";
		model = "\ca\weapons\strela_proxy";
		maxLeadSpeed = 320;
		descriptionShort = "$STR_DSS_1Rnd_IGLA";
	};
	class 2Rnd_Igla: Igla
	{
		count = 2;
	};
	class SmokeLauncherMag: VehicleMagazine
	{
		scope = 2;
		ammo = "SmokeLauncherAmmo";
		count = 2;
		nameSound = "smokeshell";
	};
	class FlareLauncherMag: SmokeLauncherMag
	{
		nameSound = "grenadelauncher";
		count = 50;
		ammo = "FlareLauncherAmmo";
	};
	class 4000Rnd_762x51_M134: VehicleMagazine
	{
		scope = 2;
		ammo = "B_762x51_3RndBurst";
		count = 4000;
		maxLeadSpeed = 200;
		tracersEvery = 5;
		nameSound = "mgun";
	};
	class 2000Rnd_762x51_M134: 4000Rnd_762x51_M134
	{
		count = 2000;
	};
	class 1200Rnd_762x51_M240: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_M240";
		count = 1200;
		ammo = "B_762x51_Ball";
		initSpeed = 900;
		maxLeadSpeed = 200;
		tracersEvery = 4;
		nameSound = "mgun";
	};
	class 1500Rnd_762x54_PKT: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_PKT";
		count = 1500;
		ammo = "B_762x54_Ball";
		initSpeed = 900;
		maxLeadSpeed = 200;
		tracersEvery = 4;
		nameSound = "mgun";
	};
	class 2000Rnd_762x54_PKT: 1500Rnd_762x54_PKT
	{
		count = 2000;
	};
	class 200Rnd_762x54_PKT: 1500Rnd_762x54_PKT
	{
		count = 200;
	};
	class 250Rnd_762x54_PKT_T90: 1500Rnd_762x54_PKT
	{
		count = 250;
	};
	class 500Rnd_TwinVickers: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_VICKERS";
		ammo = "B_77x56_Ball";
		count = 500;
		initSpeed = 740;
		maxLeadSpeed = 200;
		tracersEvery = 3;
		nameSound = "mgun";
	};
	class 100Rnd_127x99_M2: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_M2_MG";
		ammo = "B_127x99_Ball";
		count = 100;
		initSpeed = 930;
		maxLeadSpeed = 200;
		tracersEvery = 3;
		lastRoundsTracer = 5;
		nameSound = "mgun";
	};
	class 250Rnd_127x99_M3P: 100Rnd_127x99_M2
	{
		count = 250;
		nameSound = "mgun";
	};
	class 50Rnd_127x107_DSHKM: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_DSHKM";
		ammo = "B_127x107_Ball";
		count = 50;
		initSpeed = 850;
		maxLeadSpeed = 200;
		tracersEvery = 3;
		lastRoundsTracer = 5;
		nameSound = "mgun";
	};
	class 150Rnd_127x107_DSHKM: 50Rnd_127x107_DSHKM
	{
		count = 150;
	};
	class 150Rnd_127x108_KORD: 150Rnd_127x107_DSHKM
	{
		displayName = "$STR_DN_KORD";
	};
	class 50Rnd_127x108_KORD: 50Rnd_127x107_DSHKM
	{
		displayName = "$STR_DN_KORD";
	};
	class 1470Rnd_127x108_YakB: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_127X108_YAKB";
		ammo = "B_127x108_APHE";
		count = 1470;
		initSpeed = 830;
		maxLeadSpeed = 600;
		tracersEvery = 2;
		nameSound = "mgun";
	};
	class 500Rnd_145x115_KPVT: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_KPVT";
		ammo = "B_145x115_AP";
		count = 500;
		initSpeed = 1000;
		maxLeadSpeed = 100;
		tracersEvery = 2;
		nameSound = "mgun";
	};
	class 750Rnd_M197_AH1: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_M197";
		ammo = "B_20mm_AP";
		count = 750;
		initSpeed = 1036;
		maxLeadSpeed = 200;
		tracersEvery = 2;
		nameSound = "cannon";
	};
	class 2100Rnd_20mm_M168: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_M168";
		ammo = "B_20mm_AA";
		count = 2100;
		initSpeed = 1036;
		maxLeadSpeed = 200;
		tracersEvery = 2;
		nameSound = "cannon";
	};
	class 2000Rnd_23mm_AZP85: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_AZP23";
		ammo = "B_23mm_AA";
		count = 2000;
		initSpeed = 980;
		maxLeadSpeed = 600;
		tracersEvery = 3;
		nameSound = "cannon";
	};
	class 40Rnd_23mm_AZP85: 2000Rnd_23mm_AZP85
	{
		count = 40;
	};
	class 1000Rnd_23mm_2A14_HE: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_23MM_2A14_HE";
		ammo = "B_23mm_HE";
		count = 1000;
		initSpeed = 980;
		maxLeadSpeed = 300;
		tracersEvery = 3;
		nameSound = "cannon";
	};
	class 1000Rnd_23mm_2A14_AP: 1000Rnd_23mm_2A14_HE
	{
		displayName = "$STR_MN_23MM_2A14_AP";
		ammo = "B_23mm_AP";
	};
	class 520Rnd_23mm_GSh23L: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_23MM_GSH23L";
		ammo = "B_23mm_APHE";
		count = 520;
		initSpeed = 830;
		maxLeadSpeed = 600;
		tracersEvery = 2;
		nameSound = "cannon";
	};
	class 300Rnd_25mm_GAU12: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_GAU12";
		ammo = "B_25mm_HE";
		count = 300;
		initSpeed = 1040;
		maxLeadSpeed = 300;
		tracersEvery = 2;
		nameSound = "cannon";
	};
	class 210Rnd_25mm_M242_HEI: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_25MM_M242_HEI";
		ammo = "B_25mm_HEI";
		count = 240;
		initSpeed = 1040;
		maxLeadSpeed = 300;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "cannon";
	};
	class 210Rnd_25mm_M242_APDS: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_25MM_M242_APDS";
		ammo = "B_25mm_APDS";
		count = 240;
		initSpeed = 1040;
		maxLeadSpeed = 300;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "cannon";
	};
	class 29Rnd_30mm_AGS30: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_HE";
		ammo = "G_30mm_HE";
		count = 29;
		initSpeed = 185;
		maxLeadSpeed = 100;
		nameSound = "grenadelauncher";
	};
	class 400Rnd_30mm_AGS17: 29Rnd_30mm_AGS30
	{
		count = 400;
	};
	class 230Rnd_30mmHE_2A42: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_HE";
		ammo = "B_30mm_HE";
		count = 230;
		initSpeed = 960;
		maxLeadSpeed = 200;
		tracersEvery = 2;
		lastRoundsTracer = 5;
		nameSound = "heat";
	};
	class 250Rnd_30mmHE_2A42: 230Rnd_30mmHE_2A42
	{
		count = 250;
	};
	class 150Rnd_30mmHE_2A42: 230Rnd_30mmHE_2A42
	{
		count = 150;
	};
	class 230Rnd_30mmAP_2A42: 230Rnd_30mmHE_2A42
	{
		displayName = "$STR_DN_AP";
		ammo = "B_30mm_AP";
		nameSound = "sabot";
	};
	class 250Rnd_30mmAP_2A42: 230Rnd_30mmAP_2A42
	{
		count = 250;
	};
	class 150Rnd_30mmAP_2A42: 230Rnd_30mmAP_2A42
	{
		count = 150;
	};
	class 250Rnd_30mmHE_2A72: 250Rnd_30mmHE_2A42
	{
		displayName = "$STR_MN_30MM_2A72_HE";
	};
	class 250Rnd_30mmAP_2A72: 250Rnd_30mmAP_2A42
	{
		displayName = "$STR_MN_30MM_2A72_AP";
	};
	class 1904Rnd_30mmAA_2A38M: 230Rnd_30mmHE_2A42
	{
		ammo = "B_30mm_AA";
		count = 1904;
		displayName = "$STR_MN_30MM_2A38M_AA";
		maxLeadSpeed = 500;
		tracersEvery = 2;
		lastRoundsTracer = 0;
	};
	class 1350Rnd_30mmAP_A10: VehicleMagazine
	{
		scope = 1;
		displayName = "$STR_DN_GAU8";
		ammo = "B_30mmA10_AP";
		count = 1350;
		initSpeed = 1067;
		tracersEvery = 1;
		maxLeadSpeed = 500;
		nameSound = "cannon";
	};
	class 180Rnd_30mm_GSh301: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_GSh301";
		ammo = "B_30mm_HE";
		count = 180;
		initSpeed = 820;
		tracersEvery = 2;
		nameSound = "cannon";
	};
	class 750Rnd_30mm_GSh301: 180Rnd_30mm_GSh301
	{
		displayName = "$STR_MN_30MM_GSH301";
		count = 750;
	};
	class 48Rnd_40mm_MK19: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_MK19";
		ammo = "G_40mm_HE";
		count = 48;
		initSpeed = 240;
		maxLeadSpeed = 100;
		nameSound = "grenadelauncher";
	};
	class 6Rnd_Grenade_Camel: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_GRENADE";
		ammo = "G_Camel_HE";
		count = 6;
		initSpeed = 3;
		maxLeadSpeed = 200;
		nameSound = "grenade";
	};
	class 30Rnd_105mmHE_M119: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_HE";
		ammo = "Sh_105_HE";
		count = 30;
		initSpeed = 1100;
		nameSound = "heat";
	};
	class 20Rnd_120mmHE_M1A2: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_HE";
		ammo = "Sh_120_HE";
		count = 20;
		initSpeed = 1100;
		maxLeadSpeed = 100;
		nameSound = "heat";
		tracersEvery = 1;
	};
	class 20Rnd_120mmSABOT_M1A2: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_SABOT";
		ammo = "Sh_120_SABOT";
		count = 20;
		initSpeed = 1676;
		maxLeadSpeed = 100;
		nameSound = "sabot";
		tracersEvery = 1;
	};
	class 30Rnd_122mmHE_D30: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_HE";
		ammo = "Sh_122_HE";
		count = 30;
		initSpeed = 1100;
		nameSound = "heat";
	};
	class 22Rnd_125mmHE_T72: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_HE";
		ammo = "Sh_125_HE";
		count = 22;
		initSpeed = 905;
		maxLeadSpeed = 100;
		nameSound = "heat";
		tracersEvery = 1;
	};
	class 22Rnd_100mm_HE_2A70: 22Rnd_125mmHE_T72
	{
		displayName = "$STR_MN_100MM_2A70_HE";
		ammo = "Sh_100_HE";
	};
	class 23Rnd_125mmSABOT_T72: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_SABOT";
		ammo = "Sh_125_SABOT";
		count = 23;
		initSpeed = 1750;
		maxLeadSpeed = 100;
		nameSound = "sabot";
		tracersEvery = 1;
	};
	class 33Rnd_85mmHE: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_HE";
		ammo = "Sh_85_HE";
		count = 33;
		initSpeed = 800;
		maxLeadSpeed = 100;
		nameSound = "heat";
	};
	class 10Rnd_85mmAP: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_AP";
		ammo = "Sh_85_AP";
		count = 10;
		initSpeed = 800;
		maxLeadSpeed = 100;
		nameSound = "sabot";
	};
	class 8Rnd_AT5_BMP2: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_AT5_BMP2";
		type = 0;
		ammo = "M_AT5_AT";
		count = 8;
		initSpeed = 80;
		maxLeadSpeed = 100;
		nameSound = "missiles";
		sound[] = {"\ca\Weapons\Data\Sound\RocketLauncher_Shot04",3.1622777,1,1300};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
	};
	class 5Rnd_AT5_BRDM2: 8Rnd_AT5_BMP2
	{
		count = 5;
	};
	class 4Rnd_AT9_Mi24P: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_AT9_MI24P";
		count = 4;
		ammo = "M_AT9_AT";
		initSpeed = 0;
		maxLeadSpeed = 200;
		sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1400};
		soundHit[] = {"\ca\Weapons\Data\Sound\explosion_large1",15.848933,1,2000};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
		nameSound = "missiles";
	};
	class 4Rnd_AT6_Mi24V: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_AT6_MI24V";
		count = 4;
		ammo = "M_AT6_AT";
		initSpeed = 0;
		maxLeadSpeed = 100;
		sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1400};
		soundHit[] = {"\ca\Weapons\Data\Sound\explosion_large1",15.848933,1,2000};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
		nameSound = "missiles";
	};
	class 4Rnd_AT2_Mi24D: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_AT2_MI24D";
		ammo = "M_AT2_AT";
		initSpeed = 55.1688;
		count = 4;
		maxLeadSpeed = 25;
		nameSound = "missiles";
	};
	class 8Rnd_AT10_BMP3: 8Rnd_AT5_BMP2
	{
		displayName = "$STR_MN_AT10_BMP3";
		ammo = "M_AT10_AT";
		initSpeed = 450;
	};
	class 5Rnd_AT11_T90: 8Rnd_AT5_BMP2
	{
		displayName = "$STR_MN_AT11_T90";
		ammo = "M_AT11_AT";
		count = 5;
		initSpeed = 500;
	};
	class 6Rnd_AT13: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_AT13";
		ammo = "M_AT13_AT";
		initSpeed = 55.1688;
		count = 6;
		maxLeadSpeed = 10;
		nameSound = "missiles";
	};
	class 6Rnd_TOW_HMMWV: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_TOW1";
		ammo = "M_TOW_AT";
		initSpeed = 55.1688;
		count = 6;
		maxLeadSpeed = 10;
		nameSound = "missiles";
	};
	class 2Rnd_TOW: 6Rnd_TOW_HMMWV
	{
		count = 2;
	};
	class 6Rnd_TOW2: 6Rnd_TOW_HMMWV
	{
		ammo = "M_TOW2_AT";
		displayName = "$STR_MN_TOW2";
	};
	class 2Rnd_TOW2: 6Rnd_TOW2
	{
		count = 2;
	};
	class 8Rnd_Hellfire: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_HELLFIRE";
		count = 8;
		ammo = "M_Hellfire_AT";
		initSpeed = 0;
		maxLeadSpeed = 200;
		sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1400};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
		nameSound = "missiles";
	};
	class 12Rnd_Vikhr_KA50: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_VIKHR_KA50";
		count = 12;
		ammo = "M_Vikhr_AT";
		initSpeed = 0;
		maxLeadSpeed = 220;
		sound[] = {"\ca\Sounds\weapons\cannon\vikhr",31.622776,1,1100};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly_x2",1.0,1.1,700};
		soundHit[] = {"\ca\Weapons\Data\Sound\explosion_large1",15.848933,1,2000};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
		nameSound = "missiles";
	};
	class 4Rnd_Sidewinder_AV8B: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_SIDEWINDER_AV8B";
		ammo = "M_Sidewinder_AA";
		count = 4;
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] = {"\ca\weapons\Data\Sound\rocket1",1.0,1,1300};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
		nameSound = "missiles";
	};
	class 2Rnd_Sidewinder_F35: 4Rnd_Sidewinder_AV8B
	{
		count = 2;
		ammo = "M_Sidewinder_AA_F35";
	};
	class 2Rnd_Sidewinder_AH1Z: 4Rnd_Sidewinder_AV8B
	{
		count = 2;
	};
	class 14Rnd_FFAR: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_FFAR";
		ammo = "R_Hydra_HE";
		count = 14;
		initSpeed = 44;
		maxLeadSpeed = 200;
		nameSound = "rockets";
		sound[] = {"\ca\weapons\Data\Sound\rockets\rocketLauncher_Shot21",3.1622777,1};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1};
	};
	class 28Rnd_FFAR: 14Rnd_FFAR
	{
		count = 28;
	};
	class 38Rnd_FFAR: 14Rnd_FFAR
	{
		count = 38;
	};
	class 40Rnd_80mm: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_S8KOM";
		ammo = "R_80mm_HE";
		initSpeed = 44;
		maxLeadSpeed = 200;
		count = 40;
		nameSound = "rockets";
		sound[] = {"\ca\Weapons\Data\Sound\Rockets\rocketLauncher_Shot21",1.0,1};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1};
	};
	class 80Rnd_80mm: 40Rnd_80mm
	{
		count = 80;
	};
	class 40Rnd_GRAD: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_40Rnd_GRAD";
		ammo = "R_GRAD";
		initSpeed = 44;
		maxLeadSpeed = 200;
		count = 40;
		nameSound = "rockets";
	};
	class 12Rnd_MLRS: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_12Rnd_MLRS";
		ammo = "R_MLRS";
		initSpeed = 44;
		maxLeadSpeed = 200;
		count = 12;
		nameSound = "rockets";
	};
	class 40Rnd_S8T: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_S8T";
		ammo = "R_S8T_AT";
		count = 40;
		initSpeed = 44;
		nameSound = "rockets";
	};
	class 80Rnd_S8T: 40Rnd_S8T
	{
		count = 80;
	};
	class 64Rnd_57mm: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_S5KO";
		ammo = "R_57mm_HE";
		initSpeed = 44;
		maxLeadSpeed = 200;
		nameSound = "rockets";
		sound[] = {"\ca\Weapons\Data\Sound\Rockets\rocketLauncher_Shot21",1.0,1};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1};
		count = 64;
	};
	class 128Rnd_57mm: 64Rnd_57mm
	{
		count = 128;
	};
	class 192Rnd_57mm: 64Rnd_57mm
	{
		count = 192;
	};
	class 6Rnd_GBU12_AV8B: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_GBU12";
		ammo = "Bo_GBU12_LGB";
		initSpeed = 0;
		maxLeadSpeed = 1000;
		sound[] = {"",1.0,1};
		reloadSound[] = {"",0.00031622776,1};
		count = 6;
		nameSound = "cannon";
	};
	class 2Rnd_GBU12: 6Rnd_GBU12_AV8B
	{
		count = 2;
		ammo = "Bo_GBU12_LGB_F35";
	};
	class 4Rnd_GBU12: 6Rnd_GBU12_AV8B
	{
		count = 4;
	};
	class 2Rnd_FAB_250: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_FAB250";
		ammo = "Bo_FAB_250";
		initSpeed = 0;
		maxLeadSpeed = 0;
		sound[] = {"\ca\Sounds\weapons\cannon\ch-29",31.622776,1,1100};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly_x2",1.0,1.1,700};
		count = 2;
		nameSound = "missiles";
	};
	class 4Rnd_FAB_250: 2Rnd_FAB_250
	{
		count = 4;
	};
	class 6Rnd_Mk82: 2Rnd_FAB_250
	{
		ammo = "Bo_Mk82";
		displayName = "$STR_MN_MK82";
		count = 6;
	};
	class 3Rnd_Mk82: 6Rnd_Mk82
	{
		count = 3;
	};
	class 4Rnd_R73: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_R73";
		count = 4;
		ammo = "M_R73_AA";
		initSpeed = 0;
		maxLeadSpeed = 1500;
		sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1300};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,10};
		nameSound = "missiles";
	};
	class 2Rnd_R73: 4Rnd_R73
	{
		count = 2;
	};
	class 4Rnd_Ch29: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_DN_CH29";
		ammo = "M_Ch29_AT";
		initSpeed = 0;
		nameSound = "missiles";
		sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1400};
		reloadSound[] = {"",0.00031622776,1};
		count = 4;
	};
	class 6Rnd_Ch29: 4Rnd_Ch29
	{
		count = 6;
	};
	class 2Rnd_Maverick_A10: VehicleMagazine
	{
		scope = 1;
		displayName = "$STR_DN_MAVERICK";
		count = 2;
		ammo = "M_Maverick_AT";
		initSpeed = 0;
		sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1400};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,20};
		timeToLive = 120;
		maneuvrability = 8;
		simulationStep = 0.01;
		sideAirFriction = 0.2;
		irLock = 1;
		trackOversteer = 1;
		trackLead = 1;
		maxSpeed = 300;
		initTime = 0.15;
		thrustTime = 2.0;
		thrust = 141;
		nameSound = "missiles";
	};
	class 8Rnd_9M311: VehicleMagazine
	{
		scope = 2;
		displayName = "$STR_MN_9M311";
		ammo = "M_9M311_AA";
		count = 8;
		initSpeed = 0;
		sound[] = {"\ca\Weapons\Data\Sound\TOW_2",3.1622777,1,1400};
		soundHit[] = {"\ca\Weapons\Data\Sound\explosion_large1",15.848933,1,2000};
		reloadSound[] = {"\ca\Weapons\Data\Sound\missload",0.00031622776,1,10};
		nameSound = "rockets";
	};
	class TimeBomb: CA_Magazine
	{
		scope = 1;
		displayName = "$STR_MN_TIME_BOMB";
		picture = "\CA\weapons\data\equip\m_satchel_CA.paa";
		useAction = 1;
		useActionTitle = "$STR_ACTION_PUTBOMB";
		type = "2 * 		256";
		value = 5;
		ammo = "TimeBomb";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
		sound[] = {"\ca\Weapons\Data\Sound\gravel_L",0.00031622776,1,10};
		descriptionShort = "$STR_DSS_TimeBomb";
	};
	class Mine: TimeBomb
	{
		scope = 2;
		displayName = "$STR_MN_MINE";
		picture = "\CA\weapons\data\equip\m_AT15_ca.paa";
		ammo = "Mine";
		nameSoundWeapon = "mine";
		nameSound = "mine";
		descriptionShort = "$STR_DSS_MINE";
	};
	class MineE: TimeBomb
	{
		scope = 2;
		displayName = "$STR_MN_MINE";
		picture = "\CA\weapons\data\equip\m_TM46_ca.paa";
		ammo = "MineE";
		nameSoundWeapon = "mine";
		descriptionShort = "$STR_DSS_MINE_E";
	};
	class PipeBomb: TimeBomb
	{
		scope = 2;
		displayName = "$STR_MN_PIPE_BOMB";
		value = 5;
		ammo = "PipeBomb";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
		useAction = 1;
		useActionTitle = "$STR_ACTION_PUTBOMB";
		sound[] = {"\ca\Weapons\Data\Sound\gravel_L",0.00031622776,1,10};
		descriptionShort = "$STR_DSS_Pipe_Bomb";
	};
	class HandGrenade: CA_Magazine
	{
		scope = 2;
		value = 1;
		displayName = "$STR_MN_HAND_GRENADE_EAST";
		picture = "\CA\weapons\data\equip\m_RGD5_ca.paa";
		type = 256;
		ammo = "GrenadeHand";
		count = 1;
		initSpeed = 22;
		nameSound = "handgrenade";
		maxLeadSpeed = 7;
		sound[] = {"",0.00031622776,1};
		descriptionShort = "$STR_DSS_HandGrenade";
	};
	class HandGrenade_Stone: HandGrenade
	{
		displayName = "$STR_MN_STONE";
		value = 0.1;
		ammo = "GrenadeHand_stone";
		descriptionShort = "$STR_DSS_HandGrenade_stone";
	};
	class HandGrenade_West: HandGrenade
	{
		displayName = "$STR_MN_HAND_GRENADE_WEST";
		picture = "\CA\weapons\data\equip\m_M67_CA.paa";
		ammo = "GrenadeHandTimedWest";
		descriptionShort = "$STR_DSS_HandGrenade_West";
	};
	class HandGrenade_East: HandGrenade_West
	{
		displayName = "$STR_MN_HAND_GRENADE_EAST";
		picture = "\CA\weapons\data\equip\m_RGD5_ca.paa";
		descriptionShort = "$STR_DSS_HandGrenade_East";
		ammo = "GrenadeHandTimedEast";
	};
	class SmokeShell: HandGrenade
	{
		displayName = "$STR_MN_SMOKE";
		picture = "\CA\weapons\data\equip\m_ANM8_white_ca.paa";
		value = 2;
		ammo = "SmokeShell";
		nameSoundWeapon = "smokeshell";
		nameSound = "smokeshell";
		descriptionShort = "$STR_DSS_SmokeShell";
	};
	class SmokeShellRed: SmokeShell
	{
		displayName = "$STR_MN_SMOKE_RED";
		picture = "\CA\weapons\data\equip\m_m18red_ca.paa";
		ammo = "SmokeShellRed";
		descriptionShort = "$STR_DSS_SmokeShellRed";
	};
	class SmokeShellGreen: SmokeShell
	{
		displayName = "$STR_MN_SMOKE_GREEN";
		picture = "\CA\weapons\data\equip\m_m18green_ca.paa";
		ammo = "SmokeShellGreen";
		descriptionShort = "$STR_DSS_SmokeShellGreen";
	};
	class SmokeShellYellow: SmokeShell
	{
		displayName = "$STR_MN_SMOKE_YELLOW";
		picture = "\CA\weapons\data\equip\m_m18yellow_ca.paa";
		ammo = "SmokeShellYellow";
		descriptionShort = "$STR_DSS_SmokeShellYellow";
	};
	class SmokeShellPurple: SmokeShell
	{
		displayName = "$STR_MN_SMOKE_PURPLE";
		picture = "\CA\weapons\data\equip\m_m18violet_ca.paa";
		ammo = "SmokeShellPurple";
		descriptionShort = "$STR_DSS_SmokeShellPURPLE";
	};
	class SmokeShellBlue: SmokeShell
	{
		displayName = "$STR_MN_SMOKE_BLUE";
		ammo = "SmokeShellBlue";
		descriptionShort = "$STR_DSS_SmokeShellBLUE";
	};
	class SmokeShellOrange: SmokeShell
	{
		displayName = "$STR_MN_SMOKE_ORANGE";
		ammo = "SmokeShellOrange";
		descriptionShort = "$STR_DSS_SmokeShellORANGE";
	};
	class Laserbatteries: CA_Magazine
	{
		scope = 2;
		displayName = "$STR_DN_LASER_DESIGNATOR";
		picture = "\CA\weapons\data\equip\m_battery_CA.paa";
		ammo = "Laserbeam";
		count = 1;
		initSpeed = 30;
		nameSound = "laserdesignator";
		descriptionShort = "$STR_DSS_Laserbatteries";
	};
};
class CfgPatches
{
	class CAWeapons
	{
		units[] = {};
		weapons[] = {"M9","M9SD","Makarov","MakarovSD","AK74","AKS74U","G36A","G36C","G36K","M16A2","M24","M249","M4","M4AIM","M4SD","M4SPR","M4A1","M4GL","MP5SD","MP5A5","PK","SVD","Shell73","Heat73","Shell73","Gun73","Shell105","Heat105","Gun105","Shell120","Heat120","Gun120","Shell125","Heat12","Gun125","Mortar","Flare","FlareGreen","FlareRed","FlareYellow","HandGrenade","SmokeShell","SmokeShellRed","SmokeShellGreen","HandGunBase","TimeBomb","Mine","MineE","PipeBomb","CarHorn","BikeHorn","Binocular","NVGoggles","Phone","Throw","Put","ReammoBoxWest","ReammoBoxEast","ReammoBoxGuer","AmmoBoxAddW","AmmoBoxAddE","AmmoBoxWizardW","WeaponBoxWizardW","AmmoBoxWizardE","WeaponBoxWizardE","AmmoBoxWizardR","WeaponBoxWizardR","HeavyReammoBox","HeavyReammoBoxWest","HeavyReammoBoxEast","HeavyReammoBoxRes","AmmoBoxOUTW","AmmoBoxOUTWW","AmmoBoxOUTE","AmmoBoxOUTEW","ReammoBoxOUTGuer","AmmoBoxOUTGW","Minigun","SmokeLauncher"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData","CA_Anims_Char"};
	};
};
class RscObject;
class RscTitles
{
	class binocular
	{
		idd = -1;
		movingEnable = 0;
		duration = 1000;
		name = "binocular";
		class objects
		{
			class binocular: RscObject
			{
				model = "\ca\Weapons\optika_dalekohled.p3d";
				idc = -1;
				position[] = {0,0,0.053};
				direction[] = {"sin 0","sin 180 * cos 0","cos 180 * cos 0"};
				up[] = {0,"cos 180","-sin 180"};
			};
		};
	};
};
class Mode_SemiAuto
{
	displayName = "$STR_DN_MODE_SEMIAUTO";
};
class Mode_Burst: Mode_SemiAuto
{
	displayName = "$STR_DN_MODE_BURST";
};
class Mode_FullAuto: Mode_SemiAuto
{
	displayName = "$STR_DN_MODE_FULLAUTO";
};
class CfgWeaponCursors
{
	class RifleCursorCore;
	class LawCursorCore;
	class RifleCursor: RifleCursorCore
	{
		class Sections
		{
			class Section1
			{
				uMin = 0;
				vMin = 0;
				uMax = 0.5;
				vMax = 1;
				xOffset = -20;
				yOffset = 0;
			};
			class Section2
			{
				uMin = 0.5;
				vMin = 0;
				uMax = 1;
				vMax = 1;
				xOffset = 20;
				yOffset = 0;
			};
		};
	};
	class MGCursor: RifleCursor{};
	class PistolCursor: RifleCursor{};
	class GLCursor: RifleCursor{};
	class LawCursor: LawCursorCore{};
};
class PreloadTextures
{
	class CfgWeaponCursors
	{
		class RifleCursor
		{
			texture = "*";
		};
		class MGCursor
		{
			texture = "*";
		};
		class LawCursor
		{
			texture = "*";
		};
	};
};
class cfgWeapons
{
	class Default;
	class PistolCore;
	class RifleCore;
	class MGunCore;
	class LauncherCore;
	class GrenadeCore;
	class CannonCore;
	class MGun: MGunCore
	{
		type = 65536;
		cursor = "MGCursor";
		cursoraim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		displayName = "$STR_DN_MGUN";
		nameSound = "mgun";
		reloadTime = 0.25;
		autoFire = 1;
		reloadAction = "ManActReloadMagazine";
		sound[] = {"\ca\Weapons\Data\Sound\M60_SS",1.0,1,1400};
		soundContinuous = 0;
		reloadSound[] = {"",1,1};
		initSpeed = 900;
		flash = "gunfire";
		flashSize = 0.5;
		optics = 0;
	};
	class Pistol: PistolCore
	{
		reloadTime = 0.1;
		autoReload = 0;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.5;
		magazineReloadTime = 2;
		opticsFlare = 0;
		nameSound = "Pistol";
		cursor = "PistolCursor";
		cursoraim = "foresight";
		cursorSize = 1;
		bullet1[] = {"ca\sounds\weapons\shells\pistols_shell_metal_04",0.17782794,1,30};
		bullet2[] = {"ca\sounds\weapons\shells\pistols_shell_metal_03",0.17782794,1,30};
		bullet3[] = {"ca\sounds\weapons\shells\pistols_shell_metal_02",0.17782794,1,30};
		bullet4[] = {"ca\sounds\weapons\shells\pistols_shell_metal_01",0.17782794,1,30};
		bullet5[] = {"ca\sounds\weapons\shells\pistols_shell_dirt_01",0.31622776,1,25};
		bullet6[] = {"ca\sounds\weapons\shells\pistols_shell_dirt_02",0.31622776,1,25};
		bullet7[] = {"ca\sounds\weapons\shells\pistols_shell_dirt_03",0.31622776,1,25};
		bullet8[] = {"ca\sounds\weapons\shells\pistols_shell_dirt_04",0.31622776,1,25};
		bullet9[] = {"ca\sounds\weapons\shells\pistols_shell_soft_01",0.17782794,1,25};
		bullet10[] = {"ca\sounds\weapons\shells\pistols_shell_soft_02",0.17782794,1,25};
		bullet11[] = {"ca\sounds\weapons\shells\pistols_shell_soft_03",0.17782794,1,25};
		bullet12[] = {"ca\sounds\weapons\shells\pistols_shell_soft_04",0.17782794,1,25};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class M9: Pistol
	{
		scope = 2;
		model = "\ca\weapons\M9_Beretta";
		modelOptics = "-";
		picture = "\CA\weapons\data\equip\w_M9_ca.paa";
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.04;
		optics = 1;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		displayName = "$STR_DN_M9";
		begin1[] = {"ca\sounds\weapons\pistols\m9_single1",0.7943282,1,700};
		soundBegin[] = {"begin1",1};
		drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.01,1,20};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\pistol_reload",0.1,1,20};
		magazines[] = {"15Rnd_9x19_M9","15Rnd_9x19_M9SD"};
		dispersion = 0.02;
		ffCount = 1;
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		class Library
		{
			libTextDesc = "$STR_LIB_M9";
		};
		descriptionShort = "$STR_DSS_M9";
	};
	class M9SD: M9
	{
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		displayName = "$STR_DN_M9SD";
		model = "\ca\weapons\M9_Beretta_SD";
		picture = "\CA\weapons\data\equip\w_M9SD_ca.paa";
		magazines[] = {"15Rnd_9x19_M9SD"};
		begin1[] = {"ca\sounds\weapons\pistols\m9SD_single1",0.31622776,1,200};
		soundBegin[] = {"begin1",1};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\pistol_reload",0.031622775,1,20};
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 15;
		midRangeProbab = 0.3;
		maxRange = 20;
		maxRangeProbab = 0.04;
		class Library
		{
			libTextDesc = "$STR_LIB_M9SD";
		};
		descriptionShort = "$STR_DSS_M9SD";
	};
	class Makarov: Pistol
	{
		scope = 2;
		model = "\ca\weapons\makarov";
		modelOptics = "-";
		picture = "\CA\weapons\data\equip\w_makarov_ca.paa";
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.04;
		optics = 1;
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		displayName = "$STR_DN_MAKAROV";
		begin1[] = {"ca\sounds\weapons\pistols\makarov_single1",0.7943282,1,700};
		soundBegin[] = {"begin1",1};
		drySound[] = {"\ca\Weapons\Data\Sound\T33_dry_v1",0.0001,1,20};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\pistol_reload",0.031622775,1,20};
		magazines[] = {"8Rnd_9x18_Makarov","8Rnd_9x18_MakarovSD"};
		dispersion = 0.02;
		ffCount = 1;
		recoil = "recoil_single_pistol_2outof3";
		recoilProne = "recoil_single_pistol_prone_2outof3";
		aiRateOfFire = 0.5;
		aiRateOfFireDistance = 50;
		class Library
		{
			libTextDesc = "$STR_LIB_MAKAROV";
		};
		descriptionShort = "$STR_DSS_MAKAROV";
	};
	class MakarovSD: Makarov
	{
		model = "\ca\weapons\makarov_silenced";
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		displayName = "$STR_DN_MAKAROVSD";
		picture = "\CA\weapons\data\equip\w_makarovSD_ca.paa";
		begin1[] = {"ca\sounds\weapons\pistols\makarovSD_single1",0.31622776,1,200};
		soundBegin[] = {"begin1",1};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\pistol_reload",0.031622775,1,20};
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 15;
		midRangeProbab = 0.3;
		maxRange = 20;
		maxRangeProbab = 0.04;
		class Library
		{
			libTextDesc = "$STR_LIB_MAKAROVSD";
		};
		descriptionShort = "$STR_DSS_MAKAROVSD";
	};
	class GrenadeLauncher: Default
	{
		cursor = "GLCursor";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 4;
		value = 3;
		type = 0;
		displayName = "$STR_DN_GRENADE";
		reloadTime = 3.0;
		sound[] = {"\ca\Weapons\Data\Sound\grenadelauncher_1",0.001,1,400};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\z_sinus",3.1622778e-005,1,1};
		reloadAction = "ManActReloadMagazine";
		magazineReloadTime = 1;
		magazines[] = {};
		initSpeed = 75;
		canLock = 0;
		autoReload = 0;
		autoAimEnabled = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "M240Recoil";
		dispersion = 0.007;
		aiDispersionCoefY = 6;
		maxLeadSpeed = 15;
		optics = 0;
		muzzlePos = "usti granatometu";
		muzzleEnd = "konec granatometu";
		cartridgePos = "";
		cartridgeVel = "";
		minRange = 30;
		minRangeProbab = 0.1;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
	};
	class Rifle: RifleCore
	{
		autoFire = 1;
		reloadAction = "ManActReloadMagazine";
		soundContinuous = 0;
		optics = 0;
		scope = 1;
		cursor = "RifleCursor";
		cursoraim = "Foresight";
		cursorSize = 1;
		value = 4;
		displayName = "$STR_DN_RIFLE";
		nameSound = "rifle";
		reloadTime = 0.15;
		modelOptics = "-";
		sound[] = {""};
		drySound[] = {"\ca\Weapons\Data\Sound\M16_cock_v1",0.00031622776,1,10};
		reloadSound[] = {"",1,1};
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.056234132,1,10};
		bullet1[] = {"ca\sounds\weapons\shells\small_shell_metal_04",0.17782794,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\small_shell_metal_03",0.17782794,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\small_shell_metal_02",0.17782794,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\small_shell_metal_01",0.17782794,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\small_shell_dirt_07",0.31622776,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\small_shell_dirt_09",0.31622776,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\small_shell_dirt_10",0.31622776,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\small_shell_dirt_12",0.31622776,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\small_shell_soft_05",0.17782794,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\small_shell_soft_09",0.17782794,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\small_shell_soft_10",0.17782794,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\small_shell_soft_13",0.17782794,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		opticsFlare = 0;
		autoReload = 0;
		aiDispersionCoefX = 6.0;
		aiDispersionCoefY = 6.0;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.5;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		maxLeadSpeed = 23;
		canLock = 0;
		flash = "gunfire";
		flashSize = 0.5;
		dispersion = 0.0001;
		recoil = "assaultRifleBase";
		recoilProne = "assaultRifleBase";
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 3;
		class M203Muzzle: GrenadeLauncher
		{
			displayName = "$STR_DN_M203";
			magazines[] = {"1Rnd_HE_M203","FlareWhite_M203","FlareGreen_M203","FlareRed_M203","FlareYellow_M203","1Rnd_Smoke_M203","1Rnd_SmokeRed_M203","1Rnd_SmokeGreen_M203","1Rnd_SmokeYellow_M203"};
			sound[] = {"\ca\Weapons\Data\Sound\grenadelauncher_1",0.1,1,400};
			reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\flare_reload",0.00031622776,1,20};
			magazineReloadTime = 0;
			reloadTime = 0.1;
			optics = 1;
			modelOptics = "-";
			cameraDir = "GL look";
			memoryPointCamera = "GL eye";
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.1;
			opticsZoomInit = 0.5;
		};
	};
	class M16_base: Rifle
	{
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_StanagSD","20Rnd_556x45_Stanag","30Rnd_556x45_G36","100Rnd_556x45_BetaCMag","30Rnd_556x45_G36SD"};
		modes[] = {"Single","Burst"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\m16_single1",1.7782794,1,1000};
			begin2[] = {"ca\sounds\weapons\rifles\m16_single2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.075;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion = 0.001;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"ca\sounds\weapons\rifles\m16_single1",1.7782794,1,1000};
			begin2[] = {"ca\sounds\weapons\rifles\m16_single2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundBurst = 0;
			recoil = "recoil_auto_primary_2outof10";
			recoilProne = "recoil_auto_primary_prone_2outof10";
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			dispersion = 0.001;
			reloadTime = 0.075;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\m16_single1",1.7782794,1,1000};
			begin2[] = {"ca\sounds\weapons\rifles\m16_single2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.09;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			dispersion = 0.00175;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
		};
		class M203Muzzle: M203Muzzle{};
	};
	class M16A2: M16_base
	{
		scope = 2;
		value = 0;
		model = "\ca\weapons\m16_proxy";
		optics = 1;
		dexterity = 1.64;
		displayName = "$STR_DN_M16A2";
		picture = "\CA\weapons\data\equip\w_m16_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.00031622776,1,10};
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.056234132,1,20};
		class Library
		{
			libTextDesc = "$STR_LIB_M16";
		};
		descriptionShort = "$STR_DSS_M16A2";
	};
	class M16A2GL: M16A2
	{
		displayName = "$STR_DN_M16A2GL";
		model = "\ca\Weapons\m16_granatomet_proxy.p3d";
		muzzles[] = {"this","M203Muzzle"};
		picture = "\CA\weapons\data\equip\w_m16m203_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M16GL.rtm"};
		dexterity = 1.46;
		class Library
		{
			libTextDesc = "$STR_LIB_M16A2_GL";
		};
		descriptionShort = "$STR_DSS_M16A2_GL";
	};
	class M24: Rifle
	{
		scope = 0;
		model = "\ca\weapons\M24_green";
		picture = "\CA\weapons\data\equip\w_m24_green_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
		dexterity = 1.35;
		displayName = "$STR_DN_M24";
		modelOptics = "\ca\weapons\2Dscope_MilDot_10";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		opticsZoomMin = 0.0249;
		opticsZoomMax = 0.0249;
		opticsZoomInit = 0.0249;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\M24.rtm"};
		begin1[] = {"ca\sounds\weapons\rifles\sniper_single_05",1.7782794,1,1000};
		soundBegin[] = {"begin1",1};
		soundContinuous = 0;
		drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.01,1,10};
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.1,1,20};
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.05;
		dispersion = 0.00012;
		magazines[] = {"5Rnd_762x51_M24"};
		reloadTime = 2;
		backgroundReload = 1;
		recoil = "recoil_single_primary_6outof10";
		recoilProne = "recoil_single_primary_prone_5outof10";
		value = 1000;
		aiRateOfFire = 8.0;
		aiRateOfFireDistance = 1000;
		class Library
		{
			libTextDesc = "$STR_LIB_M24";
		};
		descriptionShort = "$STR_DSS_M24";
	};
	class M240: Rifle
	{
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03",0.07079458,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02",0.07079458,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01",0.07079458,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02",0.07079458,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03",0.07079458,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.07079458,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.07079458,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.07079458,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.07079458,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.07079458,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		scope = 0;
		model = "\ca\weapons\M240";
		picture = "\CA\weapons\data\equip\w_m240_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
		displayName = "$STR_DN_M240";
		cursor = "MGCursor";
		cursoraim = "\ca\Weapons\Data\clear_empty";
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
		{
			recoil = "recoil_auto_machinegun_8outof10";
			recoilProne = "recoil_auto_machinegun_prone_5outof10";
			dispersion = 0.0008;
			begin1[] = {"ca\sounds\Weapons\machineguns\M240_single1",1.7782794,1,1000};
			begin2[] = {"ca\sounds\Weapons\machineguns\M240_single2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			reloadTime = 0.0708762;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 16;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY = 21.0;
		aiDispersionCoefX = 21.0;
		dexterity = 0.51;
		type = "1	 + 	4";
		reloadMagazineSound[] = {"\Ca\sounds\Weapons\rifles\reload-belt-1",0.056234132,1,25};
		magazines[] = {"100Rnd_762x51_M240"};
		class Library
		{
			libTextDesc = "$STR_LIB_M240";
		};
		descriptionShort = "$STR_DSS_M240";
	};
	class Mk_48: M240
	{
		scope = 0;
		picture = "\CA\weapons\data\equip\W_MK48_mod_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\Mk48.rtm"};
		displayName = "$STR_DN_MK48";
		dexterity = 0.67;
		class manual: manual
		{
			recoil = "recoil_auto_machinegun_7outof10";
			recoilProne = "recoil_auto_machinegun_prone_4outof10";
			dispersion = 0.0011;
		};
		class close: close
		{
			recoil = "recoil_auto_machinegun_7outof10";
			recoilProne = "recoil_auto_machinegun_prone_4outof10";
			dispersion = 0.0011;
		};
		class short: short
		{
			recoil = "recoil_auto_machinegun_7outof10";
			recoilProne = "recoil_auto_machinegun_prone_4outof10";
			dispersion = 0.0011;
		};
		class medium: medium
		{
			recoil = "recoil_auto_machinegun_7outof10";
			recoilProne = "recoil_auto_machinegun_prone_4outof10";
			dispersion = 0.0011;
		};
		class far: far
		{
			recoil = "recoil_auto_machinegun_7outof10";
			recoilProne = "recoil_auto_machinegun_prone_4outof10";
			dispersion = 0.0011;
		};
		class Library
		{
			libTextDesc = "$STR_LIB_Mk48";
		};
		descriptionShort = "$STR_DSS_Mk48";
	};
	class M249: Rifle
	{
		scope = 0;
		picture = "\CA\weapons\data\equip\w_m249_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
		displayName = "$STR_DN_M249";
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
		{
			reloadTime = 0.07;
			recoil = "recoil_auto_machinegun_5outof10";
			recoilProne = "recoil_auto_machinegun_prone_3outof10";
			dispersion = 0.0015;
			begin1[] = {"ca\sounds\Weapons\machineguns\M249_single1",1.7782794,1,1000};
			begin2[] = {"ca\sounds\Weapons\machineguns\M249_single2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 16;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY = 14.0;
		aiDispersionCoefX = 14.0;
		dexterity = 1.21;
		type = "1	 + 	4";
		reloadMagazineSound[] = {"\Ca\sounds\Weapons\rifles\reload-belt-1",0.056234132,1,20};
		magazines[] = {"200Rnd_556x45_M249","30Rnd_556x45_Stanag","20Rnd_556x45_Stanag","30Rnd_556x45_StanagSD","100Rnd_556x45_BetaCMag","30Rnd_556x45_G36","30Rnd_556x45_G36SD"};
		class Library
		{
			libTextDesc = "$STR_LIB_M249";
		};
		descriptionShort = "$STR_DSS_M249";
	};
	class M4A1: M16_base
	{
		scope = 2;
		picture = "\ca\Weapons\Data\equip\w_m4_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName = "$STR_DN_M4A1";
		modes[] = {"Single","FullAuto"};
		model = "\ca\Weapons\M4A1";
		dexterity = 1.8;
		optics = 1;
		opticsDisablePeripherialVision = 1;
		value = 2;
		drySound[] = {"Ca\sounds\Weapons\rifles\dry",0.0056234132,1};
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.056234132,1,20};
		class Single: Single
		{
			begin1[] = {"ca\sounds\weapons\rifles\M4A_single1",1.7782794,1,1000};
			begin2[] = {"ca\sounds\weapons\rifles\M4A_single2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.09;
			dispersion = 0.00175;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class FullAuto: FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\M4A_single1",1.7782794,1,1000};
			begin2[] = {"ca\sounds\weapons\rifles\M4A_single2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_M4A1";
		};
		descriptionShort = "$STR_DSS_M4A1";
	};
	class PK: Rifle
	{
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.17782794,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03",0.17782794,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02",0.17782794,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.17782794,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01",0.31622776,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02",0.31622776,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03",0.31622776,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.31622776,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.17782794,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.17782794,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.17782794,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.17782794,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		scope = 2;
		model = "\ca\weapons\PK_MG_proxy";
		displayName = "$STR_DN_PK";
		dexterity = 0.96;
		picture = "\CA\weapons\data\equip\w_pk_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_mg_CA.paa";
		cursor = "MGCursor";
		cursoraim = "\ca\Weapons\Data\clear_empty";
		reloadMagazineSound[] = {"\Ca\sounds\Weapons\rifles\reload-belt-1",0.056234132,1,20};
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
		{
			reloadTime = 0.09;
			recoil = "recoil_auto_machinegun_8outof10";
			recoilProne = "recoil_auto_machinegun_prone_5outof10";
			dispersion = 0.001;
			begin1[] = {"ca\sounds\weapons\machineguns\PKM_single2",1.4125376,1,1200};
			begin2[] = {"ca\sounds\weapons\machineguns\PKM_single3",1.4125376,1,1200};
			soundBegin[] = {"begin1",0.3,"begin2",0.7};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 16;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY = 21.0;
		aiDispersionCoefX = 21.0;
		type = "1	 + 	4";
		magazines[] = {"100Rnd_762x54_PK"};
		class Library
		{
			libTextDesc = "$STR_LIB_PK";
		};
		descriptionShort = "$STR_DSS_PK";
	};
	class SVD: Rifle
	{
		scope = 2;
		model = "\ca\weapons\SVD_dragunov_proxy";
		dexterity = 1.57;
		displayName = "$STR_DN_SVD";
		modelOptics = "\ca\weapons\optika_snpiere";
		opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur3"};
		picture = "\CA\weapons\data\equip\w_SVD_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_CA.paa";
		opticsFlare = 1;
		opticsDisablePeripherialVision = 1;
		opticsZoomInit = 0.0623;
		opticsZoomMin = 0.0623;
		opticsZoomMax = 0.0623;
		distanceZoomMin = 200;
		distanceZoomMax = 200;
		begin1[] = {"ca\sounds\weapons\rifles\sniper_single_05",1.7782794,1,1200};
		soundBegin[] = {"begin1",1};
		reloadMagazineSound[] = {"ca\sounds\weapons\rifles\reload-m16-3",0.31622776,1,30};
		recoil = "recoil_single_primary_7outof10";
		recoilProne = "recoil_single_primary_prone_6outof10";
		dispersion = 0.00025;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1300;
		maxRangeProbab = 0.05;
		autoFire = 0;
		value = 1000;
		aiRateOfFire = 9.0;
		aiRateOfFireDistance = 1300;
		magazines[] = {"10Rnd_762x54_SVD"};
		class Library
		{
			libTextDesc = "$STR_LIB_SVD";
		};
		descriptionShort = "$STR_DSS_SVD";
	};
	class G36C: Rifle
	{
		scope = 0;
		value = 4;
		model = "\ca\weapons\G36\G36_C";
		picture = "\ca\weapons\G36\Data\Equip\w_g36c_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName = "$STR_DN_G36C";
		dexterity = 1.8;
		drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1",0.01,1};
		magazines[] = {"30Rnd_556x45_G36","100Rnd_556x45_BetaCMag","30Rnd_556x45_G36SD","30Rnd_556x45_Stanag","30Rnd_556x45_StanagSD","20Rnd_556x45_Stanag"};
		bullet1[] = {"ca\sounds\weapons\shells\small_shell_metal_04",0.17782794,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\small_shell_metal_03",0.17782794,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\small_shell_metal_02",0.17782794,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\small_shell_metal_01",0.17782794,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\small_shell_dirt_07",0.31622776,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\small_shell_dirt_09",0.31622776,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\small_shell_dirt_10",0.31622776,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\small_shell_dirt_12",0.31622776,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\small_shell_soft_05",0.17782794,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\small_shell_soft_09",0.17782794,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\small_shell_soft_10",0.17782794,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\small_shell_soft_13",0.17782794,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single","Burst","Fullauto"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\g36_single2",2.5118864,1,1200};
			begin2[] = {"ca\sounds\weapons\rifles\g36_single1",2.5118864,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			dispersion = 0.002;
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"ca\sounds\weapons\rifles\g36_single2",2.5118864,1,1200};
			begin2[] = {"ca\sounds\weapons\rifles\g36_single1",2.5118864,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundBurst = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "recoil_auto_primary_2outof10";
			recoilProne = "recoil_auto_primary_prone_2outof10";
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			dispersion = 0.002;
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\g36_single2",2.5118864,1,1200};
			begin2[] = {"ca\sounds\weapons\rifles\g36_single1",2.5118864,1,1200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundContinuous = 0;
			reloadTime = 0.1;
			recoil = "recoil_auto_primary_3outof10";
			recoilProne = "recoil_auto_primary_prone_3outof10";
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 60;
			maxRangeProbab = 0.05;
			dispersion = 0.002;
		};
		class Library
		{
			libTextDesc = "$STR_LIB_G36C";
		};
		descriptionShort = "$STR_DSS_G36C";
	};
	class G36_C_SD_eotech: G36C
	{
		scope = 0;
		value = 6;
		model = "\ca\weapons\G36\G36_C_SD_eotech";
		displayName = "$STR_DN_G36_C_SD_EOTECH";
		picture = "\ca\weapons\G36\Data\Equip\w_G36_C_SD_eotech_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		magazines[] = {"30Rnd_556x45_G36SD","30Rnd_556x45_StanagSD"};
		fireLightDuration = 0.0;
		fireLightIntensity = 0.0;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		modes[] = {"Single","Burst","Fullauto"};
		class Single: Single
		{
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1.0,1,300};
			soundBegin[] = {"begin1",1};
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
		};
		class Burst: Burst
		{
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1.0,1,300};
			soundBegin[] = {"begin1",1};
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.05;
		};
		class FullAuto: FullAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single2",1.0,1,300};
			soundBegin[] = {"begin1",1};
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
		};
		class Library
		{
			libTextDesc = "$STR_LIB_G36C_SD_eotech";
		};
		descriptionShort = "$STR_DSS_G36C_SD_eotech";
	};
	class G36a: Rifle
	{
		scope = 0;
		value = 8;
		model = "\ca\weapons\G36\G36";
		picture = "\ca\weapons\G36\Data\Equip\w_g36_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName = "$STR_DN_G36";
		dexterity = 1.66;
		drySound[] = {"\ca\Weapons\Data\Sound\G36_dry_v1",0.00031622776,1};
		magazines[] = {"30Rnd_556x45_G36","100Rnd_556x45_BetaCMag","30Rnd_556x45_G36SD","30Rnd_556x45_Stanag","30Rnd_556x45_StanagSD","20Rnd_556x45_Stanag"};
		muzzles[] = {"MuzzleFar"};
		class MuzzleFar: G36C
		{
			optics = 1;
			opticsDisablePeripherialVision = 1;
			modelOptics = "\ca\weapons\G36\G36_optics";
			opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur2"};
			opticsZoomMin = 0.0623;
			opticsZoomMax = 0.0623;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			modes[] = {"Single","Burst","Fullauto"};
			class Single: Mode_SemiAuto
			{
				begin1[] = {"ca\sounds\weapons\rifles\g36_single1",2.2387211,1,1000};
				begin2[] = {"ca\sounds\weapons\rifles\g36_single2",2.2387211,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				reloadTime = 0.1;
				recoil = "recoil_single_primary_3outof10";
				recoilProne = "recoil_single_primary_prone_3outof10";
				dispersion = 0.0007;
				minRange = 2;
				minRangeProbab = 0.3;
				midRange = 250;
				midRangeProbab = 0.7;
				maxRange = 400;
				maxRangeProbab = 0.05;
			};
			class Burst: Mode_Burst
			{
				begin1[] = {"ca\sounds\weapons\rifles\g36_single1",2.2387211,1,1000};
				begin2[] = {"ca\sounds\weapons\rifles\g36_single2",2.2387211,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				soundBurst = 0;
				reloadTime = 0.1;
				ffCount = 3;
				recoil = "recoil_auto_primary_2outof10";
				recoilProne = "recoil_auto_primary_prone_2outof10";
				minRange = 1;
				minRangeProbab = 0.2;
				midRange = 80;
				midRangeProbab = 0.7;
				maxRange = 120;
				maxRangeProbab = 0.05;
				dispersion = 0.0007;
			};
			class FullAuto: Mode_FullAuto
			{
				begin1[] = {"ca\sounds\weapons\rifles\g36_single1",2.2387211,1,1000};
				begin2[] = {"ca\sounds\weapons\rifles\g36_single2",2.2387211,1,1000};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
				soundContinuous = 0;
				reloadTime = 0.1;
				recoil = "recoil_auto_primary_3outof10";
				recoilProne = "recoil_auto_primary_prone_3outof10";
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 25;
				midRangeProbab = 0.7;
				maxRange = 70;
				maxRangeProbab = 0.05;
				dispersion = 0.0007;
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_G36A";
		};
		descriptionShort = "$STR_DSS_G36A";
		bullet1[] = {"ca\sounds\weapons\shells\small_shell_metal_04",0.17782794,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\small_shell_metal_03",0.17782794,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\small_shell_metal_02",0.17782794,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\small_shell_metal_01",0.17782794,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\small_shell_dirt_07",0.31622776,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\small_shell_dirt_09",0.31622776,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\small_shell_dirt_10",0.31622776,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\small_shell_dirt_12",0.31622776,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\small_shell_soft_05",0.17782794,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\small_shell_soft_09",0.17782794,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\small_shell_soft_10",0.17782794,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\small_shell_soft_13",0.17782794,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class G36K: G36a
	{
		scope = 0;
		dexterity = 1.8;
		value = 6;
		model = "\ca\weapons\G36\G36_K";
		displayName = "$STR_DN_G36K";
		picture = "\ca\weapons\G36\Data\Equip\w_g36k_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		muzzles[] = {"MuzzleFar"};
		class MuzzleFar: MuzzleFar
		{
			modes[] = {"Single","Burst","Fullauto"};
			class Single: Single
			{
				dispersion = 0.002;
				minRange = 2;
				minRangeProbab = 0.1;
				midRange = 250;
				midRangeProbab = 0.7;
				maxRange = 350;
				maxRangeProbab = 0.05;
			};
			class Burst: Burst
			{
				dispersion = 0.005;
				minRange = 1;
				minRangeProbab = 0.1;
				midRange = 80;
				midRangeProbab = 0.7;
				maxRange = 120;
				maxRangeProbab = 0.05;
			};
			class FullAuto: FullAuto
			{
				dispersion = 0.004;
				minRange = 0;
				minRangeProbab = 0.1;
				midRange = 25;
				midRangeProbab = 0.7;
				maxRange = 70;
				maxRangeProbab = 0.05;
			};
		};
		class Library
		{
			libTextDesc = "$STR_LIB_G36K";
		};
		descriptionShort = "$STR_DSS_G36K";
	};
	class MG36: G36C
	{
		value = 12;
		scope = 0;
		dexterity = 1.6;
		model = "\ca\weapons\G36\MG36";
		picture = "\ca\weapons\G36\Data\Equip\w_MG36_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_regular_CA.paa";
		displayName = "$STR_DN_MG36";
		magazines[] = {"100Rnd_556x45_BetaCMag","30Rnd_556x45_G36","30Rnd_556x45_G36SD","30Rnd_556x45_Stanag","30Rnd_556x45_StanagSD","20Rnd_556x45_Stanag"};
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\SAW.rtm"};
		modes[] = {"Single","Burst","Fullauto","close","medium","far"};
		modelOptics = "-";
		class Single: Mode_SemiAuto
		{
			begin1[] = {"ca\sounds\weapons\rifles\g36_single1",2.2387211,1,1100};
			begin2[] = {"ca\sounds\weapons\rifles\g36_single2",2.2387211,1,1100};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_3outof10";
			dispersion = 0.0007;
			recoilProne = "recoil_single_primary_prone_1outof10";
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 600;
			maxRangeProbab = 0.01;
			showToPlayer = 1;
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"ca\sounds\weapons\rifles\g36_single1",2.2387211,1,1100};
			begin2[] = {"ca\sounds\weapons\rifles\g36_single2",2.2387211,1,1100};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			soundBurst = 0;
			reloadTime = 0.1;
			ffCount = 3;
			recoil = "recoil_auto_primary_2outof10";
			minRange = 1;
			minRangeProbab = 0.2;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
			dispersion = 0.0007;
			recoilProne = "recoil_auto_primary_prone_1outof10";
		};
		class FullAuto: Mode_FullAuto
		{
			recoilProne = "recoil_auto_primary_prone_2outof10";
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			begin1[] = {"ca\sounds\weapons\rifles\g36_single1",2.2387211,1,1100};
			begin2[] = {"ca\sounds\weapons\rifles\g36_single2",2.2387211,1,1100};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			recoil = "recoil_auto_primary_3outof10";
			reloadTime = 0.1;
			dispersion = 0.0007;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 8;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 400;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class Library
		{
			libTextDesc = "$STR_LIB_MG36";
		};
		descriptionShort = "$STR_DSS_MG36";
		bullet1[] = {"ca\sounds\weapons\shells\small_shell_metal_04",0.17782794,1,20};
		bullet2[] = {"ca\sounds\weapons\shells\small_shell_metal_03",0.17782794,1,20};
		bullet3[] = {"ca\sounds\weapons\shells\small_shell_metal_02",0.17782794,1,20};
		bullet4[] = {"ca\sounds\weapons\shells\small_shell_metal_01",0.17782794,1,20};
		bullet5[] = {"ca\sounds\weapons\shells\small_shell_dirt_07",0.31622776,1,20};
		bullet6[] = {"ca\sounds\weapons\shells\small_shell_dirt_09",0.31622776,1,20};
		bullet7[] = {"ca\sounds\weapons\shells\small_shell_dirt_10",0.31622776,1,20};
		bullet8[] = {"ca\sounds\weapons\shells\small_shell_dirt_12",0.31622776,1,20};
		bullet9[] = {"ca\sounds\weapons\shells\small_shell_soft_05",0.17782794,1,20};
		bullet10[] = {"ca\sounds\weapons\shells\small_shell_soft_09",0.17782794,1,20};
		bullet11[] = {"ca\sounds\weapons\shells\small_shell_soft_10",0.17782794,1,20};
		bullet12[] = {"ca\sounds\weapons\shells\small_shell_soft_13",0.17782794,1,20};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
	};
	class Launcher: LauncherCore
	{
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Rocket";
		cursorSize = 1;
		autoAimEnabled = 0;
		opticsDisablePeripherialVision = 1;
		magazines[] = {};
		value = 10;
		nameSound = "atlauncher";
		magazineReloadTime = 12;
		reloadTime = 0;
		sound[] = {"\ca\Weapons\Data\Sound\at7_RocketLauncher_Shot1",0.01,1,1400};
		initSpeed = 30;
		canLock = 0;
		reloadAction = "ManActReloadAT";
		autoReload = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "LAWSingle";
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 500;
		optics = 1;
		primary = 0;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.5;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		minRange = 20;
		minRangeProbab = 0.3;
		midRange = 150;
		midRangeProbab = 0.58;
		maxRange = 500;
		maxRangeProbab = 0.04;
		UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
	};
	class M136: Launcher
	{
		scope = 2;
		displayName = "$STR_DN_M136";
		model = "\ca\weapons\m136_launcher";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\m136.rtm"};
		modelOptics = "-";
		magazines[] = {"M136"};
		sound[] = {"\Ca\sounds\Weapons\rockets\Javelin_fire_v3_A",10.0,1,1400};
		drySound[] = {"\Ca\sounds\Weapons\rockets\dry",0.0001,1,10};
		reloadMagazineSound[] = {"\Ca\sounds\Weapons\rockets\flare_reload",0.00031622776,1,20};
		soundFly[] = {"\Ca\sounds\Weapons\rockets\rocket_fly1",100.0,1.5,700};
		picture = "\CA\weapons\data\equip\W_m136_launcher_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
		recoil = "launcherBase";
		minRange = 10;
		midRange = 200;
		maxRange = 300;
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 250;
		class Library
		{
			libTextDesc = "$STR_LIB_M136";
		};
		descriptionShort = "$STR_DSS_M136";
	};
	class Javelin: Launcher
	{
		scope = 2;
		displayName = "$STR_DN_JAVELIN";
		model = "\ca\weapons\javelin_launcher";
		picture = "\CA\weapons\data\equip\w_javelin_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
		modelOptics = "\ca\Weapons\optika_TOW";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\Data\Anim\Javelin.rtm"};
		cameraDir = "look";
		opticsZoomMin = 0.0277;
		opticsZoomMax = 0.7;
		opticsZoomInit = 0.0625;
		magazines[] = {"Javelin"};
		sound[] = {"\Ca\sounds\Weapons\rockets\Javelin_fire_v3_A",10.0,1,1400};
		drySound[] = {"\Ca\sounds\Weapons\rockets\dry",0.0001,1,10};
		reloadMagazineSound[] = {"\Ca\sounds\Weapons\rockets\flare_reload",0.00031622776,1,20};
		soundFly[] = {"\Ca\sounds\Weapons\rockets\rocket_fly1",100.0,1.5,700};
		value = 20;
		canLock = 2;
		recoil = "launcherBase";
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 2500;
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 1000;
		midRangeProbab = 0.58;
		maxRange = 2000;
		maxRangeProbab = 0.04;
		class Library
		{
			libTextDesc = "$STR_LIB_JAVELIN";
		};
		descriptionShort = "$STR_DSS_JAVELIN";
	};
	class Stinger: Launcher
	{
		scope = 2;
		displayName = "$STR_DN_STINGER";
		model = "\ca\weapons\stinger_launcher";
		nameSound = "aalauncher";
		modelOptics = "-";
		magazines[] = {"Stinger"};
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Stinger";
		cursorSize = 1;
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\Stinger.rtm"};
		sound[] = {"\Ca\sounds\Weapons\rockets\Javelin_fire_v3_A",10.0,1,1400};
		drySound[] = {"\Ca\sounds\Weapons\rockets\dry",0.0001,1,10};
		reloadMagazineSound[] = {"\Ca\sounds\Weapons\rockets\flare_reload",0.00031622776,1,20};
		soundFly[] = {"\Ca\sounds\Weapons\rockets\rocket_fly1",100.0,1.5,700};
		value = 20;
		canLock = 2;
		picture = "\CA\weapons\data\equip\w_fim92_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_aa_CA.paa";
		recoil = "launcherBase";
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 2500;
		midRangeProbab = 0.8;
		maxRange = 4800;
		maxRangeProbab = 0.1;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 2500;
		class Library
		{
			libTextDesc = "$STR_LIB_STINGER";
		};
		descriptionShort = "$STR_DSS_STINGER";
	};
	class RPG7V: Launcher
	{
		scope = 2;
		displayName = "$STR_DN_RPG7";
		model = "\ca\weapons\rpg7_launcher";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\RPG7.rtm"};
		modelOptics = "-";
		magazines[] = {"PG7V","PG7VL","PG7VR","OG7"};
		sound[] = {"\Ca\sounds\Weapons\rockets\RocketLauncher_Shot04_A",10.0,1,1400};
		drySound[] = {"\Ca\sounds\Weapons\rockets\dry",0.0001,1,10};
		reloadMagazineSound[] = {"\Ca\sounds\Weapons\rockets\flare_reload",0.00031622776,1,20};
		soundFly[] = {"\Ca\sounds\Weapons\rockets\rocket_fly1",100.0,1.5,700};
		picture = "\CA\weapons\data\equip\w_rpg7_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_at_CA.paa";
		recoil = "launcherBase";
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 250;
		minRange = 10;
		midRange = 200;
		maxRange = 300;
		class Library
		{
			libTextDesc = "$STR_LIB_RPG7V";
		};
		descriptionShort = "$STR_DSS_RPG7V";
	};
	class Strela: Launcher
	{
		scope = 2;
		displayName = "$STR_DN_9K32";
		model = "\ca\weapons\strela_launcher";
		nameSound = "aalauncher";
		modelOptics = "-";
		magazines[] = {"Strela"};
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\Strela.rtm"};
		sound[] = {"\Ca\sounds\Weapons\rockets\javelin1_A",10.0,1,1400};
		drySound[] = {"\Ca\sounds\Weapons\rockets\dry",0.0001,1,10};
		reloadMagazineSound[] = {"\Ca\sounds\Weapons\rockets\flare_reload",0.00031622776,1,20};
		soundFly[] = {"\Ca\sounds\Weapons\rockets\rocket_fly1",100.0,1.5,700};
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Missile";
		cursorSize = 1;
		value = 15;
		canLock = 2;
		picture = "\CA\weapons\data\equip\w_9k32_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_aa_CA.paa";
		recoil = "launcherBase";
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 2350;
		midRangeProbab = 0.8;
		maxRange = 4200;
		maxRangeProbab = 0.1;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 2350;
		class Library
		{
			libTextDesc = "$STR_LIB_9K32";
		};
		descriptionShort = "$STR_DSS_9K32";
	};
	class Igla: Strela
	{
		displayName = "$STR_DN_IGLA";
		model = "\ca\weapons\IGLA\igla";
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\Igla.rtm"};
		magazines[] = {"Igla"};
		value = 20;
		picture = "\Ca\weapons\IGLA\Data\equip\W_IGLA_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_aa_CA.paa";
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 3100;
		midRangeProbab = 0.8;
		maxRange = 5200;
		maxRangeProbab = 0.1;
		maxLeadSpeed = 320;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 3100;
		class Library
		{
			libTextDesc = "$STR_LIB_IGLA";
		};
		descriptionShort = "$STR_DSS_IGLA";
	};
	class MetisLauncher: Launcher
	{
		scope = 2;
		displayName = "$STR_DN_AT13";
		model = "\ca\weapons\Metis_AT_13\metis_launcher.p3d";
		picture = "\Ca\weapons\data\equip\w_metis_launcher_CA.paa";
		UiPicture = "\CA\weapons\data\Ico\i_aa_CA.paa";
		modelOptics = "\ca\weapons\2Dscope_Metis";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		handAnim[] = {"OFP2_ManSkeleton","\Ca\weapons\data\Anim\Metis.rtm"};
		cameraDir = "look";
		opticsZoomMin = 0.078;
		opticsZoomMax = 0.078;
		opticsZoomInit = 0.078;
		magazines[] = {"AT13"};
		sound[] = {"\Ca\sounds\Weapons\rockets\Javelin_fire_v3_A",10.0,1,1400};
		drySound[] = {"\Ca\sounds\Weapons\rockets\dry",0.0001,1,10};
		reloadMagazineSound[] = {"\Ca\sounds\Weapons\rockets\flare_reload",0.00031622776,1,20};
		soundFly[] = {"\Ca\sounds\Weapons\rockets\rocket_fly1",100.0,1.5,700};
		value = 20;
		canLock = 2;
		recoil = "launcherBase";
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 2500;
		minRange = 10;
		minRangeProbab = 0.3;
		midRange = 1000;
		midRangeProbab = 0.58;
		maxRange = 2000;
		maxRangeProbab = 0.04;
		class Library
		{
			libTextDesc = "$STR_LIB_AT13";
		};
		descriptionShort = "$STR_DSS_AT13";
	};
	class Binocular: Default
	{
		opticsDisablePeripherialVision = 1;
		scope = 2;
		simulation = "Binocular";
		model = "\ca\weapons\dalekohled_proxy";
		modelOptics = "\ca\weapons\optika_dalekohled";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		picture = "\CA\weapons\data\equip\w_binocular_ca.paa";
		value = 5;
		type = 4096;
		displayName = "$STR_DN_BINOCULAR";
		nameSound = "binoculars";
		reloadTime = 0.0;
		sound[] = {"",0,1};
		canLock = 0;
		optics = 1;
		forceOptics = 1;
		useAsBinocular = 1;
		primary = 0;
		opticsZoomMin = 0.047;
		opticsZoomMax = 0.047;
		magazines[] = {};
		class Library
		{
			libTextDesc = "$STR_LIB_BINOCULAR";
		};
		descriptionShort = "$STR_DSS_BINOCULAR";
	};
	class Laserdesignator: Binocular
	{
		model = "\ca\weapons\soflam";
		modelOptics = "\ca\weapons\optika_SOFLAM";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		displayName = "$STR_DN_LASER_DESIGNATOR";
		picture = "\Ca\weapons\Data\Equip\W_SOFLAM_CA.paa";
		magazines[] = {"Laserbatteries"};
		cursor = "Missile";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorAimOn = "Laser";
		cursorSize = 1;
		showSwitchAction = 1;
		simulation = "weapon";
		forceOptics = 2;
		Laser = 1;
		descriptionShort = "$STR_DSS_Laserdesignator";
	};
	class Laserdesignator_mounted: Default
	{
		scope = 2;
		cursor = "Missile";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorAimOn = "Laser";
		cursorSize = 1;
		modelOptics = "\ca\weapons\optika_SOFLAM";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		displayName = "$STR_DN_LASER_DESIGNATOR";
		model = "\ca\weapons\soflam";
		magazines[] = {"Laserbatteries"};
		Laser = 1;
	};
	class NVGoggles: Binocular
	{
		displayName = "$STR_DN_NV_GOGGLES";
		nameSound = "nvgoggles";
		simulation = "NVGoggles";
		showEmpty = 0;
		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		value = 5;
		opticsZoomMin = 1.0;
		opticsZoomMax = 1.0;
		modelOptics = "\ca\weapons\optika_night";
		model = "\ca\weapons\nvg_proxy";
		picture = "\CA\weapons\data\equip\w_nvg_ca.paa";
		class Library
		{
			libTextDesc = "$STR_LIB_NV_GOGGLES";
		};
		descriptionShort = "$STR_DSS_NV_GOGGLES";
	};
	class Throw: GrenadeLauncher
	{
		scope = 1;
		autoAimEnabled = 0;
		cursor = "\ca\Weapons\Data\clear_empty";
		cursoraim = "Vehicle_Grenade_W";
		cursorSize = 1;
		value = 0;
		type = 0;
		displayName = "$STR_DN_THROW";
		canDrop = 0;
		muzzles[] = {"HandGrenade_Stone","HandGrenadeMuzzle","SmokeShellMuzzle"};
		class ThrowMuzzle: GrenadeLauncher
		{
			cursor = "Air_Dot";
			cursoraim = "Vehicle_Grenade_W";
			cursorSize = 1;
			sound[] = {"",0.00031622776,1};
			reloadSound[] = {"",0.00031622776,1};
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			reloadTime = 0;
			magazineReloadTime = 0;
			enableAttack = 0;
			showEmpty = 0;
			autoReload = 1;
			modelOptics = "";
			minRange = 30;
			minRangeProbab = 0.5;
			midRange = 45;
			midRangeProbab = 0.2;
			maxRange = 60;
			maxRangeProbab = 0.03;
		};
		class HandGrenadeMuzzle: ThrowMuzzle
		{
			magazines[] = {"HandGrenade","HandGrenade_West","HandGrenade_East"};
		};
		class HandGrenade_Stone: ThrowMuzzle
		{
			magazines[] = {"HandGrenade_Stone"};
			displayName = "$STR_DN_STONE";
			minRange = 5;
			minRangeProbab = 0.01;
			midRange = 45;
			midRangeProbab = 0.1;
			maxRange = 80;
			maxRangeProbab = 0.01;
		};
		class SmokeShellMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShell","SmokeShellYellow","SmokeShellRed","SmokeShellGreen","SmokeShellPurple","SmokeShellBlue","SmokeShellOrange"};
			cursor = "Vehicle_Grenade_W";
			cursorAim = "\ca\Weapons\Data\clear_empty";
		};
	};
	class HandGunBase: Rifle
	{
		initSpeed = 315;
		dexterity = 2;
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\reload_gun",0.031622775,1,20};
		nameSound = "sidearm";
		cursor = "PistolCursor";
		cursoraim = "Foresight";
		value = 4;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 10;
		midRangeProbab = 0.58;
		maxRange = 60;
		maxRangeProbab = 0.04;
	};
	class Put: Default
	{
		scope = 1;
		value = 0;
		type = 0;
		displayName = "$STR_DN_PUT";
		canDrop = 0;
		muzzles[] = {"TimeBombMuzzle","PipeBombMuzzle","MineMuzzle","MineEMuzzle"};
		class PutMuzzle: Default
		{
			sound[] = {"",0.00031622776,1};
			reloadSound[] = {"",0.00031622776,1};
			enableAttack = 0;
			optics = 0;
			showEmpty = 0;
			canLock = 0;
			primary = 10;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 3;
			midRangeProbab = 0.9;
			maxRange = 15;
			maxRangeProbab = 0.04;
		};
		class TimeBombMuzzle: PutMuzzle
		{
			displayName = "$STR_DN_TIME_BOMB";
			magazines[] = {"TimeBomb"};
			enableAttack = 1;
		};
		class PipeBombMuzzle: PutMuzzle
		{
			displayName = "$STR_DN_PIPE_BOMB";
			magazines[] = {"PipeBomb"};
			enableAttack = 1;
		};
		class MineMuzzle: PutMuzzle
		{
			displayName = "$STR_DN_MINE";
			magazines[] = {"Mine"};
		};
		class MineEMuzzle: PutMuzzle
		{
			displayName = "$STR_DN_MINE";
			magazines[] = {"MineE"};
		};
	};
	class TimeBomb: Default
	{
		scope = 0;
		ammo = "TimeBomb";
		displayName = "$STR_DN_TIME_BOMB";
		nameSound = "satchelcharge";
		enableAttack = 1;
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		useAction = 1;
		useActionTitle = "$STR_ACTION_PUTBOMB";
		sound[] = {"\ca\Weapons\Data\Sound\gravel_L",0.00031622776,1,10};
		class Library
		{
			libTextDesc = "$STR_LIB_TimeBomb";
		};
		descriptionShort = "$STR_DSS_TimeBomb";
	};
	class Mine: TimeBomb
	{
		enableAttack = 0;
		ammo = "Mine";
		displayName = "$STR_DN_MINE";
		nameSound = "mine";
		sound[] = {"\ca\Weapons\Data\Sound\explosion_big_01_A",31.622776,1,1500};
		class Library
		{
			libTextDesc = "$STR_LIB_MINE";
		};
		descriptionShort = "$STR_DSS_MINE";
	};
	class MineE: Mine
	{
		picture = "mine";
		ammo = "MineE";
		class Library
		{
			libTextDesc = "$STR_LIB_MINE_E";
		};
		descriptionShort = "$STR_DSS_MINE_E";
	};
	class PipeBomb: Put
	{
		scope = 0;
		enableAttack = 1;
		ammo = "PipeBomb";
		displayName = "$STR_DN_PIPE_BOMB";
		nameSound = "satchelcharge";
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		showEmpty = 0;
		useAction = 1;
		useActionTitle = "$STR_ACTION_PUTBOMB";
		sound[] = {"\ca\Weapons\Data\Sound\gravel_L",0.00031622776,1,10};
		magazines[] = {"this"};
		class Library
		{
			libTextDesc = "$STR_LIB_PIPE_BOMB";
		};
		descriptionShort = "$STR_DSS_PIPE_BOMB";
	};
	class SmokeLauncher: MGun
	{
		scope = 2;
		displayName = "$STR_DN_SMOKE";
		sound[] = {"\Ca\sounds\Weapons\cannon\grenadelauncher_1",0.31622776,1,300};
		magazines[] = {"SmokeLauncherMag"};
		reloadTime = 3;
		magazineReloadTime = 60;
		canLock = 0;
		autoFire = 0;
	};
	class FlareLauncher: SmokeLauncher
	{
		scope = 2;
		displayName = "$STR_DN_FlareLauncher";
		sound[] = {"\Ca\sounds\Weapons\cannon\grenadelauncher_1",0.31622776,1,300};
		magazines[] = {"FlareLauncherMag"};
		reloadTime = 0.2;
		magazineReloadTime = 0.2;
		canLock = 0;
		autoFire = 0;
	};
	class M134: MGun
	{
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03",0.07079458,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02",0.07079458,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01",0.07079458,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02",0.07079458,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03",0.07079458,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.07079458,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.07079458,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.07079458,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.07079458,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.07079458,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		scope = 2;
		displayName = "$STR_DN_M134";
		cursor = "Air_W_MG";
		cursorAim = "Air_Dot";
		cursorSize = 1;
		showAimCursorInternal = 1;
		magazines[] = {"2000Rnd_762x51_M134","4000Rnd_762x51_M134"};
		modes[] = {"LowROF","HighROF","close","short","medium","far"};
		canLock = 0;
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 15;
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_DN_M134_2000";
			burst = 1;
			multiplier = 3;
			reloadTime = 0.09;
			sound[] = {"\Ca\sounds\Weapons\cannon\m134-slow",3.1622777,1,1100};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			dispersion = 0.0017;
			minRange = 1;
			minRangeProbab = 0.08;
			midRange = 2;
			midRangeProbab = 0.058;
			maxRange = 3;
			maxRangeProbab = 0.004;
		};
		class HighROF: LowROF
		{
			displayName = "$STR_DN_M134_4000";
			reloadTime = 0.05;
			sound[] = {"\Ca\sounds\Weapons\cannon\m134-fast",3.1622777,1,1200};
			minRange = 0;
			minRangeProbab = 0.09;
			midRange = 1;
			midRangeProbab = 0.058;
			maxRange = 2;
			maxRangeProbab = 0.004;
		};
		class close: HighROF
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class medium: LowROF
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
	};
	class M134_2: M134{};
	class TwinM134: M134
	{
		class LowROF: LowROF
		{
			reloadTime = 0.015;
			dispersion = 0.015;
			minRange = 1;
			minRangeProbab = 0.09;
			midRange = 2;
			midRangeProbab = 0.058;
			maxRange = 3;
			maxRangeProbab = 0.004;
		};
		class HighROF: HighROF
		{
			reloadTime = 0.007;
		};
		class close: close
		{
			reloadTime = 0.007;
		};
		class short: short
		{
			reloadTime = 0.007;
		};
		class far: far
		{
			reloadTime = 0.015;
			dispersion = 0.015;
		};
		class medium: medium
		{
			reloadTime = 0.015;
			dispersion = 0.015;
		};
	};
	class M240_veh: MGun
	{
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03",0.07079458,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02",0.07079458,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01",0.07079458,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02",0.07079458,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03",0.07079458,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.07079458,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.07079458,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.07079458,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.07079458,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.07079458,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		scope = 1;
		displayName = "$STR_DN_M240";
		soundContinuous = 0;
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		magazines[] = {"100Rnd_762x51_M240","1200Rnd_762x51_M240"};
		magazineReloadTime = 5;
		canLock = 0;
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "$STR_DN_M240";
			autoFire = 1;
			begin1[] = {"ca\sounds\Weapons\machineguns\M240_single1",1.7782794,1,1000};
			begin2[] = {"ca\sounds\Weapons\machineguns\M240_single2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			reloadTime = 0.075;
			dispersion = 0.0012;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
	};
	class M240_veh_2: M240_veh{};
	class M240_veh_MG_Nest: M240_veh
	{
		aiDispersionCoefY = 7.0;
		aiDispersionCoefX = 7.0;
		class manual: manual
		{
			dispersion = 0.003;
		};
		class close: close
		{
			dispersion = 0.003;
		};
		class short: short
		{
			dispersion = 0.003;
		};
		class medium: medium
		{
			dispersion = 0.003;
		};
		class far: far
		{
			dispersion = 0.003;
		};
	};
	class PKT: MGun
	{
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03",0.07079458,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02",0.07079458,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01",0.07079458,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02",0.07079458,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03",0.07079458,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.07079458,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.07079458,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.07079458,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.07079458,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.07079458,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		scope = 1;
		displayName = "$STR_DN_PKT";
		soundContinuous = 0;
		aiDispersionCoefY = 7.0;
		aiDispersionCoefX = 7.0;
		magazines[] = {"100Rnd_762x54_PK","1500Rnd_762x54_PKT","2000Rnd_762x54_PKT","250Rnd_762x54_PKT_T90","200Rnd_762x54_PKT"};
		magazineReloadTime = 5;
		canLock = 0;
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "$STR_DN_PKT";
			autoFire = 1;
			begin1[] = {"ca\sounds\weapons\machineguns\PKM_single2",1.4125376,1,1200};
			begin2[] = {"ca\sounds\weapons\machineguns\PKM_single3",1.4125376,1,1200};
			soundBegin[] = {"begin1",0.3,"begin2",0.7};
			reloadTime = 0.075;
			dispersion = 0.00125;
			showToPlayer = 1;
			soundContinuous = 0;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
	};
	class PKT_MG_Nest: PKT
	{
		class manual: manual
		{
			dispersion = 0.0008;
		};
		class close: close
		{
			dispersion = 0.0008;
		};
		class short: short
		{
			dispersion = 0.0008;
		};
		class medium: medium
		{
			dispersion = 0.0008;
		};
		class far: far
		{
			dispersion = 0.0008;
		};
	};
	class PKT_veh: PKT_MG_Nest
	{
		aiDispersionCoefY = 21.0;
		aiDispersionCoefX = 21.0;
		class manual: manual
		{
			dispersion = 0.00125;
		};
		class close: close
		{
			dispersion = 0.00125;
		};
		class short: short
		{
			dispersion = 0.00125;
		};
		class medium: medium
		{
			dispersion = 0.00125;
		};
		class far: far
		{
			dispersion = 0.00125;
		};
	};
	class DT_veh: PKT
	{
		aiDispersionCoefY = 21.0;
		aiDispersionCoefX = 21.0;
		displayName = "$STR_DN_DT_VEH";
		begin1[] = {"ca\sounds\weapons\machineguns\PKM_single2",1.4125376,1,1200};
		begin2[] = {"ca\sounds\weapons\machineguns\PKM_single3",1.4125376,1,1200};
		soundBegin[] = {"begin1",0.3,"begin2",0.7};
		magazines[] = {"60Rnd_762x54_DT"};
		class manual: manual
		{
			reloadTime = 0.1;
			displayName = "$STR_DN_DT_VEH";
		};
		class close: close
		{
			reloadTime = 0.1;
		};
		class short: short
		{
			reloadTime = 0.1;
		};
		class medium: medium
		{
			reloadTime = 0.1;
		};
		class far: far
		{
			reloadTime = 0.1;
		};
	};
	class TwinVickers: MGun
	{
		scope = 2;
		displayName = "$STR_DN_VICKERS";
		nameSound = "Mgun";
		initSpeed = 740;
		reloadTime = 0.05;
		autoFire = 1;
		dispersion = 0.0013;
		minRange = 0;
		minRangeProbab = 0.9;
		midRange = 400;
		midRangeProbab = 0.58;
		maxRange = 600;
		maxRangeProbab = 0.04;
		magazines[] = {"500Rnd_TwinVickers"};
		canLock = 0;
		cursor = "";
		cursorAim = "";
	};
	class M2: MGun
	{
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.17782794,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03",0.17782794,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02",0.17782794,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.17782794,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01",0.31622776,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02",0.31622776,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03",0.31622776,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.31622776,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.17782794,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.17782794,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.17782794,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.17782794,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		scope = 1;
		displayName = "$STR_DN_M2_MG";
		magazines[] = {"100Rnd_127x99_M2"};
		magazineReloadTime = 6;
		canLock = 0;
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "$STR_DN_M2_MG";
			autoFire = 1;
			begin1[] = {"ca\sounds\weapons\machineguns\m2_single_1",1.4125376,1,1200};
			begin2[] = {"ca\sounds\weapons\machineguns\m2_single_2",1.4125376,1,1200};
			soundBegin[] = {"begin1",0.3,"begin2",0.7};
			reloadTime = 0.11;
			dispersion = 0.001;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.01;
		};
	};
	class M3P: M2
	{
		scope = 1;
		displayName = "$STR_DN_M3P";
		magazines[] = {"250Rnd_127x99_M3P"};
		class manual: manual
		{
			dispersion = 0.001;
			reloadTime = 0.06;
		};
		class close: close
		{
			dispersion = 0.001;
			reloadTime = 0.06;
		};
		class short: short
		{
			dispersion = 0.001;
			reloadTime = 0.06;
		};
		class medium: medium
		{
			dispersion = 0.001;
			reloadTime = 0.06;
		};
		class far: far
		{
			dispersion = 0.001;
			reloadTime = 0.06;
		};
	};
	class DSHKM: MGun
	{
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03",0.07079458,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02",0.07079458,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.07079458,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01",0.07079458,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02",0.07079458,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03",0.07079458,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.07079458,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.07079458,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.07079458,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.07079458,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.07079458,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		scope = 1;
		displayName = "$STR_DN_DSHKM";
		magazines[] = {"50Rnd_127x107_DSHKM","150Rnd_127x107_DSHKM"};
		magazineReloadTime = 6;
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		canLock = 0;
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "$STR_DN_DSHKM";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\dshk_2",5.623413,1,1600};
			reloadTime = 0.1;
			dispersion = 0.0015;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.01;
		};
	};
	class KORD: MGun
	{
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.17782794,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03",0.17782794,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02",0.17782794,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.17782794,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01",0.31622776,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02",0.31622776,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03",0.31622776,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.31622776,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.17782794,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.17782794,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.17782794,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.17782794,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		scope = 1;
		displayName = "$STR_DN_KORD";
		magazines[] = {"150Rnd_127x108_KORD","50Rnd_127x108_KORD"};
		magazineReloadTime = 6;
		aiDispersionCoefY = 15;
		aiDispersionCoefX = 15;
		canLock = 0;
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "$STR_DN_KORD";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\dshk_2",5.623413,1,1100};
			reloadTime = 0.086;
			dispersion = 0.00085;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.01;
		};
	};
	class KPVT: MGun
	{
		bullet1[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.17782794,1,15};
		bullet2[] = {"ca\sounds\weapons\shells\big_shell_metal_03",0.17782794,1,15};
		bullet3[] = {"ca\sounds\weapons\shells\big_shell_metal_02",0.17782794,1,15};
		bullet4[] = {"ca\sounds\weapons\shells\big_shell_metal_01",0.17782794,1,15};
		bullet5[] = {"ca\sounds\weapons\shells\big_shell_dirt_01",0.31622776,1,15};
		bullet6[] = {"ca\sounds\weapons\shells\big_shell_dirt_02",0.31622776,1,15};
		bullet7[] = {"ca\sounds\weapons\shells\big_shell_dirt_03",0.31622776,1,15};
		bullet8[] = {"ca\sounds\weapons\shells\big_shell_dirt_04",0.31622776,1,15};
		bullet9[] = {"ca\sounds\weapons\shells\big_shell_soft_01",0.17782794,1,15};
		bullet10[] = {"ca\sounds\weapons\shells\big_shell_soft_02",0.17782794,1,15};
		bullet11[] = {"ca\sounds\weapons\shells\big_shell_soft_03",0.17782794,1,15};
		bullet12[] = {"ca\sounds\weapons\shells\big_shell_soft_04",0.17782794,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		scope = 1;
		displayName = "$STR_DN_KPVT";
		cursor = "Vehicle_E_MG";
		magazines[] = {"500Rnd_145x115_KPVT"};
		magazineReloadTime = 12;
		shotFromTurret = 1;
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		canLock = 0;
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "$STR_DN_KPVT";
			autoFire = 1;
			begin1[] = {"ca\sounds\weapons\machineguns\m2_single_1",1.4125376,1,1200};
			begin2[] = {"ca\sounds\weapons\machineguns\m2_single_2",1.4125376,1,1200};
			soundBegin[] = {"begin1",0.3,"begin2",0.7};
			reloadTime = 0.1;
			dispersion = 0.0007;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 800;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1200;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1200;
			midRangeProbab = 0.4;
			maxRange = 1500;
			maxRangeProbab = 0.01;
		};
	};
	class M168: CannonCore
	{
		scope = 1;
		cursor = "Vehicle_W_MG";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		flashSize = 1.2;
		displayName = "$STR_DN_M61";
		nameSound = "cannon";
		ballisticsComputer = 1;
		magazines[] = {"2100Rnd_20mm_M168"};
		canLock = 2;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_DN_M61";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\m197",10.0,1,1200};
			reloadTime = 0.00270614;
			dispersion = 0.06;
			multiplier = 6;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 900;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.01;
		};
	};
	class M197: CannonCore
	{
		scope = 1;
		cursor = "Vehicle_W_MG";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		displayName = "$STR_DN_M197";
		nameSound = "cannon";
		magazines[] = {"750Rnd_M197_AH1"};
		canLock = 2;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_DN_M197";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\242_single",10.0,1,1200};
			reloadTime = 0.06;
			dispersion = 0.00025;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 700;
			minRangeProbab = 0.05;
			midRange = 900;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1200;
			midRangeProbab = 0.4;
			maxRange = 1400;
			maxRangeProbab = 0.01;
		};
	};
	class AZP85: CannonCore
	{
		scope = 1;
		cursor = "Air_E_MG";
		cursorAim = "Air_Dot";
		cursorSize = 1;
		displayName = "$STR_DN_AZP85";
		nameSound = "cannon";
		canLock = 2;
		ballisticsComputer = 1;
		magazines[] = {"2000Rnd_23mm_AZP85"};
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_DN_AZP85";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\2A38_4pcs_fast",10.0,1,1400};
			reloadTime = 0.03;
			dispersion = 0.00025;
			multiplier = 2;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2000;
			midRangeProbab = 0.4;
			maxRange = 2500;
			maxRangeProbab = 0.01;
		};
	};
	class 2A14: CannonCore
	{
		scope = 1;
		displayName = "$STR_DN_2A14";
		nameSound = "cannon";
		cursor = "Air_E_MG";
		cursorAim = "Air_Dot";
		cursorSize = 1;
		canLock = 2;
		magazines[] = {"40Rnd_23mm_AZP85","2000Rnd_23mm_AZP85"};
		magazineReloadTime = 3;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_DN_2A14";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\2A38_4pcs_fast",10.0,1,1400};
			reloadTime = 0.06;
			dispersion = 0.0005;
			multiplier = 2;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.3;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 600;
			midRangeProbab = 0.58;
			maxRange = 900;
			maxRangeProbab = 0.3;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 700;
			minRangeProbab = 0.3;
			midRange = 900;
			midRangeProbab = 0.58;
			maxRange = 1200;
			maxRangeProbab = 0.3;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.3;
			midRange = 1200;
			midRangeProbab = 0.4;
			maxRange = 1500;
			maxRangeProbab = 0.01;
		};
	};
	class GAU12: CannonCore
	{
		scope = 1;
		displayName = "$STR_DN_GAU12";
		nameSound = "cannon";
		cursor = "Air_W_MG";
		cursorAim = "Air_Dot";
		cursorSize = 1;
		magazines[] = {"300Rnd_25mm_GAU12"};
		canLock = 2;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_DN_GAU12";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\A10vulcanVII",5.623413,1,1100};
			reloadTime = 0.02;
			dispersion = 0.0025;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 9000;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.58;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.4;
			maxRange = 1500;
			maxRangeProbab = 0.01;
		};
	};
	class 2A42: CannonCore
	{
		scope = 1;
		displayName = "$STR_DN_2A42";
		nameSound = "cannon";
		burst = 5;
		reloadTime = 0.02;
		autoFire = 1;
		magazines[] = {"150Rnd_30mmAP_2A42","150Rnd_30mmHE_2A42","230Rnd_30mmAP_2A42","230Rnd_30mmHE_2A42","250Rnd_30mmAP_2A42","250Rnd_30mmHE_2A42"};
		modes[] = {"LowROF","HighROF","close","short","medium","far"};
		shotFromTurret = 1;
		canLock = 2;
		cursor = "Vehicle_E_MG";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_DN_2A42_MODE_LOW";
			reloadTime = 0.2;
			sound[] = {"\Ca\sounds\Weapons\cannon\242_single",10.0,1,1400};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			dispersion = 0.0005;
		};
		class HighROF: LowROF
		{
			displayName = "$STR_DN_2A42_MODE_HIGH";
			reloadTime = 0.1;
			sound[] = {"\Ca\sounds\Weapons\cannon\242_single",10.0,1,1400};
			soundContinuous = 0;
			minRange = 1;
			minRangeProbab = 0.08;
			midRange = 2;
			midRangeProbab = 0.058;
			maxRange = 3;
			maxRangeProbab = 0.004;
		};
		class close: HighROF
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: LowROF
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 7;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class 2A72: CannonCore
	{
		scope = 2;
		displayName = "$STR_DN_2A72";
		magazines[] = {"250Rnd_30mmAP_2A72","250Rnd_30mmHE_2A72"};
		shotFromTurret = 1;
		canLock = 2;
		cursor = "Vehicle_E_MG";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		soundContinuous = 0;
		flash = "gunfire";
		flashSize = 0.1;
		recoil = "Empty";
		aiDispersionCoefX = 6;
		aiDispersionCoefY = 6;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 6;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_DN_2A72";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\242_single",10.0,1,1200};
			reloadTime = 0.15;
			dispersion = 0.0005;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 800;
			minRangeProbab = 0.05;
			midRange = 1200;
			midRangeProbab = 0.58;
			maxRange = 1700;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 1300;
			minRangeProbab = 0.05;
			midRange = 1700;
			midRangeProbab = 0.58;
			maxRange = 2500;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 2000;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class M242: CannonCore
	{
		scope = 1;
		displayName = "$STR_DN_M242";
		nameSound = "cannon";
		cursor = "Vehicle_W_MG";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		burst = 5;
		reloadTime = 0.02;
		autoFire = 1;
		modes[] = {"HighROF","close","short","medium","far"};
		shotFromTurret = 1;
		canLock = 2;
		aiRateOfFire = 1.0;
		aiRateOfFireDistance = 1000;
		magazines[] = {"210Rnd_25mm_M242_HEI","210Rnd_25mm_M242_APDS"};
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_DN_M242_MODE_LOW";
			reloadTime = 0.6;
			sound[] = {"\Ca\sounds\Weapons\cannon\242_single",10.0,1,1200};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.04;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			dispersion = 0.0005;
		};
		class HighROF: LowROF
		{
			displayName = "$STR_DN_M242_MODE_HIGH";
			reloadTime = 0.3;
			minRange = 1;
			minRangeProbab = 0.08;
			midRange = 2;
			midRangeProbab = 0.058;
			maxRange = 3;
			maxRangeProbab = 0.004;
		};
		class close: HighROF
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: LowROF
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 7;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class YakB: MGun
	{
		scope = 2;
		displayName = "$STR_DN_YAKB";
		showAimCursorInternal = 1;
		magazines[] = {"1470Rnd_127x108_YakB"};
		canLock = 2;
		soundContinuous = 0;
		flash = "gunfire";
		flashSize = 0.1;
		recoil = "Empty";
		aiDispersionCoefX = 15;
		aiDispersionCoefY = 15;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 6;
		cursorAim = "Air_Dot";
		cursor = "Air_E_MG";
		cursorSize = 1;
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "$STR_DN_YAKB";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\m134loop4_end",10.0,1,1200};
			multiplier = 3;
			reloadTime = 0.04;
			dispersion = 0.0006;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 800;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.01;
		};
	};
	class GSh23L: CannonCore
	{
		scope = 2;
		displayName = "$STR_DN_GSH23L";
		nameSound = "cannon";
		initspeed = 820;
		soundContinuous = 1;
		magazines[] = {"520Rnd_23mm_GSh23L"};
		canLock = 2;
		cursorAim = "Air_Dot";
		cursor = "Air_W_MG";
		cursorSize = 1;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_DN_GSH23L";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\gsh301",3.1622777,1,1200};
			reloadTime = 0.04;
			dispersion = 0.0006;
			soundContinuous = 0;
			initspeed = 820;
			showToPlayer = 1;
			burst = 2;
			multiplier = 2;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 850;
			minRangeProbab = 0.05;
			midRange = 1050;
			midRangeProbab = 0.4;
			maxRange = 1250;
			maxRangeProbab = 0.01;
		};
	};
	class GSh302: CannonCore
	{
		scope = 2;
		displayName = "$STR_DN_GSH302";
		nameSound = "cannon";
		initspeed = 820;
		soundContinuous = 1;
		magazines[] = {"750Rnd_30mm_GSh301"};
		canLock = 2;
		cursorAim = "Air_Dot";
		cursor = "Air_E_MG";
		cursorSize = 1;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_DN_GSH302";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\gsh301",3.1622777,1,1200};
			reloadTime = 0.04;
			dispersion = 0.0006;
			soundContinuous = 0;
			initspeed = 820;
			showToPlayer = 1;
			burst = 2;
			multiplier = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 850;
			minRangeProbab = 0.05;
			midRange = 1050;
			midRangeProbab = 0.4;
			maxRange = 1250;
			maxRangeProbab = 0.01;
		};
	};
	class GAU8: CannonCore
	{
		scope = 1;
		displayName = "$STR_DN_GAU8";
		nameSound = "cannon";
		autoFire = 1;
		magazines[] = {"1350Rnd_30mmAP_A10"};
		canLock = 2;
		flash = "gunfire";
		flashSize = 0.1;
		recoil = "Empty";
		aiDispersionCoefX = 6;
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 6;
		cursor = "Air_W_MG";
		cursorAim = "Air_Dot";
		cursorSize = 1;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_DN_GAU8";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\a10vulcanVII",10.0,1,1100};
			reloadTime = 0.0121198;
			multiplier = 2;
			dispersion = 0.006;
			soundContinuous = 0;
			initspeed = 820;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.04;
			midRange = 200;
			midRangeProbab = 0.2;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 800;
			minRange = 600;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.2;
			maxRange = 1000;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 1000;
			minRange = 800;
			minRangeProbab = 0.1;
			midRange = 1000;
			midRangeProbab = 0.2;
			maxRange = 1500;
			maxRangeProbab = 0.4;
		};
	};
	class 2A38M: CannonCore
	{
		scope = 1;
		displayName = "$STR_DN_2A38M";
		nameSound = "cannon";
		magazines[] = {"1904Rnd_30mmAA_2A38M"};
		magazineReloadTime = 240;
		multiplier = 4;
		reloadTime = 0.06;
		autoFire = 1;
		canLock = 2;
		ballisticsComputer = 1;
		soundContinuous = 0;
		dispersion = 0.0003;
		cursorAim = "Air_Dot";
		cursor = "Air_E_MG";
		cursorSize = 1;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_DN_2A38M";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\2A38_4pcs_fast",10.0,1,1100};
			reloadTime = 0.06;
			dispersion = 0.0003;
			multiplier = 4;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2000;
			midRangeProbab = 0.4;
			maxRange = 2500;
			maxRangeProbab = 0.01;
		};
	};
	class AGS30: MGun
	{
		scope = 1;
		displayName = "$STR_DN_AGS30";
		autoFire = 1;
		cursor = "Vehicle_Grenade_W";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		sound[] = {"\Ca\sounds\Weapons\cannon\AGS30_shot1_a",3.1622777,1,1200};
		magazines[] = {"29Rnd_30mm_AGS30"};
		reloadTime = 0.4;
		magazineReloadTime = 6;
		dispersion = 0.006;
		minRange = 8;
		minRangeProbab = 0.6;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1500;
		maxRangeProbab = 0.1;
		autoReload = 1;
		canLock = 0;
		aiRateOfFire = 2.0;
		aiRateOfFireDistance = 500;
	};
	class AGS17: AGS30
	{
		displayName = "$STR_DN_AGS17";
		magazines[] = {"400Rnd_30mm_AGS17"};
		magazineReloadTime = 30;
		cursor = "Vehicle_Grenade_E";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 2;
	};
	class MK19: MGun
	{
		scope = 1;
		displayName = "$STR_DN_MK19";
		cursor = "Vehicle_Grenade_W";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		autoFire = 1;
		sound[] = {"\Ca\sounds\Weapons\cannon\AGS30_shot1_a",10.0,1,1200};
		magazines[] = {"48Rnd_40mm_MK19"};
		reloadTime = 0.4;
		magazineReloadTime = 6;
		dispersion = 0.006;
		minRange = 8;
		minRangeProbab = 0.6;
		midRange = 450;
		midRangeProbab = 0.7;
		maxRange = 1500;
		maxRangeProbab = 0.1;
		aiRateOfFire = 2.0;
		aiRateOfFireDistance = 500;
		autoReload = 1;
		canLock = 0;
	};
	class M119: CannonCore
	{
		scope = 1;
		displayName = "$STR_DN_M119";
		nameSound = "cannon";
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		sound[] = {"\ca\Sounds\weapons\cannon\gun120",316.22775,1,1500};
		reloadSound[] = {"\ca\Sounds\weapons\cannon\gun120reload",1.0,1,20};
		magazines[] = {"30Rnd_105mmHE_M119"};
		minRange = 10;
		minRangeProbab = 0.6;
		midRange = 12000;
		midRangeProbab = 0.7;
		maxRange = 19000;
		maxRangeProbab = 0.1;
		reloadTime = 6;
		magazineReloadTime = 2;
		autoReload = 1;
		canLock = 0;
	};
	class M256: CannonCore
	{
		scope = 1;
		displayName = "$STR_DN_M256";
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		nameSound = "cannon";
		sound[] = {"\ca\Sounds\weapons\cannon\gun120",316.22775,1,1500};
		reloadSound[] = {"\ca\Sounds\weapons\cannon\gun120reload",1.0,1,20};
		magazines[] = {"20Rnd_120mmSABOT_M1A2","20Rnd_120mmHE_M1A2"};
		minRange = 5;
		minRangeProbab = 0.7;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 2500;
		maxRangeProbab = 0.1;
		reloadTime = 6;
		magazineReloadTime = 2;
		autoReload = 1;
		ballisticsComputer = 1;
	};
	class D30: CannonCore
	{
		scope = 1;
		displayName = "$STR_DN_D30";
		nameSound = "cannon";
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		sound[] = {"\ca\Sounds\weapons\cannon\gun120",316.22775,1,1500};
		reloadSound[] = {"\ca\Sounds\weapons\cannon\gun120reload",1.0,1,20};
		magazines[] = {"30Rnd_122mmHE_D30"};
		minRange = 10;
		minRangeProbab = 0.7;
		midRange = 1800;
		midRangeProbab = 0.7;
		maxRange = 3000;
		maxRangeProbab = 0.1;
		reloadTime = 6;
		magazineReloadTime = 2;
		autoReload = 1;
		canLock = 0;
	};
	class D81: CannonCore
	{
		scope = 1;
		displayName = "$STR_DN_D81";
		nameSound = "cannon";
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		sound[] = {"\ca\Sounds\weapons\cannon\gun125",316.22775,1,1700};
		reloadSound[] = {"\ca\Sounds\weapons\cannon\gun125reload",1.0,1,20};
		magazines[] = {"23Rnd_125mmSABOT_T72","22Rnd_125mmHE_T72"};
		minRange = 5;
		minRangeProbab = 0.7;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 2500;
		maxRangeProbab = 0.1;
		reloadTime = 6;
		magazineReloadTime = 2;
		autoReload = 1;
		ballisticsComputer = 1;
	};
	class ZiS_S_53: CannonCore
	{
		scope = 1;
		displayName = "$STR_DN_ZiS_S_53";
		nameSound = "cannon";
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		sound[] = {"\ca\Sounds\weapons\cannon\gun73",31.622776,1,1700};
		reloadSound[] = {"\ca\Sounds\weapons\cannon\gun73reload",1.0,1,20};
		magazines[] = {"10Rnd_85mmAP","33Rnd_85mmHE"};
		minRange = 5;
		minRangeProbab = 0.7;
		midRange = 600;
		midRangeProbab = 0.7;
		maxRange = 1000;
		maxRangeProbab = 0.1;
		reloadTime = 7;
		magazineReloadTime = 3;
		autoReload = 1;
	};
	class 2A46M: D81
	{
		displayName = "$STR_DN_2A46M";
		magazines[] = {"23Rnd_125mmSABOT_T72","22Rnd_125mmHE_T72"};
		reloadTime = 5;
		magazineReloadTime = 1.5;
		minRange = 5;
		minRangeProbab = 0.8;
		midRange = 1200;
		midRangeProbab = 0.8;
		maxRange = 2500;
		maxRangeProbab = 0.15;
	};
	class RocketPods: LauncherCore
	{
		scope = 1;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Rocket";
		cursorSize = 1;
		type = 65536;
		reloadTime = 0.2;
		autoFire = 1;
		minRange = 50;
		minRangeProbab = 0.1;
		midRange = 600;
		midRangeProbab = 0.25;
		maxRange = 2500;
		maxRangeProbab = 0.05;
		canLock = 2;
		nameSound = "rockets";
	};
	class FFARLauncher: RocketPods
	{
		magazines[] = {"38Rnd_FFAR","28Rnd_FFAR"};
		modes[] = {"Far_AI","Burst"};
		class Far_AI: RocketPods
		{
			minRange = 50;
			minRangeProbab = 0.041;
			midRange = 600;
			midRangeProbab = 0.21;
			maxRange = 2500;
			maxRangeProbab = 0.11;
			displayName = "$STR_DN_HYDRA_SINGLE";
			sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot21",3.1622777,1,1100};
			soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",5.623413,1.2,700};
			burst = 2;
			reloadTime = 0.08;
			autoFire = 0;
			showToPlayer = 0;
		};
		class Burst: RocketPods
		{
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			displayName = "$STR_DN_HYDRA_PAIR";
			burst = 2;
			reloadTime = 0.08;
			soundContinuous = 1;
			autoFire = 1;
			sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot21",3.1622777,1,1100};
			soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",5.623413,1.2,700};
		};
	};
	class FFARLauncher_14: FFARLauncher
	{
		magazines[] = {"14Rnd_FFAR"};
	};
	class CamelGrenades: RocketPods
	{
		scope = 1;
		displayName = "$STR_DN_GRENADE";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Vehicle_Grenade_W";
		cursorSize = 1;
		autoFire = 0;
		sound[] = {"",10.0,1};
		magazines[] = {"6Rnd_Grenade_Camel"};
		reloadTime = 3;
		magazineReloadTime = 0.1;
		dispersion = 0.015;
		minRange = 1;
		minRangeProbab = 0.8;
		midRange = 50;
		midRangeProbab = 0.7;
		maxRange = 150;
		maxRangeProbab = 0.1;
		autoReload = 1;
		canLock = 0;
	};
	class 57mmLauncher: RocketPods
	{
		magazines[] = {"192Rnd_57mm","128Rnd_57mm","64Rnd_57mm"};
		modes[] = {"Far_AI","Burst"};
		class Far_AI: RocketPods
		{
			displayName = "$STR_DN_57MMLAUNCHER_SINGLE";
			minRange = 50;
			minRangeProbab = 0.15;
			midRange = 600;
			midRangeProbab = 0.25;
			maxRange = 2500;
			maxRangeProbab = 0.05;
			reloadTime = 0.08;
			sound[] = {"\ca\Sounds\weapons\cannon\S_5",31.622776,1,1000};
			soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly_x2",1.0,1.2,800};
			burst = 2;
			autoFire = 0;
			showToPlayer = 0;
		};
		class Burst: RocketPods
		{
			displayName = "$STR_DN_57MMLAUNCHER_BURST";
			burst = 2;
			reloadTime = 0.08;
			autoFire = 1;
			sound[] = {"\ca\Sounds\weapons\cannon\S_5",31.622776,1,1000};
			soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly_x2",1.0,1.2,800};
			soundContinuous = 0;
			minRange = 250;
			minRangeProbab = 0.25;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
	};
	class 57mmLauncher_64: 57mmLauncher
	{
		magazines[] = {"64Rnd_57mm"};
	};
	class 57mmLauncher_128: 57mmLauncher
	{
		magazines[] = {"128Rnd_57mm","64Rnd_57mm"};
	};
	class 80mmLauncher: RocketPods
	{
		magazines[] = {"40Rnd_80mm","40Rnd_S8T"};
		modes[] = {"Far_AI","Burst"};
		class Far_AI: RocketPods
		{
			displayName = "$STR_DN_80MMLAUNCHER_SINGLE";
			minRange = 50;
			minRangeProbab = 0.15;
			midRange = 2500;
			midRangeProbab = 0.25;
			maxRange = 4000;
			maxRangeProbab = 0.05;
			reloadTime = 0.08;
			sound[] = {"\ca\Sounds\weapons\cannon\S_8",31.622776,1,1000};
			soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly_x3",1.0,1.1,800};
			burst = 2;
			autoFire = 0;
			showToPlayer = 0;
		};
		class Burst: RocketPods
		{
			displayName = "$STR_DN_80MMLAUNCHER_BURST";
			burst = 2;
			reloadTime = 0.08;
			sound[] = {"\ca\Sounds\weapons\cannon\S_8",31.622776,1,1000};
			soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly_x3",1.0,1.1,800};
			autoFire = 1;
			soundContinuous = 0;
			minRange = 25;
			minRangeProbab = 0.25;
			midRange = 600;
			midRangeProbab = 0.5;
			maxRange = 1300;
			maxRangeProbab = 0.1;
		};
	};
	class S8Launcher: 80mmLauncher
	{
		magazines[] = {"80Rnd_80mm","40Rnd_80mm","40Rnd_S8T","80Rnd_S8T"};
	};
	class MissileLauncher: LauncherCore
	{
		scope = 1;
		type = 65536;
		reloadTime = 0.5;
		nameSound = "MissileLauncher";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Missile";
		cursorSize = 1;
	};
	class SidewinderLaucher: MissileLauncher
	{
		displayName = "$STR_DN_SIDEWINDERLAUCHER";
		minRange = 300;
		minRangeProbab = 0.025;
		midRange = 2500;
		midRangeProbab = 0.09;
		maxRange = 9000;
		maxRangeProbab = 0.01;
		sound[] = {"\ca\Sounds\weapons\cannon\Javelin1",31.622776,1,1000};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",25.118862,0.8,700};
		reloadTime = 0.1;
		magazineReloadTime = 30;
		magazines[] = {"4Rnd_Sidewinder_AV8B"};
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Laser";
		cursorSize = 1;
	};
	class SidewinderLaucher_F35: SidewinderLaucher
	{
		magazines[] = {"2Rnd_Sidewinder_F35"};
	};
	class SidewinderLaucher_AH1Z: SidewinderLaucher
	{
		magazines[] = {"2Rnd_Sidewinder_AH1Z"};
	};
	class AT5Launcher: MissileLauncher
	{
		displayName = "$STR_DN_AT5LAUNCHER";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Rocket";
		cursorSize = 1;
		minRange = 75;
		minRangeProbab = 0.6;
		midRange = 1400;
		midRangeProbab = 0.7;
		maxRange = 4000;
		maxRangeProbab = 0.001;
		sound[] = {"\ca\Sounds\weapons\cannon\Javelin1",31.622776,1,1000};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",25.118862,0.8,700};
		reloadTime = 1;
		canLock = 1;
		magazineReloadTime = 30;
		magazines[] = {"5Rnd_AT5_BRDM2"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 1400;
	};
	class AT5LauncherSingle: AT5Launcher
	{
		magazines[] = {"8Rnd_AT5_BMP2"};
		reloadTime = 90;
	};
	class 2A46MRocket: AT5Launcher
	{
		displayName = "$STR_DN_2A46M_ROCKET";
		magazines[] = {"5Rnd_AT11_T90"};
		reloadTime = 30;
		magazineReloadTime = 5;
		minRange = 10;
		minRangeProbab = 0.9;
		midRange = 2500;
		midRangeProbab = 0.8;
		maxRange = 3500;
		maxRangeProbab = 0.1;
	};
	class AT10LauncherSingle: AT5Launcher
	{
		displayName = "$STR_DN_AT10LAUNCHERSINGLE";
		reloadTime = 30;
		magazines[] = {"8Rnd_AT10_BMP3"};
		minRange = 100;
		midRange = 2750;
		maxRange = 5500;
		aiRateOfFireDistance = 2000;
	};
	class AT11LauncherSingle: AT5Launcher
	{
		displayName = "$STR_DN_AT11LAUNCHERSINGLE";
		minRange = 75;
		minRangeProbab = 0.6;
		midRange = 2000;
		midRangeProbab = 0.7;
		maxRange = 6000;
		maxRangeProbab = 0.001;
		reloadTime = 30;
		magazines[] = {"5Rnd_AT11_T90"};
	};
	class AT13LauncherSingle: AT11LauncherSingle
	{
		displayName = "$STR_DN_AT13LAUNCHERSINGLE";
		minRange = 10;
		minRangeProbab = 0.6;
		midRange = 1000;
		midRangeProbab = 0.7;
		maxRange = 2000;
		maxRangeProbab = 0.001;
		reloadTime = 8;
		magazines[] = {"6Rnd_AT13"};
	};
	class TOWLauncher: MissileLauncher
	{
		displayName = "$STR_DN_TOW";
		minRange = 10;
		minRangeProbab = 0.6;
		midRange = 1400;
		midRangeProbab = 0.7;
		maxRange = 4000;
		maxRangeProbab = 0.001;
		sound[] = {"\ca\Sounds\weapons\cannon\Javelin1",31.622776,1,1000};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",25.118862,0.8,700};
		reloadTime = 1;
		canLock = 1;
		magazineReloadTime = 30;
		magazines[] = {"2Rnd_TOW","2Rnd_TOW2"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
	};
	class TOWLauncherSingle: TOWLauncher
	{
		reloadTime = 8;
		magazines[] = {"6Rnd_TOW_HMMWV","6Rnd_TOW2"};
	};
	class HellfireLauncher: MissileLauncher
	{
		displayName = "$STR_DN_HELLFIRE";
		minRange = 50;
		minRangeProbab = 0.6;
		midRange = 2000;
		midRangeProbab = 0.9;
		maxRange = 4000;
		maxRangeProbab = 0.1;
		sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot05",31.622776,1,1100};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",100.0,0.8,800};
		reloadTime = 1;
		magazines[] = {"8Rnd_Hellfire"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 4000;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Laser";
		cursorSize = 1;
	};
	class VikhrLauncher: MissileLauncher
	{
		displayName = "$STR_DN_VIKHR";
		minRange = 50;
		minRangeProbab = 0.6;
		midRange = 2000;
		midRangeProbab = 0.9;
		maxRange = 4000;
		maxRangeProbab = 0.1;
		reloadTime = 1;
		sound[] = {"\ca\Sounds\weapons\cannon\vikhr",31.622776,1,1100};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly_x2",1.0,1.1,700};
		magazines[] = {"12Rnd_Vikhr_KA50"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 4000;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Laser";
		cursorSize = 1;
	};
	class BombLauncher: RocketPods
	{
		displayName = "$STR_DN_GBU12";
		magazines[] = {"6Rnd_GBU12_AV8B"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
		nameSound = "";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "\ca\Weapons\Data\clear_empty";
	};
	class BombLauncherF35: BombLauncher
	{
		magazines[] = {"2Rnd_GBU12"};
	};
	class BombLauncherA10: BombLauncher
	{
		magazines[] = {"4Rnd_GBU12"};
	};
	class SEARCHLIGHT: MGun
	{
		scope = 1;
		displayName = "$STR_DN_SEARCHLIGHT";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "\ca\Weapons\Data\clear_empty";
	};
	class CarHorn: Default
	{
		cursor = "";
		cursorAim = "";
		scope = 1;
		displayName = "$STR_DN_HORN";
		reloadTime = 0.0;
		drySound[] = {"\ca\Weapons\Data\Sound\car_horn_v1",3.1622777,1,400};
		canLock = 0;
		optics = 0;
		enableAttack = 0;
	};
	class BikeHorn: CarHorn
	{
		drySound[] = {"\ca\weapons\Data\Sound\bicycle_ring_v1",0.01,1,80};
	};
	class TruckHorn: CarHorn
	{
		drySound[] = {"\ca\Weapons\Data\Sound\truck_horn_v1",10.0,1,400};
	};
	class TruckHorn2: CarHorn
	{
		drySound[] = {"\ca\Weapons\Data\Sound\truck_horn_v2",10.0,1,400};
	};
	class SportCarHorn: CarHorn
	{
		drySound[] = {"\ca\Weapons\Data\Sound\Skoda_horn_v1",3.1622777,1,300};
	};
	class MiniCarHorn: CarHorn
	{
		drySound[] = {"\Ca\weapons\Data\Sound\minicar_horn_v1",3.1622777,1,300};
	};
	class GSh301: CannonCore
	{
		scope = 2;
		displayName = "$STR_DN_GSh301";
		nameSound = "cannon";
		magazines[] = {"180Rnd_30mm_GSh301"};
		canLock = 2;
		cursorAim = "Air_Dot";
		cursor = "Air_E_MG";
		cursorSize = 1;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_DN_GSh301";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\A10vulcanIV",3.1622777,1,1200};
			reloadTime = 0.04;
			dispersion = 0.0006;
			soundContinuous = 0;
			initspeed = 820;
			showToPlayer = 1;
			burst = 2;
			multiplier = 1;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 4;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 850;
			minRangeProbab = 0.05;
			midRange = 1050;
			midRangeProbab = 0.4;
			maxRange = 1250;
			maxRangeProbab = 0.01;
		};
	};
	class R73Launcher: MissileLauncher
	{
		displayName = "$STR_DN_R73";
		minRange = 300;
		minRangeProbab = 0.4;
		midRange = 5000;
		midRangeProbab = 0.8;
		maxRange = 10000;
		maxRangeProbab = 0.05;
		sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot05",31.622776,1,1100};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",100.0,0.8,800};
		reloadTime = 1;
		magazines[] = {"4Rnd_R73"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 10000;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Laser";
		cursorSize = 1;
	};
	class R73Launcher_2: R73Launcher
	{
		magazines[] = {"2Rnd_R73"};
	};
	class Ch29Launcher: MissileLauncher
	{
		displayName = "$STR_DN_CH29";
		minRange = 70;
		minRangeProbab = 0.4;
		midRange = 2000;
		midRangeProbab = 0.8;
		maxRange = 4000;
		maxRangeProbab = 0.05;
		sound[] = {"\ca\Sounds\weapons\cannon\ch-29-3",31.622776,1,1100};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly2",100.0,1.0,1000};
		magazines[] = {"4Rnd_Ch29"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 8000;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Missile";
		cursorSize = 1;
	};
	class Ch29Launcher_Su34: Ch29Launcher
	{
		magazines[] = {"6Rnd_Ch29","4Rnd_Ch29"};
	};
	class 2A70Rocket: 2A46MRocket
	{
		displayName = "$STR_DN_2A70_ROCKET";
		magazines[] = {"8Rnd_AT10_BMP3"};
		minRange = 10;
		minRangeProbab = 0.7;
		midRange = 2500;
		midRangeProbab = 0.7;
		maxRange = 4000;
		maxRangeProbab = 0.1;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Rocket";
		cursorSize = 1;
	};
	class 2A70: D81
	{
		displayName = "$STR_DN_2A70";
		magazineReloadTime = 2;
		magazines[] = {"22Rnd_100mm_HE_2A70"};
		minRange = 5;
		minRangeProbab = 0.7;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 2500;
		maxRangeProbab = 0.1;
	};
	class AT6Launcher: MissileLauncher
	{
		displayName = "$STR_DN_AT6LAUNCHER";
		minRange = 200;
		minRangeProbab = 0.35;
		midRange = 2700;
		midRangeProbab = 0.7;
		maxRange = 5000;
		maxRangeProbab = 0.001;
		reloadTime = 2;
		sound[] = {"\ca\Sounds\weapons\cannon\TOW_AZ60",31.622776,1,1600};
		soundFly[] = {"\ca\Sounds\weapons\cannon\at7_Rocket_Missile_Loop",1.0,1.1,700};
		magazines[] = {"4Rnd_AT6_Mi24V"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 2700;
	};
	class AT9Launcher: MissileLauncher
	{
		displayName = "$STR_DN_AT9LAUNCHER";
		minRange = 500;
		minRangeProbab = 0.35;
		midRange = 3500;
		midRangeProbab = 0.7;
		maxRange = 6000;
		maxRangeProbab = 0.001;
		reloadTime = 2;
		sound[] = {"\ca\Sounds\weapons\cannon\TOW_AZ60",31.622776,1,1600};
		soundFly[] = {"\ca\Sounds\weapons\cannon\at7_Rocket_Missile_Loop",1.0,1.1,700};
		magazines[] = {"4Rnd_AT9_Mi24P"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 3500;
	};
	class AT2Launcher: MissileLauncher
	{
		displayName = "$STR_DN_AT2LAUNCHER";
		minRange = 10;
		minRangeProbab = 0.6;
		midRange = 1400;
		midRangeProbab = 0.7;
		maxRange = 4000;
		maxRangeProbab = 0.001;
		sound[] = {"\ca\Sounds\weapons\cannon\Javelin1",31.622776,1,1200};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",25.118862,0.8,700};
		reloadTime = 1;
		canLock = 2;
		magazineReloadTime = 30;
		magazines[] = {"4Rnd_AT2_Mi24D"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
	};
	class HeliBombLauncher: RocketPods
	{
		displayName = "$STR_DN_HELIBOMBLAUNCHER";
		nameSound = "";
		magazines[] = {"2Rnd_FAB_250"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
	};
	class AirBombLauncher: HeliBombLauncher
	{
		magazines[] = {"4Rnd_FAB_250","2Rnd_FAB_250"};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly_x2",25.118862,2,900};
	};
	class Mk82BombLauncher: RocketPods
	{
		displayName = "$STR_DN_MK82LAUNCHER";
		nameSound = "";
		magazines[] = {"3Rnd_Mk82"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
	};
	class Mk82BombLauncher_6: Mk82BombLauncher
	{
		magazines[] = {"6Rnd_Mk82"};
	};
	class StingerLaucher: MissileLauncher
	{
		displayName = "$STR_DN_STINGER";
		minRange = 50;
		minRangeProbab = 0.3;
		midRange = 1000;
		midRangeProbab = 0.8;
		maxRange = 4000;
		maxRangeProbab = 0.1;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 2500;
		sound[] = {"\ca\Sounds\weapons\cannon\Javelin_fire_v3_A",10.0,1,1200};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",10.0,1.5,700};
		reloadTime = 4;
		magazineReloadTime = 30;
		magazines[] = {"8Rnd_Stinger"};
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		cursor = "Stinger";
	};
	class StingerLauncher_twice: MissileLauncher
	{
		displayName = "$STR_DN_STINGER";
		minRange = 50;
		minRangeProbab = 0.3;
		midRange = 1000;
		midRangeProbab = 0.8;
		maxRange = 4000;
		maxRangeProbab = 0.1;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 2500;
		sound[] = {"\ca\Sounds\weapons\cannon\Javelin_fire_v3_A",10.0,1,1200};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",10.0,1.5,700};
		reloadTime = 4;
		magazines[] = {"2Rnd_Stinger"};
		magazineReloadTime = 5;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Stinger";
		cursorSize = 1;
	};
	class AALauncher_twice: StingerLauncher_twice
	{
		displayName = "$STR_DN_AALAUNCHER_TWICE";
	};
	class Igla_twice: MissileLauncher
	{
		displayName = "$STR_DN_IGLA_TWICE";
		minRange = 500;
		minRangeProbab = 0.3;
		midRange = 3100;
		midRangeProbab = 0.8;
		maxRange = 5200;
		maxRangeProbab = 0.1;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 3100;
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",10.0,1.5,700};
		sound[] = {"\ca\Sounds\weapons\cannon\Javelin_fire_v3_A",10.0,1,1200};
		reloadTime = 4;
		magazineReloadTime = 30;
		magazines[] = {"2Rnd_Igla"};
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		cursor = "Stinger";
	};
	class MaverickLauncher: MissileLauncher
	{
		displayName = "$STR_DN_MAVERICK";
		minRange = 50;
		minRangeProbab = 0.5;
		midRange = 8000;
		midRangeProbab = 0.7;
		maxRange = 18000;
		maxRangeProbab = 0.001;
		sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot05",31.622776,1,1200};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",100.0,0.8,700};
		reloadTime = 1;
		magazines[] = {"2Rnd_Maverick_A10"};
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 2500;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Laser";
		cursorSize = 1;
	};
	class 9M311Laucher: MissileLauncher
	{
		displayName = "$STR_DN_9M311LAUCHER";
		minRange = 1200;
		minRangeProbab = 0.2;
		midRange = 3000;
		midRangeProbab = 0.7;
		maxRange = 6000;
		maxRangeProbab = 0.05;
		aiRateOfFire = 5;
		aiRateOfFireDistance = 5000;
		sound[] = {"\ca\Sounds\weapons\cannon\Javelin_fire_v3_A",10.0,1,1100};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",10.0,1.5,700};
		reloadTime = 4;
		magazineReloadTime = 240;
		magazines[] = {"8Rnd_9M311"};
		initSpeed = 0;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Javelin";
		cursorSize = 1;
	};
	class SPG9: RocketPods
	{
		scope = 2;
		displayName = "$STR_DN_SPG9";
		type = 65536;
		modelOptics = "";
		magazines[] = {"PG9_AT","OG9_HE"};
		sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot04_A",10.0,1,1100};
		drySound[] = {"\ca\Sounds\weapons\cannon\Javelin_dry_v1",0.0001,1,10};
		reloadMagazineSound[] = {"\ca\Sounds\weapons\cannon\flare_reload",0.00031622776,1,20};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",10.0,1.5,700};
		recoil = "launcherBase";
		reloadTime = 3;
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 450;
		minRange = 50;
		midRange = 450;
		maxRange = 800;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Rocket";
		cursorSize = 1;
	};
	class GRAD: RocketPods
	{
		scope = 2;
		displayName = "GRAD";
		type = 65536;
		modelOptics = "";
		magazines[] = {"40Rnd_GRAD"};
		sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot04_A",10.0,1,1100};
		drySound[] = {"\ca\Sounds\weapons\cannon\Javelin_dry_v1",0.0001,1,10};
		reloadMagazineSound[] = {"\ca\Sounds\weapons\cannon\flare_reload",0.00031622776,1,20};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",10.0,1.5,700};
		recoil = "launcherBase";
		soundContinuous = 0;
		soundBurst = 0;
		reloadTime = 0.8;
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 450;
		minRange = 50;
		midRange = 450;
		maxRange = 5000;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Rocket";
		cursorSize = 1;
	};
	class MLRS: RocketPods
	{
		scope = 2;
		displayName = "MLRS";
		type = 65536;
		modelOptics = "";
		magazines[] = {"12Rnd_MLRS"};
		sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot04_A",10.0,1,1100};
		drySound[] = {"\ca\Sounds\weapons\cannon\Javelin_dry_v1",0.0001,1,10};
		reloadMagazineSound[] = {"\ca\Sounds\weapons\cannon\flare_reload",0.00031622776,1,20};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",10.0,1.5,700};
		recoil = "launcherBase";
		soundContinuous = 0;
		soundBurst = 0;
		reloadTime = 0.8;
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 450;
		minRange = 50;
		midRange = 450;
		maxRange = 5000;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Rocket";
		cursorSize = 1;
	};
	class WeaponExplosive: Pistol
	{
		scope = 2;
		model = "\Ca\weapons\explosive";
		displayName = "$STR_DN_WeaponExplosive";
		magazines[] = {};
		class Armory
		{
			disabled = 1;
		};
		descriptionShort = "$STR_DN_WeaponExplosive";
		muzzles[] = {};
	};
	class ItemCore: Default
	{
		type = 131072;
		model = "\ca\weapons\mag_univ.p3d";
		picture = "\CA\weapons\data\equip\m_satchel_CA.paa";
		muzzles[] = {};
		class Armory
		{
			disabled = 1;
		};
	};
	class Kostey_photos: ItemCore
	{
		scope = 2;
		displayName = "$STR_DN_Kostey_photos";
		picture = "\CA\misc\data\icons\picture_photo_folder_ca.paa";
		descriptionShort = "$STR_DN_Kostey_photos";
	};
	class Kostey_map_case: ItemCore
	{
		scope = 2;
		displayName = "$STR_DN_Kostey_map_case";
		picture = "\CA\misc\data\icons\picture_maps_CA.paa";
		descriptionShort = "$STR_DN_Kostey_map_case";
	};
	class Kostey_notebook: ItemCore
	{
		scope = 2;
		displayName = "$STR_DN_Kostey_notebook";
		picture = "\CA\misc\data\icons\picture_notebook_ca.paa";
		descriptionShort = "$STR_DN_Kostey_notebook";
	};
	class CDF_dogtags: ItemCore
	{
		scope = 2;
		displayName = "$STR_DN_CDF_dogtags";
		picture = "\CA\misc\data\icons\picture_dog_tags_CA.paa";
		descriptionShort = "$STR_DN_CDF_dogtags";
	};
	class Moscow_Bombing_File: ItemCore
	{
		scope = 2;
		displayName = "$STR_DN_Moscow_Bombing_File";
		picture = "\CA\misc\data\icons\picture_moscow_docs_CA.paa";
		descriptionShort = "$STR_DN_Moscow_Bombing_File";
	};
	class Cobalt_File: ItemCore
	{
		scope = 2;
		displayName = "$STR_DN_Cobalt_File";
		picture = "\CA\misc\data\icons\picture_spukayev_docs_ca.paa";
		descriptionShort = "$STR_DN_Cobalt_File";
	};
	class ItemWatch: ItemCore
	{
		scope = 2;
		displayName = "$STR_ItemWatch";
		simulation = "ItemWatch";
		picture = "\ca\ui\data\gear_picture_watch_ca.paa";
		descriptionShort = "$STR_ItemWatch";
	};
	class ItemCompass: ItemCore
	{
		scope = 2;
		displayName = "$STR_ItemCompass";
		simulation = "ItemCompass";
		picture = "\ca\ui\data\gear_picture_compass_ca.paa";
		descriptionShort = "$STR_ItemCompass";
	};
	class ItemGPS: ItemCore
	{
		scope = 2;
		displayName = "$STR_ItemGPS";
		simulation = "ItemGPS";
		picture = "\ca\ui\data\gear_picture_gps_ca.paa";
		descriptionShort = "$STR_ItemGPS";
	};
	class ItemRadio: ItemCore
	{
		scope = 2;
		displayName = "$STR_ItemRadio";
		simulation = "ItemRadio";
		picture = "\ca\ui\data\gear_picture_radio_ca.paa";
		descriptionShort = "$STR_ItemRadio";
	};
	class ItemMap: ItemCore
	{
		scope = 2;
		displayName = "$STR_ItemMap";
		simulation = "ItemMap";
		picture = "\ca\ui\data\gear_picture_map_ca.paa";
		descriptionShort = "$STR_ItemMap";
	};
	class EvPhoto: ItemCore
	{
		scope = 2;
		model = "\Ca\misc\SmallObj_File_photos_WPN";
		picture = "\CA\misc\data\icons\picture_photo_folder_ca.paa";
		displayName = "$STR_DN_EVIDENCEPHOTO";
		descriptionShort = "$STR_DN_EVIDENCEPHOTO";
	};
	class EvMap: ItemCore
	{
		scope = 2;
		model = "\Ca\misc\SmallObj_file_map_WPN";
		picture = "\CA\misc\data\icons\picture_maps_CA.paa";
		displayName = "$STR_DN_EVIDENCEMAP";
		descriptionShort = "$STR_DN_EVIDENCEPHOTO";
	};
	class EvMoscow: ItemCore
	{
		scope = 2;
		model = "\Ca\misc\SmallObj_moscow_docs_WPN";
		picture = "\CA\misc\data\icons\picture_moscow_docs_CA.paa";
		displayName = "$STR_DN_EVIDENCEMOSCOW";
		descriptionShort = "$STR_DN_EVIDENCEPHOTO";
	};
	class EvKobalt: ItemCore
	{
		scope = 2;
		model = "\Ca\misc\SmallObj_spukayev_docs_WPN";
		picture = "\CA\misc\data\icons\picture_spukayev_docs_ca.paa";
		displayName = "$STR_DN_EVIDENCEKOBALT";
		descriptionShort = "$STR_DN_EVIDENCEPHOTO";
	};
	class EvMoney: ItemCore
	{
		scope = 2;
		model = "\Ca\misc\smallObj_money_WPN";
		picture = "\CA\misc\data\icons\picture_money_CA.paa";
		displayName = "$STR_DN_EVIDENCEMONEY";
		descriptionShort = "$STR_DN_EVIDENCEPHOTO";
	};
	class EvDogTags: ItemCore
	{
		scope = 2;
		model = "\Ca\misc\SmallObj_dog_tags_WPN";
		picture = "\CA\misc\data\icons\picture_dog_tags_CA.paa";
		displayName = "$STR_DN_EVIDENCETAGS";
		descriptionShort = "$STR_DN_EVIDENCEPHOTO";
	};
};
//};
