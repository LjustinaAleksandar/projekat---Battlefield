#ifndef SUPPORT_H_INCLUDED
#define SUPPORT_H_INCLUDED
#include <iostream>
#include "primary.h"
#include "secondary.h"

using namespace std;
class Support{
    private:
        string name;
        string armyRank;
        Primary weapon1;
        Secondary weapon2;
        string gadget1;
        string gadget2;
        string grenade;
        bool engineer;
        bool gunner;
};

#endif // SUPPORT_H_INCLUDED
