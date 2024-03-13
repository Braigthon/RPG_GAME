//
// Created by brayan on 20/02/24.
//

#ifndef PROJECT_GAME_UTILS_H
#define PROJECT_GAME_UTILS_H
#include <cstdlib>

namespace combat_utils {
    int getRolledAttack(int attack) {
        srand(time(NULL));
        int lowerLimit = attack * .80;
        return (rand() % (attack - lowerLimit)) + lowerLimit;
    }
}


#endif //PROJECT_GAME_UTILS_H
