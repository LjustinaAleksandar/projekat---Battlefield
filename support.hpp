#ifndef SUPPORT_HPP_INCLUDED
#define SUPPORT_HPP_INCLUDED
#include <iostream>
#include "soldier.hpp"

class Support: public Soldier{
    private:
        string gadget1;
        string gadget2;
        bool engineer;
        bool gunner;
    public:
        Support(string nam, string rnk, GRENADE grn, const Primary prim1, const Secondary sec1, string g1, string g2, bool AT, bool AI): Soldier(nam, rnk, grn, prim1, sec1){
            gadget1=g1;
            gadget2=g2;
            engineer=AT;
            gunner=AI;
        }
        virtual void writeSoldier(){
            Soldier::writeSoldier();
            std::cout << "gadget 1:"<< name << std::endl;
            std::cout << "gadget 2:"<< armyRank << std::endl;
            if(engineer)cout<<"I can repair vehicles"<<endl;
            if(gunner)cout<<"I have a fast-fireing machine gun to supress enemies"<<endl;
        }
        virtual void infoSupport(){
            Soldier::writeSoldier();
            std::cout << "gadget 1:"<< name << std::endl;
            std::cout << "gadget 2:"<< armyRank << std::endl;
            std::cout << "specializations: ";
            if(engineer)cout<<"engineer";
            if(gunner)cout<<"gunner"<< std::endl;
        }

};


#endif // SUPPORT_HPP_INCLUDED
