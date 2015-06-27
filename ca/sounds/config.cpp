////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:05:36 2014 : Source 'file' date Fri Oct 31 06:05:36 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class sounds : config.bin{
class CfgPatches
{
	class CASounds
	{
		units[] = {"Sound_Owl","Sound_Stream","Sound_Frog","Sound_Frogs","Sound_Alarm","Sound_BirdSinging","Sound_Crickets1","Sound_Crickets2","Sound_Crickets3","Sound_Crickets4","Sound_Chicken","Sound_Cock","Sound_Cow","Sound_Crow","Sound_Wolf","Sound_Dog","Sound_BadDog","Sound_SorrowDog","Sound_LittleDog","Sound_Music"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgRadio{};
class CfgWhistleSound
{
	sound[] = {"ca\sounds\characters\noises\damage\wheesper1",0.6,1};
	downTime = 0.2;
	silentTime = 3;
	upTime = 4;
};
class CfgSounds
{
	class Explosion1
	{
		name = "$STR_CFG_SOUNDS_EXPLOSION1";
		sound[] = {"\ca\Weapons\data\Sound\Explosion_Small_02",1.0,1.0};
		titles[] = {};
	};
	class Explosion2
	{
		name = "$STR_CFG_SOUNDS_EXPLOSION2";
		sound[] = {"\ca\Weapons\data\Sound\explosion_mega_02_building",1.0,1.0};
		titles[] = {};
	};
	class Fountain
	{
		name = "$STR_CFG_SOUNDS_FOUNTAIN";
		sound[] = {"\ca\Sounds\sfx\stream",0.1,1.0};
		titles[] = {};
	};
	class Fire
	{
		name = "$STR_CFG_SOUNDS_FIRE";
		sound[] = {"\ca\Sounds\sfx\fire",0.31622776,1.0};
		titles[] = {};
	};
	class fanfare
	{
		name = "$STR_CFG_SOUNDS_FANFARE";
		sound[] = {"\ca\Sounds\sfx\fanfare",1.0,1.0};
		titles[] = {};
	};
	class info
	{
		name = "$STR_DN_Sounds_info";
		sound[] = {"ca\missions\sounds\info.wss",1.0,1.0};
		titles[] = {};
	};
	class Doors
	{
		name = "$STR_DN_Sounds_Doors";
		sound[] = {"ca\SOUNDS\Vehicles\Tracked\M1A1\ext\ext-m1-door-1",0.56234133,1.0};
		titles[] = {};
	};
	class Counter
	{
		name = "$STR_disp_arcsens_countdown";
		sound[] = {"\ca\Sounds\sfx\counter.wss",0.1,1.0};
		titles[] = {};
	};
};
class CfgSFX
{
	access = 1;
	seagull[] = {"\ca\sounds\animals\gulls1",0.1,1,100,1,0.2,1,5};
	class Preview
	{
		effect[] = {"ca\Weapons\data\Sound\M16_3_BS_Aa.wss",1.0,1.0};
		speech[] = {"ca\Dubbing\GLOBAL\RADIO\Male01\EN\CannotFire.wss",1.0,1.0};
		music[] = {"",1.0,1.0};
	};
	class Church
	{
		smallBell[] = {"\ca\Buildings\sound\bell1",1.0,1};
		largeBell[] = {"\ca\Buildings\sound\bell2",3.1622777,1};
	};
	class CA_AK
	{
		sounds[] = {"sound1","sound2"};
		name = "$STR_CFG_SFX_CA_AK";
		sound1[] = {"\ca\Weapons\data\Sound\AK74_2.wss",0.31622776,1,500,0.5,0,2,5};
		sound2[] = {"\ca\Weapons\data\Sound\ak74_2burst.wss",0.31622776,1,500,0.4,0,1,10};
		empty[] = {"",0,0,0,0,1,5,20};
	};
	class CA_M16
	{
		sounds[] = {"sound1","sound2"};
		name = "$STR_CFG_SFX_CA_M16";
		sound1[] = {"\ca\weapons\data\Sound\M16_2_SS.wss",0.31622776,1,500,0.5,0,2,5};
		sound2[] = {"\ca\weapons\data\Sound\M16_2_BS.wss",0.31622776,1,500,0.4,0,1,10};
		empty[] = {"",0,0,0,0,1,5,20};
	};
	class DestrHouse
	{
		sounds[] = {"DestrHouse1"};
		name = "$STR_CFG_SFX_DestrHouse";
		DestrHouse1[] = {"\ca\BUILDINGS\sound\building2_destroy",3.1622777,1,150,1,60,120,240};
		empty[] = {"",0,0,0,0,1,5,20};
	};
	class Fire
	{
		sounds[] = {"fire1"};
		name = "$STR_CFG_SFX_FIRE";
		fire1[] = {"\ca\Sounds\sfx\fire",0.056234132,1,20,1,0,0,0};
		empty[] = {"",0,0,0,0,1,5,20};
	};
	class CA_Expl1
	{
		sounds[] = {"sound1"};
		name = "$STR_CFG_SFX_CA_EXPL1";
		sound1[] = {"\ca\weapons\Data\Sound\explosion_large1",10.0,1,700,0.5,0,2,5};
		empty[] = {"",0,0,0,0,1,5,30};
	};
	class hedgesparrow
	{
		sounds[] = {"sing1","sing2","sing3","sing4","sing5"};
		name = "$STR_CFG_SFX_HEDGESPARROW";
		sing1[] = {"\ca\Sounds\animals\hedspar1",0.017782794,1,60,0.1,0,0,0};
		sing2[] = {"\ca\Sounds\animals\hedspar2",0.017782794,1,60,0.2,0,0,0};
		sing3[] = {"\ca\Sounds\animals\hedspar3",0.017782794,1,60,0.1,0,0,0};
		sing4[] = {"\ca\Sounds\animals\hedspar4",0.017782794,1,60,0.2,0,0,0};
		sing5[] = {"\ca\Sounds\animals\hedspar5",0.017782794,1,60,0.3,0,0,0};
		empty[] = {"",0,0,0,0,1,5,80};
	};
	class skylark
	{
		sounds[] = {"sing1","sing2","sing3","sing4","sing5","sing6","sing7"};
		name = "$STR_CFG_SFX_SKYLARK";
		sing1[] = {"\ca\Sounds\animals\skylark7",0.017782794,1,60,0.1,0.2,0.4,1};
		sing2[] = {"\ca\Sounds\animals\skylark6",0.017782794,1,60,0.2,0.2,0.3,1};
		sing3[] = {"\ca\Sounds\animals\skylark5",0.017782794,1,60,0.1,0.1,0.2,1.2};
		sing4[] = {"\ca\Sounds\animals\skylark4",0.017782794,1,60,0.2,0.1,0.2,1.2};
		sing5[] = {"\ca\Sounds\animals\skylark3",0.017782794,1,60,0.1,0.3,0.4,0.75};
		sing6[] = {"\ca\Sounds\animals\skylark2",0.017782794,1,60,0.1,0.2,0.4,0.8};
		sing7[] = {"\ca\Sounds\animals\skylark1",0.017782794,1,60,0.1,0.1,0.5,0.8};
		empty[] = {"",0,0,0,0,1,5,40};
	};
	class forestlark
	{
		sounds[] = {"sing1","sing2","sing3","sing4","sing5","sing6"};
		name = "$STR_CFG_SFX_FORESTLARK";
		sing1[] = {"\ca\Sounds\animals\f_lark1",0.017782794,1,60,0.1,0.0,0.1,0.2};
		sing2[] = {"\ca\Sounds\animals\f_lark2",0.017782794,1,60,0.1,0.0,0.1,0.2};
		sing3[] = {"\ca\Sounds\animals\f_lark3",0.017782794,1,60,0.1,0.0,0.1,0.2};
		sing4[] = {"\ca\Sounds\animals\f_lark4",0.017782794,1,60,0.1,0.0,0.1,0.2};
		sing5[] = {"\ca\Sounds\animals\f_lark5",0.017782794,1,60,0.2,0.0,0.1,0.2};
		sing6[] = {"\ca\Sounds\animals\f_lark6",0.017782794,1,60,0.2,0.0,0.1,0.2};
		sing7[] = {"\ca\Sounds\animals\f_lark7",0.017782794,1,60,0.2,0.0,0.1,0.2};
		empty[] = {"",0,0,0,0,1,5,40};
	};
	class nightingale
	{
		sounds[] = {"sing1","sing2","sing3","sing4","sing5","sing6","sing7"};
		name = "$STR_CFG_SFX_NIGHTINGALE";
		sing1[] = {"\ca\Sounds\animals\n_gale1",0.017782794,1,60,0.2,0.1,0.2,0.3};
		sing2[] = {"\ca\Sounds\animals\n_gale2",0.017782794,1,60,0.1,0.1,0.2,0.3};
		sing3[] = {"\ca\Sounds\animals\n_gale3",0.017782794,1,60,0.2,0.1,0.2,0.3};
		sing4[] = {"\ca\Sounds\animals\n_gale4",0.017782794,1,60,0.1,0.1,0.2,0.3};
		sing5[] = {"\ca\Sounds\animals\n_gale5",0.017782794,1,60,0.1,0.1,0.2,0.3};
		sing6[] = {"\ca\Sounds\animals\n_gale6",0.017782794,1,60,0.2,0.1,0.2,0.3};
		sing7[] = {"\ca\Sounds\animals\n_gale7",0.017782794,1,60,0.1,0.1,0.2,0.3};
		empty[] = {"",0,0,0,0,1,5,40};
	};
	class jay
	{
		sounds[] = {"sing1","sing2","sing3","sing4"};
		name = "$STR_CFG_SFX_JAY";
		sing1[] = {"\ca\Sounds\animals\jay1",0.017782794,1,60,0.2,0.2,0.4,1};
		sing2[] = {"\ca\Sounds\animals\jay2",0.017782794,1,60,0.2,0.2,0.3,1};
		sing3[] = {"\ca\Sounds\animals\jay3",0.017782794,1,60,0.2,0.1,0.2,1.2};
		sing4[] = {"\ca\Sounds\animals\jay4",0.017782794,1,60,0.2,0.1,0.2,1.2};
		empty[] = {"",0,0,0,0,8,20,40};
	};
	class owl
	{
		sounds[] = {"sing1","sing2"};
		name = "$STR_CFG_SFX_OWL";
		sing1[] = {"\ca\Sounds\animals\owl2_1",0.017782794,1,60,0.2,0.0,0.5,1};
		sing2[] = {"\ca\Sounds\animals\owl2_2",0.017782794,1,60,0.2,0.0,0.5,1};
		empty[] = {"",0,0,0,0,1,5,40};
	};
	class crow2
	{
		sounds[] = {"sing1","sing2","sing3","sing4","sing5","sing6"};
		name = "$STR_CFG_SFX_CROW2";
		sing1[] = {"\ca\Sounds\animals\crow2_1",0.017782794,1,60,0.1,0.2,0.4,1};
		sing2[] = {"\ca\Sounds\animals\crow2_2",0.017782794,1,60,0.1,0.2,0.3,1};
		sing3[] = {"\ca\Sounds\animals\crow2_3",0.017782794,1,60,0.1,0.1,0.2,1.2};
		sing4[] = {"\ca\Sounds\animals\crow2_4",0.017782794,1,60,0.1,0.1,0.2,1.2};
		sing5[] = {"\ca\Sounds\animals\crow2_5",0.017782794,1,60,0.1,0.1,0.2,1.2};
		sing6[] = {"\ca\Sounds\animals\crow2_6",0.017782794,1,60,0.1,0.1,0.2,1.2};
		empty[] = {"",0,0,0,0,1,5,50};
	};
	class frog2
	{
		sounds[] = {"sing1","sing2","sing3"};
		name = "$STR_CFG_SFX_FROG2";
		sing1[] = {"\ca\Sounds\animals\frog2_1",0.017782794,1,60,0.3,0.0,0.1,0.2};
		sing2[] = {"\ca\Sounds\animals\frog2_2",0.017782794,1,60,0.3,0.0,0.1,0.2};
		sing3[] = {"\ca\Sounds\animals\frog2_3",0.017782794,1,60,0.3,0.0,0.1,0.2};
		empty[] = {"",0,0,0,0,1,5,40};
	};
	class SeagullSfx
	{
		sounds[] = {"seagull1","Seagull2","Seagull3","Seagull4","Seagull5"};
		name = "$STR_CFG_SFX_SEAGULL";
		seagull1[] = {"\ca\Sounds\animals\gulls1",0.017782794,1,60,0.15,0.1,0.5,5};
		seagull2[] = {"\ca\Sounds\animals\gulls2",0.017782794,1,60,0.2,0.1,0.5,5};
		seagull3[] = {"\ca\Sounds\animals\gulls3",0.017782794,1,60,0.15,0.1,0.5,5};
		seagull4[] = {"\ca\Sounds\animals\gulls4",0.017782794,1,60,0.24,0.1,0.5,5};
		seagull5[] = {"\ca\Sounds\animals\gulls5",0.017782794,1,60,0.2,0.1,0.5,5};
		empty[] = {"",0,0,0,0,0.2,2,20};
	};
	class StreamSfx
	{
		sounds[] = {"Stream01"};
		name = "$STR_DN_STREAM";
		Stream01[] = {"\ca\Sounds\sfx\stream",0.31622776,1,60,1,1,1,1};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory01Sfx
	{
		sounds[] = {"Factory01"};
		name = "$STR_DN_FACTORY01";
		Factory01[] = {"\ca\Sounds\sfx\factory1",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory02Sfx
	{
		sounds[] = {"Factory02"};
		name = "$STR_DN_FACTORY2";
		Factory02[] = {"\ca\Sounds\sfx\factory2",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory03Sfx
	{
		sounds[] = {"Factory03"};
		name = "$STR_DN_FACTORY3";
		Factory03[] = {"\ca\Sounds\sfx\factory3",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory04Sfx
	{
		sounds[] = {"Factory04"};
		name = "$STR_DN_FACTORY4";
		Factory04[] = {"\ca\Sounds\sfx\factory15",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory05Sfx
	{
		sounds[] = {"Factory05"};
		name = "$STR_DN_FACTORY5";
		Factory05[] = {"\ca\Sounds\sfx\factory5",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory06Sfx
	{
		sounds[] = {"Factory06"};
		name = "$STR_DN_FACTORY6";
		Factory06[] = {"\ca\Sounds\sfx\factory6",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory07Sfx
	{
		sounds[] = {"Factory07"};
		name = "$STR_DN_FACTORY7";
		Factory07[] = {"\ca\Sounds\sfx\factory7",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory08Sfx
	{
		sounds[] = {"Factory08"};
		name = "$STR_DN_FACTORY8";
		Factory08[] = {"\ca\Sounds\sfx\factory8",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory09Sfx
	{
		sounds[] = {"Factory09"};
		name = "$STR_DN_FACTORY9";
		Factory09[] = {"\ca\Sounds\sfx\factory9",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory10Sfx
	{
		sounds[] = {"Factory10"};
		name = "$STR_DN_FACTORY10";
		Factory10[] = {"\ca\Sounds\sfx\factory10",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory11Sfx
	{
		sounds[] = {"Factory11"};
		name = "$STR_DN_FACTORY11";
		Factory11[] = {"\ca\Sounds\sfx\factory11",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory12Sfx
	{
		sounds[] = {"Factory12"};
		name = "$STR_DN_FACTORY12";
		Factory12[] = {"\ca\Sounds\sfx\factory12_gas",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory13Sfx
	{
		sounds[] = {"Factory13"};
		name = "$STR_DN_FACTORY13";
		Factory13[] = {"\ca\Sounds\sfx\factory13_gas",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory14Sfx
	{
		sounds[] = {"Factory14"};
		name = "$STR_DN_FACTORY14";
		Factory14[] = {"\ca\Sounds\sfx\factory14",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory15Sfx
	{
		sounds[] = {"Factory15"};
		name = "$STR_DN_FACTORY15";
		Factory15[] = {"\ca\Sounds\sfx\factory15",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory16Sfx
	{
		sounds[] = {"Factory16"};
		name = "$STR_DN_FACTORY16";
		Factory16[] = {"\ca\Sounds\sfx\factory16",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory17Sfx
	{
		sounds[] = {"Factory17"};
		name = "$STR_DN_FACTORY17";
		Factory17[] = {"\ca\Sounds\sfx\factory17",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Factory18Sfx
	{
		sounds[] = {"Factory18"};
		name = "$STR_DN_FACTORY18";
		Factory18[] = {"\ca\Sounds\sfx\factory18",1.0,1,60,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class AlarmSfx
	{
		sounds[] = {"Alarm"};
		name = "$STR_DN_ALARM";
		Alarm[] = {"\ca\Sounds\sfx\sirena",3.1622777,1,300,1,0.0,0.0,0.0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class AirAlarmSfx
	{
		sounds[] = {"Alarm"};
		name = "$STR_DN_ALARM";
		Alarm[] = {"\ca\Sounds\sfx\air_raid",3.1622777,1,300,1,0.0,0.0,0.0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class AlarmBellSfx
	{
		sounds[] = {"Alarmbell"};
		name = "$STR_CFG_SOUNDS_ALARMBELL";
		Alarmbell[] = {"\ca\Sounds\data\sound\alarm_bells",3.1622777,1,250,1,0.0,0.0,0.0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class Cricket1Sfx
	{
		sounds[] = {"Cricket01"};
		name = "$STR_DN_CRICKET1";
		Cricket01[] = {"\ca\Sounds\animals\cricket01",0.0001,1,25,0.96,0.0,0.0,0.0};
		empty[] = {"",0,0,0,0,0,2,60};
	};
	class Cricket2Sfx
	{
		sounds[] = {"Cricket01"};
		name = "$STR_DN_CRICKET2";
		Cricket01[] = {"\ca\Sounds\animals\cricket02",0.0001,1,25,0.97,0.0,0.0,0.0};
		empty[] = {"",0,0,0,0,0,3,60};
	};
	class Cricket3Sfx
	{
		sounds[] = {"Cricket01"};
		name = "$STR_DN_CRICKET3";
		Cricket01[] = {"\ca\Sounds\animals\crickets06",0.017782794,1,30,0.98,0.0,0.0,0.0};
		empty[] = {"",0,0,0,0,0,6,60};
	};
	class CricketSfx
	{
		sounds[] = {"Cricket04"};
		name = "$STR_DN_CRICKET4";
		Cricket04[] = {"\ca\Sounds\animals\crickets04",0.017782794,1,25,1,0.0,0.0,0.0};
		empty[] = {"",0,0,0,0,0,2,8};
	};
	class FrogSfx
	{
		sounds[] = {"Frog01","Frog02"};
		name = "$STR_DN_FROG";
		Frog01[] = {"\ca\Sounds\animals\frog1_1",0.017378004,1,35,0.8,0.0,0.0,0.0};
		Frog02[] = {"\ca\Sounds\animals\frog1_2",0.017782794,1,35,0.1,0.0,0.0,0.0};
		empty[] = {"",0,0,0,0,0.1,0.5,12};
	};
	class FrogsSfx
	{
		sounds[] = {"Frog01"};
		name = "$STR_DN_FROGS";
		Frog01[] = {"\ca\Sounds\animals\frogs",0.017782794,1,30,1,0.0,0.0,0.0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class OwlSfx
	{
		sounds[] = {"Owl1","Owl2"};
		name = "$STR_DN_OWL";
		Owl1[] = {"\ca\Sounds\animals\owl1_1",0.017782794,1,50,0.6,0.1,0.5,5};
		Owl2[] = {"\ca\Sounds\animals\owl1_2",0.017782794,1,50,0.2,0.1,0.5,5};
		empty[] = {"",0,0,0,0,0.5,2,12};
	};
	class CowSfx
	{
		sounds[] = {"moo1","moo2"};
		name = "$STR_DN_COW";
		moo1[] = {"\ca\Sounds\animals\cow_moo01",0.017782794,1,50,0.4,0.1,0.5,5};
		moo2[] = {"\ca\Sounds\animals\cow_moo02",0.017782794,1,50,0.4,0.1,0.5,5};
		empty[] = {"",0,0,0,0,0.1,0.5,2};
	};
	class WolfSfx
	{
		sounds[] = {"wolf1","wolf2","wolf3"};
		name = "$STR_DN_WOLF";
		wolf1[] = {"\ca\Sounds\animals\wolf1",0.017782794,1,50,0.3,0.1,0.5,5};
		wolf2[] = {"\ca\Sounds\animals\wolf2",0.017782794,1,50,0.3,0.1,0.5,5};
		wolf3[] = {"\ca\Sounds\animals\wolf3",0.017782794,1,50,0.3,0.1,0.5,5};
		empty[] = {"",0,0,0,0,0.5,4,50};
	};
	class CrowSfx
	{
		sounds[] = {"crow1","crow2","crow3"};
		name = "$STR_DN_CROW";
		crow1[] = {"\ca\Sounds\animals\crow1_1",0.017782794,1,45,0.2,0.1,0.5,5};
		crow2[] = {"\ca\Sounds\animals\crow1_2",0.017782794,1,45,0.2,0.1,0.5,5};
		crow3[] = {"\ca\Sounds\animals\crow1_3",0.017782794,1,45,0.2,0.1,0.5,5};
		empty[] = {"",0,0,0,0,2,10,30};
	};
	class DogSfx
	{
		sounds[] = {"dog1","dog2","dog3"};
		name = "$STR_DN_DOG";
		dog1[] = {"\ca\Sounds\animals\dog_bark03",0.01,1,45,0.3,0.1,0.5,5};
		dog2[] = {"\ca\Sounds\animals\dog_bark04",0.01,1,50,0.3,0.1,0.5,5};
		dog3[] = {"\ca\Sounds\animals\dog_bark04",0.01,1,45,0.2,0.1,0.5,5};
		sorrowdog2[] = {"\ca\Sounds\animals\dog_bark05",0.01,1,50,0.2,0.1,0.5,5};
		sorrowdog3[] = {"\ca\Sounds\animals\dog_yelp02",0.0056234132,1,55,0.2,0.1,0.5,5};
		sorrowdog4[] = {"\ca\Sounds\animals\dog_yelp03",0.0031622776,1,45,0.2,0.1,0.5,5};
		empty[] = {"",0,0,0,0,0.2,3,8};
	};
	class SorrowDogSfx
	{
		sounds[] = {"sorrowdog3","sorrowdog4"};
		name = "$STR_DN_SORROW_DOG";
		sorrowdog3[] = {"\ca\Sounds\animals\dog_yelp02",0.0056234132,1,55,0.2,0.1,0.5,5};
		sorrowdog4[] = {"\ca\Sounds\animals\dog_yelp03",0.0031622776,1,45,0.2,0.1,0.5,5};
		empty[] = {"",0,0,0,0,0.2,3,8};
	};
	class BadDogSfx
	{
		sounds[] = {"baddog1","baddog2","baddog3"};
		name = "$STR_DN_BAD_DOG";
		baddog1[] = {"\ca\Sounds\animals\dog_bark04",0.017782794,1,45,0.3,0.1,0.5,5};
		baddog2[] = {"\ca\Sounds\animals\dog_bark05",0.017782794,1,45,0.3,0.1,0.5,5};
		baddog3[] = {"\ca\Sounds\animals\dog_maul01",0.017782794,1,50,0.3,0.1,0.5,5};
		empty[] = {"",0,0,0,0,0.1,2,5};
	};
	class LittleDogSfx
	{
		sounds[] = {"littledog1"};
		name = "$STR_DN_LITTLE_DOG";
		littledog1[] = {"\ca\Sounds\animals\dog_bark04",0.0017782794,1,25,0.8,0.1,0.5,5};
		empty[] = {"",0,0,0,0,0.2,3,8};
	};
	class BirdSingingSfx
	{
		sounds[] = {"sing1","sing1a","sing2","sing2a","sing3","sing4","sing5","sing6","sing7","sing8","sing9"};
		name = "$STR_DN_BIRDSING";
		sing1[] = {"\ca\Sounds\animals\birdsing01",0.017782794,1,45,0.1,0.2,0.4,1};
		sing1a[] = {"\ca\Sounds\animals\birdsing01",0.017782794,1,45,0.08,0.2,0.3,1};
		sing2[] = {"\ca\Sounds\animals\birdsing02",0.017782794,1,50,0.1,0.1,0.2,1.2};
		sing2a[] = {"\ca\Sounds\animals\birdsing02",0.017782794,1,50,0.08,0.1,0.2,1.2};
		sing3[] = {"\ca\Sounds\animals\birdsing03",0.017782794,1,55,0.08,0.3,0.4,0.75};
		sing4[] = {"\ca\Sounds\animals\birdsing04",0.017782794,1,55,0.08,0.2,0.4,0.8};
		sing5[] = {"\ca\Sounds\animals\birdsing05",0.017782794,1,55,0.08,0.1,0.5,0.8};
		sing6[] = {"\ca\Sounds\animals\birdsing06",0.017782794,1,60,0.08,0.1,0.3,0.8};
		sing7[] = {"\ca\Sounds\animals\birdsing07",0.017782794,1,60,0.08,0.1,0.6,0.8};
		sing8[] = {"\ca\Sounds\animals\birdsing08",0.017782794,1,65,0.08,0.1,0.6,0.8};
		sing9[] = {"\ca\Sounds\animals\birdsing09",0.017782794,1,65,0.08,0.1,0.6,0.8};
		empty[] = {"",0,0,0,0,1,5,80};
	};
	class CockSfx
	{
		sounds[] = {"cock"};
		name = "$STR_DN_COCK";
		cock[] = {"\ca\Sounds\animals\cock",0.01,1,35,0.5,0.1,0.5,5};
		empty[] = {"",0,0,0,0,1,30,90};
	};
	class ChickenSfx
	{
		sounds[] = {"chicken1","chicken2"};
		name = "$STR_DN_CHICKEN";
		chicken1[] = {"\ca\Sounds\animals\chicken01",0.017782794,1,45,0.3,0.1,0.5,5};
		chicken2[] = {"\ca\Sounds\animals\chicken02",0.017782794,1,50,0.3,0.1,0.5,5};
		empty[] = {"",0,0,0,0,1,20,60};
	};
	class FunMusicSfx
	{
		sounds[] = {"music1"};
		name = "'Music'";
		music1[] = {"\Ca\Music\Tracks\Arma2Theme.ogg",0.0031622776,1,30,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class FliesSfx
	{
		sounds[] = {"Flies1","Flies2"};
		name = "Flies";
		Flies1[] = {"\ca\Sounds\animals\flies",0.017782794,1,60,0.5,0,0,0};
		Flies2[] = {"\ca\Sounds\animals\flies2",0.017782794,1,60,0.5,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
};
class CfgEnvSounds
{
	class Default
	{
		name = "$STR_CFG_ENVSOUNDS_DEFAULT";
		sound[] = {"$DEFAULT$",0,1};
		soundNight[] = {"$DEFAULT$",0,1};
	};
	class Rain
	{
		name = "$STR_DN_RAIN";
		sound[] = {"\Ca\sounds\Ambient\rain\rain_hard1",0.17782794,1};
		soundNight[] = {"\Ca\sounds\Ambient\rain\rain_hard1",0.17782794,1};
	};
	class Sea
	{
		name = "$STR_DN_SEA";
		sound[] = {"\ca\Sounds\Enviroment\wave_break_01",0.1,1};
		soundNight[] = {"\ca\Sounds\Enviroment\wave_break_02",0.17782794,1};
	};
	class WindForestHigh
	{
		name = "$STR_DN_WIND";
		sound[] = {"ca\sounds\Ambient\forest\wind-forest-1",0.03981072,1};
		volume = "forest*(windy factor[0,1])*(0.1+(hills factor[0,1])*0.9)-(night*0.25)";
	};
	class WindNoForestHigh
	{
		name = "$STR_DN_WIND";
		sound[] = {"ca\sounds\Ambient\forest\wind-global-2",0.03981072,1};
		volume = "(1-forest)*(windy factor[0,1])*(0.1+(hills factor[0,1])*0.9)-(night*0.25)";
	};
	class Forest
	{
		name = "$STR_DN_WIND";
		sound[] = {"ca\sounds\Ambient\forest\forest-day-2",0.03981072,1};
		volume = "forest*(1-night)";
		randSamp11[] = {"ca\sounds\Ambient\forest\forest-sfx-9bird",0.1,1,30,0.14,5,8,10};
		randSamp10[] = {"ca\sounds\Ambient\forest\forest-sfx-12datel",0.1,30,0.125,10,20,40};
		randSamp0[] = {"ca\sounds\Ambient\forest\forest-sfx-5bird",0.12589253,1,30,0.13,4,8,12};
		randSamp1[] = {"ca\sounds\Ambient\forest\forest-sfx-6bird",0.12589253,1,30,0.125,4,8,12};
		randSamp2[] = {"ca\sounds\Ambient\forest\forest-sfx-7bird",0.12589253,1,30,0.125,4,8,12};
		randSamp3[] = {"ca\sounds\Ambient\forest\forest-sfx-8bird",0.12589253,1,30,0.1,4,8,12};
		randSamp8[] = {"ca\sounds\Ambient\forest\forest-sfx-10bird-flapping",0.1,1,30,0.04,10,20,40};
		randSamp9[] = {"ca\sounds\Ambient\forest\forest-sfx-11holub-flapping",0.1,1,30,0.04,10,20,40};
		randSamp4[] = {"ca\sounds\Ambient\forest\forest-sfx-1",0.1,1,30,0.025,4,8,10};
		randSamp5[] = {"ca\sounds\Ambient\forest\forest-sfx-2",0.1,1,30,0.025,4,8,10};
		randSamp6[] = {"ca\sounds\Ambient\forest\forest-sfx-3",0.1,1,30,0.025,4,8,10};
		randSamp7[] = {"ca\sounds\Ambient\forest\forest-sfx-4",0.1,1,30,0.025,4,8,10};
		random[] = {"randSamp11","randSamp10","randSamp0","randSamp1","randSamp2","randSamp3","randSamp8","randSamp9","randSamp4","randSamp5","randSamp6","randSamp7"};
	};
	class ForestNight
	{
		name = "$STR_DN_WIND";
		sound[] = {"ca\sounds\Ambient\forest\forest-night-1",0.056234132,1};
		volume = "forest*night";
		randSamp1[] = {"ca\sounds\Ambient\forest\forest-night-sfx-1",0.1,"1 25",0.15,8,15,20};
		randSamp2[] = {"ca\sounds\Ambient\forest\forest-night-sfx-2",0.1,1,25,0.15,8,15,20,30};
		randSamp3[] = {"ca\sounds\Ambient\forest\forest-sfx-10bird-flapping",0.1,"1 25",0.15,15,30,40};
		randSamp4[] = {"ca\sounds\Ambient\forest\forest-sfx-11holub-flapping",0.1,"1 25",0.15,15,30,40};
		randSamp5[] = {"ca\sounds\Ambient\forest\forest-sfx-1",0.056234132,1,25,0.1,8,15,20};
		randSamp6[] = {"ca\sounds\Ambient\forest\forest-sfx-2",0.056234132,1,25,0.1,8,10,20};
		randSamp7[] = {"ca\sounds\Ambient\forest\forest-sfx-3",0.056234132,1,25,0.1,8,10,20};
		randSamp8[] = {"ca\sounds\Ambient\forest\forest-sfx-4",0.056234132,1,25,0.1,8,10,20};
		random[] = {"randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
	};
	class Houses
	{
		name = "$STR_DN_WIND";
		sound[] = {"ca\sounds\Ambient\houses\house-1",0.01,1};
		volume = "(houses-0.75)*4";
		randSamp11[] = {"ca\sounds\Ambient\houses\houses-sfx-07",0.17782794,1,25,0.077,10,25,40};
		randSamp10[] = {"ca\sounds\Ambient\houses\houses-sfx-08",0.17782794,1,25,0.077,10,25,40};
		randSamp0[] = {"ca\sounds\Ambient\houses\houses-sfx-09",0.17782794,1,25,0.077,10,25,40};
		randSamp1[] = {"ca\sounds\Ambient\houses\houses-sfx-04",0.17782794,1,25,0.077,10,35,60};
		randSamp2[] = {"ca\sounds\Ambient\houses\houses-sfx-05",0.17782794,1,25,0.077,10,25,40};
		randSamp3[] = {"ca\sounds\Ambient\houses\houses-sfx-12",0.17782794,1,25,0.077,10,25,40};
		randSamp8[] = {"ca\sounds\Ambient\houses\houses-sfx-07",0.17782794,1,25,0.077,10,55,80};
		randSamp9[] = {"ca\sounds\Ambient\houses\houses-sfx-08",0.17782794,1,25,0.077,20,30,40};
		randSamp4[] = {"ca\sounds\Ambient\houses\houses-sfx-09",0.17782794,1,25,0.077,10,25,40};
		randSamp5[] = {"ca\sounds\Ambient\houses\houses-sfx-08",0.17782794,1,25,0.077,10,75,100};
		randSamp6[] = {"ca\sounds\Ambient\houses\houses-sfx-04",0.17782794,1,25,0.077,10,25,70};
		randSamp7[] = {"ca\sounds\Ambient\houses\houses-sfx-12",0.17782794,1,25,0.077,10,25,40};
		random[] = {"randSamp11","randSamp10","randSamp0","randSamp1","randSamp2","randSamp3","randSamp8","randSamp9","randSamp4","randSamp5","randSamp6","randSamp7"};
	};
	class Meadows
	{
		name = "$STR_DN_MEADOWS";
		sound[] = {"\ca\sounds\Ambient\meadows\wind-meadow-2",0.031622775,1};
		volume = "(1-forest)*(1-houses)*(1-night)*(1-sea)";
		randSamp1[] = {"ca\sounds\Ambient\meadows\meadow_sfx_01",0.1,"1 25",0.15,8,15,20};
		randSamp2[] = {"ca\sounds\Ambient\meadows\meadow_sfx_02",0.1,1,25,0.15,8,15,20};
		randSamp3[] = {"ca\sounds\Ambient\meadows\meadow_sfx_03",0.1,"1 25",0.15,15,30,40};
		randSamp4[] = {"ca\sounds\Ambient\meadows\meadow_sfx_04_crickets",0.01,1,25,0.15,15,30,40};
		randSamp5[] = {"ca\sounds\Ambient\meadows\meadow_sfx_05_crickets",0.0056234132,1,25,0.1,8,15,20};
		randSamp6[] = {"ca\sounds\Ambient\meadows\meadow-sfx-06",0.01,1,25,0.1,8,10,20};
		random[] = {"randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6"};
	};
	class MeadowsNight
	{
		name = "$STR_DN_MEADOWS";
		sound[] = {"\ca\sounds\Ambient\meadows\wind-meadow-2",0.017782794,1};
		volume = "(1-forest)*(1-houses)*night*(1-sea)";
		randSamp1[] = {"ca\sounds\Ambient\meadows\meadow_sfx_01",0.1,"1 25",0.15,8,15,20};
		randSamp2[] = {"ca\sounds\Ambient\meadows\meadow_sfx_02",0.1,1,25,0.15,8,15,20};
		randSamp3[] = {"ca\sounds\Ambient\meadows\meadow_sfx_03",0.1,"1 25",0.15,15,30,40};
		randSamp4[] = {"ca\sounds\Ambient\meadows\meadow_sfx_04_crickets",0.01,1,25,0.15,15,30,40};
		randSamp5[] = {"ca\sounds\Ambient\meadows\meadow_sfx_05_crickets",0.0056234132,1,25,0.1,8,15,20};
		random[] = {"randSamp1","randSamp2","randSamp3","randSamp4","randSamp5"};
	};
	class Combat
	{
		name = "$STR_CFG_ENVSOUNDS_COMBAT";
		sound[] = {"\ca\Sounds\Enviroment\battle1",0.056234132,1};
		soundNight[] = {"\ca\Sounds\Enviroment\battle2",0.056234132,1};
	};
};
class CfgVehicles
{
	class Sound
	{
		scope = 0;
		side = -1;
		animated = 0;
		vehicleClass = "Sounds";
		icon = "\ca\sounds\data\icon_soundsource_ca";
		mapSize = 10;
		faction = "none";
	};
	class Sound_Owl: Sound
	{
		scope = 2;
		sound = "OwlSfx";
		displayName = "$STR_DN_OWL";
	};
	class Sound_Stream: Sound
	{
		scope = 2;
		sound = "StreamSfx";
		displayName = "$STR_DN_STREAM";
	};
	class Sound_Frog: Sound
	{
		scope = 2;
		sound = "FrogSfx";
		displayName = "$STR_DN_FROG";
	};
	class Sound_Frogs: Sound
	{
		scope = 2;
		sound = "FrogsSfx";
		displayName = "$STR_DN_FROGS";
	};
	class Sound_Alarm: Sound
	{
		scope = 2;
		sound = "AlarmSfx";
		displayName = "$STR_DN_ALARM";
	};
	class Sound_Alarm2: Sound
	{
		scope = 2;
		sound = "AirAlarmSfx";
		displayName = "$STR_DN_Sound_Alarm2";
	};
	class Sound_Factory01: Sound
	{
		scope = 1;
		sound = "Factory01Sfx";
		displayName = "Factory01";
	};
	class Sound_Factory02: Sound
	{
		scope = 1;
		sound = "Factory02Sfx";
		displayName = "Factory02";
	};
	class Sound_Factory03: Sound
	{
		scope = 1;
		sound = "Factory03Sfx";
		displayName = "Factory03";
	};
	class Sound_Factory04: Sound
	{
		scope = 1;
		sound = "Factory04Sfx";
		displayName = "Factory04";
	};
	class Sound_Factory05: Sound
	{
		scope = 1;
		sound = "Factory05Sfx";
		displayName = "Factory05";
	};
	class Sound_Factory06: Sound
	{
		scope = 1;
		sound = "Factory06Sfx";
		displayName = "Factory06";
	};
	class Sound_Factory07: Sound
	{
		scope = 1;
		sound = "Factory07Sfx";
		displayName = "Factory07";
	};
	class Sound_Factory08: Sound
	{
		scope = 1;
		sound = "Factory08Sfx";
		displayName = "Factory08";
	};
	class Sound_Factory09: Sound
	{
		scope = 1;
		sound = "Factory09Sfx";
		displayName = "Factory09";
	};
	class Sound_Factory10: Sound
	{
		scope = 1;
		sound = "Factory10Sfx";
		displayName = "Factory10";
	};
	class Sound_Factory11: Sound
	{
		scope = 1;
		sound = "Factory11Sfx";
		displayName = "Factory11";
	};
	class Sound_Factory12: Sound
	{
		scope = 1;
		sound = "Factory12Sfx";
		displayName = "Factory12";
	};
	class Sound_Factory13: Sound
	{
		scope = 1;
		sound = "Factory13Sfx";
		displayName = "Factory13";
	};
	class Sound_Factory14: Sound
	{
		scope = 1;
		sound = "Factory14Sfx";
		displayName = "Factory14";
	};
	class Sound_Factory15: Sound
	{
		scope = 1;
		sound = "Factory15Sfx";
		displayName = "Factory15";
	};
	class Sound_Factory16: Sound
	{
		scope = 1;
		sound = "Factory16Sfx";
		displayName = "Factory16";
	};
	class Sound_Factory17: Sound
	{
		scope = 1;
		sound = "Factory17Sfx";
		displayName = "Factory17";
	};
	class Sound_Factory18: Sound
	{
		scope = 1;
		sound = "Factory18Sfx";
		displayName = "Factory18";
	};
	class Sound_Fire: Sound
	{
		scope = 2;
		sound = "fire";
		displayName = "$STR_DN_Sound_Fire";
	};
	class Sound_BirdSinging: Sound
	{
		scope = 2;
		sound = "BirdSingingSfx";
		displayName = "$STR_DN_BIRDSING";
	};
	class Sound_Crickets1: Sound
	{
		scope = 2;
		sound = "Cricket1Sfx";
		displayName = "$STR_DN_CRICKET1";
	};
	class Sound_Crickets2: Sound
	{
		scope = 2;
		sound = "Cricket2Sfx";
		displayName = "$STR_DN_CRICKET2";
	};
	class Sound_Crickets3: Sound
	{
		scope = 2;
		sound = "Cricket3Sfx";
		displayName = "$STR_DN_CRICKET3";
	};
	class Sound_Crickets4: Sound
	{
		scope = 2;
		sound = "CricketSfx";
		displayName = "$STR_DN_CRICKET4";
	};
	class Sound_Chicken: Sound
	{
		scope = 2;
		sound = "ChickenSfx";
		displayName = "$STR_DN_CHICKEN";
	};
	class Sound_Cock: Sound
	{
		scope = 2;
		sound = "CockSfx";
		displayName = "$STR_DN_SND_COCK";
	};
	class Sound_Cow: Sound
	{
		scope = 2;
		sound = "CowSfx";
		displayName = "$STR_DN_SND_COW";
	};
	class Sound_Crow: Sound
	{
		scope = 2;
		sound = "CrowSfx";
		displayName = "$STR_DN_CROW";
	};
	class Sound_Wolf: Sound
	{
		scope = 2;
		sound = "WolfSfx";
		displayName = "$STR_DN_WOLF";
	};
	class Sound_Dog: Sound
	{
		scope = 2;
		sound = "DogSfx";
		displayName = "$STR_DN_DOG";
	};
	class Sound_BadDog: Sound
	{
		scope = 2;
		sound = "BadDogSfx";
		displayName = "$STR_DN_BAD_DOG";
	};
	class Sound_SorrowDog: Sound
	{
		scope = 2;
		sound = "SorrowDogSfx";
		displayName = "$STR_DN_SORROW_DOG";
	};
	class Sound_LittleDog: Sound
	{
		scope = 2;
		sound = "LittleDogSfx";
		displayName = "$STR_DN_LITTLE_DOG";
	};
	class Sound_Music: Sound
	{
		scope = 2;
		sound = "FunMusicSfx";
		displayName = "$STR_DN_MUSIC";
	};
	class Sound_Flies: Sound
	{
		scope = 1;
		sound = "FliesSfx";
		displayName = "Flies";
	};
};
//};
