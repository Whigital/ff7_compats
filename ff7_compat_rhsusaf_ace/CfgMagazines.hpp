class CfgMagazines
{
    class ACE_30Rnd_556x45_Stanag_M995_AP_mag;
    class CLASS(200rnd_556x45_M995_AP_SAW): ACE_30Rnd_556x45_Stanag_M995_AP_mag
    {
        author = AUTHOR;
        displayName = "5.56mm 200Rnd Mag (M995 AP)";
        descriptionShort = "Caliber: 5.56x45mm NATO (M995 AP)<br />Rounds: 200";
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_F_ca.paa";
        count = 200;
        mass = 50;
        ACE_isBelt = 1;
    };

    class ACE_30Rnd_556x45_Stanag_Mk318_mag;
    class CLASS(200rnd_556x45_Mk318_SAW): ACE_30Rnd_556x45_Stanag_Mk318_mag
    {
        author = AUTHOR;
        displayName = "5.56mm 200Rnd Mag (Mk318)";
        descriptionShort = "Caliber: 5.56x45mm NATO (Mk318)<br />Rounds: 200";
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_F_ca.paa";
        count = 200;
        mass = 50;
        ACE_isBelt = 1;
    };

    /*
    class CA_Magazine;
    class rhsusf_m112_mag: CA_Magazine
    {
        ace_explosives_DelayTime = 1;
        ace_explosives_Placeable = 1;
        ace_explosives_SetupObject = "ACE_Explosives_Place_rhsusf_m112_DemoCharge";
        useAction = 0;
        type = "2*      256";
        allowedSlots[] = {901,701};

        class ACE_Triggers
        {
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};

            class Timer
            {
                FuseTime = 0.5;
            };

            class Command
            {
                FuseTime = 0.5;
            };

            class MK16_Transmitter: Command {};
            class DeadmanSwitch: Command {};
        };
    };

    class rhsusf_m112x4_mag: CA_Magazine
    {
        ace_explosives_DelayTime = 1;
        ace_explosives_Placeable = 1;
        ace_explosives_SetupObject = "ACE_Explosives_Place_rhsusf_m112x4_DemoCharge";
        useAction = 0;
        type = "2*      256";
        allowedSlots[] = {901};
        count = 1;

        class ACE_Triggers
        {
            SupportedTriggers[] = {"Timer", "Command", "MK16_Transmitter", "DeadmanSwitch"};

            class Timer
            {
                FuseTime = 0.5;
            };

            class Command
            {
                FuseTime = 0.5;
            };

            class MK16_Transmitter: Command {};
            class DeadmanSwitch: Command {};
        };
    };
    */
};
