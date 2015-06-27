////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:56 2014 : Source 'file' date Fri Oct 31 06:13:56 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : AI_MadeTankGunnersUseATAndHEAmmo\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_AI_MadeTankGunnersUseATAndHEAmmo
	{
		units[] = {};
		weapons[] = {"2A42_AI","ATKMK44_ACR_AI","2A72_AI","M242_AI","M242BC_AI","CTWS_AI","M256_AI","M68_AI","D81_AI","2A46M_AI","D81CZ_AI","D10_AI","ZiS_S_53_AI","SPG9_AI"};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class Mode_FullAuto;
class CfgWeapons
{
	class CannonCore;
	class RocketPods;
	class 2A42_AI: CannonCore
	{
		scope = 1;
		displayName = "2A42";
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
			reloadTime = 0.2;
			sound[] = {"\Ca\sounds\Weapons\cannon\242_single",10,1,1400};
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
			displayName = "300 rpm";
		};
		class HighROF: LowROF
		{
			reloadTime = 0.1;
			sound[] = {"\Ca\sounds\Weapons\cannon\242_single",10,1,1400};
			soundContinuous = 0;
			minRange = 1;
			minRangeProbab = 0.08;
			midRange = 2;
			midRangeProbab = 0.058;
			maxRange = 3;
			maxRangeProbab = 0.004;
			displayName = "600 rpm";
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
	class ATKMK44_ACR_AI: 2A42_AI
	{
		displayName = "30mm ATK Mk44";
		magazines[] = {"140Rnd_30mm_ATKMK44_HE_ACR","60Rnd_30mm_ATKMK44_AP_ACR"};
		ballisticsComputer = 1;
		cursor = "Vehicle_W_MG";
		class LowROF: LowROF
		{
			reloadTime = 0.3;
			displayName = "Low RPM";
		};
		class HighROF: HighROF
		{
			reloadTime = 0.15;
			displayName = "High RPM";
		};
	};
	class 2A72_AI: CannonCore
	{
		scope = 2;
		displayName = "2A72 30mm";
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
			displayName = "2A72 30mm";
			autoFire = 1;
			sound[] = {"\Ca\sounds\Weapons\cannon\242_single",10,1,1200};
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
	class M242_AI: CannonCore
	{
		scope = 1;
		displayName = "M242";
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
		aiRateOfFire = 1;
		aiRateOfFireDistance = 1000;
		magazines[] = {"210Rnd_25mm_M242_HEI","210Rnd_25mm_M242_APDS"};
		class LowROF: Mode_FullAuto
		{
			displayName = "M242 (100 rpm)";
			reloadTime = 0.6;
			sound[] = {"\Ca\sounds\Weapons\cannon\242_single",10,1,1200};
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
			reloadTime = 0.3;
			minRange = 1;
			minRangeProbab = 0.08;
			midRange = 2;
			midRangeProbab = 0.058;
			maxRange = 3;
			maxRangeProbab = 0.004;
			displayname = "";
		};
		class close: HighROF
		{
			showToPlayer = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			burst = 4;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 50;
		};
		class short: close
		{
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
			burst = 3;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 300;
		};
		class medium: LowROF
		{
			showToPlayer = 0;
			soundBurst = 0;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
			burst = 3;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 600;
		};
		class far: medium
		{
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
			burst = 2;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 1000;
		};
	};
	class M242BC_AI: M242_AI
	{
		ballisticsComputer = 1;
		canLock = 2;
	};
	class CTWS_AI: CannonCore
	{
		scope = 1;
		displayName = "CTWS";
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		nameSound = "cannon";
		soundContinuous = 0;
		magazines[] = {"200Rnd_40mmHE_FV510","200Rnd_40mmSABOT_FV510"};
		minRange = 5;
		minRangeProbab = 0.7;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 2500;
		maxRangeProbab = 0.1;
		reloadTime = 0.3;
		aiRateOfFire = 0.6;
		aiRateOfFireDistance = 500;
		magazineReloadTime = 2;
		autoReload = 1;
		ballisticsComputer = 1;
		canLock = 2;
		autoFire = 1;
		modes[] = {"player"};
		class player: Mode_FullAuto
		{
			begin1[] = {"\ca\Sounds_baf\weapons\40mm_1",17.7828,1,1500};
			soundBegin[] = {"begin1",1};
			soundContinuous = 0;
			reloadTime = 0.3;
			magazineReloadTime = 2;
			autoReload = 1;
			ballisticsComputer = 1;
			canLock = 2;
			autoFire = 1;
		};
		class close: player
		{
			showToPlayer = 0;
			soundBurst = 1;
			burst = 15;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
		};
		class short: close
		{
			showToPlayer = 0;
			burst = 10;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: short
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
	class M256_AI: CannonCore
	{
		scope = 1;
		displayName = "M256";
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		nameSound = "cannon";
		sound[] = {"\ca\Sounds\weapons\cannon\gun120",316.228,1,1500};
		reloadSound[] = {"\ca\Sounds\weapons\cannon\gun120reload",1,1,20};
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
		weaponLockSystem = 4;
	};
	class M68_AI: M256_AI
	{
		displayName = "M68";
		magazines[] = {"6RND_105mm_APDS","12Rnd_105mm_HESH"};
	};
	class D81_AI: CannonCore
	{
		scope = 1;
		displayName = "D-81";
		nameSound = "cannon";
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		sound[] = {"\ca\Sounds\weapons\cannon\gun125",316.228,1,1700};
		reloadSound[] = {"\ca\Sounds\weapons\cannon\gun125reload",1,1,20};
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
		weaponLockSystem = 4;
	};
	class 2A46M_AI: D81_AI
	{
		displayName = "2A46M Cannon";
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
	class D81CZ_AI: D81_AI
	{
		magazines[] = {"22Rnd_125mmSABOT_IMI","15Rnd_125mmHE_T72CZ"};
	};
	class D10_AI: CannonCore
	{
		scope = 1;
		displayName = "D-30";
		nameSound = "cannon";
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		sound[] = {"\ca\Sounds\weapons\cannon\gun120",316.228,1,1500};
		reloadSound[] = {"\ca\Sounds\weapons\cannon\gun120reload",1,1,20};
		magazines[] = {"21Rnd_100mmHEAT_D10","22Rnd_100mm_HE_2A70","8Rnd_AT10_BMP3"};
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
	class ZiS_S_53_AI: CannonCore
	{
		scope = 1;
		displayName = "ZiS-S-53";
		nameSound = "cannon";
		cursor = "Cannon";
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 1;
		sound[] = {"\ca\Sounds\weapons\cannon\gun73",31.6228,1,1700};
		reloadSound[] = {"\ca\Sounds\weapons\cannon\gun73reload",1,1,20};
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
	class SPG9_AI: RocketPods
	{
		scope = 2;
		displayName = "SPG-9";
		type = 65536;
		modelOptics = "";
		magazines[] = {"PG9_AT","OG9_HE"};
		sound[] = {"\ca\Sounds\weapons\cannon\RocketLauncher_Shot04_A",10,1,1100};
		drySound[] = {"\ca\Sounds\weapons\cannon\Javelin_dry_v1",0.0001,1,10};
		reloadMagazineSound[] = {"\ca\Sounds\weapons\cannon\flare_reload",0.000316228,1,20};
		soundFly[] = {"\ca\Sounds\weapons\cannon\rocket_fly1",10,1.5,700};
		recoil = "launcherBase";
		reloadTime = 3;
		aiRateOfFire = 10;
		aiRateOfFireDistance = 450;
		minRange = 50;
		midRange = 450;
		maxRange = 800;
		cursorAim = "\ca\Weapons\Data\clear_empty";
		cursor = "Rocket";
		cursorSize = 1;
	};
};
//};
