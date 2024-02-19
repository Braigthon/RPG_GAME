//
// Created by brayan on 13/02/24.
//

#ifndef PROJECT_GAME_PLAYER_H
#define PROJECT_GAME_PLAYER_H

#include "../Character/Character.h"

class Player: public Character {
protected:
    int experencie;
    int level;
public:
    Player(string, int, int, int, int);
    void doAttack(Character *target) override;
    void takeDamage(int Damage) override;

    void flee();
    void emote();
    void levelUp();
    void gainExperencie(int);
};


#endif //PROJECT_GAME_PLAYER_H
