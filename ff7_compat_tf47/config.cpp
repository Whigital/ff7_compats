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
			"tf47_launchers"
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

#include "CfgWeapons.hpp"
