////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:02:17 2014 : Source 'file' date Fri Oct 31 06:02:17 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=4
enum {
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0
};

//Class characters_d_baf : heads\config.bin{
class CfgPatches
{
	class CACharacters_BAF_Head
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CA_Heads","CACharacters","CACharacters_E_Head","CACharacters_BAF"};
	};
};
class CfgHeads
{
	class Cooper;
	class BlackHead;
	class BlackHead_BAF: BlackHead
	{
		expansion = 2;
		model = "\ca\characters_d_baf\Heads\BlackHead_baf\BlackHead_baf";
	};
};
//};
