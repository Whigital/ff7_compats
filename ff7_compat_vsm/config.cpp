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
			"VSM_HELMETS",
			"VSM_Shemagh_config",
			"ace_goggles",
			"VSM_AOR1_Config",
			"VSM_CSAT_OD_Config",
			"VSM_M81_Config",
			"VSM_Multicam_Config",
			"VSM_MulticamTropic_Config",
			"VSM_OCP_Config",
			"VSM_OGA_Config",
			"VSM_ProjectHonor_Config",
			"VSM_Scorpion_Config"
		};
		author = AUTHOR;
		authors[] =
		{
			"Whigital",
			"Bliss"
		};
		magazines[] = {};
		ammo[] = {};
	};
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgGlasses.hpp"
