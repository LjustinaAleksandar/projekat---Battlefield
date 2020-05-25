#ifndef ARMY_HPP_INCLUDED
#define ARMY_HPP_INCLUDED
#include <iostream>
#include "squad.hpp"
#include "tanker.hpp"
#include "pilot.hpp"

enum COUNTRIES {France, UnitedKingdom, Russia, Italy, USA, Germany, AustriaHungary, Turkey};
class Army{
    private:
        COUNTRIES country;
        Squad squads;
        Tanker tanks;
        Pilot planes;
    public:
        Army(COUNTRIES c, const Squad& squad1, const Tanker& tanker1, const Pilot& pilot1):squads(squad1),planes(pilot1),tanks(tanker1)
        {
        country=c;
        }
        COUNTRIES getCO() const {return country;}
};

#endif // ARMY_HPP_INCLUDED
