////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:02:42 2014 : Source 'file' date Fri Oct 31 06:02:42 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class DUBBINGRADIO_PMC : config.bin{
class CfgPatches
{
	class CA_DubbingRadio_PMC
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.54;
		requiredAddons[] = {"CA_Dubbing_Baf","CA_DubbingRadio_E"};
	};
};
class CfgVoice
{
	class BAF;
	class Male01_GB_EN_PMC: BAF
	{
		directories[] = {"\ca\dubbingradio_PMC\Male01_GB_EN\","\ca\dubbingradio_PMC\Male01_GB_EN\"};
		voiceType = "Male01";
		scope = 2;
		identityTypes[] = {"Language_GB_EN_PMC"};
	};
	class Male02_GB_EN_PMC: BAF
	{
		directories[] = {"\ca\dubbingradio_PMC\Male02_GB_EN\","\ca\dubbingradio_PMC\Male02_GB_EN\"};
		voiceType = "Male02";
		scope = 2;
		identityTypes[] = {"Language_GB_EN_PMC"};
	};
	class Male03_GB_EN_PMC: BAF
	{
		directories[] = {"\ca\dubbingradio_PMC\Male03_GB_EN\","\ca\dubbingradio_PMC\Male03_GB_EN\"};
		voiceType = "Male03";
		scope = 2;
		identityTypes[] = {"Language_GB_EN_PMC"};
	};
	class Male04_GB_EN_PMC: BAF
	{
		directories[] = {"\ca\dubbingradio_PMC\Male04_GB_EN\","\ca\dubbingradio_PMC\Male04_GB_EN\"};
		voiceType = "Male04";
		scope = 2;
		identityTypes[] = {"Language_GB_EN_PMC"};
	};
};
class RadioProtocolBase;
class RadioProtocol_BAF: RadioProtocolBase
{
	class Words
	{
		CannotExecuteAdjustCoordinates[] = {"DEFAULT\SOM\CannotExecuteAdjustCoordinatesOut.ogg"};
		CannotExecuteThatsOutsideOurFiringEnvelope[] = {"DEFAULT\SOM\ThatsOutsideOurFiringEnvelopeOut.ogg"};
		FireAt[] = {"DEFAULT\FireAtThat.ogg"};
	};
	class SentWitnessDeadBodyDefault
	{
		class SentWitnessDeadBody_1
		{
			text = "$STR_ep1_grt_negative5_1";
		};
		class SentWitnessDeadBody_2
		{
			text = "$STR_ep1_sentcombatgeneric_4";
		};
	};
	class SentWitnessDeadBodyStealth
	{
		class SentWitnessDeadBody_1
		{
			text = "$STR_ep1_grt_negative5_1";
		};
		class SentWitnessDeadBody_2
		{
			text = "$STR_ep1_sentcombatgeneric_4";
		};
	};
	class SentRoutedDefault
	{
		class SentRouted_1
		{
			text = "$STR_ep1_grt_negative5_1";
		};
		class SentRouted_2
		{
			text = "$STR_ep1_sentcombatgeneric_4";
		};
	};
	class SentRoutedStealth
	{
		class SentRouted_1
		{
			text = "$STR_ep1_grt_negative5_1";
		};
		class SentRouted_2
		{
			text = "$STR_ep1_sentcombatgeneric_4";
		};
	};
	class SentEndangeredDefault
	{
		class SentEndangered_1
		{
			text = "$STR_ep1_sentendangered_1";
		};
		class SentEndangered_2
		{
			text = "$STR_ep1_sentcombatgeneric_4";
		};
		class SentEndangered_3
		{
			text = "$STR_ep1_grt_negative5_1";
		};
	};
	class SentEndangeredStealth
	{
		class SentEndangered_1
		{
			text = "$STR_ep1_sentendangered_1";
		};
		class SentEndangered_2
		{
			text = "$STR_ep1_sentcombatgeneric_4";
		};
		class SentEndangered_3
		{
			text = "$STR_ep1_grt_negative5_1";
		};
	};
	class SentARTYRoundsComplete
	{
		class SentARTYRoundsComplete_1
		{
			text = "$STR_ep1_artillery_21";
		};
	};
	class SentARTYFireAt
	{
		class SentARTYFireAt_1
		{
			text = "$STR_ep1_artillery_fireAt";
		};
	};
	class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope
	{
		class SentARTYCannotExecuteThatsOutsideOurFiringEnvelope_1
		{
			text = "$STR_ep1_artillery_cannotexecute";
		};
	};
	class SentARTYCannotExecuteAdjustCoordinates
	{
		class SentARTYCannotExecuteAdjustCoordinates_1
		{
			text = "$STR_ep1_artillery_cannotexecute2";
		};
	};
	class SentRepairThat
	{
		class SentRepairThat_1
		{
			text = "$STR_ep1_sentRepairThat";
		};
	};
};
//};
