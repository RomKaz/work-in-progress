////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_CorrectedInfantryMovementSpeed\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Gameplay_CorrectedInfantryMovementSpeed
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
		class AmovPknlMstpSrasWlnrDnon;
		class AmovPercMrunSrasWrflDf;
		class AmovPercMrunSnonWnonDfl;
		class AmovPknlMwlkSrasWrflDf;
		class AmovPknlMstpSrasWrflDnon;
		class AmovPknlMrunSrasWrflDfl;
		class AmovPknlMwlkSrasWpstDf;
		class AmovPercMstpSrasWpstDnon;
		class AmovPknlMwlkSrasWlnrDf;
		class AmovPknlMrunSnonWnonDf;
		class AmovPknlMrunSnonWbinDf_rfl;
		class AmovPknlMwlkSoptWbinDf_lnr;
		class AmovPpneMstpSrasWrflDnon;
		class AmovPpneMstpSnonWnonDnon;
		class AmovPpneMstpSrasWpstDnon;
		class AwopPpneMstpSoptWbinDnon_rfl;
		class AmovPpneMwlkSoptWbinDf_pst;
		class AmovPknlMwlkSoptWbinDf_pst;
		class AmovPpneMwlkSoptWbinDf_lnr;
		class AmovPknlMwlkSnonWnonDf;
		class AmovPpneMwlkSoptWbinDf_non;
		class AmovPercMwlkSlowWrflDf;
		class amovpercmstpsraswlnrdnon;
		class SprintBaseDfl;
		class SprintBaseDfr;
		class SprintBaseDf;
		class SprintCivilBaseDf;
		class SprintCivilBaseDfr;
		class SprintCivilBaseDfl;
		class AmovPercMstpSrasWrflDnon;
		class AmovPercMrunSlowWpstDnon_transition;
		class AmovPercMrunSlowWlnrDf: AmovPknlMstpSrasWlnrDnon{};
		class AmovPknlMrunSrasWlnrDf: AmovPercMrunSlowWlnrDf{};
		class AmovPercMrunSlowWlnrDfl: AmovPercMrunSlowWlnrDf{};
		class AmovPknlMrunSrasWlnrDfl: AmovPercMrunSlowWlnrDf
		{
			speed = "0.857843 * 0.75";
		};
		class AmovPercMrunSlowWlnrDl: AmovPercMrunSlowWlnrDf{};
		class AmovPknlMrunSrasWlnrDl: AmovPercMrunSlowWlnrDl
		{
			speed = "0.71 * 0.75";
		};
		class AmovPercMrunSlowWlnrDbl: AmovPercMrunSlowWlnrDf{};
		class AmovPknlMrunSrasWlnrDbl: AmovPercMrunSlowWlnrDbl{};
		class AmovPercMrunSlowWlnrDb: AmovPercMrunSlowWlnrDf{};
		class AmovPknlMrunSrasWlnrDb: AmovPercMrunSlowWlnrDb{};
		class AmovPercMrunSlowWlnrDbr: AmovPercMrunSlowWlnrDf{};
		class AmovPknlMrunSrasWlnrDbr: AmovPercMrunSlowWlnrDbr{};
		class AmovPercMrunSlowWlnrDr: AmovPercMrunSlowWlnrDf{};
		class AmovPknlMrunSrasWlnrDr: AmovPercMrunSlowWlnrDr{};
		class AmovPercMrunSlowWlnrDfr: AmovPercMrunSlowWlnrDf{};
		class AmovPknlMrunSrasWlnrDfr: AmovPercMrunSlowWlnrDfr{};
		class AmovPercMevaSlowWlnrDf: AmovPercMrunSlowWlnrDf
		{
			speed = 0.65;
		};
		class AmovPercMrunSrasWlnrDf: AmovPercMrunSlowWlnrDf
		{
			speed = 0.65;
		};
		class AmovPercMrunSrasWlnrDfl: AmovPercMrunSlowWlnrDfl
		{
			speed = 0.665;
		};
		class AmovPercMrunSrasWlnrDl: AmovPercMrunSlowWlnrDl
		{
			speed = 0.585;
		};
		class AmovPercMrunSrasWlnrDbl: AmovPercMrunSlowWlnrDbl{};
		class AmovPercMrunSrasWlnrDb: AmovPercMrunSlowWlnrDb{};
		class AmovPercMrunSrasWlnrDbr: AmovPercMrunSlowWlnrDbr{};
		class AmovPercMrunSrasWlnrDr: AmovPercMrunSlowWlnrDr
		{
			speed = 0.66;
		};
		class AmovPercMrunSrasWlnrDfr: AmovPercMrunSlowWlnrDfr
		{
			speed = 0.66;
		};
		class AmovPercMwlkSlowWrflDr: AmovPercMwlkSlowWrflDf
		{
			speed = 0.5823;
		};
		class AmovPercMwlkSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			speed = 1.62;
		};
		class AmovPercMwlkSrasWrflDfl: AmovPercMwlkSrasWrflDf
		{
			speed = 1.2825;
		};
		class AmovPercMwlkSrasWrflDl: AmovPercMwlkSrasWrflDf
		{
			speed = 1.06;
		};
		class AmovPercMwlkSrasWrflDbr: AmovPercMwlkSrasWrflDf
		{
			speed = 0.85;
		};
		class AmovPercMwlkSrasWrflDr: AmovPercMwlkSrasWrflDf
		{
			speed = 1.06525;
		};
		class AmovPercMwlkSrasWrflDfr: AmovPercMwlkSrasWrflDf
		{
			speed = 1.206;
		};
		class AmovPercMrunSrasWrflDfl: AmovPercMrunSrasWrflDf
		{
			speed = "0.720771 * 0.9";
		};
		class AmovPercMrunSrasWrflDl: AmovPercMrunSrasWrflDfl
		{
			speed = "0.70 * 0.9";
		};
		class AmovPercMrunSrasWrflDr: AmovPercMrunSrasWrflDfl
		{
			speed = "0.862143 * 0.9";
		};
		class AmovPercMrunSrasWrflDfr: AmovPercMrunSrasWrflDfl
		{
			speed = "0.721771 * 0.9";
		};
		class AmovPercMrunSnonWnonDl: AmovPercMrunSnonWnonDfl
		{
			speed = 0.58;
		};
		class AmovPercMrunSnonWnonDbl: AmovPercMrunSnonWnonDl
		{
			speed = 0.76;
		};
		class AmovPercMrunSnonWnonDb: AmovPercMrunSnonWnonDl
		{
			speed = 0.76;
		};
		class AmovPercMrunSnonWnonDbr: AmovPercMrunSnonWnonDl
		{
			speed = 0.76;
		};
		class AmovPercMrunSnonWnonDr: AmovPercMrunSnonWnonDl
		{
			speed = 0.67;
		};
		class AmovPknlMwlkSrasWrflDfl: AmovPknlMwlkSrasWrflDf
		{
			speed = 0.957;
		};
		class AmovPknlMwlkSrasWrflDl: AmovPknlMwlkSrasWrflDf
		{
			speed = 0.95;
		};
		class AmovPknlMwlkSrasWrflDr: AmovPknlMwlkSrasWrflDf
		{
			speed = 0.8725;
		};
		class AmovPknlMwlkSrasWrflDfr: AmovPknlMwlkSrasWrflDf
		{
			speed = 0.9425;
		};
		class AmovPknlMrunSrasWrflDf: AmovPknlMstpSrasWrflDnon
		{
			speed = "0.827 * 0.88";
		};
		class AmovPknlMrunSrasWrflDl: AmovPknlMrunSrasWrflDfl
		{
			speed = "0.715 * 0.88";
		};
		class AmovPknlMrunSrasWrflDr: AmovPknlMrunSrasWrflDfl
		{
			speed = "0.858043 * 0.88";
		};
		class AmovPercMwlkSrasWpstDf: AmovPercMstpSrasWpstDnon
		{
			speed = 0.833143;
		};
		class AmovPercMwlkSrasWpstDfl: AmovPercMwlkSrasWpstDf
		{
			speed = 0.515;
		};
		class AmovPercMwlkSrasWpstDr: AmovPercMwlkSrasWpstDf
		{
			speed = 0.523316;
		};
		class AmovPercMwlkSrasWpstDfr: AmovPercMwlkSrasWpstDf
		{
			speed = 0.5205;
		};
		class AmovPercMrunSrasWpstDf: AmovPercMstpSrasWpstDnon
		{
			speed = 1.105;
		};
		class AmovPercMrunSrasWpstDfl: AmovPercMrunSrasWpstDf
		{
			speed = 0.675;
		};
		class AmovPercMrunSrasWpstDl: AmovPercMrunSrasWpstDf
		{
			speed = 0.5805;
		};
		class AmovPercMrunSrasWpstDbl: AmovPercMrunSrasWpstDf
		{
			speed = 0.76;
		};
		class AmovPercMrunSrasWpstDb: AmovPercMrunSrasWpstDf
		{
			speed = 0.76;
		};
		class AmovPercMrunSrasWpstDbr: AmovPercMrunSrasWpstDf
		{
			speed = 0.76;
		};
		class AmovPercMrunSrasWpstDr: AmovPercMrunSrasWpstDf
		{
			speed = 0.68;
		};
		class AmovPknlMwlkSrasWpstDfl: AmovPknlMwlkSrasWpstDf
		{
			speed = 0.81;
		};
		class AmovPknlMwlkSrasWpstDl: AmovPknlMwlkSrasWpstDf
		{
			speed = 1.07;
		};
		class AmovPknlMwlkSrasWpstDbl: AmovPknlMwlkSrasWpstDf
		{
			speed = 0.89;
		};
		class AmovPknlMwlkSrasWpstDr: AmovPknlMwlkSrasWpstDf
		{
			speed = 1.105;
		};
		class AmovPknlMwlkSrasWpstDfr: AmovPknlMwlkSrasWpstDf
		{
			speed = 1.1;
		};
		class AmovPknlMrunSrasWpstDf: AmovPercMrunSlowWpstDnon_transition
		{
			speed = 0.721667;
		};
		class AmovPknlMrunSrasWpstDfl: AmovPknlMrunSrasWpstDf
		{
			speed = 0.721767;
		};
		class AmovPknlMrunSrasWpstDfr: AmovPknlMrunSrasWpstDf
		{
			speed = 0.721567;
		};
		class AmovPknlMrunSrasWpstDr: AmovPknlMrunSrasWpstDf
		{
			speed = 0.695;
		};
		class AmovPknlMwlkSrasWlnrDfl: AmovPknlMwlkSrasWlnrDf
		{
			speed = 0.87;
		};
		class AmovPknlMwlkSrasWlnrDl: AmovPknlMwlkSrasWlnrDf
		{
			speed = 0.805;
		};
		class AmovPknlMwlkSrasWlnrDr: AmovPknlMwlkSrasWlnrDf
		{
			speed = 0.8;
		};
		class AmovPknlMwlkSrasWlnrDfr: AmovPknlMwlkSrasWlnrDf
		{
			speed = 0.845;
		};
		class AmovPknlMwlkSnonWnonDl: AmovPknlMwlkSnonWnonDf
		{
			speed = 0.33;
		};
		class AmovPknlMrunSnonWnonDr: AmovPknlMrunSnonWnonDf
		{
			speed = 0.695;
		};
		class AmovPpneMrunSlowWrflDf: AmovPpneMstpSrasWrflDnon{};
		class AmovPpneMrunSlowWrflDfl: AmovPpneMrunSlowWrflDf
		{
			speed = 0.73;
		};
		class AmovPpneMrunSlowWrflDl: AmovPpneMrunSlowWrflDf{};
		class AmovPpneMrunSlowWrflDbl: AmovPpneMrunSlowWrflDf{};
		class AmovPpneMrunSlowWrflDb: AmovPpneMrunSlowWrflDf{};
		class AmovPpneMrunSlowWrflDbr: AmovPpneMrunSlowWrflDf{};
		class AmovPpneMrunSlowWrflDr: AmovPpneMrunSlowWrflDf{};
		class AmovPpneMrunSlowWrflDfr: AmovPpneMrunSlowWrflDf
		{
			speed = 0.53;
		};
		class AmovPpneMsprSlowWrflDf: AmovPpneMrunSlowWrflDf
		{
			speed = 1;
		};
		class AmovPpneMsprSlowWrflDbl: AmovPpneMsprSlowWrflDf
		{
			speed = 1.1;
		};
		class AmovPpneMsprSlowWrflDl: AmovPpneMsprSlowWrflDf
		{
			speed = 0.95;
		};
		class AmovPpneMsprSlowWrflDr: AmovPpneMsprSlowWrflDf
		{
			speed = 1.16;
		};
		class AmovPpneMsprSlowWrflDbr: AmovPpneMsprSlowWrflDf
		{
			speed = 1.05;
		};
		class AmovPpneMsprSlowWrflDb: AmovPpneMsprSlowWrflDf
		{
			speed = 0.73;
		};
		class AmovPpneMsprSlowWrflDfl: AmovPpneMsprSlowWrflDf
		{
			speed = 0.915;
		};
		class AmovPpneMsprSlowWrflDfr: AmovPpneMsprSlowWrflDf
		{
			speed = 0.68;
		};
		class AmovPpneMrunSlowWpstDf: AmovPpneMstpSrasWpstDnon
		{
			speed = 0.85;
		};
		class AmovPpneMrunSlowWpstDfl: AmovPpneMrunSlowWpstDf
		{
			speed = 0.73;
		};
		class AmovPpneMrunSlowWpstDl: AmovPpneMrunSlowWpstDf
		{
			speed = 1.125;
		};
		class AmovPpneMrunSlowWpstDbl: AmovPpneMrunSlowWpstDf
		{
			speed = 0.86;
		};
		class AmovPpneMrunSlowWpstDb: AmovPpneMrunSlowWpstDf{};
		class AmovPpneMrunSlowWpstDbr: AmovPpneMrunSlowWpstDf{};
		class AmovPpneMrunSlowWpstDr: AmovPpneMrunSlowWpstDf
		{
			speed = 0.8525;
		};
		class AmovPpneMrunSlowWpstDfr: AmovPpneMrunSlowWpstDf
		{
			speed = 0.915;
		};
		class AmovPpneMrunSnonWnonDf: AmovPpneMstpSnonWnonDnon
		{
			speed = 0.85;
		};
		class AmovPpneMrunSnonWnonDfl: AmovPpneMrunSnonWnonDf
		{
			speed = 0.73;
		};
		class AmovPpneMrunSnonWnonDl: AmovPpneMrunSnonWnonDf
		{
			speed = 1.125;
		};
		class AmovPpneMrunSnonWnonDbl: AmovPpneMrunSnonWnonDf
		{
			speed = 0.86;
		};
		class AmovPpneMrunSnonWnonDb: AmovPpneMrunSnonWnonDf
		{
			speed = 0.73;
		};
		class AmovPpneMrunSnonWnonDbr: AmovPpneMrunSnonWnonDf
		{
			speed = 1.05;
		};
		class AmovPpneMrunSnonWnonDr: AmovPpneMrunSnonWnonDf
		{
			speed = 0.8525;
		};
		class AmovPpneMrunSnonWnonDfr: AmovPpneMrunSnonWnonDf
		{
			speed = 0.915;
		};
		class AmovPercMevaSrasWrflDf: SprintBaseDf
		{
			speed = 1.5727;
			relSpeedMax = 1.09651;
		};
		class AmovPercMevaSrasWrflDfl: SprintBaseDfl
		{
			speed = 1.5677;
		};
		class AmovPercMevaSrasWrflDfr: SprintBaseDfr
		{
			speed = 1.5777;
			relSpeedMax = 1.09651;
		};
		class AmovPercMevaSrasWpstDf: SprintCivilBaseDf{};
		class AmovPercMevaSrasWpstDfr: SprintCivilBaseDfr
		{
			speed = 1.72029;
		};
		class AmovPknlMrunSnonWbinDr_rfl: AmovPknlMrunSnonWbinDf_rfl
		{
			speed = 0.7;
		};
		class AmovPpneMrunSnonWbinDf_rfl: AwopPpneMstpSoptWbinDnon_rfl
		{
			speed = 0.85;
		};
		class AmovPpneMrunSnonWbinDfr_rfl: AmovPpneMrunSnonWbinDf_rfl
		{
			speed = 0.915;
		};
		class AmovPpneMrunSnonWbinDr_rfl: AmovPpneMrunSnonWbinDf_rfl
		{
			speed = 0.8525;
		};
		class AmovPpneMrunSnonWbinDbr_rfl: AmovPpneMrunSnonWbinDf_rfl
		{
			speed = 1.05;
		};
		class AmovPpneMrunSnonWbinDb_rfl: AmovPpneMrunSnonWbinDf_rfl
		{
			speed = 0.73;
		};
		class AmovPpneMrunSnonWbinDbl_rfl: AmovPpneMrunSnonWbinDf_rfl
		{
			speed = 0.86;
		};
		class AmovPpneMrunSnonWbinDl_rfl: AmovPpneMrunSnonWbinDf_rfl
		{
			speed = 1.125;
		};
		class AmovPpneMrunSnonWbinDfl_rfl: AmovPpneMrunSnonWbinDf_rfl
		{
			speed = 0.73;
		};
		class AmovPknlMrunSnonWbinDf_pst: AmovPknlMwlkSoptWbinDf_pst
		{
			speed = 0.666667;
		};
		class AmovPknlMrunSnonWbinDfr_pst: AmovPknlMrunSnonWbinDf_pst
		{
			speed = 0.666667;
		};
		class AmovPknlMrunSnonWbinDr_pst: AmovPknlMrunSnonWbinDf_pst
		{
			speed = 0.7;
		};
		class AmovPknlMrunSnonWbinDbr_pst: AmovPknlMrunSnonWbinDf_pst
		{
			speed = 0.666667;
		};
		class AmovPknlMrunSnonWbinDb_pst: AmovPknlMrunSnonWbinDf_pst
		{
			speed = 0.666667;
		};
		class AmovPknlMrunSnonWbinDbl_pst: AmovPknlMrunSnonWbinDf_pst
		{
			speed = 0.666667;
		};
		class AmovPknlMrunSnonWbinDl_pst: AmovPknlMrunSnonWbinDf_pst
		{
			speed = 0.625;
		};
		class AmovPknlMrunSnonWbinDfl_pst: AmovPknlMrunSnonWbinDf_pst
		{
			speed = 0.666667;
		};
		class AmovPpneMrunSnonWbinDf_pst: AmovPpneMwlkSoptWbinDf_pst
		{
			speed = 0.85;
		};
		class AmovPpneMrunSnonWbinDfr_pst: AmovPpneMrunSnonWbinDf_pst
		{
			speed = 0.915;
		};
		class AmovPpneMrunSnonWbinDr_pst: AmovPpneMrunSnonWbinDf_pst
		{
			speed = 0.8525;
		};
		class AmovPpneMrunSnonWbinDbr_pst: AmovPpneMrunSnonWbinDf_pst
		{
			speed = 1.05;
		};
		class AmovPpneMrunSnonWbinDb_pst: AmovPpneMrunSnonWbinDf_pst
		{
			speed = 0.73;
		};
		class AmovPpneMrunSnonWbinDbl_pst: AmovPpneMrunSnonWbinDf_pst
		{
			speed = 0.86;
		};
		class AmovPpneMrunSnonWbinDl_pst: AmovPpneMrunSnonWbinDf_pst
		{
			speed = 1.125;
		};
		class AmovPpneMrunSnonWbinDfl_pst: AmovPpneMrunSnonWbinDf_pst
		{
			speed = 0.73;
		};
		class AmovPknlMrunSnonWbinDf_lnr: AmovPknlMwlkSoptWbinDf_lnr
		{
			speed = 0.666667;
		};
		class AmovPknlMrunSnonWbinDfr_lnr: AmovPknlMrunSnonWbinDf_lnr
		{
			speed = 0.666667;
		};
		class AmovPknlMrunSnonWbinDr_lnr: AmovPknlMrunSnonWbinDf_lnr
		{
			speed = 0.7;
		};
		class AmovPknlMrunSnonWbinDbr_lnr: AmovPknlMrunSnonWbinDf_lnr
		{
			speed = 0.666667;
		};
		class AmovPknlMrunSnonWbinDb_lnr: AmovPknlMrunSnonWbinDf_lnr
		{
			speed = 0.666667;
		};
		class AmovPknlMrunSnonWbinDbl_lnr: AmovPknlMrunSnonWbinDf_lnr
		{
			speed = 0.666667;
		};
		class AmovPknlMrunSnonWbinDl_lnr: AmovPknlMrunSnonWbinDf_lnr
		{
			speed = 0.625;
		};
		class AmovPknlMrunSnonWbinDfl_lnr: AmovPknlMrunSnonWbinDf_lnr
		{
			speed = 0.666667;
		};
		class AmovPpneMrunSnonWbinDf_lnr: AmovPpneMwlkSoptWbinDf_lnr
		{
			speed = 0.85;
		};
		class AmovPpneMrunSnonWbinDfr_lnr: AmovPpneMrunSnonWbinDf_lnr
		{
			speed = 0.915;
		};
		class AmovPpneMrunSnonWbinDr_lnr: AmovPpneMrunSnonWbinDf_lnr
		{
			speed = 0.8525;
		};
		class AmovPpneMrunSnonWbinDbr_lnr: AmovPpneMrunSnonWbinDf_lnr
		{
			speed = 1.05;
		};
		class AmovPpneMrunSnonWbinDb_lnr: AmovPpneMrunSnonWbinDf_lnr
		{
			speed = 0.73;
		};
		class AmovPpneMrunSnonWbinDbl_lnr: AmovPpneMrunSnonWbinDf_lnr
		{
			speed = 0.86;
		};
		class AmovPpneMrunSnonWbinDl_lnr: AmovPpneMrunSnonWbinDf_lnr
		{
			speed = 1.125;
		};
		class AmovPpneMrunSnonWbinDfl_lnr: AmovPpneMrunSnonWbinDf_lnr
		{
			speed = 0.73;
		};
		class AmovPpneMrunSnonWbinDf_non: AmovPpneMwlkSoptWbinDf_non
		{
			speed = 0.85;
		};
		class AmovPpneMrunSnonWbinDfr_non: AmovPpneMrunSnonWbinDf_non
		{
			speed = 0.915;
		};
		class AmovPpneMrunSnonWbinDr_non: AmovPpneMrunSnonWbinDf_non
		{
			speed = 0.8525;
		};
		class AmovPpneMrunSnonWbinDbr_non: AmovPpneMrunSnonWbinDf_non
		{
			speed = 1.05;
		};
		class AmovPpneMrunSnonWbinDb_non: AmovPpneMrunSnonWbinDf_non
		{
			speed = 0.73;
		};
		class AmovPpneMrunSnonWbinDbl_non: AmovPpneMrunSnonWbinDf_non
		{
			speed = 0.86;
		};
		class AmovPpneMrunSnonWbinDl_non: AmovPpneMrunSnonWbinDf_non
		{
			speed = 1.125;
		};
		class AmovPpneMrunSnonWbinDfl_non: AmovPpneMrunSnonWbinDf_non
		{
			speed = 0.73;
		};
		class AmovPercMwlkSrasWlnrDf: amovpercmstpsraswlnrdnon
		{
			speed = 0.827779;
		};
		class AmovPercMwlkSrasWlnrDfl: AmovPercMwlkSrasWlnrDf
		{
			speed = 0.511532;
		};
		class AmovPercMwlkSrasWlnrDl: AmovPercMwlkSrasWlnrDf
		{
			speed = 0.554632;
		};
		class AmovPercMwlkSrasWlnrDbl: AmovPercMwlkSrasWlnrDf{};
		class AmovPercMwlkSrasWlnrDb: AmovPercMwlkSrasWlnrDf{};
		class AmovPercMwlkSrasWlnrDbr: AmovPercMwlkSrasWlnrDf{};
		class AmovPercMwlkSrasWlnrDr: AmovPercMwlkSrasWlnrDf{};
		class AmovPercMwlkSrasWlnrDfr: AmovPercMwlkSrasWlnrDf
		{
			speed = 0.511832;
		};
	};
};
//};
