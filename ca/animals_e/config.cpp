////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:42 2014 : Source 'file' date Fri Oct 31 06:07:42 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class animals_e : config.bin{
class CfgPatches
{
	class CA_Animals_E
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CA_Animals2","CA_Animals2_Cow","CA_Animals2_Chicken","CAAnimals","CA_Animals2_Dogs_Fin","CA_Animals2_Dogs_Pastor","CA_Animals2_Goat","CA_Animals2_Rabbit","CA_Animals2_Sheep","CA_Animals2_WildBoar"};
	};
};
class CfgVehicles
{
	class Animal;
	class CAAnimalBase: Animal
	{
		htMin = 60;
		htMax = 1800;
		afMax = 30;
		mfMax = 0;
		mFact = 1;
		tBody = 37;
	};
	class Cow: CAAnimalBase
	{
		model = "ca\Animals_E\cow\cow";
	};
	class Cow01: Cow
	{
		model = "ca\Animals_E\cow\cow";
	};
	class Cow02: Cow01
	{
		model = "ca\Animals_E\cow\cow";
	};
	class Cow03: Cow01
	{
		model = "ca\Animals_E\cow\cow";
	};
	class Cow04: Cow01
	{
		model = "ca\Animals_E\cow\cow";
	};
	class Cow_Base_EP1: Cow
	{
		expansion = 1;
		scope = 0;
		vehicleClass = "Animals_TK";
	};
	class Cow01_EP1: Cow_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Cow01_EP1";
		accuracy = 1000;
		hiddenSelectionsTextures[] = {"ca\Animals_E\cow\data\tak_cow_co"};
	};
	class Goat: CAAnimalBase
	{
		model = "ca\Animals_E\goat\goat";
	};
	class Goat_Base_EP1: Goat
	{
		expansion = 1;
		scope = 0;
		hiddenSelections[] = {"Camo"};
		vehicleClass = "Animals_TK";
	};
	class Goat01_EP1: Goat_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Goat01_EP1";
		accuracy = 1000;
		hiddenSelectionsTextures[] = {"ca\Animals_E\goat\data\ta_goat2_co"};
	};
	class Goat02_EP1: Goat01_EP1
	{
		displayName = "$STR_EP1_DN_Goat02_EP1";
		hiddenSelectionsTextures[] = {"ca\Animals_E\goat\data\ta_goat_co"};
	};
	class Sheep: CAAnimalBase
	{
		model = "ca\Animals_E\sheep\Sheep";
	};
	class Sheep_Base_EP1: Sheep
	{
		expansion = 1;
		scope = 0;
		hiddenSelections[] = {"Camo"};
		vehicleClass = "Animals_TK";
	};
	class Sheep01_EP1: Sheep_Base_EP1
	{
		scope = 2;
		displayName = "$STR_EP1_DN_Sheep01_EP1";
		accuracy = 1000;
		hiddenSelectionsTextures[] = {"ca\Animals_E\sheep\data\ta_sheep_co"};
	};
	class Sheep02_EP1: Sheep01_EP1
	{
		displayName = "$STR_EP1_DN_Sheep02_EP1";
		hiddenSelectionsTextures[] = {"ca\Animals_E\sheep\data\ta_sheep_2_co"};
	};
	class WildBoar: CAAnimalBase
	{
		model = "ca\Animals_E\WildBoar\WildBoar";
	};
	class Fin: CAAnimalBase
	{
		model = "ca\Animals_E\Fin\Fin";
	};
	class Pastor: CAAnimalBase
	{
		model = "ca\Animals_E\Pastor\Pastor";
	};
	class Rabbit: CAAnimalBase
	{
		model = "ca\Animals_E\Rabbit\Rabbit";
	};
	class Hen: CAAnimalBase
	{
		model = "ca\Animals_E\chicken\hen";
	};
	class Cock: Hen
	{
		model = "ca\Animals_E\chicken\cock";
	};
};
class cfgNonAiVehicles
{
	class bird;
	class SeaGull: bird
	{
		model = "ca\Animals_E\Crow\crow";
		htMin = 60;
		htMax = 1800;
		afMax = 30;
		mfMax = 0;
		mFact = 1;
		tBody = 37;
	};
	class SeaGull2: SeaGull
	{
		model = "ca\Animals_E\Seagull\seagull";
	};
	class Crow: SeaGull
	{
		model = "ca\Animals_E\Crow\crow";
	};
	class Insect;
	class ButterFly: Insect
	{
		model = "\ca\Animals_e\aglais_urticae_e.p3d";
	};
};
//};
