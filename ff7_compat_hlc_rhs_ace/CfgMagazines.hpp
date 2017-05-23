class CfgMagazines
{
    class 30Rnd_556x45_Stanag;
    class hlc_200rnd_556x45_M_SAW: 30Rnd_556x45_Stanag
    {
        ACE_isBelt = 1;
    };

    class hlc_100Rnd_762x51_B_M60E4: 30Rnd_556x45_Stanag
    {
        ACE_isBelt = 1;
    };

    class hlc_50Rnd_792x57_B_MG42: 30Rnd_556x45_Stanag
    {
        ACE_isBelt = 1;
    };

    class hlc_30rnd_556x45_EPR;
    class hlc_50rnd_556x45_EPR: hlc_30rnd_556x45_EPR
    {
        mass = 20;
    };
};
