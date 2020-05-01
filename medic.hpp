#ifndef MEDIC_HPP_INCLUDED
#define MEDIC_HPP_INCLUDED
#include <iostream>
#include "soilder.hpp"

using namespace std;
class Medic: public Soilder{
    private:
        string gadget1;
        string gadget2;
        bool healer;
        bool combatMedic;
    public:
        Medic(string nam, string rnk, GRENADE grn, const Primary &prim1, const Secondary &sec1, string g1, string g2, bool AT, bool AI): Soilder(nam, rnk, grn, &prim1, &sec1){
            gadget1=g1;
            gadget2=g2;
            healer=AT;
            combatMedic=AI;
        }
};


#endif // MEDIC_HPP_INCLUDED
