#ifndef ASSAULT_H_INCLUDED
#define ASSAULT_H_INCLUDED
#include <iostream>
#include "primary.h"
#include "secondary.h"

using namespace std;
class Assault{
    private:
        string name;
        string armyRank;
        Primary weapon1;
        Secondary weapon2;
        string gadget1;
        string gadget2;
        string grenade;
        bool antiTank;
        bool antiInfantry;
};

#endif // ASSAULT_H_INCLUDED
