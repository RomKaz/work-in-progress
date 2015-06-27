////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:00:59 2014 : Source 'file' date Fri Oct 31 06:00:59 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class anims : Characters\config\wmn\config.bin{
class CfgPatches
{
	class CA_Anims_Wmn
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_Anims","CA_Anims_Sdr"};
	};
};
class CfgMovesBasic
{
	class Default
	{
		access = 3;
		actions = "NoActions";
		file = "";
		looped = 1;
		speed = 0.5;
		disableWeapons = 0;
		enableOptics = 1;
		disableWeaponsLong = 0;
		showWeaponAim = 1;
		enableMissile = 0;
		enableBinocular = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		onLadder = 0;
		canPullTrigger = 1;
		duty = -0.5;
		visibleSize = 0.75012;
		aimPrecision = 1;
		relSpeedMin = 1.0;
		relSpeedMax = 1.0;
		soundEnabled = 1;
		soundOverride = "";
		soundEdge[] = {0.5,1};
		terminal = 0;
		limitGunMovement = 1;
		variantsPlayer[] = {};
		variantsAI[] = {};
		equivalentTo = "";
		connectAs = "";
		variantAfter[] = {5,10,20};
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		aiming = "aimingDefault";
		aimingBody = "aimingUpDefault";
		leaning = "leaningDefault";
		untiltWeapon = "untiltWeaponDefault";
		legs = "legsDefault";
		head = "headDefault";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		interpolationSpeed = 6;
		interpolationRestart = 0;
		enableDirectControl = 1;
		controlHead = 0;
		collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wrfl.p3d";
		hasCollShapeSafe = 0;
		collisionShapeSafe = "";
		boundingSphere = 1;
		enableAutoActions = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		weaponIK = 0;
		preload = 0;
		walkcycles = 1;
	};
	class StandBase: Default
	{
		aiming = "aimingDefault";
		aimingBody = "aimingUpDefault";
		disableWeapons = 1;
		leaningFactorBeg = 1;
		leaningFactorEnd = 1;
	};
	class DefaultDie: Default
	{
		aiming = "aimingNo";
		aimingBody = "aimingNo";
		legs = "legsNo";
		head = "headNo";
		disableWeapons = 1;
		interpolationRestart = 1;
		soundEdge[] = {0.45};
		boundingSphere = 1.5;
		enableDirectControl = 0;
		showWeaponAim = 0;
		canPullTrigger = 0;
	};
	class BlendAnims
	{
		aimingDefault[] = {};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
		empty[] = {};
	};
};
class CfgMovesWomen: CfgMovesBasic
{
	primaryActionMaps[] = {"WmnStandAction","DeadActions","WmnSwimmingActions"};
	class States
	{
		class AmovPercMstpSnonWnonDnon: StandBase
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon.rtm";
			speed = 1e+010;
			actions = "WmnStandAction";
			aimingBody = "aimingUpDefault";
			collisionShape = "Ca\Anims\Characters\data\Geom\wmn\Perc_Wnon.p3d";
			interpolationSpeed = 6.0;
			canPullTrigger = 0;
			enableOptics = 0;
			limitGunMovement = 0.1;
			ConnectTo[] = {"ActsPercMstp_HenFeeding3",0.02,"ActsPercMstp_HenFeeding2",0.02,"ActsPercMstp_HenFeeding1",0.02,"AmovPercMstpSoldDnon_AmovPercMstpSoldDnon",0.02,"AidlPercMstpSnonDnon_S0",0.02,"CwmnPerc_diskuse6",0.02,"CwmnPerc_ano",0.02,"AidlPercMstpSnonWnonDnon_panicS0",0.02,"CwmnPerc_diskuse8",0.02,"AmovPercMstpSnonWnonDnon_ActsPercMstpSnon_damsel",0.02,"ActsPsitMstp_Sit",0.02,"CwmnPerc_diskuse5",0.02,"CwmnPerc_nene",0.02,"AswmPercMstpDnon",0.01,"CwmnPerc_diskuse3",0.02,"CwmnPerc_diskuse2",0.02,"CwmnPerc_diskuse7",0.02,"CwmnPerc_diskuse4",0.02,"CwmnPerc_aniNahodou",0.02,"CwmnPerc_diskuse12",0.02,"LadderCivilOn",0.1,"CwmnPerc_ukazatVzad",0.02,"CwmnPerc_ukazatDoleva",0.02,"CwmnPerc_diskuse1",0.02,"CwmnPerc_ukazatVpred",0.02,"AmovPercSnonWnonDnon_ActsPknlMstp_gardenwork",0.02,"AidlPercMstpSnonWnonDnon_S0",0.02,"AmovPerc_ErcStp2jogging",0.005,"CwmnPerc_ukazatDoprava",0.02,"CwmnPerc_diskuse9",0.02,"CwmnPerc_diskuse10",0.02,"CwmnPerc_diskuse11",0.02,"CwmnPerc_volaniMobilem",0.02,"AmovPercMstpSnonDnon_AmovPsqtMstpSnonDnon",0.02,"Cwmn_GalkinaLiesIdle1",0.1,"Cwmn_GalkinaLiesIdle2",0.1,"Cwmn_GalkinaLiesIdle3",0.1,"AmovPercMstpSnonWnonDnon_AmovPknlMstpSnonWnon",0.02,"AmovPercMstpSnonWnonDnon_AIturn90L",0.01,"AmovPercMstpSnonWnonDnon_AIturn90R",0.01};
			InterpolateTo[] = {"AmovPercMrunSnonWnonDf",0.01,"AmovPercMwlkSnonWnonDf_A",0.01,"Cwmn_GalkinaErc_talkHappy1",0.1,"AmovPercMwlkSnonWnonDfr",0.01,"Cwmn_GalkinaErc_talkHappy2",0.1,"AmovPercMwlkSnonWnonDr",0.01,"AmovPercMwlkSnonWnonDbl",0.01,"AmovPercMwlkSnonWnonDb",0.01,"AmovPercMwlkSnonWnonDbr",0.01,"AmovPercMwlkSnonWnonDl",0.01,"AmovPercMwlkSnonWnonDfl",0.01,"AmovPercMwlkSnonWnonDf_B",0.01,"AmovPercMstpSnonWnonDnon_AIturn90L",0.01,"AmovPercMstpSnonWnonDnon_AIturn90R",0.01,"AmovPercMrunSnonWnonDf_panic",0.01,"AmovPercMrunSnonWnonDf_panicCollapse",0.01,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AidlPercMstpSnonDnon_S0: AmovPercMstpSnonWnonDnon
		{
			soundEnabled = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"CwmnPerc_stani6",0.02,"CwmnPerc_stani5",0.02,"CwmnPerc_stani2",0.02,"CwmnPerc_stani1",0.02,"CwmnPerc_stani4",0.02,"CwmnPerc_stani7",0.02,"CwmnPerc_stani8",0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPercMstpSoldDnon: AmovPercMstpSnonWnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\stp\non\non\AmovPercMstpDnon_babka";
			actions = "WmnStandAction_old";
			interpolationSpeed = 2.0;
			ConnectTo[] = {"AmovPercMstpSoldDnon_AmovPercMstpSnonWnonDnon",0.02,"AidlPercMstpSoldDnon_S0",0.02,"AmovPercMstpSoldDnon_AmovPsqtMstpSnonDnon",0.02};
			InterpolateTo[] = {"AmovPercMrunSoldDf",0.02,"AmovPercMwlkSoldDfr",0.02,"AmovPercMwlkSoldDr",0.02,"AmovPercMwlkSoldDbr",0.02,"AmovPercMwlkSoldDb",0.02,"AmovPercMwlkSoldDbl",0.02,"AmovPercMwlkSoldDl",0.02,"AmovPercMwlkSoldDfl",0.02,"AmovPercMwlkSoldDf",0.02,"AmovPercMstpSoldDnon_AIturn90L",0.02,"AmovPercMstpSoldDnon_AIturn90R",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AidlPercMstpSoldDnon_S0: AmovPercMstpSoldDnon
		{
			variantsAI[] = {"ActsPercMstpDnon_babka09steady",0.5,"ActsPercMstpDnon_babka12steady",0.5};
			ConnectTo[] = {"ActsPercMstpDnon_babka15zoufalstvi",0.02,"ActsPercMstpDnon_babka14rozcilovani",0.02,"ActsPercMstpDnon_babka13brblani",0.02,"ActsPercMstpDnon_babka12steady",0.02,"ActsPercMstpDnon_babka11talkD",0.02,"ActsPercMstpDnon_babka11talkC",0.02,"ActsPercMstpDnon_babka11talkB",0.02,"ActsPercMstpDnon_babka11talkA",0.02,"ActsPercMstpDnon_babka10ukazujeB",0.02,"ActsPercMstpDnon_babka10ukazujeR",0.02,"ActsPercMstpDnon_babka10ukazujeL",0.02,"ActsPercMstpDnon_babka10ukazujeF",0.02,"ActsPercMstpDnon_babka09steady",0.02,"ActsPercMstpDnon_babka08koukaniDoDalky",0.02,"ActsPercMstpDnon_babka07zamavaniL",0.02,"ActsPercMstpDnon_babka07zamavaniR",0.02,"ActsPercMstpDnon_babka07zamavaniF",0.02,"ActsPercMstpDnon_babka06vydychani",0.02,"ActsPercMstpDnon_babka05ohlednuti",0.02,"ActsPercMstpDnon_babka04sebraniZeZeme",0.02,"ActsPercMstpDnon_babka03ometeniSe",0.02,"ActsPercMstpDnon_babka02otreniCela",0.02,"ActsPercMstpDnon_babka01protahnuti",0.02,"AmovPercMstpSoldDnon",0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka01protahnuti: AidlPercMstpSoldDnon_S0
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka01protahnuti";
			speed = 0.057471;
			looped = 0;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka02otreniCela: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka02otreniCela";
			speed = 0.068493;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka03ometeniSe: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka03ometeniSe";
			speed = 0.080645;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka04sebraniZeZeme: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka04sebraniZeZeme";
			speed = 0.043636;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka05ohlednuti: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka05ohlednuti";
			speed = 0.043165;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka06vydychani: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka06vydychani";
			speed = 0.043165;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka07zamavaniF: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka07zamavaniF";
			speed = 0.093385;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka07zamavaniR: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka07zamavaniR";
			speed = 0.106667;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka07zamavaniL: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka07zamavaniL";
			speed = 0.085409;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka08koukaniDoDalky: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka08koukaniDoDalky";
			speed = 0.061381;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka09steady: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka09steady";
			speed = 0.154639;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka10ukazujeF: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka10ukazujeF";
			speed = 0.245902;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka10ukazujeL: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka10ukazujeL";
			speed = 0.122951;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka10ukazujeR: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka10ukazujeR";
			speed = 0.130435;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka10ukazujeB: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka10ukazujeB";
			speed = 0.083333;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka11talkA: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka11talkA";
			speed = 0.061983;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka11talkB: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka11talkB";
			speed = 0.117188;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka11talkC: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka11talkC";
			speed = 0.072816;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka11talkD: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka11talkD";
			speed = 0.028674;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka12steady: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka12steady";
			speed = 0.075949;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka13brblani: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka13brblani";
			speed = 0.048232;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka14rozcilovani: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka14rozcilovani";
			speed = 0.025;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class ActsPercMstpDnon_babka15zoufalstvi: ActsPercMstpDnon_babka01protahnuti
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\babka\ActsPercMstpDnon_babka15zoufalstvi";
			speed = 0.028681;
			ConnectTo[] = {"AidlPercMstpSoldDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMstpSoldDnon_AIturn90R: AmovPercMstpSoldDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\stp\non\non\AmovPercMstpDnon_babkaAIturn90R";
			speed = 0.12931;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMstpSoldDnon_AIturn90L: AmovPercMstpSoldDnon_AIturn90R
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\stp\non\non\AmovPercMstpDnon_babkaAIturn90L";
			speed = 0.15625;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMwlkSoldDf: AmovPercMstpSoldDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkDf_babka";
			speed = 0.258065;
			soundEdge[] = {0.25,0.5,0.75,1};
			soundOverride = "wlk";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSoldDf",0.025,"AmovPercMwlkSoldDfr",0.02,"AmovPercMwlkSoldDfl",0.02,"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMwlkSoldDfl: AmovPercMwlkSoldDf
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkDfl_babka";
			speed = 0.212389;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSoldDf",0.025,"AmovPercMwlkSoldDl",0.02,"AmovPercMwlkSoldDf",0.02,"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMwlkSoldDl: AmovPercMwlkSoldDf
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkDl_babka";
			speed = 0.205128;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSoldDbl",0.02,"AmovPercMwlkSoldDfl",0.02,"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMwlkSoldDbl: AmovPercMwlkSoldDf
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkDbl_babka";
			speed = 0.205128;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSoldDb",0.02,"AmovPercMwlkSoldDl",0.02,"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMwlkSoldDb: AmovPercMwlkSoldDf
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkDb_babka";
			speed = 0.179104;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSoldDbr",0.02,"AmovPercMwlkSoldDbl",0.02,"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMwlkSoldDbr: AmovPercMwlkSoldDf
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkDbr_babka";
			speed = 0.226415;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSoldDr",0.02,"AmovPercMwlkSoldDb",0.02,"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMwlkSoldDr: AmovPercMwlkSoldDf
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkDr_babka";
			speed = 0.192;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSoldDfr",0.02,"AmovPercMwlkSoldDbr",0.02,"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMwlkSoldDfr: AmovPercMwlkSoldDf
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkDfr_babka";
			speed = 0.218182;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMrunSoldDf",0.025,"AmovPercMwlkSoldDr",0.02,"AmovPercMwlkSoldDf",0.02,"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMrunSoldDf: AmovPercMwlkSoldDf
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\run\non\non\AmovPercMrunDf_babka";
			speed = 0.526316;
			ConnectTo[] = {"AmovPercMrunSoldDf_lookback",0.02};
			InterpolateTo[] = {"AmovPercMwlkSoldDfr",0.025,"AmovPercMwlkSoldDfl",0.025,"AmovPercMwlkSoldDf",0.025,"AmovPercMstpSoldDnon",0.02,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMrunSoldDf_lookback: AmovPercMrunSoldDf
		{
			speed = 0.344828;
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\run\non\non\AmovPercMrunDf_babkaOhlednuti";
			ConnectTo[] = {"AmovPercMrunSoldDf",0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMstpSoldDnon_AmovPercMstpSnonWnonDnon: AmovPercMstpSoldDnon
		{
			looped = 0;
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\stp\non\non\AmovPercMstpDnon_FromBabka";
			speed = 0.5;
			actions = "WmnStandAction";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMstpSoldDnon_AmovPercMstpSoldDnon: AmovPercMstpSoldDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\stp\non\non\AmovPercMstpDnon_ToBabka";
			looped = 0;
			speed = 0.369231;
			ConnectTo[] = {"AmovPercMstpSoldDnon",0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class CutSceneAnimationBase: AmovPercMstpSnonWnonDnon
		{
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			showWeaponAim = 0;
			enableOptics = 0;
			boundingSphere = 5.0;
			enableDirectControl = 0;
			leftHandIKBeg = 1.0;
			leftHandIKEnd = 1.0;
			rightHandIKBeg = 1.0;
			rightHandIKEnd = 1.0;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class ActsPercMstp_HenFeeding1: CutSceneAnimationBase
		{
			variantsAI[] = {"ActsPercMstp_HenFeeding1",0.33,"ActsPercMstp_HenFeeding2",0.33,"ActsPercMstp_HenFeeding3"};
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPercMstp_HenFeeding1";
			actions = "WmnHenFeeding";
			speed = 0.040377;
			ConnectTo[] = {"ActsPercMstp_HenFeeding3",0.02,"ActsPercMstp_HenFeeding2",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPercMstp_HenFeeding2: ActsPercMstp_HenFeeding1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPercMstp_HenFeeding2";
			speed = 0.041494;
			ConnectTo[] = {"ActsPercMstp_HenFeeding3",0.02,"ActsPercMstp_HenFeeding1",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPercMstp_HenFeeding3: ActsPercMstp_HenFeeding1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPercMstp_HenFeeding3";
			speed = 0.052632;
			ConnectTo[] = {"ActsPercMstp_HenFeeding2",0.02,"ActsPercMstp_HenFeeding1",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPknlMstpSnonWnonDnon_gardenworkS1: CutSceneAnimationBase
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPknlMstp_gardenworkS1";
			actions = "WmnGardenWork";
			speed = 0.06993;
			ConnectTo[] = {"ActsPknlMstp_gardenworkIdle",0.02};
			InterpolateTo[] = {"ActsPknlMstp_gardenwork_AmovPercMstpSnonWnonDnon",0.02,"ActsPknlMstp_gardenworkSx_AdthPknlSnonWnonDnon",0.01};
		};
		class ActsPknlMstpSnonWnonDnon_gardenworkS2: ActsPknlMstpSnonWnonDnon_gardenworkS1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPknlMstp_gardenworkS2";
			speed = 0.081301;
			ConnectTo[] = {"ActsPknlMstp_gardenworkIdle",0.02};
			InterpolateTo[] = {"ActsPknlMstp_gardenwork_AmovPercMstpSnonWnonDnon",0.02,"ActsPknlMstp_gardenworkSx_AdthPknlSnonWnonDnon",0.01};
		};
		class ActsPknlMstpSnonWnonDnon_gardenworkS3: ActsPknlMstpSnonWnonDnon_gardenworkS1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPknlMstp_gardenworkS3";
			speed = 0.079787;
			ConnectTo[] = {"ActsPknlMstp_gardenworkIdle",0.02};
			InterpolateTo[] = {"ActsPknlMstp_gardenwork_AmovPercMstpSnonWnonDnon",0.02,"ActsPknlMstp_gardenworkSx_AdthPknlSnonWnonDnon",0.01};
		};
		class ActsPknlMstpSnonWnonDnon_gardenworkS4: ActsPknlMstpSnonWnonDnon_gardenworkS1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPknlMstp_gardenworkS4";
			speed = 0.085227;
			ConnectTo[] = {"ActsPknlMstp_gardenworkIdle",0.02};
			InterpolateTo[] = {"ActsPknlMstp_gardenwork_AmovPercMstpSnonWnonDnon",0.02,"ActsPknlMstp_gardenworkSx_AdthPknlSnonWnonDnon",0.01};
		};
		class ActsPknlMstpSnonWnonDnon_gardenworkS5: ActsPknlMstpSnonWnonDnon_gardenworkS1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPknlMstp_gardenworkS5";
			speed = 0.076923;
			ConnectTo[] = {"ActsPknlMstp_gardenworkIdle",0.02};
			InterpolateTo[] = {"ActsPknlMstp_gardenwork_AmovPercMstpSnonWnonDnon",0.02,"ActsPknlMstp_gardenworkSx_AdthPknlSnonWnonDnon",0.01};
		};
		class ActsPknlMstpSnonWnonDnon_gardenworkS6: ActsPknlMstpSnonWnonDnon_gardenworkS1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPknlMstp_gardenworkS6";
			speed = 0.095238;
			ConnectTo[] = {"ActsPknlMstp_gardenworkIdle",0.02};
			InterpolateTo[] = {"ActsPknlMstp_gardenwork_AdthPknlSnonWnonDnon",0.01,"ActsPknlMstp_gardenwork_AmovPercMstpSnonWnonDnon",0.02};
		};
		class ActsPknlMstpSnonWnonDnon_gardenworkS7: ActsPknlMstpSnonWnonDnon_gardenworkS1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPknlMstp_gardenworkS7";
			speed = 0.326087;
			ConnectTo[] = {"ActsPknlMstp_gardenworkIdle",0.02};
			InterpolateTo[] = {"ActsPknlMstp_gardenwork_AdthPknlSnonWnonDnon",0.01,"ActsPknlMstp_gardenwork_AmovPercMstpSnonWnonDnon",0.02};
		};
		class ActsPknlMstpSnonWnonDnon_gardenworkS8: ActsPknlMstpSnonWnonDnon_gardenworkS1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPknlMstp_gardenworkS8";
			speed = 0.024058;
			ConnectTo[] = {"ActsPknlMstp_gardenworkIdle",0.02};
			InterpolateTo[] = {"ActsPknlMstp_gardenwork_AmovPercMstpSnonWnonDnon",0.02,"ActsPknlMstp_gardenworkSx_AdthPknlSnonWnonDnon",0.01};
		};
		class ActsPknlMstp_gardenworkIdle: ActsPknlMstpSnonWnonDnon_gardenworkS1
		{
			variantsAI[] = {"ActsPknlMstpSnonWnonDnon_gardenworkS0",0.09,"ActsPknlMstpSnonWnonDnon_gardenworkS1",0.09,"ActsPknlMstpSnonWnonDnon_gardenworkS2",0.09,"ActsPknlMstpSnonWnonDnon_gardenworkS3",0.09,"ActsPknlMstpSnonWnonDnon_gardenworkS4",0.09,"ActsPknlMstpSnonWnonDnon_gardenworkS5",0.09,"ActsPknlMstpSnonWnonDnon_gardenworkS6",0.09,"ActsPknlMstpSnonWnonDnon_gardenworkS7",0.09,"ActsPknlMstpSnonWnonDnon_gardenworkS8",0.09,"ActsPknlMstp_gardenworkIdle"};
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPknlMstp_gardenworkIdle";
			speed = 0.5;
			interpolationRestart = 1;
			ConnectTo[] = {"ActsPknlMstpSnonWnonDnon_gardenworkS7",0.02,"ActsPknlMstpSnonWnonDnon_gardenworkS6",0.02,"ActsPknlMstpSnonWnonDnon_gardenworkS5",0.02,"ActsPknlMstpSnonWnonDnon_gardenworkS4",0.02,"ActsPknlMstpSnonWnonDnon_gardenworkS3",0.02,"ActsPknlMstpSnonWnonDnon_gardenworkS2",0.02,"ActsPknlMstpSnonWnonDnon_gardenworkS1",0.02,"ActsPknlMstpSnonWnonDnon_gardenworkS8",0.02};
			InterpolateTo[] = {"ActsPknlMstp_gardenwork_AdthPknlSnonWnonDnon",0.01,"ActsPknlMstp_gardenwork_AmovPercMstpSnonWnonDnon",0.02};
		};
		class ActsPknlMstp_gardenworkSx_AdthPknlSnonWnonDnon: DefaultDie
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPknlMstp_gardenworkSx_AdthPknlSnonWnonDnon";
			speed = 0.697674;
			looped = 0;
			terminal = 1;
			enableOptics = 0;
			soundOverride = "bodyfall";
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class ActsPknlMstp_gardenwork_AdthPknlSnonWnonDnon: ActsPknlMstp_gardenworkSx_AdthPknlSnonWnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPknlMstp_gardenwork_AdthPknlSnonWnonDnon";
			speed = 0.697674;
			terminal = 1;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class ActsPknlMstp_gardenwork_AmovPercMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\ActsPknlMstp_gardenwork_AmovPercSnonWnonDnon";
			speed = 0.147783;
			looped = 0;
			interpolationRestart = 1;
			soundEnabled = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"ActsPknlMstp_gardenwork_AdthPknlSnonWnonDnon",0.01};
		};
		class AmovPercSnonWnonDnon_ActsPknlMstp_gardenwork: ActsPknlMstpSnonWnonDnon_gardenworkS1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\farm\AmovPercSnonWnonDnon_ActsPknlMstp_gardenwork";
			speed = 0.128205;
			looped = 0;
			soundEnabled = 0;
			ConnectTo[] = {"ActsPknlMstp_gardenworkIdle",0.02};
			InterpolateTo[] = {"ActsPknlMstp_gardenwork_AdthPknlSnonWnonDnon",0.01};
		};
		class AidlPercMstpSnonWnonDnon_S0: AmovPercMstpSnonWnonDnon
		{
			variantsAI[] = {"AidlPercMstpSnonWnonDnon_2",0.1,"AidlPercMstpSnonWnonDnon_1",0.1,"AidlPercMstpSnonWnonDnon_4",0.1,"AidlPercMstpSnonWnonDnon_S0"};
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AidlPercMstpSnonWnonDnon_2",0.01,"AidlPercMstpSnonWnonDnon_1",0.01,"AidlPercMstpSnonWnonDnon_4",0.01};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AidlPercMstpSnonWnonDnon_panicS0: AidlPercMstpSnonWnonDnon_S0
		{
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AidlPercMstpSnonWnonDnon_panic3",0.01,"AidlPercMstpSnonWnonDnon_panic1",0.01,"AidlPercMstpSnonWnonDnon_panic2",0.01};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AdthPercMstpSnonWnonDnon_1: DefaultDie
		{
			file = "\ca\Anims\Characters\data\Anim\wmn\dth\erc\stp\non\non\AdthPercMstpSnonWnonDnon_1.rtm";
			speed = 0.447761;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			interpolationRestart = 1;
			terminal = 1;
			enableAutoActions = 0;
			looped = 0;
			enableOptics = 0;
			soundOverride = "bodyfall";
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class LadderCivilStatic: StandBase
		{
			onLadder = 1;
			legs = "legsNo";
			actions = "LadderWmnActions";
			aimingBody = "aimingNo";
			aiming = "aimingNo";
			collisionShape = "ca\Anims\Characters\Data\Geom\Sdr\Perc_Wnon.p3d";
			soundEnabled = 0;
			duty = -0.35;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.086523;
			file = "\Ca\Anims\Characters\data\Anim\wmn\ldr\ZebrikStop";
			speed = 1e+010;
			canPullTrigger = 0;
			enableOptics = 0;
			ConnectTo[] = {"LadderCivilUpOff",0.1,"LadderCivilDownOff",0.1};
			InterpolateTo[] = {"LadderCivilUpLoop",0.1,"LadderCivilDownLoop",0.1};
		};
		class LadderCivilDownOff: LadderCivilStatic
		{
			onLadder = 0;
			soundEnabled = 1;
			soundOverride = "ladder";
			looped = 0;
			file = "\Ca\Anims\Characters\data\Anim\wmn\ldr\ZebrikSlezeni";
			speed = 1.5;
			actions = "WmnStandAction";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.1};
			InterpolateTo[] = {};
		};
		class LadderCivilUpOff: LadderCivilDownOff
		{
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.1};
			InterpolateTo[] = {};
		};
		class LadderCivilOn: LadderCivilStatic
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\ldr\ZebrikNalezeni";
			looped = 0;
			speed = 1.5;
			ConnectTo[] = {"LadderCivilStatic",0.1};
			InterpolateTo[] = {};
		};
		class LadderCivilUpLoop: LadderCivilStatic
		{
			soundOverride = "ladder";
			soundEnabled = 1;
			duty = 0.7;
			file = "\Ca\Anims\Characters\data\Anim\wmn\ldr\ZebrikLoopUp";
			speed = 2.5;
			ConnectTo[] = {};
			InterpolateTo[] = {"LadderCivilUpOff",0.1,"LadderCivilStatic",0.1,"LadderCivilDownLoop",0.1};
		};
		class LadderCivilDownLoop: LadderCivilUpLoop
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\ldr\ZebrikLoopDown";
			speed = 2.5;
			ConnectTo[] = {};
			InterpolateTo[] = {"LadderCivilUpLoop",0.1,"LadderCivilStatic",0.1,"LadderCivilDownOff",0.1};
		};
		class AdthPswmMstp_Plavani: AdthPercMstpSnonWnonDnon_1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\swm\DthPlavani";
			speed = 0.277778;
			interpolationRestart = 1;
			terminal = 1;
			enableAutoActions = 0;
			looped = 0;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class AdthPswmMstp_Slapani: DefaultDie
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\swm\DthSlapani";
			speed = 0.232558;
			interpolationRestart = 1;
			terminal = 1;
			enableAutoActions = 0;
			looped = 0;
			soundOverride = "bodyfall";
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class AdthPsitMstp_Death4fallground: DefaultDie
		{
			variantAfter[] = {0,0,0};
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitDeath4fallground";
			variantsPlayer[] = {"AdthPsitMstp_Death4fallground",0.25,"AdthPsitMstp_Death1",0.25,"AdthPsitMstp_Death2",0.25,"AdthPsitMstp_Death3"};
			speed = 0.277778;
			equivalentTo = "AdthPsitMstp_Death4fallground";
			terminal = 1;
			interpolationRestart = 1;
			enableAutoActions = 0;
			looped = 0;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class ActsPsitMstp_StandUp_AdthPercMstpSnonWnonDnon_1: AdthPercMstpSnonWnonDnon_1
		{
			interpolationRestart = 2;
			terminal = 1;
			looped = 0;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class AdthPknlMstpSnonWnonDnon_1: DefaultDie
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\dth\knl\stp\non\non\AdthPknlMstpSnonWnonDnon_1.rtm";
			speed = 1.304348;
			terminal = 1;
			aimingBody = "aimingNo";
			aiming = "aimingNo";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			interpolationRestart = 1;
			enableAutoActions = 0;
			looped = 0;
			soundOverride = "bodyfall";
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class ActsPsitMstp_Sit_AdthPknlMstpSnonWnonDnon_1: AdthPknlMstpSnonWnonDnon_1
		{
			interpolationRestart = 0;
			terminal = 1;
			looped = 0;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class AdthPsitMstp_Death1: AdthPsitMstp_Death4fallground
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitDeath1";
			speed = 0.241935;
			terminal = 1;
			interpolationRestart = 1;
			enableAutoActions = 0;
			looped = 0;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class AdthPsitMstp_Death2: AdthPsitMstp_Death1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitDeath2";
			speed = 0.357143;
			terminal = 1;
			interpolationRestart = 1;
			enableAutoActions = 0;
			looped = 0;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class AdthPsitMstp_Death3: AdthPsitMstp_Death1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitDeath3";
			speed = 0.291262;
			terminal = 1;
			interpolationRestart = 1;
			enableAutoActions = 0;
			looped = 0;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class DeadState: Default
		{
			terminal = 1;
			file = "\ca\Anims\Characters\data\Anim\wmn\dth\erc\stp\non\non\AdthPercMstpSnonWnonDnon_1.rtm";
			aiming = "aimingNo";
			legs = "legsNo";
			head = "headNo";
			speed = 2.0;
			actions = "DeadActions";
			aimingBody = "aimingNo";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			looped = 0;
			canPullTrigger = 0;
			enableOptics = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class CrewKIA: DeadState
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\crg\BasicCargoKIA";
			interpolationRestart = 1;
			terminal = 1;
			enableAutoActions = 0;
			looped = 0;
			enableOptics = 0;
			soundOverride = "bodyfall";
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class Crew: Default
		{
			speed = 1e+010;
			soundEnabled = 0;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\geom_empty.p3d";
			actions = "CargoActions";
			file = "\Ca\Anims\Characters\data\Anim\wmn\crg\basiccargo";
			canPullTrigger = 0;
			enableOptics = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"CrewKIA",0.1};
		};
		class AidlPercMstpSnonWnonDnon_2: AidlPercMstpSnonWnonDnon_S0
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\erc\stp\non\non\AidlPercMstpSnonWnonDnon_2.rtm";
			speed = 0.099338;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon_S0",0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPercMrunSnonWnonDf: AmovPercMstpSnonWnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\run\non\non\AmovPercMrunSnonWnonDf";
			speed = 1.363636;
			actions = "WmnStandRunAction";
			aimingBody = "aimingNo";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			duty = 1.0;
			soundOverride = "Run";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_1",0.01,"AmovPerc_joggingSlower",0.01,"AmovPercMwlkSnonWnonDf_A",0.015,"AmovPercMrunSnonWnonDf_panic",0.0,"AmovPercMrunSnonWnonDf_panicCollapse",0.0};
		};
		class AswmPercMstpDnon: AmovPercMstpSnonWnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\swm\slapani";
			speed = 0.365854;
			actions = "WmnSwimmingActions";
			soundOverride = "swim";
			soundEdge[] = {0.5};
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPswmMstp_Slapani",0.01,"AswmPercMstpDnon_AswmPercMstpDf",0.01};
		};
		class AswmPercMstpDnon_AmovPercMstpSnonWnonDnon: AswmPercMstpDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\swm\plavani2unaErc";
			speed = 1.153846;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class AswmPercMstpSnonWnonDf: AswmPercMstpDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\swm\plavani";
			speed = 0.555556;
			ConnectTo[] = {};
			InterpolateTo[] = {"AdthPswmMstp_Plavani",0.01,"AswmPercMstpDf_AswmPercMstpDnon",0.01};
		};
		class AswmPercMstpDf_AswmPercMstpDnon: AswmPercMstpSnonWnonDf
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\swm\plavani2slapani";
			looped = 0;
			speed = 0.909091;
			interpolationRestart = 1;
			ConnectTo[] = {"AswmPercMstpDnon",0.01};
			InterpolateTo[] = {"AdthPswmMstp_Slapani",0.01};
		};
		class AswmPercMstpDnon_AswmPercMstpDf: AswmPercMstpDf_AswmPercMstpDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\swm\slapani2plavani";
			interpolationRestart = 1;
			ConnectTo[] = {"AswmPercMstpSnonWnonDf",0.01};
			InterpolateTo[] = {"AdthPswmMstp_Plavani",0.01};
		};
		class ActsPsitMstp_StopS0: CutSceneAnimationBase
		{
			variantsAI[] = {"ActsPsitMstp_StopS0",0.1,"ActsPsitMstp_OtreniCela",0.1,"ActsPsitMstp_idleLoop",0.1,"ActsPsitMstp_Smoking",0.1,"ActsPsitMstp_cekani1",0.1,"ActsPsitMstp_cekani2",0.1,"ActsPsitMstp_cekani3",0.1,"ActsPsitMstp_cekani4",0.1,"ActsPsitMstp_cekani5",0.1,"ActsPsitMstp_cekani6"};
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitStop";
			equivalentTo = "ActsPsitMstp_StopS0";
			actions = "WmnSitAction";
			soundOverride = "";
			ConnectTo[] = {"ActsPsitMstp_cekani5",0.02,"ActsPsitMstp_cekani1",0.02,"ActsPsitMstp_Smoking",0.02,"ActsPsitMstp_OtreniCela",0.02,"ActsPsitMstp_idleLoop",0.02,"ActsPsitMstp_Stop",0.02,"ActsPsitMstp_cekani6",0.02,"ActsPsitMstp_cekani4",0.02,"ActsPsitMstp_cekani3",0.02,"ActsPsitMstp_cekani2",0.02};
			InterpolateTo[] = {"AdthPsitMstp_Death3",0.01,"AdthPsitMstp_Death1",0.01,"AdthPsitMstp_Death4fallground",0.01,"AdthPsitMstp_Death2",0.01};
		};
		class ActsPsitMstp_Stop: CutSceneAnimationBase
		{
			soundOverride = "";
			ConnectTo[] = {"ActsPsitMstp_cekani5",0.025,"ActsPsitMstp_cekani1",0.025,"ActsPsitMstp_Smoking",0.025,"ActsPsitMstp_OtreniCela",0.025,"ActsPsitMstp_StandUp",0.02,"ActsPsitMstp_idleLoop",0.025,"ActsPsitMstp_StopS0",0.025,"ActsPsitMstp_cekani6",0.025,"ActsPsitMstp_cekani4",0.025,"ActsPsitMstp_cekani3",0.025,"ActsPsitMstp_cekani2",0.025};
			InterpolateTo[] = {"AdthPsitMstp_Death3",0.01,"AdthPsitMstp_Death1",0.01,"AdthPsitMstp_Death4fallground",0.01,"AdthPsitMstp_Death2",0.01};
		};
		class ActsPsitMstp_Sit: ActsPsitMstp_StopS0
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitStop_sit";
			speed = 0.10989;
			looped = 0;
			interpolationRestart = 2;
			ConnectTo[] = {"ActsPsitMstp_Stop",0.02};
			InterpolateTo[] = {"ActsPsitMstp_Sit_Death1",0.005,"ActsPsitMstp_StandUp",0.01};
		};
		class ActsPsitMstp_Sit_Death1: ActsPsitMstp_Sit
		{
			interpolationRestart = 0;
			speed = 0.3;
			ConnectTo[] = {};
			InterpolateTo[] = {"AdthPsitMstp_Death3",0.01,"AdthPsitMstp_Death1",0.01,"AdthPsitMstp_Death4fallground",0.01,"AdthPsitMstp_Death2",0.01};
		};
		class ActsPsitMstp_StandUp: ActsPsitMstp_Sit
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitStandUp";
			speed = 0.150754;
			interpolationRestart = 2;
			actions = "WmnStandAction";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"ActsPsitMstp_Sit",0.01};
		};
		class ActsPsitMstp_OtreniCela: ActsPsitMstp_StopS0
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitStop_otreniCela";
			speed = 0.153061;
			looped = 0;
			ConnectTo[] = {"ActsPsitMstp_StopS0",0.02};
			InterpolateTo[] = {"AdthPsitMstp_Death3",0.01,"ActsPsitMstp_Stop",0.025,"AdthPsitMstp_Death1",0.01,"AdthPsitMstp_Death4fallground",0.01,"AdthPsitMstp_Death2",0.01};
		};
		class ActsPsitMstp_Smoking: ActsPsitMstp_OtreniCela
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitStop_koureni";
			speed = 0.017381;
			looped = 0;
			ConnectTo[] = {"ActsPsitMstp_StopS0",0.02};
			InterpolateTo[] = {"AdthPsitMstp_Death3",0.01,"ActsPsitMstp_Stop",0.025,"AdthPsitMstp_Death1",0.01,"AdthPsitMstp_Death4fallground",0.01,"AdthPsitMstp_Death2",0.01};
		};
		class ActsPsitMstp_idleLoop: ActsPsitMstp_OtreniCela
		{
			speed = 0.174419;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitStop_idleLoop";
			looped = 0;
			ConnectTo[] = {"ActsPsitMstp_StopS0",0.02};
			InterpolateTo[] = {"AdthPsitMstp_Death3",0.01,"ActsPsitMstp_Stop",0.025,"AdthPsitMstp_Death1",0.01,"AdthPsitMstp_Death4fallground",0.01,"AdthPsitMstp_Death2",0.01};
		};
		class ActsPsitMstp_cekani1: ActsPsitMstp_OtreniCela
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitStop_cekani1";
			speed = 0.04886;
			looped = 0;
			ConnectTo[] = {"ActsPsitMstp_StopS0",0.02};
			InterpolateTo[] = {"AdthPsitMstp_Death3",0.01,"ActsPsitMstp_Stop",0.025,"AdthPsitMstp_Death1",0.01,"AdthPsitMstp_Death4fallground",0.01,"AdthPsitMstp_Death2",0.01};
		};
		class ActsPsitMstp_cekani2: ActsPsitMstp_cekani1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitStop_cekani2";
			speed = 0.051195;
			looped = 0;
			ConnectTo[] = {"ActsPsitMstp_StopS0",0.02};
			InterpolateTo[] = {"AdthPsitMstp_Death3",0.01,"ActsPsitMstp_Stop",0.025,"AdthPsitMstp_Death1",0.01,"AdthPsitMstp_Death4fallground",0.01,"AdthPsitMstp_Death2",0.01};
		};
		class ActsPsitMstp_cekani3: ActsPsitMstp_cekani1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitStop_cekani3";
			speed = 0.071429;
			looped = 0;
			ConnectTo[] = {"ActsPsitMstp_StopS0",0.02};
			InterpolateTo[] = {"AdthPsitMstp_Death3",0.01,"ActsPsitMstp_Stop",0.025,"AdthPsitMstp_Death1",0.01,"AdthPsitMstp_Death4fallground",0.01,"AdthPsitMstp_Death2",0.01};
		};
		class ActsPsitMstp_cekani4: ActsPsitMstp_cekani1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitStop_cekani4";
			speed = 0.099668;
			looped = 0;
			ConnectTo[] = {"ActsPsitMstp_StopS0",0.02};
			InterpolateTo[] = {"AdthPsitMstp_Death3",0.01,"ActsPsitMstp_Stop",0.025,"AdthPsitMstp_Death1",0.01,"AdthPsitMstp_Death4fallground",0.01,"AdthPsitMstp_Death2",0.01};
		};
		class ActsPsitMstp_cekani5: ActsPsitMstp_cekani1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitStop_cekani5";
			speed = 0.053476;
			looped = 0;
			ConnectTo[] = {"ActsPsitMstp_StopS0",0.02};
			InterpolateTo[] = {"AdthPsitMstp_Death3",0.01,"ActsPsitMstp_Stop",0.025,"AdthPsitMstp_Death1",0.01,"AdthPsitMstp_Death4fallground",0.01,"AdthPsitMstp_Death2",0.01};
		};
		class ActsPsitMstp_cekani6: ActsPsitMstp_cekani1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\sit\SitStop_cekani6";
			speed = 0.020576;
			looped = 0;
			ConnectTo[] = {"ActsPsitMstp_StopS0",0.02};
			InterpolateTo[] = {"AdthPsitMstp_Death3",0.01,"ActsPsitMstp_Stop",0.025,"AdthPsitMstp_Death1",0.01,"AdthPsitMstp_Death4fallground",0.01,"AdthPsitMstp_Death2",0.01};
		};
		class AmovPerc_joggingPause: AmovPercMstpSnonWnonDnon
		{
			speed = 0.098361;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\jogging\Erc_joggingPause";
			actions = "WmnJoggingIdleAction";
			relSpeedMax = 1.206323;
			relSpeedMin = 0.896839;
			duty = 0.4;
			ConnectTo[] = {"AmovPerc_joggingSlowerS0",0.005,"AmovPerc_joggingSlower",0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPerc_j_JoggingExercisesA: AmovPerc_joggingPause
		{
			speed = 0.059642;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\jogging\ErcStop_JoggingExercisesA";
			actions = "WmnStandAction";
			ConnectTo[] = {"AmovPerc_joggingSlowerS0",0.005,"AmovPerc_joggingSlower",0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPerc_j_JoggingExercisesC: AmovPerc_j_JoggingExercisesA
		{
			speed = 0.107527;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\jogging\ErcStop_JoggingExercisesC";
			ConnectTo[] = {"AmovPerc_joggingSlowerS0",0.005,"AmovPerc_joggingSlower",0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPerc_j_JoggingExercisesB: AmovPerc_j_JoggingExercisesA
		{
			speed = 0.053763;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\jogging\ErcStop_JoggingExercisesB";
			ConnectTo[] = {"AmovPerc_joggingSlowerS0",0.005,"AmovPerc_joggingSlower",0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPerc_ErcStp2jogging: AmovPerc_joggingPause
		{
			speed = 0.545455;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\jogging\ErcStp2jogging";
			actions = "WmnStandAction";
			looped = 0;
			ConnectTo[] = {"AmovPerc_joggingSlower",0.005};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AmovPercMrunSnonWnonDf",0.01,"AmovPercMwlkSnonWnonDf_A",0.01,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPerc_joggingSlower: AmovPerc_joggingPause
		{
			variantAfter[] = {20,40,60};
			variantsAI[] = {"AmovPerc_joggingSlowerS0",0.2,"AmovPerc_joggingPause",0.2,"AmovPerc_j_JoggingExercisesA",0.2,"AmovPerc_j_JoggingExercisesB",0.2,"AmovPerc_j_JoggingExercisesC"};
			speed = 0.625;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\jogging\Erc_joggingSlower";
			actions = "WmnStandAction";
			soundOverride = "wlk";
			ConnectTo[] = {"AmovPerc_j_JoggingExercisesC",0.01,"AmovPerc_j_JoggingExercisesB",0.01,"AmovPerc_joggingPause",0.01,"AmovPerc_j_JoggingExercisesA",0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AmovPercMrunSnonWnonDf",0.01,"AmovPerc_joggingSlowerS0",0.01,"AmovPercMwlkSnonWnonDf_A",0.01,"AmovPercMwlkSnonWnonDfr",0.01,"AmovPercMwlkSnonWnonDfl",0.01,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPerc_joggingSlowerS0: AmovPerc_joggingSlower
		{
			actions = "WmnStandAction";
			ConnectTo[] = {"AmovPerc_j_JoggingExercisesC",0.01,"AmovPerc_j_JoggingExercisesB",0.01,"AmovPerc_joggingPause",0.01,"AmovPerc_j_JoggingExercisesA",0.01};
			InterpolateTo[] = {"AmovPerc_joggingSlower",0.01,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPercMstpSnonWnonDnon_getIn: AmovPercMstpSnonWnonDnon
		{
			looped = 0;
			speed = 1.111111;
			file = "\Ca\Anims\Characters\data\Anim\wmn\crg\NastupDoAuta";
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class AmovPercMstpSnonWnonDnon_getOut: AmovPercMstpSnonWnonDnon_getIn
		{
			speed = 1.153846;
			looped = 0;
			file = "\Ca\Anims\Characters\data\Anim\wmn\crg\VystupzAuta";
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class AmovPsqtMstpSnonDnon: AmovPercMstpSnonWnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\sqt\stp\non\non\AmovPsqtMstpSnonDnon.rtm";
			actions = "WmnSqtAction";
			ConnectTo[] = {"AinvPsqtMstpSnonDnonS0",0.02,"AswmPercMstpDnon",0.1,"AmovPsqtMstpSnonDnon_AmovPercMstpSnonDnon",0.02,"AmovPsqtMstpSnonDnon_AmovPercMstpSoldDnon",0.02,"AmovPsqtMstpSnonDnon_AmovPercMrunSnonDf_panic",0.02};
			InterpolateTo[] = {"AmovPsqtMstpSnonDnon_turnL",0.02,"AmovPsqtMstpSnonDnon_turnR",0.02,"AdthPknlMstpSnonWnonDnon_1",0.01};
		};
		class AmovPsqtMstpSnonDnon_turnL: AmovPsqtMstpSnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\sqt\stp\non\non\AmovPsqtMstpSnonDnon_AIturn90L";
			speed = 0.5;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPsqtMstpSnonDnon",0.02};
		};
		class AmovPsqtMstpSnonDnon_turnR: AmovPsqtMstpSnonDnon_turnL
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\sqt\stp\non\non\AmovPsqtMstpSnonDnon_AIturn90R";
			speed = 0.5;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPsqtMstpSnonDnon",0.02};
		};
		class AinvPsqtMstpSnonDnonS0: AmovPsqtMstpSnonDnon
		{
			variantsAI[] = {"AidlPsqtMstpSnonDnon",0.5,"AinvPsqtMstpSnonDnonS0",0.5};
			ConnectTo[] = {"AmovPsqtMstpSnonDnon",0.02,"AidlPsqtMstpSnonDnon",0.02};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01};
		};
		class TalkAnimationBase: CutSceneAnimationBase
		{
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class CwmnPerc_diskuse12: TalkAnimationBase
		{
			speed = 0.066964;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_diskuse12.rtm";
			looped = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPercMstpSnonWnonDnon_ActsPercMstpSnon_damsel: CwmnPerc_diskuse12
		{
			speed = 0.29703;
			actions = "WmnStandAction_damsel";
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\damsel\wmnErc_damsel";
			ConnectTo[] = {"ActsPercMstpSnon_damsel",0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPercMstpSnon_damsel: AmovPercMstpSnonWnonDnon_ActsPercMstpSnon_damsel
		{
			looped = 1;
			speed = 1e+010;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\damsel\damsel_stop";
			ConnectTo[] = {"ActsPercMstpSnon_damsel_walk",0.02,"ActsPercMstpSnon_damsel_rouge",0.02,"ActsPercMstpSnon_damsel_idle02",0.02,"ActsPercMstpSnon_damsel_wavingFR",0.02,"ActsPercMstpSnonWnonDnon_AmovPercMstpSnon_damsel",0.02,"ActsPercMstpSnon_damsel_walkAroundFB",0.02,"ActsPercMstpSnon_damsel_wavingExpressiveFR",0.02,"ActsPercMstpSnon_damsel_smoking",0.02,"ActsPercMstpSnon_damsel_idle03",0.02,"ActsPercMstpSnon_damsel_idle01",0.02,"ActsPercMstpSnon_damsel_powder",0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPercMstpSnon_damsel_idle01: ActsPercMstpSnon_damsel
		{
			variantsPlayer[] = {"ActsPercMstpSnon_damsel_idle01",0.331,"ActsPercMstpSnon_damsel_idle02",0.331,"ActsPercMstpSnon_damsel_idle03",0.331,"ActsPercMstpSnon_damsel_rouge",0.002,"ActsPercMstpSnon_damsel_powder",0.002,"ActsPercMstpSnon_damsel_smoking",0.003};
			variantAfter[] = {1,2,3};
			speed = 0.031315;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\damsel\damsel_idle";
			ConnectTo[] = {"ActsPercMstpSnon_damsel_rouge",0.02,"ActsPercMstpSnon_damsel_idle02",0.02,"ActsPercMstpSnon_damsel_smoking",0.02,"ActsPercMstpSnon_damsel_idle03",0.02,"ActsPercMstpSnon_damsel_powder",0.02};
			InterpolateTo[] = {"ActsPercMstpSnon_damsel",0.02,"ActsPercMstpSnonWnonDnon_AmovPercMstpSnon_damsel",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPercMstpSnon_damsel_idle02: ActsPercMstpSnon_damsel_idle01
		{
			speed = 0.047525;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\damsel\damsel_idle2";
			ConnectTo[] = {"ActsPercMstpSnon_damsel_rouge",0.02,"ActsPercMstpSnon_damsel_smoking",0.02,"ActsPercMstpSnon_damsel_idle03",0.02,"ActsPercMstpSnon_damsel_idle01",0.02,"ActsPercMstpSnon_damsel_powder",0.02};
			InterpolateTo[] = {"ActsPercMstpSnon_damsel",0.02,"ActsPercMstpSnonWnonDnon_AmovPercMstpSnon_damsel",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPercMstpSnon_damsel_idle03: ActsPercMstpSnon_damsel_idle01
		{
			speed = 0.12931;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\damsel\damsel_idle3";
			ConnectTo[] = {"ActsPercMstpSnon_damsel_rouge",0.02,"ActsPercMstpSnon_damsel_idle02",0.02,"ActsPercMstpSnon_damsel_smoking",0.02,"ActsPercMstpSnon_damsel_idle01",0.02,"ActsPercMstpSnon_damsel_powder",0.02};
			InterpolateTo[] = {"ActsPercMstpSnon_damsel",0.02,"ActsPercMstpSnonWnonDnon_AmovPercMstpSnon_damsel",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPercMstpSnon_damsel_rouge: ActsPercMstpSnon_damsel_idle01
		{
			speed = 0.058111;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\damsel\damsel_rouge";
			ConnectTo[] = {"ActsPercMstpSnon_damsel_idle02",0.02,"ActsPercMstpSnon_damsel_smoking",0.02,"ActsPercMstpSnon_damsel_idle03",0.02,"ActsPercMstpSnon_damsel_idle01",0.02,"ActsPercMstpSnon_damsel_powder",0.02};
			InterpolateTo[] = {"ActsPercMstpSnon_damsel",0.02,"ActsPercMstpSnonWnonDnon_AmovPercMstpSnon_damsel",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPercMstpSnon_damsel_powder: ActsPercMstpSnon_damsel_idle01
		{
			speed = 0.064343;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\damsel\damsel_powder";
			ConnectTo[] = {"ActsPercMstpSnon_damsel_rouge",0.02,"ActsPercMstpSnon_damsel_idle02",0.02,"ActsPercMstpSnon_damsel_smoking",0.02,"ActsPercMstpSnon_damsel_idle03",0.02,"ActsPercMstpSnon_damsel_idle01",0.02};
			InterpolateTo[] = {"ActsPercMstpSnon_damsel",0.02,"ActsPercMstpSnonWnonDnon_AmovPercMstpSnon_damsel",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPercMstpSnon_damsel_walk: ActsPercMstpSnon_damsel
		{
			speed = 0.04908;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\damsel\damsel_walk";
			ConnectTo[] = {"ActsPercMstpSnon_damsel",0.02};
			InterpolateTo[] = {"ActsPercMstpSnonWnonDnon_AmovPercMstpSnon_damsel",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPercMstpSnon_damsel_smoking: ActsPercMstpSnon_damsel_idle01
		{
			speed = 0.023585;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\damsel\damsel_smoking";
			ConnectTo[] = {"ActsPercMstpSnon_damsel_rouge",0.02,"ActsPercMstpSnon_damsel_idle02",0.02,"ActsPercMstpSnon_damsel_idle03",0.02,"ActsPercMstpSnon_damsel_idle01",0.02,"ActsPercMstpSnon_damsel_powder",0.02};
			InterpolateTo[] = {"ActsPercMstpSnon_damsel",0.02,"ActsPercMstpSnonWnonDnon_AmovPercMstpSnon_damsel",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPercMstpSnon_damsel_wavingFR: ActsPercMstpSnon_damsel
		{
			speed = 0.037406;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\damsel\damsel_wavingFR";
			ConnectTo[] = {"ActsPercMstpSnon_damsel",0.02};
			InterpolateTo[] = {"ActsPercMstpSnonWnonDnon_AmovPercMstpSnon_damsel",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPercMstpSnon_damsel_wavingExpressiveFR: ActsPercMstpSnon_damsel
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\damsel\damsel_wavingExpressiveFR";
			speed = 0.072948;
			ConnectTo[] = {"ActsPercMstpSnon_damsel",0.02};
			InterpolateTo[] = {"ActsPercMstpSnonWnonDnon_AmovPercMstpSnon_damsel",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPercMstpSnon_damsel_walkAroundFB: ActsPercMstpSnon_damsel
		{
			speed = 0.040678;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\damsel\damsel_walkAroundFB";
			ConnectTo[] = {"ActsPercMstpSnon_damsel",0.02};
			InterpolateTo[] = {"ActsPercMstpSnonWnonDnon_AmovPercMstpSnon_damsel",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class ActsPercMstpSnonWnonDnon_AmovPercMstpSnon_damsel: AmovPercMstpSnonWnonDnon_ActsPercMstpSnon_damsel
		{
			speed = 0.263736;
			actions = "WmnStandAction";
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\damsel\damsel_wmnErc";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_ukazatDoleva: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_ukazatDoleva.rtm";
			speed = 0.410959;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_ukazatVpred: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_ukazatVpred.rtm";
			speed = 0.26087;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_ukazatDoprava: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_ukazatDoprava.rtm";
			speed = 0.230769;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_ukazatVzad: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_ukazatVzad.rtm";
			speed = 0.218978;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_stani1: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_stani1.rtm";
			speed = 0.454545;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_diskuse1: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_diskuse1.rtm";
			speed = 0.101695;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_stani2: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_stani2.rtm";
			speed = 0.201342;
			ConnectTo[] = {"AidlPercMstpSnonDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_diskuse2: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_diskuse2.rtm";
			speed = 0.11194;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_diskuse3: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_diskuse3.rtm";
			speed = 0.352941;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_diskuse4: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_diskuse4.rtm";
			speed = 0.074627;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_ano: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_ano.rtm";
			speed = 0.229008;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_diskuse5: CwmnPerc_diskuse12
		{
			speed = 0.06;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_diskuse5.rtm";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_diskuse6: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_diskuse6.rtm";
			speed = 0.048465;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_diskuse7: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_diskuse7.rtm";
			speed = 0.109489;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_stani4: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_stani4.rtm";
			speed = 0.267857;
			ConnectTo[] = {"AidlPercMstpSnonDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_nene: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_nene.rtm";
			speed = 0.361446;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_aniNahodou: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_aniNahodou.rtm";
			speed = 0.11811;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_stani5: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_stani5.rtm";
			speed = 0.201342;
			ConnectTo[] = {"AidlPercMstpSnonDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_diskuse8: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_diskuse8.rtm";
			speed = 0.096463;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_stani6: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_stani6.rtm";
			speed = 0.222222;
			ConnectTo[] = {"AidlPercMstpSnonDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_diskuse9: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_diskuse9.rtm";
			speed = 0.066815;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_stani7: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_stani7.rtm";
			speed = 0.120968;
			ConnectTo[] = {"AidlPercMstpSnonDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_diskuse10: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_diskuse10.rtm";
			speed = 0.046225;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_stani8: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_stani8.rtm";
			speed = 0.285714;
			ConnectTo[] = {"AidlPercMstpSnonDnon_S0",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_diskuse11: CwmnPerc_diskuse12
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_diskuse11.rtm";
			speed = 0.036145;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class CwmnPerc_volaniMobilem: CwmnPerc_diskuse12
		{
			speed = 0.019157;
			file = "\Ca\Anims\Characters\data\Anim\wmn\cts\wmnErc_volaniMobilem.rtm";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPercMstpSnonDnon_AmovPsqtMstpSnonDnon: AmovPsqtMstpSnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\stp\non\non\AmovPercMstpSnonDnon_AmovPsqtMstpSnonDnon.rtm";
			speed = 0.77;
			looped = 0;
			interpolationRestart = 2;
			soundEnabled = 0;
			ConnectTo[] = {"AmovPsqtMstpSnonDnon",0.02};
			InterpolateTo[] = {"ActsPsitMstp_Sit_AdthPknlMstpSnonWnonDnon_1",0.01,"AmovPsqtMstpSnonDnon_AmovPercMstpSnonDnon",0.012};
		};
		class AmovPercMstpSoldDnon_AmovPsqtMstpSnonDnon: AmovPercMstpSnonDnon_AmovPsqtMstpSnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPsqrMstp_babka";
			speed = 0.255319;
			soundEnabled = 0;
			ConnectTo[] = {"AmovPsqtMstpSnonDnon",0.02};
			InterpolateTo[] = {"AmovPsqtMstpSnonDnon_AmovPercMstpSoldDnon",0.02};
		};
		class AmovPsqtMstpSnonDnon_AmovPercMstpSnonDnon: AmovPsqtMstpSnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\sqt\stp\non\non\AmovPsqtMstpSnonDnon_AmovPercMstpSnonDnon.rtm";
			speed = 0.77;
			actions = "WmnStandAction";
			looped = 0;
			interpolationRestart = 2;
			soundEnabled = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonDnon_AmovPsqtMstpSnonDnon",0.01};
		};
		class AmovPsqtMstpSnonDnon_AmovPercMstpSoldDnon: AmovPsqtMstpSnonDnon_AmovPercMstpSnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\sqt\stp\non\non\AmovPsqrMstp_AmovPercMstpSnonWnonDnon_babka";
			speed = 0.255319;
			soundEnabled = 0;
			ConnectTo[] = {"AmovPercMstpSoldDnon",0.02};
			InterpolateTo[] = {"AmovPercMstpSoldDnon_AmovPsqtMstpSnonDnon",0.02};
		};
		class AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnon: AmovPercMstpSnonWnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\knl\stp\non\non\AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnon.rtm";
			looped = 0;
			speed = 0.625;
			interpolationRestart = 2;
			soundEnabled = 0;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon_AmovPknlMstpSnonWnon",0.01};
		};
		class AmovPknlMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\knl\stp\non\non\AmovPknlMstpSnonWnonDnon.rtm";
			speed = 1e+010;
			actions = "WmnKneelAction";
			aimingBody = "aimingNo";
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			interpolationSpeed = 6.0;
			ConnectTo[] = {"AswmPercMstpDnon",0.01,"AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnon",0.02,"AmovPknlMstpSnonWnonDnon_AidlPknlMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01,"AmovPknlMwlkSnonWnonDf",0.01};
		};
		class AmovPknlMstpSnonWnonDnon_AidlPknlMstpSnonWnonDnon: AmovPknlMstpSnonWnonDnon
		{
			speed = 0.416667;
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\knl\KnlStres2stresHandsHigh";
			looped = 0;
			interpolationRestart = 2;
			soundEnabled = 0;
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon9",0.01,"AidlPknlMstpSnonWnonDnon1",0.01,"AidlPknlMstpSnonWnonDnon8",0.01,"AidlPknlMstpSnonWnonDnon7",0.01,"AidlPknlMstpSnonWnonDnon6",0.01,"AidlPknlMstpSnonWnonDnon5",0.01,"AidlPknlMstpSnonWnonDnon4",0.01,"AidlPknlMstpSnonWnonDnon3",0.01,"AidlPknlMstpSnonWnonDnon2",0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01,"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",0.01};
		};
		class AidlPknlMstpSnonWnonDnon1: AmovPknlMstpSnonWnonDnon_AidlPknlMstpSnonWnonDnon
		{
			speed = 0.277778;
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\knl\KnlStresIdle1";
			ConnectTo[] = {"AswmPercMstpDnon",0.01,"AidlPknlMstpSnonWnonDnon9",0.01,"AidlPknlMstpSnonWnonDnon8",0.01,"AidlPknlMstpSnonWnonDnon7",0.01,"AidlPknlMstpSnonWnonDnon6",0.01,"AidlPknlMstpSnonWnonDnon5",0.01,"AidlPknlMstpSnonWnonDnon4",0.01,"AidlPknlMstpSnonWnonDnon3",0.01,"AidlPknlMstpSnonWnonDnon2",0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01,"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",0.01};
		};
		class AidlPknlMstpSnonWnonDnon9: AidlPknlMstpSnonWnonDnon1
		{
			speed = 0.138249;
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\knl\KnlStresIdle9";
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon1",0.01,"AidlPknlMstpSnonWnonDnon8",0.01,"AidlPknlMstpSnonWnonDnon7",0.01,"AidlPknlMstpSnonWnonDnon6",0.01,"AidlPknlMstpSnonWnonDnon5",0.01,"AidlPknlMstpSnonWnonDnon4",0.01,"AidlPknlMstpSnonWnonDnon3",0.01,"AidlPknlMstpSnonWnonDnon2",0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01,"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",0.01};
		};
		class AidlPknlMstpSnonWnonDnon8: AidlPknlMstpSnonWnonDnon1
		{
			speed = 0.090634;
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\knl\KnlStresIdle8";
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon9",0.01,"AidlPknlMstpSnonWnonDnon1",0.01,"AidlPknlMstpSnonWnonDnon7",0.01,"AidlPknlMstpSnonWnonDnon6",0.01,"AidlPknlMstpSnonWnonDnon5",0.01,"AidlPknlMstpSnonWnonDnon4",0.01,"AidlPknlMstpSnonWnonDnon3",0.01,"AidlPknlMstpSnonWnonDnon2",0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01,"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",0.01};
		};
		class AidlPknlMstpSnonWnonDnon7: AidlPknlMstpSnonWnonDnon1
		{
			speed = 0.050167;
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\knl\KnlStresIdle7";
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon9",0.01,"AidlPknlMstpSnonWnonDnon1",0.01,"AidlPknlMstpSnonWnonDnon8",0.01,"AidlPknlMstpSnonWnonDnon6",0.01,"AidlPknlMstpSnonWnonDnon5",0.01,"AidlPknlMstpSnonWnonDnon4",0.01,"AidlPknlMstpSnonWnonDnon3",0.01,"AidlPknlMstpSnonWnonDnon2",0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01,"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",0.01};
		};
		class AidlPknlMstpSnonWnonDnon6: AidlPknlMstpSnonWnonDnon1
		{
			speed = 0.120482;
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\knl\KnlStresIdle6";
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon9",0.01,"AidlPknlMstpSnonWnonDnon1",0.01,"AidlPknlMstpSnonWnonDnon8",0.01,"AidlPknlMstpSnonWnonDnon7",0.01,"AidlPknlMstpSnonWnonDnon5",0.01,"AidlPknlMstpSnonWnonDnon4",0.01,"AidlPknlMstpSnonWnonDnon3",0.01,"AidlPknlMstpSnonWnonDnon2",0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01,"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",0.01};
		};
		class AidlPknlMstpSnonWnonDnon5: AidlPknlMstpSnonWnonDnon1
		{
			speed = 0.082645;
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\knl\KnlStresIdle5";
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon9",0.01,"AidlPknlMstpSnonWnonDnon1",0.01,"AidlPknlMstpSnonWnonDnon8",0.01,"AidlPknlMstpSnonWnonDnon7",0.01,"AidlPknlMstpSnonWnonDnon6",0.01,"AidlPknlMstpSnonWnonDnon4",0.01,"AidlPknlMstpSnonWnonDnon3",0.01,"AidlPknlMstpSnonWnonDnon2",0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01,"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",0.01};
		};
		class AidlPknlMstpSnonWnonDnon4: AidlPknlMstpSnonWnonDnon1
		{
			speed = 0.101695;
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\knl\KnlStresIdle4";
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon9",0.01,"AidlPknlMstpSnonWnonDnon1",0.01,"AidlPknlMstpSnonWnonDnon8",0.01,"AidlPknlMstpSnonWnonDnon7",0.01,"AidlPknlMstpSnonWnonDnon6",0.01,"AidlPknlMstpSnonWnonDnon5",0.01,"AidlPknlMstpSnonWnonDnon3",0.01,"AidlPknlMstpSnonWnonDnon2",0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01,"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",0.01};
		};
		class AidlPknlMstpSnonWnonDnon3: AidlPknlMstpSnonWnonDnon1
		{
			speed = 0.090634;
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\knl\KnlStresIdle3";
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon9",0.01,"AidlPknlMstpSnonWnonDnon1",0.01,"AidlPknlMstpSnonWnonDnon8",0.01,"AidlPknlMstpSnonWnonDnon7",0.01,"AidlPknlMstpSnonWnonDnon6",0.01,"AidlPknlMstpSnonWnonDnon5",0.01,"AidlPknlMstpSnonWnonDnon4",0.01,"AidlPknlMstpSnonWnonDnon2",0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01,"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",0.01};
		};
		class AidlPknlMstpSnonWnonDnon2: AidlPknlMstpSnonWnonDnon1
		{
			speed = 0.167598;
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\knl\KnlStresIdle2";
			ConnectTo[] = {"AidlPknlMstpSnonWnonDnon9",0.01,"AidlPknlMstpSnonWnonDnon1",0.01,"AidlPknlMstpSnonWnonDnon8",0.01,"AidlPknlMstpSnonWnonDnon7",0.01,"AidlPknlMstpSnonWnonDnon6",0.01,"AidlPknlMstpSnonWnonDnon5",0.01,"AidlPknlMstpSnonWnonDnon4",0.01,"AidlPknlMstpSnonWnonDnon3",0.01};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01,"AinvPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",0.01};
		};
		class AinvPknlMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon: AmovPknlMstpSnonWnonDnon
		{
			speed = 0.416667;
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\knl\stresHandsHigh2KnlStres";
			looped = 0;
			interpolationRestart = 2;
			soundEnabled = 0;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01,"AmovPknlMstpSnonWnonDnon_AidlPknlMstpSnonWnonDnon",0.01};
		};
		class AmovPknlMwlkSnonWnonDf: AmovPknlMstpSnonWnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\knl\wlk\non\non\AmovPknlMwlkSnonWnonDf.rtm";
			speed = 0.731707;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMstpSnonWnonDnon",0.01};
		};
		class Cwmn_GalkinaErc_talkCry: CutSceneAnimationBase
		{
			looped = 0;
			file = "\ca\Anims\Characters\data\anim\wmn\cts\c1_Galkina\Cwmn_GalkinaErc_talkCry";
			speed = 0.032;
			interpolationSpeed = 2.9;
			interpolationRestart = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPercMwlkSnonWnonDf_A: AmovPercMstpSnonWnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkSnonWnonDf_A.rtm";
			speed = 0.833333;
			looped = 1;
			relSpeedMax = 1.096506;
			relSpeedMin = 0.697171;
			duty = 0.05;
			soundOverride = "wlk";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AmovPercMrunSnonWnonDf",0.015,"AdthPercMstpSnonWnonDnon_1",0.01,"AmovPerc_joggingSlower",0.01,"AmovPercMwlkSnonWnonDfr",0.01,"AmovPercMwlkSnonWnonDfl",0.01};
		};
		class Cwmn_GalkinaErc_talkHappy1: Cwmn_GalkinaErc_talkCry
		{
			file = "\ca\Anims\Characters\data\anim\wmn\cts\c1_Galkina\Cwmn_GalkinaErc_talkHappy1";
			interpolationSpeed = 6.0;
			looped = 1;
			actions = "WmnStandAction_happy";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.1,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPercMwlkSnonWnonDfr: AmovPercMwlkSnonWnonDf_A
		{
			speed = 0.46875;
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkSnonWnonDfr.rtm";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_1",0.01,"AmovPerc_joggingSlower",0.01,"AmovPercMwlkSnonWnonDf_A",0.01,"AmovPercMwlkSnonWnonDr",0.01};
		};
		class AmovPercMwlkSnonWnonDf: AmovPercMwlkSnonWnonDfr
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkSnonWnonDf.rtm";
			speed = 0.46875;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class Cwmn_GalkinaErc_talkHappy2: Cwmn_GalkinaErc_talkCry
		{
			file = "\ca\Anims\Characters\data\anim\wmn\cts\c1_Galkina\Cwmn_GalkinaErc_talkHappy2";
			speed = 0.089;
			interpolationSpeed = 6.0;
			looped = 1;
			actions = "WmnStandAction_happy2";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.1,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPercMwlkSnonWnonDr: AmovPercMwlkSnonWnonDfr
		{
			speed = 0.441176;
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkSnonWnonDr.rtm";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_1",0.01,"AmovPercMwlkSnonWnonDfr",0.01,"AmovPercMwlkSnonWnonDbr",0.01};
		};
		class Cwmn_GalkinaLiesNervousThenRun: Cwmn_GalkinaErc_talkCry
		{
			looped = 0;
			interpolationSpeed = 0.95;
			interpolationRestart = 1;
			file = "\ca\Anims\Characters\data\anim\wmn\cts\c1_Galkina\Cwmn_GalkinaLiesNervousThenRun";
			speed = 0.06;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.1};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
		};
		class AmovPercMwlkSnonWnonDbl: AmovPercMwlkSnonWnonDfr
		{
			speed = 0.461538;
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkSnonWnonDbl.rtm";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_1",0.01,"AmovPercMwlkSnonWnonDb",0.01,"AmovPercMwlkSnonWnonDl",0.01};
		};
		class Cwmn_GalkinaLiesQuiet: Cwmn_GalkinaErc_talkCry
		{
			file = "\ca\Anims\Characters\data\anim\wmn\cts\c1_Galkina\Cwmn_GalkinaLiesQuiet";
			speed = 0.0188;
			actions = "WmnStandAction";
			looped = 0;
			interpolationSpeed = 1.95;
			interpolationRestart = 1;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.1};
			InterpolateTo[] = {"Cwmn_GalkinaLiesDeath",0.01};
		};
		class Cwmn_GalkinaLiesDeath: Cwmn_GalkinaErc_talkCry
		{
			file = "\ca\Anims\Characters\data\anim\wmn\cts\c1_Galkina\Cwmn_GalkinaLiesDeath";
			interpolationSpeed = 6.0;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class AmovPercMwlkSnonWnonDb: AmovPercMwlkSnonWnonDfr
		{
			speed = 0.461538;
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkSnonWnonDb.rtm";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_1",0.01,"AmovPercMwlkSnonWnonDbl",0.01,"AmovPercMwlkSnonWnonDbr",0.01};
		};
		class Cwmn_GalkinaLiesIdle1: Cwmn_GalkinaErc_talkCry
		{
			file = "\ca\Anims\Characters\data\anim\wmn\cts\c1_Galkina\Cwmn_GalkinaLiesIdle1";
			speed = 0.039;
			looped = 1;
			actions = "WmnProneIdle";
			interpolationSpeed = 1.05;
			interpolationRestart = 2;
			ConnectTo[] = {"Cwmn_GalkinaLiesNervousThenRun",0.1,"Cwmn_GalkinaLiesQuiet",0.1};
			InterpolateTo[] = {"Cwmn_GalkinaLiesNervousThenRun",0.01,"Cwmn_GalkinaLiesQuiet",0.01,"Cwmn_GalkinaLiesDeath",0.01};
		};
		class AmovPercMwlkSnonWnonDbr: AmovPercMwlkSnonWnonDfr
		{
			speed = 0.461538;
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkSnonWnonDbr.rtm";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_1",0.01,"AmovPercMwlkSnonWnonDr",0.01,"AmovPercMwlkSnonWnonDb",0.01};
		};
		class Cwmn_GalkinaLiesIdle2: Cwmn_GalkinaErc_talkCry
		{
			file = "\ca\Anims\Characters\data\anim\wmn\cts\c1_Galkina\Cwmn_GalkinaLiesIdle2";
			speed = 0.136;
			interpolationSpeed = 6.0;
			ConnectTo[] = {"Cwmn_GalkinaLiesNervousThenRun",0.1,"Cwmn_GalkinaLiesQuiet",0.1};
			InterpolateTo[] = {"Cwmn_GalkinaLiesNervousThenRun",0.01,"Cwmn_GalkinaLiesQuiet",0.01,"Cwmn_GalkinaLiesDeath",0.01};
		};
		class AmovPercMwlkSnonWnonDl: AmovPercMwlkSnonWnonDfr
		{
			speed = 0.428571;
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkSnonWnonDl.rtm";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_1",0.01,"AmovPercMwlkSnonWnonDbl",0.01,"AmovPercMwlkSnonWnonDfl",0.01};
		};
		class Cwmn_GalkinaLiesIdle3: Cwmn_GalkinaErc_talkCry
		{
			file = "\ca\Anims\Characters\data\anim\wmn\cts\c1_Galkina\Cwmn_GalkinaLiesIdle3";
			speed = 0.035;
			interpolationSpeed = 6.0;
			ConnectTo[] = {"Cwmn_GalkinaLiesNervousThenRun",0.1,"Cwmn_GalkinaLiesQuiet",0.1};
			InterpolateTo[] = {"Cwmn_GalkinaLiesQuiet",0.01,"Cwmn_GalkinaLiesDeath",0.01};
		};
		class AmovPercMwlkSnonWnonDfl: AmovPercMwlkSnonWnonDfr
		{
			speed = 0.46875;
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkSnonWnonDfl.rtm";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_1",0.01,"AmovPerc_joggingSlower",0.01,"AmovPercMwlkSnonWnonDf_A",0.01,"AmovPercMwlkSnonWnonDl",0.01};
		};
		class AmovPercMwlkSnonWnonDf_B: AmovPercMwlkSnonWnonDf_A
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\wlk\non\non\AmovPercMwlkSnonWnonDf_B.rtm";
			speed = 0.315789;
			looped = 1;
			duty = 0.05;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMstpSnonWnonDnon_AmovPknlMstpSnonWnon: AmovPercMstpSnonWnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AmovPknlMstpSnonWnon.rtm";
			speed = 0.625;
			looped = 0;
			actions = "WmnKneelAction";
			interpolationRestart = 2;
			soundEnabled = 0;
			ConnectTo[] = {"AmovPknlMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01,"AmovPknlMstpSnonWnonDnon_AmovPercMstpSnonWnon",0.01};
		};
		class AmovPercMstpSnonWnonDnon_AIturn90L: AmovPercMstpSnonWnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AIturn90L.rtm";
			speed = 0.5;
			duty = 0.2;
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPercMstpSnonWnonDnon_AIturn90R: AmovPercMstpSnonWnonDnon_AIturn90L
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\stp\non\non\AmovPercMstpSnonWnonDnon_AIturn90R.rtm";
			ConnectTo[] = {"AmovPercMstpSnonWnonDnon",0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AmovPercMrunSnonWnonDf_panic: AmovPercMrunSnonWnonDf
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\run\non\non\AmovPercMrunSnonWnonDf_panic.rtm";
			speed = 0.348837;
			interpolationSpeed = 6.0;
			duty = 1.0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AmovPercMrunSnonWnonDf",0.0,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AmovPercMrunSnonWnonDf_panicCollapse: AmovPercMrunSnonWnonDf_panic
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\mov\erc\run\non\non\AmovPercMrunSnonWnonDf_panicCollapse.rtm";
			speed = 0.145631;
			duty = 1.0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.01,"AmovPercMrunSnonWnonDf",0.0,"AdthPercMstpSnonWnonDnon_1",0.01};
		};
		class AidlPercMstpSnonWnonDnon_1: AidlPercMstpSnonWnonDnon_2
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\erc\stp\non\non\AidlPercMstpSnonWnonDnon_1.rtm";
			speed = 0.042194;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon_S0",0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AidlPercMstpSnonWnonDnon_panic3: AidlPercMstpSnonWnonDnon_1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\erc\stp\non\non\AidlPercMstpSnonWnonDnon_panic3.rtm";
			speed = 0.109489;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon_panicS0",0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AidlPercMstpSnonWnonDnon_4: AidlPercMstpSnonWnonDnon_2
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\erc\stp\non\non\AidlPercMstpSnonWnonDnon_4.rtm";
			speed = 0.048622;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon_S0",0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AidlPercMstpSnonWnonDnon_panic1: AidlPercMstpSnonWnonDnon_1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\erc\stp\non\non\AidlPercMstpSnonWnonDnon_panic1.rtm";
			speed = 0.137615;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon_panicS0",0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AidlPercMstpSnonWnonDnon_panic2: AidlPercMstpSnonWnonDnon_1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\erc\stp\non\non\AidlPercMstpSnonWnonDnon_panic2.rtm";
			speed = 0.177515;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {"AidlPercMstpSnonWnonDnon_panicS0",0.01};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AdthPercMstpSnonWnonDnon_2",0.01};
		};
		class AidlPercMstpSnonWnonDnon_3greetR: AidlPercMstpSnonWnonDnon_1
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\erc\stp\non\non\AidlPercMstpSnonWnonDnon_3greetR.rtm";
			speed = 0.151515;
			collisionShape = "ca\Anims\Characters\data\Geom\Sdr\Perc_Wnon.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class AdthPercMstpSnonWnonDnon_2: AdthPercMstpSnonWnonDnon_1
		{
			file = "\ca\Anims\Characters\data\Anim\wmn\dth\erc\stp\non\non\AdthPercMstpSnonWnonDnon_2.rtm";
			terminal = 1;
			ConnectTo[] = {"DeadState",1.0};
			InterpolateTo[] = {};
		};
		class AidlPsqtMstpSnonDnon: AinvPsqtMstpSnonDnonS0
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\sqt\stp\non\non\AidlPsqtMstpSnonDnon";
			speed = 0.265487;
			ConnectTo[] = {"AinvPsqtMstpSnonDnonS0",0.02};
			InterpolateTo[] = {"AdthPknlMstpSnonWnonDnon_1",0.01,"AmovPsqtMstpSnonDnon",0.02};
		};
		class AmovPsqtMstpSnonDnon_AmovPercMrunSnonDf_panic: AmovPercMstpSnonWnonDnon
		{
			file = "\Ca\Anims\Characters\data\Anim\wmn\idl\sqt\stp\non\non\AmovPsqtMstpSnonDnon_AmovPercMrunSnonDf_panic";
			speed = 0.47619;
			looped = 0;
			actions = "WmnStandRunAction";
			ConnectTo[] = {"AmovPercMrunSnonWnonDf_panic",0.015,"AmovPercMrunSnonWnonDf_panicCollapse",0.015};
			InterpolateTo[] = {};
		};
	};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"neck1",0.25,"neck",0.25,"LeftShoulder",0.3,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftInHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.3,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightInHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.25,"Spine1",0.1,"Spine2",0.1,"Spine3",0.25};
		aimingPistol[] = {"neck1",0.25,"neck",0.25,"LeftShoulder",0.3,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftInHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.3,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightInHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine",0.25,"Spine1",0.1,"Spine2",0.1,"Spine3",0.25};
		aimingCivil[] = {"neck1",0.25,"neck",0.25};
		aimingLying[] = {"LeftShoulder",0.8,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftInHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.8,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightInHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine2",0.2,"Spine3",0.6};
		aimingLyingPistol[] = {"LeftShoulder",0.8,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftInHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",0.8,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightInHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"Spine2",0.2,"Spine3",0.6};
		legsLyingAiming[] = {"LeftShoulder",0.2,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"LeftInHandRing",0,"LeftHandPinky1",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHandRing1",0,"LeftHandRing2",0,"LeftHandRing3",0,"LeftHandMiddle1",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandIndex1",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandThumb1",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"RightShoulder",0.2,"RightArm",0,"RightArmRoll",0,"RightForeArm",0,"RightForeArmRoll",0,"RightHand",0,"RightInHandRing",0,"RightHandPinky1",0,"RightHandPinky2",0,"RightHandPinky3",0,"RightHandRing1",0,"RightHandRing2",0,"RightHandRing3",0,"RightHandMiddle1",0,"RightHandMiddle2",0,"RightHandMiddle3",0,"RightHandIndex1",0,"RightHandIndex2",0,"RightHandIndex3",0,"RightHandThumb1",0,"RightHandThumb2",0,"RightHandThumb3",0,"Spine2",0.8,"Spine3",0.4,"spine1",1,"pelvis",1,"leftupleg",1,"leftuplegroll",1,"leftleg",1,"leftlegroll",1,"leftfoot",1,"LeftToeBase",1,"rightupleg",1,"rightuplegroll",1,"rightleg",1,"rightlegroll",1,"rightfoot",1,"RightToeBase",1};
		legsLyingAimingPistol[] = {"LeftShoulder",0.2,"LeftArm",0,"LeftArmRoll",0,"LeftForeArm",0,"LeftForeArmRoll",0,"LeftHand",0,"LeftInHandRing",0,"LeftHandPinky1",0,"LeftHandPinky2",0,"LeftHandPinky3",0,"LeftHandRing1",0,"LeftHandRing2",0,"LeftHandRing3",0,"LeftHandMiddle1",0,"LeftHandMiddle2",0,"LeftHandMiddle3",0,"LeftHandIndex1",0,"LeftHandIndex2",0,"LeftHandIndex3",0,"LeftHandThumb1",0,"LeftHandThumb2",0,"LeftHandThumb3",0,"RightShoulder",0.2,"RightArm",0,"RightArmRoll",0,"RightForeArm",0,"RightForeArmRoll",0,"RightHand",0,"RightInHandRing",0,"RightHandPinky1",0,"RightHandPinky2",0,"RightHandPinky3",0,"RightHandRing1",0,"RightHandRing2",0,"RightHandRing3",0,"RightHandMiddle1",0,"RightHandMiddle2",0,"RightHandMiddle3",0,"RightHandIndex1",0,"RightHandIndex2",0,"RightHandIndex3",0,"RightHandThumb1",0,"RightHandThumb2",0,"RightHandThumb3",0,"Spine2",0.8,"Spine3",0.4,"spine1",1,"pelvis",1,"leftupleg",1,"leftuplegroll",1,"leftleg",1,"leftlegroll",1,"leftfoot",1,"LeftToeBase",1,"rightupleg",1,"rightuplegroll",1,"rightleg",1,"rightlegroll",1,"rightfoot",1,"RightToeBase",1};
		headDefault[] = {"head",1,"neck1",0.9,"neck",0.4};
		leaningDefault[] = {"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftInHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightInHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.9,"spine2",0.7,"spine1",0.5};
		aimingUpDefault[] = {"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftInHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightInHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.95,"spine2",0.9,"spine1",0.8,"spine",0.7};
		aimingUpLying[] = {"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftInHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightInHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.9,"spine2",0.7,"spine1",0.5};
		aimingUpPistol[] = {"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftInHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightInHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.9,"spine2",0.7,"spine1",0.5};
		aimingUpCivil[] = {"Head",1,"Neck",1,"Neck1",1,"LeftShoulder",1,"LeftArm",1,"LeftArmRoll",1,"LeftForeArm",1,"LeftForeArmRoll",1,"LeftHand",1,"LeftInHandRing",1,"LeftHandPinky1",1,"LeftHandPinky2",1,"LeftHandPinky3",1,"LeftHandRing1",1,"LeftHandRing2",1,"LeftHandRing3",1,"LeftHandMiddle1",1,"LeftHandMiddle2",1,"LeftHandMiddle3",1,"LeftHandIndex1",1,"LeftHandIndex2",1,"LeftHandIndex3",1,"LeftHandThumb1",1,"LeftHandThumb2",1,"LeftHandThumb3",1,"RightShoulder",1,"RightArm",1,"RightArmRoll",1,"RightForeArm",1,"RightForeArmRoll",1,"RightHand",1,"RightInHandRing",1,"RightHandPinky1",1,"RightHandPinky2",1,"RightHandPinky3",1,"RightHandRing1",1,"RightHandRing2",1,"RightHandRing3",1,"RightHandMiddle1",1,"RightHandMiddle2",1,"RightHandMiddle3",1,"RightHandIndex1",1,"RightHandIndex2",1,"RightHandIndex3",1,"RightHandThumb1",1,"RightHandThumb2",1,"RightHandThumb3",1,"spine3",0.9,"spine2",0.7,"spine1",0.5};
		legsDefault[] = {"LeftUpLeg",0.9,"LeftUpLegRoll",0.9,"LeftLeg",0.95,"LeftLegRoll",0.95,"LeftFoot",1,"LeftToeBase",1,"RightUpLeg",0.9,"RightUpLegRoll",0.9,"RightLeg",0.95,"RightLegRoll",0.95,"RightFoot",1,"RightToeBase",1};
		empty[] = {};
	};
	class ManActions
	{
		released = "";
		Stop = "";
		StopRelaxed = "";
		TurnL = "";
		TurnR = "";
		TurnLRelaxed = "";
		TurnRRelaxed = "";
		ReloadMagazine = "";
		ReloadMGun = "";
		ReloadAT = "";
		ReloadMortar = "";
		ThrowGrenade = "";
		WalkF = "";
		WalkLF = "";
		WalkRF = "";
		WalkL = "";
		WalkR = "";
		WalkLB = "";
		WalkRB = "";
		WalkB = "";
		SlowF = "";
		SlowLF = "";
		SlowRF = "";
		SlowL = "";
		SlowR = "";
		SlowLB = "";
		SlowRB = "";
		SlowB = "";
		FastF = "";
		FastLF = "";
		FastRF = "";
		FastL = "";
		FastR = "";
		FastLB = "";
		FastRB = "";
		FastB = "";
		EvasiveForward = "";
		EvasiveLeft = "";
		EvasiveRight = "";
		EvasiveBack = "";
		StartSwim = "";
		StopSwim = "";
		Down = "";
		Up = "";
		PlayerStand = "";
		PlayerCrouch = "";
		PlayerProne = "";
		Lying = "";
		Stand = "";
		Combat = "";
		Crouch = "";
		CanNotMove = "";
		Civil = "";
		CivilLying = "";
		FireNotPossible = "";
		Die = "";
		WeaponOn = "";
		WeaponOff = "";
		Default = "";
		JumpOff = "";
		StrokeFist = "";
		StrokeGun = "";
		SitDown = "";
		Salute = "";
		SaluteOff = "";
		BinocOn = "";
		BinocOff = "";
		PutDown = "";
		PutDownEnd = "";
		Medic = "";
		Treated = "";
		LadderOnDown = "";
		LadderOnUp = "";
		LadderOff = "";
		LadderOffTop = "";
		LadderOffBottom = "";
		GetInLow = "";
		GetInMedium = "";
		GetInHigh = "";
		GetOutLow = "";
		GetOutMedium = "";
		GetOutHigh = "";
		TakeFlag = "";
		HandGunOn = "";
		gestureAttack = "";
		gestureGo = "";
		gestureGoB = "";
		gestureFreeze = "";
		gesturePoint = "";
		gestureCeaseFire = "";
		gestureCover = "";
		gestureUp = "";
		gestureNo = "";
		gestureYes = "";
		gestureFollow = "";
		gestureAdvance = "";
		gestureHi = "";
		gestureHiB = "";
		gestureHiC = "";
		gestureNod = "";
		healingFinished = "";
		TestDriver = "BasicDriver";
		TestDriverOut = "BasicDriverOut";
		TestGunner = "BasicSittingGunner";
	};
	skeletonName = "WomanSkeleton";
	class Actions
	{
		class NoActions: ManActions
		{
			UpDegree = -1;
			useFastMove = 0;
			limitFast = 5;
			access = 3;
			turnSpeed = 8;
			TestDriverOut = "";
			TestDriver = "";
			TestGunner = "";
		};
		class LadderWmnActions: NoActions
		{
			stop = "LadderCivilStatic";
			default = "LadderCivilStatic";
			ladderOff = "AmovPercMstpSnonWnonDnon";
			ladderOffTop = "LadderCivilUpOff";
			ladderOffBottom = "LadderCivilDownOff";
			down = "LadderCivilDownLoop";
			up = "LadderCivilUpLoop";
			die = "AdthPercMstpSnonWnonDnon_2";
			turnSpeed = 0.1;
		};
		class WmnSwimmingActions: NoActions
		{
			stop = "AswmPercMstpDnon";
			default = "AswmPercMstpDnon";
			stopRelaxed = "AswmPercMstpDnon";
			turnL = "AswmPercMstpDnon";
			turnR = "AswmPercMstpDnon";
			die = "DeadState";
			EvasiveForward = "AswmPercMstpSnonWnonDf";
			walkF = "AswmPercMstpSnonWnonDf";
			walkLF = "AswmPercMstpSnonWnonDf";
			walkRF = "AswmPercMstpSnonWnonDf";
			walkL = "AswmPercMstpDnon";
			walkR = "AswmPercMstpDnon";
			walkLB = "AswmPercMstpDnon";
			walkRB = "AswmPercMstpDnon";
			walkB = "AswmPercMstpDnon";
			slowF = "AswmPercMstpSnonWnonDf";
			slowLF = "AswmPercMstpSnonWnonDf";
			slowRF = "AswmPercMstpSnonWnonDf";
			slowL = "AswmPercMstpDnon";
			slowR = "AswmPercMstpDnon";
			slowLB = "AswmPercMstpDnon";
			slowRB = "AswmPercMstpDnon";
			slowB = "AswmPercMstpDnon";
			fastF = "AswmPercMstpSnonWnonDf";
			fastLF = "AswmPercMstpSnonWnonDf";
			fastRF = "AswmPercMstpSnonWnonDf";
			fastL = "AswmPercMstpDnon";
			fastR = "AswmPercMstpDnon";
			fastLB = "AswmPercMstpDnon";
			fastRB = "AswmPercMstpDnon";
			fastB = "AswmPercMstpDnon";
			stopSwim = "AmovPercMstpSnonWnonDnon";
			upDegree = "ManPosSwimming";
			turnSpeed = 1;
			limitFast = 2.0;
		};
		class DeadActions: NoActions{};
		class CargoActions: NoActions
		{
			Die = "DeadState";
		};
		class WmnStandAction: NoActions
		{
			Updegree = "ManPosNoWeapon";
			Stop = "AmovPercMstpSnonWnonDnon";
			StopRelaxed = "AidlPercMstpSnonWnonDnon_S0";
			Default = "AmovPercMstpSnonWnonDnon";
			WeaponOff = "AmovPercMstpSnonWnonDnon";
			WeaponOn = "AmovPercMstpSnonWnonDnon";
			Stand = "AmovPercMstpSnonWnonDnon";
			PlayerStand = "AmovPercMstpSnonWnonDnon";
			Up = "AmovPercMstpSnonWnonDnon";
			Die = "DeadState";
			TurnL = "AmovPercMstpSnonWnonDnon_AIturn90L";
			TurnLRelaxed = "AmovPercMstpSnonWnonDnon_AIturn90L";
			TurnRRelaxed = "AmovPercMstpSnonWnonDnon_AIturn90R";
			TurnR = "AmovPercMstpSnonWnonDnon_AIturn90R";
			Combat = "AmovPercMrunSnonWnonDf_panicCollapse";
			Crouch = "AmovPsqtMstpSnonDnon";
			PlayerCrouch = "AmovPsqtMstpSnonDnon";
			PlayerProne = "AmovPsqtMstpSnonDnon";
			Lying = "AmovPsqtMstpSnonDnon";
			Civil = "";
			Down = "AmovPsqtMstpSnonDnon";
			CivilLying = "AmovPsqtMstpSnonDnon";
			WalkF = "AmovPercMwlkSnonWnonDf_A";
			SlowF = "AmovPercMwlkSnonWnonDf_A";
			FastF = "AmovPercMrunSnonWnonDf";
			EvasiveForward = "AmovPercMrunSnonWnonDf";
			WalkLF = "AmovPercMwlkSnonWnonDfl";
			SlowLF = "AmovPercMwlkSnonWnonDfl";
			WalkRF = "AmovPercMwlkSnonWnonDfr";
			SlowRF = "AmovPercMwlkSnonWnonDfr";
			FastLF = "AmovPercMwlkSnonWnonDfl";
			EvasiveLeft = "AmovPercMwlkSnonWnonDfl";
			EvasiveRight = "AmovPercMwlkSnonWnonDfr";
			FastRF = "AmovPercMwlkSnonWnonDfr";
			WalkL = "AmovPercMwlkSnonWnonDl";
			SlowL = "AmovPercMwlkSnonWnonDl";
			FastL = "AmovPercMwlkSnonWnonDl";
			WalkR = "AmovPercMwlkSnonWnonDr";
			SlowR = "AmovPercMwlkSnonWnonDr";
			FastR = "AmovPercMwlkSnonWnonDr";
			WalkLB = "AmovPercMwlkSnonWnonDbl";
			SlowLB = "AmovPercMwlkSnonWnonDbl";
			FastLB = "AmovPercMwlkSnonWnonDbl";
			WalkRB = "AmovPercMwlkSnonWnonDbr";
			SlowRB = "AmovPercMwlkSnonWnonDbr";
			FastRB = "AmovPercMwlkSnonWnonDbr";
			WalkB = "AmovPercMwlkSnonWnonDb";
			SlowB = "AmovPercMwlkSnonWnonDb";
			FastB = "AmovPercMwlkSnonWnonDb";
			StartSwim = "AswmPercMstpSnonWnonDf";
			StopSwim = "";
			LadderOnDown = "LadderCivilOn";
			LadderOnUp = "LadderCivilOn";
		};
		class WmnStandAction_old: WmnStandAction
		{
			WalkF = "AmovPercMwlkSoldDf";
			WalkLF = "AmovPercMwlkSoldDfl";
			WalkRF = "AmovPercMwlkSoldDfr";
			WalkL = "AmovPercMwlkSoldDl";
			WalkR = "AmovPercMwlkSoldDr";
			WalkLB = "AmovPercMwlkSoldDbl";
			WalkRB = "AmovPercMwlkSoldDbr";
			WalkB = "AmovPercMwlkSoldDb";
			SlowF = "AmovPercMwlkSoldDf";
			SlowLF = "AmovPercMwlkSoldDfl";
			SlowRF = "AmovPercMwlkSoldDfr";
			SlowL = "AmovPercMwlkSoldDl";
			SlowR = "AmovPercMwlkSoldDr";
			SlowLB = "AmovPercMwlkSoldDbl";
			SlowRB = "AmovPercMwlkSoldDbr";
			SlowB = "AmovPercMwlkSoldDb";
			FastF = "AmovPercMrunSoldDf";
			FastLF = "AmovPercMwlkSoldDfl";
			FastRF = "AmovPercMwlkSoldDr";
			FastL = "AmovPercMwlkSoldDl";
			FastR = "AmovPercMwlkSoldDr";
			FastLB = "AmovPercMwlkSoldDbl";
			FastRB = "AmovPercMwlkSoldDbr";
			FastB = "AmovPercMwlkSoldDb";
			EvasiveLeft = "AmovPercMwlkSoldDfl";
			EvasiveRight = "AmovPercMwlkSoldDfr";
			EvasiveForward = "AmovPercMrunSoldDf";
			TurnL = "AmovPercMstpSoldDnon_AIturn90L";
			StopRelaxed = "AidlPercMstpSoldDnon_S0";
			Stop = "AmovPercMstpSoldDnon";
			TurnR = "AmovPercMstpSoldDnon_AIturn90R";
			TurnLRelaxed = "AmovPercMstpSoldDnon_AIturn90L";
			TurnRRelaxed = "AmovPercMstpSoldDnon_AIturn90R";
		};
		class WmnStandAction_damsel: WmnStandAction
		{
			Stop = "ActsPercMstpSnon_damsel_idle01";
			StopRelaxed = "ActsPercMstpSnon_damsel_idle01";
			Default = "ActsPercMstpSnon_damsel";
		};
		class WmnJoggingIdleAction: WmnStandAction
		{
			turnspeed = 0.1;
		};
		class WmnSqtAction: WmnStandAction
		{
			Stop = "AmovPsqtMstpSnonDnon";
			StopRelaxed = "AinvPsqtMstpSnonDnonS0";
			Default = "AmovPsqtMstpSnonDnon";
			TurnL = "AmovPsqtMstpSnonDnon_turnL";
			TurnR = "AmovPsqtMstpSnonDnon_turnR";
			TurnLRelaxed = "AmovPsqtMstpSnonDnon_turnL";
			TurnRRelaxed = "AmovPsqtMstpSnonDnon_turnR";
		};
		class WmnSitAction: WmnStandAction
		{
			upDegree = -1;
			Stop = "ActsPsitMstp_Stop";
			StopRelaxed = "ActsPsitMstp_Stop";
			Default = "ActsPsitMstp_Stop";
		};
		class WmnStandRunAction: WmnStandAction
		{
			SlowF = "AmovPercMrunSnonWnonDf";
		};
		class WmnKneelAction: WmnStandAction
		{
			Stop = "AmovPknlMstpSnonWnonDnon";
			StopRelaxed = "AmovPknlMstpSnonWnonDnon";
			TurnL = "";
			TurnR = "";
			TurnLRelaxed = "";
			TurnRRelaxed = "";
			WalkF = "AmovPknlMwlkSnonWnonDf";
			SlowF = "AmovPknlMwlkSnonWnonDf";
			FastF = "AmovPknlMwlkSnonWnonDf";
			EvasiveForward = "AmovPknlMwlkSnonWnonDf";
			Up = "AmovPercMstpSnonWnonDnon";
		};
		class WmnProneIdle: WmnStandAction
		{
			Stop = "Cwmn_GalkinaLiesIdle1";
			StopRelaxed = "Cwmn_GalkinaLiesIdle1";
			Default = "Cwmn_GalkinaLiesIdle1";
			Lying = "Cwmn_GalkinaLiesIdle1";
		};
		class WmnLiesNervousAction: WmnStandAction
		{
			Stop = "Cwmn_GalkinaLiesNervousThenRun";
			StopRelaxed = "Cwmn_GalkinaLiesNervousThenRun";
			Stand = "Cwmn_GalkinaLiesNervousThenRun";
			Crouch = "Cwmn_GalkinaLiesNervousThenRun";
			CivilLying = "Cwmn_GalkinaLiesNervousThenRun";
			Default = "Cwmn_GalkinaLiesNervousThenRun";
		};
		class WmnStandAction_happy: WmnStandAction
		{
			Stop = "Cwmn_GalkinaErc_talkHappy1";
			StopRelaxed = "Cwmn_GalkinaErc_talkHappy1";
			Default = "Cwmn_GalkinaErc_talkHappy1";
		};
		class WmnStandAction_happy2: WmnStandAction
		{
			Stop = "Cwmn_GalkinaErc_talkHappy2";
			StopRelaxed = "Cwmn_GalkinaErc_talkHappy2";
			Default = "Cwmn_GalkinaErc_talkHappy2";
		};
		class WmnHenFeeding: WmnStandAction
		{
			StopRelaxed = "ActsPercMstp_HenFeeding1";
			Stop = "ActsPercMstp_HenFeeding1";
			Default = "ActsPercMstp_HenFeeding1";
		};
		class WmnGardenWork: WmnStandAction
		{
			Stop = "ActsPknlMstp_gardenworkIdle";
			StopRelaxed = "ActsPknlMstp_gardenworkIdle";
			Default = "ActsPknlMstp_gardenworkIdle";
		};
	};
};
class CfgMovesSportWomen: CfgMovesWomen
{
	class Actions: Actions
	{
		class WmnStandAction: WmnStandAction
		{
			SlowF = "AmovPerc_joggingSlower";
			WalkF = "AmovPerc_joggingSlower";
		};
		class WmnSqtAction: WmnSqtAction
		{
			WalkF = "AmovPerc_joggingSlower";
			SlowF = "AmovPerc_joggingSlower";
		};
		class WmnSitAction: WmnSitAction
		{
			WalkF = "AmovPerc_joggingSlower";
			SlowF = "AmovPerc_joggingSlower";
		};
		class WmnStandRunAction: WmnStandRunAction
		{
			WalkF = "AmovPerc_joggingSlower";
		};
		class WmnProneIdle: WmnProneIdle
		{
			WalkF = "AmovPerc_joggingSlower";
			SlowF = "AmovPerc_joggingSlower";
		};
		class WmnLiesNervousAction: WmnLiesNervousAction
		{
			SlowF = "AmovPerc_joggingSlower";
			WalkF = "AmovPerc_joggingSlower";
		};
		class WmnStandAction_happy: WmnStandAction_happy
		{
			SlowF = "AmovPerc_joggingSlower";
			WalkF = "AmovPerc_joggingSlower";
		};
		class WmnStandAction_happy2: WmnStandAction_happy2
		{
			SlowF = "AmovPerc_joggingSlower";
			WalkF = "AmovPerc_joggingSlower";
		};
	};
};
class CfgMovesOldWomen: CfgMovesWomen
{
	class Actions: Actions
	{
		class WmnStandAction: WmnStandAction_old
		{
			EvasiveForward = "AmovPercMwlkSnonWnonDf_A";
			FastF = "AmovPercMwlkSnonWnonDf_A";
		};
		class WmnSqtAction: WmnSqtAction
		{
			EvasiveForward = "AmovPercMrunSoldDf";
			FastF = "AmovPercMrunSoldDf";
			PlayerStand = "AmovPercMstpSoldDnon";
			Up = "AmovPercMstpSoldDnon";
			Stand = "AmovPercMstpSoldDnon";
			WalkF = "AmovPercMwlkSoldDf";
			WalkLF = "AmovPercMwlkSoldDfl";
			WalkRF = "AmovPercMwlkSoldDfr";
			WalkL = "AmovPercMwlkSoldDl";
			WalkR = "AmovPercMwlkSoldDr";
			WalkLB = "AmovPercMwlkSoldDbl";
			WalkRB = "AmovPercMwlkSoldDbr";
			WalkB = "AmovPercMwlkSoldDb";
			SlowF = "AmovPercMwlkSoldDf";
			SlowLF = "AmovPercMwlkSoldDfl";
			SlowRF = "AmovPercMwlkSoldDr";
			SlowL = "AmovPercMwlkSoldDl";
			SlowR = "AmovPercMwlkSoldDr";
			SlowLB = "AmovPercMwlkSoldDbl";
			SlowRB = "AmovPercMwlkSoldDbr";
			SlowB = "AmovPercMwlkSoldDb";
			FastLF = "AmovPercMwlkSoldDfl";
			FastRF = "AmovPercMwlkSoldDfr";
			FastL = "AmovPercMwlkSoldDl";
			FastR = "AmovPercMwlkSoldDr";
			FastLB = "AmovPercMwlkSoldDbl";
			FastRB = "AmovPercMwlkSoldDbr";
			FastB = "AmovPercMwlkSoldDb";
			EvasiveLeft = "AmovPercMwlkSoldDfl";
			EvasiveRight = "AmovPercMwlkSoldDfr";
		};
		class WmnSitAction: WmnSitAction
		{
			FastF = "AmovPercMwlkSnonWnonDf_A";
			EvasiveForward = "AmovPercMwlkSnonWnonDf_A";
		};
		class WmnStandRunAction: WmnStandAction{};
		class WmnProneIdle: WmnProneIdle
		{
			FastF = "AmovPercMwlkSnonWnonDf_A";
			EvasiveForward = "AmovPercMwlkSnonWnonDf_A";
		};
		class WmnLiesNervousAction: WmnLiesNervousAction
		{
			EvasiveForward = "AmovPercMwlkSnonWnonDf_A";
			FastF = "AmovPercMwlkSnonWnonDf_A";
		};
		class WmnStandAction_happy: WmnStandAction_happy
		{
			EvasiveForward = "AmovPercMwlkSnonWnonDf_A";
			FastF = "AmovPercMwlkSnonWnonDf_A";
		};
		class WmnStandAction_happy2: WmnStandAction_happy2
		{
			EvasiveForward = "AmovPercMwlkSnonWnonDf_A";
			FastF = "AmovPercMwlkSnonWnonDf_A";
		};
	};
};
//};
