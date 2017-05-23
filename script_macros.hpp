#ifndef PREFIX
	#define PREFIX ff7
#endif

#define AUTHOR "FoxForce7"

#define QUOTE(var1) #var1
#define DOUBLES(var1,var2) ##var1##_##var2

#define ADDON DOUBLES(PREFIX,COMPONENT)
#define COMPONENT_NAME QUOTE(AUTHOR COMPONENT_BEAUTIFIED)

#define CLASS(var1) DOUBLES(PREFIX,var1)
#define QCLASS(var1) QUOTE(CLASS(var1))

#define ICONPATH data\icon
#define QUOTE(var) #var
#define QICON(icon) QUOTE(\PREFIX\COMPONENT\ICONPATH\##icon)

#define VSM_GOGGLES 	ACE_Overlay = "\z\ace\addons\goggles\textures\HUD\CombatGoggles.paa";\
						ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\CombatGogglesCracked.paa";\
						ACE_Resistance = 2;\
						ACE_Protection = 1;\
						ACE_Color[] = {0,0,0};\
						ACE_TintAmount = 24;\
						ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";\
						ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

#define VSM_GLASSES 	ACE_Overlay = "";\
						ACE_OverlayCracked = "\z\ace\addons\goggles\textures\HUD\Cracked.paa";\
						ACE_Resistance = 1;\
						ACE_Protection = 0;\
						ACE_Color[] = {0,0,0};\
						ACE_TintAmount = 16;\
						ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";\
						ACE_DustPath = "\z\ace\addons\goggles\textures\fx\dust\%1.paa";

#define VSM_PELTORS	ace_hearing_protection = 0.75;\
					ace_hearing_lowerVolume = 0.1;

#define VSM_SHEMAGH	ace_hearing_protection = 0.0;\
					ace_hearing_lowerVolume = 0.1;


// ---------- 556 STANAG 30Rnd----------

#define _BI_556STANAG_MAGS	"30Rnd_556x45_Stanag",\
							"30Rnd_556x45_Stanag_Tracer_Red",\
							"30Rnd_556x45_Stanag_Tracer_Green",\
							"30Rnd_556x45_Stanag_Tracer_Yellow",\
							"30Rnd_556x45_Stanag_green",\
							"30Rnd_556x45_Stanag_red"

#define _HLC_556STANAG_MAGS	"hlc_30rnd_556x45_EPR",\
							"hlc_30rnd_556x45_SOST",\
							"hlc_30rnd_556x45_SPR",\
							"hlc_30rnd_556x45_MDim",\
							"hlc_30rnd_556x45_TDim",\
							"hlc_50rnd_556x45_EPR",\
							"hlc_30rnd_556x45_S"

#define _RHS_556STANAG_MAGS	"rhs_mag_30Rnd_556x45_Mk318_Stanag",\
							"rhs_mag_30Rnd_556x45_Mk262_Stanag",\
							"rhs_mag_30Rnd_556x45_M855A1_Stanag",\
							"rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer",\
							"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",\
							"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green",\
							"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow",\
							"rhs_mag_30Rnd_556x45_M200_Stanag"

#define _ACE_556STANAG_MAGS	"ACE_30Rnd_556x45_Stanag_M995_AP_mag",\
							"ACE_30Rnd_556x45_Stanag_Mk262_mag",\
							"ACE_30Rnd_556x45_Stanag_Mk318_mag",\
							"ACE_30Rnd_556x45_Stanag_Tracer_Dim"


// ---------- 556 Belts ----------

#define _BI_556NATO_BELTS	"200Rnd_556x45_Box_F",\
							"200Rnd_556x45_Box_Red_F",\
							"200Rnd_556x45_Box_Tracer_F",\
							"200Rnd_556x45_Box_Tracer_Red_F"

#define _HLC_556NATO_BELTS	"hlc_200rnd_556x45_M_SAW",\
							"hlc_200rnd_556x45_B_SAW",\
							"hlc_200rnd_556x45_T_SAW",\
							"hlc_200rnd_556x45_Mdim_SAW"

#define _RHS_556NATO_BELTS	"rhsusf_100Rnd_556x45_soft_pouch",\
							"rhsusf_200Rnd_556x45_soft_pouch",\
							"rhsusf_100Rnd_556x45_M200_soft_pouch",\
							"rhs_200rnd_556x45_M_SAW",\
							"rhs_200rnd_556x45_T_SAW",\
							"rhs_200rnd_556x45_B_SAW"

#define _FF7_556NATO_BELTS	"ff7_200rnd_556x45_M995_AP_SAW",\
							"ff7_200rnd_556x45_Mk318_SAW"

#define _BI_556NATO_DRUMS	"150Rnd_556x45_Drum_Mag_F",\
							"150Rnd_556x45_Drum_Mag_Tracer_F"


// ---------- 762 20Rnd ----------

#define _BI_762M14_MAGS		"20Rnd_762x51_Mag"

#define _HLC_762M14_MAGS	"hlc_20Rnd_762x51_B_M14",\
							"hlc_20Rnd_762x51_Barrier_M14",\
							"hlc_20Rnd_762x51_mk316_M14",\
							"hlc_20Rnd_762x51_T_M14",\
							"hlc_20Rnd_762x51_Mdim_M14",\
							"hlc_20Rnd_762x51_Tdim_M14",\
							"hlc_50Rnd_762x51_B_M14",\
							"hlc_20Rnd_762x51_S_M14"

#define _RHS_762M14_MAGS	"rhsusf_20Rnd_762x51_m118_special_Mag",\
							"rhsusf_20Rnd_762x51_m993_Mag",\
							"rhsusf_20Rnd_762x51_m62_Mag"

#define _ACE_762M14_MAGS	"ACE_20Rnd_762x51_Mag_Tracer",\
							"ACE_20Rnd_762x51_Mag_Tracer_Dim",\
							"ACE_20Rnd_762x51_Mag_SD",\
							"ACE_20Rnd_762x51_M118LR_Mag",\
							"ACE_20Rnd_762x51_Mk316_Mod_0_Mag",\
							"ACE_20Rnd_762x51_Mk319_Mod_0_Mag",\
							"ACE_20Rnd_762x51_M993_AP_Mag"


// ---------- 762 10Rnd ----------

#define _BI_762_MAGS		"10Rnd_762x51_Mag"

#define _RHS_762_MAGS		"rhsusf_10Rnd_762x51_m118_special_Mag",\
							"rhsusf_10Rnd_762x51_m993_Mag",\
							"rhsusf_10Rnd_762x51_m62_Mag"

#define _ACE_762_MAGS		"ACE_10Rnd_762x51_M118LR_Mag",\
							"ACE_10Rnd_762x51_Mk316_Mod_0_Mag",\
							"ACE_10Rnd_762x51_Mk319_Mod_0_Mag",\
							"ACE_10Rnd_762x51_M993_AP_Mag"


// ---------- 762 Belts ----------

#define _HLC_762NATO_BELTS	"hlc_100Rnd_762x51_M_M60E4",\
							"hlc_100Rnd_762x51_B_M60E4",\
							"hlc_100Rnd_762x51_Barrier_M60E4",\
							"hlc_100Rnd_762x51_T_M60E4",\
							"hlc_100Rnd_762x51_Mdim_M60E4"

#define _RHS_762NATO_BELTS	"rhsusf_50Rnd_762x51",\
							"rhsusf_50Rnd_762x51_m61_ap",\
							"rhsusf_50Rnd_762x51_m62_tracer",\
							"rhsusf_50Rnd_762x51_m80a1epr",\
							"rhsusf_50Rnd_762x51_m82_blank",\
							"rhsusf_100Rnd_762x51",\
							"rhsusf_100Rnd_762x51_m61_ap",\
							"rhsusf_100Rnd_762x51_m62_tracer",\
							"rhsusf_100Rnd_762x51_m80a1epr",\
							"rhsusf_100Rnd_762x51_m82_blank",\
							"rhsusf_50Rnd_762x51_m993",\
							"rhsusf_100Rnd_762x51_m993"


// ---------- 40mm ----------

#define _BI_40MM_M203_GRENADES	"1Rnd_HE_Grenade_shell",\
								"UGL_FlareWhite_F",\
								"UGL_FlareGreen_F",\
								"UGL_FlareRed_F",\
								"UGL_FlareYellow_F",\
								"UGL_FlareCIR_F",\
								"1Rnd_Smoke_Grenade_shell",\
								"1Rnd_SmokeRed_Grenade_shell",\
								"1Rnd_SmokeGreen_Grenade_shell",\
								"1Rnd_SmokeYellow_Grenade_shell",\
								"1Rnd_SmokePurple_Grenade_shell",\
								"1Rnd_SmokeBlue_Grenade_shell",\
								"1Rnd_SmokeOrange_Grenade_shell"

#define _RHS_40MM_M203_GRENADES	"rhs_mag_M441_HE",\
								"rhs_mag_M433_HEDP",\
								"rhs_mag_M781_Practice",\
								"rhs_mag_M397_HET",\
								"rhs_mag_M4009",\
								"rhs_mag_m576",\
								"rhs_mag_M585_white",\
								"rhs_mag_M661_green",\
								"rhs_mag_M662_red",\
								"rhs_mag_M713_red",\
								"rhs_mag_M714_white",\
								"rhs_mag_M715_green",\
								"rhs_mag_M716_yellow"


// ---------- 300 Win ----------

#define _RHS_300WM_MAGS	"rhsusf_5Rnd_300winmag_xm2010"

#define _HLC_300WM_MAGS	"hlc_5rnd_300WM_FMJ_AWM",\
						"hlc_5rnd_300WM_mk248_AWM",\
						"hlc_5rnd_300WM_BTSP_AWM",\
						"hlc_5rnd_300WM_AP_AWM",\
						"hlc_5rnd_300WM_SBT_AWM",\
						"hlc_5rnd_300WM_T_AWM"


// ---------- 338 Lapua ----------

#define _RHS_338LP_MAGS	"rhs_5Rnd_338lapua_t5000"

#define _FF7_338LP_MAGS	"ff7_5Rnd_338_300gr_HPBT_Mag",\
						"ff7_5Rnd_338_API526_Mag"
