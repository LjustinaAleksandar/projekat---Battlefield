#ifndef TANK_HPP_INCLUDED
#define TANK_HPP_INCLUDED
#include <iostream>

enum tankWPN {antiInfantry, antiTank, antiAir, mortar};
enum tankTYP {landship, AttackTank, LightTank, PutilovGraford, ArtyTruck, HeavyTank};
class Tank{
    private:
        string name;
        string skin;
        int seats;
        bool smoke;
        tankTYP type;
        tankWPN weapon1;
        tankWPN weapon2;
    public:
        Tank(string n, string s, int seat, bool smk, tankTYP t, tankWPN wpn1, tankWPN wpn2){
            name=n;
            seats=seat;
            skin=s;
            smoke=smk;
            type=t;
            weapon1=wpn1;
            weapon2=wpn2;
        }
        void writeTank (){
            std::cout << name << std::endl;
            std::cout << seats << std::endl;
            std::cout << skin << std::endl;
            std::cout << smoke << std::endl;
            switch (type){
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
            switch (weapon1){
                case 0: std::cout << "antiInfantry" << std::endl;
                        break;
                case 1: std::cout << "antiTank" << std::endl;
                        break;
                case 2: std::cout << "antiAir" << std::endl;
                        break;
                case 3: std::cout << "mortar" << std::endl;
                        break;
                }
            switch (weapon2){
                case 0: std::cout << "antiInfantry" << std::endl;
                        break;
                case 1: std::cout << "antiTank" << std::endl;
                        break;
                case 2: std::cout << "antiAir" << std::endl;
                        break;
                case 3: std::cout << "mortar" << std::endl;
                        break;
                }}
            friend std::ostream& operator<<(std::ostream& izlaz, const Tank& tank1);
};


#endif // TANK_HPP_INCLUDED
