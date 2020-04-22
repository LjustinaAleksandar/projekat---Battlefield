#ifndef SQUAD_H_INCLUDED
#define SQUAD_H_INCLUDED
#include <iostream>
#include "assault.h"
#include "medic.h"
#include "support.h"
#include "recon.h"

using namespace std;
class Squad{
    private:
        string name;
        Assault assault1;
        Medic medic1;
        Support support1;
        Recon recon1;
};

#endif // SQUAD_H_INCLUDED
