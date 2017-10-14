//RDF Container
class CfgPatches
{
	class RDF_Container
	{
		units[]={
			"RDF_Container_1"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F_Ammoboxes"
		};
	};
};

class CfgEditorCategories
{
	class RDF_Milsim // Category class, you point to it in editorCategory property
	{
		displayName = "1st. RDF"; // Name visible in the list
	};
};

class CfgEditorSubcategories
{
	class Container_supplyes // Category class, you point to it in editorSubcategory property
	{
		displayName = "Containers"; // Name visible in the list
	};
};

class CfgVehicles
{
  class thingX;
  class thing;
  class Cargo_base_F;
  class all;
  class Land_Cargo20_military_green_F; //Container


	class RDF_Container_1 : Land_Cargo20_military_green_F
	{
		scope=2;
		scopeCurator = 2;
		displayName="RDF Container 1";
		//model="\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		_generalMacro="RDF_Container_1";
		editorCategory = "RDF_Milsim";
		editorSubcategory = "Container_supplyes";
		/*hiddenselections[]=
		{
			"Camo"
		};
		hiddenselectionstextures[]=
		{
			"\RDF_Kasser\data\supply_rdf_gruppe_co.paa"
		};
    */
		//icon = "iconCrateWpns";
    transportmaxmagazines = 9999;
    transportmaxweapons   = 9999;
    transportmaxbackpacks = 9999;
		maximumLoad = 100000;
		class TransportMagazines
		{
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag
			{
				magazine="rhs_mag_30Rnd_556x45_Mk318_Stanag";
				count=68;
			};
			class _xx_rhs_200rnd_556x45_M_SAW
			{
				magazine="rhs_200rnd_556x45_M_SAW";
				count=12;
			};
			class _xx_rhs_mag_maaws_HEAT
			{
				magazine="rhs_mag_maaws_HEAT";
				count=8;
			};
			class _xx_rhs_mag_maaws_HEDP
			{
				magazine="rhs_mag_maaws_HEDP";
				count=8;
			};
			class _xx_rhs_mag_maaws_HE
			{
				magazine="rhs_mag_maaws_HE";
				count=8;
			};
			class _xx_rhsusf_mag_17Rnd_9x19_JHP
			{
				magazine="rhsusf_mag_17Rnd_9x19_JHP";
				count=8;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=8;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_rhs_mag_m18_red
			{	magazine="rhs_mag_m18_red";
				count=8;
			};
			class _xx_ACE_M84
			{
				magazine="ACE_M84";
				count=8;
			};
			class _xx_B_IR_Grenade
			{
				magazine="B_IR_Grenade";
				count=8;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=8;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=24;
			};
			class _xx_rhs_mag_m713_Red
			{
				magazine="rhs_mag_m713_Red";
				count=8;
			};


		};

		class TransportWeapons
		{
			class _xx_hlc_lmg_MG3_optic
			{
				weapon="rhs_weap_m249_pip_L_para";
				count=2;
			};
			class _xx_rhs_weap_m4a1_carryhandle_grip
			{
				weapon="rhs_weap_m4a1_carryhandle_grip";
				count=6;
			};
			class _xx_rhs_weap_m4a1_m320
			{
				weapon="rhs_weap_m4a1_m320";
				count=2;
			};
			class _xx_rhsusf_weap_glock17g4
			{
				weapon="rhsusf_weap_glock17g4";
				count=2;
			};
			class _xx_rhs_weap_M136
			{
				weapon="rhs_weap_M136";
				count=2;
			};
			class _xx_rhs_weap_maaws
			{
				weapon="rhs_weap_maaws";
				count=1;
			};
		};

		class TransportItems
		{
			class _xx_rhsusf_ANPVS_14
			{
				name="rhsusf_ANPVS_14";
				count=6;
			};
			class _xx_ACE_DefusalKit
			{
				name="ACE_DefusalKit";
				count=5;
			};
			class _xx_rhs_googles_black
			{
				name="rhs_googles_black";
				count=8;
			};
			class _xx_Laserdesignator
			{
				name="Laserdesignator";
				count=2;
			};
			class _xx_Binocular
			{
				name="Binocular";
				count=2;
			};
			class _xx_ACE_IR_Strobe_Item
			{
				name="ACE_IR_Strobe_Item";
				count=8;
			};
			class _xx_RH_c79_2d
			{
				name="RH_c79_2d";
				count=8;
			};
			class _xx_RH_compm4s
			{
				name="RH_compm4s";
				count=8;
			};
			class _xx_RH_anpvs10
			{
				name="RH_anpvs10";
				count=3;
			};
			class _xx_rhs_optic_maaws
			{
				name="rhs_optic_maaws";
				count=2;
			};
			class _xx_rhsusf_acc_anpeq15A
			{
				name="rhsusf_acc_anpeq15A";
				count=8;
			};
			class _xx_tf_anprc152
			{
				name="tf_anprc152";
				count=8;
			};
			class _xx_ItemMap
			{
				name="ItemMap";
				count=8;
			};
			class _xx_RDF_Beret
			{
				name="RDF_Beret";
				count=6;
			};
			class _xx_ItemWatch
			{
				name="ItemWatch";
				count=8;
			};
			class _xx_ItemGPS
			{
				name="ItemGPS";
				count=2;
			};
			class _xx_ACE_EarPlugs
			{
				name="ACE_EarPlugs";
				count=8;
			};
			class _xx_ACE_CableTie
			{
				name="ACE_CableTie";
				count=8;
			};
			class _xx_ACE_Vector
			{
				name="ACE_Vector";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ItemCompass
			{
				name="ItemCompass";
				count=8;
			};
			class _xx_ACE_Flashlight_XL50
			{
				name="ACE_Flashlight_XL50";
				count=8;
			};
			class _xx_RH_m145
			{
				name="RH_m145";
				count=2;
			};
		};
		class TransportBackpacks
		{
			class _xx_RHS_M2_Tripod_Bag
			{
				backpack = "RHS_M2_Tripod_Bag";
				count = 1;
			};
			class _xx_RHS_M2_Gun_Bag
			{
				backpack = "RHS_M2_Gun_Bag";
				count = 1;
			};
			class _xx_RDF_M11_Kitbag_M
			{
				backpack = "RDF_M11_Kitbag_M";
				count = 2;

			};

		};
		accuracy=1000;
	};
};
