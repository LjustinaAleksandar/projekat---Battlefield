#ifndef MEDIC_HPP_INCLUDED
#define MEDIC_HPP_INCLUDED
#include <iostream>
#include "soilder.hpp"

class Medic: public Soilder{
    private:
        string gadget1;
        string gadget2;
        bool healer;
        bool combatMedic;

    public:
        Medic(string nam, string rnk, GRENADE grn, const Primary prim1, const Secondary sec1, string g1, string g2, bool AT, bool AI): Soilder(nam, rnk, grn, prim1, sec1){
            gadget1=g1;
            gadget2=g2;
            healer=AT;
            combatMedic=AI;
        }
        virtual void writeSoilder(){
            Soilder::writeSoilder();
            std::cout << "gadget 1:"<< name << std::endl;
            std::cout << "gadget 2:"<< armyRank << std::endl;
            if(healer)cout<<"I can heal my comrades faster"<<endl;
            if(combatMedic)cout<<"I can heal myself and run faster"<<endl;
        }
        virtual void infoMedic(){
            Soilder::writeSoilder();
            std::cout << "gadget 1:"<< name << std::endl;
            std::cout << "gadget 2:"<< armyRank << std::endl;
            std::cout << "specializations: ";
            if(healer)cout<<"healer";
            if(combatMedic)cout<<"combatMedic"<< std::endl;
        }
};


#endif // MEDIC_HPP_INCLUDED
