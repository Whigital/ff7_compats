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
            "rhs_c_weapons"
        };
        author = AUTHOR;
        authors[] =
        {
            "Whigital"
        };
        magazines[] = {};
        ammo[] = {};
    };
};

#include "CfgMagazines.hpp"
