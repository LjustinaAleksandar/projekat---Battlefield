#ifndef SOILDER_HPP_INCLUDED
#define SOILDER_HPP_INCLUDED
#include <iostream>
#include "primary.hpp"
#include "secondary.hpp"

enum GRENADE{frag,gas,impact,incendinary,smoke,mini,lightAT,improvised};
class Soilder{
    protected:
        string name;
        string armyRank;
        Primary weapon1;
        Secondary weapon2;
        GRENADE grenade;
        static int soilderCount;
    public:
        Soilder(): weapon1(0, "", trench, 1, 1.0, "", false, single, 1, 1), weapon2(0, "", 1, 1.0, "", 1, 1){
        name="";
        armyRank="";
        grenade=frag;
        }
        Soilder(string nam, string rnk, GRENADE grn, const Primary &prim1, const Secondary &sec1): weapon1(prim1),weapon2(sec1)
        {
        name=nam;
        armyRank=rnk;
        grenade=grn;
        {soilderCount++;}
        }
        Soilder(const Soilder& s1){
        name=s1.name;
        armyRank=s1.armyRank;
        weapon1=s1.weapon1;
        weapon2=s1.weapon2;
        grenade=s1.grenade;
        }
        void writeSoilderCount(){std::cout << soilderCount <<std::endl;}
};
int Soilder::soilderCount=0;

#endif // SOILDER_HPP_INCLUDED
