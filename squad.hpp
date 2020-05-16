#ifndef SQUAD_HPP_INCLUDED
#define SQUAD_HPP_INCLUDED
#include <iostream>
#include "assault.hpp"
#include "medic.hpp"
#include "support.hpp"
#include "recon.hpp"
#include "soilder.hpp"
#include <vector>

class Squad{
    private:
        string name;
        vector <Soilder*> soilders;
    public:
        Squad(string n){name=n;}

        void enlistSoilder(Soilder* s){
        soilders.push_back(s);
        cout<<"A new soilder got enlisted!"<<endl;
        }

        void enlistedSoilders(){
        cout<<"in your squad there are these soilders: "<<endl;

        for (auto it=soilders.begin(); it<soilders.end(); it++){
            (*it)->writeSoilder();
            }
        }

        bool removeSoilder(Soilder& a){
        for (auto it=soilders.begin(); it<soilders.end(); it++){
            if (a.getNAME()==(*it)->getNAME()){
                soilders.erase(it);
                cout<<"you just removed a soldier from your squad"<<endl;
                return true;
            }
        }
        return false;
    }
    void writeSquad(){
        cout<<"name of this squad is: "<<name<<endl;
        cout<<"Soldiers in this squad are: "<<endl;

        for (auto it=soilders.begin(); it<soilders.end(); it++){
            (*it)->writeSoilder();

        }
    }

};


#endif // SQUAD_HPP_INCLUDED
