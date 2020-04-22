#ifndef PRIMARY_H_INCLUDED
#define PRIMARY_H_INCLUDED
#include <iostream>

using namespace std;
enum FIREMOD {single, burst, automatic};
class Primary{
    private:
        string name;
        string type;
        int magSize;
        float magnification;
        string skin;
        bool bayonet;
        FIREMOD fMod;
        int ROF;
        int dmg;
        int ammo
};

#endif // PRIMARY_H_INCLUDED
