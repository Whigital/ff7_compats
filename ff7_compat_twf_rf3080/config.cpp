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
            "tfw_radios_rf3080"
        };
        author = AUTHOR;
        authors[] = {
            "Djzonk",
            "Whigital"
        };
    };
};

#include "CfgWeapons.hpp"
