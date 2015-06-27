////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:57 2014 : Source 'file' date Fri Oct 31 06:13:57 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : AI_MadeTankGunnersUseATAndHEAmmo\Muzzle\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_AI_MadeTankGunnersUseATAndHEAmmo_Muzzle
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E_AI_MadeTankGunnersUseATAndHEAmmo"};
	};
};
class Mode_FullAuto;
class CfgWeapons
{
	class CannonCore;
	class RocketPods;
	class 2A42_AI: CannonCore
	{
		showToPlayer = 0;
		class LowROF: Mode_FullAuto
		{
			showToPlayer = 0;
		};
	};
	class ATKMK44_ACR_AI: 2A42_AI
	{
		showToPlayer = 0;
	};
	class 2A72_AI: CannonCore
	{
		showToPlayer = 0;
		class manual: CannonCore
		{
			showToPlayer = 0;
		};
	};
	class M242_AI: CannonCore
	{
		showToPlayer = 0;
		class LowROF: Mode_FullAuto
		{
			showToPlayer = 0;
		};
	};
	class M242BC_AI: M242_AI
	{
		showToPlayer = 0;
	};
	class CTWS_AI: CannonCore
	{
		showToPlayer = 0;
		class player: Mode_FullAuto
		{
			showToPlayer = 0;
		};
	};
	class M256_AI: CannonCore
	{
		showToPlayer = 0;
		mainGun = 1;
	};
	class M68_AI: M256_AI
	{
		showToPlayer = 0;
		mainGun = 1;
	};
	class D81_AI: CannonCore
	{
		showToPlayer = 0;
		mainGun = 1;
	};
	class 2A46M_AI: D81_AI
	{
		showToPlayer = 0;
		mainGun = 1;
	};
	class D81CZ_AI: D81_AI
	{
		showToPlayer = 0;
		mainGun = 1;
	};
	class D10_AI: CannonCore
	{
		showToPlayer = 0;
		mainGun = 1;
	};
	class ZiS_S_53_AI: CannonCore
	{
		showToPlayer = 0;
		mainGun = 1;
	};
	class SPG9_AI: RocketPods
	{
		showToPlayer = 0;
		mainGun = 1;
	};
	class 2A42: CannonCore
	{
		muzzles[] = {"this","HE"};
		magazines[] = {"150Rnd_30mmAP_2A42","230Rnd_30mmAP_2A42","250Rnd_30mmAP_2A42","150Rnd_30mmHE_2A42","230Rnd_30mmHE_2A42","250Rnd_30mmHE_2A42"};
		class HE: 2A42_AI
		{
			magazines[] = {"150Rnd_30mmHE_2A42","230Rnd_30mmHE_2A42","250Rnd_30mmHE_2A42"};
		};
	};
	class ATKMK44_ACR: 2A42
	{
		muzzles[] = {"this","HE"};
		magazines[] = {"60Rnd_30mm_ATKMK44_AP_ACR","140Rnd_30mm_ATKMK44_HE_ACR"};
		class HE: ATKMK44_ACR_AI
		{
			magazines[] = {"140Rnd_30mm_ATKMK44_HE_ACR"};
		};
	};
	class 2A72: CannonCore
	{
		muzzles[] = {"this","HE"};
		magazines[] = {"250Rnd_30mmAP_2A72","250Rnd_30mmHE_2A72"};
		class HE: 2A72_AI
		{
			magazines[] = {"250Rnd_30mmHE_2A72"};
		};
	};
	class M242: CannonCore
	{
		muzzles[] = {"this","HE"};
		magazines[] = {"210Rnd_25mm_M242_APDS","210Rnd_25mm_M242_HEI"};
		class HE: M242_AI
		{
			magazines[] = {"210Rnd_25mm_M242_HEI"};
		};
	};
	class M242BC: M242
	{
		muzzles[] = {"this","HE"};
		magazines[] = {"210Rnd_25mm_M242_APDS","210Rnd_25mm_M242_HEI"};
		class HE: M242BC_AI
		{
			magazines[] = {"210Rnd_25mm_M242_HEI"};
		};
	};
	class CTWS: CannonCore
	{
		muzzles[] = {"this","HE"};
		magazines[] = {"200Rnd_40mmSABOT_FV510","200Rnd_40mmHE_FV510"};
		class HE: CTWS_AI
		{
			magazines[] = {"200Rnd_40mmHE_FV510"};
		};
	};
	class M256: CannonCore
	{
		muzzles[] = {"this","HE"};
		magazines[] = {"20Rnd_120mmSABOT_M1A2","20Rnd_120mmHE_M1A2"};
		class HE: M256_AI
		{
			magazines[] = {"20Rnd_120mmHE_M1A2"};
		};
		mainGun = 1;
	};
	class M68: M256
	{
		muzzles[] = {"this","HE"};
		magazines[] = {"6RND_105mm_APDS","12Rnd_105mm_HESH"};
		class HE: M68_AI
		{
			magazines[] = {"12Rnd_105mm_HESH"};
		};
		mainGun = 1;
	};
	class D81: CannonCore
	{
		muzzles[] = {"this","HE"};
		magazines[] = {"23Rnd_125mmSABOT_T72","22Rnd_125mmHE_T72"};
		class HE: D81_AI
		{
			magazines[] = {"22Rnd_125mmHE_T72"};
		};
		mainGun = 1;
	};
	class 2A46M: D81
	{
		muzzles[] = {"this","HE"};
		magazines[] = {"23Rnd_125mmSABOT_T72","22Rnd_125mmHE_T72"};
		class HE: 2A46M_AI
		{
			magazines[] = {"22Rnd_125mmHE_T72"};
		};
		mainGun = 1;
	};
	class D81CZ: D81
	{
		muzzles[] = {"this","HE"};
		magazines[] = {"22Rnd_125mmSABOT_IMI","15Rnd_125mmHE_T72CZ"};
		class HE: D81CZ_AI
		{
			magazines[] = {"15Rnd_125mmHE_T72CZ"};
		};
		mainGun = 1;
	};
	class ZiS_S_53: CannonCore
	{
		muzzles[] = {"this","HE"};
		magazines[] = {"10Rnd_85mmAP","33Rnd_85mmHE"};
		class HE: ZiS_S_53_AI
		{
			magazines[] = {"33Rnd_85mmHE"};
		};
		mainGun = 1;
	};
	class D10: CannonCore
	{
		muzzles[] = {"this","HE"};
		magazines[] = {"21Rnd_100mmHEAT_D10","22Rnd_100mm_HE_2A70","8Rnd_AT10_BMP3"};
		class HE: D10_AI
		{
			magazines[] = {"22Rnd_100mm_HE_2A70"};
		};
		mainGun = 1;
	};
	class SPG9: RocketPods
	{
		muzzles[] = {"this","HE"};
		magazines[] = {"PG9_AT","OG9_HE"};
		class HE: SPG9_AI
		{
			magazines[] = {"OG9_HE"};
		};
		mainGun = 1;
	};
};
class DefaultEventhandlers;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class Eventhandlers: DefaultEventhandlers
		{
			init = "_scr = _this execVM '\ca\Data\ParticleEffects\SCRIPTS\init.sqf'; _this call compile preprocessFileLineNumbers '\ca\communityconfigurationproject_e\ai_madetankgunnersuseatandheammo\muzzle\init.sqf';";
			fired = "_this call BIS_Effects_EH_Fired; _this call BIS_CPP_Muzzle_ForceReload;";
		};
	};
	class Tank: LandVehicle
	{
		class Eventhandlers: DefaultEventhandlers
		{
			init = "_scr = _this execVM '\ca\Data\ParticleEffects\SCRIPTS\init.sqf'; _this call compile preprocessFileLineNumbers '\ca\communityconfigurationproject_e\ai_madetankgunnersuseatandheammo\muzzle\init.sqf';";
			fired = "_this call BIS_Effects_EH_Fired; _this call BIS_CPP_Muzzle_ForceReload;";
		};
	};
};
//};
