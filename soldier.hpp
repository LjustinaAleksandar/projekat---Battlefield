#ifndef Soldier_HPP_INCLUDED
#define Soldier_HPP_INCLUDED
#include <iostream>
#include "primary.hpp"
#include "secondary.hpp"

enum GRENADE{frag,gas,impact,incendinary,smoke,mini,lightAT,improvised};
class Soldier{
    protected:
        string name;
        string armyRank;
        Primary weapon1;
        Secondary weapon2;
        GRENADE grenade;
        static int SoldierCount;
    public:
        Soldier(): weapon1(0, "", trench, 1, 1.0, "", false, single, 1, 1), weapon2(0, "", 1, 1.0, "", 1, 1){
        name="";
        armyRank="";
        grenade=frag;
        }
        Soldier(string nam, string rnk, GRENADE grn, const Primary &prim1, const Secondary &sec1): weapon1(prim1),weapon2(sec1)
        {
        name=nam;
        armyRank=rnk;
        grenade=grn;
        {SoldierCount++;}
        }
        string getNAME() const{return name;}
        Soldier(const Soldier& s1){
        name=s1.name;
        armyRank=s1.armyRank;
        weapon1=s1.weapon1;
        weapon2=s1.weapon2;
        grenade=s1.grenade;
        }
        void writeSoldierCount(){std::cout << SoldierCount <<std::endl;}

        ~Soldier(){
        SoldierCount--;
        }
        virtual void writeSoldier(){
        std::cout << "name:"<< name << std::endl;
        std::cout << "rank:"<< armyRank << std::endl;
        std::cout << "equiped grenade:"<< grenade << std::endl;
        weapon1.writePrimary();
        weapon2.writeSecondary();
        }
};
int Soldier::SoldierCount=0;

#endif // Soldier_HPP_INCLUDED
