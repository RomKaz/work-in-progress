////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:04 2014 : Source 'file' date Fri Oct 31 06:07:04 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class WEAPONS_PMC : as50\config.bin{
class CfgPatches
{
	class CAWeapons_PMC_AS50
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CAWeapons_PMC","CAWeapons_BAF"};
	};
};
class CfgWeapons
{
	class BAF_AS50_scoped;
	class PMC_AS50_scoped: BAF_AS50_scoped
	{
		scope = 2;
		model = "\ca\weapons_pmc\as50\as50_PMC";
		picture = "\CA\weapons_pmc\data\UI\as50_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_ca.paa";
		expansion = 4;
		modelOptics = "\ca\Weapons_pmc\as50\LRR_optic";
	};
	class BAF_AS50_TWS;
	class PMC_AS50_TWS: BAF_AS50_TWS
	{
		scope = 2;
		model = "\ca\weapons_pmc\as50\as50_TWS_PMC";
		picture = "\CA\weapons_pmc\data\UI\as50_tws_ca.paa";
		UiPicture = "\CA\weapons\data\Ico\i_sniper_ca.paa";
		expansion = 4;
	};
};
//};
