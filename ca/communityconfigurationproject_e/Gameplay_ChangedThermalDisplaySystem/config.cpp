////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:14:01 2014 : Source 'file' date Fri Oct 31 06:14:01 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class CommunityConfigurationProject_E : Gameplay_ChangedThermalDisplaySystem\config.bin{
class CfgPatches
{
	class CA_CommunityConfigurationProject_Gameplay_ChangedThermalDisplaySystem
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CA_CommunityConfigurationProject_E"};
	};
};
class CfgVehicles
{
	class All;
	class AllVehicles: All
	{
		class ViewOptics;
	};
	class Land: AllVehicles{};
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Car: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class Wheeled_APC: Car{};
	class Tank: LandVehicle
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics: NewTurret
					{
						class ViewOptics;
					};
				};
			};
		};
	};
	class HMMWV_Base: Car
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class Air;
	class Helicopter: Air
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class AH1_Base: Helicopter{};
	class AH64_base_EP1: Helicopter{};
	class M2A2_Base: Tank
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class Wide
					{
						thermalMode[] = {2,3};
					};
				};
			};
		};
	};
	class M2A2_EP1: M2A2_Base{};
	class M2A3_EP1: M2A2_EP1
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics: ViewOptics
						{
							thermalMode[] = {4,5};
						};
					};
				};
			};
		};
	};
	class M1A1: Tank
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class Wide
					{
						thermalMode[] = {2,3};
					};
				};
			};
		};
	};
	class M1A2_TUSK_MG: M1A1
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics: ViewOptics
						{
							thermalMode[] = {4,5};
						};
					};
				};
			};
		};
	};
	class StrykerBase_EP1: Wheeled_APC
	{
		class ViewOptics: ViewOptics{};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics: ViewOptics
				{
					thermalMode[] = {2,3};
				};
			};
		};
	};
	class M1126_ICV_BASE_EP1: StrykerBase_EP1
	{
		class Turrets: Turrets
		{
			class ObsTurret: NewTurret
			{
				class ViewOptics{};
			};
		};
	};
	class M1135_ATGMV_EP1: StrykerBase_EP1
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					thermalMode[] = {2,3};
				};
			};
		};
	};
	class M1128_MGS_EP1: StrykerBase_EP1
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class Wide
					{
						thermalMode[] = {2,3};
					};
				};
			};
		};
	};
	class HMMWV_M998_crows_M2_DES_EP1: HMMWV_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					thermalMode[] = {2,3};
				};
			};
		};
	};
	class HMMWV_M998_crows_MK19_DES_EP1: HMMWV_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics
				{
					thermalMode[] = {2,3};
				};
			};
		};
	};
	class BAF_FV510_D: Tank
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class Wide
					{
						thermalMode[] = {2,3};
					};
				};
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class ViewOptics
						{
							thermalMode[] = {6};
						};
					};
				};
			};
		};
	};
	class AH64D: AH64_base_EP1
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class Wide
					{
						thermalMode[] = {2,3};
					};
				};
			};
		};
	};
	class AH64D_EP1: AH64_base_EP1
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class Wide
					{
						thermalMode[] = {2,3};
					};
				};
			};
		};
	};
	class AH1Z: AH1_Base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class OpticsIn
				{
					class Wide
					{
						thermalMode[] = {2,3};
					};
				};
			};
		};
	};
};
//};
