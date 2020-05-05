#ifndef SUPPORT_HPP_INCLUDED
#define SUPPORT_HPP_INCLUDED
#include <iostream>
#include "soilder.hpp"

using namespace std;
class Support: public Soilder{
    private:
        string gadget1;
        string gadget2;
        bool engineer;
        bool gunner;
    public:
        Support(string nam, string rnk, GRENADE grn, const Primary prim1, const Secondary sec1, string g1, string g2, bool AT, bool AI): Soilder(nam, rnk, grn, prim1, sec1){
            gadget1=g1;
            gadget2=g2;
            engineer=AT;
            gunner=AI;
        }

};


#endif // SUPPORT_HPP_INCLUDED
