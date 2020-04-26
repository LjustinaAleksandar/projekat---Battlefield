#ifndef RECON_HPP_INCLUDED
#define RECON_HPP_INCLUDED
#include <iostream>
#include "primary.hpp"
#include "secondary.hpp"

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


#endif // RECON_HPP_INCLUDED
