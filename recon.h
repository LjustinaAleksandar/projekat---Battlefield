#ifndef RECON_H_INCLUDED
#define RECON_H_INCLUDED
#include <iostream>
#include "primary.h"
#include "secondary.h"

using namespace std;
class Recon{
    private:
        string name;
        string armyRank;
        Primary weapon1;
        Secondary weapon2;
        string gadget1;
        string gadget2;
        string grenade;
        bool sniper;
        bool pathfinder;
};

#endif // RECON_H_INCLUDED
