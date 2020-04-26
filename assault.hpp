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
        Assault(): Soilder("", "", frag){
            gadget1="";
            gadget2="";
            antiTank=false;
            antiInfantry=false;
        }
};

#endif // ASSAULT_HPP_INCLUDED
