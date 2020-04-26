#ifndef RECON_HPP_INCLUDED
#define RECON_HPP_INCLUDED
#include <iostream>
#include "soilder.hpp"

using namespace std;
class Recon: public Soilder{
    private:
        string gadget1;
        string gadget2;
        bool sniper;
        bool pathfinder;
    public:
        Recon(): Soilder("", "", frag){
            gadget1="";
            gadget2="";
            sniper=false;
            pathfinder=false;
        }
};


#endif // RECON_HPP_INCLUDED
