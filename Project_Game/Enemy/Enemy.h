//
// Created by brayan on 18/02/24.
//

#ifndef PROJECT_GAME_ENEMY_H
#define PROJECT_GAME_ENEMY_H
#include "../Character/Character.h"
#include "../Player/Player.h"
#include <vector>
#include <algorithm>

class Player;

class Enemy: public Character {
public:
    Enemy(string, int, int, int, int);
    void doAttack(Character *target) override;
    void takeDamage(int damage) override;
    Character* getTarget(vector<Player*> teamMembers);
    //TODO: Crear el metodo takeAction en la clase Enemy
    // Cuando el enemigo tenga menos del 15% de su vida máxima, habrá un 5% de probabilidad de que intente huir
    // rand() % 100 < 5 ------> intentas huir flee()

    //TODO: Mover metodo flee a character
};
#endif //PROJECT_GAME_ENEMY_H
