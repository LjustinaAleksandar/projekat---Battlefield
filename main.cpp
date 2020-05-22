#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
#include "battle.hpp"
#include "secondary.hpp"
#include "soldier.hpp"

ostream& operator<<(ostream& izlaz, const Secondary& sec1)
{
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
ostream& operator<<(ostream& izlaz, const Plane& plane1)
{
    izlaz<<"Plane - ispis"<<endl;
    std::cout << plane1.name << std::endl;
    std::cout << plane1.seats << std::endl;
    std::cout << plane1.skin << std::endl;
    switch (plane1.type)
    {
    case 0:
        std::cout << "attack" << std::endl;
        break;
    case 1:
        std::cout << "bomber" << std::endl;
        break;
    case 2:
        std::cout << "fighter" << std::endl;
        break;
    case 3:
        std::cout << "heavy" << std::endl;
        break;
    }
    switch (plane1.weapon1)
    {
    case 0:
        std::cout << "rockets" << std::endl;
        break;
    case 1:
        std::cout << "machinegun" << std::endl;
        break;
    case 2:
        std::cout << "infantryBombs" << std::endl;
        break;
    case 3:
        std::cout << "tankBombs" << std::endl;
        break;
    }
    switch (plane1.weapon2)
    {
    case 0:
        std::cout << "rockets" << std::endl;
        break;
    case 1:
        std::cout << "machinegun" << std::endl;
        break;
    case 2:
        std::cout << "infantryBombs" << std::endl;
        break;
    case 3:
        std::cout << "tankBombs" << std::endl;
        break;
    }
    return izlaz;
}
ostream& operator<<(ostream& izlaz, const Tank& tank1)
{
    izlaz<<"Tank - ispis"<<endl;
    std::cout << tank1.name << std::endl;
    std::cout << tank1.seats << std::endl;
    std::cout << tank1.skin << std::endl;
    std::cout << tank1.smoke << std::endl;
    switch (tank1.type)
    {
    case 0:
        std::cout << "landship" << std::endl;
        break;
    case 1:
        std::cout << "AttackTank" << std::endl;
        break;
    case 2:
        std::cout << "LightTank" << std::endl;
        break;
    case 3:
        std::cout << "PutilovGraford" << std::endl;
        break;
    case 4:
        std::cout << "ArtyTruck" << std::endl;
        break;
    case 5:
        std::cout << "HeavyTank" << std::endl;
        break;
    }
    switch (tank1.weapon1)
    {
    case 0:
        std::cout << "antiInfantry" << std::endl;
        break;
    case 1:
        std::cout << "antiTank" << std::endl;
        break;
    case 2:
        std::cout << "antiAir" << std::endl;
        break;
    case 3:
        std::cout << "mortar" << std::endl;
        break;
    }
    switch (tank1.weapon2)
    {
    case 0:
        std::cout << "antiInfantry" << std::endl;
        break;
    case 1:
        std::cout << "antiTank" << std::endl;
        break;
    case 2:
        std::cout << "antiAir" << std::endl;
        break;
    case 3:
        std::cout << "mortar" << std::endl;
        break;
    }
    return izlaz;
}

int createWeapon1(){
        int v1; int a; string n; int t; int mag; float m; string s; bool b; int f; int r; int d;
        cout<<"What is the name of your weapon?"<<endl;
        cin>>n;
        cout<<"How big of a magazine does your weapon have? (please pick a reasonable number)"<<endl;
        do{
            cin>>mag;
        }while(mag<101 && mag>0);
        cout<<"How much ammo does your weapon have available? (please pick a reasonable amount)"<<endl;
        do{
            cin>>a;
        }while(a<5*mag && a>4*mag);
        cout<<"What is the type of your weapon?(you can choose 0-trench, 1-storm, 2-factory, 3-lowWeight, 4-sniper)\n-trench has better hipfire\n-storm has lower kickback\n-factory has lower recoil\n-lowWeight gains stability faster\n-sniper has a high magnification scope"<<endl;
        cin>>t;
        cout<<"What magnification does your weapon have?(magnification can me min 1x and max 2x)"<<endl;
        do{
            cin>>m;
        }while(m<2.1 && mag>0.9);
        cout<<"skins are coming soon"<<endl;
        s="";
        cout<<"Would you like your weapon to have bayonet?"<<endl;
        cin>>b;
        cout<<"In what firemod would you like to shoot?(0-auto, 1-burst, 2-single)"<<endl;
        cin>>f;
        cout<<"What is the rate of fire of your weapon?"<<endl;
        do{
            cin>>r;
        }while((mag<r*10 || mag>r*10) && r<1000);
        if(mag<10){
            d=rand()%10+90;
        }else if(mag<31 && mag>9){
            d=rand()%10+rand()%10+25;
        }else{d=rand()%5;}
        v1=(d*mag*a)/1000+rand()%10;
        Primary prim1(a,  n,  t,  mag,  m,  s,  b,  f,  r,  d);
        return v1;
}

int main ()
{
    /*Secondary sec1(36, "nagant_revolver", 6, 2.0, "rasputin", 150, 46);
    Primary prim1(104, "fedorov_avtomat", trench, 25, 2.0, "kerensky", true, automatic, 450, 21);
    Soldier soldier1("ryan", "private", frag, prim1, sec1);
    //soldier1.writeSoldier();*/

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

    /*soldier1.writeSoldierCount();
    Squad squad1("crnci");
    squad1.enlistSoldier(&soldier1);
    squad1.writeSquad();*/

    cout<<"Welcome to Battlefield one"<<endl;
    cout<<"In this game you are able to simulate battles from world war 1"<<endl;
    cout<<"First thing you will need to do is to create a weapon"<<endl;
    createWeapon1();
    cout<<"if you want to continue press 1, if you want to create another weapon press 2"<<endl;
    int x;

    return 0;
}
// funkcionalnost bi bila da korisnik pravi svog vojnika, squad i armiju i da se to upisuje u neki fajl, a možda i da daj korisnik rekreira neke bitke
