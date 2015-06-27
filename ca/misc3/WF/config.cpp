////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:04:43 2014 : Source 'file' date Fri Oct 31 06:04:43 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class misc3 : WF\config.bin{
class CfgPatches
{
	class WarfareBuildings
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAmisc3","CAbuildings","CATracked","CAWheeled","CAWheeled2","CAWeapons"};
	};
};
class CfgVehicleClasses
{
	class WarfareBuildingsClassname
	{
		displayName = "$STR_DN_WARFAREBUILDINGSCLASSNAME";
	};
};
class CfgVehicles
{
	class House;
	class NonStrategic;
	class Strategic;
	class Fortress1;
	class Camp_base;
	class WarfareBBaseStructure: House
	{
		accuracy = 0.1;
		armor = 600;
		cost = 1;
		destrType = "DestructBuilding";
		displayName = "$STR_DN_WARFAREBBASESTRUCTURE";
		irTarget = 0;
		mapSize = 1;
		scope = 0;
		side = 3;
		vehicleClass = "WarfareBuildingsClassname";
	};
	class WarfareBDepot: WarfareBBaseStructure
	{
		scope = 0;
		displayName = "$STR_DN_WARFAREBDEPOT";
		armor = 10000;
		model = "\CA\Misc3\WF\WF_depot.p3d";
		icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		mapSize = 30;
		accuracy = 0.3;
	};
	class WarfareBCamp: Fortress1
	{
		displayName = "$STR_DN_WARFAREBCAMP";
		armor = 20000;
		scope = 0;
		irTarget = 0;
		vehicleClass = "WarfareBuildingsClassname";
		model = "\CA\Misc3\WF\WF_bunker.p3d";
		icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		mapSize = 20;
	};
	class WarfareBAirport: WarfareBBaseStructure
	{
		scope = 0;
		displayName = "$STR_DN_WARFAREBAIRPORT";
		armor = 1500;
		model = "\ca\buildings\SS_hangar";
	};
	class Base_WarfareBBarracks: WarfareBBaseStructure
	{
		scope = 0;
		armor = 100;
		model = "\CA\Misc3\WF\WF_barracks_EAST.p3d";
		icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		mapSize = 15;
		hiddenSelections[] = {"camo_powergenerator"};
		picture = "\ca\ui\data\icon_wf_building_barracks_ca.paa";
		GhostPreview = "Base_WarfareBBarracksPreview";
	};
	class Base_WarfareBBarracksPreview: Base_WarfareBBarracks
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_barracks_EAST_select.p3d";
	};
	class USMC_WarfareBBarracksPreview: Base_WarfareBBarracksPreview
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_barracks_WEST_select.p3d";
	};
	class USMC_WarfareBBarracks: Base_WarfareBBarracks
	{
		scope = 0;
		side = 1;
		displayName = "$STR_DN_WARFAREBBARRACKS_USMC";
		model = "\CA\Misc3\WF\WF_barracks_WEST.p3d";
		faction = "USMC";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_USMC_CO.paa"};
		GhostPreview = "USMC_WarfareBBarracksPreview";
	};
	class RU_WarfareBBarracks: Base_WarfareBBarracks
	{
		scope = 0;
		side = 0;
		faction = "RU";
		displayName = "$STR_DN_WARFAREBBARRACKS_RU";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_VSR_CO.paa"};
	};
	class CDF_WarfareBBarracks: Base_WarfareBBarracks
	{
		scope = 0;
		displayName = "$STR_DN_WARFAREBBARRACKS_CDF";
		side = 1;
		faction = "CDF";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_CDF_CO.paa"};
	};
	class Ins_WarfareBBarracks: Base_WarfareBBarracks
	{
		scope = 0;
		displayName = "$STR_DN_WARFAREBBARRACKS_INS";
		side = 0;
		faction = "INS";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_CHDKZ_CO.paa"};
	};
	class Gue_WarfareBBarracks: Base_WarfareBBarracks
	{
		scope = 0;
		displayName = "$STR_DN_WARFAREBBARRACKS_GUE";
		side = 2;
		faction = "GUE";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_CHDKZ_CO.paa"};
	};
	class Base_WarfareBContructionSite: Strategic
	{
		scope = 1;
		displayName = "$STR_DN_WARFAREBCRATE";
		icon = "\ca\data\data\Unknown_object.paa";
		armor = 300;
		vehicleClass = "WarfareBuildingsClassname";
		model = "\Ca\buildings2\Misc_Cargo\Misc_Cargo1B";
	};
	class USMC_WarfareBContructionSite: Base_WarfareBContructionSite
	{
		scope = 0;
		side = 1;
		faction = "USMC";
		displayName = "$STR_DN_WARFAREBCONTRUCTIONSITE_USMC";
		model = "\ca\buildings2\misc_cargo\misc_cargo1D.p3d";
	};
	class USMC_WarfareBContructionSite1: USMC_WarfareBContructionSite
	{
		model = "\ca\buildings2\misc_cargo\misc_cargo1C.p3d";
		displayName = "$STR_DN_WARFAREBCONTRUCTIONSITE1_USMC";
	};
	class RU_WarfareBContructionSite: Base_WarfareBContructionSite
	{
		scope = 0;
		side = 0;
		faction = "RU";
		displayName = "$STR_DN_WARFAREBCONTRUCTIONSITE_RU";
		model = "\ca\buildings2\misc_cargo\misc_cargo1B.p3d";
	};
	class RU_WarfareBContructionSite1: RU_WarfareBContructionSite
	{
		model = "\ca\buildings2\misc_cargo\misc_cargo1C.p3d";
		displayName = "$STR_DN_WARFAREBCONTRUCTIONSITE1_RU";
	};
	class CDF_WarfareBContructionSite: Base_WarfareBContructionSite
	{
		scope = 0;
		side = 1;
		faction = "CDF";
		displayName = "$STR_DN_WARFAREBCONTRUCTIONSITE_CDF";
		model = "\ca\buildings2\misc_cargo\misc_cargo1D.p3d";
	};
	class CDF_WarfareBContructionSite1: CDF_WarfareBContructionSite
	{
		model = "\ca\buildings2\misc_cargo\misc_cargo1C.p3d";
		displayName = "$STR_DN_WARFAREBCONTRUCTIONSITE1_CDF";
	};
	class Ins_WarfareBContructionSite: Base_WarfareBContructionSite
	{
		scope = 0;
		side = 0;
		faction = "INS";
		displayName = "$STR_DN_WARFAREBCONTRUCTIONSITE_INS";
		model = "\ca\buildings2\misc_cargo\misc_cargo1B.p3d";
	};
	class Ins_WarfareBContructionSite1: Ins_WarfareBContructionSite
	{
		model = "\ca\buildings2\misc_cargo\misc_cargo1C.p3d";
		displayName = "$STR_DN_WARFAREBCONTRUCTIONSITE1_INS";
	};
	class Gue_WarfareBContructionSite: Base_WarfareBContructionSite
	{
		scope = 0;
		side = 2;
		faction = "GUE";
		displayName = "$STR_DN_WARFAREBCONTRUCTIONSITE_GUE";
		model = "\ca\buildings2\misc_cargo\misc_cargo1B.p3d";
	};
	class Gue_WarfareBContructionSite1: Gue_WarfareBContructionSite
	{
		model = "\ca\buildings2\misc_cargo\misc_cargo1C.p3d";
		displayName = "$STR_DN_WARFAREBCONTRUCTIONSITE1_GUE";
	};
	class Base_WarfareBLightFactory: WarfareBBaseStructure
	{
		scope = 0;
		armor = 100;
		displayName = "$STR_DN_WARFAREBLIGHTFACTORY_RU";
		model = "\CA\Misc3\WF\WF_factory_light_east.p3d";
		icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		mapSize = 35;
		hiddenSelections[] = {"camo","camo_fueltank"};
		picture = "\ca\ui\data\icon_wf_building_lvs_ca.paa";
		GhostPreview = "Base_WarfareBLightFactoryPreview";
	};
	class Base_WarfareBLightFactoryPreview: Base_WarfareBLightFactory
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_factory_light_east_select.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
	};
	class USMC_WarfareBLightFactoryPreview: Base_WarfareBLightFactoryPreview
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_factory_light_west_select.p3d";
	};
	class USMC_WarfareBLightFactory: Base_WarfareBLightFactory
	{
		scope = 0;
		side = 1;
		faction = "USMC";
		displayName = "$STR_DN_WARFAREBLIGHTFACTORY_USMC";
		model = "\CA\Misc3\WF\WF_factory_light_west.p3d";
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa","\ca\wheeled2\mtvr\data\mtvr_fuel_co.paa"};
		GhostPreview = "USMC_WarfareBLightFactoryPreview";
	};
	class RU_WarfareBLightFactory: Base_WarfareBLightFactory
	{
		scope = 0;
		side = 0;
		faction = "RU";
		displayName = "$STR_DN_WARFAREBLIGHTFACTORY_RU";
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa","\ca\wheeled2\kamaz\data\kamaz_fuel_co.paa"};
	};
	class CDF_WarfareBLightFactory: Base_WarfareBLightFactory
	{
		side = 1;
		scope = 0;
		faction = "CDF";
		displayName = "$STR_DN_WARFAREBLIGHTFACTORY_CDF";
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa","\ca\wheeled2\kamaz\data\kamaz_fuel_CDF_co.paa"};
	};
	class Ins_WarfareBLightFactory: Base_WarfareBLightFactory
	{
		scope = 0;
		side = 0;
		faction = "INS";
		displayName = "$STR_DN_WARFAREBLIGHTFACTORY_INS";
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa","\ca\wheeled2\kamaz\data\kamaz_fuel_CHKDZ_co.paa"};
	};
	class Gue_WarfareBLightFactory: Base_WarfareBLightFactory
	{
		scope = 0;
		side = 2;
		faction = "GUE";
		displayName = "$STR_DN_WARFAREBLIGHTFACTORY_GUE";
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa","\ca\wheeled2\kamaz\data\kamaz_fuel_CHKDZ_co.paa"};
	};
	class Base_WarfareBHeavyFactory: WarfareBBaseStructure
	{
		scope = 0;
		armor = 100;
		model = "\CA\Misc3\WF\WF_factory_heavy_east.p3d";
		icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		mapSize = 35;
		hiddenSelections[] = {"camo","camo_powgen"};
		picture = "\ca\ui\data\icon_wf_building_hvs_ca.paa";
		GhostPreview = "Base_WarfareBHeavyFactoryPreview";
	};
	class Base_WarfareBHeavyFactoryPreview: Base_WarfareBHeavyFactory
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_factory_heavy_east_select.p3d";
	};
	class USMC_WarfareBHeavyFactoryPreview: Base_WarfareBHeavyFactoryPreview
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_factory_heavy_west_select.p3d";
	};
	class USMC_WarfareBHeavyFactory: Base_WarfareBHeavyFactory
	{
		scope = 0;
		side = 1;
		faction = "USMC";
		displayName = "$STR_DN_WARFAREBHEAVYFACTORY_USMC";
		model = "\CA\Misc3\WF\WF_factory_heavy_west.p3d";
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_USMC_co.paa"};
		GhostPreview = "USMC_WarfareBHeavyFactoryPreview";
	};
	class RU_WarfareBHeavyFactory: Base_WarfareBHeavyFactory
	{
		scope = 0;
		faction = "RU";
		side = 0;
		displayName = "$STR_DN_WARFAREBHEAVYFACTORY_RU";
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_VSR_co.paa"};
	};
	class CDF_WarfareBHeavyFactory: Base_WarfareBHeavyFactory
	{
		scope = 0;
		faction = "CDF";
		side = 1;
		displayName = "$STR_DN_WARFAREBHEAVYFACTORY_CDF";
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_CDF_co.paa"};
	};
	class Ins_WarfareBHeavyFactory: Base_WarfareBHeavyFactory
	{
		scope = 0;
		side = 0;
		faction = "INS";
		displayName = "$STR_DN_WARFAREBHEAVYFACTORY_INS";
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_ChDKZ_co.paa"};
	};
	class Gue_WarfareBHeavyFactory: Base_WarfareBHeavyFactory
	{
		scope = 0;
		faction = "GUE";
		side = 2;
		displayName = "$STR_DN_WARFAREBHEAVYFACTORY_GUE";
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_USMC_co.paa"};
	};
	class Base_WarfareBAircraftFactory: WarfareBBaseStructure
	{
		scope = 0;
		model = "\CA\Misc3\WF\WF_heliport_EAST.p3d";
		displayName = "$STR_DN_WARFAREBAIRCRAFTFACTORY_RU";
		armor = 100;
		icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		mapSize = 15;
		picture = "\ca\ui\data\icon_wf_building_air_ca.paa";
		GhostPreview = "Base_WarfareBAircraftFactoryPreview";
	};
	class Base_WarfareBAircraftFactoryPreview: Base_WarfareBAircraftFactory
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_heliport_EAST_select.p3d";
	};
	class USMC_WarfareBAircraftFactoryPreview: Base_WarfareBAircraftFactoryPreview
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_heliport_WEST_select.p3d";
	};
	class USMC_WarfareBAircraftFactory: Base_WarfareBAircraftFactory
	{
		scope = 0;
		side = 1;
		faction = "USMC";
		displayName = "$STR_DN_WARFAREBAIRCRAFTFACTORY_USMC";
		model = "\CA\Misc3\WF\WF_heliport_WEST.p3d";
		GhostPreview = "USMC_WarfareBAircraftFactoryPreview";
	};
	class RU_WarfareBAircraftFactory: Base_WarfareBAircraftFactory
	{
		scope = 0;
		side = 0;
		faction = "RU";
		displayName = "$STR_DN_WARFAREBAIRCRAFTFACTORY_RU";
	};
	class CDF_WarfareBAircraftFactory: Base_WarfareBAircraftFactory
	{
		scope = 0;
		side = 1;
		faction = "CDF";
		displayName = "$STR_DN_WARFAREBAIRCRAFTFACTORY_CDF";
	};
	class WarfareBAircraftFactory_CDF: Base_WarfareBAircraftFactory
	{
		scope = 0;
		side = 1;
		faction = "CDF";
		displayName = "$STR_DN_WARFAREBAIRCRAFTFACTORY_CDF";
	};
	class INS_WarfareBAircraftFactory: Base_WarfareBAircraftFactory
	{
		scope = 0;
		side = 0;
		faction = "INS";
		displayName = "$STR_DN_WARFAREBAIRCRAFTFACTORY_INS";
	};
	class WarfareBAircraftFactory_Ins: Base_WarfareBAircraftFactory
	{
		scope = 0;
		side = 0;
		faction = "INS";
		displayName = "$STR_DN_WARFAREBAIRCRAFTFACTORY_INS";
	};
	class GUE_WarfareBAircraftFactory: Base_WarfareBAircraftFactory
	{
		scope = 0;
		side = 2;
		faction = "GUE";
		displayName = "$STR_DN_WARFAREBAIRCRAFTFACTORY_GUE";
	};
	class WarfareBAircraftFactory_Gue: Base_WarfareBAircraftFactory
	{
		scope = 0;
		side = 2;
		faction = "GUE";
		displayName = "$STR_DN_WARFAREBAIRCRAFTFACTORY_GUE";
	};
	class BASE_WarfareBFieldhHospital: Camp_base
	{
		scope = 0;
		armor = 100;
		attendant = 1;
		mapSize = 6.4;
		icon = "\Ca\buildings\Icons\i_MASH_CA.paa";
		supplyRadius = 9.3;
		nameSound = "fieldhospital";
		accuracy = 0.3;
		vehicleClass = "WarfareBuildingsClassname";
		model = "\CA\Misc3\WF\WF_field_hospital_east.p3d";
		hiddenSelections[] = {"camo_PowerGenerator"};
		picture = "\ca\ui\data\icon_wf_building_firstaid_ca.paa";
		GhostPreview = "BASE_WarfareBFieldhHospitalPreview";
	};
	class BASE_WarfareBFieldhHospitalPreview: BASE_WarfareBFieldhHospital
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_field_hospital_east_select.p3d";
	};
	class USMC_WarfareBFieldhHospitalPreview: BASE_WarfareBFieldhHospitalPreview
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_field_hospital_west_select.p3d";
	};
	class USMC_WarfareBFieldhHospital: BASE_WarfareBFieldhHospital
	{
		side = 1;
		faction = "USMC";
		scope = 0;
		displayName = "$STR_DN_WARFAREBFIELDHOSPITAL_USMC";
		model = "\CA\Misc3\WF\WF_field_hospital_west.p3d";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_USMC_CO.paa"};
		GhostPreview = "USMC_WarfareBFieldhHospitalPreview";
	};
	class RU_WarfareBFieldhHospital: BASE_WarfareBFieldhHospital
	{
		side = 0;
		faction = "RU";
		scope = 0;
		displayName = "$STR_DN_WARFAREBFIELDHOSPITAL_RU";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_VSR_CO.paa"};
	};
	class CDF_WarfareBFieldhHospital: BASE_WarfareBFieldhHospital
	{
		faction = "CDF";
		scope = 0;
		side = 1;
		displayName = "$STR_DN_WARFAREBFIELDHOSPITAL_CDF";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_CDF_CO.paa"};
	};
	class INS_WarfareBFieldhHospital: BASE_WarfareBFieldhHospital
	{
		side = 0;
		scope = 0;
		faction = "INS";
		displayName = "$STR_DN_WARFAREBFIELDHOSPITAL_INS";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_CDF_CO.paa"};
	};
	class GUE_WarfareBFieldhHospital: BASE_WarfareBFieldhHospital
	{
		side = 2;
		faction = "GUE";
		scope = 0;
		displayName = "$STR_DN_WARFAREBFIELDHOSPITAL_GUE";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_CHDKZ_CO.paa"};
	};
	class BASE_WarfareBAntiAirRadar: WarfareBBaseStructure
	{
		model = "\CA\Misc3\WF\WF_anti_radar_east.p3d";
		armor = 50;
		scope = 0;
		hiddenSelections[] = {"camo","camo_powgen"};
		picture = "\ca\ui\data\icon_wf_building_aa_radar_ca.paa";
		GhostPreview = "BASE_WarfareBAntiAirRadarPreview";
	};
	class BASE_WarfareBAntiAirRadarPreview: BASE_WarfareBAntiAirRadar
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_anti_radar_east_select.p3d";
	};
	class USMC_WarfareBAntiAirRadarPreview: BASE_WarfareBAntiAirRadarPreview
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_anti_radar_West_select.p3d";
	};
	class USMC_WarfareBAntiAirRadar: BASE_WarfareBAntiAirRadar
	{
		side = 1;
		faction = "USMC";
		displayName = "$STR_DN_WARFAREBANTIAIRRADAR_USMC";
		model = "\CA\Misc3\WF\WF_anti_radar_West.p3d";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\76n6radar_opak_USMC_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_USMC_co.paa"};
		GhostPreview = "USMC_WarfareBAntiAirRadarPreview";
	};
	class RU_WarfareBAntiAirRadar: BASE_WarfareBAntiAirRadar
	{
		side = 0;
		faction = "RU";
		displayName = "$STR_DN_WARFAREBANTIAIRRADAR_RU";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\76n6radar_opak_VSR_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_VSR_co.paa"};
	};
	class CDF_WarfareBAntiAirRadar: BASE_WarfareBAntiAirRadar
	{
		side = 1;
		faction = "CDF";
		displayName = "$STR_DN_WARFAREBANTIAIRRADAR_CDF";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\76n6radar_opak_CDF_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_CDF_co.paa"};
	};
	class INS_WarfareBAntiAirRadar: BASE_WarfareBAntiAirRadar
	{
		side = 0;
		faction = "INS";
		displayName = "$STR_DN_WARFAREBANTIAIRRADAR_INS";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\76n6radar_opak_CDF_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_CDF_co.paa"};
	};
	class GUE_WarfareBAntiAirRadar: BASE_WarfareBAntiAirRadar
	{
		side = 2;
		displayName = "$STR_DN_WARFAREBANTIAIRRADAR_GUE";
		faction = "GUE";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\76n6radar_opak_CHDKZ_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_CHDKZ_co.paa"};
	};
	class BASE_WarfareBArtilleryRadar: WarfareBBaseStructure
	{
		model = "\CA\Misc3\WF\WF_artilery_radar_EAST.p3d";
		scope = 0;
		armor = 50;
		hiddenSelections[] = {"camo","camo_powgen"};
		picture = "\ca\ui\data\icon_wf_building_am_radar_ca.paa";
		GhostPreview = "BASE_WarfareBArtilleryRadarPreview";
	};
	class BASE_WarfareBArtilleryRadarPreview: BASE_WarfareBArtilleryRadar
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_artilery_radar_east_select.p3d";
	};
	class USMC_WarfareBArtilleryRadarPreview: BASE_WarfareBArtilleryRadarPreview
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_artilery_radar_West_select.p3d";
	};
	class USMC_WarfareBArtilleryRadar: BASE_WarfareBArtilleryRadar
	{
		side = 1;
		faction = "USMC";
		displayName = "$STR_DN_WARFAREBARTILLERYRADAR_USMC";
		model = "\CA\Misc3\WF\WF_artilery_radar_West.p3d";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\76n6radar_opak_USMC_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_USMC_co.paa"};
		GhostPreview = "USMC_WarfareBArtilleryRadarPreview";
	};
	class RU_WarfareBArtilleryRadar: BASE_WarfareBArtilleryRadar
	{
		side = 0;
		faction = "RU";
		displayName = "$STR_DN_WARFAREBARTILLERYRADAR_RU";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\76n6radar_opak_VSR_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_VSR_co.paa"};
	};
	class CDF_WarfareBArtilleryRadar: BASE_WarfareBArtilleryRadar
	{
		side = 1;
		faction = "CDF";
		displayName = "$STR_DN_WARFAREBARTILLERYRADAR_CDF";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\76n6radar_opak_CDF_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_CDF_co.paa"};
	};
	class Ins_WarfareBArtilleryRadar: BASE_WarfareBArtilleryRadar
	{
		side = 0;
		faction = "INS";
		displayName = "$STR_DN_WARFAREBARTILLERYRADAR_INS";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\76n6radar_opak_CDF_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_CDF_co.paa"};
	};
	class Gue_WarfareBArtilleryRadar: BASE_WarfareBArtilleryRadar
	{
		side = 2;
		displayName = "$STR_DN_WARFAREBARTILLERYRADAR_GUE";
		faction = "GUE";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\76n6radar_opak_CHDKZ_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_CHDKZ_co.paa"};
	};
	class Base_WarfareBUAVterminal: WarfareBBaseStructure
	{
		model = "\CA\Misc3\WF\WF_UAV_terminal_east.p3d";
		armor = 300;
		scope = 0;
		hiddenSelections[] = {"camo_powgen"};
		picture = "\ca\ui\data\icon_wf_building_uav_ca.paa";
		GhostPreview = "Base_WarfareBUAVterminalPreview";
	};
	class Base_WarfareBUAVterminalPreview: Base_WarfareBUAVterminal
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_UAV_terminal_east_select.p3d";
	};
	class USMC_WarfareBUAVterminalPreview: Base_WarfareBUAVterminalPreview
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_UAV_terminal_west_select.p3d";
	};
	class USMC_WarfareBUAVterminal: Base_WarfareBUAVterminal
	{
		side = 1;
		faction = "USMC";
		displayName = "$STR_DN_WARFAREBUAVTERMINAL_USMC";
		model = "\CA\Misc3\WF\WF_UAV_terminal_west.p3d";
		scope = 0;
		hiddenSelections[] = {"\ca\misc2\Samsite\Data\PowGen_Big_USMC_co.paa"};
		GhostPreview = "USMC_WarfareBUAVterminalPreview";
	};
	class RU_WarfareBUAVterminal: Base_WarfareBUAVterminal
	{
		side = 0;
		faction = "RU";
		displayName = "$STR_DN_WARFAREBUAVTERMINAL";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\PowGen_Big_VSR_co.paa"};
	};
	class CDF_WarfareBUAVterminal: Base_WarfareBUAVterminal
	{
		side = 1;
		faction = "CDF";
		displayName = "$STR_DN_WARFAREBUAVTERMINAL_CDF";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\PowGen_Big_CDF_co.paa"};
	};
	class INS_WarfareBUAVterminal: Base_WarfareBUAVterminal
	{
		side = 0;
		faction = "INS";
		displayName = "$STR_DN_WARFAREBUAVTERMINAL_INS";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\PowGen_Big_CDF_co.paa"};
	};
	class GUE_WarfareBUAVterminal: Base_WarfareBUAVterminal
	{
		side = 2;
		faction = "GUE";
		displayName = "$STR_DN_WARFAREBUAVTERMINAL_GUE";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\PowGen_Big_CHDKZ_co.paa"};
	};
	class Base_WarfareBVehicleServicePoint: WarfareBBaseStructure
	{
		model = "\CA\Misc3\WF\WF_Vehicle_Service_Point_east.p3d";
		scope = 0;
		hiddenSelections[] = {"camo"};
		armor = 300;
		transportRepair = 200000000;
		transportAmmo = 300000;
		transportFuel = 3000;
		supplyRadius = 9;
		picture = "\ca\ui\data\icon_wf_building_repair_ca.paa";
		GhostPreview = "Base_WarfareBVehicleServicePointPreview";
	};
	class Base_WarfareBVehicleServicePointPreview: Base_WarfareBVehicleServicePoint
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_Vehicle_Service_Point_east_select.p3d";
	};
	class USMC_WarfareBVehicleServicePointPreview: Base_WarfareBVehicleServicePointPreview
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_Vehicle_Service_Point_west_select.p3d";
	};
	class USMC_WarfareBVehicleServicePoint: Base_WarfareBVehicleServicePoint
	{
		side = 1;
		faction = "USMC";
		displayName = "$STR_DN_WARFAREBVEHICLESERVICEPOINT_USMC";
		model = "\CA\Misc3\WF\WF_Vehicle_Service_Point_west.p3d";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa"};
		GhostPreview = "USMC_WarfareBVehicleServicePointPreview";
	};
	class RU_WarfareBVehicleServicePoint: Base_WarfareBVehicleServicePoint
	{
		side = 0;
		faction = "RU";
		displayName = "$STR_DN_WARFAREBVEHICLESERVICEPOINT_RU";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa"};
	};
	class CDF_WarfareBVehicleServicePoint: Base_WarfareBVehicleServicePoint
	{
		side = 1;
		faction = "CDF";
		displayName = "$STR_DN_WARFAREBVEHICLESERVICEPOINT_CDF";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa"};
	};
	class INS_WarfareBVehicleServicePoint: Base_WarfareBVehicleServicePoint
	{
		side = 0;
		faction = "INS";
		displayName = "$STR_DN_WARFAREBVEHICLESERVICEPOINT_INS";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa"};
	};
	class GUE_WarfareBVehicleServicePoint: Base_WarfareBVehicleServicePoint
	{
		side = 2;
		faction = "GUE";
		displayName = "$STR_DN_WARFAREBVEHICLESERVICEPOINT_GUE";
		scope = 0;
		hiddenSelectionsTextures[] = {"\ca\buildings2\misc_cargo\data\misc_cargo1b_khaki_co.paa"};
	};
	class Base_WarfareBBarrier5x: House
	{
		scope = 0;
		displayName = "$STR_DN_WARFAREBBARRIER5X";
		vehicleClass = "WarfareBuildingsClassname";
		model = "\CA\Misc3\WF\WF_hesco_5x.p3d";
		icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		mapSize = 10;
		armor = 450;
		nameSound = "fence";
		destrType = "DestructBuilding";
		GhostPreview = "Base_WarfareBBarrier5xPreview";
		picture = "\CA\ui\data\icon_wf_barriers_ca.paa";
	};
	class Base_WarfareBBarrier10x: Base_WarfareBBarrier5x
	{
		displayName = "$STR_DN_WARFAREBBARRIER10X";
		model = "\CA\Misc3\WF\WF_hesco_10x.p3d";
		icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		mapSize = 10;
		armor = 700;
		nameSound = "fence";
		GhostPreview = "Base_WarfareBBarrier10xPreview";
	};
	class Base_WarfareBBarrier10xTall: Base_WarfareBBarrier5x
	{
		displayName = "$STR_DN_WARFAREBBARRIER10XTALL";
		model = "\CA\Misc3\WF\WF_hesco_big_10x.p3d";
		icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		mapSize = 10;
		armor = 850;
		GhostPreview = "Base_WarfareBBarrier10xTallPreview";
	};
	class Base_WarfareBBarrier10xTallPreview: Base_WarfareBBarrier10xTall
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_hesco_big_10x_select.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
	};
	class Base_WarfareBBarrier5xPreview: Base_WarfareBBarrier5x
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_hesco_5x_select.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
	};
	class Base_WarfareBBarrier10xPreview: Base_WarfareBBarrier10x
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_hesco_10x_select.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
	};
	class USMC_WarfareBBarrier5x: Base_WarfareBBarrier5x
	{
		scope = 1;
		side = 1;
		faction = "USMC";
	};
	class USMC_WarfareBBarrier10x: Base_WarfareBBarrier10x
	{
		scope = 1;
		side = 1;
		faction = "USMC";
	};
	class USMC_WarfareBBarrier10xTall: Base_WarfareBBarrier10xTall
	{
		scope = 1;
		side = 1;
		faction = "USMC";
	};
	class RU_WarfareBBarrier5x: Base_WarfareBBarrier5x
	{
		scope = 1;
		side = 0;
		faction = "RU";
	};
	class RU_WarfareBBarrier10x: Base_WarfareBBarrier10x
	{
		scope = 1;
		side = 0;
		faction = "RU";
	};
	class RU_WarfareBBarrier10xTall: Base_WarfareBBarrier10xTall
	{
		scope = 1;
		side = 0;
		faction = "RU";
	};
	class CDF_WarfareBBarrier5x: Base_WarfareBBarrier5x
	{
		scope = 1;
		side = 1;
		faction = "CDF";
	};
	class CDF_WarfareBBarrier10x: Base_WarfareBBarrier10x
	{
		scope = 1;
		side = 1;
		faction = "CDF";
	};
	class CDF_WarfareBBarrier10xTall: Base_WarfareBBarrier10xTall
	{
		scope = 1;
		side = 1;
		faction = "CDF";
	};
	class INS_WarfareBBarrier5x: Base_WarfareBBarrier5x
	{
		scope = 1;
		side = 0;
		faction = "INS";
	};
	class INS_WarfareBBarrier10x: Base_WarfareBBarrier10x
	{
		scope = 1;
		side = 0;
		faction = "INS";
	};
	class INS_WarfareBBarrier10xTall: Base_WarfareBBarrier10xTall
	{
		scope = 1;
		side = 0;
		faction = "INS";
	};
	class GUE_WarfareBBarrier5x: Base_WarfareBBarrier5x
	{
		scope = 1;
		side = 2;
		faction = "GUE";
	};
	class GUE_WarfareBBarrier10x: Base_WarfareBBarrier10x
	{
		scope = 1;
		side = 2;
		faction = "GUE";
	};
	class GUE_WarfareBBarrier10xTall: Base_WarfareBBarrier10xTall
	{
		scope = 1;
		side = 2;
		faction = "GUE";
	};
	class Warfare_HQ_base_unfolded: House
	{
		scope = 0;
		displayName = "$STR_DN_WARFARE_HQ_BASE_UNFOLDED";
		vehicleClass = "WarfareBuildingsClassname";
		mapSize = 10;
		armor = 800;
		autocenter = 0;
		reversed = 1;
		picture = "\ca\ui\data\icon_wf_building_mhq_ca.paa";
	};
	class BRDM2_HQ_Gue_unfolded: Warfare_HQ_base_unfolded
	{
		scope = 0;
		model = "\CA\Misc3\WF\WF_HQ_BRDM2.p3d";
		displayName = "$STR_DN_BRDM_HQ_GUE_UNFOLDED";
		side = 2;
		faction = "GUE";
		hiddenSelections[] = {"camo_powergenerator"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_CHDKZ_CO.paa"};
		GhostPreview = "BRDM2_HQ_Gue_unfoldedPreview";
	};
	class BRDM2_HQ_Gue_unfoldedPreview: BRDM2_HQ_Gue_unfolded
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_HQ_BRDM2_select";
	};
	class BTR90_HQ_unfolded: Warfare_HQ_base_unfolded
	{
		scope = 0;
		side = 0;
		faction = "RU";
		model = "\CA\Misc3\WF\WF_HQ_BTR90.p3d";
		displayName = "$STR_DN_BTR90_HQ_UNFOLDED";
		GhostPreview = "BTR90_HQ_unfoldedPreview";
	};
	class BTR90_HQ_unfoldedPreview: BTR90_HQ_unfolded
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_HQ_btr90_select.p3d";
	};
	class LAV25_HQ_unfolded: Warfare_HQ_base_unfolded
	{
		scope = 0;
		model = "\CA\Misc3\WF\WF_HQ_LAV25.p3d";
		displayName = "$STR_DN_LAV25_HQ_UNFOLDED";
		faction = "USMC";
		side = 1;
		GhostPreview = "LAV25_HQ_unfoldedPreview";
	};
	class LAV25_HQ_unfoldedPreview: LAV25_HQ_unfolded
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_HQ_lav25_select.p3d";
	};
	class BMP2_HQ_INS_unfolded: Warfare_HQ_base_unfolded
	{
		scope = 0;
		faction = "INS";
		side = 0;
		model = "\CA\Misc3\WF\WF_HQ_BMP2.p3d";
		displayName = "$STR_DN_BMP2_HQ_INS_UNFOLDED";
		hiddenSelections[] = {"Camo1","Camo2","camo_powergenerator"};
		hiddenSelectionsTextures[] = {"\ca\tracked\data\bmp2_01_co.paa","\ca\tracked\data\bmp2_02_co.paa","\ca\Misc3\PowerGenerator\Data\Power_generator_CHDKZ_CO.paa"};
		GhostPreview = "BMP2_HQ_INS_unfoldedPreview";
	};
	class BMP2_HQ_INS_unfoldedPreview: BMP2_HQ_INS_unfolded
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_HQ_BMP2_select.p3d";
	};
	class BMP2_HQ_CDF_unfolded: Warfare_HQ_base_unfolded
	{
		scope = 0;
		model = "\CA\Misc3\WF\WF_HQ_BMP2.p3d";
		displayName = "$STR_DN_BMP2_HQ_CDF_UNFOLDED";
		side = 1;
		faction = "CDF";
		hiddenSelections[] = {"Camo1","Camo2","camo_powergenerator"};
		hiddenSelectionsTextures[] = {"\ca\tracked\data\bmp2_01_camo_co.paa","\ca\tracked\data\bmp2_02_camo_co.paa","\ca\Misc3\PowerGenerator\Data\Power_generator_CDF_CO.paa"};
		GhostPreview = "BMP2_HQ_CDF_unfoldedPreview";
	};
	class BMP2_HQ_CDF_unfoldedPreview: BMP2_HQ_CDF_unfolded
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_HQ_BMP2_select.p3d";
	};
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		GhostPreview = "M2StaticMGPreview";
	};
	class StaticCannon: StaticWeapon
	{
		GhostPreview = "StaticCannon_Preview";
	};
	class StaticMGWeapon: StaticWeapon
	{
		GhostPreview = "M2StaticMGPreview";
	};
	class StaticGrenadeLauncher: StaticWeapon
	{
		GhostPreview = "MiniTripod_Preview";
	};
	class WarfareBMGNest_M240_base: StaticMGWeapon
	{
		GhostPreview = "WarfareBMGNest_Preview";
	};
	class WarfareBMGNest_PK_Base: StaticMGWeapon
	{
		GhostPreview = "WarfareBMGNest_Preview";
	};
	class DSHKM_base;
	class DSHkM_Mini_TriPod: DSHKM_base
	{
		GhostPreview = "MiniTripod_Preview";
	};
	class M2StaticMG_base;
	class M2HD_mini_TriPod: M2StaticMG_base
	{
		GhostPreview = "MiniTripod_Preview";
	};
	class StaticCannon_Preview: Warfare_HQ_base_unfolded
	{
		scope = 1;
		side = 4;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\fieldgun_select.p3d";
	};
	class M2StaticMGPreview: StaticCannon_Preview
	{
		model = "\CA\Misc3\WF\mg_select.p3d";
	};
	class MiniTripod_Preview: StaticCannon_Preview
	{
		model = "\CA\Misc3\WF\minitripod_select.p3d";
	};
	class WarfareBMGNest_Preview: StaticCannon_Preview
	{
		model = "\CA\Misc3\WF\nest_select.p3d";
	};
	class WarfareBunkerSign: NonStrategic
	{
		scope = 2;
		model = "\CA\Misc3\WF\sign_flag";
		destrType = "DestructTree";
		displayName = "$STR_dn_sign";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\data\flag_usa_co.paa"};
		vehicleClass = "WarfareBuildingsClassname";
	};
};
//};
