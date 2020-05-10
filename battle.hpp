#ifndef BATTLE_HPP_INCLUDED
#define BATTLE_HPP_INCLUDED
#include <iostream>
#include "army.hpp"

class Battle{
    private:
        string name;
        Army attacker;
        Army defender;
        int deaths;
};

#endif // BATTLE_HPP_INCLUDED
