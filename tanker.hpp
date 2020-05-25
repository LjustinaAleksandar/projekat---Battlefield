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
    public:
        Tanker(string nam, string rnk, string g1, string g2, const Primary &prim1, const Secondary &sec1, const Tank &tnk1): weapon1(prim1),weapon2(sec1), tank1(tnk1)
        {
        name=nam;
        armyRank=rnk;
        gadget1=g1;
        gadget2=g2;
        }
        Tanker(const Tanker& tnkr1):tank1(tank1){
        name=tnkr1.name;
        armyRank=tnkr1.armyRank;
        tank1=tnkr1.tank1;
        weapon1=tnkr1.weapon1;
        weapon2=tnkr1.weapon2;
        gadget1=tnkr1.gadget1;
        gadget2=tnkr1.gadget2;
        }
};


#endif // TANKER_HPP_INCLUDED
