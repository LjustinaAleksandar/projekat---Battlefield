#ifndef MEDIC_HPP_INCLUDED
#define MEDIC_HPP_INCLUDED
#include <iostream>
#include "primary.hpp"
#include "secondary.hpp"

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


#endif // MEDIC_HPP_INCLUDED
