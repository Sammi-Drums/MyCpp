//
// Created by sammi on 17/01/2025.
//

#ifndef MONSTER_H
#define MONSTER_H
#include <string>


class Monster {
    std::string name;
    int size;
    int power = 100;

public:
    Monster(int size, const std::string& name);

};



#endif //MONSTER_H
