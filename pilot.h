#ifndef PILOT_H_INCLUDED
#define PILOT_H_INCLUDED
#include <iostream>
#include "primary.h"
#include "secondary.h"
#include "plane.h"

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

#endif // PILOT_H_INCLUDED
