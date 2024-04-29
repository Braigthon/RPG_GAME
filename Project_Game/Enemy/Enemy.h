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
private:
    int maxHealth;
    int accumulatedDamage = 0;

    int getMaxHealth() const;

public:
    Enemy(char name[30], int, int, int, int);
    void doAttack(Character *target) override;
    void takeDamage(int damage) override;
    Character* getTarget(vector<Player*> teamMembers);
    Action takeAction(const vector<Player*>& players);
    bool flee(vector<Player *> Players);
};
#endif //PROJECT_GAME_ENEMY_H
