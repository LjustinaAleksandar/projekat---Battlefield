#ifndef ARMY_H_INCLUDED
#define ARMY_H_INCLUDED
#include <iostream>
#include "squad.h"
#include "tanker.h"
#include "pilot.h"

using namespace std;
enum COUNTRIES {Serbia, France, Germany, UnitedKingdom, Russia, AustriaHungary, Turkey, Italy, USA, Canada, Australia};
class Army{
    private:
        COUNTRIES country;
        Squad squads;
        Tanker tanks;
        Pilot planes;
        int number;
};

#endif // ARMY_H_INCLUDED
