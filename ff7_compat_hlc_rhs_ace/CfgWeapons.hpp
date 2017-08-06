class CfgWeapons
{
    // Vanilla
    class Rifle_Base_F;

    class mk20_base_F: Rifle_Base_F
    {
        magazines[] +=
        {
            _HLC_556STANAG_MAGS
        };
    };

    class SDAR_base_F;
    class arifle_SDAR_F: SDAR_base_F
    {
        magazines[] +=
        {
            _HLC_556STANAG_MAGS
        };
    };

    class Tavor_base_F: Rifle_Base_F
    {
        magazines[] +=
        {
            _HLC_556STANAG_MAGS
        };
    };

    class arifle_SPAR_01_base_F: Rifle_Base_F
    {
        magazines[] +=
        {
            _HLC_556STANAG_MAGS
        };
    };

    class arifle_SPAR_02_base_F: Rifle_Base_F
    {
        magazines[] +=
        {
            _HLC_556STANAG_MAGS,
            _HLC_556NATO_DRUMS
        };
    };

    class arifle_SPAR_03_base_F: Rifle_Base_F
    {
        magazines[] +=
        {
            _HLC_762M14_MAGS
        };
    };

    class Rifle_Long_Base_F;
    class LMG_03_base_F: Rifle_Long_Base_F
    {
        magazines[] +=
        {
            _HLC_556NATO_BELTS
        };
    };

    class DMR_03_base_F;
    class srifle_DMR_03_F: DMR_03_base_F
    {
        magazines[] +=
        {
            _HLC_762M14_MAGS
        };
    };

    class DMR_06_base_F;
    class srifle_DMR_06_camo_F: DMR_06_base_F
    {
        magazines[] +=
        {
            _HLC_762M14_MAGS
        };
    };

    class EBR_base_F: Rifle_Long_Base_F
    {
        magazines[] +=
        {
            _HLC_762M14_MAGS
        };
    };


    // RHS: USAF
    class LMG_Mk200_F;
    class rhs_weap_M249_base: LMG_Mk200_F
    {
        magazines[] +=
        {
            _HLC_556NATO_BELTS,
            _HLC_556STANAG_MAGS
        };
    };

    class rhs_weap_m240_base: rhs_weap_M249_base
    {
        magazines[] +=
        {
            _RHS_762NATO_BELTS,
            _HLC_762NATO_BELTS
        };
    };

    class rhs_weap_saw_base;
    class rhs_weap_lmg_minimipara: rhs_weap_saw_base
    {
        magazines[] +=
        {
            _HLC_556NATO_BELTS,
            _HLC_556STANAG_MAGS
        };
    };

    class arifle_MX_Base_F;
    class rhs_weap_m4_Base: arifle_MX_Base_F
    {
        magazines[] +=
        {
            _HLC_556STANAG_MAGS
        };
    };

    class rhs_weap_m4a1;
    class rhs_weap_m27iar: rhs_weap_m4a1
    {
        magazines[] +=
        {
            _HLC_556STANAG_MAGS,
            _HLC_556NATO_DRUMS
        };
    };

    class srifle_EBR_F;
    class rhs_weap_m14ebrri: srifle_EBR_F
    {
        magazines[] +=
        {
            _HLC_762M14_MAGS
        };
    };

    class rhs_weap_sr25: rhs_weap_m14ebrri
    {
        magazines[] +=
        {
            _RHS_762M14_MAGS,
            _BI_762M14_MAGS,
            _ACE_762M14_MAGS,
            _HLC_762M14_MAGS
        };
    };

    class rhs_weap_XM2010_Base_F: Rifle_Base_F
    {
        magazines[] +=
        {
            _HLC_300WM_MAGS
        };
    };


    // HLC | NIArms
    class hlc_saw_base;
    class hlc_lmg_minimipara: hlc_saw_base
    {
        magazines[] =
        {
            _HLC_556NATO_BELTS,
            _BI_556NATO_BELTS,
            _RHS_556NATO_BELTS,
            _FF7_556NATO_BELTS,
            _HLC_556STANAG_MAGS,
            _BI_556STANAG_MAGS,
            _RHS_556STANAG_MAGS,
            _ACE_556STANAG_MAGS
        };
    };

    class hlc_lmg_minimi_railed;
    class hlc_lmg_mk46: hlc_lmg_minimi_railed
    {
        magazines[] +=
        {
            _RHS_556NATO_BELTS,
            _FF7_556NATO_BELTS
        };
    };

    class hlc_lmg_mk48: hlc_saw_base
    {
        magazines[] +=
        {
            _RHS_762NATO_BELTS
        };
    };

    class hlc_ar15_base: Rifle_Base_F
    {
        magazines[] +=
        {
            _RHS_556STANAG_MAGS,
            _ACE_556STANAG_MAGS
        };
    };

    class hlc_M14_base: Rifle_Base_F
    {
        magazines[] +=
        {
            _RHS_762M14_MAGS,
            _ACE_762M14_MAGS
        };
    };

    class hlc_AWC_base: Rifle_Base_F
    {
        magazines[] +=
        {
            _RHS_300WM_MAGS
        };
    };

    class hlc_acr_base;
    class hlc_acr556_base: hlc_acr_base
    {
        magazines[] +=
        {
            _RHS_556STANAG_MAGS,
            _ACE_556STANAG_MAGS
        };
    };
};
