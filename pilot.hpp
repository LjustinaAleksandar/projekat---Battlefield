#ifndef PILOT_HPP_INCLUDED
#define PILOT_HPP_INCLUDED
#include <iostream>
#include "primary.hpp"
#include "secondary.hpp"
#include "plane.hpp"

class Pilot{
    private:
        string name;
        string armyRank;
        Plane plane1;
        Primary weapon1;
        Secondary weapon2;
        string gadget1;
        string gadget2;
    public:
        Pilot(string nam, string rnk, string g1, string g2, const Primary &prim1, const Secondary &sec1, const Plane &plan1): weapon1(prim1),weapon2(sec1), plane1(plan1)
        {
        name=nam;
        armyRank=rnk;
        gadget1=g1;
        gadget2=g2;
        }
        Pilot(const Pilot& plt1):plane1(plane1){
        name=plt1.name;
        armyRank=plt1.armyRank;
        gadget1=plt1.gadget1;
        gadget2=plt1.gadget2;
        plane1=plt1.plane1;
        weapon1=plt1.weapon1;
        weapon2=plt1.weapon2;
        }
};


#endif // PILOT_HPP_INCLUDED
