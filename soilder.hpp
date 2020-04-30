#ifndef SOILDER_HPP_INCLUDED
#define SOILDER_HPP_INCLUDED
#include <iostream>
#include "primary.hpp"
#include "secondary.hpp"

using namespace std;
enum GRENADE{frag,gas,impact,incendinary,smoke,mini,lightAT,improvised};
class Soilder{
    protected:
        string name;
        string armyRank;
        Primary weapon1;
        Secondary weapon2;
        GRENADE grenade;
    public:
        Soilder(): weapon1(0, "", "", 1, 1.0, "", false, single, 1, 1), weapon2(0, "", 1, 1.0, "", 1, 1){
        name="";
        armyRank="";
        grenade=frag;
        }
        Soilder(string nam, string rnk, GRENADE grn, const Primary &prim1):
        {}
};


#endif // SOILDER_HPP_INCLUDED
