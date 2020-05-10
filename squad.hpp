#ifndef SQUAD_HPP_INCLUDED
#define SQUAD_HPP_INCLUDED
#include <iostream>
#include "assault.hpp"
#include "medic.hpp"
#include "support.hpp"
#include "recon.hpp"

class Squad{
    private:
        string name;
        Assault assault1;
        Medic medic1;
        Support support1;
        Recon recon1;
};


#endif // SQUAD_HPP_INCLUDED
