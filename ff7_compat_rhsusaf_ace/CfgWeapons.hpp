class CfgWeapons {
    // Vanilla
    class mk20_base_F;
    class arifle_Mk20_F: mk20_base_F {
        magazines[] += {
            _RHS_556STANAG_MAGS
        };
    };

    class arifle_Mk20C_F: mk20_base_F {
        magazines[] += {
            _RHS_556STANAG_MAGS
        };
    };

    class arifle_Mk20_GL_F: mk20_base_F {
        magazines[] += {
            _RHS_556STANAG_MAGS
        };
    };

    class SDAR_base_F;
    class arifle_SDAR_F: SDAR_base_F {
        magazines[] += {
            _RHS_556STANAG_MAGS
        };
    };

    class Tavor_base_F;
    class arifle_TRG20_F: Tavor_base_F {
        magazines[] += {
            _RHS_556STANAG_MAGS
        };
    };

    class arifle_TRG21_F: Tavor_base_F {
        magazines[] += {
            _RHS_556STANAG_MAGS
        };
    };

    class arifle_TRG21_GL_F: arifle_TRG21_F {
        magazines[] += {
            _RHS_556STANAG_MAGS
        };
    };

    class Rifle_Base_F;
    class arifle_SPAR_01_base_F: Rifle_Base_F {
        magazines[] += {
            _RHS_556STANAG_MAGS
        };
    };

    class arifle_SPAR_02_base_F: Rifle_Base_F {
        magazines[] += {
            _RHS_556STANAG_MAGS,
            _ACE_556STANAG_MAGS
        };
    };

    class arifle_SPAR_03_base_F: Rifle_Base_F {
        magazines[] += {
            _RHS_762M14_MAGS
        };
    };

    class Rifle_Long_Base_F;
    class LMG_03_base_F: Rifle_Long_Base_F {
        magazines[] += {
            _FF7_556NATO_BELTS
        };
    };

    class DMR_03_base_F;
    class srifle_DMR_03_F: DMR_03_base_F {
        magazines[] += {
            _RHS_762M14_MAGS
        };
    };

    class DMR_06_base_F;
    class srifle_DMR_06_camo_F: DMR_06_base_F {
        magazines[] += {
            _RHS_762M14_MAGS
        };
    };

    class EBR_base_F;
    class srifle_EBR_F: EBR_base_F {
        magazines[] += {
            _RHS_762M14_MAGS
        };
    };


    // RHS: USAF
    class LMG_Mk200_F;
    class rhs_weap_M249_base: LMG_Mk200_F {
        magazines[] += {
            _FF7_556NATO_BELTS,
            _ACE_556STANAG_MAGS
        };
    };

    class rhs_weap_saw_base;
    class rhs_weap_lmg_minimipara: rhs_weap_saw_base {
        magazines[] += {
            _FF7_556NATO_BELTS,
            _ACE_556STANAG_MAGS
        };
    };

    class arifle_MX_Base_F;
    class rhs_weap_m4_Base: arifle_MX_Base_F {
        magazines[] += {
            _ACE_556STANAG_MAGS
        };
    };

    class rhs_weap_m4a1;
    class rhs_weap_m27iar: rhs_weap_m4a1 {
        magazines[] += {
            _ACE_556STANAG_MAGS
        };
    };

    class rhs_weap_m14ebrri: srifle_EBR_F {
        magazines[] += {
            _ACE_762M14_MAGS
        };
    };

    class rhs_weap_sr25: rhs_weap_m14ebrri {
        magazines[] += {
            _RHS_762M14_MAGS,
            _BI_762M14_MAGS,
            _ACE_762M14_MAGS
        };
    };

    class rhs_weap_XM2010_Base_F;
    class rhs_weap_m40a5: rhs_weap_XM2010_Base_F {
        magazines[] += {
            _ACE_762_MAGS
        };
    };
};
