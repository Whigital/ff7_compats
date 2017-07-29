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
            "ff7_compat_rhsusaf_ace",
            "hlcweapons_core",
            "hlcweapons_ar15",
            "hlcweapons_m14",
            "hlcweapons_SAW",
            "hlcweapons_FHAWCovert",
            "hlcweapons_acr"
        };
        author = AUTHOR;
        authors[] =
        {
            "csathdfw",
            "Whigital"
        };
        magazines[] = {};
        ammo[] = {};
    };
};

#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
