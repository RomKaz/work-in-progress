////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_FasterStepOver\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_FasterStepOver
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class amovpercmstpslowwlnrdnon;
		class AmovPercMstpSlowWpstDnon;
		class AmovPercMstpSlowWrflDnon;
		class AmovPercMstpSnonWnonDnon;
		class amovpercmstpsraswlnrdnon;
		class AmovPercMstpSrasWpstDnon;
		class AmovPercMstpSrasWrflDnon;
		class AovrPercMstpSlowWlnrDf: amovpercmstpslowwlnrdnon
		{
			speed = "1.125 * 0.5";
		};
		class AovrPercMstpSlowWpstDf: AmovPercMstpSlowWpstDnon
		{
			speed = "1.2 * 0.517241";
		};
		class AovrPercMstpSlowWrflDf: AmovPercMstpSlowWrflDnon
		{
			speed = "1.25 * 0.441176";
		};
		class AovrPercMstpSnonWnonDf: AmovPercMstpSnonWnonDnon
		{
			speed = "1.075 * 0.576923";
		};
		class AovrPercMstpSrasWlnrDf: amovpercmstpsraswlnrdnon
		{
			speed = "1.125 * 0.5";
		};
		class AovrPercMstpSrasWpstDf: AmovPercMstpSrasWpstDnon
		{
			speed = "1.2 * 0.517241";
		};
		class AovrPercMstpSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			speed = "1.25 * 0.441176";
		};
	};
};
//};
