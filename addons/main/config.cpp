#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "Redd_Marder_1A5"
        };
        author = "johnb43";
    };
};

#include "CfgVehicles.hpp"
