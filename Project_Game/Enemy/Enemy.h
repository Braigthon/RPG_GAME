//
// Created by brayan on 18/02/24.
//

#ifndef PROJECT_GAME_ENEMY_H
#define PROJECT_GAME_ENEMY_H
#include "../Character/Character.h"


class Enemy: public Character{
public:
    Enemy(string, int, int , int, int);
    void doAttack(Character *target) override;
    void takeDamage(int damege) override;
};

#endif //PROJECT_GAME_ENEMY_H
