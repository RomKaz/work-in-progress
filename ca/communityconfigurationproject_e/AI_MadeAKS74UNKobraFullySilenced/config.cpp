////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:13:56 2014 : Source 'file' date Fri Oct 31 06:13:56 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : AI_MadeAKS74UNKobraFullySilenced\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_AI_MadeAKS74UNKobraFullySilenced
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class Burst;
class CfgWeapons
{
	class AKS_BASE;
	class AKS_74_UN_kobra: AKS_BASE
	{
		fireLightDuration = 0;
		fireLightIntensity = 0;
		class Burst: Burst
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
			begin1[] = {"ca\sounds\weapons\rifles\rifle-silence-single1",1.77828,1,50};
			soundBegin[] = {"begin1",1};
		};
	};
};
//};
