#ifndef BATTLE_H_INCLUDED
#define BATTLE_H_INCLUDED
#include <iostream>
#include "army.h"

using namespace std;
class Battle{
    private:
        string name;
        Army attacker;
        Army defender;
        int deaths;
};

#endif // BATTLE_H_INCLUDED
