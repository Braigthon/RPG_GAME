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
    int totalDamage;
    int enemyLevel= 1;

public:
    Player(char* _name, int _health, int _attack, int _defense, int _speed);
    Player(char* _name, int _health, int _attack, int _defense, int _speed, bool _isPlayer, int _experience, int _level);

    void doAttack(Character *target) override;
    void takeDamage(int damage) override;
    char* serialize();
    static const unsigned int BUFFER_SIZE = sizeof (name) + sizeof (health) + sizeof (attack) + sizeof (defense) + sizeof (speed) + sizeof (isPlayer) + sizeof (experience) + sizeof (level);

    static Player* unserialize(char* buffer);

    Character* getTarget(vector<Enemy *> enemies);

    bool flee(vector<Enemy*> enemies);
    void emote();
    void levelUp();
    void gainExperience(int, Character *target);

    Action takeAction(vector<Enemy*> enemies);



private:
    char buffer[Player::BUFFER_SIZE];
    std::vector<Enemy*> enemies;
};


#endif //PROJECT_GAME_PLAYER_H
