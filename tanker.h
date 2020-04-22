#ifndef TANKER_H_INCLUDED
#define TANKER_H_INCLUDED
#include <iostream>
#include "primary.h"
#include "secondary.h"
#include "tank.h"

using namespace std;
class Tanker{
    private:
        string name;
        string armyRank;
        Tank tank1;
        Primary weapon1;
        Secondary weapon2;
        string gadget1;
        string gadget2;
        string grenade;
};

#endif // TANKER_H_INCLUDED
