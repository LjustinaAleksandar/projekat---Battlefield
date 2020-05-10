#ifndef TANKER_HPP_INCLUDED
#define TANKER_HPP_INCLUDED
#include <iostream>
#include "primary.hpp"
#include "secondary.hpp"
#include "tank.hpp"

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


#endif // TANKER_HPP_INCLUDED
