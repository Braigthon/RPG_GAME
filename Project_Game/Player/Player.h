//
// Created by brayan on 13/02/24.
//

#ifndef PROJECT_GAME_PLAYER_H
#define PROJECT_GAME_PLAYER_H

#include "../Character/Character.h"
#include "../Enemy/Enemy.h"
#include "../Combat/Action.h"
#include <vector>
#include <algorithm>

struct Action;
class Enemy;

class Player: public Character {
protected:
    int experience;
    int level;
public:
    Player(string _name, int _health, int _attack, int _defense, int _speed);
    void doAttack(Character *target) override;
    void takeDamage(int damage) override;

    Character* getTarget(vector<Enemy *> enemies);

    bool flee(vector<Enemy*> enemies);
    void emote();
    void levelUp();
    void gainExperience(int);

    Action takeAction(vector<Enemy*> enemies);
};


#endif //PROJECT_GAME_PLAYER_H
