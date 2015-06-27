////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:03 2014 : Source 'file' date Fri Oct 31 06:14:03 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Sound_FixedGetInGetOutSoundOfSedan\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Sound_FixedGetInGetOutSoundOfSedan
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class SkodaBase;
	class car_hatchback: SkodaBase
	{
		soundGetIn[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedna-getout-1",0.316228,1};
		soundGetOut[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-getout-2",0.316228,1,30};
	};
	class car_sedan: SkodaBase
	{
		soundGetIn[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedna-getout-1",0.316228,1};
		soundGetOut[] = {"ca\sounds\vehicles\Wheeled\sedan\ext\ext-sedan-getout-2",0.316228,1,30};
	};
};
//};
