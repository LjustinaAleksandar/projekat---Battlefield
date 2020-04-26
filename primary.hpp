#ifndef PRIMARY_H_INCLUDED
#define PRIMARY_H_INCLUDED
#include <iostream>

using namespace std;
enum FIREMOD {single, burst, automatic};
class Primary{
    protected:
        int ammo;
        string name;
        string type;
        int magSize;
        float magnification;
        string skin;
        bool bayonet;
        FIREMOD fMod;
        int ROF;
        int dmg;
    public:
        Primary(){
        ammo=0;
        bayonet=false;
        dmg=0;
        fMod=single;
        magnification=1.0;
        magSize=1;
        name="";
        ROF=1;
        skin="";
        type="";
        }
        Primary(int a, string n, string t, int mag, float m, string s, bool b, FIREMOD f, int r, int d){
        ammo=a;
        bayonet=b;
        dmg=d;
        fMod=f;
        magnification=m;
        magSize=mag;
        name=n;
        ROF=r;
        skin=s;
        type=t;
        }
};

#endif // PRIMARY_H_INCLUDED
