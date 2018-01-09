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
            "ace_smallarms",
            "ace_ballistics"
        };
        author = AUTHOR;
        authors[] = {
            "csathdfw",
            "Whigital"
        };
        magazines[] = {};
        ammo[] = {};
    };
};

#include "CfgMagazines.hpp"
