#ifndef MEDIC_H_INCLUDED
#define MEDIC_H_INCLUDED
#include <iostream>
#include "primary.h"
#include "secondary.h"

using namespace std;
class Medic{
    private:
        string name;
        string armyRank;
        Primary weapon1;
        Secondary weapon2;
        string gadget1;
        string gadget2;
        string grenade;
        bool healer;
        bool combatMedic;
};

#endif // MEDIC_H_INCLUDED
