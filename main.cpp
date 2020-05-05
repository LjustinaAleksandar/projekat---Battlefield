#include <iostream>
#include <fstream>
#include "battle.hpp"
#include "secondary.hpp"

using namespace std;


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
