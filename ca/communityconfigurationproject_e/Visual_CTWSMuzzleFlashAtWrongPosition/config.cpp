////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:04 2014 : Source 'file' date Fri Oct 31 06:14:04 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Visual_CTWSMuzzleFlashAtWrongPosition\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Visual_CTWSMuzzleFlashAtWrongPosition
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgWeapons
{
	class CannonCore;
	class CTWS: CannonCore
	{
		shotFromTurret = 1;
	};
};
//};
