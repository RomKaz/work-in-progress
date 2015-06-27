////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_FasterHandGrenadeThrowWithPistol\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_FasterHandGrenadeThrowWithPistol
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgMovesBasic
{
	class Default;
	class StandBase;
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AwopPercMstpSgthWpstDnon_Part1: Default
		{
			speed = 1.75;
		};
		class AwopPercMstpSgthWpstDnon_Part2: AwopPercMstpSgthWpstDnon_Part1
		{
			speed = 0.725;
		};
		class AwopPercMstpSgthWpstDnon_Part3: AwopPercMstpSgthWpstDnon_Part2{};
		class AwopPercMstpSgthWpstDnon_Part4: AwopPercMstpSgthWpstDnon_Part3
		{
			speed = 0.75;
		};
		class AwopPercMstpSgthWpstDnon_Part5: AwopPercMstpSgthWpstDnon_Part4{};
		class AwopPknlMstpSgthWpstDnon_Part1: Default
		{
			speed = 1.75;
		};
		class AwopPknlMstpSgthWpstDnon_Part2: AwopPknlMstpSgthWpstDnon_Part1
		{
			speed = 0.725;
		};
		class AwopPknlMstpSgthWpstDnon_Part3: AwopPknlMstpSgthWpstDnon_Part2{};
		class AwopPknlMstpSgthWpstDnon_Part4: AwopPknlMstpSgthWpstDnon_Part3{};
		class AwopPknlMstpSgthWpstDnon_Part5: AwopPknlMstpSgthWpstDnon_Part4{};
		class AwopPpneMstpSgthWpstDnon_Part1: Default
		{
			speed = 1.25;
		};
		class AwopPpneMstpSgthWpstDnon_Part2: AwopPpneMstpSgthWpstDnon_Part1
		{
			speed = 0.725;
		};
		class AwopPpneMstpSgthWpstDnon_Part3: AwopPpneMstpSgthWpstDnon_Part2{};
		class AwopPpneMstpSgthWpstDnon_Part4: AwopPpneMstpSgthWpstDnon_Part3
		{
			speed = 0.95;
		};
		class AwopPpneMstpSgthWpstDnon_Part5: AwopPpneMstpSgthWpstDnon_Part4{};
		class AwopPercMstpSgthWnonDnon_start: Default{};
		class AwopPercMstpSgthWnonDnon_throw: AwopPercMstpSgthWnonDnon_start{};
		class AwopPercMstpSgthWnonDnon_end: AwopPercMstpSgthWnonDnon_throw{};
	};
};
//};
