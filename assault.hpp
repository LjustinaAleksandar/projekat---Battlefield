#ifndef ASSAULT_HPP_INCLUDED
#define ASSAULT_HPP_INCLUDED
#include <iostream>
#include "primary.hpp"
#include "secondary.hpp"

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

#endif // ASSAULT_HPP_INCLUDED
