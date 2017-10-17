//RDF Container
class CfgPatches
{
	class RDF_Container
	{
		units[]={
		"RDF_Container_Del",
		"RDF_Container_Ammo",
		"RDF_Container_Medic"
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
  class plp_ct_ContPlainBlack; //Container


	class RDF_Container_Del : plp_ct_ContPlainBlack
	{
		scope=2;
		scopeCurator = 2;
		displayName="RDF Container del";
		//model="\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		_generalMacro="RDF_Container_del";
		editorCategory = "RDF_Milsim";
		editorSubcategory = "Container_supplyes";
		hiddenselections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenselectionstextures[]=
		{
			"\RDF_Container\Data\RDF_Del.paa",

			"\RDF_Container\Data\plp_ct_Cont_Display_On.paa"
		};

		//icon = "iconCrateWpns";
    transportmaxmagazines = 9999;
    transportmaxweapons   = 9999;
    transportmaxbackpacks = 9999;
		maximumLoad = 100000;

		class TransportWeapons
		{
			class _xx_hlc_lmg_M60E4 //LMG
			{
				weapon="hlc_lmg_M60E4";
				count=10;
			};
			class _xx_rhs_weap_hk416d145 //HK416 
			{
				weapon="rhs_weap_hk416d145";
				count=30;
			};
			class _xx_rhs_weap_hk416d145_m320 //HK416 M320
			{
				weapon="rhs_weap_hk416d145_m320";
				count=20;
			};
			class _xx_rhsusf_weap_glock17g4 //Glock 17
			{
				weapon="rhsusf_weap_glock17g4";
				count=20;
			};
			class _xx_rhs_weap_M136 //AT-4 HEAT
			{
				weapon="rhs_weap_M136";
				count=20;
			};
			class _xx_ACE_VMH3 //mine detektor
			{
				name="ACE_VMH3";
				count=20;
			};
			class _xx_rhs_weap_maaws //Dysekanonen
			{
				weapon="rhs_weap_maaws";
				count=10;
			};
		};

		class TransportItems
		{
			class _xx_RDF_M11_U //uniform
			{
				name="RDF_M11_U";
				count=70;
			};
			class _xx_RDF_v_sd_3 //vest nomal
			{
				name="RDF_v_sd_3";
				count=30;
			};
			class _xx_RDF_V_lsv_3 //vest LSV
			{
				name="RDF_V_lsv_3";
				count=20;
			};
			class _xx_RDF_V_gf_3 //vest GF/NK
			{
				name="RDF_V_gf_3";
				count=20;
			};
			class _xx_RDF_M11_Hjelm_06 //hjelm
			{
				name="RDF_M11_Hjelm_06";
				count=70;
			};
			class _xx_rhsusf_ANPVS_14 //Natkamp
			{
				name="rhsusf_ANPVS_14";
				count=70;
			};
			class _xx_ACE_DefusalKit //Defusalkit
			{
				name="ACE_DefusalKit";
				count=20;
			};
			class _xx_rhs_googles_black //skyde briller
			{
				name="rhs_googles_black";
				count=70;
			};
			class _xx_Laserdesignator //Laserdesignator
			{
				name="Laserdesignator";
				count=20;
			};
			class _xx_Binocular //kittkert
			{
				name="Binocular";
				count=20;
			};
			class _xx_ACE_IR_Strobe_Item //IR Strobe
			{
				name="ACE_IR_Strobe_Item";
				count=70;
			};
			class _xx_RH_c79_2d // Elcan til HK416
			{
				name="RH_c79_2d";
				count=60;
			};
			class _xx_RH_compm4s //Aimpoint 
			{
				name="RH_compm4s";
				count=70;
			};
			class _xx_rhs_optic_maaws //dyse sighte 
			{
				name="rhs_optic_maaws";
				count=10;
			};
			class _xx_rhsusf_acc_anpeq15A //Laser til våben
			{
				name="rhsusf_acc_anpeq15A";
				count=70;
			};
			class _xx_tf_anprc152 //Radio
			{
				name="tf_anprc152";
				count=70;
			};
			class _xx_ItemMap //Kort
			{
				name="ItemMap";
				count=70;
			};
			class _xx_RDF_Beret //Beret
			{
				name="RDF_Beret";
				count=60;
			};
			class _xx_RDF_stab //Beret Stab
			{
				name="RDF_stab";
				count=10;
			};
			class _xx_ItemWatch //ur
			{
				name="ItemWatch";
				count=70;
			};
			class _xx_ItemGPS //GPS
			{
				name="ItemGPS";
				count=20;
			};
			class _xx_ACE_EarPlugs //ørepropper
			{
				name="ACE_EarPlugs";
				count=100;
			};
			class _xx_ACE_CableTie //CableTie
			{
				name="ACE_CableTie";
				count=30;
			};
			class _xx_ACE_Vector //Vector
			{
				name="ACE_Vector";
				count=20;
			};
			class _xx_ItemCompass //kompas
			{
				name="ItemCompass";
				count=70;
			};
			class _xx_ACE_Flashlight_XL50 //Lygte til kort
			{
				name="ACE_Flashlight_XL50";
				count=70;
			};
			class _xx_RH_m145 //Elcan til LSV
			{
				name="RH_m145";
				count=10;
			};
		};
		class TransportBackpacks
		{
			class _xx_RHS_M2_Tripod_Bag //TMG støtteben
			{
				backpack = "RHS_M2_Tripod_Bag";
				count = 3;
			};
			class _xx_RHS_M2_Gun_Bag //TMG
			{
				backpack = "RHS_M2_Gun_Bag";
				count = 3;
			};
			class _xx_B_Mortar_01_support_F //Mortar støtteben
			{
				backpack = "B_Mortar_01_support_F";
				count = 3;
			};
			class _xx_B_Mortar_01_weapon_F //Mortar løb
			{
				backpack = "B_Mortar_01_weapon_F";
				count = 3;
			};
			class _xx_RDF_M11_blade_d //longcom
			{
				backpack = "RDF_M11_blade_d";
				count = 20;
			};
			class _xx_rhsusf_falconii_mc //Kitback
			{
				backpack = "rhsusf_falconii_mc";
				count = 70;
			};
		};
		accuracy=1000;
	};

  class RDF_Container_Ammo : plp_ct_ContPlainBlack
  {
    scope=2;
    scopeCurator = 2;
    displayName="RDF Container Ammo";
    _generalMacro="RDF_Container_Ammo";
    editorCategory = "RDF_Milsim";
    editorSubcategory = "Container_supplyes";
		hiddenselections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenselectionstextures[]=
		{
			"\RDF_Container\Data\RDF_Del.paa",

			"\RDF_Container\Data\plp_ct_Cont_Display_On.paa"
		};
    //icon = "iconCrateWpns";
    transportmaxmagazines = 9999;
    transportmaxweapons   = 9999;
    transportmaxbackpacks = 9999;
    maximumLoad = 100000;

    class TransportMagazines
      {
			class _xx_rhs_mag_30Rnd_556x45_Mk318_Stanag //HK416 ammo
			{
				magazine="rhs_mag_30Rnd_556x45_Mk318_Stanag";
				count=500;
			};
			class _xx_hlc_100Rnd_762x51_B_M60E4 //M60E4 ammo
			{
				magazine="hlc_100Rnd_762x51_B_M60E4";
				count=100;
			};
			class _xx_rhs_mag_maaws_HEAT //dyse ammo
			{
				magazine="rhs_mag_maaws_HEAT";
				count=20;
			};
			class _xx_rhs_mag_maaws_HEDP //dyse ammo
			{
				magazine="rhs_mag_maaws_HEDP";
				count=20;
			};
			class _xx_rhs_mag_maaws_HE //dyse ammo
			{
				magazine="rhs_mag_maaws_HE";
				count=10;
			};
			class _xx_rhsusf_mag_17Rnd_9x19_JHP //Glock ammo
			{
				magazine="rhsusf_mag_17Rnd_9x19_JHP";
				count=50;
			};
			class _xx_HandGrenade //M67
			{
				magazine="HandGrenade";
				count=130;
			};
			class _xx_SmokeShell //hvid røg
			{
				magazine="SmokeShell";
				count=150;
			};
			class _xx_SmokeShellGreen //Grøn røg
			{
				magazine="SmokeShellGreen";
				count=90;
			};
			class _xx_rhs_mag_m18_red	//Rød røg
			{	magazine="rhs_mag_m18_red";
				count=90;
			};
			class _xx_ACE_M84 //flashbang
			{
				magazine="ACE_M84";
				count=140;
			};
			class _xx_B_IR_Grenade //IR Grenade
			{
				magazine="B_IR_Grenade";
				count=70;
			};
			class _xx_Laserbatteries
			{
				magazine="Laserbatteries";
				count=20;
			};
			class _xx_1Rnd_HE_Grenade_shell //40 mike mike HE
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=100;
			};
			class _xx_rhs_mag_m713_Red		//40mm røg rød
			{
				magazine="rhs_mag_m713_Red";
				count=30;
			};
			class _xx_rhs_mag_m714_White		//40mm røg hvid
			{
				magazine="rhs_mag_m714_White";
				count=30;
			};
			class _xx_rhs_mag_m715_Green		//40mm røg grøn
			{
				magazine="rhs_mag_m715_Green";
				count=30;
			};
      };

    class TransportWeapons
      {

      };

    class TransportBackpacks
      {

      };
    accuracy=1000;
  };

    class RDF_Container_Medic : plp_ct_ContPlainBlack
  	{
  		scope=2;
  		scopeCurator = 2;
  		displayName="RDF Container Medic";
  		_generalMacro="RDF_Container_Medic";
  		editorCategory = "RDF_Milsim";
  		editorSubcategory = "Container_supplyes";
			hiddenselections[]=
			{
				"Camo",
				"Camo1"
			};
			hiddenselectionstextures[]=
			{
				"\RDF_Container\Data\RDF_Del.paa",

				"\RDF_Container\Data\plp_ct_Cont_Display_On.paa"
			};

  		//icon = "iconCrateWpns";
      transportmaxmagazines = 9999;
      transportmaxweapons   = 9999;
      transportmaxbackpacks = 9999;
  		maximumLoad = 100000;

      class TransportMagazines
  		{
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=700;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=700;
			};
			class _xx_ACE_salineIV_250
			{
				name="ACE_salineIV_250";
				count=40;
			};
			class _xx_ACE_salineIV_500
			{
				name="ACE_salineIV_500";
				count=150;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=140;
			};
			class _xx_ACE_personalAidKit
			{
				name="ACE_personalAidKit";
				count=70;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=140;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=300;
			};
			class _xx_ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=100;
			};
      };

  		class TransportWeapons
  		{

  		};

      class TransportBackpacks
      {
			class _xx_RDF_M11_Kitbag_M
			{
				backpack = "RDF_M11_Kitbag_M";
				count = 30;
			};
      };
  		accuracy=1000;
    };
};
