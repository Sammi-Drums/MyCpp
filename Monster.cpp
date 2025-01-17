//
// Created by sammi on 17/01/2025.
//

#include "Monster.h"
#include <utility>



Monster::Monster(const std::string &name, int size)
        : name(std::move(name)),
          size(size) {
}