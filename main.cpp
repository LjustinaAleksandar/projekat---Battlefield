#include <iostream>

using namespace std;
enum FIREMOD {single, burst, automatic};
enum tankWPN {antiInfantry, antiTank, antiAir};
enum planeWPN {rockets, machinegun, infantryBombs, tankBombs};
enum countries {Serbia, France, Germany, UnitedKingdom, Russia, AustriaHungary, Turkey, Italy, USA, Canada, Australia};
class primary{
    private:
        char name;
        char type;
        int magSize;
        float magnification;
        char skin;
        bool bayonet;
        FIREMOD fMod;
        int ROF;
        int dmg;
        int ammo
};

class secondary{
    private:
        char name;
        int magSize;
        int ammo;
        int ROF;
        int dmg;
        float magnification;
        char skin;
};

class tank{
    private:
        char name;
        char type;
        int seats;
        tankWPN weapon1;
        tankWPN weapon2;
        bool smoke;
        char skin;
};

class plane{
    private:
        char name;
        char type;
        int seats;
        planeWPN weapon1;
        planeWPN weapon2;
        char skin;
};

class assault{
    private:
        primary weapon1;
        secondary weapon2;
        char gadget1;
        char gadget2;
        bool antiTank;
        bool antiInfantry;
};

class medic{
    private:
        primary weapon1;
        secondary weapon2;
        char gadget1;
        char gadget2;
        bool healer;
        bool combatMedic;
};

class support{
    private:
        primary weapon1;
        secondary weapon2;
        char gadget1;
        char gadget2;
        bool engineer;
        bool gunner;
};

class recon{
    private:
        primary weapon1;
        secondary weapon2;
        char gadget1;
        char gadget2;
        bool sniper;
        bool pathfinder;
};

class squad{
    private:
        char name;
        assault assault1;
        medic medic1;
        support support1;
        recon recon1;
};

class tanker{
    private:
        tank tank1;
        primary weapon1;
        secondary weapon2;
        char gadget1;
        char gadget2;
};

class pilot{
    private:
        plane;
        primary weapon1;
        secondary weapon2;
        char gadget1;
        char gadget2;
};

class army{
    private:
        countries country;
        squad squads;
        tanker tanks;
        pilot planes;
        int number;
};

class battle{
    private:
        char name;
        army attacker;
        army defender;
        int deaths;
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
