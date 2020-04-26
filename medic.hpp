#ifndef MEDIC_HPP_INCLUDED
#define MEDIC_HPP_INCLUDED
#include <iostream>
#include "soilder.hpp"

using namespace std;
class Medic: public Soilder{
    private:
        string gadget1;
        string gadget2;
        bool healer;
        bool combatMedic;
    public:
        Medic(): Soilder("", "", frag){
            gadget1="";
            gadget2="";
            healer=false;
            combatMedic=false;
        }
};


#endif // MEDIC_HPP_INCLUDED
