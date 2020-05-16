#include <iostream>
#include <fstream>
using namespace std;
#include "battle.hpp"
#include "secondary.hpp"
#include "soilder.hpp"

ostream& operator<<(ostream& izlaz, const Secondary& sec1){
        izlaz<<"Secondary - ispis"<<endl;
        std::cout << sec1.name << std::endl;
        std::cout << sec1.magSize << std::endl;
        std::cout << sec1.magnification << std::endl;
        std::cout << sec1.skin << std::endl;
        std::cout << sec1.ammo << std::endl;
        std::cout << sec1.ROF << std::endl;
        std::cout << sec1.dmg << std::endl;
        return izlaz;
}
ostream& operator<<(ostream& izlaz, const Plane& plane1){
            izlaz<<"Plane - ispis"<<endl;
            std::cout << plane1.name << std::endl;
            std::cout << plane1.seats << std::endl;
            std::cout << plane1.skin << std::endl;
            switch (plane1.type){
                case 0: std::cout << "attack" << std::endl;
                        break;
                case 1: std::cout << "bomber" << std::endl;
                        break;
                case 2: std::cout << "fighter" << std::endl;
                        break;
                case 3: std::cout << "heavy" << std::endl;
                        break;
                }
            switch (plane1.weapon1){
                case 0: std::cout << "rockets" << std::endl;
                        break;
                case 1: std::cout << "machinegun" << std::endl;
                        break;
                case 2: std::cout << "infantryBombs" << std::endl;
                        break;
                case 3: std::cout << "tankBombs" << std::endl;
                        break;
                }
            switch (plane1.weapon2){
                case 0: std::cout << "rockets" << std::endl;
                        break;
                case 1: std::cout << "machinegun" << std::endl;
                        break;
                case 2: std::cout << "infantryBombs" << std::endl;
                        break;
                case 3: std::cout << "tankBombs" << std::endl;
                        break;
                }
                return izlaz;}
ostream& operator<<(ostream& izlaz, const Tank& tank1){
            izlaz<<"Tank - ispis"<<endl;
            std::cout << tank1.name << std::endl;
            std::cout << tank1.seats << std::endl;
            std::cout << tank1.skin << std::endl;
            std::cout << tank1.smoke << std::endl;
            switch (tank1.type){
                case 0: std::cout << "landship" << std::endl;
                        break;
                case 1: std::cout << "AttackTank" << std::endl;
                        break;
                case 2: std::cout << "LightTank" << std::endl;
                        break;
                case 3: std::cout << "PutilovGraford" << std::endl;
                        break;
                case 4: std::cout << "ArtyTruck" << std::endl;
                        break;
                case 5: std::cout << "HeavyTank" << std::endl;
                        break;
                }
            switch (tank1.weapon1){
                case 0: std::cout << "antiInfantry" << std::endl;
                        break;
                case 1: std::cout << "antiTank" << std::endl;
                        break;
                case 2: std::cout << "antiAir" << std::endl;
                        break;
                case 3: std::cout << "mortar" << std::endl;
                        break;
                }
            switch (tank1.weapon2){
                case 0: std::cout << "antiInfantry" << std::endl;
                        break;
                case 1: std::cout << "antiTank" << std::endl;
                        break;
                case 2: std::cout << "antiAir" << std::endl;
                        break;
                case 3: std::cout << "mortar" << std::endl;
                        break;
                }
                return izlaz;}

int main ()
{
    Secondary sec1(36, "nagant_revolver", 6, 2.0, "rasputin", 150, 46);
    Primary prim1(104, "fedorov_avtomat", trench, 25, 2.0, "kerensky", true, automatic, 450, 21);
    Soilder soilder1("ryan", "private", frag, prim1, sec1);
    soilder1.writeSoilder();
    /*string nasFajl = "secondary1.txt";

    cout<<"Unesite tekst koji hocete da upisete u fajl:"<<endl;


    string ulaz;
    getline(cin,ulaz);
    sec1.pisiTxt(nasFajl);

    cout<<"\tU fajlu pise: "<<endl;
    sec1.citajTxt(nasFajl);
    cout<<endl<<endl;

    string recenica="Ovo cemo dodati u poslednji red fajla...";
    sec1.pisiTxt(nasFajl, 'a');
    cout<<"\tU fajlu posle dodavanja pise: "<<endl;
    sec1.citajTxt(nasFajl);*/

    soilder1.writeSoilderCount();
    return 0;
}
 // funkcionalnost bi bila da korisnik pravi svog vojnika, squad i armiju i da se to upisuje u neki fajl, a možda i da daj korisnik rekreira neke bitke
