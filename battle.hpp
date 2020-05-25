#ifndef BATTLE_HPP_INCLUDED
#define BATTLE_HPP_INCLUDED
#include <iostream>
#include "army.hpp"

class Battle{
    private:
        string name;
        Army attacker;
        Army defender;
        Army winner;
        string description;
    public:
        Somme(Army atk, Army def){
            description="The Battle of Somme was the greatest battle of the First World War,\n it had more than a million warring soldiers thrown out of the line.\n British and French forces tried to break through German lines\n that stretched along a 40 km long front that ran north and south of the river Some in northern France.";
            winner=def;
            cout<<description<<endl;
        }
};

#endif // BATTLE_HPP_INCLUDED
