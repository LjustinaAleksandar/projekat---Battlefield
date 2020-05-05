#ifndef SECONDARY_HPP_INCLUDED
#define SECONDARY_HPP_INCLUDED
#include <iostream>
#include <fstream>
#include <cstdlib>

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
        Secondary(const Secondary& sec1){
        ammo=sec1.ammo;
        dmg=sec1.dmg;
        magnification=sec1.magnification;
        magSize=sec1.magSize;
        name=sec1.name;
        ROF=sec1.ROF;
        skin=sec1.skin;
        }

        int getAMMO() const {return ammo;}
        string getNAME() const {return name;}
        int getMAGSIZE() const {return magSize;}
        float getMAGNIFICAATION() const {return magnification;}
        string getSKIN() const {return skin;}
        int getROF() const {return ROF;}
        int getDMG() const {return dmg;}

        void setAMMO(int a) {ammo=a;}
        void setNAME(string n) {name=n;}
        void setMAGSIZE(int mag) {magSize=mag;}
        void setMAGNIFICAATION(float m) {magnification=m;}
        void setSKIN(string s) {skin=s;}
        void setROF(int r) {ROF=r;}
        void setDMG(int d) {dmg=d;}

        void pisiTxt(string nazivFajla, char mode='a')
{
    ofstream fajl;

    if (mode=='a'){
        fajl.open (nazivFajla, ios_base::app);
    }
    else{
        fajl.open (nazivFajla);
    }

    fajl << name<<","<< magSize<<","<<ammo<<","<<ROF<<","<<dmg<<","<<magnification<<","<<skin << endl;

    fajl.close();

}

void citajTxt(string nazivFajla)
{
    string linija;
    ifstream fajl (nazivFajla);
    if (fajl.is_open())
    {
        while ( getline (fajl,linija) )
        {
            cout << linija << '\n';
        }
        fajl.close();
    }

    else
        cout << "Neuspesno otvoren fajl";

}
};


#endif // SECONDARY_HPP_INCLUDED
