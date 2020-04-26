#ifndef SUPPORT_HPP_INCLUDED
#define SUPPORT_HPP_INCLUDED
#include <iostream>
#include "soilder.hpp"

using namespace std;
class Support: public Soilder{
    private:
        string gadget1;
        string gadget2;
        bool engineer;
        bool gunner;
    public:
        Support(): Soilder("", "", frag){
            gadget1="";
            gadget2="";
            engineer=false;
            gunner=false;
        }

};


#endif // SUPPORT_HPP_INCLUDED
