#ifndef ARMY_HPP_INCLUDED
#define ARMY_HPP_INCLUDED
#include <iostream>
#include "squad.hpp"
#include "tanker.hpp"
#include "pilot.hpp"

enum COUNTRIES {Serbia, France, Germany, UnitedKingdom, Russia, AustriaHungary, Turkey, Italy, USA, Canada, Australia};
class Army{
    private:
        COUNTRIES country;
        Squad squads;
        Tanker tanks;
        Pilot planes;
        int number;
};

#endif // ARMY_HPP_INCLUDED
