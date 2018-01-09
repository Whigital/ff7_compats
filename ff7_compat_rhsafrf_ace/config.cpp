#include "script_component.hpp"
#include "..\script_macros.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        version = VERSION;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQ_VERSION;
        requiredAddons[] = {
            "ff7_compat_core",
            "rhs_c_weapons",
            "ff7_compat_rhsafrf",
            "ace_common",
            "ace_ballistics",
            "ace_compat_rhs_afrf3"
        };
        author = AUTHOR;
        authors[] = {
            "Whigital"
        };
        magazines[] = {
            QCLASS(5Rnd_338_300gr_HPBT_Mag),
            QCLASS(5Rnd_338_API526_Mag)
        };
        ammo[] = {};
    };
};

#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
