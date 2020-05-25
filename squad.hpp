#ifndef SQUAD_HPP_INCLUDED
#define SQUAD_HPP_INCLUDED
#include <iostream>
#include "assault.hpp"
#include "medic.hpp"
#include "support.hpp"
#include "recon.hpp"
#include "soldier.hpp"
#include <vector>

class Squad{
    private:
        string name;
        vector <Soldier*> Soldiers;
    public:
        Squad(string n){name=n;}

        Squad(const Squad& squad1){
            name=squad1.name;
            Soldiers=squad1.Soldiers;
        }

        void enlistSoldier(Soldier* s){
        Soldiers.push_back(s);
        cout<<"A new Soldier got enlisted!"<<endl;
        }

        void enlistedSoldiers(){
        cout<<"in your squad there are these Soldiers: "<<endl;

        for (auto it=Soldiers.begin(); it<Soldiers.end(); it++){
            (*it)->writeSoldier();
            }
        }

        bool removeSoldier(Soldier& a){
        for (auto it=Soldiers.begin(); it<Soldiers.end(); it++){
            if (a.getNAME()==(*it)->getNAME()){
                Soldiers.erase(it);
                cout<<"you just removed a soldier from your squad"<<endl;
                return true;
            }
        }
        return false;
    }
        void writeSquad(){
            cout<<"name of this squad is: "<<name<<endl;
            cout<<"Soldiers in this squad are: "<<endl;

            for (auto it=Soldiers.begin(); it<Soldiers.end(); it++){
                (*it)->writeSoldier();

            }
        }
        void searchSoldier(Soldier& a){
            for (auto it=Soldiers.begin(); it<Soldiers.end(); it++){
                if (a.getNAME()==(*it)->getNAME()){
                    cout<<"there is a soldier under this name in this squad"<<endl;
            }
        }}

};


#endif // SQUAD_HPP_INCLUDED
