////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:08:02 2014 : Source 'file' date Fri Oct 31 06:08:02 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class characters_e : config.bin{
class CfgPatches
{
	class CACharacters_E
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CACharacters","CA_E","CACharacters_E_Head","CACharacters2"};
	};
};
class CfgSkeletonParameters
{
	class OFP2_ManSkeleton
	{
		pivotsModel = "ca\characters_E\OFP2_ManSkeleton_Pivots.p3d";
		weaponBone = "weapon";
	};
};
class CfgTalkTopics
{
	class Core_E
	{
		class Sentences
		{
			class Approached
			{
				text = "";
				speech[] = {};
				class Arguments{};
			};
			class Withdrawn: Approached{};
			class EnglishQ
			{
				text = "$STR_EP1_ENGLISHQ_1";
				speech[] = {"EnglishQ"};
				class Arguments{};
			};
			class RussianQ
			{
				text = "$STR_EP1_RUSSIANQ_1";
				speech[] = {"RussianQ"};
				class Arguments{};
			};
			class CzechQ
			{
				text = "$STR_EP1_CZECHQ_1";
				speech[] = {"CzechQ"};
				class Arguments{};
			};
			class TakistaniQ
			{
				text = "$STR_EP1_TAKISTANIQ_1";
				speech[] = {"TakistaniQ"};
				class Arguments{};
			};
			class EnglishQRussianQ
			{
				text = "$STR_EP1_ENGLISHQRUSSIANQ_1";
				speech[] = {"EnglishQ","RussianQ"};
				class Arguments{};
			};
			class EnglishQCzechQ
			{
				text = "$STR_EP1_ENGLISHQCZECHQ_1";
				speech[] = {"EnglishQ","CzechQ"};
				class Arguments{};
			};
			class EnglishQTakistaniQ
			{
				text = "$STR_EP1_ENGLISHQTAKISTANIQ_1";
				speech[] = {"EnglishQ","TakistaniQ"};
				class Arguments{};
			};
			class RussianQCzechQ
			{
				text = "$STR_EP1_RUSSIANQCZECHQ_1";
				speech[] = {"RussianQ","CzechQ"};
				class Arguments{};
			};
			class RussianQTakistaniQ
			{
				text = "$STR_EP1_RUSSIANQTAKISTANIQ_1";
				speech[] = {"RussianQ","TakistaniQ"};
				class Arguments{};
			};
			class CzechQTakistaniQ
			{
				text = "$STR_EP1_CZECHQTAKISTANIQ_1";
				speech[] = {"CzechQ","TakistaniQ"};
				class Arguments{};
			};
			class EnglishQRussianQCzechQ
			{
				text = "$STR_EP1_ENGLISHQRUSSIANQCZECHQ_1";
				speech[] = {"EnglishQ","RussianQ","CzechQ"};
				class Arguments{};
			};
			class EnglishQRussianQTakistaniQ
			{
				text = "$STR_EP1_ENGLISHQRUSSIANQTAKISTANIQ_1";
				speech[] = {"EnglishQ","RussianQ","TakistaniQ"};
				class Arguments{};
			};
			class EnglishQCzechQTakistaniQ
			{
				text = "$STR_EP1_ENGLISHQCZECHQTAKISTANIQ_1";
				speech[] = {"EnglishQ","CzechQ","TakistaniQ"};
				class Arguments{};
			};
			class RussianQCzechQTakistaniQ
			{
				text = "$STR_EP1_RUSSIANQCZECHQTAKISTANIQ_1";
				speech[] = {"RussianQ","CzechQ","TakistaniQ"};
				class Arguments{};
			};
		};
		class Arguments{};
		class Special{};
		startWithVocal[] = {};
		startWithConsonant[] = {};
		reactPlayer = "ca\characters_e\data\scripts\reactCore.sqf";
		react = "ca\characters_e\data\scripts\reactCore.fsm";
	};
	class Core_Full_E
	{
		class Sentences
		{
			class TGT_Q_EN
			{
				text = "$STR_EP1_TGT_Q_1";
				speech[] = {"DidYouSeeAnythingRecentlyQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class TGT_A_NoInfo_EN
			{
				text = "$STR_EP1_TGT_A_NOINFO_1";
				speech[] = {"NoIDidntSeeAnything_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WEA_Q_WeatherNeutral_EN
			{
				text = "$STR_EP1_WEA_Q_WEATHERNEUTRAL_1";
				speech[] = {"WhatsTheWeatherForecastQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WEA_Q_WeatherNice_EN
			{
				text = "$STR_EP1_WEA_Q_WEATHERNICE_1";
				speech[] = {"NiceWeatherHuhQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WEA_Q_WeatherBad_EN
			{
				text = "$STR_EP1_WEA_Q_WEATHERBAD_1";
				speech[] = {"NastyWeatherHuhQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WEA_A_WeatherBetter_EN
			{
				text = "$STR_EP1_WEA_A_WEATHERBETTER_1";
				speech[] = {"ShouldBeClearingUpSoon_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WEA_A_WeatherWorse_EN
			{
				text = "$STR_EP1_WEA_A_WEATHERWORSE_1";
				speech[] = {"IReckonWellGetSomeRainSoon_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WEA_A_WeatherSame_EN
			{
				text = "$STR_EP1_WEA_A_WEATHERSAME_1";
				speech[] = {"TheySayItllStayLikeThisForAWhile_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class LOC_Q_EN
			{
				text = "$STR_EP1_LOC_Q_1";
				speech[] = {"WhatsTheClosestSettlementQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class LOC_A_NoInfo1_EN
			{
				text = "$STR_EP1_LOC_A_NOINFO1_1";
				speech[] = {"ImNotFromAroundHere_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class LOC_A_NoInfo2_EN
			{
				text = "$STR_EP1_LOC_A_NOINFO2_1";
				speech[] = {"NoIdeaIDontLiveHere_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class A_AskedAlready1_EN
			{
				text = "$STR_EP1_A_ASKEDALREADY1_1";
				speech[] = {"YouAlreadyAskedMeThat_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class A_AskedAlready2_EN
			{
				text = "$STR_EP1_A_ASKEDALREADY2_1";
				speech[] = {"AreYouKiddingQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class A_AskedAlready3_EN
			{
				text = "$STR_EP1_A_ASKEDALREADY3_1";
				speech[] = {"StopAskingMeThat_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class A_NotUnderstood1_EN
			{
				text = "$STR_EP1_A_NOTUNDERSTOOD1_1";
				speech[] = {"SorryIDontUnderstand_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class A_NotUnderstood2_EN
			{
				text = "$STR_EP1_A_NOTUNDERSTOOD2_1";
				speech[] = {"UhWhatQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_IWillOnlyTellYouMyNameRankAndSerialNumber_EN
			{
				text = "$STR_EP1_GRT_IWILLONLYTELLYOUMYNAMERANKANDSERIALNUMBER_1";
				speech[] = {"IWillOnlyTellYouMyNameRankAndSerialNumber_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_SirQ_EN
			{
				text = "$STR_EP1_GRT_SIRQ_1";
				speech[] = {"SirQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_PrivateQ_EN
			{
				text = "$STR_EP1_GRT_PRIVATEQ_1";
				speech[] = {"PrivateQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_CorporalQ_EN
			{
				text = "$STR_EP1_GRT_CORPORALQ_1";
				speech[] = {"CorporalQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_SergeantQ_EN
			{
				text = "$STR_EP1_GRT_SERGEANTQ_1";
				speech[] = {"SergeantQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_LieutenantQ_EN
			{
				text = "$STR_EP1_GRT_LIEUTENANTQ_1";
				speech[] = {"LieutenantQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_CaptainQ_EN
			{
				text = "$STR_EP1_GRT_CAPTAINQ_1";
				speech[] = {"CaptainQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_MajorQ_EN
			{
				text = "$STR_EP1_GRT_MAJORQ_1";
				speech[] = {"MajorQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_ColonelQ_EN
			{
				text = "$STR_EP1_GRT_COLONELQ_1";
				speech[] = {"ColonelQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesPrivate_EN
			{
				text = "$STR_EP1_GRT_YESPRIVATE_1";
				speech[] = {"YesPrivate_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesCorporal_EN
			{
				text = "$STR_EP1_GRT_YESCORPORAL_1";
				speech[] = {"YesCorporal_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesSergeant_EN
			{
				text = "$STR_EP1_GRT_YESSERGEANT_1";
				speech[] = {"YesSergeant_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesLieutenant_EN
			{
				text = "$STR_EP1_GRT_YESLIEUTENANT_1";
				speech[] = {"YesLieutenant_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesCaptain_EN
			{
				text = "$STR_EP1_GRT_YESCAPTAIN_1";
				speech[] = {"YesCaptain_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesMajor_EN
			{
				text = "$STR_EP1_GRT_YESMAJOR_1";
				speech[] = {"YesMajor_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesColonel_EN
			{
				text = "$STR_EP1_GRT_YESCOLONEL_1";
				speech[] = {"YesColonel_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_SoldierQ_EN
			{
				text = "$STR_EP1_GRT_SOLDIERQ_1";
				speech[] = {"SoldierQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_MorninSoldier_EN
			{
				text = "$STR_EP1_GRT_MORNINSOLDIER_1";
				speech[] = {"MorninSoldier_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_EveninSoldier_EN
			{
				text = "$STR_EP1_GRT_EVENINSOLDIER_1";
				speech[] = {"EveninSoldier_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_GoodDaySir_EN
			{
				text = "$STR_EP1_GRT_GOODDAYSIR_1";
				speech[] = {"GoodDaySir_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_GoodEveningSir_EN
			{
				text = "$STR_EP1_GRT_GOODEVENINGSIR_1";
				speech[] = {"GoodEveningSir_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_GoodMorningSir_EN
			{
				text = "$STR_EP1_GRT_GOODMORNINGSIR_1";
				speech[] = {"GoodMorningSir_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_GoodDay_EN
			{
				text = "$STR_EP1_GRT_GOODDAY_1";
				speech[] = {"GoodDay_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_GoodMorning_EN
			{
				text = "$STR_EP1_GRT_GOODMORNING_1";
				speech[] = {"GoodMorning_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_GoodEvening_EN
			{
				text = "$STR_EP1_GRT_GOODEVENING_1";
				speech[] = {"GoodEvening_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_WhatQ_EN
			{
				text = "$STR_EP1_GRT_WHATQ_1";
				speech[] = {"WhatQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesSir_EN
			{
				text = "$STR_EP1_GRT_YESSIR_1";
				speech[] = {"YesSir_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HelloSir_EN
			{
				text = "$STR_EP1_GRT_HELLOSIR_1";
				speech[] = {"HelloSir_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Yep_EN
			{
				text = "$STR_EP1_GRT_YEP_1";
				speech[] = {"Yep_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YeahQ_EN
			{
				text = "$STR_EP1_GRT_YEAHQ_1";
				speech[] = {"YeahQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Hi_EN
			{
				text = "$STR_EP1_GRT_HI_1";
				speech[] = {"Hi_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HiThereE_EN
			{
				text = "$STR_EP1_GRT_HITHEREE_1";
				speech[] = {"HiThereE_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HeyMan_EN
			{
				text = "$STR_EP1_GRT_HEYMAN_1";
				speech[] = {"HeyMan_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HiDude_EN
			{
				text = "$STR_EP1_GRT_HIDUDE_1";
				speech[] = {"HiDude_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Hello_EN
			{
				text = "$STR_EP1_GRT_HELLO_1";
				speech[] = {"Hello_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HowsThingsQ_EN
			{
				text = "$STR_EP1_GRT_HOWSTHINGSQ_1";
				speech[] = {"HowsThingsQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HowAreYouQ_EN
			{
				text = "$STR_EP1_GRT_HOWAREYOUQ_1";
				speech[] = {"HowAreYouQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HeyE_EN
			{
				text = "$STR_EP1_GRT_HEYE_1";
				speech[] = {"HeyE_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_WhatDoYouWantQ_EN
			{
				text = "$STR_EP1_GRT_WHATDOYOUWANTQ_1";
				speech[] = {"WhatDoYouWantQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_WhatDoYouNeedQ_EN
			{
				text = "$STR_EP1_GRT_WHATDOYOUNEEDQ_1";
				speech[] = {"WhatDoYouNeedQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_WhatsUpQ_EN
			{
				text = "$STR_EP1_GRT_WHATSUPQ_1";
				speech[] = {"WhatsUpQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesQ_EN
			{
				text = "$STR_EP1_GRT_YESQ_1";
				speech[] = {"YesQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_MaamQ_EN
			{
				text = "$STR_EP1_GRT_MAAMQ_1";
				speech[] = {"MaamQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HaveANiceDay_EN
			{
				text = "$STR_EP1_GRT_HAVEANICEDAY_1";
				speech[] = {"HaveANiceDay_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_MorningMaam_EN
			{
				text = "$STR_EP1_GRT_MORNINGMAAM_1";
				speech[] = {"MorningMaam_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HelloThere_EN
			{
				text = "$STR_EP1_GRT_HELLOTHERE_1";
				speech[] = {"HelloThere_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HowYouDoinQ_EN
			{
				text = "$STR_EP1_GRT_HOWYOUDOINQ_1";
				speech[] = {"HowYouDoinQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DontTouchMeE_EN
			{
				text = "$STR_EP1_GRT_DONTTOUCHMEE_1";
				speech[] = {"DontTouchMeE_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND1_EN
			{
				text = "$STR_EP1_GRT_DND1_1";
				speech[] = {"NotNowE_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND2_EN
			{
				text = "$STR_EP1_GRT_DND2_1";
				speech[] = {"Later_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND3_EN
			{
				text = "$STR_EP1_GRT_DND3_1";
				speech[] = {"NoTimeE_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND4_EN
			{
				text = "$STR_EP1_GRT_DND4_1";
				speech[] = {"HushE_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND5_EN
			{
				text = "$STR_EP1_GRT_DND5_1";
				speech[] = {"SsshhE_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND6_EN
			{
				text = "$STR_EP1_GRT_DND6_1";
				speech[] = {"CantYouSeeImBusyQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND7_EN
			{
				text = "$STR_EP1_GRT_DND7_1";
				speech[] = {"BitOccupiedAtTheMomentDude_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND8_EN
			{
				text = "$STR_EP1_GRT_DND8_1";
				speech[] = {"ImBusyE_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND9_EN
			{
				text = "$STR_EP1_GRT_DND9_1";
				speech[] = {"PissOffE_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Positive1_EN
			{
				text = "$STR_EP1_GRT_POSITIVE1_1";
				speech[] = {"NiceToSeeYou_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Positive2_EN
			{
				text = "$STR_EP1_GRT_POSITIVE2_1";
				speech[] = {"GoodToSeeYou_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Positive3_EN
			{
				text = "$STR_EP1_GRT_POSITIVE3_1";
				speech[] = {"HeyGladYoureHere_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Positive4_EN
			{
				text = "$STR_EP1_GRT_POSITIVE4_1";
				speech[] = {"CanIHelpYouQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Negative1_EN
			{
				text = "$STR_EP1_GRT_NEGATIVE1_1";
				speech[] = {"GetLostE_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Negative2_EN
			{
				text = "$STR_EP1_GRT_NEGATIVE2_1";
				speech[] = {"LeaveMeAloneE_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Negative3_EN
			{
				text = "$STR_EP1_GRT_NEGATIVE3_1";
				speech[] = {"LeaveUsAloneE_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Negative4_EN
			{
				text = "$STR_EP1_GRT_NEGATIVE4_1";
				speech[] = {"FuckingPig_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Negative5_EN
			{
				text = "$STR_EP1_GRT_NEGATIVE5_1";
				speech[] = {"SonOfABitchE_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Negative6_EN
			{
				text = "$STR_EP1_GRT_NEGATIVE6_1";
				speech[] = {"DamnYouE_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Query1_EN
			{
				text = "$STR_EP1_GRT_QUERY1_1";
				speech[] = {"CanIAskYouSomethingQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Query2_EN
			{
				text = "$STR_EP1_GRT_QUERY2_1";
				speech[] = {"PleaseCanYouHelpQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Query3_EN
			{
				text = "$STR_EP1_GRT_QUERY3_1";
				speech[] = {"Speak_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Query4_EN
			{
				text = "$STR_EP1_GRT_QUERY4_1";
				speech[] = {"HelpUs_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Refusal1_EN
			{
				text = "$STR_EP1_GRT_REFUSAL1_1";
				speech[] = {"IWontSayAnotherWord_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Refusal2_EN
			{
				text = "$STR_EP1_GRT_REFUSAL2_1";
				speech[] = {"MindYourOwnBusiness_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Refusal3_EN
			{
				text = "$STR_EP1_GRT_REFUSAL3_1";
				speech[] = {"GoBotherSomeoneElse_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class TGT_Q_TK
			{
				text = "$STR_EP1_TGT_Q_1";
				speech[] = {"DidYouSeeAnythingRecentlyQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class TGT_A_NoInfo_TK
			{
				text = "$STR_EP1_TGT_A_NOINFO_1";
				speech[] = {"NoIDidntSeeAnything_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WEA_Q_WeatherNeutral_TK
			{
				text = "$STR_EP1_WEA_Q_WEATHERNEUTRAL_1";
				speech[] = {"WhatsTheWeatherForecastQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WEA_Q_WeatherNice_TK
			{
				text = "$STR_EP1_WEA_Q_WEATHERNICE_1";
				speech[] = {"NiceWeatherHuhQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WEA_Q_WeatherBad_TK
			{
				text = "$STR_EP1_WEA_Q_WEATHERBAD_1";
				speech[] = {"NastyWeatherHuhQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WEA_A_WeatherBetter_TK
			{
				text = "$STR_EP1_WEA_A_WEATHERBETTER_1";
				speech[] = {"ShouldBeClearingUpSoon_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WEA_A_WeatherWorse_TK
			{
				text = "$STR_EP1_WEA_A_WEATHERWORSE_1";
				speech[] = {"IReckonWellGetSomeRainSoon_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class WEA_A_WeatherSame_TK
			{
				text = "$STR_EP1_WEA_A_WEATHERSAME_1";
				speech[] = {"TheySayItllStayLikeThisForAWhile_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class LOC_Q_TK
			{
				text = "$STR_EP1_LOC_Q_1";
				speech[] = {"WhatsTheClosestSettlementQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class LOC_A_NoInfo1_TK
			{
				text = "$STR_EP1_LOC_A_NOINFO1_1";
				speech[] = {"ImNotFromAroundHere_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class LOC_A_NoInfo2_TK
			{
				text = "$STR_EP1_LOC_A_NOINFO2_1";
				speech[] = {"NoIdeaIDontLiveHere_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class A_AskedAlready1_TK
			{
				text = "$STR_EP1_A_ASKEDALREADY1_1";
				speech[] = {"YouAlreadyAskedMeThat_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class A_AskedAlready2_TK
			{
				text = "$STR_EP1_A_ASKEDALREADY2_1";
				speech[] = {"AreYouKiddingQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class A_AskedAlready3_TK
			{
				text = "$STR_EP1_A_ASKEDALREADY3_1";
				speech[] = {"StopAskingMeThat_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class A_NotUnderstood1_TK
			{
				text = "$STR_EP1_A_NOTUNDERSTOOD1_1";
				speech[] = {"SorryIDontUnderstand_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class A_NotUnderstood2_TK
			{
				text = "$STR_EP1_A_NOTUNDERSTOOD2_1";
				speech[] = {"UhWhatQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_IWillOnlyTellYouMyNameRankAndSerialNumber_TK
			{
				text = "$STR_EP1_GRT_IWILLONLYTELLYOUMYNAMERANKANDSERIALNUMBER_1";
				speech[] = {"IWillOnlyTellYouMyNameRankAndSerialNumber_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_SirQ_TK
			{
				text = "$STR_EP1_GRT_SIRQ_1";
				speech[] = {"SirQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_PrivateQ_TK
			{
				text = "$STR_EP1_GRT_PRIVATEQ_1";
				speech[] = {"PrivateQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_CorporalQ_TK
			{
				text = "$STR_EP1_GRT_CORPORALQ_1";
				speech[] = {"CorporalQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_SergeantQ_TK
			{
				text = "$STR_EP1_GRT_SERGEANTQ_1";
				speech[] = {"SergeantQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_LieutenantQ_TK
			{
				text = "$STR_EP1_GRT_LIEUTENANTQ_1";
				speech[] = {"LieutenantQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_CaptainQ_TK
			{
				text = "$STR_EP1_GRT_CAPTAINQ_1";
				speech[] = {"CaptainQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_MajorQ_TK
			{
				text = "$STR_EP1_GRT_MAJORQ_1";
				speech[] = {"MajorQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_ColonelQ_TK
			{
				text = "$STR_EP1_GRT_COLONELQ_1";
				speech[] = {"ColonelQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesPrivate_TK
			{
				text = "$STR_EP1_GRT_YESPRIVATE_1";
				speech[] = {"YesPrivate_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesCorporal_TK
			{
				text = "$STR_EP1_GRT_YESCORPORAL_1";
				speech[] = {"YesCorporal_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesSergeant_TK
			{
				text = "$STR_EP1_GRT_YESSERGEANT_1";
				speech[] = {"YesSergeant_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesLieutenant_TK
			{
				text = "$STR_EP1_GRT_YESLIEUTENANT_1";
				speech[] = {"YesLieutenant_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesCaptain_TK
			{
				text = "$STR_EP1_GRT_YESCAPTAIN_1";
				speech[] = {"YesCaptain_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesMajor_TK
			{
				text = "$STR_EP1_GRT_YESMAJOR_1";
				speech[] = {"YesMajor_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesColonel_TK
			{
				text = "$STR_EP1_GRT_YESCOLONEL_1";
				speech[] = {"YesColonel_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_SoldierQ_TK
			{
				text = "$STR_EP1_GRT_SOLDIERQ_1";
				speech[] = {"SoldierQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_MorninSoldier_TK
			{
				text = "$STR_EP1_GRT_MORNINSOLDIER_1";
				speech[] = {"MorninSoldier_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_EveninSoldier_TK
			{
				text = "$STR_EP1_GRT_EVENINSOLDIER_1";
				speech[] = {"EveninSoldier_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_GoodDaySir_TK
			{
				text = "$STR_EP1_GRT_GOODDAYSIR_1";
				speech[] = {"GoodDaySir_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_GoodEveningSir_TK
			{
				text = "$STR_EP1_GRT_GOODEVENINGSIR_1";
				speech[] = {"GoodEveningSir_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_GoodMorningSir_TK
			{
				text = "$STR_EP1_GRT_GOODMORNINGSIR_1";
				speech[] = {"GoodMorningSir_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_GoodDay_TK
			{
				text = "$STR_EP1_GRT_GOODDAY_1";
				speech[] = {"GoodDay_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_GoodMorning_TK
			{
				text = "$STR_EP1_GRT_GOODMORNING_1";
				speech[] = {"GoodMorning_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_GoodEvening_TK
			{
				text = "$STR_EP1_GRT_GOODEVENING_1";
				speech[] = {"GoodEvening_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_WhatQ_TK
			{
				text = "$STR_EP1_GRT_WHATQ_1";
				speech[] = {"WhatQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesSir_TK
			{
				text = "$STR_EP1_GRT_YESSIR_1";
				speech[] = {"YesSir_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HelloSir_TK
			{
				text = "$STR_EP1_GRT_HELLOSIR_1";
				speech[] = {"HelloSir_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Yep_TK
			{
				text = "$STR_EP1_GRT_YEP_1";
				speech[] = {"Yep_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YeahQ_TK
			{
				text = "$STR_EP1_GRT_YEAHQ_1";
				speech[] = {"YeahQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Hi_TK
			{
				text = "$STR_EP1_GRT_HI_1";
				speech[] = {"Hi_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HiThereE_TK
			{
				text = "$STR_EP1_GRT_HITHEREE_1";
				speech[] = {"HiThereE_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HeyMan_TK
			{
				text = "$STR_EP1_GRT_HEYMAN_1";
				speech[] = {"HeyMan_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HiDude_TK
			{
				text = "$STR_EP1_GRT_HIDUDE_1";
				speech[] = {"HiDude_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Hello_TK
			{
				text = "$STR_EP1_GRT_HELLO_1";
				speech[] = {"Hello_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HowsThingsQ_TK
			{
				text = "$STR_EP1_GRT_HOWSTHINGSQ_1";
				speech[] = {"HowsThingsQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HowAreYouQ_TK
			{
				text = "$STR_EP1_GRT_HOWAREYOUQ_1";
				speech[] = {"HowAreYouQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HeyE_TK
			{
				text = "$STR_EP1_GRT_HEYE_1";
				speech[] = {"HeyE_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_WhatDoYouWantQ_TK
			{
				text = "$STR_EP1_GRT_WHATDOYOUWANTQ_1";
				speech[] = {"WhatDoYouWantQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_WhatDoYouNeedQ_TK
			{
				text = "$STR_EP1_GRT_WHATDOYOUNEEDQ_1";
				speech[] = {"WhatDoYouNeedQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_WhatsUpQ_TK
			{
				text = "$STR_EP1_GRT_WHATSUPQ_1";
				speech[] = {"WhatsUpQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_YesQ_TK
			{
				text = "$STR_EP1_GRT_YESQ_1";
				speech[] = {"YesQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_MaamQ_TK
			{
				text = "$STR_EP1_GRT_MAAMQ_1";
				speech[] = {"MaamQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HaveANiceDay_TK
			{
				text = "$STR_EP1_GRT_HAVEANICEDAY_1";
				speech[] = {"HaveANiceDay_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_MorningMaam_TK
			{
				text = "$STR_EP1_GRT_MORNINGMAAM_1";
				speech[] = {"MorningMaam_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HelloThere_TK
			{
				text = "$STR_EP1_GRT_HELLOTHERE_1";
				speech[] = {"HelloThere_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_HowYouDoinQ_TK
			{
				text = "$STR_EP1_GRT_HOWYOUDOINQ_1";
				speech[] = {"HowYouDoinQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DontTouchMeE_TK
			{
				text = "$STR_EP1_GRT_DONTTOUCHMEE_1";
				speech[] = {"DontTouchMeE_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND1_TK
			{
				text = "$STR_EP1_GRT_DND1_1";
				speech[] = {"NotNowE_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND2_TK
			{
				text = "$STR_EP1_GRT_DND2_1";
				speech[] = {"Later_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND3_TK
			{
				text = "$STR_EP1_GRT_DND3_1";
				speech[] = {"NoTimeE_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND4_TK
			{
				text = "$STR_EP1_GRT_DND4_1";
				speech[] = {"HushE_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND5_TK
			{
				text = "$STR_EP1_GRT_DND5_1";
				speech[] = {"SsshhE_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND6_TK
			{
				text = "$STR_EP1_GRT_DND6_1";
				speech[] = {"CantYouSeeImBusyQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND7_TK
			{
				text = "$STR_EP1_GRT_DND7_1";
				speech[] = {"BitOccupiedAtTheMomentDude_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND8_TK
			{
				text = "$STR_EP1_GRT_DND8_1";
				speech[] = {"ImBusyE_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_DND9_TK
			{
				text = "$STR_EP1_GRT_DND9_1";
				speech[] = {"PissOffE_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Positive1_TK
			{
				text = "$STR_EP1_GRT_POSITIVE1_1";
				speech[] = {"NiceToSeeYou_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Positive2_TK
			{
				text = "$STR_EP1_GRT_POSITIVE2_1";
				speech[] = {"GoodToSeeYou_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Positive3_TK
			{
				text = "$STR_EP1_GRT_POSITIVE3_1";
				speech[] = {"HeyGladYoureHere_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Positive4_TK
			{
				text = "$STR_EP1_GRT_POSITIVE4_1";
				speech[] = {"CanIHelpYouQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Negative1_TK
			{
				text = "$STR_EP1_GRT_NEGATIVE1_1";
				speech[] = {"GetLostE_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Negative2_TK
			{
				text = "$STR_EP1_GRT_NEGATIVE2_1";
				speech[] = {"LeaveMeAloneE_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Negative3_TK
			{
				text = "$STR_EP1_GRT_NEGATIVE3_1";
				speech[] = {"LeaveUsAloneE_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Negative4_TK
			{
				text = "$STR_EP1_GRT_NEGATIVE4_1";
				speech[] = {"FuckingPig_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Negative5_TK
			{
				text = "$STR_EP1_GRT_NEGATIVE5_1";
				speech[] = {"SonOfABitchE_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Negative6_TK
			{
				text = "$STR_EP1_GRT_NEGATIVE6_1";
				speech[] = {"DamnYouE_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Query1_TK
			{
				text = "$STR_EP1_GRT_QUERY1_1";
				speech[] = {"CanIAskYouSomethingQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Query2_TK
			{
				text = "$STR_EP1_GRT_QUERY2_1";
				speech[] = {"PleaseCanYouHelpQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Query3_TK
			{
				text = "$STR_EP1_GRT_QUERY3_1";
				speech[] = {"Speak_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Query4_TK
			{
				text = "$STR_EP1_GRT_QUERY4_1";
				speech[] = {"HelpUs_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Refusal1_TK
			{
				text = "$STR_EP1_GRT_REFUSAL1_1";
				speech[] = {"IWontSayAnotherWord_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Refusal2_TK
			{
				text = "$STR_EP1_GRT_REFUSAL2_1";
				speech[] = {"MindYourOwnBusiness_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class GRT_Refusal3_TK
			{
				text = "$STR_EP1_GRT_REFUSAL3_1";
				speech[] = {"GoBotherSomeoneElse_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class LocationThis_EN
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class PLACE0
					{
						type = "place";
						config = "PlaceThis_EN";
					};
				};
			};
			class LocationThis_TK
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class PLACE0
					{
						type = "place";
						config = "PlaceThis_TK";
					};
				};
			};
			class Targets_EN
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class COUNT0
					{
						type = "amount";
						config = "Amount_EN";
					};
					class SIDE0
					{
						type = "side";
						config = "Side_EN";
					};
					class UNIT0
					{
						type = "entity";
						config = "Entity_EN";
					};
					class PLACE0
					{
						type = "place";
						config = "Place_EN";
					};
					class TIME0
					{
						type = "time";
						config = "Time_EN";
					};
					class UCOUNT0
					{
						type = "amount";
						config = "Amount_EN";
					};
					class UTYPE0
					{
						type = "entity";
						config = "Entity_EN";
					};
					class COUNT1: COUNT0{};
					class SIDE1: SIDE0{};
					class UNIT1: UNIT0{};
					class PLACE1: PLACE0{};
					class TIME1: TIME0{};
					class UCOUNT1: UCOUNT0{};
					class UTYPE1: UTYPE0{};
					class COUNT2: COUNT0{};
					class SIDE2: SIDE0{};
					class UNIT2: UNIT0{};
					class PLACE2: PLACE0{};
					class TIME2: TIME0{};
					class UCOUNT2: UCOUNT0{};
					class UTYPE2: UTYPE0{};
				};
			};
			class Targets_TK
			{
				text = "";
				speech[] = {};
				class Arguments
				{
					class COUNT0
					{
						type = "amount";
						config = "Amount_TK";
					};
					class SIDE0
					{
						type = "side";
						config = "Side_TK";
					};
					class UNIT0
					{
						type = "entity";
						config = "Entity_TK";
					};
					class PLACE0
					{
						type = "place";
						config = "Place_TK";
					};
					class TIME0
					{
						type = "time";
						config = "Time_TK";
					};
					class UCOUNT0
					{
						type = "amount";
						config = "Amount_TK";
					};
					class UTYPE0
					{
						type = "entity";
						config = "Entity_TK";
					};
					class COUNT1: COUNT0{};
					class SIDE1: SIDE0{};
					class UNIT1: UNIT0{};
					class PLACE1: PLACE0{};
					class TIME1: TIME0{};
					class UCOUNT1: UCOUNT0{};
					class UTYPE1: UTYPE0{};
					class COUNT2: COUNT0{};
					class SIDE2: SIDE0{};
					class UNIT2: UNIT0{};
					class PLACE2: PLACE0{};
					class TIME2: TIME0{};
					class UCOUNT2: UCOUNT0{};
					class UTYPE2: UTYPE0{};
				};
			};
		};
		class Arguments
		{
			class PlaceThis_EN
			{
				variant = "##LANG##";
				class Phrases
				{
					class DN
					{
						text = "%PLACE";
						speech[] = {"%PLACE"};
					};
				};
				class PhrasesSpecial{};
				class Directions{};
				textThis = "";
				speechThis[] = {};
				textQueried = "";
				speechQueried[] = {};
			};
			class Amount_EN
			{
				class 0
				{
					text = "";
					speech[] = {};
				};
				class 1
				{
					text = "#article";
					speech[] = {};
				};
				class 3
				{
					text = "$STR_conv_core_Arguments_Amount_3";
					speech[] = {};
				};
				class 7
				{
					text = "$STR_conv_core_Arguments_Amount_7";
					speech[] = {};
				};
				class N
				{
					text = "$STR_conv_core_Arguments_Amount_N";
					speech[] = {};
				};
			};
			class Side_EN
			{
				class WEST
				{
					text = "$STR_conv_core_Arguments_Side_WEST";
					speech[] = {};
				};
				class EAST
				{
					text = "$STR_conv_core_Arguments_Side_EAST";
					speech[] = {};
				};
				class GUER
				{
					text = "$STR_conv_core_Arguments_Side_GUER";
					speech[] = {};
				};
				class CIV
				{
					text = "$STR_conv_core_Arguments_Side_CIV";
					speech[] = {};
				};
			};
			class Entity_EN
			{
				variant = "EN";
				textQueriedPlural = "$STR_CONV_CORE_OFTHEM";
				speechQueriedPlural[] = {};
				textQueriedSingular = "$STR_CONV_CORE_ONE";
				speechQueriedSingular[] = {};
			};
			class Place_EN
			{
				variant = "EN";
				class Phrases
				{
					class 100
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_100";
						speech[] = {};
					};
					class 250
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_250";
						speech[] = {};
					};
					class D400
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_D400";
						speech[] = {};
					};
					class N
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_N";
						speech[] = {};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_DN";
						speech[] = {};
					};
				};
				class PhrasesSpecial
				{
					class 200
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_200";
						speech[] = {};
					};
					class D400
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_D400";
						speech[] = {};
					};
					class N
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_N";
						speech[] = {};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_DN";
						speech[] = {};
					};
				};
				class Directions
				{
					class 0
					{
						text = "$STR_conv_core_Arguments_Place_Directions_0";
						speech[] = {};
					};
					class 45
					{
						text = "$STR_conv_core_Arguments_Place_Directions_45";
						speech[] = {};
					};
					class 90
					{
						text = "$STR_conv_core_Arguments_Place_Directions_90";
						speech[] = {};
					};
					class 135
					{
						text = "$STR_conv_core_Arguments_Place_Directions_135";
						speech[] = {};
					};
					class 180
					{
						text = "$STR_conv_core_Arguments_Place_Directions_180";
						speech[] = {};
					};
					class 225
					{
						text = "$STR_conv_core_Arguments_Place_Directions_225";
						speech[] = {};
					};
					class 270
					{
						text = "$STR_conv_core_Arguments_Place_Directions_270";
						speech[] = {};
					};
					class 315
					{
						text = "$STR_conv_core_Arguments_Place_Directions_315";
						speech[] = {};
					};
				};
				textThis = "$STR_CONV_CORE_HERE";
				speechThis[] = {};
				textQueried = "$STR_CONV_CORE_THERE";
				speechQueried[] = {};
			};
			class Time_EN
			{
				class 180
				{
					text = "$STR_conv_core_Arguments_Time_180";
					speech[] = {};
				};
				class 1800
				{
					text = "$STR_conv_core_Arguments_Time_1800";
					speech[] = {};
				};
				class 7200
				{
					text = "$STR_conv_core_Arguments_Time_7200";
					speech[] = {};
				};
				class D0
				{
					text = "$STR_conv_core_Arguments_Time_D0";
					speech[] = {};
				};
				class D1
				{
					text = "$STR_conv_core_Arguments_Time_D1";
					speech[] = {};
				};
				class N
				{
					text = "$STR_conv_core_Arguments_Time_N";
					speech[] = {};
				};
			};
			class PlaceThis_TK
			{
				variant = "##LANG##";
				class Phrases
				{
					class DN
					{
						text = "%PLACE";
						speech[] = {"%PLACE"};
					};
				};
				class PhrasesSpecial{};
				class Directions{};
				textThis = "";
				speechThis[] = {};
				textQueried = "";
				speechQueried[] = {};
			};
			class Amount_TK
			{
				class 0
				{
					text = "";
					speech[] = {};
				};
				class 1
				{
					text = "#article";
					speech[] = {};
				};
				class 3
				{
					text = "$STR_conv_core_Arguments_Amount_3";
					speech[] = {};
				};
				class 7
				{
					text = "$STR_conv_core_Arguments_Amount_7";
					speech[] = {};
				};
				class N
				{
					text = "$STR_conv_core_Arguments_Amount_N";
					speech[] = {};
				};
			};
			class Side_TK
			{
				class WEST
				{
					text = "$STR_conv_core_Arguments_Side_WEST";
					speech[] = {};
				};
				class EAST
				{
					text = "$STR_conv_core_Arguments_Side_EAST";
					speech[] = {};
				};
				class GUER
				{
					text = "$STR_conv_core_Arguments_Side_GUER";
					speech[] = {};
				};
				class CIV
				{
					text = "$STR_conv_core_Arguments_Side_CIV";
					speech[] = {};
				};
			};
			class Entity_TK
			{
				variant = "TK";
				textQueriedPlural = "$STR_CONV_CORE_OFTHEM";
				speechQueriedPlural[] = {};
				textQueriedSingular = "$STR_CONV_CORE_ONE";
				speechQueriedSingular[] = {};
			};
			class Place_TK
			{
				variant = "TK";
				class Phrases
				{
					class 100
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_100";
						speech[] = {};
					};
					class 250
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_250";
						speech[] = {};
					};
					class D400
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_D400";
						speech[] = {};
					};
					class N
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_N";
						speech[] = {};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_Place_Phrases_DN";
						speech[] = {};
					};
				};
				class PhrasesSpecial
				{
					class 200
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_200";
						speech[] = {};
					};
					class D400
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_D400";
						speech[] = {};
					};
					class N
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_N";
						speech[] = {};
					};
					class DN
					{
						text = "$STR_conv_core_Arguments_Place_PhrasesSpecial_DN";
						speech[] = {};
					};
				};
				class Directions
				{
					class 0
					{
						text = "$STR_conv_core_Arguments_Place_Directions_0";
						speech[] = {};
					};
					class 45
					{
						text = "$STR_conv_core_Arguments_Place_Directions_45";
						speech[] = {};
					};
					class 90
					{
						text = "$STR_conv_core_Arguments_Place_Directions_90";
						speech[] = {};
					};
					class 135
					{
						text = "$STR_conv_core_Arguments_Place_Directions_135";
						speech[] = {};
					};
					class 180
					{
						text = "$STR_conv_core_Arguments_Place_Directions_180";
						speech[] = {};
					};
					class 225
					{
						text = "$STR_conv_core_Arguments_Place_Directions_225";
						speech[] = {};
					};
					class 270
					{
						text = "$STR_conv_core_Arguments_Place_Directions_270";
						speech[] = {};
					};
					class 315
					{
						text = "$STR_conv_core_Arguments_Place_Directions_315";
						speech[] = {};
					};
				};
				textThis = "$STR_CONV_CORE_HERE";
				speechThis[] = {};
				textQueried = "$STR_CONV_CORE_THERE";
				speechQueried[] = {};
			};
			class Time_TK
			{
				class 180
				{
					text = "$STR_conv_core_Arguments_Time_180";
					speech[] = {};
				};
				class 1800
				{
					text = "$STR_conv_core_Arguments_Time_1800";
					speech[] = {};
				};
				class 7200
				{
					text = "$STR_conv_core_Arguments_Time_7200";
					speech[] = {};
				};
				class D0
				{
					text = "$STR_conv_core_Arguments_Time_D0";
					speech[] = {};
				};
				class D1
				{
					text = "$STR_conv_core_Arguments_Time_D1";
					speech[] = {};
				};
				class N
				{
					text = "$STR_conv_core_Arguments_Time_N";
					speech[] = {};
				};
			};
		};
		class Special
		{
			class Article
			{
				textBeforeVocal = "$STR_CONV_CORE_AN";
				speechBeforeVocal[] = {};
				textBeforeConsonant = "$STR_CONV_CORE_A";
				speechBeforeConsonant[] = {};
			};
		};
		startWithVocal[] = {"hour"};
		startWithConsonant[] = {"europe","university"};
		reactPlayer = "ca\characters_e\data\scripts\reactCore_Full.sqf";
		react = "ca\characters_e\data\scripts\reactCore_Full.fsm";
	};
	class Core_Degenerated_E
	{
		class Sentences
		{
			class A_NotUnderstood1_EN
			{
				text = "$STR_EP1_A_NOTUNDERSTOOD1_1";
				speech[] = {"SorryIDontUnderstand_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class A_NotUnderstood2_EN
			{
				text = "$STR_EP1_A_NOTUNDERSTOOD2_1";
				speech[] = {"UhWhatQ_EN"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class A_NotUnderstood1_TK
			{
				text = "$STR_EP1_A_NOTUNDERSTOOD1_1";
				speech[] = {"SorryIDontUnderstand_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
			class A_NotUnderstood2_TK
			{
				text = "$STR_EP1_A_NOTUNDERSTOOD2_1";
				speech[] = {"UhWhatQ_TK"};
				class Arguments
				{
					class PlayerInitiated
					{
						type = "simple";
					};
				};
			};
		};
		class Arguments{};
		class Special{};
		startWithVocal[] = {};
		startWithConsonant[] = {};
		reactPlayer = "ca\characters_e\data\scripts\reactCore_Degenerated.sqf";
		react = "ca\characters_e\data\scripts\reactCore_Degenerated.fsm";
	};
};
class CfgTalkSentences_E
{
	class GRT_Hi
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","civilianToCivilian","toSameRank","morning","day","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class GRT_WhatQ
	{
		tags[] = {"greeting","answer","negative","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class GRT_HiThereE
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCivilian","toSameRank","morning","day","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class GRT_SirQ
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","combatantToCivilian","civilianToCombatant","toHigherRank","day","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_PrivateQ
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","toLowerRank","toPRIVATE","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_YesPrivate
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toLowerRank","toPRIVATE","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_CorporalQ
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","toLowerRank","toCORPORAL","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_YesCorporal
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toLowerRank","toCORPORAL","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_SergeantQ
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","toLowerRank","toSERGEANT","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_YesSergeant
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toLowerRank","toSERGEANT","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_LieutenantQ
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","toLowerRank","toLIEUTENANT","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_YesLieutenant
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toLowerRank","toLIEUTENANT","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_CaptainQ
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","toLowerRank","toCAPTAIN","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_YesCaptain
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toLowerRank","toCAPTAIN","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_MajorQ
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","toLowerRank","toMAJOR","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_YesMajor
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toLowerRank","toMAJOR","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_ColonelQ
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","toLowerRank","toCOLONEL","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_YesColonel
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toLowerRank","toCOLONEL","morning","day","evening","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_GoodDaySir
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCombatant","toHigherRank","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_GoodEveningSir
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCombatant","toHigherRank","evening","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_GoodMorningSir
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCombatant","toHigherRank","morning","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_SoldierQ
	{
		tags[] = {"greeting","question","answer","neutral","positive","toLowerRank","combatantToCombatant","civilianToCombatant","day","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_MorninSoldier
	{
		tags[] = {"greeting","question","answer","positive","toLowerRank","morning","combatantToCombatant","civilianToCombatant","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_EveninSoldier
	{
		tags[] = {"greeting","question","answer","positive","evening","combatantToCombatant","civilianToCombatant","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_WhatDoYouWantQ
	{
		tags[] = {"greeting","answer","negative","civilianToCombatant","combatantToCombatant","day","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_WhatDoYouNeedQ
	{
		tags[] = {"greeting","answer","neutral","civilianToCombatant","day","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_DND6
	{
		tags[] = {"greeting","answer","neutral","combatantToCombatant","toSameRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class GRT_DND7
	{
		tags[] = {"greeting","answer","positive","combatantToCombatant","toSameRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class GRT_DND8
	{
		tags[] = {"greeting","answer","positive","neutral","combatantToCombatant","toSameRank","toHigherRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class GRT_DND9
	{
		tags[] = {"greeting","answer","negative","combatantToCombatant","toSameRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class GRT_MaamQ
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCivilian","day","night","maleToFemale","notInCombat","notSurrendered","respect"};
	};
	class GRT_DontTouchMeE
	{
		tags[] = {"greeting","answer","negative","civilianToCombatant","day","night","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_YesSir
	{
		tags[] = {"greeting","answer","neutral","positive","combatantToCombatant","toHigherRank","day","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_HelloSir
	{
		tags[] = {"greeting","question","answer","positive","combatantToCivilian","civilianToCombatant","combatantToCombatant","toHigherRank","day","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_Yep
	{
		tags[] = {"greeting","question","answer","neutral","combatantToCombatant","toSameRank","day","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_YeahQ
	{
		tags[] = {"greeting","question","answer","neutral","negative","combatantToCombatant","toSameRank","day","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_DND1
	{
		tags[] = {"greeting","answer","neutral","combatantToCombatant","toSameRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class GRT_DND2
	{
		tags[] = {"greeting","answer","neutral","combatantToCombatant","toSameRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class GRT_DND3
	{
		tags[] = {"greeting","answer","positive","neutral","combatantToCombatant","toSameRank","toHigherRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class GRT_DND4
	{
		tags[] = {"greeting","answer","negative","combatantToCombatant","toSameRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class GRT_DND5
	{
		tags[] = {"greeting","answer","neutral","combatantToCombatant","toSameRank","toLowerRank","inCombat","morning","day","evening","night","maleToMale","notSurrendered","respect"};
	};
	class GRT_Hello
	{
		tags[] = {"greeting","question","answer","neutral","positive","combatantToCombatant","civilianToCivilian","toSameRank","day","evening","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class GRT_GoodDay
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","combatantToCivilian","civilianToCivilian","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_GoodMorning
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","combatantToCivilian","civilianToCivilian","morning","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_GoodEvening
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","combatantToCivilian","civilianToCivilian","evening","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_Positive1
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_Positive2
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_Positive3
	{
		tags[] = {"greeting","question","answer","positive","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_Positive4
	{
		tags[] = {"greeting","question","answer","neutral","positive","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_Negative1
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class GRT_Negative3
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class GRT_Negative2
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class GRT_Negative4
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class GRT_Negative5
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class GRT_Negative6
	{
		tags[] = {"greeting","question","answer","negative","civilianToCombatant","day","maleToMale","femaleToMale","notInCombat","notSurrendered","noRespect"};
	};
	class GRT_Query1
	{
		tags[] = {"greeting","question","positive","combatantToCivilian","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_Query2
	{
		tags[] = {"greeting","question","positive","combatantToCivilian","day","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_Query3
	{
		tags[] = {"greeting","question","negative","combatantToCivilian","morning","day","evening","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_Query4
	{
		tags[] = {"greeting","question","negative","combatantToCivilian","morning","day","evening","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_Refusal1
	{
		tags[] = {"greeting","answer","positive","neutral","negative","civilianToCombatant","noRespect","morning","day","evening","night","maleToMale","femaleToMale","notInCombat","notSurrendered"};
	};
	class GRT_Refusal2
	{
		tags[] = {"greeting","answer","positive","neutral","negative","civilianToCombatant","noRespect","morning","day","evening","night","maleToMale","femaleToMale","notInCombat","notSurrendered"};
	};
	class GRT_Refusal3
	{
		tags[] = {"greeting","answer","positive","neutral","negative","civilianToCombatant","noRespect","morning","day","evening","night","maleToMale","femaleToMale","notInCombat","notSurrendered"};
	};
	class GRT_WhatsUpQ
	{
		tags[] = {"greeting","question","answer","neutral","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_HowsThingsQ
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class GRT_HowAreYouQ
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class GRT_HeyE
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","femaleToMale","maleToFemale","femaleToFemale","notInCombat","notSurrendered","respect"};
	};
	class GRT_HeyMan
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_HiDude
	{
		tags[] = {"greeting","question","answer","positive","combatantToCombatant","civilianToCivilian","toSameRank","day","night","maleToMale","femaleToMale","notInCombat","notSurrendered","respect"};
	};
	class GRT_IWillOnlyTellYouMyNameRankAndSerialNumber
	{
		tags[] = {"greeting","question","answer","negative","neutral","positive","combatantToCombatant","civilianToCombatant","toSameRank","toLowerRank","toHigherRank","morning","day","evening","night","maleToMale","notInCombat","inCombat","surrendered","respect","noRespect"};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class TalkTopics
		{
			core = "Core_E";
			core_en = "Core_Degenerated_E";
			core_tk = "Core_Degenerated_E";
		};
		class HitPoints
		{
			class HitHead;
			class HitBody;
		};
		htMin = 60;
		htMax = 1800;
		afMax = 30;
		mfMax = 0;
		mFact = 1;
		tBody = 37;
		class SoundEnvironExt
		{
			wave_plate[] = {{ "\CA\sounds\Characters\Wavy_plate\run_01",0.019952621,1,45 },{ "\CA\sounds\Characters\Wavy_plate\run_02",0.019952621,1,45 },{ "\CA\sounds\Characters\Wavy_plate\run_03",0.019952621,1,45 },{ "\CA\sounds\Characters\Wavy_plate\run_04",0.019952621,1,45 },{ "\CA\sounds\Characters\Wavy_plate\run_05",0.019952621,1,45 },{ "\CA\sounds\Characters\Wavy_plate\run_06",0.019952621,1,45 },{ "\CA\sounds\Characters\Wavy_plate\run_08",0.019952621,1,45 },{ "\CA\sounds\Characters\Wavy_plate\run_08",0.019952621,1,45 },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_01",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_02",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_03",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_04",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_05",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_06",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_08",0.019952621,1,45 } },{ "run",{ "\CA\sounds\Characters\Wavy_plate\run_08",0.019952621,1,45 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_01",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_02",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_03",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_04",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_05",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_06",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_07",0.019952621,1,35 } },{ "walk",{ "\CA\sounds\Characters\Wavy_plate\walk_08",0.019952621,1,35 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_01",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_02",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_03",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_04",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_05",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_06",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_07",0.019952621,1,48 } },{ "sprint",{ "\CA\sounds\Characters\Wavy_plate\sprint_08",0.019952621,1,48 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl1",0.019952621,1,20 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl2",0.031622775,1,20 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl3",0.031622775,1,20 } },{ "crawl",{ "\CA\sounds\Characters\normal\crawl4",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up1",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up2",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up3",0.031622775,1,20 } },{ "standup",{ "\CA\sounds\Characters\normal\up4",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down1",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down2",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down3",0.031622775,1,20 } },{ "laydown",{ "\CA\sounds\Characters\normal\down4",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground1",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground2",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground3",0.031622775,1,20 } },{ "bodyfall",{ "\CA\sounds\Characters\normal\fall_to_ground4",0.031622775,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim5",0.1,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim6",0.1,1,20 } },{ "swim",{ "\CA\sounds\Characters\swim\swim7",0.1,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding1",0.031622775,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding2",0.031622775,1,20 } },{ "slide",{ "\CA\sounds\Characters\sliding\sliding3",0.031622775,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_01",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_02",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_03",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_04",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_05",0.019952621,1,20 } },{ "ladder",{ "\CA\sounds\Characters\Ladder\ladder_06",0.019952621,1,20 } }};
		};
		leftLegToKnee[] = {"LeftUpLeg",0.5,"LeftUpLegRoll",0};
		leftLegFromKnee[] = {"LeftLeg",0,"LeftLegRoll",0.5};
		leftHeel = "leftFoot";
		leftHip = "pelvis";
		leftFoot[] = {"LeftToeBase"};
		leftLegPoints[] = {"lfemur","lknee","lknee_axis","lankle"};
		rightLegToKnee[] = {"rightUpLeg",0.5,"rightUpLegRoll",0};
		rightLegFromKnee[] = {"rightLeg",0,"rightLegRoll",0.5};
		rightHeel = "rightFoot";
		rightHip = "pelvis";
		rightFoot[] = {"RightToeBase"};
		rightLegPoints[] = {"rfemur","rknee","rknee_axis","rankle"};
	};
	class SoldierEB: CAManBase
	{
		class TalkTopics: TalkTopics{};
		threat[] = {1,0.1,0.1};
	};
	class SoldierWB: CAManBase
	{
		class TalkTopics: TalkTopics{};
		threat[] = {1,0.1,0.1};
	};
	class SoldierGB: CAManBase
	{
		class TalkTopics: TalkTopics{};
		threat[] = {1,0.1,0.1};
	};
	class Civilian: CAManBase
	{
		rarityUrban = -1;
		faction = "CIV";
		genericNames = "CzechMen";
		portrait = "\Ca\characters\data\portraits\comBarHead_civ_man_ca.paa";
		armor = 2.5;
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
		};
		displayName = "$STR_DN_CIVILIAN";
		accuracy = 2.0;
		camouflage = 2;
		minFireTime = 20;
		class TalkTopics;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_civilian"};
				speechPlural[] = {"veh_civilians"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_civilian_CZ"};
				speechPlural[] = {"veh_civilians_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_civilian_CZ4P"};
				speechPlural[] = {"veh_civilians_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_civilian_RU"};
				speechPlural[] = {"veh_civilians_RU"};
			};
		};
		TextPlural = "$STR_DN_civilians";
		TextSingular = "$STR_DN_civilian";
		nameSound = "veh_civilian";
		languages[] = {"TK"};
		class EventHandlers;
		fsmFormation = "ca\characters_E\data\scripts\formationC.fsm";
		fsmDanger = "ca\characters_E\data\scripts\formationCDanger.fsm";
	};
	class TK_CIV_Takistani_Base_EP1: Civilian
	{
		portrait = "\Ca\characters_E\data\portraits\civ_man_CA";
		displayName = "$STR_EP1_DN_TK_CIV_Takistani_Base_EP1";
		scope = 0;
		accuracy = 0.7;
		expansion = 1;
		identityTypes[] = {"Language_TK_EP1","Head_TK_CIV","Civ_Glasses"};
		faction = "BIS_TK_CIV";
		faceType = "Man";
		vehicleClass = "Men";
		class EventHandlers;
		hiddenSelections[] = {"Camo"};
		urbanRarity = 0.5;
		genericNames = "TakistaniMen";
		languages[] = {"TK"};
		class TalkTopics: TalkTopics
		{
			core_tk = "Core_Full_E";
		};
	};
	class TK_CIV_Takistani01_EP1: TK_CIV_Takistani_Base_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_TK_CIV_Takistani01_EP1";
		model = "\CA\characters_E\civil\Tak_civil01\Tak_civil01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\civil\Tak_civil01\Data\Tak_civil01.rvmat","CA\characters_E\civil\Tak_civil01\Data\W1_Tak_civil01.rvmat","CA\characters_E\civil\Tak_civil01\Data\W2_Tak_civil01.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_1_co.paa"",""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_2_co.paa"",""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_3_co.paa"",""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_4_co.paa"",""\CA\characters_E\civil\Tak_civil01\Data\Tak_civil01_5_co.paa""] select floor random 5]";
		};
	};
	class TK_CIV_Takistani02_EP1: TK_CIV_Takistani_Base_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_TK_CIV_Takistani02_EP1";
		model = "\CA\characters_E\civil\Tak_civil02\Tak_civil02";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\civil\Tak_civil02\Data\Tak_civil02.rvmat","CA\characters_E\civil\Tak_civil02\Data\W1_Tak_civil02.rvmat","CA\characters_E\civil\Tak_civil02\Data\W2_Tak_civil02.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil02\Data\Tak_civil02_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil02\Data\Tak_civil02_1_co.paa"",""\CA\characters_E\civil\Tak_civil02\Data\Tak_civil02_2_co.paa"",""\CA\characters_E\civil\Tak_civil02\Data\Tak_civil02_3_co.paa"",""\CA\characters_E\civil\Tak_civil02\Data\Tak_civil02_4_co.paa"",""\CA\characters_E\civil\Tak_civil02\Data\Tak_civil02_5_co.paa""] select floor random 5]";
		};
	};
	class TK_CIV_Takistani03_EP1: TK_CIV_Takistani_Base_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_TK_CIV_Takistani03_EP1";
		model = "\CA\characters_E\civil\Tak_civil03\Tak_civil03";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\civil\Tak_civil03\Data\Tak_civil03.rvmat","CA\characters_E\civil\Tak_civil03\Data\W1_Tak_civil03.rvmat","CA\characters_E\civil\Tak_civil03\Data\W2_Tak_civil03.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_1_co.paa"",""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_2_co.paa"",""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_3_co.paa"",""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_4_co.paa"",""\CA\characters_E\civil\Tak_civil03\Data\Tak_civil03_5_co.paa""] select floor random 5]";
		};
	};
	class TK_CIV_Takistani04_EP1: TK_CIV_Takistani_Base_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_TK_CIV_Takistani04_EP1";
		model = "\CA\characters_E\civil\Tak_civil04\Tak_civil04";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\civil\Tak_civil04\Data\Tak_civil04.rvmat","CA\characters_E\civil\Tak_civil04\Data\W1_Tak_civil04.rvmat","CA\characters_E\civil\Tak_civil04\Data\W2_Tak_civil04.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_1_co.paa"",""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_2_co.paa"",""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_3_co.paa"",""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_4_co.paa"",""\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_5_co.paa""] select floor random 5]";
		};
	};
	class TK_CIV_Takistani05_EP1: TK_CIV_Takistani_Base_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_TK_CIV_Takistani05_EP1";
		model = "\CA\characters_E\civil\Tak_civil05\Tak_civil05";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\civil\Tak_civil05\Data\Tak_civil05.rvmat","CA\characters_E\civil\Tak_civil05\Data\W1_Tak_civil05.rvmat","CA\characters_E\civil\Tak_civil05\Data\W2_Tak_civil05.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil05\Data\Tak_civil05_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil05\Data\Tak_civil05_1_co.paa"",""\CA\characters_E\civil\Tak_civil05\Data\Tak_civil05_2_co.paa"",""\CA\characters_E\civil\Tak_civil05\Data\Tak_civil05_3_co.paa"",""\CA\characters_E\civil\Tak_civil05\Data\Tak_civil05_4_co.paa"",""\CA\characters_E\civil\Tak_civil05\Data\Tak_civil05_5_co.paa""] select floor random 5]";
		};
	};
	class TK_CIV_Takistani06_EP1: TK_CIV_Takistani_Base_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_TK_CIV_Takistani06_EP1";
		model = "\CA\characters_E\civil\Tak_civil06\Tak_civil06";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\civil\Tak_civil06\Data\Tak_civil06.rvmat","CA\characters_E\civil\Tak_civil06\Data\W1_Tak_civil06.rvmat","CA\characters_E\civil\Tak_civil06\Data\W2_Tak_civil06.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_1_co.paa"",""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_2_co.paa"",""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_3_co.paa"",""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_4_co.paa"",""\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_5_co.paa""] select floor random 5]";
		};
	};
	class TK_CIV_Worker01_EP1: TK_CIV_Takistani_Base_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_TK_CIV_Worker01_EP1";
		model = "\Ca\characters_E\Overall\Overall";
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\characters_E\Overall\Data\Overall.rvmat","Ca\characters_E\Overall\Data\W1_Overall.rvmat","Ca\characters_E\Overall\Data\W2_Overall.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_4_co.paa"};
	};
	class TK_CIV_Worker02_EP1: TK_CIV_Worker01_EP1
	{
		displayName = "$STR_EP1_DN_TK_CIV_Worker02_EP1";
		hiddenSelectionsTextures[] = {"\Ca\characters_E\Overall\Data\Overall_3_co.paa"};
	};
	class Woman_EP1: Civilian
	{
		expansion = 1;
		scope = 0;
		accuracy = 3.9;
		vehicleClass = "Women";
		moves = "CfgMovesWomen";
		genericNames = "TakistaniWomen";
		faction = "BIS_TK_CIV";
		woman = 1;
		displayName = "$STR_DN_WOMAN";
		faceType = "WomanHead";
		identityTypes[] = {"Language_W_TK_EP1","Woman"};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_woman"};
				speechPlural[] = {"veh_women"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_woman_CZ"};
				speechPlural[] = {"veh_women_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_woman_CZ4P"};
				speechPlural[] = {"veh_women_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_woman_RU"};
				speechPlural[] = {"veh_women_RU"};
			};
		};
		TextPlural = "$STR_DN_women";
		TextSingular = "$STR_DN_woman";
		nameSound = "veh_woman";
		rarityUrban = -1;
		triggerAnim = "";
		class HitDamage
		{
			class Group0
			{
				hitSounds[] = {{ { "ca\sounds\Characters\Noises\Damage\banz-hit-01",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\banz-hit-02",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\banz-hit-03",0.17782794,1,120 },0.2 },{ { "ca\sounds\Characters\Noises\Damage\banz-hit-04",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\banz-hit-05",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\banz-hit-06",0.17782794,1,120 },0.1 },{ { "ca\sounds\Characters\Noises\Damage\banz-hit-07",0.17782794,1,120 },0.1 }};
				damageSounds[] = {{ "body",{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-01",0.056234132,1,120,0.25,5,6,10 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-02",0.056234132,1,120,0.25,5,7.5,10 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-03",0.056234132,1,120,0.25,5,6,10 } },{ "body",{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-04",0.056234132,1,120,0.25,5,7.5,10 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-07-arm",0.056234132,1,120,0.5,0,2.5,5 } },{ "hands",{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-08-arm",0.056234132,1,120,0.5,0,2.5,5 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-05-leg",0.056234132,1,120,0.5,0,1,2 } },{ "legs",{ "ca\sounds\Characters\Noises\Damage\banz-damage-g1-06-leg",0.056234132,1,120,0.5,0,1,2 } }};
			};
		};
		class SoundBreath
		{
			breath0[] = {{ { { "\ca\sounds\Characters\Noises\Breath\hanz-run-breath-01",0.056234132,1,8 },0.25 },{ { "\ca\sounds\Characters\Noises\Breath\hanz-run-breath-02",0.056234132,1,8 },0.25 },{ { "\ca\sounds\Characters\Noises\Breath\hanz-run-breath-03",0.056234132,1,8 },0.25 },{ { "\ca\sounds\Characters\Noises\Breath\hanz-run-breath-04",0.12589253,1,8 },0.25 } },{ { { "\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-01",0.056234132,1,15 },0.25 },{ { "\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-02",0.056234132,1,15 },0.25 },{ { "\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-03",0.056234132,1,15 },0.25 },{ { "\ca\sounds\Characters\Noises\Breath\hanz-run2-breath-04",0.12589253,1,15 },0.25 } },{ { { "\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-01",0.1,1,20 },0.25 },{ { "\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-02",0.1,1,20 },0.25 },{ { "\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-03",0.1,1,20 },0.25 },{ { "\ca\sounds\Characters\Noises\Breath\hanz-sprint-breath-04",0.1,1,20 },0.25 } }};
		};
		class SoundGear
		{
			primary[] = {{ "walk",{ "",0.0017782794,1,10 } },{ "run",{ "",0.0031622776,1,15 } },{ "sprint",{ "",0.0056234132,1,20 } }};
			secondary[] = {{ "walk",{ "",0.0017782794,1,10 } },{ "run",{ "",0.0031622776,1,10 } },{ "sprint",{ "",0.0056234132,1,10 } }};
		};
		class SoundEquipment
		{
			soldier[] = {{ "walk",{ "",0.0017782794,1,13 } },{ "run",{ "",0.0031622776,1,20 } },{ "sprint",{ "",0.003981071,1,25 } }};
			civilian[] = {{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-01",0.17782794,1,8 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-02",0.17782794,1,8 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-03",0.17782794,1,8 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-04",0.17782794,1,8 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-05",0.17782794,1,8 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-06",0.17782794,1,8 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-07",0.17782794,1,8 } },{ "walk",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-walk-08",0.17782794,1,8 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-01",0.1,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-02",0.1,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-03",0.1,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-04",0.1,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-05",0.1,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-06",0.1,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-07",0.1,1,15 } },{ "run",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-run-08",0.1,1,15 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-01",0.056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-02",0.056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-03",0.056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-04",0.056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-05",0.056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-06",0.056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-07",0.056234132,1,20 } },{ "sprint",{ "\ca\sounds\Characters\Noises\Equipment\civil-equipment-sprint-08",0.056234132,1,20 } }};
		};
		weapons[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {};
		respawnWeapons[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {};
		portrait = "\Ca\characters\data\portraits\comBarHead_civ_woman_ca";
		weaponSlots = "2 * 		256	 +  4*	16  + 4* 131072";
		minHeadTurnAI = -40;
		maxHeadTurnAI = 40;
		leftArmToElbow[] = {"LeftArm",0.5,"LeftArmRoll",0};
		leftArmFromElbow[] = {"LeftForeArm",0,"LeftForeArmRoll",0.5};
		leftWrist = "LeftHand";
		leftShoulder = "LeftShoulder";
		leftHand[] = {"LeftHandThumb3","LeftHandThumb2","LeftHandThumb1","LeftHandIndex3","LeftHandIndex2","LeftHandIndex1","LeftHandMiddle3","LeftHandMiddle2","LeftHandMiddle1","LeftHandRing3","LeftHandRing2","LeftHandRing1","LeftInHandRing","LeftHandPinky3","LeftHandPinky2","LeftHandPinky1"};
		leftArmPoints[] = {"LeftShoulder","lelbow","lelbow_axis","lwrist"};
		rightArmToElbow[] = {"rightArm",0.5,"rightArmRoll",0};
		rightArmFromElbow[] = {"rightForeArm",0,"rightForeArmRoll",0.5};
		rightWrist = "rightHand";
		rightShoulder = "rightShoulder";
		rightHand[] = {"rightHandThumb3","rightHandThumb2","rightHandThumb1","rightHandIndex3","rightHandIndex2","rightHandIndex1","rightHandMiddle3","rightHandMiddle2","rightHandMiddle1","rightHandRing3","rightHandRing2","rightHandRing1","rightInHandRing","rightHandPinky3","rightHandPinky2","rightHandPinky1"};
		rightArmPoints[] = {"rightShoulder","relbow","relbow_axis","rwrist"};
		class EventHandlers;
		hiddenSelections[] = {"Camo"};
		languages[] = {"TK"};
		class TalkTopics: TalkTopics
		{
			core_tk = "Core_Full_E";
		};
	};
	class TK_CIV_Woman01_EP1: Woman_EP1
	{
		scope = 2;
		model = "\CA\characters_E\Woman\Tak_Woman01\Tak_Woman01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\Woman\Tak_Woman01\Data\Tak_Woman01.rvmat","CA\characters_E\Woman\Tak_Woman01\Data\W1_Tak_Woman01.rvmat","CA\characters_E\Woman\Tak_Woman01\Data\W2_Tak_Woman01.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\Woman\Tak_Woman01\Data\Tak_Woman01_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\Woman\Tak_Woman01\Data\Tak_Woman01_1_co.paa"",""\CA\characters_E\Woman\Tak_Woman01\Data\Tak_Woman01_2_co.paa"",""\CA\characters_E\Woman\Tak_Woman01\Data\Tak_Woman01_3_co.paa"",""\CA\characters_E\Woman\Tak_Woman01\Data\Tak_Woman01_4_co.paa"",""\CA\characters_E\Woman\Tak_Woman01\Data\Tak_Woman01_5_co.paa""] select floor random 5]";
		};
		accuracy = 1000;
		portrait = "\Ca\characters_E\data\portraits\civ_woman_CA";
		displayName = "$STR_EP1_DN_TK_CIV_Woman01_EP1";
		rarityUrban = 0.5;
	};
	class TK_CIV_Woman02_EP1: TK_CIV_Woman01_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_TK_CIV_Woman02_EP1";
		model = "\CA\characters_E\Woman\Tak_Woman02\Tak_Woman02";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\Woman\Tak_Woman02\Data\Tak_Woman02.rvmat","CA\characters_E\Woman\Tak_Woman02\Data\W1_Tak_Woman02.rvmat","CA\characters_E\Woman\Tak_Woman02\Data\W2_Tak_Woman02.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\Woman\Tak_Woman02\Data\Tak_Woman02_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\Woman\Tak_Woman02\Data\Tak_Woman02_1_co.paa"",""\CA\characters_E\Woman\Tak_Woman02\Data\Tak_Woman02_2_co.paa"",""\CA\characters_E\Woman\Tak_Woman02\Data\Tak_Woman02_3_co.paa"",""\CA\characters_E\Woman\Tak_Woman02\Data\Tak_Woman02_4_co.paa"",""\CA\characters_E\Woman\Tak_Woman02\Data\Tak_Woman02_5_co.paa""] select floor random 5]";
		};
	};
	class TK_CIV_Woman03_EP1: TK_CIV_Woman01_EP1
	{
		displayName = "$STR_EP1_DN_TK_CIV_Woman03_EP1";
		model = "\CA\characters_E\Woman\Tak_Woman03\Tak_Woman03";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\Woman\Tak_Woman03\Data\Tak_Woman03.rvmat","CA\characters_E\Woman\Tak_Woman03\Data\W1_Tak_Woman03.rvmat","CA\characters_E\Woman\Tak_Woman03\Data\W2_Tak_Woman03.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\Woman\Tak_Woman03\Data\Tak_Woman03_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\Woman\Tak_Woman03\Data\Tak_Woman03_1_co.paa"",""\CA\characters_E\Woman\Tak_Woman03\Data\Tak_Woman03_2_co.paa"",""\CA\characters_E\Woman\Tak_Woman03\Data\Tak_Woman03_3_co.paa"",""\CA\characters_E\Woman\Tak_Woman03\Data\Tak_Woman03_4_co.paa"",""\CA\characters_E\Woman\Tak_Woman03\Data\Tak_Woman03_5_co.paa""] select floor random 5]";
		};
	};
	class CIV_EuroWoman01_EP1: Woman_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_CIV_EuroWoman01_EP1";
		model = "\ca\characters_E\Woman\Baker\EuroWoman01";
		identityTypes[] = {"Language_W_EN_EP1","Woman"};
		languages[] = {"EN"};
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		genericNames = "EnglishWomen";
		faction = "BIS_CIV_special";
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\Woman\Baker\Data\european_woman_01_co.paa"};
	};
	class CIV_EuroWoman02_EP1: CIV_EuroWoman01_EP1
	{
		displayName = "$STR_EP1_DN_CIV_EuroWoman02_EP1";
		model = "\ca\characters_E\Woman\Ensler\EuroWoman02";
		hiddenSelections[] = {"CamoB","Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\Woman\Ensler\Data\european_woman_02_hair_ca.paa","\ca\characters_e\Woman\Ensler\Data\european_woman_02_co.paa"};
	};
	class Dr_Annie_Baker_EP1: CIV_EuroWoman01_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Dr_Annie_Baker_EP1";
		model = "\ca\characters_E\Woman\Baker\Baker";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setidentity ""Dr_Annie_Baker""";
			HandleIdentity = 1;
		};
		hiddenSelections[] = {};
	};
	class Rita_Ensler_EP1: CIV_EuroWoman02_EP1
	{
		displayName = "$STR_EP1_DN_Rita_Ensler_EP1";
		model = "\ca\characters_E\Woman\Ensler\Ensler";
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setidentity ""Rita_Ensler""";
			HandleIdentity = 1;
		};
		hiddenSelections[] = {};
	};
	class CIV_EuroMan01_EP1: Civilian
	{
		genericNames = "EnglishMen";
		model = "\ca\characters_E\Civil\Harris\european_man_01";
		displayName = "$STR_EP1_DN_CIV_EuroMan01_EP1";
		vehicleClass = "Men";
		scope = 2;
		accuracy = 0.7;
		expansion = 1;
		identityTypes[] = {"Language_EN_EP1","Head_CIV","Civ_EU_Special"};
		faction = "BIS_CIV_special";
		faceType = "Man";
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\Civil\Harris\Data\european-man_01_co.paa"};
	};
	class CIV_EuroMan02_EP1: CIV_EuroMan01_EP1
	{
		scope = 2;
		model = "\ca\characters_E\Civil\Hladik\european_man_02";
		displayName = "$STR_EP1_DN_CIV_EuroMan02_EP1";
		hiddenSelectionsTextures[] = {"\ca\characters_e\Civil\Hladik\Data\european-man_02_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\characters_e\civil\hladik\data\european-man_02.rvmat","Ca\characters_E\Civil\Hladik\Data\w1_european-man_02.rvmat","Ca\characters_E\Civil\Hladik\Data\w2_european-man_02.rvmat"};
		};
	};
	class Haris_Press_EP1: CIV_EuroMan01_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Haris_Press_EP1";
		model = "\ca\characters_E\Civil\Harris\Harris";
		hiddenSelections[] = {};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setidentity ""Haris_Press_EP1""";
			HandleIdentity = 1;
		};
	};
	class Dr_Hladik_EP1: CIV_EuroMan02_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Dr_Hladik_EP1";
		model = "\ca\characters_E\Civil\Hladik\Hladik";
		hiddenSelections[] = {};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setidentity ""Dr_Hladik""";
			HandleIdentity = 1;
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"Ca\characters_E\Civil\Hladik\Data\hladik.rvmat","Ca\characters_E\Civil\Hladik\Data\W1_hladik.rvmat","Ca\characters_E\Civil\Hladik\Data\W2_hladik.rvmat"};
		};
	};
	class Citizen: Civilian
	{
		model = "\ca\characters_e\civil\citizen\citizen";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_e\Civil\Citizen\data\citizen.rvmat","ca\characters_e\Civil\Citizen\data\w1_citizen.rvmat","ca\characters_e\Civil\Citizen\data\w2_citizen.rvmat"};
		};
	};
	class Citizen2: Citizen
	{
		class TalkTopics;
	};
	class Citizen2_EP1: Citizen2
	{
		expansion = 1;
		scope = 2;
		faction = "BIS_CIV_special";
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
		identityTypes[] = {"Language_EN_EP1","Head_CIV","Civ_EU_Special"};
		genericNames = "EnglishMen";
	};
	class Citizen3: Citizen
	{
		class TalkTopics;
	};
	class Citizen3_EP1: Citizen3
	{
		expansion = 1;
		scope = 2;
		faction = "BIS_CIV_special";
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
		identityTypes[] = {"Language_EN_EP1","Head_CIV","Civ_EU_Special"};
		genericNames = "EnglishMen";
	};
	class Profiteer: Civilian
	{
		model = "\Ca\characters_E\Civil\Profiteer\Profiteer";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_e\Civil\Profiteer\data\Profiteer.rvmat","ca\characters_e\Civil\Profiteer\data\W1_Profiteer.rvmat","ca\characters_e\Civil\Profiteer\data\W2_Profiteer.rvmat"};
		};
	};
	class Profiteer2: Profiteer
	{
		class TalkTopics;
	};
	class Profiteer2_EP1: Profiteer2
	{
		expansion = 1;
		scope = 2;
		faction = "BIS_CIV_special";
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
		identityTypes[] = {"Language_EN_EP1","Head_CIV","Civ_EU_Special"};
		genericNames = "EnglishMen";
	};
	class Functionary: Civilian
	{
		model = "\Ca\characters_E\Civil\Functionary\Functionary";
	};
	class Functionary1: Functionary
	{
		class TalkTopics;
	};
	class Functionary1_EP1: Functionary1
	{
		expansion = 1;
		scope = 2;
		faction = "BIS_CIV_special";
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
		identityTypes[] = {"Language_EN_EP1","Head_CIV","Civ_EU_Special"};
		genericNames = "EnglishMen";
	};
	class Functionary2: Functionary
	{
		class TalkTopics;
	};
	class Functionary2_EP1: Functionary2
	{
		expansion = 1;
		scope = 2;
		faction = "BIS_CIV_special";
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
		identityTypes[] = {"Language_EN_EP1","Head_CIV","Civ_EU_Special"};
		genericNames = "EnglishMen";
	};
	class Pilot: Civilian
	{
		class TalkTopics;
	};
	class Pilot_EP1: Pilot
	{
		expansion = 1;
		scope = 2;
		faction = "BIS_CIV_special";
		model = "\Ca\characters_E\Civil\Pilot\pilot";
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
		identityTypes[] = {"Language_EN_EP1","Head_CIV","pilot_sunglasses"};
		genericNames = "EnglishMen";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_e\Civil\Pilot\Data\camelpilot.rvmat","ca\characters_e\Civil\Pilot\Data\Pilot_W1.rvmat","ca\characters_e\Civil\Pilot\Data\Pilot_W2.rvmat"};
		};
	};
	class TK_INS_Soldier_Base_EP1: SoldierEB
	{
		expansion = 1;
		portrait = "\Ca\characters_E\data\portraits\loc_soldier_CA";
		identityTypes[] = {"Language_TK_EP1","Head_TK_INS","Civ_Glasses","Civ_SunGlasses"};
		faceType = "Man";
		vehicleClass = "Men";
		genericNames = "TakistaniMen";
		faction = "BIS_TK_INS";
		displayName = "$STR_EP1_DN_TK_INS_Soldier_Base_EP1";
		scope = 0;
		accuracy = 0.7;
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		canCarryBackPack = 1;
		camouflage = 1.4;
		minFireTime = 10;
		cost = 40000;
		hiddenSelections[] = {"Camo"};
		class EventHandlers;
		class TalkTopics: TalkTopics
		{
			core_tk = "Core_Full_E";
		};
		languages[] = {"TK"};
	};
	class TK_INS_Soldier_EP1: TK_INS_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_INS_Soldier_EP1";
		weapons[] = {"AK_74","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK"};
		respawnWeapons[] = {"AK_74","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK"};
		model = "\CA\characters_E\LOC\LOC_soldier01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier01.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor01_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor01_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor01_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor01_3_co.paa""] select floor random 3]";
		};
	};
	class TK_INS_Soldier_AAT_EP1: TK_INS_Soldier_EP1
	{
		displayName = "$STR_EP1_DN_TK_INS_Soldier_AAT_EP1";
		backpack = "TK_RPG_Backpack_EP1";
	};
	class TK_INS_Soldier_2_EP1: TK_INS_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_INS_Soldier_2_EP1";
		backpack = "TKG_ALICE_Pack_AmmoAK74_EP1";
		weapons[] = {"AK_74_GL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","1Rnd_HE_GP25","1Rnd_HE_GP25","1Rnd_HE_GP25","1Rnd_HE_GP25"};
		respawnWeapons[] = {"AK_74_GL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","1Rnd_HE_GP25","1Rnd_HE_GP25","1Rnd_HE_GP25","1Rnd_HE_GP25"};
		model = "\CA\characters_E\LOC\LOC_soldier04";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier04.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier04.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier04.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor04_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor04_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor04_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor04_3_co.paa""] select floor random 3]";
		};
	};
	class TK_INS_Soldier_3_EP1: TK_INS_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_INS_Soldier_3_EP1";
		weapons[] = {"LeeEnfield","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"10x_303","10x_303","10x_303","10x_303","10x_303"};
		respawnWeapons[] = {"LeeEnfield","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"10x_303","10x_303","10x_303"};
		model = "\CA\characters_E\LOC\LOC_soldier02";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier02.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor02_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor02_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor02_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor02_3_co.paa""] select floor random 3]";
		};
	};
	class TK_INS_Soldier_4_EP1: TK_INS_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_INS_Soldier_4_EP1";
		backpack = "TKA_Assault_Pack_Ammo_EP1";
		weapons[] = {"FN_FAL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL"};
		respawnWeapons[] = {"FN_FAL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL"};
		model = "\CA\characters_E\LOC\LOC_soldier05";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier05.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier05.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier05.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor05_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor05_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor05_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor05_3_co.paa""] select floor random 3]";
		};
	};
	class TK_INS_Soldier_AA_EP1: TK_INS_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_INS_Soldier_AA_EP1";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		weapons[] = {"AKS_74_U","Strela","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","Strela"};
		respawnWeapons[] = {"AKS_74_U","Strela","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","Strela"};
		model = "\CA\characters_E\LOC\LOC_soldier04";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier04.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier04.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier04.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor04_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor04_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor04_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor04_3_co.paa""] select floor random 3]";
		};
		threat[] = {1,0.1,0.7};
	};
	class TK_INS_Soldier_AT_EP1: TK_INS_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		threat[] = {1,0.6,0.1};
		displayName = "$STR_EP1_DN_TK_INS_Soldier_AT_EP1";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_launcherSoldier"};
				speechPlural[] = {"veh_launcherSoldiers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ"};
				speechPlural[] = {"veh_launcherSoldiers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ4P"};
				speechPlural[] = {"veh_launcherSoldiers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_launcherSoldier_RU"};
				speechPlural[] = {"veh_launcherSoldiers_RU"};
			};
		};
		TextPlural = "$STR_DN_launcherSoldiers";
		TextSingular = "$STR_DN_launcherSoldier";
		nameSound = "veh_launcherSoldier";
		weapons[] = {"AK_74","RPG7V","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","PG7VL","PG7VL"};
		respawnWeapons[] = {"AK_74","RPG7V","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","PG7VL"};
		model = "\CA\characters_E\LOC\LOC_soldier01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier01.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor01_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor01_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor01_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor01_3_co.paa""] select floor random 3]";
		};
	};
	class TK_INS_Soldier_TL_EP1: TK_INS_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_INS_Soldier_TL_EP1";
		Icon = "\Ca\characters2\data\icon\i_leader_CA.paa";
		weapons[] = {"AK_74_GL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","SmokeShell","SmokeShellBlue","1Rnd_HE_GP25","1Rnd_HE_GP25","1Rnd_HE_GP25","1Rnd_HE_GP25"};
		respawnWeapons[] = {"AK_74_GL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","1Rnd_HE_GP25","1Rnd_HE_GP25","SmokeShellBlue"};
		model = "\CA\characters_E\LOC\LOC_soldier03";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier03.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier03.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier03.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor03_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor03_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor03_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor03_3_co.paa""] select floor random 3]";
		};
	};
	class TK_INS_Soldier_Sniper_EP1: TK_INS_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_INS_Soldier_Sniper_EP1";
		threat[] = {1,0.3,0.3};
		weapons[] = {"AKS_74_pso","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","SmokeShell","SmokeShellBlue"};
		respawnWeapons[] = {"AKS_74_pso","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","SmokeShellBlue"};
		model = "\CA\characters_E\LOC\LOC_soldier03";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier03.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier03.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier03.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor03_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor03_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor03_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor03_3_co.paa""] select floor random 3]";
		};
	};
	class TK_INS_Soldier_AR_EP1: TK_INS_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_INS_Soldier_AR_EP1";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		backpack = "TK_Assault_Pack_RPK_EP1";
		weapons[] = {"RPK_74","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"75Rnd_545x39_RPK","75Rnd_545x39_RPK","75Rnd_545x39_RPK","75Rnd_545x39_RPK"};
		respawnWeapons[] = {"RPK_74","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"75Rnd_545x39_RPK","75Rnd_545x39_RPK","75Rnd_545x39_RPK"};
		threat[] = {1,0.1,0.3};
		model = "\CA\characters_E\LOC\LOC_soldier05";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier05.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier05.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier05.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor05_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor05_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor05_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor05_3_co.paa""] select floor random 3]";
		};
	};
	class TK_INS_Soldier_MG_EP1: TK_INS_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_INS_Soldier_MG_EP1";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_mgunner"};
				speechPlural[] = {"veh_mgunners"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_mgunner_CZ"};
				speechPlural[] = {"veh_mgunners_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_mgunner_CZ4P"};
				speechPlural[] = {"veh_mgunners_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_mgunner_RU"};
				speechPlural[] = {"veh_mgunners_RU"};
			};
		};
		TextPlural = "$STR_DN_mgunners";
		TextSingular = "$STR_DN_mgunner";
		nameSound = "veh_mgunner";
		weapons[] = {"PK","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
		threat[] = {1,0.1,0.6};
		respawnWeapons[] = {"PK","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
		model = "\CA\characters_E\LOC\LOC_soldier02";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier02.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor02_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor02_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor02_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor02_3_co.paa""] select floor random 3]";
		};
	};
	class TK_INS_Bonesetter_EP1: TK_INS_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		attendant = 1;
		displayName = "$STR_EP1_DN_TK_INS_Bonesetter_EP1";
		icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		canCarryBackPack = 0;
		weapons[] = {"LeeEnfield","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"10x_303","10x_303","10x_303","10x_303","10x_303"};
		respawnWeapons[] = {"LeeEnfield","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"10x_303","10x_303","10x_303"};
		model = "\CA\characters_E\LOC\LOC_soldier05";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier05.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier05.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier05.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor05_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor05_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor05_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor05_3_co.paa""] select floor random 3]";
		};
	};
	class TK_INS_Warlord_EP1: TK_INS_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_INS_Warlord_EP1";
		icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		weapons[] = {"AKS_74_U","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellBlue"};
		respawnWeapons[] = {"AKS_74_U","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","SmokeShellBlue"};
		model = "\CA\characters_E\LOC\LOC_soldier02";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier02.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_opfor02_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_opfor02_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor02_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_opfor02_3_co.paa""] select floor random 3]";
		};
	};
	class TK_GUE_Soldier_Base_EP1: SoldierGB
	{
		expansion = 1;
		portrait = "\Ca\characters_E\data\portraits\loc_soldier_CA";
		identityTypes[] = {"Language_TK_EP1","Head_TK_GUE","Civ_Glasses","Civ_SunGlasses"};
		faceType = "Man";
		vehicleClass = "Men";
		faction = "BIS_TK_GUE";
		genericNames = "TakistaniMen";
		displayName = "$STR_EP1_DN_TK_GUE_Soldier_Base_EP1";
		scope = 0;
		accuracy = 0.7;
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		canCarryBackPack = 1;
		camouflage = 1.4;
		minFireTime = 10;
		cost = 40000;
		hiddenSelections[] = {"Camo"};
		class EventHandlers;
		class TalkTopics: TalkTopics
		{
			core_tk = "Core_Full_E";
		};
		languages[] = {"TK"};
	};
	class TK_GUE_Soldier_EP1: TK_GUE_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_GUE_Soldier_EP1";
		weapons[] = {"AK_47_M","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47"};
		respawnWeapons[] = {"AK_47_M","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47"};
		model = "\CA\characters_E\LOC\LOC_soldier01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier01.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind01_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind01_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_3_co.paa""] select floor random 3]";
		};
	};
	class TK_GUE_Soldier_AAT_EP1: TK_GUE_Soldier_EP1
	{
		displayName = "$STR_EP1_DN_TK_GUE_Soldier_AAT_EP1";
		backpack = "TK_RPG_Backpack_EP1";
	};
	class TK_GUE_Soldier_2_EP1: TK_GUE_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_GUE_Soldier_2_EP1";
		backpack = "TKG_ALICE_Pack_AmmoAK47_EP1";
		weapons[] = {"AK_47_S","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47"};
		respawnWeapons[] = {"AK_47_S","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47"};
		model = "\CA\characters_E\LOC\LOC_soldier04";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier04.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier04.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier04.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind04_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind04_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_3_co.paa""] select floor random 3]";
		};
	};
	class TK_GUE_Soldier_3_EP1: TK_GUE_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_GUE_Soldier_3_EP1";
		backpack = "TK_ALICE_Pack_Explosives_EP1";
		weapons[] = {"M16A2","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
		respawnWeapons[] = {"M16A2","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
		model = "\CA\characters_E\LOC\LOC_soldier01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier01.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind01_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind01_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_3_co.paa""] select floor random 3]";
		};
	};
	class TK_GUE_Soldier_4_EP1: TK_GUE_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_GUE_Soldier_4_EP1";
		weapons[] = {"M16A2GL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203"};
		respawnWeapons[] = {"M16A2GL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_HE_M203","1Rnd_HE_M203"};
		model = "\CA\characters_E\LOC\LOC_soldier03";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier03.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier03.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier03.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind03_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind03_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind03_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind03_3_co.paa""] select floor random 3]";
		};
	};
	class TK_GUE_Soldier_5_EP1: TK_GUE_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_GUE_Soldier_5_EP1";
		weapons[] = {"LeeEnfield","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"10x_303","10x_303","10x_303","10x_303","10x_303"};
		respawnWeapons[] = {"LeeEnfield","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"10x_303","10x_303","10x_303"};
		model = "\CA\characters_E\LOC\LOC_soldier02";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier02.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind02_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind02_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind02_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind02_3_co.paa""] select floor random 3]";
		};
	};
	class TK_GUE_Soldier_AA_EP1: TK_GUE_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_GUE_Soldier_AA_EP1";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		threat[] = {1,0.1,1};
		weapons[] = {"AK_47_M","Stinger","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","Stinger"};
		respawnWeapons[] = {"AK_47_M","Stinger","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","Stinger"};
		model = "\CA\characters_E\LOC\LOC_soldier04";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier04.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier04.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier04.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind04_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind04_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_3_co.paa""] select floor random 3]";
		};
	};
	class TK_GUE_Soldier_AT_EP1: TK_GUE_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_GUE_Soldier_AT_EP1";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_launcherSoldier"};
				speechPlural[] = {"veh_launcherSoldiers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ"};
				speechPlural[] = {"veh_launcherSoldiers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ4P"};
				speechPlural[] = {"veh_launcherSoldiers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_launcherSoldier_RU"};
				speechPlural[] = {"veh_launcherSoldiers_RU"};
			};
		};
		TextPlural = "$STR_DN_launcherSoldiers";
		TextSingular = "$STR_DN_launcherSoldier";
		nameSound = "veh_launcherSoldier";
		weapons[] = {"AK_47_M","RPG7V","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","PG7VL","PG7VL"};
		respawnWeapons[] = {"AK_47_M","RPG7V","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","PG7VL"};
		threat[] = {1,0.6,0.1};
		model = "\CA\characters_E\LOC\LOC_soldier01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier01.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind01_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind01_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_3_co.paa""] select floor random 3]";
		};
	};
	class TK_GUE_Soldier_HAT_EP1: TK_GUE_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_GUE_Soldier_HAT_EP1";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_launcherSoldier"};
				speechPlural[] = {"veh_launcherSoldiers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ"};
				speechPlural[] = {"veh_launcherSoldiers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ4P"};
				speechPlural[] = {"veh_launcherSoldiers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_launcherSoldier_RU"};
				speechPlural[] = {"veh_launcherSoldiers_RU"};
			};
		};
		TextPlural = "$STR_DN_launcherSoldiers";
		TextSingular = "$STR_DN_launcherSoldier";
		nameSound = "veh_launcherSoldier";
		weapons[] = {"M16A2","M47Launcher_EP1","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","Dragon_EP1"};
		respawnWeapons[] = {"M16A2","M47Launcher_EP1","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","Dragon_EP1"};
		threat[] = {1,0.8,0.1};
		model = "\CA\characters_E\LOC\LOC_soldier01";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier01.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier01.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind01_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind01_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind01_3_co.paa""] select floor random 3]";
		};
	};
	class TK_GUE_Soldier_TL_EP1: TK_GUE_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_GUE_Soldier_TL_EP1";
		Icon = "\Ca\characters2\data\icon\i_leader_CA.paa";
		weapons[] = {"AK_47_S","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","SmokeShell","SmokeShellBlue"};
		respawnWeapons[] = {"AK_47_S","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","SmokeShellBlue"};
		model = "\CA\characters_E\LOC\LOC_soldier04";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier04.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier04.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier04.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind04_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind04_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_3_co.paa""] select floor random 3]";
		};
	};
	class TK_GUE_Soldier_Sniper_EP1: TK_GUE_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_GUE_Soldier_Sniper_EP1";
		weapons[] = {"SVD","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular"};
		magazines[] = {"10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","SmokeShell","SmokeShellBlue"};
		respawnWeapons[] = {"SVD","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular"};
		respawnMagazines[] = {"10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","SmokeShellBlue"};
		threat[] = {1,0.3,0.3};
		model = "\CA\characters_E\LOC\LOC_soldier03";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier03.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier03.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier03.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind03_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind03_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind03_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind03_3_co.paa""] select floor random 3]";
		};
	};
	class TK_GUE_Soldier_AR_EP1: TK_GUE_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_GUE_Soldier_AR_EP1";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		backpack = "TK_Assault_Pack_RPK_EP1";
		weapons[] = {"RPK_74","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"75Rnd_545x39_RPK","75Rnd_545x39_RPK","75Rnd_545x39_RPK","75Rnd_545x39_RPK"};
		respawnWeapons[] = {"RPK_74","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"75Rnd_545x39_RPK","75Rnd_545x39_RPK","75Rnd_545x39_RPK"};
		threat[] = {1,0.1,0.3};
		model = "\CA\characters_E\LOC\LOC_soldier05";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier05.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier05.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier05.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind05_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind05_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind05_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind05_3_co.paa""] select floor random 3]";
		};
	};
	class TK_GUE_Soldier_MG_EP1: TK_GUE_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_GUE_Soldier_MG_EP1";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_mgunner"};
				speechPlural[] = {"veh_mgunners"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_mgunner_CZ"};
				speechPlural[] = {"veh_mgunners_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_mgunner_CZ4P"};
				speechPlural[] = {"veh_mgunners_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_mgunner_RU"};
				speechPlural[] = {"veh_mgunners_RU"};
			};
		};
		TextPlural = "$STR_DN_mgunners";
		TextSingular = "$STR_DN_mgunner";
		nameSound = "veh_mgunner";
		weapons[] = {"PK","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
		threat[] = {1,0.1,0.6};
		respawnWeapons[] = {"PK","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK"};
		model = "\CA\characters_E\LOC\LOC_soldier02";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier02.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind02_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind02_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind02_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind02_3_co.paa""] select floor random 3]";
		};
	};
	class TK_GUE_Bonesetter_EP1: TK_GUE_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		attendant = 1;
		displayName = "$STR_EP1_DN_TK_GUE_Bonesetter_EP1";
		icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		canCarryBackPack = 0;
		weapons[] = {"LeeEnfield","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"10x_303","10x_303","10x_303","10x_303","10x_303"};
		respawnWeapons[] = {"LeeEnfield","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"10x_303","10x_303","10x_303"};
		model = "\CA\characters_E\LOC\LOC_soldier04";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier04.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier04.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier04.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind04_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind04_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind04_3_co.paa""] select floor random 3]";
		};
	};
	class TK_GUE_Warlord_EP1: TK_GUE_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_GUE_Warlord_EP1";
		icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		weapons[] = {"AK_47_S","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47"};
		respawnWeapons[] = {"AK_47_S","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47"};
		model = "\CA\characters_E\LOC\LOC_soldier02";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\LOC\Data\LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W1_LOC_soldier02.rvmat","CA\characters_E\LOC\Data\W2_LOC_soldier02.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\LOC\Data\LOC_ind02_1_co.paa"};
		class EventHandlers: EventHandlers
		{
			init = "(_this select 0) setObjectTexture [0,[""\CA\characters_E\LOC\Data\LOC_ind02_1_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind02_2_co.paa"",""\CA\characters_E\LOC\Data\LOC_ind02_3_co.paa""] select floor random 3]";
		};
	};
	class US_Delta_Force_Undercover_Takistani_Base_EP1: TK_GUE_Soldier_Base_EP1
	{
		side = 1;
		weapons[] = {};
		magazines[] = {};
		respawnWeapons[] = {};
		respawnMagazines[] = {};
		identityTypes[] = {"Language_EN_EP1","USMC_Glasses","Head_USMC"};
		faceType = "Man";
		genericNames = "EnglishMen";
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
	};
	class US_Delta_Force_Undercover_Takistani02_EP1: US_Delta_Force_Undercover_Takistani_Base_EP1
	{
		scope = 1;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_US_Delta_Force_Undercover_Takistani02_EP1";
		model = "\CA\characters_E\civil\Tak_civil02\Tak_civil02";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\civil\Tak_civil02\Data\Tak_civil02.rvmat","CA\characters_E\civil\Tak_civil02\Data\W1_Tak_civil02.rvmat","CA\characters_E\civil\Tak_civil02\Data\W2_Tak_civil02.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil02\Data\Tak_civil02_1_co.paa"};
	};
	class US_Delta_Force_Undercover_Takistani04_EP1: US_Delta_Force_Undercover_Takistani_Base_EP1
	{
		scope = 1;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_US_Delta_Force_Undercover_Takistani04_EP1";
		model = "\CA\characters_E\civil\Tak_civil04\Tak_civil04";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\civil\Tak_civil04\Data\Tak_civil04.rvmat","CA\characters_E\civil\Tak_civil04\Data\W1_Tak_civil04.rvmat","CA\characters_E\civil\Tak_civil04\Data\W2_Tak_civil04.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil04\Data\Tak_civil04_5_co.paa"};
	};
	class US_Delta_Force_Undercover_Takistani05_EP1: US_Delta_Force_Undercover_Takistani_Base_EP1
	{
		scope = 1;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_US_Delta_Force_Undercover_Takistani05_EP1";
		model = "\CA\characters_E\civil\Tak_civil05\Tak_civil05";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\civil\Tak_civil05\Data\Tak_civil05.rvmat","CA\characters_E\civil\Tak_civil05\Data\W1_Tak_civil05.rvmat","CA\characters_E\civil\Tak_civil05\Data\W2_Tak_civil05.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil05\Data\Tak_civil05_2_co.paa"};
	};
	class US_Delta_Force_Undercover_Takistani06_EP1: US_Delta_Force_Undercover_Takistani_Base_EP1
	{
		scope = 2;
		accuracy = 1000;
		displayName = "$STR_EP1_DN_US_Delta_Force_Undercover_Takistani06_EP1";
		vehicleClass = "MenSpecial";
		model = "\CA\characters_E\civil\Tak_civil06\Tak_civil06";
		faceType = "GravesHead_EP1";
		class Wounds
		{
			tex[] = {};
			mat[] = {"CA\characters_E\civil\Tak_civil06\Data\Tak_civil06.rvmat","CA\characters_E\civil\Tak_civil06\Data\W1_Tak_civil06.rvmat","CA\characters_E\civil\Tak_civil06\Data\W2_Tak_civil06.rvmat"};
		};
		hiddenSelectionsTextures[] = {"\CA\characters_E\civil\Tak_civil06\Data\Tak_civil06_3_co.paa"};
	};
	class CZ_Soldier_base_EP1: SoldierWB
	{
		expansion = 1;
		identityTypes[] = {"Language_EN_EP1","Head_CDF","CDF_Glasses"};
		faceType = "Man";
		side = 1;
		genericNames = "CzechMen";
		vehicleClass = "Men";
		portrait = "\Ca\characters\data\portraits\comBarHead_bluFor_cdf_ca";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_soldier_CA.paa";
		accuracy = 2.0;
		camouflage = 1.4;
		minFireTime = 10;
		cost = 40000;
		canCarryBackPack = 1;
		displayName = "$STR_EP1_DN_CZ_Soldier_base_EP1";
		model = "\CA\characters_E\ACR\acr_soldier";
		faction = "BIS_CZ";
		scope = 0;
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.7;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		hiddenSelections[] = {"Camo"};
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
		weapons[] = {"M4A1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","SmokeShell"};
		respawnWeapons[] = {"M4A1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","SmokeShell"};
	};
	class CZ_Soldier_SL_DES_EP1: CZ_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_CZ_Soldier_SL_DES_EP1";
		Picture = "\Ca\characters\data\Ico\i_sleader_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_officer"};
				speechPlural[] = {"veh_officers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_officer_CZ"};
				speechPlural[] = {"veh_officers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_officer_CZ4P"};
				speechPlural[] = {"veh_officers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_officer_RU"};
				speechPlural[] = {"veh_officers_RU"};
			};
		};
		TextPlural = "$STR_DN_officers";
		TextSingular = "$STR_DN_officer";
		nameSound = "veh_officer";
		accuracy = 3.6;
		cost = 500000;
		enableGPS = 1;
		model = "\CA\characters_E\ACR\acr_soldier";
		backpack = "CZ_VestPouch_Sa58_EP1";
		weapons[] = {"Sa58V_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular_Vector","glock17_EP1"};
		magazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"Sa58V_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","Binocular_Vector","glock17_EP1"};
		respawnMagazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class CZ_Soldier_DES_EP1: CZ_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_CZ_Soldier_DES_EP1";
		model = "\CA\characters_E\ACR\acr_soldier";
		backpack = "CZ_VestPouch_Sa58_EP1";
		weapons[] = {"Sa58V_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","HandGrenade_West","HandGrenade_West","HandGrenade_West","HandGrenade_West"};
		respawnWeapons[] = {"Sa58V_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","HandGrenade_West","HandGrenade_West"};
	};
	class CZ_Soldier_B_DES_EP1: CZ_Soldier_DES_EP1
	{
		displayName = "$STR_EP1_DN_CZ_Soldier_B_DES_EP1";
		backpack = "CZ_Backpack_Ammo_EP1";
	};
	class CZ_Soldier_medik_DES_EP1: CZ_Soldier_DES_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_Medic_EP1";
		model = "\CA\characters_E\ACR\acr_soldier_medik";
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		accuracy = 3.7;
		cost = 100000;
		attendant = 1;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Medic"};
				speechPlural[] = {"veh_Medics"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Medic_CZ"};
				speechPlural[] = {"veh_Medics_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Medic_CZ4P"};
				speechPlural[] = {"veh_Medics_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Medic_RU"};
				speechPlural[] = {"veh_Medics_RU"};
			};
		};
		TextPlural = "$STR_DN_Medics";
		TextSingular = "$STR_DN_Medic";
		nameSound = "veh_Medic";
		weaponSlots = "1	 + 	4	 + 8 * 		256	 + 2 * 	4096	 + 	2	 + 4*	16  + 12*131072";
		canCarryBackPack = 0;
		weapons[] = {"Sa58V_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","SmokeShell","SmokeShell"};
		respawnWeapons[] = {"Sa58V_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","SmokeShell"};
	};
	class CZ_Soldier_AMG_DES_EP1: CZ_Soldier_DES_EP1
	{
		displayName = "$STR_EP1_DN_CZ_Soldier_AMG_DES_EP1";
		backpack = "CZ_Backpack_AmmoMG_EP1";
		canCarryBackPack = 1;
	};
	class CZ_Soldier_AT_DES_EP1: CZ_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_CZ_Soldier_AT_DES_EP1";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_launcherSoldier"};
				speechPlural[] = {"veh_launcherSoldiers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ"};
				speechPlural[] = {"veh_launcherSoldiers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ4P"};
				speechPlural[] = {"veh_launcherSoldiers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_launcherSoldier_RU"};
				speechPlural[] = {"veh_launcherSoldiers_RU"};
			};
		};
		TextPlural = "$STR_DN_launcherSoldiers";
		TextSingular = "$STR_DN_launcherSoldier";
		nameSound = "veh_launcherSoldier";
		model = "\CA\characters_E\ACR\acr_soldier";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		threat[] = {1,0.8,0.1};
		weapons[] = {"Sa58V_CCO_EP1","MAAWS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","MAAWS_HEAT","MAAWS_HEDP","HandGrenade_West","HandGrenade_West"};
		respawnWeapons[] = {"Sa58V_CCO_EP1","MAAWS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","MAAWS_HEDP","HandGrenade_West"};
	};
	class CZ_Soldier_MG_DES_EP1: CZ_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_CZ_Soldier_MG_DES_EP1";
		Picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_mgunner"};
				speechPlural[] = {"veh_mgunners"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_mgunner_CZ"};
				speechPlural[] = {"veh_mgunners_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_mgunner_CZ4P"};
				speechPlural[] = {"veh_mgunners_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_mgunner_RU"};
				speechPlural[] = {"veh_mgunners_RU"};
			};
		};
		TextPlural = "$STR_DN_mgunners";
		TextSingular = "$STR_DN_mgunner";
		nameSound = "veh_mgunner";
		model = "\CA\characters_E\ACR\acr_soldier";
		weapons[] = {"M60A4_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","HandGrenade_West","HandGrenade_West"};
		respawnWeapons[] = {"M60A4_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","HandGrenade_West"};
		threat[] = {1,0.1,0.6};
	};
	class CZ_Soldier_Office_DES_EP1: CZ_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_CZ_Soldier_Office_DES_EP1";
		model = "\CA\characters_E\ACR\acr_soldier_nic";
		portrait = "\Ca\characters\data\portraits\comBarHead_usmc_soldier_ca";
		Picture = "\Ca\characters\data\Ico\i_off_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_officer"};
				speechPlural[] = {"veh_officers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_officer_CZ"};
				speechPlural[] = {"veh_officers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_officer_CZ4P"};
				speechPlural[] = {"veh_officers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_officer_RU"};
				speechPlural[] = {"veh_officers_RU"};
			};
		};
		TextPlural = "$STR_DN_officers";
		TextSingular = "$STR_DN_officer";
		nameSound = "veh_officer";
		weaponSlots = "1	 + 	4	 + 6 * 		256	 + 2 * 	4096	 + 	2	 + 4*	16  + 12*131072";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		weapons[] = {"Sa58V_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular_Vector","glock17_EP1"};
		magazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"Sa58V_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular_Vector","glock17_EP1"};
		respawnMagazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class CZ_Soldier_Light_DES_EP1: CZ_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_CZ_Soldier_Light_DES_EP1";
		model = "\CA\characters_E\ACR\acr_soldier_nic";
		weaponSlots = "1	 + 	4	 + 6 * 		256	 + 2 * 	4096	 + 	2	 + 4*	16  + 12*131072";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		weapons[] = {"Sa58P_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47"};
		respawnWeapons[] = {"Sa58P_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47"};
	};
	class CZ_Soldier_Pilot_EP1: CZ_Soldier_base_EP1
	{
		scope = 2;
		model = "\ca\characters_e\ACR\acr_pilot.p3d";
		portrait = "\Ca\characters\data\portraits\comBarHead_usmc_pilot_ca";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_pilot"};
				speechPlural[] = {"veh_pilots"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_pilot_CZ"};
				speechPlural[] = {"veh_pilots_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_pilot_CZ4P"};
				speechPlural[] = {"veh_pilots_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_pilot_RU"};
				speechPlural[] = {"veh_pilots_RU"};
			};
		};
		TextPlural = "$STR_DN_pilots";
		TextSingular = "$STR_DN_pilot";
		nameSound = "veh_pilot";
		displayName = "$STR_EP1_DN_CZ_Soldier_Pilot_EP1";
		accuracy = 3.2;
		camouflage = 1.6;
		cost = 20000;
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.7;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\data\us_pilot_body.rvmat","ca\characters\data\us_pilot_body_wound1.rvmat","ca\characters\data\us_pilot_body_wound2.rvmat","ca\characters\data\us_pilot_hhl.rvmat","ca\characters\data\us_pilot_hhl_wound1.rvmat","ca\characters\data\us_pilot_hhl_wound2.rvmat"};
		};
		weapons[] = {"Sa58V_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		magazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed"};
		respawnWeapons[] = {"Sa58V_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		respawnMagazines[] = {"30Rnd_762x39_AK47","30Rnd_762x39_AK47","30Rnd_762x39_AK47","HandGrenade_West","SmokeShellRed"};
	};
	class CZ_Soldier_Sniper_EP1: CZ_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_DN_SNIPER";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		model = "\ca\characters_E\Ghillie\Ghillie_Overall";
		portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Sniper"};
				speechPlural[] = {"veh_Snipers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Sniper_CZ"};
				speechPlural[] = {"veh_Snipers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Sniper_CZ4P"};
				speechPlural[] = {"veh_Snipers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Sniper_RU"};
				speechPlural[] = {"veh_Snipers_RU"};
			};
		};
		TextPlural = "$STR_DN_Snipers";
		TextSingular = "$STR_DN_Sniper";
		nameSound = "veh_Sniper";
		accuracy = 3.9;
		camouflage = 0.5;
		cost = 350000;
		threat[] = {1,0.3,0.3};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_E\Ghillie\Data\ghillie_overall1_desert_co.paa"};
		weapons[] = {"SVD_des_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		magazines[] = {"10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","smokeshellred","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"SVD_des_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		respawnMagazines[] = {"10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","HandGrenade_West","IR_Strobe_Target","smokeshellred","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class CZ_Special_Forces_Scout_DES_EP1: CZ_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		model = "\CA\characters_E\ACR\acr_soldier_spec2";
		portrait = "\Ca\characters_E\data\portraits\acr_soldier_CA";
		displayName = "$STR_DN_SCOUT";
		vehicleClass = "MenSpecial";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		canHideBodies = 1;
		backpack = "CZ_Backpack_Specops_EP1";
		weapons[] = {"M4A3_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular_Vector","glock17_EP1"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"M4A3_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular_Vector","glock17_EP1"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class CZ_Special_Forces_MG_DES_EP1: CZ_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		model = "\CA\characters_E\ACR\acr_soldier_spec2";
		portrait = "\Ca\characters_E\data\portraits\acr_soldier_CA";
		displayName = "$STR_EP1_DN_CZ_Soldier_MG_DES_EP1";
		vehicleClass = "MenSpecial";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		threat[] = {1,0.1,0.6};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		canHideBodies = 1;
		backpack = "";
		weapons[] = {"M60A4_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"M60A4_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		respawnMagazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class CZ_Special_Forces_DES_EP1: CZ_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		model = "\CA\characters_E\ACR\acr_soldier_spec2";
		portrait = "\Ca\characters_E\data\portraits\acr_soldier_CA";
		displayName = "$STR_EP1_DN_CZ_Soldier_DES_EP1";
		vehicleClass = "MenSpecial";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		canHideBodies = 1;
		weapons[] = {"M4A3_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"M4A3_CCO_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class CZ_Special_Forces_TL_DES_EP1: CZ_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_US_Soldier_TL_EP1";
		vehicleClass = "MenSpecial";
		model = "\CA\characters_E\ACR\acr_soldier_spec1";
		icon = "\Ca\characters2\data\icon\i_leader_CA.paa";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		canHideBodies = 1;
		backpack = "CZ_VestPouch_M4_EP1";
		weapons[] = {"M4A3_RCO_GL_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","SmokeShellGreen","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_SmokeGreen_M203","1Rnd_SmokeRed_M203","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"M4A3_RCO_GL_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","IR_Strobe_Target","SmokeShellGreen","1Rnd_HE_M203","1Rnd_SmokeGreen_M203","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class CZ_Special_Forces_GL_DES_EP1: CZ_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		model = "\CA\characters_E\ACR\acr_soldier_spec1";
		displayName = "$STR_EP1_DN_US_Soldier_GL_EP1";
		vehicleClass = "MenSpecial";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		canHideBodies = 1;
		backpack = "CZ_VestPouch_M4_EP1";
		weapons[] = {"M4A3_RCO_GL_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_SmokeRed_M203"};
		respawnWeapons[] = {"M4A3_RCO_GL_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","1Rnd_HE_M203","1Rnd_SmokeRed_M203","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class US_Soldier_Base_EP1: SoldierWB
	{
		expansion = 1;
		identityTypes[] = {"Language_EN_EP1","USMC_Glasses","Head_USMC"};
		faceType = "Man";
		genericNames = "EnglishMen";
		model = "\ca\characters_e\US\US_rifleman";
		portrait = "\Ca\characters\data\portraits\comBarHead_usmc_soldier_ca";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_soldier_CA.paa";
		scope = 0;
		faction = "BIS_US";
		vehicleClass = "Men";
		cost = 80000;
		camouflage = 1.8;
		accuracy = 2.0;
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.85;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_E\US\data\tex1.rvmat","ca\characters_E\US\data\W1_tex1.rvmat","ca\characters_E\US\data\W2_tex1.rvmat","ca\characters_E\US\data\tex4.rvmat","ca\characters_E\US\data\W1_tex4.rvmat","ca\characters_E\US\data\W2_tex4.rvmat","ca\characters_e\US\data\us_pilot.rvmat","ca\characters_e\US\data\W1_us_pilot.rvmat","ca\characters_e\US\data\W2_us_pilot.rvmat"};
		};
		canCarryBackPack = 1;
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
		class EventHandlers;
	};
	class US_Soldier_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_US_Soldier_EP1";
		canCarryBackPack = 1;
		model = "\ca\characters_e\US\US_rifleman";
		weapons[] = {"SCAR_L_STD_HOLO","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","HandGrenade_West","HandGrenade_West"};
		respawnWeapons[] = {"SCAR_L_STD_HOLO","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West"};
	};
	class US_Soldier_B_EP1: US_Soldier_EP1
	{
		displayName = "$STR_EP1_DN_US_Soldier_B_EP1";
		backpack = "US_Assault_Pack_Ammo_EP1";
	};
	class US_Soldier_AMG_EP1: US_Soldier_EP1
	{
		displayName = "$STR_EP1_DN_US_Soldier_AMG_EP1";
		backpack = "US_Backpack_AmmoMG_EP1";
	};
	class US_Soldier_AAR_EP1: US_Soldier_EP1
	{
		displayName = "$STR_EP1_DN_US_Soldier_AAR_EP1";
		backpack = "US_Assault_Pack_AmmoSAW_EP1";
	};
	class US_Soldier_AHAT_EP1: US_Soldier_EP1
	{
		displayName = "$STR_EP1_DN_US_Soldier_AHAT_EP1";
		backpack = "US_Backpack_AT_EP1";
	};
	class US_Soldier_AAT_EP1: US_Soldier_EP1
	{
		displayName = "$STR_EP1_DN_US_Soldier_AAT_EP1";
		model = "\ca\characters_e\US\US_at_gunner";
		backpack = "US_Assault_Pack_AT_EP1";
		weapons[] = {"SCAR_L_STD_HOLO","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MAAWS_HEAT","MAAWS_HEDP","HandGrenade_West","HandGrenade_West"};
		respawnWeapons[] = {"SCAR_L_CQC_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","MAAWS"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MAAWS_HEDP","HandGrenade_West"};
	};
	class US_Soldier_Light_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_US_Soldier_Light_EP1";
		model = "\ca\characters_e\US\US_officer";
		weaponSlots = "1	 + 	4	 + 6 * 		256	 + 2 * 	4096	 + 	2	 + 4*	16  + 12*131072";
		weapons[] = {"SCAR_L_STD_HOLO","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
		respawnWeapons[] = {"SCAR_L_STD_HOLO","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag"};
	};
	class US_Soldier_GL_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_GL_EP1";
		model = "\ca\characters_E\US\US_rifleman_gl";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_soldier_CA.paa";
		cost = 60000;
		accuracy = 3.9;
		weapons[] = {"SCAR_L_CQC_EGLM_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShell","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203"};
		respawnWeapons[] = {"SCAR_L_CQC_EGLM_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","SmokeShell","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203"};
	};
	class US_Soldier_Officer_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_Officer_EP1";
		model = "\ca\characters_E\US\US_officer.p3d";
		identityTypes[] = {"Language_EN_EP1","USMC_Glasses","Head_USMC_CO"};
		portrait = "\Ca\characters\data\portraits\comBarHead_usmc_soldier_ca";
		Picture = "\Ca\characters\data\Ico\i_off_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_officer"};
				speechPlural[] = {"veh_officers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_officer_CZ"};
				speechPlural[] = {"veh_officers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_officer_CZ4P"};
				speechPlural[] = {"veh_officers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_officer_RU"};
				speechPlural[] = {"veh_officers_RU"};
			};
		};
		TextPlural = "$STR_DN_officers";
		TextSingular = "$STR_DN_officer";
		nameSound = "veh_officer";
		accuracy = 3.6;
		camouflage = 1.6;
		cost = 750000;
		enableGPS = 1;
		weaponSlots = "1	 + 	4	 + 6 * 		256	 + 2 * 	4096	 + 	2	 + 4*	16  + 12*131072";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		weapons[] = {"SCAR_L_CQC","Colt1911","NVGoggles","ItemGPS","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","IR_Strobe_Target","SmokeShellRed","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911"};
		respawnWeapons[] = {"SCAR_L_CQC","Colt1911","NVGoggles","ItemGPS","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","IR_Strobe_Target","SmokeShellRed","7Rnd_45ACP_1911","7Rnd_45ACP_1911"};
	};
	class US_Soldier_SL_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_SL_EP1";
		Picture = "\Ca\characters\data\Ico\i_sleader_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_officer"};
				speechPlural[] = {"veh_officers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_officer_CZ"};
				speechPlural[] = {"veh_officers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_officer_CZ4P"};
				speechPlural[] = {"veh_officers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_officer_RU"};
				speechPlural[] = {"veh_officers_RU"};
			};
		};
		TextPlural = "$STR_DN_officers";
		TextSingular = "$STR_DN_officer";
		nameSound = "veh_officer";
		accuracy = 3.6;
		cost = 500000;
		enableGPS = 1;
		model = "\ca\characters_E\US\US_squad_leader";
		weapons[] = {"SCAR_L_STD_EGLM_TWS","NVGoggles","ItemGPS","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","M9"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellGreen","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_Smoke_M203","1Rnd_SmokeGreen_M203","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"SCAR_L_STD_EGLM_TWS","NVGoggles","ItemGPS","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","M9"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","IR_Strobe_Target","SmokeShellGreen","1Rnd_HE_M203","1Rnd_SmokeGreen_M203","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class US_Soldier_TL_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_TL_EP1";
		Picture = "\Ca\characters\data\Ico\i_tleader_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_leader_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_officer"};
				speechPlural[] = {"veh_officers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_officer_CZ"};
				speechPlural[] = {"veh_officers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_officer_CZ4P"};
				speechPlural[] = {"veh_officers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_officer_RU"};
				speechPlural[] = {"veh_officers_RU"};
			};
		};
		TextPlural = "$STR_DN_officers";
		TextSingular = "$STR_DN_officer";
		nameSound = "veh_officer";
		accuracy = 3.6;
		cost = 400000;
		enableGPS = 1;
		model = "\ca\characters_E\US\US_team_leader";
		weapons[] = {"SCAR_L_STD_EGLM_RCO","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","IR_Strobe_Target","SmokeShellRed","HandGrenade_West","HandGrenade_West","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_Smoke_M203","1Rnd_Smoke_M203","1Rnd_SmokeRed_M203","1Rnd_SmokeRed_M203"};
		respawnWeapons[] = {"SCAR_L_STD_EGLM_RCO","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","ItemGPS"};
		respawnmagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","IR_Strobe_Target","SmokeShellRed","HandGrenade_West","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_SmokeRed_M203"};
	};
	class US_Soldier_AT_Base_EP1: US_Soldier_Base_EP1
	{
		displayName = "$STR_DN_AT_SOLDIER";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_launcherSoldier"};
				speechPlural[] = {"veh_launcherSoldiers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ"};
				speechPlural[] = {"veh_launcherSoldiers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ4P"};
				speechPlural[] = {"veh_launcherSoldiers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_launcherSoldier_RU"};
				speechPlural[] = {"veh_launcherSoldiers_RU"};
			};
		};
		TextPlural = "$STR_DN_launcherSoldiers";
		TextSingular = "$STR_DN_launcherSoldier";
		nameSound = "veh_launcherSoldier";
		model = "\ca\characters_E\US\US_at_gunner";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		accuracy = 3.5;
		camouflage = 2.0;
		threat[] = {1,0.8,0.1};
	};
	class US_Soldier_LAT_EP1: US_Soldier_AT_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_LAT_EP1";
		cost = 150000;
		accuracy = 3.5;
		threat[] = {1,0.6,0.1};
		weapons[] = {"SCAR_L_CQC_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","M136"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","M136"};
		respawnWeapons[] = {"SCAR_L_CQC_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","M136"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","M136"};
	};
	class US_Soldier_AT_EP1: US_Soldier_AT_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_AT_EP1";
		cost = 150000;
		accuracy = 3.5;
		weapons[] = {"SCAR_L_CQC_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","MAAWS"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MAAWS_HEAT","MAAWS_HEDP","HandGrenade_West","HandGrenade_West"};
		respawnWeapons[] = {"SCAR_L_CQC_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","MAAWS"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","MAAWS_HEDP","HandGrenade_West"};
	};
	class US_Soldier_HAT_EP1: US_Soldier_AT_Base_EP1
	{
		scope = 2;
		displayName = "$STR_DN_USMC_SOLDIER_HAT";
		cost = 200000;
		accuracy = 3.5;
		camouflage = 2.1;
		weapons[] = {"SCAR_L_CQC_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Javelin"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","Javelin"};
		threat[] = {1,1,0.1};
		respawnWeapons[] = {"SCAR_L_CQC_Holo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Javelin"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","Javelin"};
	};
	class US_Soldier_AA_EP1: US_Soldier_AT_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_AA_EP1";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_launcherSoldier"};
				speechPlural[] = {"veh_launcherSoldiers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ"};
				speechPlural[] = {"veh_launcherSoldiers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ4P"};
				speechPlural[] = {"veh_launcherSoldiers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_launcherSoldier_RU"};
				speechPlural[] = {"veh_launcherSoldiers_RU"};
			};
		};
		TextPlural = "$STR_DN_launcherSoldiers";
		TextSingular = "$STR_DN_launcherSoldier";
		nameSound = "veh_launcherSoldier";
		accuracy = 3.5;
		camouflage = 2.1;
		weapons[] = {"SCAR_L_STD_HOLO","Stinger","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","Stinger"};
		respawnWeapons[] = {"SCAR_L_STD_HOLO","Stinger","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","Stinger"};
		threat[] = {1,0.1,1};
	};
	class US_Soldier_Medic_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_Medic_EP1";
		model = "\ca\characters_E\US\US_medic";
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		accuracy = 3.7;
		cost = 100000;
		attendant = 1;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Medic"};
				speechPlural[] = {"veh_Medics"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Medic_CZ"};
				speechPlural[] = {"veh_Medics_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Medic_CZ4P"};
				speechPlural[] = {"veh_Medics_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Medic_RU"};
				speechPlural[] = {"veh_Medics_RU"};
			};
		};
		TextPlural = "$STR_DN_Medics";
		TextSingular = "$STR_DN_Medic";
		nameSound = "veh_Medic";
		weaponSlots = "1	 + 	4	 + 8 * 		256	 + 2 * 	4096	 + 	2	 + 4*	16  + 12*131072";
		canCarryBackPack = 0;
		weapons[] = {"SCAR_L_STD_HOLO","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell","SmokeShell"};
		respawnWeapons[] = {"SCAR_L_STD_HOLO","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","SmokeShell"};
	};
	class US_Soldier_AR_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_AR_EP1";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_mgunner"};
				speechPlural[] = {"veh_mgunners"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_mgunner_CZ"};
				speechPlural[] = {"veh_mgunners_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_mgunner_CZ4P"};
				speechPlural[] = {"veh_mgunners_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_mgunner_RU"};
				speechPlural[] = {"veh_mgunners_RU"};
			};
		};
		TextPlural = "$STR_DN_mgunners";
		TextSingular = "$STR_DN_mgunner";
		nameSound = "veh_mgunner";
		cost = 115000;
		accuracy = 3.7;
		model = "\ca\characters_E\US\US_saw_gunner";
		weapons[] = {"M249_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"100Rnd_556x45_M249","100Rnd_556x45_M249","100Rnd_556x45_M249","100Rnd_556x45_M249","100Rnd_556x45_M249","HandGrenade_West","HandGrenade_West"};
		threat[] = {1,0.1,0.3};
		respawnWeapons[] = {"M249_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"100Rnd_556x45_M249","100Rnd_556x45_M249","100Rnd_556x45_M249","HandGrenade_West"};
	};
	class US_Soldier_MG_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_MG_EP1";
		Picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_mgunner"};
				speechPlural[] = {"veh_mgunners"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_mgunner_CZ"};
				speechPlural[] = {"veh_mgunners_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_mgunner_CZ4P"};
				speechPlural[] = {"veh_mgunners_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_mgunner_RU"};
				speechPlural[] = {"veh_mgunners_RU"};
			};
		};
		TextPlural = "$STR_DN_mgunners";
		TextSingular = "$STR_DN_mgunner";
		nameSound = "veh_mgunner";
		cost = 130000;
		accuracy = 3.7;
		model = "\ca\characters_E\US\US_machine_gunner";
		weapons[] = {"m240_scoped_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","HandGrenade_West","HandGrenade_West"};
		threat[] = {1,0.1,0.6};
		respawnWeapons[] = {"m240_scoped_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","HandGrenade_West"};
	};
	class US_Soldier_Spotter_EP1: US_Soldier_Base_EP1
	{
		displayName = "$STR_EP1_DN_US_Soldier_Spotter_EP1";
		scope = 2;
		accuracy = 3.9;
		camouflage = 0.5;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Sniper"};
				speechPlural[] = {"veh_Snipers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Sniper_CZ"};
				speechPlural[] = {"veh_Snipers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Sniper_CZ4P"};
				speechPlural[] = {"veh_Snipers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Sniper_RU"};
				speechPlural[] = {"veh_Snipers_RU"};
			};
		};
		TextPlural = "$STR_DN_Snipers";
		TextSingular = "$STR_DN_Sniper";
		nameSound = "veh_Sniper";
		cost = 200000;
		threat[] = {1,0.3,0.3};
		model = "\ca\characters_E\Ghillie\Ghillie_Overall";
		portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		weapons[] = {"SCAR_L_STD_EGLM_TWS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","smokeshellYellow","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_SmokeYellow_M203","1Rnd_SmokeYellow_M203"};
		respawnWeapons[] = {"SCAR_L_STD_EGLM_TWS","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","IR_Strobe_Target","smokeshellYellow","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_SmokeYellow_M203"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\data\us_hhl.rvmat","ca\characters\data\us_hhl_wound1.rvmat","ca\characters\data\us_hhl_wound2.rvmat"};
		};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_E\Ghillie\Data\ghillie_overall1_desert_co.paa"};
	};
	class US_Soldier_Sniper_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_Sniper_EP1";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		model = "\ca\characters_E\Ghillie\Ghillie_Overall";
		portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Sniper"};
				speechPlural[] = {"veh_Snipers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Sniper_CZ"};
				speechPlural[] = {"veh_Snipers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Sniper_CZ4P"};
				speechPlural[] = {"veh_Snipers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Sniper_RU"};
				speechPlural[] = {"veh_Snipers_RU"};
			};
		};
		TextPlural = "$STR_DN_Snipers";
		TextSingular = "$STR_DN_Sniper";
		nameSound = "veh_Sniper";
		accuracy = 3.9;
		camouflage = 0.5;
		cost = 350000;
		threat[] = {1,0.3,0.3};
		weapons[] = {"M110_NVG_EP1","Colt1911","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		magazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","HandGrenade_West","HandGrenade_West","smokeshell","smokeshellgreen","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911"};
		respawnWeapons[] = {"M110_NVG_EP1","Colt1911","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		respawnMagazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","HandGrenade_West","smokeshellgreen","7Rnd_45ACP_1911","7Rnd_45ACP_1911"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\data\us_hhl.rvmat","ca\characters\data\us_hhl_wound1.rvmat","ca\characters\data\us_hhl_wound2.rvmat"};
		};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_E\Ghillie\Data\ghillie_overall1_desert_co.paa"};
	};
	class US_Soldier_Sniper_NV_EP1: US_Soldier_Sniper_EP1
	{
		displayName = "$STR_EP1_DN_US_Soldier_Sniper_NV_EP1";
		weapons[] = {"M110_TWS_EP1","Colt1911","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		magazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","HandGrenade_West","HandGrenade_West","smokeshell","smokeshellgreen","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911"};
		respawnWeapons[] = {"M110_TWS_EP1","Colt1911","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		respawnMagazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","HandGrenade_West","smokeshellgreen","7Rnd_45ACP_1911","7Rnd_45ACP_1911"};
	};
	class US_Soldier_SniperH_EP1: US_Soldier_Sniper_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_SniperH_EP1";
		threat[] = {1,0.6,0.6};
		weapons[] = {"M107","Colt1911","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		magazines[] = {"10Rnd_127x99_m107","10Rnd_127x99_m107","10Rnd_127x99_m107","10Rnd_127x99_m107","10Rnd_127x99_m107","10Rnd_127x99_m107","10Rnd_127x99_m107","10Rnd_127x99_m107","HandGrenade_West","HandGrenade_West","smokeshell","smokeshellgreen","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911"};
		respawnWeapons[] = {"M107","Colt1911","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS"};
		respawnMagazines[] = {"10Rnd_127x99_m107","10Rnd_127x99_m107","10Rnd_127x99_m107","10Rnd_127x99_m107","10Rnd_127x99_m107","10Rnd_127x99_m107","HandGrenade_West","smokeshellgreen","7Rnd_45ACP_1911","7Rnd_45ACP_1911"};
	};
	class US_Soldier_Marksman_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_Marksman_EP1";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		model = "\ca\characters_E\US\US_rifleman_gl";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Sniper"};
				speechPlural[] = {"veh_Snipers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Sniper_CZ"};
				speechPlural[] = {"veh_Snipers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Sniper_CZ4P"};
				speechPlural[] = {"veh_Snipers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Sniper_RU"};
				speechPlural[] = {"veh_Snipers_RU"};
			};
		};
		TextPlural = "$STR_DN_Snipers";
		TextSingular = "$STR_DN_Sniper";
		nameSound = "veh_Sniper";
		accuracy = 3.9;
		camouflage = 1.0;
		cost = 250000;
		threat[] = {1,0.1,0.1};
		weapons[] = {"M110_NVG_EP1","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed"};
		respawnWeapons[] = {"M110_NVG_EP1","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","20Rnd_762x51_B_SCAR","HandGrenade_West","IR_Strobe_Target","SmokeShellRed"};
	};
	class US_Soldier_Engineer_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_US_Soldier_Engineer_EP1";
		model = "\ca\characters_E\US\US_engineer";
		cost = 60000;
		accuracy = 3.9;
		threat[] = {1,0.5,0.1};
		picture = "\Ca\characters_E\data\Ico\i_eng_ca.paa";
		engineer = 1;
		canDeactivateMines = 1;
		backpack = "US_Assault_Pack_Explosives_EP1";
		weapons[] = {"SCAR_L_STD_Mk4CQT","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","Mine","Mine","HandGrenade_West","SmokeShell"};
		respawnWeapons[] = {"SCAR_L_STD_Mk4CQT","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","Mine","HandGrenade_West","SmokeShell"};
	};
	class US_Soldier_Pilot_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		model = "\ca\characters_e\US\US_Pilot.p3d";
		portrait = "\Ca\characters\data\portraits\comBarHead_usmc_pilot_ca";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_pilot"};
				speechPlural[] = {"veh_pilots"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_pilot_CZ"};
				speechPlural[] = {"veh_pilots_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_pilot_CZ4P"};
				speechPlural[] = {"veh_pilots_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_pilot_RU"};
				speechPlural[] = {"veh_pilots_RU"};
			};
		};
		TextPlural = "$STR_DN_pilots";
		TextSingular = "$STR_DN_pilot";
		nameSound = "veh_pilot";
		displayName = "$STR_EP1_DN_US_Soldier_Pilot_EP1";
		accuracy = 3.2;
		camouflage = 1.6;
		cost = 20000;
		enableGPS = 1;
		weapons[] = {"SCAR_L_CQC","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","SmokeShell","SmokeShellRed"};
		respawnWeapons[] = {"SCAR_L_CQC","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","SmokeShellRed"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.7;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters_e\US\data\us_pilot.rvmat","ca\characters_e\US\data\W1_us_pilot.rvmat","ca\characters_e\US\data\W2_us_pilot.rvmat"};
		};
	};
	class US_Soldier_Crew_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		model = "\ca\characters_E\US\US_crewman";
		portrait = "\Ca\characters\data\portraits\comBarHead_usmc_crew_ca";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_crew"};
				speechPlural[] = {"veh_crews"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_crew_CZ"};
				speechPlural[] = {"veh_crews_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_crew_CZ4P"};
				speechPlural[] = {"veh_crews_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_crew_RU"};
				speechPlural[] = {"veh_crews_RU"};
			};
		};
		TextPlural = "$STR_DN_crews";
		TextSingular = "$STR_DN_crew";
		nameSound = "veh_crew";
		accuracy = 3.4;
		camouflage = 1.8;
		cost = 20000;
		displayName = "$STR_EP1_DN_US_Soldier_Crew_EP1";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.7;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		weaponSlots = "1	 + 	4	 + 8 * 		256	 + 2 * 	4096	 + 	2	 + 4*	16  + 12*131072";
		weapons[] = {"SCAR_L_CQC","Colt1911","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","HandGrenade_West","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911"};
		respawnWeapons[] = {"SCAR_L_CQC","Colt1911","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_West","7Rnd_45ACP_1911","7Rnd_45ACP_1911"};
	};
	class US_Delta_Force_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		canHideBodies = 1;
		camouflage = 0.8;
		vehicleClass = "MenDeltaForce";
		displayName = "$STR_EP1_DN_US_Delta_Force_EP1";
		model = "\ca\characters_e\Delta\Delta1.p3d";
		portrait = "\Ca\characters_E\data\portraits\delta_soldier_CA";
		identityTypes[] = {"Language_EN_EP1","Delta_glasses","Head_USMC"};
		backpack = "US_Backpack_Specops_EP1";
		weapons[] = {"SCAR_H_CQC_CCO","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9"};
		magazines[] = {"20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"SCAR_H_CQC_CCO","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9"};
		respawnMagazines[] = {"20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class US_Delta_Force_TL_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		canHideBodies = 1;
		displayName = "$STR_EP1_DN_US_Delta_Force_TL_EP1";
		vehicleClass = "MenDeltaForce";
		model = "\ca\characters_e\Delta\Delta2.p3d";
		portrait = "\Ca\characters_E\data\portraits\delta_soldier_CA";
		Icon = "\Ca\characters2\data\icon\i_leader_CA.paa";
		identityTypes[] = {"Language_EN_EP1","Head_USMC"};
		backpack = "US_Patrol_Pack_Specops_EP1";
		weapons[] = {"SCAR_H_STD_EGLM_Spect","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9SD"};
		magazines[] = {"20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","HandGrenade_West","IR_Strobe_Target","SmokeShellGreen","SmokeShellRed","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_SmokeGreen_M203","1Rnd_SmokeRed_M203","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD"};
		respawnWeapons[] = {"SCAR_H_CQC_CCO","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9SD"};
		respawnMagazines[] = {"20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","HandGrenade_West","IR_Strobe_Target","SmokeShellGreen","1Rnd_HE_M203","1Rnd_SmokeGreen_M203","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD"};
	};
	class US_Delta_Force_Medic_EP1: US_Delta_Force_EP1
	{
		scope = 2;
		accuracy = 3.9;
		canHideBodies = 1;
		displayName = "$STR_EP1_DN_US_Delta_Force_Medic_EP1";
		vehicleClass = "MenDeltaForce";
		model = "\ca\characters_e\Delta\Delta2_Medic.p3d";
		attendant = 1;
		backpack = "";
		canCarryBackPack = 0;
		portrait = "\Ca\characters_E\data\portraits\delta_soldier_CA";
		Icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		identityTypes[] = {"Language_EN_EP1","Head_USMC"};
		weapons[] = {"SCAR_H_CQC_CCO","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9SD"};
		magazines[] = {"20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed"};
		respawnWeapons[] = {"SCAR_H_CQC_CCO","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9SD"};
		respawnMagazines[] = {"20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","HandGrenade_West","IR_Strobe_Target","SmokeShellRed"};
	};
	class US_Delta_Force_Assault_EP1: US_Delta_Force_EP1
	{
		scope = 2;
		accuracy = 3.9;
		canHideBodies = 1;
		vehicleClass = "MenDeltaForce";
		displayName = "$STR_EP1_DN_US_Delta_Force_Assault_EP1";
		model = "\ca\characters_e\Delta\Delta1.p3d";
		identityTypes[] = {"Language_EN_EP1","Delta_glasses","Head_USMC"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\Delta\Data\DO_1_Multicam_CO"};
		backpack = "US_Patrol_Pack_Ammo_EP1";
		weapons[] = {"SCAR_H_STD_EGLM_Spect","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9"};
		magazines[] = {"20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_SmokeRed_M203","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed"};
		respawnWeapons[] = {"SCAR_H_STD_EGLM_Spect","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9"};
		respawnMagazines[] = {"20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_SmokeRed_M203","15Rnd_9x19_M9","15Rnd_9x19_M9","HandGrenade_West","IR_Strobe_Target","SmokeShellRed"};
	};
	class US_Delta_Force_SD_EP1: US_Delta_Force_EP1
	{
		scope = 2;
		accuracy = 3.9;
		canHideBodies = 1;
		vehicleClass = "MenDeltaForce";
		displayName = "$STR_EP1_DN_US_Delta_Force_SD_EP1";
		model = "\ca\characters_e\Delta\Delta1.p3d";
		identityTypes[] = {"Language_EN_EP1","Head_USMC"};
		camouflage = 0.6;
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\Delta\Data\DO_1_Multicam_CO"};
		backpack = "";
		weapons[] = {"SCAR_H_CQC_CCO_SD","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9SD"};
		magazines[] = {"20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed"};
		respawnWeapons[] = {"SCAR_H_CQC_CCO_SD","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9SD"};
		respawnMagazines[] = {"20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","HandGrenade_West","IR_Strobe_Target","SmokeShellRed"};
	};
	class US_Delta_Force_MG_EP1: US_Delta_Force_EP1
	{
		scope = 2;
		accuracy = 3.9;
		canHideBodies = 1;
		camouflage = 0.9;
		vehicleClass = "MenDeltaForce";
		displayName = "$STR_EP1_DN_US_Delta_Force_MG_EP1";
		model = "\ca\characters_e\Delta\Delta2.p3d";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		identityTypes[] = {"Language_EN_EP1","Head_USMC"};
		backpack = "";
		weapons[] = {"Mk_48_DES_EP1","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9"};
		magazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"Mk_48_DES_EP1","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9"};
		respawnMagazines[] = {"100Rnd_762x51_M240","100Rnd_762x51_M240","100Rnd_762x51_M240","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class US_Delta_Force_AR_EP1: US_Delta_Force_EP1
	{
		scope = 2;
		accuracy = 3.9;
		canHideBodies = 1;
		vehicleClass = "MenDeltaForce";
		displayName = "$STR_EP1_DN_US_Delta_Force_AR_EP1";
		model = "\ca\characters_e\Delta\Delta2.p3d";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		identityTypes[] = {"Language_EN_EP1","Head_USMC"};
		backpack = "";
		weapons[] = {"M249_m145_EP1","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9"};
		magazines[] = {"100Rnd_556x45_M249","100Rnd_556x45_M249","100Rnd_556x45_M249","100Rnd_556x45_M249","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"M249_m145_EP1","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9"};
		respawnMagazines[] = {"100Rnd_556x45_M249","100Rnd_556x45_M249","100Rnd_556x45_M249","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class US_Delta_Force_Night_EP1: US_Delta_Force_EP1
	{
		scope = 2;
		accuracy = 3.9;
		canHideBodies = 1;
		camouflage = 0.6;
		vehicleClass = "MenDeltaForce";
		displayName = "$STR_EP1_DN_US_Delta_Force_Night_EP1";
		model = "\ca\characters_e\Delta\Delta2.p3d";
		identityTypes[] = {"Language_EN_EP1","Head_USMC"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\Delta\Data\DO_1_Multicam_CO"};
		backpack = "US_Patrol_Pack_Specops_EP1";
		weapons[] = {"SCAR_H_STD_TWS_SD","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9SD"};
		magazines[] = {"20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD"};
		respawnWeapons[] = {"SCAR_H_STD_TWS_SD","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9SD"};
		respawnMagazines[] = {"20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD"};
	};
	class US_Delta_Force_Marksman_EP1: US_Delta_Force_EP1
	{
		scope = 2;
		accuracy = 3.9;
		canHideBodies = 1;
		vehicleClass = "MenDeltaForce";
		displayName = "$STR_EP1_DN_US_Delta_Force_Marksman_EP1";
		model = "\ca\characters_e\Delta\Delta1.p3d";
		identityTypes[] = {"Language_EN_EP1","Delta_glasses","Head_USMC"};
		backpack = "US_Patrol_Pack_Specops_EP1";
		weapons[] = {"SCAR_H_LNG_Sniper","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9SD"};
		magazines[] = {"20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellPurple","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD"};
		respawnWeapons[] = {"SCAR_H_LNG_Sniper","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9SD"};
		respawnMagazines[] = {"20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","HandGrenade_West","IR_Strobe_Target","SmokeShellPurple","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD"};
	};
	class US_Delta_Force_M14_EP1: US_Delta_Force_EP1
	{
		scope = 2;
		accuracy = 3.9;
		canHideBodies = 1;
		vehicleClass = "MenDeltaForce";
		displayName = "$STR_EP1_DN_US_Delta_Force_M14_EP1";
		model = "\ca\characters_e\Delta\Delta2.p3d";
		identityTypes[] = {"Language_EN_EP1","Head_USMC"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\Delta\Data\DO_1_Multicam_CO"};
		backpack = "";
		weapons[] = {"M14_EP1","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9"};
		magazines[] = {"20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9","15Rnd_9x19_M9"};
		respawnWeapons[] = {"M14_EP1","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9"};
		respawnMagazines[] = {"20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","20Rnd_762x51_DMR","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","15Rnd_9x19_M9","15Rnd_9x19_M9"};
	};
	class US_Delta_Force_Air_Controller_EP1: US_Delta_Force_EP1
	{
		scope = 2;
		accuracy = 3.9;
		canHideBodies = 1;
		camouflage = 0.6;
		vehicleClass = "MenDeltaForce";
		displayName = "$STR_EP1_DN_US_Delta_Force_Air_Controller_EP1";
		model = "\ca\characters_e\Delta\Delta1.p3d";
		identityTypes[] = {"Language_EN_EP1","Head_USMC"};
		backpack = "";
		weapons[] = {"SCAR_H_CQC_CCO_SD","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9SD","Laserdesignator"};
		magazines[] = {"20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","Laserbatteries","IR_Strobe_Target","SmokeShellRed","SmokeShellPurple","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD"};
		respawnWeapons[] = {"SCAR_H_CQC_CCO_SD","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9SD","Laserdesignator"};
		respawnMagazines[] = {"20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","20rnd_762x51_SB_SCAR","Laserbatteries","IR_Strobe_Target","SmokeShellPurple","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD"};
	};
	class US_Pilot_Light_EP1: US_Soldier_Base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_US_Pilot_Light_EP1";
		model = "\ca\characters_E\US\US_Pilot_light";
		weaponSlots = "1	 + 	4	 + 6 * 		256	 + 2 * 	4096	 + 	2	 + 4*	16  + 12*131072";
		weapons[] = {"Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
	};
	class Drake: US_Soldier_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Drake";
		canHideBodies = 1;
		vehicleClass = "MenSpecial";
		faceType = "DrakeHead_EP1";
		model = "\ca\characters_E\US\US_machine_gunner.p3d";
		portrait = "\ca\characters_E\data\portraits\Drake_CA.paa";
		weapons[] = {"M249_m145_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"100Rnd_556x45_M249","100Rnd_556x45_M249","100Rnd_556x45_M249","100Rnd_556x45_M249","HandGrenade_West","HandGrenade_West","SmokeShellGreen","SmokeShellYellow"};
		threat[] = {1,0.1,0.3};
		respawnWeapons[] = {"M249_m145_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"100Rnd_556x45_M249","100Rnd_556x45_M249","HandGrenade_West","SmokeShellYellow"};
	};
	class Herrera: US_Soldier_Crew_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Herrera";
		canHideBodies = 1;
		vehicleClass = "MenSpecial";
		faceType = "HerreraHead_EP1";
		model = "\ca\characters_E\US\US_crewman.p3d";
		portrait = "\ca\characters_E\data\portraits\Herrera_CA.paa";
		weaponSlots = "1	 + 	4	 + 8 * 		256	 + 2 * 	4096	 + 	2	 + 4*	16  + 12*131072";
		weapons[] = {"SCAR_L_CQC_Holo","Colt1911","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","7Rnd_45ACP_1911","HandGrenade_West","HandGrenade_West"};
		respawnWeapons[] = {"SCAR_L_CQC_Holo","Colt1911","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","7Rnd_45ACP_1911","7Rnd_45ACP_1911","HandGrenade_West"};
	};
	class Pierce: US_Soldier_Pilot_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Pierce";
		canHideBodies = 1;
		vehicleClass = "MenSpecial";
		faceType = "PierceHead_EP1";
		model = "\ca\characters_E\US\US_Pilot";
		portrait = "\ca\characters_E\data\portraits\Pierce_CA.paa";
	};
	class Graves: US_Delta_Force_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Graves";
		canHideBodies = 1;
		vehicleClass = "MenSpecial";
		camouflage = 0.6;
		faceType = "GravesHead_EP1";
		model = "\ca\characters_E\Delta\Delta2.p3d";
		portrait = "\ca\characters_E\data\portraits\Graves_CA.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\Delta\Data\DO_1_Multicam_CO"};
		identityTypes[] = {"Language_EN_EP1","Head_USMC"};
		backpack = "US_Patrol_Pack_Specops_EP1";
		weapons[] = {"SCAR_H_STD_EGLM_Spect","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9SD"};
		magazines[] = {"20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_SmokeGreen_M203","1Rnd_SmokeYellow_M203","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","HandGrenade_West","HandGrenade_West","SmokeShellPurple","SmokeShellYellow"};
		respawnWeapons[] = {"SCAR_H_STD_EGLM_Spect","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","M9SD"};
		respawnMagazines[] = {"20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","20rnd_762x51_B_SCAR","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_SmokeGreen_M203","1Rnd_SmokeYellow_M203","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","15Rnd_9x19_M9SD","HandGrenade_West","SmokeShellPurple"};
	};
	class Drake_Light: Drake
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Drake_Light";
		model = "\ca\characters_E\US\US_machine_gunner_Light";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
	};
	class Herrera_Light: Herrera
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Herrera_Light";
		model = "\ca\characters_E\US\US_crewman_Light";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
	};
	class Pierce_Light: Pierce
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Pierce_Light";
		model = "\ca\characters_E\US\US_Pilot_light";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
	};
	class Graves_Light: Graves
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Graves_Light";
		model = "\ca\characters_E\Delta\Delta2_Light.p3d";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_e\Delta\Data\DO_1_Multicam_CO"};
	};
	class UN_CDF_Soldier_base_EP1: SoldierGB
	{
		expansion = 1;
		side = 2;
		faction = "BIS_UN";
		identityTypes[] = {"Language_EN_EP1","Head_CDF","CDF_Glasses"};
		faceType = "Man";
		genericNames = "CzechMen";
		vehicleClass = "Men";
		portrait = "\Ca\characters\data\portraits\comBarHead_bluFor_cdf_ca";
		model = "\ca\characters_E\UN\UN_CDF_Soldier";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_soldier_CA.paa";
		accuracy = 2.0;
		camouflage = 1.4;
		minFireTime = 10;
		scope = 1;
		cost = 40000;
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.7;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		canCarryBackPack = 1;
		weapons[] = {"AK_74","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"AK_74","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East"};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
	};
	class UN_CDF_Soldier_EP1: UN_CDF_Soldier_base_EP1
	{
		model = "\ca\characters_E\UN\UN_CDF_Soldier";
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_UN_CDF_Soldier_EP1";
		weapons[] = {"AK_74_GL_kobra","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","HandGrenade_East","HandGrenade_East","HandGrenade_East","1Rnd_HE_GP25","1Rnd_HE_GP25","1Rnd_HE_GP25","1Rnd_HE_GP25","1Rnd_HE_GP25","1Rnd_HE_GP25","1Rnd_HE_GP25","1Rnd_HE_GP25"};
		respawnWeapons[] = {"AK_74_GL_kobra","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","HandGrenade_East","1Rnd_HE_GP25","1Rnd_HE_GP25","1Rnd_HE_GP25","1Rnd_HE_GP25"};
	};
	class UN_CDF_Soldier_B_EP1: UN_CDF_Soldier_EP1
	{
		displayName = "$STR_EP1_DN_UN_CDF_Soldier_B_EP1";
		backpack = "TKG_ALICE_Pack_AmmoAK74_EP1";
		canCarryBackPack = 1;
	};
	class UN_CDF_Soldier_AAT_EP1: UN_CDF_Soldier_EP1
	{
		displayName = "$STR_EP1_DN_UN_CDF_Soldier_AAT_EP1";
		backpack = "TK_RPG_Backpack_EP1";
		canCarryBackPack = 1;
	};
	class UN_CDF_Soldier_AMG_EP1: UN_CDF_Soldier_EP1
	{
		displayName = "$STR_EP1_DN_UN_CDF_Soldier_AMG_EP1";
		backpack = "TK_ALICE_Pack_AmmoMG_EP1";
		canCarryBackPack = 1;
	};
	class UN_CDF_Soldier_AT_EP1: UN_CDF_Soldier_base_EP1
	{
		model = "\ca\characters_E\UN\UN_CDF_Soldier";
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_UN_CDF_Soldier_AT_EP1";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		threat[] = {1,0.6,0.1};
		weapons[] = {"AKS_74_kobra","RPG7V","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","PG7VL","PG7VL","PG7VL"};
		respawnWeapons[] = {"AKS_74_kobra","RPG7V","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","PG7VL","PG7VL"};
	};
	class UN_CDF_Soldier_MG_EP1: UN_CDF_Soldier_base_EP1
	{
		model = "\ca\characters_E\UN\UN_CDF_Soldier";
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_UN_CDF_Soldier_MG_EP1";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		threat[] = {1,0.1,0.6};
		weapons[] = {"PK","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"PK","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","HandGrenade_East"};
	};
	class UN_CDF_Soldier_SL_EP1: UN_CDF_Soldier_base_EP1
	{
		model = "\ca\characters_E\UN\UN_CDF_Soldier";
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_UN_CDF_Soldier_SL_EP1";
		Icon = "\Ca\characters2\data\icon\i_leader_CA.paa";
		weapons[] = {"AKS_74_pso","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Makarov"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellRed","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov"};
		respawnWeapons[] = {"AKS_74_pso","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Makarov"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","SmokeShellRed","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov"};
	};
	class UN_CDF_Soldier_Officer_EP1: UN_CDF_Soldier_base_EP1
	{
		model = "\ca\characters_e\UN\UN_CDF_Officer";
		portrait = "\Ca\characters\data\portraits\comBarHead_common_officer_ca";
		scope = 2;
		displayName = "$STR_EP1_DN_UN_CDF_Soldier_Officer_EP1";
		Picture = "\Ca\characters\data\Ico\i_off_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_officer"};
				speechPlural[] = {"veh_officers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_officer_CZ"};
				speechPlural[] = {"veh_officers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_officer_CZ4P"};
				speechPlural[] = {"veh_officers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_officer_RU"};
				speechPlural[] = {"veh_officers_RU"};
			};
		};
		TextPlural = "$STR_DN_officers";
		TextSingular = "$STR_DN_officer";
		nameSound = "veh_officer";
		identityTypes[] = {"Language_EN_EP1","Head_CDF_CO","CDF_Glasses"};
		accuracy = 3.6;
		camouflage = 1.2;
		cost = 700000;
		nightVision = 1;
		enableGPS = 1;
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		weapons[] = {"AKS_74_U","Makarov","ItemGPS","NVGoggles","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","SmokeShell","SmokeShellRed","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov"};
		respawnWeapons[] = {"AKS_74_U","Makarov","ItemGPS","NVGoggles","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnmagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","SmokeShellRed","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov"};
	};
	class UN_CDF_Soldier_Guard_EP1: UN_CDF_Soldier_EP1
	{
		displayName = "$STR_EP1_DN_UN_CDF_Soldier_Guard_EP1";
		model = "\ca\characters_e\UN\UN_CDF_Officer";
		portrait = "\Ca\characters\data\portraits\comBarHead_common_officer_ca";
		weapons[] = {"AKS_74","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"AKS_74","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East"};
	};
	class UN_CDF_Soldier_Pilot_EP1: UN_CDF_Soldier_base_EP1
	{
		model = "\ca\characters_e\UN\UN_CDF_Pilot";
		accuracy = 3.2;
		camouflage = 1.2;
		cost = 20000;
		portrait = "\Ca\characters\data\portraits\comBarHead_ru_pilot_ca";
		scope = 2;
		displayName = "$STR_DN_PILOT";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_pilot"};
				speechPlural[] = {"veh_pilots"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_pilot_CZ"};
				speechPlural[] = {"veh_pilots_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_pilot_CZ4P"};
				speechPlural[] = {"veh_pilots_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_pilot_RU"};
				speechPlural[] = {"veh_pilots_RU"};
			};
		};
		TextPlural = "$STR_DN_pilots";
		TextSingular = "$STR_DN_pilot";
		nameSound = "veh_pilot";
		weapons[] = {"AKS_74_U","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.7;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","SmokeShell","SmokeShellRed","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"AKS_74_U","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnmagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","SmokeShellRed","HandGrenade_East"};
	};
	class UN_CDF_Soldier_Crew_EP1: UN_CDF_Soldier_base_EP1
	{
		model = "\ca\characters_e\UN\UN_CDF_Crew";
		accuracy = 3.4;
		camouflage = 1.4;
		cost = 20000;
		portrait = "\Ca\characters\data\portraits\comBarHead_common_crew_ca";
		scope = 2;
		displayName = "$STR_DN_CREW";
		weapons[] = {"AKS_74_U","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"AKS_74_U","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnmagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East"};
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_crew"};
				speechPlural[] = {"veh_crews"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_crew_CZ"};
				speechPlural[] = {"veh_crews_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_crew_CZ4P"};
				speechPlural[] = {"veh_crews_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_crew_RU"};
				speechPlural[] = {"veh_crews_RU"};
			};
		};
		TextPlural = "$STR_DN_crews";
		TextSingular = "$STR_DN_crew";
		nameSound = "veh_crew";
	};
	class UN_CDF_Soldier_Light_EP1: UN_CDF_Soldier_base_EP1
	{
		model = "\ca\characters_e\UN\UN_CDF_Light";
		accuracy = 3.4;
		camouflage = 1.4;
		cost = 20000;
		portrait = "\Ca\characters\data\portraits\comBarHead_bluFor_cdf_ca";
		scope = 2;
		displayName = "$STR_EP1_DN_UN_CDF_Soldier_Light_EP1";
		weapons[] = {"AKS_74_U","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK"};
		respawnWeapons[] = {"AKS_74_U","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
	};
	class TK_Soldier_base_EP1: SoldierEB
	{
		expansion = 1;
		identityTypes[] = {"Language_TK_EP1","Head_TK","CDF_Glasses"};
		faceType = "Man";
		side = 0;
		genericNames = "TakistaniMen";
		vehicleClass = "Men";
		portrait = "\Ca\characters\data\portraits\comBarHead_ru_soldier_ca";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_soldier_CA.paa";
		accuracy = 2.0;
		camouflage = 1.4;
		minFireTime = 10;
		cost = 40000;
		canCarryBackPack = 1;
		displayName = "$STR_EP1_DN_TK_Soldier_base_EP1";
		model = "\CA\characters_E\TK\TK_Soldier";
		faction = "BIS_TK";
		scope = 0;
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		hiddenSelections[] = {"Camo"};
		class TalkTopics: TalkTopics
		{
			core_tk = "Core_Full_E";
		};
		languages[] = {"TK"};
	};
	class TK_Soldier_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Soldier_EP1";
		weapons[] = {"FN_FAL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"FN_FAL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_East"};
	};
	class TK_Soldier_GL_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Soldier_GL_EP1";
		weapons[] = {"M16A2GL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"M16A2GL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","HandGrenade_East"};
	};
	class TK_Soldier_B_EP1: TK_Soldier_EP1
	{
		displayName = "$STR_EP1_DN_TK_Soldier_B_EP1";
		backpack = "TKA_Assault_Pack_Ammo_EP1";
	};
	class TK_Soldier_AAT_EP1: TK_Soldier_EP1
	{
		displayName = "$STR_EP1_DN_TK_Soldier_AAT_EP1";
		backpack = "TK_RPG_Backpack_EP1";
	};
	class TK_Soldier_AMG_EP1: TK_Soldier_EP1
	{
		displayName = "$STR_EP1_DN_TK_Soldier_AMG_EP1";
		backpack = "TK_ALICE_Pack_AmmoMG_EP1";
	};
	class TK_Soldier_LAT_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Soldier_LAT_EP1";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_launcherSoldier"};
				speechPlural[] = {"veh_launcherSoldiers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ"};
				speechPlural[] = {"veh_launcherSoldiers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ4P"};
				speechPlural[] = {"veh_launcherSoldiers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_launcherSoldier_RU"};
				speechPlural[] = {"veh_launcherSoldiers_RU"};
			};
		};
		TextPlural = "$STR_DN_launcherSoldiers";
		TextSingular = "$STR_DN_launcherSoldier";
		nameSound = "veh_launcherSoldier";
		threat[] = {1,0.9,0.1};
		weapons[] = {"FN_FAL","RPG18","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","RPG18"};
		respawnWeapons[] = {"FN_FAL","RPG18","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","RPG18"};
	};
	class TK_Soldier_AT_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Soldier_AT_EP1";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_launcherSoldier"};
				speechPlural[] = {"veh_launcherSoldiers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ"};
				speechPlural[] = {"veh_launcherSoldiers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ4P"};
				speechPlural[] = {"veh_launcherSoldiers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_launcherSoldier_RU"};
				speechPlural[] = {"veh_launcherSoldiers_RU"};
			};
		};
		TextPlural = "$STR_DN_launcherSoldiers";
		TextSingular = "$STR_DN_launcherSoldier";
		nameSound = "veh_launcherSoldier";
		threat[] = {1,0.9,0.1};
		weapons[] = {"FN_FAL","RPG7V","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","PG7VL","PG7VL"};
		respawnWeapons[] = {"FN_FAL","RPG7V","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","PG7VL"};
	};
	class TK_Soldier_HAT_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Soldier_HAT_EP1";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_launcherSoldier"};
				speechPlural[] = {"veh_launcherSoldiers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ"};
				speechPlural[] = {"veh_launcherSoldiers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ4P"};
				speechPlural[] = {"veh_launcherSoldiers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_launcherSoldier_RU"};
				speechPlural[] = {"veh_launcherSoldiers_RU"};
			};
		};
		TextPlural = "$STR_DN_launcherSoldiers";
		TextSingular = "$STR_DN_launcherSoldier";
		nameSound = "veh_launcherSoldier";
		threat[] = {1,1,0.1};
		weapons[] = {"FN_FAL","MetisLauncher","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","AT13"};
		respawnWeapons[] = {"FN_FAL","MetisLauncher","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","AT13"};
	};
	class TK_Soldier_AA_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Soldier_AA_EP1";
		icon = "\Ca\characters2\data\icon\i_launcher_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_launcherSoldier"};
				speechPlural[] = {"veh_launcherSoldiers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ"};
				speechPlural[] = {"veh_launcherSoldiers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_launcherSoldier_CZ4P"};
				speechPlural[] = {"veh_launcherSoldiers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_launcherSoldier_RU"};
				speechPlural[] = {"veh_launcherSoldiers_RU"};
			};
		};
		TextPlural = "$STR_DN_launcherSoldiers";
		TextSingular = "$STR_DN_launcherSoldier";
		nameSound = "veh_launcherSoldier";
		threat[] = {1,0.5,0.9};
		weapons[] = {"FN_FAL","Igla","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","Igla"};
		respawnWeapons[] = {"FN_FAL","Igla","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","Igla"};
	};
	class TK_Soldier_Engineer_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Soldier_Engineer_EP1";
		picture = "\Ca\characters_E\data\Ico\i_eng_ca.paa";
		engineer = 1;
		canDeactivateMines = 1;
		backpack = "TK_ALICE_Pack_Explosives_EP1";
		weapons[] = {"FN_FAL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"FN_FAL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_East"};
	};
	class TK_Soldier_MG_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Soldier_MG_EP1";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_mgunner"};
				speechPlural[] = {"veh_mgunners"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_mgunner_CZ"};
				speechPlural[] = {"veh_mgunners_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_mgunner_CZ4P"};
				speechPlural[] = {"veh_mgunners_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_mgunner_RU"};
				speechPlural[] = {"veh_mgunners_RU"};
			};
		};
		TextPlural = "$STR_DN_mgunners";
		TextSingular = "$STR_DN_mgunner";
		nameSound = "veh_mgunner";
		threat[] = {1,0.1,0.6};
		weapons[] = {"PK","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"PK","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","HandGrenade_East"};
	};
	class TK_Soldier_AR_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Soldier_AR_EP1";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_mgunner"};
				speechPlural[] = {"veh_mgunners"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_mgunner_CZ"};
				speechPlural[] = {"veh_mgunners_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_mgunner_CZ4P"};
				speechPlural[] = {"veh_mgunners_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_mgunner_RU"};
				speechPlural[] = {"veh_mgunners_RU"};
			};
		};
		TextPlural = "$STR_DN_mgunners";
		TextSingular = "$STR_DN_mgunner";
		nameSound = "veh_mgunner";
		threat[] = {1,0.1,0.3};
		backpack = "TK_Assault_Pack_RPK_EP1";
		weapons[] = {"RPK_74","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"75Rnd_545x39_RPK","75Rnd_545x39_RPK","75Rnd_545x39_RPK","75Rnd_545x39_RPK","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"RPK_74","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"75Rnd_545x39_RPK","75Rnd_545x39_RPK","HandGrenade_East"};
	};
	class TK_Soldier_Medic_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Soldier_Medic_EP1";
		model = "\CA\characters_E\TK\TK_Soldier_Medic.p3d";
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		attendant = 1;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Medic"};
				speechPlural[] = {"veh_Medics"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Medic_CZ"};
				speechPlural[] = {"veh_Medics_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Medic_CZ4P"};
				speechPlural[] = {"veh_Medics_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Medic_RU"};
				speechPlural[] = {"veh_Medics_RU"};
			};
		};
		TextPlural = "$STR_DN_Medics";
		TextSingular = "$STR_DN_Medic";
		nameSound = "veh_Medic";
		cost = 100000;
		weaponSlots = "1	 + 	4	 + 8 * 		256	 + 2 * 	4096	 + 	2	 + 4*	16  + 12*131072";
		canCarryBackPack = 0;
		weapons[] = {"FN_FAL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"FN_FAL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_East"};
	};
	class TK_Soldier_SL_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Soldier_SL_EP1";
		weapons[] = {"FN_FAL","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_East","HandGrenade_East","smokeshell","smokeshellOrange"};
		respawnWeapons[] = {"FN_FAL","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_East","smokeshellOrange"};
	};
	class TK_Soldier_Officer_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		model = "\CA\characters_E\TK\Tk_Officer";
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Soldier_Officer_EP1";
		weapons[] = {"AKS_74_U","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","HandGrenade_East","smokeshell","smokeshellOrange"};
		respawnWeapons[] = {"AKS_74_U","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","smokeshellOrange"};
	};
	class TK_Soldier_Spotter_EP1: TK_Soldier_base_EP1
	{
		displayName = "$STR_EP1_DN_TK_Soldier_Spotter_EP1";
		scope = 2;
		accuracy = 3.9;
		camouflage = 0.5;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Sniper"};
				speechPlural[] = {"veh_Snipers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Sniper_CZ"};
				speechPlural[] = {"veh_Snipers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Sniper_CZ4P"};
				speechPlural[] = {"veh_Snipers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Sniper_RU"};
				speechPlural[] = {"veh_Snipers_RU"};
			};
		};
		TextPlural = "$STR_DN_Snipers";
		TextSingular = "$STR_DN_Sniper";
		nameSound = "veh_Sniper";
		cost = 200000;
		threat[] = {1,0.3,0.3};
		model = "\ca\characters_E\Ghillie\Ghillie_Top";
		portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		weapons[] = {"FN_FAL","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_East","HandGrenade_East","SmokeShell","smokeshellBlue"};
		respawnWeapons[] = {"FN_FAL","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_East","smokeshellBlue"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\data\us_hhl.rvmat","ca\characters\data\us_hhl_wound1.rvmat","ca\characters\data\us_hhl_wound2.rvmat"};
		};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_E\Ghillie\Data\Ghillie_Top_desert_co.paa"};
	};
	class TK_Soldier_Sniper_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_TK_Soldier_Sniper_EP1";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		model = "\ca\characters_E\Ghillie\Ghillie_Top";
		portrait = "\Ca\characters\data\portraits\comBarHead_common_sniper_ca";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Sniper"};
				speechPlural[] = {"veh_Snipers"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Sniper_CZ"};
				speechPlural[] = {"veh_Snipers_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Sniper_CZ4P"};
				speechPlural[] = {"veh_Snipers_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Sniper_RU"};
				speechPlural[] = {"veh_Snipers_RU"};
			};
		};
		TextPlural = "$STR_DN_Snipers";
		TextSingular = "$STR_DN_Sniper";
		nameSound = "veh_Sniper";
		accuracy = 3.9;
		camouflage = 0.5;
		cost = 350000;
		threat[] = {1,0.3,0.3};
		weapons[] = {"SVD_des_EP1","NVGoggles","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		magazines[] = {"10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","HandGrenade_East","HandGrenade_East","SmokeSHell","smokeshellBlue"};
		respawnWeapons[] = {"SVD_des_EP1","NVGoggles","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS"};
		respawnMagazines[] = {"10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","HandGrenade_East","smokeshellBlue"};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 0.8;
				passThrough = 1;
			};
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters\data\us_hhl.rvmat","ca\characters\data\us_hhl_wound1.rvmat","ca\characters\data\us_hhl_wound2.rvmat"};
		};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters_E\Ghillie\Data\Ghillie_Top_desert_co.paa"};
	};
	class TK_Soldier_SniperH_EP1: TK_Soldier_Sniper_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_TK_Soldier_SniperH_EP1";
		threat[] = {1,0.6,0.6};
		weapons[] = {"KSVK","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","itemGPS"};
		magazines[] = {"5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","HandGrenade_East","HandGrenade_East","SmokeShell","smokeshellBlue"};
		respawnWeapons[] = {"KSVK","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","itemGPS"};
		respawnMagazines[] = {"5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","5Rnd_127x108_KSVK","HandGrenade_East","smokeshellBlue"};
	};
	class TK_Soldier_Sniper_Night_EP1: TK_Soldier_Sniper_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_TK_Soldier_Sniper_Night_EP1";
		weapons[] = {"SVD_NSPU_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","itemGPS"};
		magazines[] = {"10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","HandGrenade_East","HandGrenade_East","SmokeShell","smokeshellBlue"};
		respawnWeapons[] = {"SVD_NSPU_EP1","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular","itemGPS"};
		respawnMagazines[] = {"10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","10Rnd_762x54_SVD","HandGrenade_East","smokeshellBlue"};
	};
	class TK_Soldier_Night_1_EP1: TK_Soldier_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_TK_Soldier_Night_1_EP1";
		weapons[] = {"AKS_74_NSPU","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"AKS_74_NSPU","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East"};
	};
	class TK_Soldier_Night_2_EP1: TK_Soldier_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_TK_Soldier_Night_2_EP1";
		weapons[] = {"FN_FAL_ANPVS4","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"FN_FAL_ANPVS4","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_East"};
	};
	class TK_Soldier_TWS_EP1: TK_Soldier_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_TK_Soldier_TWS_EP1";
		weapons[] = {"AKS_74_GOSHAWK","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"AKS_74_GOSHAWK","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East"};
	};
	class TK_Soldier_Crew_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		model = "\CA\characters_E\TK\Tk_Crew";
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Soldier_Crew_EP1";
		weapons[] = {"AKS_74_U","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East","HandGrenade_East"};
		respawnWeapons[] = {"AKS_74_U","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","HandGrenade_East"};
	};
	class TK_Soldier_Pilot_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		model = "\CA\characters_E\TK\Tk_Pilot";
		portrait = "\Ca\characters\data\portraits\comBarHead_usmc_pilot_ca.paa";
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Soldier_Pilot_EP1";
		weapons[] = {"AKS_74_U","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","itemGPS"};
		magazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","SmokeShell","smokeshellBlue"};
		respawnWeapons[] = {"AKS_74_U","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles","itemGPS"};
		respawnMagazines[] = {"30Rnd_545x39_AK","30Rnd_545x39_AK","30Rnd_545x39_AK","smokeshellBlue"};
	};
	class TK_Special_Forces_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		model = "\CA\characters_E\TK\Tk_StormTrooper";
		accuracy = 3.9;
		vehicleClass = "MenSpecialForces";
		displayName = "$STR_EP1_DN_TK_Special_Forces_EP1";
		backpack = "TKA_ALICE_Pack_Ammo_EP1";
		weapons[] = {"M16A2GL","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Makarov"};
		magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","HandGrenade_East","HandGrenade_East","SmokeShell","smokeshellBlue","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","1Rnd_HE_M203","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov"};
		respawnWeapons[] = {"Binocular","M16A2GL","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Makarov"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag","1Rnd_HE_M203","1Rnd_HE_M203","HandGrenade_East","smokeshellBlue","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov"};
	};
	class TK_Special_Forces_TL_EP1: TK_Special_Forces_EP1
	{
		displayName = "$STR_EP1_DN_TK_Special_Forces_TL_EP1";
		backpack = "";
		weapons[] = {"FN_FAL","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","MakarovSD"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_East","HandGrenade_East","smokeshellBlue","smokeshellOrange","8Rnd_9x18_MakarovSD","8Rnd_9x18_MakarovSD","8Rnd_9x18_MakarovSD","8Rnd_9x18_MakarovSD"};
		respawnWeapons[] = {"FN_FAL","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","MakarovSD"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","HandGrenade_East","smokeshellOrange","8Rnd_9x18_MakarovSD","8Rnd_9x18_MakarovSD"};
	};
	class TK_Special_Forces_MG_EP1: TK_Special_Forces_EP1
	{
		displayName = "$STR_EP1_DN_TK_Special_Forces_MG_EP1";
		backpack = "";
		weapons[] = {"PK","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Makarov"};
		magazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","HandGrenade_East","HandGrenade_East","SmokeShell","SmokeShellBlue","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov"};
		respawnWeapons[] = {"PK","Binocular","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Makarov"};
		respawnMagazines[] = {"100Rnd_762x54_PK","100Rnd_762x54_PK","100Rnd_762x54_PK","HandGrenade_East","SmokeShellBlue","8Rnd_9x18_Makarov","8Rnd_9x18_Makarov"};
	};
	class TK_Aziz_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Aziz_EP1";
		portrait = "\Ca\characters_E\data\portraits\tak_spec_CA";
		model = "\CA\characters_E\TK\TK_aziz";
		Icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		weapons[] = {"revolver_gold_EP1","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"6Rnd_45ACP","6Rnd_45ACP","6Rnd_45ACP","6Rnd_45ACP","6Rnd_45ACP","6Rnd_45ACP"};
		respawnWeapons[] = {"revolver_gold_EP1","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"6Rnd_45ACP","6Rnd_45ACP","6Rnd_45ACP"};
	};
	class TK_Commander_EP1: TK_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_TK_Commander_EP1";
		model = "\CA\characters_E\TK\Tk_Commander";
		Icon = "\Ca\characters2\data\icon\i_officer_CA.paa";
		weapons[] = {"FN_FAL","revolver_gold_EP1","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular"};
		magazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","SmokeShell","SmokeShellBlue","6Rnd_45ACP","6Rnd_45ACP","6Rnd_45ACP","6Rnd_45ACP","6Rnd_45ACP","6Rnd_45ACP"};
		respawnWeapons[] = {"FN_FAL","revolver_gold_EP1","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","Binocular"};
		respawnMagazines[] = {"20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","20Rnd_762x51_FNFAL","SmokeShellBlue","6Rnd_45ACP","6Rnd_45ACP","6Rnd_45ACP"};
	};
	class GER_Soldier_base_EP1: SoldierWB
	{
		expansion = 1;
		identityTypes[] = {"Language_DE_EP1","Head_DE","CDF_Glasses"};
		faceType = "Man";
		side = 1;
		genericNames = "GermanMen";
		vehicleClass = "Men";
		portrait = "\Ca\characters\data\portraits\comBarHead_opFor_ca";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters2\data\icon\i_soldier_CA.paa";
		accuracy = 2.0;
		camouflage = 1.4;
		minFireTime = 10;
		cost = 40000;
		threat[] = {1,0.5,0.3};
		class HitPoints: HitPoints
		{
			class HitHead: HitHead
			{
				armor = 0.6;
			};
			class HitBody: HitBody
			{
				armor = 1;
				passThrough = 0.8;
			};
		};
		canCarryBackPack = 1;
		weapons[] = {"G36a_camo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		magazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","SmokeShell"};
		respawnWeapons[] = {"G36a_camo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnMagazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","SmokeShell"};
		displayName = "$STR_DN_RIFLEMAN";
		model = "\ca\characters_E\GER\GER_rifleman";
		faction = "BIS_GER";
		scope = 0;
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		hiddenSelections[] = {"Camo"};
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
	};
	class GER_Soldier_EP1: GER_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_GER_Soldier_EP1";
		model = "\ca\characters_E\GER\GER_rifleman";
		portrait = "\Ca\characters_E\data\portraits\ger_soldier_CA";
		canHideBodies = 1;
		backpack = "DE_Backpack_Specops_EP1";
		weapons[] = {"G36a_camo","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","glock17_EP1"};
		magazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"G36a_camo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		respawnMagazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class GER_Soldier_Medic_EP1: GER_Soldier_base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_GER_Soldier_Medic_EP1";
		model = "\ca\characters_E\GER\GER_medic";
		picture = "\Ca\characters\data\Ico\i_Med_CA.paa";
		Icon = "\Ca\characters2\data\icon\i_medic_CA.paa";
		accuracy = 3.7;
		cost = 100000;
		attendant = 1;
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_Medic"};
				speechPlural[] = {"veh_Medics"};
			};
			class EN: Default{};
			class CZ
			{
				speechSingular[] = {"veh_Medic_CZ"};
				speechPlural[] = {"veh_Medics_CZ"};
			};
			class CZ_Akuzativ
			{
				speechSingular[] = {"veh_Medic_CZ4P"};
				speechPlural[] = {"veh_Medics_CZ4P"};
			};
			class RU
			{
				speechSingular[] = {"veh_Medic_RU"};
				speechPlural[] = {"veh_Medics_RU"};
			};
		};
		TextPlural = "$STR_DN_Medics";
		TextSingular = "$STR_DN_Medic";
		nameSound = "veh_Medic";
		weaponSlots = "1	 + 	4	 + 8 * 		256	 + 2 * 	4096	 + 	2	 + 4*	16  + 12*131072";
		canHideBodies = 1;
		canCarryBackPack = 0;
		weapons[] = {"G36C_camo","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","glock17_EP1"};
		magazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"G36C_camo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		respawnMagazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class GER_Soldier_TL_EP1: GER_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_GER_Soldier_TL_EP1";
		model = "\ca\characters_E\GER\GER_rifleman_light";
		icon = "\Ca\characters2\data\icon\i_leader_CA.paa";
		canHideBodies = 1;
		backpack = "DE_Backpack_Specops_EP1";
		weapons[] = {"G36K_camo","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","glock17_EP1"};
		magazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","SmokeShellGreen","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"G36K_camo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		respawnMagazines[] = {"30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","30Rnd_556x45_G36","HandGrenade_West","IR_Strobe_Target","SmokeShellGreen","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class GER_Soldier_Scout_EP1: GER_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_GER_Soldier_Scout_EP1";
		model = "\ca\characters_E\GER\GER_rifleman";
		canHideBodies = 1;
		backpack = "DE_Backpack_Specops_EP1";
		weapons[] = {"G36_C_SD_camo","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","glock17_EP1"};
		magazines[] = {"30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"G36_C_SD_camo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		respawnMagazines[] = {"30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","30Rnd_556x45_G36SD","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class GER_Soldier_MG_EP1: GER_Soldier_base_EP1
	{
		scope = 2;
		accuracy = 3.9;
		displayName = "$STR_EP1_DN_GER_Soldier_MG_EP1";
		model = "\ca\characters_E\GER\GER_rifleman";
		Icon = "\Ca\characters2\data\icon\i_machinegunner_CA.paa";
		canHideBodies = 1;
		backpack = "DE_Backpack_Specops_EP1";
		weapons[] = {"MG36_camo","NVGoggles","Binocular_Vector","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","itemGPS","glock17_EP1"};
		magazines[] = {"100Rnd_556x45_BetaCMag","100Rnd_556x45_BetaCMag","100Rnd_556x45_BetaCMag","100Rnd_556x45_BetaCMag","HandGrenade_West","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
		respawnWeapons[] = {"MG36_camo","NVGoggles","Throw","Put","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular_Vector","itemGPS","glock17_EP1"};
		respawnMagazines[] = {"100Rnd_556x45_BetaCMag","100Rnd_556x45_BetaCMag","100Rnd_556x45_BetaCMag","HandGrenade_West","IR_Strobe_Target","SmokeShellRed","17Rnd_9x19_glock17","17Rnd_9x19_glock17"};
	};
	class InvisibleManW_EP1: SoldierWB
	{
		expansion = 1;
		identityTypes[] = {"Language_EN_EP1","Head_USMC"};
		model = "\ca\characters_e\invisibleMan";
		portrait = "\Ca\characters\data\Ico\i_null_CA.paa";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters\data\Ico\i_null_CA.paa";
		scope = 1;
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
	};
	class InvisibleManE_EP1: SoldierEB
	{
		expansion = 1;
		identityTypes[] = {"Head_RU"};
		model = "\ca\characters_e\invisibleMan";
		portrait = "\Ca\characters\data\Ico\i_null_CA.paa";
		picture = "\Ca\characters\data\Ico\i_null_CA.paa";
		icon = "\Ca\characters\data\Ico\i_null_CA.paa";
		scope = 1;
		class TalkTopics: TalkTopics
		{
			core_en = "Core_Full_E";
		};
		languages[] = {"EN"};
	};
};
//};
