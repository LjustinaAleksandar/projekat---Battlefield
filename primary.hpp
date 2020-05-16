#ifndef PRIMARY_H_INCLUDED
#define PRIMARY_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;
enum FIREMOD {single, burst, automatic};
enum TYPE {trench, storm, factory, lowWeight, sniper};
class Primary{
    protected:
        int ammo;
        string name;
        TYPE type;
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
        type=trench;
        }
        Primary(int a, string n, TYPE t, int mag, float m, string s, bool b, FIREMOD f, int r, int d){
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
        Primary(const Primary& prim1){
        ammo=prim1.ammo;
        bayonet=prim1.bayonet;
        dmg=prim1.dmg;
        fMod=prim1.fMod;
        magnification=prim1.magnification;
        magSize=prim1.magSize;
        name=prim1.name;
        ROF=prim1.ROF;
        skin=prim1.skin;
        type=prim1.type;
        }

        int getAMMO() const {return ammo;}
        string getNAME() const {return name;}
        TYPE getTYPE() const {return type;}
        int getMAGSIZE() const {return magSize;}
        float getMAGNIFICAATION() const {return magnification;}
        string getSKIN() const {return skin;}
        bool getBAYONET() const {return bayonet;}
        FIREMOD getFMOD() const {return fMod;}
        int getROF() const {return ROF;}
        int getDMG() const {return dmg;}

        void setAMMO(int a) {ammo=a;}
        void setNAME(string n) {name=n;}
        void setTYPE(TYPE t) {type=t;}
        void setMAGSIZE(int mag) {magSize=mag;}
        void setMAGNIFICAATION(float m) {magnification=m;}
        void setSKIN(string s) {skin=s;}
        void setBAYONET(bool b) {bayonet=b;}
        void setFMOD(FIREMOD f) {fMod=f;}
        void setROF(int r) {ROF=r;}
        void setDMG(int d) {dmg=d;}

        void ChangeFireMode(FIREMOD fm){
        fMod=fm;
        }

        void fire(int num)
        {
            int a;
            if(num<=magSize)
            {
                magSize=magSize-num;
                ammo=ammo-num;
            }
            else
            {
                a=magSize;
                magSize=magSize-num;
                Sleep(500);
                ammo=ammo-num;
                magSize=a;
            }
        }
        void writePrimary ()
    {
        std::cout << name << std::endl;
        std::cout << magSize << std::endl;
        std::cout << magnification << std::endl;
        std::cout << skin << std::endl;
        std::cout << ammo << std::endl;
        std::cout << ROF << std::endl;
        std::cout << dmg << std::endl;
        std::cout << type << std::endl;
        std::cout << bayonet << std::endl;
        std::cout << fMod << std::endl;
    }
};

#endif // PRIMARY_H_INCLUDED
