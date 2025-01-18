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

    Monster(const std::string &name, int size);


    int std::string name1() const {
        return name;
    }
    [[nodiscard]] int size1() const {
        return size;
    }

    [[nodiscard]] int power1() const {
        return power;
    }
};



#endif //MONSTER_H
