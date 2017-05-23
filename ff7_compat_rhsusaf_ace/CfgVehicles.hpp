class CfgVehicles
{
    class Items_base_F;
    class ACE_Explosives_Place: Items_base_F
    {
        class EventHandlers;

        class ACE_Actions
        {
            class ACE_MainActions
            {
                class ACE_SetTrigger;
                class ACE_PickUp;
            };
        };
    };

    class ACE_Explosives_Place_rhsusf_m112_DemoCharge: ACE_Explosives_Place
    {
        displayName = "RHS Demo Charge";
        model = "\rhsusf\addons\rhsusf_weapons\explosives\M112x1";
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "[-0.07,0,0.055]";
            };
        };
    };

    class ACE_Explosives_Place_rhsusf_m112x4_DemoCharge: ACE_Explosives_Place
    {
        displayName = "RHS Demo Charge (x4)";
        model = "\rhsusf\addons\rhsusf_weapons\explosives\M112x4";
        class ACE_Actions: ACE_Actions
        {
            class ACE_MainActions: ACE_MainActions
            {
                position = "[-0.07,0,0.055]";
            };
        };
    };
};
