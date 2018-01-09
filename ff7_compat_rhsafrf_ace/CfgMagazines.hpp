class CfgMagazines {
    class ACE_10Rnd_338_300gr_HPBT_Mag;
    class CLASS(5Rnd_338_300gr_HPBT_Mag): ACE_10Rnd_338_300gr_HPBT_Mag {
        author = AUTHOR;
        ammo = "ACE_338_Ball";
        displayName = ".338 5Rnd Mag (300gr Sierra MatchKing HPBT)";
        descriptionShort = "Caliber: 8.6x70mm (300gr Sierra MatchKing HPBT)<br/>Rounds: 5";
        initSpeed = 800;
        count = 5;
        mass = 7;
    };

    class ACE_10Rnd_338_API526_Mag;
    class CLASS(5Rnd_338_API526_Mag): ACE_10Rnd_338_API526_Mag {
        author = AUTHOR;
        ammo = "ACE_338_Ball_API526";
        displayName = ".338 5Rnd Mag (API526)";
        descriptionShort = "Caliber: 8.6x70mm (API526)<br/>Rounds: 5";
        initSpeed = 880;
        count = 5;
        mass = 8;
    };
};
