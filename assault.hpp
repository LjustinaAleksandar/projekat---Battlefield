#ifndef ASSAULT_HPP_INCLUDED
#define ASSAULT_HPP_INCLUDED
#include <iostream>
#include "soilder.hpp"

using namespace std;
class Assault: public Soilder{
    private:
        string gadget1;
        string gadget2;
        bool antiTank;
        bool antiInfantry;
    public:
        Assault(string nam, string rnk, GRENADE grn, const Primary &prim1, const Secondary &sec1, string g1, string g2, bool AT, bool AI): Soilder(nam, rnk, grn, &prim1, &sec1){
            gadget1=g1;
            gadget2=g2;
            antiTank=AT;
            antiInfantry=AI;
        }
};

#endif // ASSAULT_HPP_INCLUDED
