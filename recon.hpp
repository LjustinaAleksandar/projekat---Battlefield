#ifndef RECON_HPP_INCLUDED
#define RECON_HPP_INCLUDED
#include <iostream>
#include "soldier.hpp"

class Recon: public Soldier{
    private:
        string gadget1;
        string gadget2;
        bool sniper;
        bool pathfinder;
    public:
        Recon(string nam, string rnk, GRENADE grn, const Primary prim1, const Secondary sec1, string g1, string g2, bool AT, bool AI): Soldier(nam, rnk, grn, prim1, sec1){
            gadget1=g1;
            gadget2=g2;
            sniper=AT;
            pathfinder=AI;
        }
        virtual void writeSoldier(){
            Soldier::writeSoldier();
            std::cout << "gadget 1:"<< name << std::endl;
            std::cout << "gadget 2:"<< armyRank << std::endl;
            if(sniper)cout<<"I have a scope and I can hit targets that are very far"<<endl;
            if(pathfinder)cout<<"I can put down a spawn beacon for my comrades"<<endl;
        }
        virtual void infoRecon(){
            Soldier::writeSoldier();
            std::cout << "gadget 1:"<< name << std::endl;
            std::cout << "gadget 2:"<< armyRank << std::endl;
            std::cout << "specializations: ";
            if(sniper)cout<<"sniper";
            if(pathfinder)cout<<"pathfinder"<< std::endl;
        }
};


#endif // RECON_HPP_INCLUDED
