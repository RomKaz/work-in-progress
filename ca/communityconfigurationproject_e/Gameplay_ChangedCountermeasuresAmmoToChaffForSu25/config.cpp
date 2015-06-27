////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_ChangedCountermeasuresAmmoToChaffForSu25\config.bin{
class CfgPatches
{
	class CA_CommunityConfigurationProject_Gameplay_ChangedCountermeasuresAmmoToChaffForSu25
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class Plane;
	class Su25_base: Plane
	{
		magazines[] = {"180Rnd_30mm_GSh301","4Rnd_FAB_250","2Rnd_R73","80Rnd_S8T","120Rnd_CMFlare_Chaff_Magazine"};
	};
	class Su39: Su25_base
	{
		magazines[] = {"180Rnd_30mm_GSh301","4Rnd_Ch29","2Rnd_R73","80Rnd_S8T","120Rnd_CMFlare_Chaff_Magazine"};
	};
};
//};
