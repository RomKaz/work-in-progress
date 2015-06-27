////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:03 2014 : Source 'file' date Fri Oct 31 06:14:03 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Sound_FixedCarNoiseSound\config.bin{
class cfgPatches
{
	class CA_CommunityConfigurationProject_E_Sound_FixedCarNoiseSound
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class Sounds;
	};
	class SkodaBase: Car
	{
		class Sounds
		{
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.446684,1};
			};
		};
	};
	class car_hatchback: SkodaBase
	{
		class Sounds
		{
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.446684,1};
			};
		};
	};
	class car_sedan: SkodaBase
	{
		class Sounds
		{
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.446684,1};
			};
		};
	};
	class VWGolf: Car
	{
		class Sounds
		{
			class NoiseIn
			{
				sound[] = {"\ca\SOUNDS\Vehicles\Wheeled\Noises\int\noise2",0.446684,1};
			};
		};
	};
};
//};
