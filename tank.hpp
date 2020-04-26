#ifndef TANK_HPP_INCLUDED
#define TANK_HPP_INCLUDED
#include <iostream>

using namespace std;
enum tankWPN {antiInfantry, antiTank, antiAir};
class Tank{
    private:
        string name;
        string type;
        int seats;
        tankWPN weapon1;
        tankWPN weapon2;
        bool smoke;
        string skin;
};


#endif // TANK_HPP_INCLUDED
