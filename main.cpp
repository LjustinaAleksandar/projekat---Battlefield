#include <iostream>
#include <fstream>
#include <math.h>
#include <stdlib.h>
using namespace std;
#include "battle.hpp"
#include "secondary.hpp"
#include "soldier.hpp"
COUNTRIES promeniATK(int a){
    switch(a)
    {
    case 0: return Germany;
    case 1: return AustriaHungary;
    case 2: return Turkey;
    }
}
COUNTRIES promeniDEF(int a){
    switch(a)
    {
    case 0: return France;
    case 1: return UnitedKingdom;
    case 2: return Russia;
    case 3: return Italy;
    case 4: return USA;
    }
}
planeWPN promeniPlaneWPN(int a){
    switch(a)
    {
    case 0: return rockets;
    case 1: return machinegun;
    case 2: return infantryBombs;
    case 3: return tankBombs;
    }
}
planeTYP promeniPlanekTYP(int a){
    switch(a)
    {
    case 0: return attack;
    case 1: return bomber;
    case 2: return fighter;
    case 3: return heavy;
    }
}
tankTYP promeniTankTYP(int a){
    switch(a)
    {
    case 0: return landship;
    case 1: return AttackTank;
    case 2: return LightTank;
    case 3: return PutilovGraford;
    case 4: return ArtyTruck;
    case 5: return HeavyTank;
    }
}
tankWPN promeniTankWPN(int a){
    switch(a)
    {
    case 0: return antiInfantry;
    case 1: return antiTank;
    case 2: return antiAir;
    case 3: return mortar;
    }
}
TYPE promeniUEnumtip(int a){
    switch(a)
    {
    case 0: return trench;
    case 1: return storm;
    case 2: return factory;
    case 3: return lowWeight;
    case 4: return sniper;

    }
}
FIREMOD promeniUENnumfiremod(int a){
    switch(a)
    {
    case 0: return single;
    case 1: return burst;
    case 2: return automatic;
    }
}
GRENADE promeniUEnumgrenade(int a){
    switch(a)
    {
    case 0: return frag;
    case 1: return gas;
    case 2: return impact;
    case 3: return incendinary;
    case 4: return smoke;
    case 5: return mini;
    case 6: return lightAT;
    case 7: return improvised;
    }
}
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
Plane createPlane()
{
        string n;
        string s;
        int seat;
        int t;
        int wpn1;
        int wpn2;
        cout<<"What is the name of your plane?"<<endl;
        cin>>n;
        cout<<"How many seats are in your plane?(World War 1 planes did not have more than 4 seats)"<<endl;
        do{cin>>seat;}while(seat<1 && seat>4);
        cout<<"What is the type of your tank?(you can choose 0-attack, 1-bomber, 2-fighter, 3-heavy)"<<endl;
        cin>>t;
        cout<<"skins are coming soon"<<endl;
        s="";
        cout<<"What primary weapon does your plane have?(0-rockets, 1-machinegun, 2-infantryBombs, 3-tankBombs)"<<endl;
        cin>>wpn1;
        cout<<"What secondary weapon does your plane have?(0-rockets, 1-machinegun, 2-infantryBombs, 3-tankBombs)"<<endl;
        cin>>wpn2;
        Plane plane1(n, s, seat, promeniPlanekTYP(t), promeniPlaneWPN(wpn1), promeniPlaneWPN(wpn2));
        return plane1;
}
Tank createTank()
{
        string n;
        string s;
        int seat;
        bool smk;
        int t;
        int wpn1;
        int wpn2;
        cout<<"What is the name of your tank?"<<endl;
        cin>>n;
        cout<<"How many seats are in your tank?(World War 1 tanks did not have more than 6 seats)"<<endl;
        do{cin>>seat;}while(seat<1 && seat>6);
        cout<<"What is the type of your tank?(you can choose 0-landship, 1-AttackTank, 2-LightTank, 3-PutilovGraford, 4-ArtyTruck, 5-HeavyTank)"<<endl;
        cin>>t;
        cout<<"skins are coming soon"<<endl;
        s="";
        cout<<"Would you like your tank to have deployable smoke?"<<endl;
        cin>>smk;
        cout<<"What primary weapon does your tank have?(0-antiInfantry, 1-antiTank, 2-antiAir, 3-mortar)"<<endl;
        cin>>wpn1;
        cout<<"What secondary weapon does your tank have?(0-antiInfantry, 1-antiTank, 2-antiAir, 3-mortar)"<<endl;
        cin>>wpn2;
        Tank tank1(n, s, seat, smk, promeniTankTYP(t), promeniTankWPN(wpn1), promeniTankWPN(wpn2));
        return tank1;
}
Primary createWeapon1()
{
        int a;
        string n;
        int t;
        int mag;
        float m;
        string s;
        bool b;
        int f;
        int r;
        int d;
        cout<<"What is the name of your weapon?"<<endl;
        cin>>n;
        cout<<"How big of a magazine does your weapon have? (please pick a reasonable number)"<<endl;
        do{
            cin>>mag;
        }while(mag<0 && m>101);
        cout<<"How much ammo does your weapon have available? (please pick a reasonable amount)"<<endl;
        do{
            cin>>a;
        }while(a<5*mag && a>4*mag);
        cout<<"What is the type of your weapon?(you can choose 0-trench, 1-storm, 2-factory, 3-lowWeight, 4-sniper)\n-trench has better hipfire\n-storm has lower kickback\n-factory has lower recoil\n-lowWeight gains stability faster\n-sniper has a high magnification scope"<<endl;
        cin>>t;
        cout<<"What magnification does your weapon have?(magnification can me min 1x and max 2x)"<<endl;
        do{
            cin>>m;
        }while(m>2.1 && mag<0.9);
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
        Primary prim1(a,  n,  promeniUEnumtip(t),  mag,  m,  s,  b,  promeniUENnumfiremod(f),  r,  d);
        prim1.pisiPrimary('a');
        return prim1;
}
Secondary createWeapon2()
{
        string n;
        int mag;
        int a;
        int r;
        float f;
        int d;
        string s;
        cout<<"What is the name of your weapon?"<<endl;
        cin>>n;
        cout<<"How big of a magazine does your weapon have? (please pick a reasonable number)"<<endl;
        do{
            cin>>mag;
        }while(mag<0 && mag>101);
        cout<<"How much ammo does your weapon have available? (please pick a reasonable amount)"<<endl;
        do{
            cin>>a;
        }while(a<5*mag && a>4*mag);
        cout<<"What magnification does your weapon have?(magnification can me min 1x and max 2x)"<<endl;
        do{
            cin>>f;
        }while(mag>2.1 && mag<0.9);
        cout<<"skins are coming soon"<<endl;
        s="";
        cout<<"What is the rate of fire of your weapon?"<<endl;
        do{
            cin>>r;
        }while((mag<r*10 || mag>r*10) && r<1000);
        if(mag<10){
            d=rand()%10+90;
        }else if(mag<31 && mag>9){
            d=rand()%10+rand()%10+25;
        }else{d=rand()%5;}
        Secondary sec1(a,n,mag,f,s,r,d);
        sec1.pisiSecondary('a');
        return sec1;
}
Soldier napraviVojnika(Primary prim,Secondary sec)
{
    string n;
    cout<<"Please enter your name: ";
    cin>>n;
    string arRank;
    cout<<"Enter your army rank: ";
    cin>>arRank;
    int gr;
    cout<<"Choose grenade: ";
    cin>>gr;
    Soldier sl(n,arRank,promeniUEnumgrenade(gr),prim,sec);
    return sl;
}
Pilot CreatePilot(Primary prim,Secondary sec, Plane plan)
{
    string n;
    string arRank;
    string g1;
    string g2;
    cout<<"Please enter your name: ";
    cin>>n;
    cout<<"Enter your army rank: ";
    cin>>arRank;
    cout<<"gadgets are coming soon";
    g1="";g2="";
    Pilot pl(n,arRank,g1,g2,prim,sec,plan);
    return pl;
}
Tanker CreateTanker(Primary prim,Secondary sec, Tank tnk)
{
    string n;
    string arRank;
    string g1;
    string g2;
    cout<<"Please enter your name: ";
    cin>>n;
    cout<<"Enter your army rank: ";
    cin>>arRank;
    cout<<"gadgets are coming soon";
    g1="";g2="";
    Tanker tl(n,arRank,g1,g2,prim,sec,tnk);
    return tl;
}
Squad createSquad(){
    int n;
    cout<<"what is the name of your squad?"<<endl;
    cin>>n;
}
Army createArmyATK(Squad squad1, Tanker tanker1, Pilot pilot1){
    int x;
    cout<<"Choose the attacking army(0-Germany, 1-Austria Hungary, 2-Turkey)"<<endl;
    cin>>x;
    Army a1(promeniATK(x),squad1, tanker1, pilot1);
    return a1;
}
Army createArmyDEF(Squad squad1, Tanker tanker1, Pilot pilot1){
    int x;
    cout<<"Choose the defending army(0-France, 1-United Kingdom, 2-Russia, 3-Italy, 4-USA)"<<endl;
    cin>>x;
    Army a1(promeniATK(x),squad1, tanker1, pilot1);
    return a1;
}
void createBattle(Army a1, Army a2){
    if(a1.getCO()==Germany && a2.getCO()==UnitedKingdom){
        string description="The Battle of Somme was the greatest battle of the First World War,\n it had more than a million warring soldiers thrown out of the line.\n British and French forces tried to break through German lines\n that stretched along a 40 km long front that ran north and south of the river Some in northern France.";
        cout<<description<<endl;
    }

}
int main ()
{
    /*Secondary sec1(36, "nagant_revolver", 6, 2.0, "rasputin", 150, 46);
    Primary prim1(104, "fedorov_avtomat", trench, 25, 2.0, "kerensky", true, automatic, 450, 21);
    Soldier soldier1("ryan", "private", frag, prim1, sec1);
    //soldier1.writeSoldier();*/

    /*string nasFajl = "secondary1.txt";

    cout<<"Unesite tekst koji hocete da upisete u fajl:"<<endl;

    /*soldier1.writeSoldierCount();
    Squad squad1("crnci");
    squad1.enlistSoldier(&soldier1);
    squad1.writeSquad();*/

    cout<<"Welcome to Battlefield one"<<endl;
    cout<<"In this game you are able to simulate battles from world war 1"<<endl;
    cout<<"First thing you will need to do is to create a weapon"<<endl;
    Primary prim=createWeapon1();
    system("CLS");
    cout<<"if you want to continue press 1, if you want to create another weapon press 2"<<endl;
    int x;
    cin>>x;
    while(x==2){
        Primary prim1=createWeapon1();
        system("CLS");
        cout<<"if you want to continue press 1, if you want to create another weapon press 2"<<endl;
        cin>>x;
    }
    system("CLS");
    cout<<"now you should create a secondary weapon or a pistol"<<endl;
    Secondary sec=createWeapon2();
    system("CLS");
    cout<<"if you want to continue press 1, if you want to create another secondary weapon press 2"<<endl;
    int y;
    cin>>y;
    while(y==2){
        Secondary sec1=createWeapon2();
        system("CLS");
        cout<<"if you want to continue press 1, if you want to create another secondary weapon press 2"<<endl;
        cin>>y;
    }
    system("CLS");
    cout<<"your army could also use a tank and a plane, why don't you create few now"<<endl;
    Tank tank0=createTank();
    system("CLS");
    Plane plane0=createPlane();
    system("CLS");
    cout<<"Now you should enlist some soldiers"<<endl;
    cout<<"your soldiers will use weapons you previously created"<<endl;
    Soldier soldier1=napraviVojnika(prim,sec);
    system("CLS");
    Soldier soldier2=napraviVojnika(prim,sec);
    system("CLS");
    Soldier soldier3=napraviVojnika(prim,sec);
    system("CLS");
    Soldier soldier4=napraviVojnika(prim,sec);
    system("CLS");
    cout<<"four soldiers is enough"<<endl;
    cout<<"You could also enlist a pilot and a tanker for your vehicles"<<endl;
    Pilot pilot1=CreatePilot(prim,sec, plane0);
    system("CLS");
    Tanker tanker1=CreateTanker(prim,sec, tank0);
    system("CLS");
    cout<<"Now you can group your soldiers in a squad"<<endl;
    Squad squad1=createSquad();
    system("CLS");
    cout<<"We will just enlist those soldiers you created in your squad"<<endl;
    squad1.enlistSoldier(&soldier1);
    squad1.enlistSoldier(&soldier2);
    squad1.enlistSoldier(&soldier3);
    squad1.enlistSoldier(&soldier4);
    cout<<"if you wish to see your squad press 1"<<endl;
    int s;
    cin>>s;
    if(s==1){squad1.enlistedSoldiers();}
    system("CLS");
    cout<<"this is enough to create an army, but to battle you'll have to create another one\nwe'll just repeat the process"<<endl;

    //-----------------------------------------------------------------------------------------------------------------------------------------------------

    cout<<"First thing you will need to do is to create a weapon"<<endl;
    Primary prim0=createWeapon1();
    system("CLS");
    cout<<"if you want to continue press 1, if you want to create another weapon press 2"<<endl;
    int x0;
    cin>>x0;
    while(x0==2){
        Primary prim10=createWeapon1();
        system("CLS");
        cout<<"if you want to continue press 1, if you want to create another weapon press 2"<<endl;
        cin>>x;
    }
    system("CLS");
    cout<<"now you should create a secondary weapon or a pistol"<<endl;
    Secondary sec0=createWeapon2();
    system("CLS");
    cout<<"if you want to continue press 1, if you want to create another secondary weapon press 2"<<endl;
    int y0;
    cin>>y0;
    while(y0==2){
        Secondary sec10=createWeapon2();
        system("CLS");
        cout<<"if you want to continue press 1, if you want to create another secondary weapon press 2"<<endl;
        cin>>y;
    }
    system("CLS");
    cout<<"your army could also use a tank and a plane, why don't you create few now"<<endl;
    Tank tank1=createTank();
    system("CLS");
    Plane plane1=createPlane();
    system("CLS");
    cout<<"Now you should enlist some soldiers"<<endl;
    cout<<"your soldiers will use weapons you previously created"<<endl;
    Soldier soldier10=napraviVojnika(prim0,sec0);system("CLS");
    Soldier soldier20=napraviVojnika(prim0,sec0);system("CLS");
    Soldier soldier30=napraviVojnika(prim0,sec0);system("CLS");
    Soldier soldier40=napraviVojnika(prim0,sec0);system("CLS");
    cout<<"four soldiers is enough"<<endl;
    cout<<"You could also enlist a pilot and a tanker for yur vehicles"<<endl;
    Pilot pilot10=CreatePilot(prim,sec, plane1);
    system("CLS");
    Tanker tanker10=CreateTanker(prim,sec, tank1);
    system("CLS");
    cout<<"Now you can group your soldiers in a squad"<<endl;
    Squad squad10=createSquad();
    system("CLS");
    cout<<"We will just enlist those soldiers you created"<<endl;
    squad10.enlistSoldier(&soldier10);
    squad10.enlistSoldier(&soldier20);
    squad10.enlistSoldier(&soldier30);
    squad10.enlistSoldier(&soldier40);
    system("CLS");
    //----------------------------------------------------------------------------------------------------------------------------
    cout<<"Great! You can simulate a battle now"<<endl;
    cout<<"pick armies that will fight"<<endl;
    Army army1=createArmyATK(squad1,tanker1, pilot1);
    Army army2=createArmyDEF(squad10,tanker10, pilot10);
    system("CLS");
    createBattle(army1,army2);

    return 0;
}
// funkcionalnost bi bila da korisnik pravi svog vojnika, squad i armiju i da se to upisuje u neki fajl, a MOŽDA i da daj korisnik rekreira neke bitke
