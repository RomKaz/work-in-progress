////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:02:11 2014 : Source 'file' date Fri Oct 31 06:02:11 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class characters2 : config.bin{
class CfgPatches
{
	class CACharacters2
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CACharacters","CAWeapons","CAWeapons_Colt1911","CAWeapons_AK","CAweapons_ksvk","CAweapons_m107"};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class TalkTopics;
		class HitPoints
		{
			class HitHead;
			class HitBody;
		};
	};
	class SoldierEB: CAManBase
	{
		class TalkTopics: TalkTopics{};
	};
	class SoldierWB: CAManBase
	{
		class TalkTopics: TalkTopics{};
	};
	class SoldierGB: CAManBase
	{
		class TalkTopics: TalkTopics{};
	};
	class Civilian: CAManBase
	{
		rarityUrban = -1;
		scope = 0;
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
		class TalkTopics: TalkTopics
		{
			core_cz = "Core_Full";
		};
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
		languages[] = {"CZ"};
	};
	class NonStrategic;
	class Citizen: Civilian
	{
		identityTypes[] = {"Head_CIV","Language_CZ","Civ_Glasses","Civ_SunGlasses"};
		faceType = "Man";
		vehicleClass = "Men";
		displayName = "$STR_DN_CIV_CITIZEN";
		model = "\ca\characters2\civil\citizen\citizen";
		accuracy = 3.9;
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters2\civil\citizen\data\citizen.rvmat","ca\characters2\civil\citizen\data\W1_citizen.rvmat","ca\characters2\civil\citizen\data\W2_citizen.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
		rarityUrban = 0.5;
		hiddenSelections[] = {"Camo"};
	};
	class Citizen2: Citizen
	{
		accuracy = 1000;
		displayName = "$STR_DN_CIV_CITIZEN2";
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\citizen\data\Citizen_v2_co.paa"};
	};
	class Citizen3: Citizen
	{
		accuracy = 1000;
		displayName = "$STR_DN_CIV_CITIZEN3";
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\citizen\data\Citizen_v3_co.paa"};
	};
	class Profiteer: Civilian
	{
		identityTypes[] = {"Head_CIV","Civ_Glasses","Civ_SunGlasses","Language_CZ"};
		accuracy = 3.9;
		vehicleClass = "Men";
		displayName = "$STR_DN_CIV_PROFITEER";
		model = "\ca\characters2\civil\profiteer\profiteer";
		hiddenSelections[] = {"Camo"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters2\civil\profiteer\data\profiteer.rvmat","ca\characters2\civil\profiteer\data\W1_profiteer.rvmat","ca\characters2\civil\profiteer\data\W2_profiteer.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
		rarityUrban = 0.6;
	};
	class Profiteer2: Profiteer
	{
		accuracy = 1000;
		displayName = "$STR_DN_CIV_PROFITEER2";
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\profiteer\data\profiteer_v2_co.paa"};
	};
	class Functionary: Civilian
	{
		identityTypes[] = {"Head_CIV","Civ_Glasses","Civ_SunGlasses","Language_CZ"};
		accuracy = 3.9;
		vehicleClass = "Men";
		displayName = "$STR_DN_CIV_FUNCTIONARY";
		model = "\ca\characters2\civil\Functionary\Functionary";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters2\civil\Functionary\data\Functionary.rvmat","ca\characters2\civil\Functionary\data\W1_Functionary.rvmat","ca\characters2\civil\Functionary\data\W2_Functionary.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat"};
		};
		rarityUrban = 0.8;
	};
	class Functionary1: Functionary
	{
		accuracy = 1000;
		displayName = "$STR_DN_CIV_FUNCTIONARY1";
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary_co.paa"};
	};
	class Functionary2: Functionary
	{
		accuracy = 1000;
		displayName = "$STR_DN_CIV_FUNCTIONARY2";
		hiddenSelectionsTextures[] = {"\ca\characters2\civil\functionary\data\functionary2_co.paa"};
		rarityUrban = 0.7;
	};
	class Pilot: Civilian
	{
		identityTypes[] = {"Head_CIV","pilot_sunglasses","Language_CZ"};
		accuracy = 3.9;
		vehicleClass = "Men";
		displayName = "$STR_DN_CIV_PILOT";
		model = "\ca\characters2\civil\Pilot\Pilot";
		class Wounds
		{
			tex[] = {};
			mat[] = {"ca\characters2\Civil\Pilot\Data\camelpilot.rvmat","ca\characters2\Civil\Pilot\Data\Pilot_W1.rvmat","ca\characters2\Civil\Pilot\Data\Pilot_W2.rvmat","ca\characters\heads\male\defaulthead\data\hhl.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat","ca\characters\heads\male\defaulthead\data\hhl_wounds.rvmat"};
		};
	};
};
//};
