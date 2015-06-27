////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_DisabledLockingForAllNonGuidedWeaponsWithAutoGuideATDisabled\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_DisabledLockingForAllNonGuidedWeaponsWithAutoGuideATDisabled
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class Mode_FullAuto;
class CfgWeapons
{
	class CannonCore;
	class Default;
	class Launcher;
	class LauncherCore;
	class M2;
	class MGun;
	class MetisLauncher: Launcher
	{
		canLock = 1;
	};
	class M47Launcher_EP1: Launcher
	{
		canLock = 1;
	};
	class YakB: MGun
	{
		canLock = 1;
	};
	class M3P: M2
	{
		canLock = 1;
	};
	class M168: CannonCore
	{
		canLock = 1;
	};
	class M197: CannonCore
	{
		canLock = 1;
	};
	class AZP85: CannonCore
	{
		canLock = 1;
	};
	class 2A14: CannonCore
	{
		canLock = 1;
	};
	class GAU12: CannonCore
	{
		canLock = 1;
	};
	class 2A42: CannonCore
	{
		canLock = 1;
	};
	class 2A72: CannonCore
	{
		canLock = 1;
	};
	class M242: CannonCore
	{
		canLock = 1;
	};
	class M242BC: M242
	{
		canLock = 1;
	};
	class GSh23L: CannonCore
	{
		canLock = 1;
	};
	class GSh302: CannonCore
	{
		canLock = 1;
	};
	class GAU8: CannonCore
	{
		canLock = 1;
	};
	class 2A38M: CannonCore
	{
		canLock = 1;
	};
	class GSh301: CannonCore
	{
		canLock = 1;
	};
	class M230: CannonCore
	{
		canLock = 1;
	};
	class CTWS: CannonCore
	{
		canLock = 1;
		class player: Mode_FullAuto
		{
			canLock = 1;
		};
	};
	class M256: CannonCore
	{
		canLock = 1;
	};
	class D81: CannonCore
	{
		canLock = 1;
	};
	class ZiS_S_53: CannonCore
	{
		canLock = 1;
	};
	class RocketPods: LauncherCore
	{
		canLock = 1;
	};
	class BombLauncher: RocketPods
	{
		canLock = 2;
	};
	class HeliBombLauncher: RocketPods
	{
		canLock = 1;
	};
	class AirBombLauncher: HeliBombLauncher
	{
		canLock = 2;
	};
	class Mk82BombLauncher: RocketPods
	{
		canLock = 2;
	};
};
//};
