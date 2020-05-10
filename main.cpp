#include <iostream>
#include <fstream>
using namespace std;
#include "battle.hpp"
#include "secondary.hpp"
#include "soilder.hpp"

ostream& operator<<( const Plane& plane1){
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
                }}
int Soilder::soilderCount=0;

int main ()
{
    Secondary o1(36, "nagant_revolver", 6, 2.0, "rasputin", 150, 46);

    string nasFajl = "secondary1.txt";

    cout<<"Unesite tekst koji hocete da upisete u fajl:"<<endl;


    string ulaz;
    getline(cin,ulaz);
    o1.pisiTxt(nasFajl);

    cout<<"\tU fajlu pise: "<<endl;
    o1.citajTxt(nasFajl);
    cout<<endl<<endl;

    string recenica="Ovo cemo dodati u poslednji red fajla...";
    o1.pisiTxt(nasFajl, 'a');
    cout<<"\tU fajlu posle dodavanja pise: "<<endl;
    o1.citajTxt(nasFajl);


    return 0;
}
 // funkcionalnost bi bila da korisnik pravi svog vojnika, squad i armiju i da se to upisuje u neki fajl, a možda i da daj korisnik rekreira neke bitke
