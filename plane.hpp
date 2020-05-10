#ifndef PLANE_HPP_INCLUDED
#define PLANE_HPP_INCLUDED
#include <iostream>
enum planeWPN {rockets, machinegun, infantryBombs, tankBombs};
enum planeTYP {attack, bomber, fighter, heavy};
class Plane{
    private:
        string name;
        int seats;
        string skin;
        planeTYP type;
        planeWPN weapon1;
        planeWPN weapon2;
    public:
        Plane(string n, int seat, string s, planeTYP t, planeWPN wpn1, planeWPN wpn2){
            name=n;
            seats=seat;
            skin=s;
            type=t;
            weapon1=wpn1;
            weapon2=wpn2;
        }
        void writePlane (){
            std::cout << name << std::endl;
            std::cout << seats << std::endl;
            std::cout << skin << std::endl;
            switch (type){
                case 0: std::cout << "attack" << std::endl;
                        break;
                case 1: std::cout << "bomber" << std::endl;
                        break;
                case 2: std::cout << "fighter" << std::endl;
                        break;
                case 3: std::cout << "heavy" << std::endl;
                        break;
                }
            switch (weapon1){
                case 0: std::cout << "rockets" << std::endl;
                        break;
                case 1: std::cout << "machinegun" << std::endl;
                        break;
                case 2: std::cout << "infantryBombs" << std::endl;
                        break;
                case 3: std::cout << "tankBombs" << std::endl;
                        break;
                }
            switch (weapon2){
                case 0: std::cout << "rockets" << std::endl;
                        break;
                case 1: std::cout << "machinegun" << std::endl;
                        break;
                case 2: std::cout << "infantryBombs" << std::endl;
                        break;
                case 3: std::cout << "tankBombs" << std::endl;
                        break;
                }}

            friend std::ostream& operator<<(std::ostream& izlaz, const Plane& plane1);
};




#endif // PLANE_HPP_INCLUDED
