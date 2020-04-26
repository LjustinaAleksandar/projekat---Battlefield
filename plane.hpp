#ifndef PLANE_HPP_INCLUDED
#define PLANE_HPP_INCLUDED
#include <iostream>

using namespace std;
enum planeWPN {rockets, machinegun, infantryBombs, tankBombs};
class Plane{
    private:
        string name;
        string type;
        int seats;
        planeWPN weapon1;
        planeWPN weapon2;
        string skin;
};


#endif // PLANE_HPP_INCLUDED
