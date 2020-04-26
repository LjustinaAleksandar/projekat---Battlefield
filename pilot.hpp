#ifndef PILOT_HPP_INCLUDED
#define PILOT_HPP_INCLUDED
#include <iostream>
#include "primary.hpp"
#include "secondary.hpp"
#include "plane.hpp"

using namespace std;
class Pilot{
    private:
        string name;
        string armyRank;
        Plane plane1;
        Primary weapon1;
        Secondary weapon2;
        string gadget1;
        string gadget2;
};


#endif // PILOT_HPP_INCLUDED
