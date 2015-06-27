////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:10:48 2014 : Source 'file' date Fri Oct 31 06:10:48 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class misc_e : WF\config.bin{
class CfgPatches
{
	class CAMisc_E_WF
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {"CAMisc_E","WarfareBuildings"};
	};
};
class CfgVehicleClasses
{
	class Military_With_side
	{
		displayName = "$STR_ep1_dn_vc_military";
	};
};
class CfgVehicles
{
	class House;
	class NonStrategic;
	class Strategic;
	class Fortress1;
	class Camp_base;
	class WarfareBBaseStructure;
	class Base_WarfareBBarracks;
	class Base_WarfareBBarracksPreview;
	class US_WarfareBBarracksPreview_EP1: Base_WarfareBBarracksPreview
	{
		expansion = 1;
		scope = 1;
		model = "\CA\Misc3\WF\WF_barracks_WEST_select.p3d";
	};
	class US_WarfareBBarracks_Base_EP1: Base_WarfareBBarracks
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_DN_WF_Barracks";
		model = "\ca\Misc_E\WF\WF_barracks_WEST_ep1.p3d";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_USMC_CO.paa"};
		GhostPreview = "US_WarfareBBarracksPreview_EP1";
		vehicleClass = "Military_US_EP1";
	};
	class TK_WarfareBBarracks_Base_EP1: Base_WarfareBBarracks
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_DN_WF_Barracks";
		model = "\ca\Misc_E\WF\WF_barracks_EAST_ep1.p3d";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_CHDKZ_CO.paa"};
		vehicleClass = "Military_TKA_EP1";
	};
	class TK_GUE_WarfareBBarracks_Base_EP1: Base_WarfareBBarracks
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_DN_WF_Barracks";
		model = "\ca\Misc_E\WF\WF_barracks_EAST_ep1.p3d";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_CHDKZ_CO.paa"};
		vehicleClass = "Military_GUE_EP1";
	};
	class US_WarfareBBarracks_EP1: US_WarfareBBarracks_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 1;
		faction = "BIS_US";
	};
	class TK_WarfareBBarracks_EP1: TK_WarfareBBarracks_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 0;
		faction = "BIS_TK";
	};
	class TK_GUE_WarfareBBarracks_EP1: TK_GUE_WarfareBBarracks_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 2;
		faction = "BIS_TK_GUE";
	};
	class Base_WarfareBContructionSite;
	class US_WarfareBContructionSite_Base_EP1: Base_WarfareBContructionSite
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_DN_WF_ContructionSite";
		model = "\ca\buildings2\misc_cargo\misc_cargo1D.p3d";
		vehicleClass = "Military_US_EP1";
	};
	class US_WarfareBContructionSite1_Base_EP1: US_WarfareBContructionSite_Base_EP1
	{
		model = "\ca\buildings2\misc_cargo\misc_cargo1C.p3d";
		displayName = "$STR_EP1_DN_WF_ContructionSite2";
	};
	class TK_WarfareBContructionSite_Base_EP1: Base_WarfareBContructionSite
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_DN_WF_ContructionSite";
		model = "\ca\buildings2\misc_cargo\misc_cargo1B.p3d";
		vehicleClass = "Military_TKA_EP1";
	};
	class TK_WarfareBContructionSite1_Base_EP1: TK_WarfareBContructionSite_Base_EP1
	{
		model = "\ca\buildings2\misc_cargo\misc_cargo1C.p3d";
		displayName = "$STR_EP1_DN_WF_ContructionSite2";
	};
	class TK_GUE_WarfareBContructionSite_Base_EP1: Base_WarfareBContructionSite
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_DN_WF_ContructionSite";
		model = "\ca\buildings2\misc_cargo\misc_cargo1B.p3d";
		vehicleClass = "Military_GUE_EP1";
	};
	class TK_GUE_WarfareBContructionSite1_Base_EP1: TK_GUE_WarfareBContructionSite_Base_EP1
	{
		model = "\ca\buildings2\misc_cargo\misc_cargo1C.p3d";
		displayName = "$STR_EP1_DN_WF_ContructionSite2";
	};
	class US_WarfareBContructionSite_EP1: US_WarfareBContructionSite_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 1;
		faction = "BIS_US";
	};
	class US_WarfareBContructionSite1_EP1: US_WarfareBContructionSite1_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 1;
		faction = "BIS_US";
	};
	class TK_WarfareBContructionSite_EP1: TK_WarfareBContructionSite_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 0;
		faction = "BIS_TK";
	};
	class TK_WarfareBContructionSite1_EP1: TK_WarfareBContructionSite1_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 0;
		faction = "BIS_TK";
	};
	class TK_GUE_WarfareBContructionSite_EP1: TK_GUE_WarfareBContructionSite_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 2;
		faction = "BIS_TK_GUE";
	};
	class TK_GUE_WarfareBContructionSite1_EP1: TK_GUE_WarfareBContructionSite1_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 2;
		faction = "BIS_TK_GUE";
	};
	class Base_WarfareBLightFactory;
	class Base_WarfareBLightFactoryPreview;
	class US_WarfareBLightFactoryPreview_EP1: Base_WarfareBLightFactoryPreview
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_factory_light_west_select.p3d";
	};
	class US_WarfareBLightFactory_base_EP1: Base_WarfareBLightFactory
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_DN_WF_LightFactory";
		model = "\ca\Misc_E\WF\WF_factory_light_WEST_ep1.p3d";
		hiddenSelectionsTextures[] = {};
		GhostPreview = "US_WarfareBLightFactoryPreview_EP1";
		vehicleClass = "Military_US_EP1";
	};
	class TK_WarfareBLightFactory_base_EP1: Base_WarfareBLightFactory
	{
		expansion = 1;
		scope = 2;
		model = "\ca\Misc_E\WF\WF_factory_light_EAST_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_LightFactory";
		hiddenSelectionsTextures[] = {};
		vehicleClass = "Military_TKA_EP1";
	};
	class TK_GUE_WarfareBLightFactory_base_EP1: Base_WarfareBLightFactory
	{
		expansion = 1;
		scope = 2;
		model = "\ca\Misc_E\WF\WF_factory_light_TKG_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_LightFactory";
		hiddenSelectionsTextures[] = {};
		vehicleClass = "Military_GUE_EP1";
	};
	class US_WarfareBLightFactory_EP1: US_WarfareBLightFactory_base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 1;
		faction = "BIS_US";
	};
	class TK_WarfareBLightFactory_EP1: TK_WarfareBLightFactory_base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 0;
		faction = "BIS_TK";
	};
	class TK_GUE_WarfareBLightFactory_EP1: TK_GUE_WarfareBLightFactory_base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 2;
		faction = "BIS_TK_GUE";
	};
	class Base_WarfareBHeavyFactory;
	class Base_WarfareBHeavyFactoryPreview;
	class US_WarfareBHeavyFactoryPreview_EP1: Base_WarfareBHeavyFactoryPreview
	{
		expansion = 1;
		scope = 1;
		model = "\CA\Misc3\WF\WF_factory_heavy_west_select.p3d";
	};
	class US_WarfareBHeavyFactory_Base_EP1: Base_WarfareBHeavyFactory
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_DN_WF_HeavyFactory";
		model = "\ca\Misc_E\WF\WF_factory_heavy_WEST_ep1.p3d";
		hiddenSelectionsTextures[] = {"ca\misc_e\wf\data\misc_cargo1b_desert_co.paa","ca\misc_e\wf\data\powgen_big_desert_co.paa"};
		GhostPreview = "US_WarfareBHeavyFactoryPreview_EP1";
		vehicleClass = "Military_US_EP1";
	};
	class TK_WarfareBHeavyFactory_Base_EP1: Base_WarfareBHeavyFactory
	{
		expansion = 1;
		scope = 2;
		model = "\ca\Misc_E\WF\WF_factory_heavy_EAST_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_HeavyFactory";
		hiddenSelections[] = {"camo_powgen","camo1","camo2","camo_powgen_m","camo","camo_mlod"};
		hiddenSelectionsTextures[] = {"\ca\misc_E\wf\Data\powgen_big_TKA_co.paa","ca\tracked_E\t55\data\t55_body_co.paa","Ca\Tracked_E\T55\data\t55_tower_co.paa","\ca\misc_E\wf\Data\powgenmlod2_TKA_co.paa","\ca\misc_E\wf\Data\Misc_Cargo1B_desert_co.paa","\ca\misc_E\wf\Data\Misc_Cargo1B_desert_MLOD_co.paa"};
		vehicleClass = "Military_TKA_EP1";
	};
	class TK_GUE_WarfareBHeavyFactory_Base_EP1: Base_WarfareBHeavyFactory
	{
		expansion = 1;
		scope = 2;
		model = "\ca\Misc_E\WF\WF_factory_heavy_EAST_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_HeavyFactory";
		hiddenSelections[] = {"camo_powgen","camo1","camo2","camo_powgen_m","camo","camo_mlod"};
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\PowGen_Big_CHDKZ_CO.paa","ca\tracked_E\t55\data\t55_body_TKG_co.paa","Ca\Tracked_E\T55\data\t55_tower_TKG_co.paa","\ca\misc_E\wf\Data\powgenmlod2_khaki_co.paa","\ca\misc_E\wf\Data\Misc_Cargo1B_khaki_co.paa","\ca\misc_E\wf\Data\Misc_Cargo1B_khaki_MLOD_co.paa"};
		vehicleClass = "Military_GUE_EP1";
	};
	class US_WarfareBHeavyFactory_EP1: US_WarfareBHeavyFactory_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 1;
		faction = "BIS_US";
	};
	class TK_WarfareBHeavyFactory_EP1: TK_WarfareBHeavyFactory_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 0;
		faction = "BIS_TK";
	};
	class TK_GUE_WarfareBHeavyFactory_EP1: TK_GUE_WarfareBHeavyFactory_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 2;
		faction = "BIS_TK_GUE";
	};
	class Base_WarfareBAircraftFactory;
	class Base_WarfareBAircraftFactoryPreview;
	class US_WarfareBAircraftFactoryPreview_EP1: Base_WarfareBAircraftFactoryPreview
	{
		scope = 1;
		model = "\CA\Misc3\WF\WF_heliport_WEST_select.p3d";
	};
	class US_WarfareBAircraftFactory_Base_EP1: Base_WarfareBAircraftFactory
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_DN_WF_AircraftFactory";
		model = "\ca\Misc_E\WF\WF_heliport_WEST_ep1.p3d";
		GhostPreview = "US_WarfareBAircraftFactoryPreview_EP1";
		vehicleClass = "Military_US_EP1";
	};
	class TK_WarfareBAircraftFactory_Base_EP1: Base_WarfareBAircraftFactory
	{
		expansion = 1;
		scope = 2;
		model = "\ca\Misc_E\WF\WF_heliport_EAST_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_AircraftFactory";
		vehicleClass = "Military_TKA_EP1";
	};
	class TK_GUE_WarfareBAircraftFactory_Base_EP1: Base_WarfareBAircraftFactory
	{
		expansion = 1;
		scope = 2;
		model = "\ca\Misc_E\WF\WF_heliport_TKG_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_AircraftFactory";
		vehicleClass = "Military_GUE_EP1";
	};
	class US_WarfareBAircraftFactory_EP1: US_WarfareBAircraftFactory_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 1;
		faction = "BIS_US";
	};
	class TK_WarfareBAircraftFactory_EP1: TK_WarfareBAircraftFactory_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 0;
		faction = "BIS_TK";
	};
	class TK_GUE_WarfareBAircraftFactory_EP1: TK_GUE_WarfareBAircraftFactory_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 2;
		faction = "BIS_TK_GUE";
	};
	class BASE_WarfareBFieldhHospital;
	class BASE_WarfareBFieldhHospitalPreview;
	class US_WarfareBFieldhHospitalPreview_EP1: BASE_WarfareBFieldhHospitalPreview
	{
		expansion = 1;
		scope = 1;
		model = "\CA\Misc3\WF\WF_field_hospital_west_select.p3d";
	};
	class US_WarfareBFieldhHospital_Base_EP1: BASE_WarfareBFieldhHospital
	{
		expansion = 1;
		scope = 2;
		displayName = "$STR_EP1_DN_WF_FieldhHospital";
		model = "\ca\Misc_E\WF\WF_field_hospital_WEST_ep1.p3d";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_USMC_CO.paa"};
		GhostPreview = "US_WarfareBFieldhHospitalPreview_EP1";
		vehicleClass = "Military_US_EP1";
	};
	class TK_WarfareBFieldhHospital_Base_EP1: BASE_WarfareBFieldhHospital
	{
		expansion = 1;
		scope = 2;
		model = "\ca\Misc_E\WF\WF_field_hospital_EAST_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_FieldhHospital";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_CDF_CO.paa"};
		vehicleClass = "Military_TKA_EP1";
	};
	class TK_GUE_WarfareBFieldhHospital_Base_EP1: BASE_WarfareBFieldhHospital
	{
		expansion = 1;
		scope = 2;
		model = "\ca\Misc_E\WF\WF_field_hospital_EAST_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_FieldhHospital";
		hiddenSelectionsTextures[] = {"\ca\Misc3\PowerGenerator\Data\Power_generator_CHDKZ_CO.paa"};
		vehicleClass = "Military_GUE_EP1";
	};
	class US_WarfareBFieldhHospital_EP1: US_WarfareBFieldhHospital_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 1;
		faction = "BIS_US";
	};
	class TK_WarfareBFieldhHospital_EP1: TK_WarfareBFieldhHospital_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 0;
		faction = "BIS_TK";
	};
	class TK_GUE_WarfareBFieldhHospital_EP1: TK_GUE_WarfareBFieldhHospital_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 2;
		faction = "BIS_TK_GUE";
	};
	class BASE_WarfareBAntiAirRadar;
	class BASE_WarfareBAntiAirRadarPreview;
	class US_WarfareBAntiAirRadarPreview_EP1: BASE_WarfareBAntiAirRadarPreview
	{
		expansion = 1;
		scope = 1;
		model = "\CA\Misc3\WF\WF_anti_radar_West_select.p3d";
	};
	class US_WarfareBAntiAirRadar_Base_EP1: BASE_WarfareBAntiAirRadar
	{
		expansion = 1;
		displayName = "$STR_EP1_DN_WF_AntiAirRadar";
		model = "\ca\Misc_E\WF\WF_anti_radar_WEST_ep1.p3d";
		scope = 2;
		hiddenSelectionsTextures[] = {};
		GhostPreview = "US_WarfareBAntiAirRadarPreview_EP1";
		icon = "CA\misc2\data\Icons\icon_samSite_ca.paa";
		mapSize = 15;
		vehicleClass = "Military_US_EP1";
	};
	class TK_WarfareBAntiAirRadar_Base_EP1: BASE_WarfareBAntiAirRadar
	{
		expansion = 1;
		model = "\ca\Misc_E\WF\WF_anti_radar_EAST_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_AntiAirRadar";
		scope = 2;
		hiddenSelections[] = {"camo","camo2","camo_powgen","camo_powgen_m","camo_mlod"};
		hiddenSelectionsTextures[] = {"\ca\misc_E\WF\Data\76n6radar_opak_TKA_co.paa","\ca\misc_E\WF\Data\76n6radar_TKA_co.paa","\ca\misc_E\WF\Data\PowGen_Big_TKA_co.paa","\ca\misc_E\WF\Data\PowGenmlod2_TKA_co.paa","\ca\misc_E\WF\Data\76n6mlod_TKA_co.paa"};
		icon = "CA\misc2\data\Icons\icon_samSite_ca.paa";
		mapSize = 15;
		vehicleClass = "Military_TKA_EP1";
	};
	class TK_GUE_WarfareBAntiAirRadar_Base_EP1: BASE_WarfareBAntiAirRadar
	{
		expansion = 1;
		model = "\ca\Misc_E\WF\WF_anti_radar_EAST_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_AntiAirRadar";
		scope = 2;
		hiddenSelections[] = {"camo","camo2","camo_powgen","camo_powgen_m","camo_mlod"};
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\76n6radar_opak_CHDKZ_co.paa","\ca\misc_E\WF\Data\76n6radar_khaki_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_CHDKZ_CO.paa","\ca\misc_E\WF\Data\PowGenmlod2_khaki_co.paa","\ca\misc_E\WF\Data\76n6mlod_khaki_co.paa"};
		icon = "CA\misc2\data\Icons\icon_samSite_ca.paa";
		mapSize = 15;
		vehicleClass = "Military_GUE_EP1";
	};
	class US_WarfareBAntiAirRadar_EP1: US_WarfareBAntiAirRadar_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 1;
		faction = "BIS_US";
	};
	class TK_WarfareBAntiAirRadar_EP1: TK_WarfareBAntiAirRadar_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 0;
		faction = "BIS_TK";
	};
	class TK_GUE_WarfareBAntiAirRadar_EP1: TK_GUE_WarfareBAntiAirRadar_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 2;
		faction = "BIS_TK_GUE";
	};
	class BASE_WarfareBArtilleryRadar;
	class BASE_WarfareBArtilleryRadarPreview;
	class US_WarfareBArtilleryRadarPreview_EP1: BASE_WarfareBArtilleryRadarPreview
	{
		expansion = 1;
		scope = 1;
		model = "\CA\Misc3\WF\WF_artilery_radar_West_select.p3d";
	};
	class US_WarfareBArtilleryRadar_Base_EP1: BASE_WarfareBArtilleryRadar
	{
		expansion = 1;
		displayName = "$STR_EP1_DN_WF_ArtilleryRadar";
		model = "\ca\Misc_E\WF\WF_artilery_radar_WEST_ep1.p3d";
		scope = 2;
		hiddenSelectionsTextures[] = {};
		GhostPreview = "US_WarfareBArtilleryRadarPreview_EP1";
		icon = "CA\Misc_E\data\Icons\icon_artilery_ca.paa";
		mapSize = 15;
		vehicleClass = "Military_US_EP1";
	};
	class TK_WarfareBArtilleryRadar_Base_EP1: BASE_WarfareBArtilleryRadar
	{
		expansion = 1;
		model = "\ca\Misc_E\WF\WF_artilery_radar_EAST_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_ArtilleryRadar";
		scope = 2;
		hiddenSelections[] = {"camo","camo2","camo_powgen","camo_powgen_m","camo_mlod"};
		hiddenSelectionsTextures[] = {"\ca\misc_e\wf\data\76n6radar_opak_tka_co.paa","\ca\misc_e\wf\data\76n6radar_tka_co.paa","\ca\misc_e\wf\data\Powgen_Big_tka_co.paa","\ca\misc_E\WF\Data\PowGenmlod2_TKA_co.paa","\ca\misc_E\WF\Data\76n6mlod_TKA_co.paa"};
		icon = "CA\Misc_E\data\Icons\icon_artilery_ca.paa";
		mapSize = 15;
		vehicleClass = "Military_TKA_EP1";
	};
	class TK_GUE_WarfareBArtilleryRadar_Base_EP1: BASE_WarfareBArtilleryRadar
	{
		expansion = 1;
		displayName = "$STR_EP1_DN_WF_ArtilleryRadar";
		model = "\ca\Misc_E\WF\WF_artilery_radar_EAST_ep1.p3d";
		scope = 2;
		hiddenSelections[] = {"camo","camo2","camo_powgen","camo_powgen_m","camo_mlod"};
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\76n6radar_opak_CHDKZ_co.paa","\ca\misc_E\WF\Data\76n6radar_khaki_co.paa","\ca\misc2\Samsite\Data\PowGen_Big_CHDKZ_CO.paa","\ca\misc_E\WF\Data\powgenmlod2_khaki_co.paa","\ca\misc_E\WF\Data\76n6mlod_khaki_co.paa"};
		icon = "CA\Misc_E\data\Icons\icon_artilery_ca.paa";
		mapSize = 15;
		vehicleClass = "Military_GUE_EP1";
	};
	class US_WarfareBArtilleryRadar_EP1: US_WarfareBArtilleryRadar_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 1;
		faction = "BIS_US";
	};
	class TK_WarfareBArtilleryRadar_EP1: TK_WarfareBArtilleryRadar_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 0;
		faction = "BIS_TK";
	};
	class TK_GUE_WarfareBArtilleryRadar_EP1: TK_GUE_WarfareBArtilleryRadar_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 2;
		faction = "BIS_TK_GUE";
	};
	class Base_WarfareBUAVterminal;
	class Base_WarfareBUAVterminalPreview;
	class US_WarfareBUAVterminalPreview_EP1: Base_WarfareBUAVterminalPreview
	{
		expansion = 1;
		scope = 1;
		model = "\CA\Misc3\WF\WF_UAV_terminal_west_select.p3d";
	};
	class US_WarfareBUAVterminal_Base_EP1: Base_WarfareBUAVterminal
	{
		expansion = 1;
		displayName = "$STR_EP1_DN_WF_UAVterminal";
		model = "\ca\Misc_E\WF\WF_UAV_terminal_WEST_ep1.p3d";
		scope = 2;
		GhostPreview = "US_WarfareBUAVterminalPreview_EP1";
		vehicleClass = "Military_US_EP1";
	};
	class TK_WarfareBUAVterminal_Base_EP1: Base_WarfareBUAVterminal
	{
		expansion = 1;
		model = "\ca\Misc_E\WF\WF_UAV_terminal_EAST_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_UAVterminal";
		scope = 2;
		hiddenSelections[] = {"camo_powgen","camo_powgen_m"};
		hiddenSelectionsTextures[] = {"\ca\misc_E\WF\Data\PowGen_Big_TKA_CO.paa","\ca\misc_E\WF\Data\powgenmlod2_TKA_co.paa"};
		vehicleClass = "Military_TKA_EP1";
	};
	class TK_GUE_WarfareBUAVterminal_Base_EP1: Base_WarfareBUAVterminal
	{
		expansion = 1;
		model = "\ca\Misc_E\WF\WF_UAV_terminal_EAST_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_UAVterminal";
		scope = 2;
		hiddenSelections[] = {"camo_powgen","camo_powgen_m"};
		hiddenSelectionsTextures[] = {"\ca\misc2\Samsite\Data\powgen_big_chdkz_co.paa","\ca\misc_E\WF\Data\powgenmlod2_khaki_co.paa"};
		vehicleClass = "Military_GUE_EP1";
	};
	class US_WarfareBUAVterminal_EP1: US_WarfareBUAVterminal_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 1;
		faction = "BIS_US";
	};
	class TK_WarfareBUAVterminal_EP1: TK_WarfareBUAVterminal_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 0;
		faction = "BIS_TK";
	};
	class TK_GUE_WarfareBUAVterminal_EP1: TK_GUE_WarfareBUAVterminal_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 2;
		faction = "BIS_TK_GUE";
	};
	class Base_WarfareBVehicleServicePoint;
	class Base_WarfareBVehicleServicePointPreview;
	class US_WarfareBVehicleServicePointPreview_EP1: Base_WarfareBVehicleServicePointPreview
	{
		expansion = 1;
		scope = 1;
		model = "\CA\Misc3\WF\WF_Vehicle_Service_Point_west_select.p3d";
	};
	class US_WarfareBVehicleServicePoint_Base_EP1: Base_WarfareBVehicleServicePoint
	{
		expansion = 1;
		displayName = "$STR_EP1_DN_WF_VehicleServicePoint";
		model = "\ca\Misc_E\WF\WF_Vehicle_Service_Point_WEST_ep1.p3d";
		scope = 2;
		hiddenSelectionsTextures[] = {};
		GhostPreview = "US_WarfareBVehicleServicePointPreview_EP1";
		vehicleClass = "Military_US_EP1";
	};
	class TK_WarfareBVehicleServicePoint_Base_EP1: Base_WarfareBVehicleServicePoint
	{
		expansion = 1;
		model = "\ca\Misc_E\WF\WF_Vehicle_Service_Point_EAST_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_VehicleServicePoint";
		scope = 2;
		hiddenSelections[] = {"camo","camo_mlod"};
		hiddenSelectionsTextures[] = {"\ca\misc_E\wf\Data\Misc_Cargo1B_desert_co.paa","\ca\misc_E\wf\Data\Misc_Cargo1B_desert_MLOD_co.paa"};
		vehicleClass = "Military_TKA_EP1";
	};
	class TK_GUE_WarfareBVehicleServicePoint_Base_EP1: Base_WarfareBVehicleServicePoint
	{
		expansion = 1;
		model = "\ca\Misc_E\WF\WF_Vehicle_Service_Point_EAST_ep1.p3d";
		displayName = "$STR_EP1_DN_WF_VehicleServicePoint";
		scope = 2;
		hiddenSelections[] = {"camo","camo_mlod"};
		hiddenSelectionsTextures[] = {"\ca\misc_E\wf\Data\Misc_Cargo1B_khaki_co.paa","\ca\misc_E\wf\Data\Misc_Cargo1B_khaki_MLOD_co.paa"};
		vehicleClass = "Military_GUE_EP1";
	};
	class US_WarfareBVehicleServicePoint_EP1: US_WarfareBVehicleServicePoint_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 1;
		faction = "BIS_US";
	};
	class TK_WarfareBVehicleServicePoint_EP1: TK_WarfareBVehicleServicePoint_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 0;
		faction = "BIS_TK";
	};
	class TK_GUE_WarfareBVehicleServicePoint_EP1: TK_GUE_WarfareBVehicleServicePoint_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 2;
		faction = "BIS_TK_GUE";
	};
	class Base_WarfareBBarrier10xTall;
	class Base_WarfareBBarrier10x;
	class Base_WarfareBBarrier5x;
	class US_WarfareBBarrier5x_EP1: Base_WarfareBBarrier5x
	{
		expansion = 1;
		scope = 1;
		faction = "BIS_US";
		model = "\ca\Misc_E\WF\WF_hesco_5x_ep1.p3d";
	};
	class US_WarfareBBarrier10x_EP1: Base_WarfareBBarrier10x
	{
		expansion = 1;
		scope = 1;
		faction = "BIS_US";
		model = "\ca\Misc_E\WF\WF_hesco_10x_ep1.p3d";
	};
	class US_WarfareBBarrier10xTall_EP1: Base_WarfareBBarrier10xTall
	{
		expansion = 1;
		scope = 1;
		faction = "BIS_US";
		model = "\ca\Misc_E\WF\WF_hesco_big_10x_ep1.p3d";
	};
	class TK_WarfareBBarrier5x_EP1: Base_WarfareBBarrier5x
	{
		expansion = 1;
		scope = 1;
		faction = "BIS_TK";
		model = "\ca\Misc_E\WF\WF_hesco_5x_ep1.p3d";
	};
	class TK_WarfareBBarrier10x_EP1: Base_WarfareBBarrier10x
	{
		expansion = 1;
		scope = 1;
		faction = "BIS_TK";
		model = "\ca\Misc_E\WF\WF_hesco_10x_ep1.p3d";
	};
	class TK_WarfareBBarrier10xTall_EP1: Base_WarfareBBarrier10xTall
	{
		expansion = 1;
		scope = 1;
		faction = "BIS_TK";
		model = "\ca\Misc_E\WF\WF_hesco_big_10x_ep1.p3d";
	};
	class TK_GUE_WarfareBBarrier5x_EP1: Base_WarfareBBarrier5x
	{
		expansion = 1;
		scope = 1;
		faction = "BIS_TK_GUE";
		model = "\ca\Misc_E\WF\WF_hesco_5x_ep1.p3d";
	};
	class TK_GUE_WarfareBBarrier10x_EP1: Base_WarfareBBarrier10x
	{
		expansion = 1;
		scope = 1;
		faction = "BIS_TK_GUE";
		model = "\ca\Misc_E\WF\WF_hesco_10x_ep1.p3d";
	};
	class TK_GUE_WarfareBBarrier10xTall_EP1: Base_WarfareBBarrier10xTall
	{
		expansion = 1;
		scope = 1;
		faction = "BIS_TK_GUE";
		model = "\ca\Misc_E\WF\WF_hesco_big_10x_ep1.p3d";
	};
	class Warfare_HQ_base_unfolded;
	class BRDM2_HQ_TK_GUE_unfolded_Base_EP1: Warfare_HQ_base_unfolded
	{
		expansion = 1;
		scope = 2;
		model = "\CA\Misc_E\WF\WF_HQ_BRDM2_EP1.p3d";
		displayName = "$STR_EP1_DN_WF_HQ_unfolded";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		GhostPreview = "BRDM2_HQ_TK_GUE_unfoldedPreview_EP1";
		vehicleClass = "Military_GUE_EP1";
	};
	class BRDM2_HQ_TK_GUE_unfolded_EP1: BRDM2_HQ_TK_GUE_unfolded_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 2;
		faction = "BIS_TK_GUE";
	};
	class BRDM2_HQ_TK_GUE_unfoldedPreview_EP1: BRDM2_HQ_TK_GUE_unfolded_EP1
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_HQ_BRDM2_select";
	};
	class M1130_HQ_unfolded_Base_EP1: Warfare_HQ_base_unfolded
	{
		expansion = 1;
		scope = 2;
		model = "\CA\Misc_E\WF\WF_HQ_M1130_CV_EP1.p3d";
		displayName = "$STR_EP1_DN_WF_HQ_unfolded";
		GhostPreview = "M1130_HQ_unfoldedPreview_EP1";
		vehicleClass = "Military_US_EP1";
	};
	class M1130_HQ_unfolded_EP1: M1130_HQ_unfolded_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 1;
		faction = "BIS_US";
	};
	class M1130_HQ_unfoldedPreview_EP1: M1130_HQ_unfolded_EP1
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc_E\WF\WF_HQ_M1130_CV_select_EP1.p3d";
	};
	class BMP2_HQ_TK_unfolded_Base_EP1: Warfare_HQ_base_unfolded
	{
		expansion = 1;
		scope = 2;
		model = "\CA\Misc_E\WF\WF_HQ_BMP2_EP1.p3d";
		displayName = "$STR_EP1_DN_WF_HQ_unfolded";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		GhostPreview = "BMP2_HQ_TK_unfoldedPreview_EP1";
		vehicleClass = "Military_TKA_EP1";
	};
	class BMP2_HQ_TK_unfolded_EP1: BMP2_HQ_TK_unfolded_Base_EP1
	{
		scope = 2;
		vehicleClass = "Military_With_side";
		side = 0;
		faction = "BIS_TK";
	};
	class BMP2_HQ_TK_unfoldedPreview_EP1: BMP2_HQ_TK_unfolded_EP1
	{
		scope = 1;
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\ca\Misc3\Data\select_GREEN_CA.paa"};
		model = "\CA\Misc3\WF\WF_HQ_BMP2_select.p3d";
	};
};
//};
