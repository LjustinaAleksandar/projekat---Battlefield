#ifndef ASSAULT_HPP_INCLUDED
#define ASSAULT_HPP_INCLUDED
#include <iostream>
#include "soilder.hpp"

class Assault: public Soilder{
    private:
        string gadget1;
        string gadget2;
        bool antiTank;
        bool antiInfantry;
    public:
        Assault(string nam, string rnk, GRENADE grn, const Primary &prim1, const Secondary &sec1, string g1, string g2, bool AT, bool AI): Soilder(nam, rnk, grn, prim1, sec1){
            gadget1=g1;
            gadget2=g2;
            antiTank=AT;
            antiInfantry=AI;
        }
        Assault(const Assault& a1){
        gadget1=a1.gadget1;
        gadget2=a1.gadget2;
        antiTank=a1.antiTank;
        antiInfantry=a1.antiInfantry;
        }

        void writeSoilder(){
            Soilder::writeSoilder();
            std::cout << "gadget 1:"<< name << std::endl;
            std::cout << "gadget 2:"<< armyRank << std::endl;
            if(antiTank)cout<<"I can destroy tanks"<<endl;
            if(antiInfantry)cout<<"I can kill a lot of enemy soldiers with my explosives"<<endl;
        }
        virtual void infoAssault(){
            Soilder::writeSoilder();
            std::cout << "gadget 1:"<< name << std::endl;
            std::cout << "gadget 2:"<< armyRank << std::endl;
            std::cout << "specializations: ";
            if(antiTank)cout<<"antiTank";
            if(antiInfantry)cout<<"antiInfantry"<< std::endl;
        }
};

#endif // ASSAULT_HPP_INCLUDED
