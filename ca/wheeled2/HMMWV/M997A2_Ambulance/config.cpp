////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.65
//Fri Oct 31 06:07:11 2014 : Source 'file' date Fri Oct 31 06:07:11 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class wheeled2 : HMMWV\M997A2_Ambulance\config.bin{
class CfgPatches
{
	class CAWheeled2_HMMWV_Ambulance
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAWheeled2_HMMWV_BASE"};
	};
};
class CfgVehicles
{
	class HMMWV_base;
	class HMMWV_Ambulance: HMMWV_base
	{
		scope = 0;
		accuracy = 0.3;
		model = "\ca\wheeled2\HMMWV\M997A2_Ambulance\M997A2_Ambulance";
		displayname = "$STR_DN_HUMER_AMB";
		vehicleClass = "Support";
		picture = "\Ca\wheeled2\data\UI\Picture_M997A2_CA.paa";
		Icon = "\Ca\wheeled2\data\UI\Icon_M997A2_CA.paa";
		mapSize = 5;
		transportSoldier = 5;
		cargoAction[] = {"HMMWV_Cargo01","BMP2_Cargo04"};
		attendant = 1;
		hasGunner = 0;
		class Turrets{};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\wheeled\hmmwv\data\hmmwv_body.rvmat","ca\wheeled\hmmwv\data\hmmwv_body_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_body_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_details.rvmat","ca\wheeled\hmmwv\data\hmmwv_details_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_details_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_parts_1_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\hmmwv\data\hmmwv_clocks.rvmat","ca\wheeled\data\hmmwv_clocks_destruct.rvmat","ca\wheeled2\hmmwv\M997A2_Ambulance\Data\M997A2_Ambulance_3.rvmat","ca\wheeled2\hmmwv\M997A2_Ambulance\Data\M997A2_Ambulance_3_Half_D.rvmat","ca\wheeled2\hmmwv\M997A2_Ambulance\Data\M997A2_Ambulance_3_Full_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat","ca\wheeled\hmmwv\data\hmmwv_glass_in_Half_D.rvmat"};
		};
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\ca\wheeled\hmmwv\data\hmmwv_body_co.paa","\ca\wheeled\hmmwv\data\hmmwv_parts_1_ca.paa"};
		class Library
		{
			libTextDesc = "$STR_LIB_HMMWV_Ambulance";
		};
	};
};
//};
