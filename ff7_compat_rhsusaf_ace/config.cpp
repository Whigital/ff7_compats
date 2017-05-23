#include "script_component.hpp"
#include "..\script_macros.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        version = VERSION;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQ_VERSION;
        requiredAddons[] =
        {
            "ff7_compat_core",
            "rhsusf_c_weapons",
            "ff7_compat_rhsusaf",
            "ace_common",
            "ace_ballistics",
            "ace_explosives",
            "ace_compat_rhs_usf3"
        };
        author = AUTHOR;
        authors[] =
        {
            "Whigital"
        };
        magazines[] =
        {
            QCLASS(200rnd_556x45_M995_AP_SAW),
            QCLASS(200rnd_556x45_Mk318_SAW)
        };
        ammo[] = {};
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
