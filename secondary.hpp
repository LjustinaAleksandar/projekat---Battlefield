#ifndef SECONDARY_HPP_INCLUDED
#define SECONDARY_HPP_INCLUDED
#include <iostream>

using namespace std;
class Secondary{
    protected:
        string name;
        int magSize;
        int ammo;
        int ROF;
        int dmg;
        float magnification;
        string skin;
    public:
        Secondary(){
        ammo=0;
        dmg=0;
        magnification=1.0;
        magSize=1;
        name="";
        ROF=1;
        skin="";
        }
        Secondary(int a, string n, int mag, float m, string s, int r, int d){
        ammo=a;
        dmg=d;
        magnification=m;
        magSize=mag;
        name=n;
        ROF=r;
        skin=s;
        }
};


#endif // SECONDARY_HPP_INCLUDED
