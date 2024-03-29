
#ifndef PROJECT_GAME_CHARACTER_H
#define PROJECT_GAME_CHARACTER_H
#include <string>
#include <vector>
#include <algorithm>
#include "../Combat/Action.h"



using namespace std;

class Character {
protected:
    string name;
    int health;
    int attack;
    int defense;
    int speed;
    bool isPlayer;
    bool fleed;

public:
    Character(string, int, int, int, int, bool);

    virtual void doAttack(Character *target) = 0;
    virtual void takeDamage(int damage) = 0;

    void setName(string);
    string getName();
    void setHealth(int);
    int getHealth();
    void setAttack(int);
    int getAttack();
    void setDefense(int);
    int getDefense();
    void setSpeed(int);
    int getSpeed();
    string toString();
    bool getIsPlayer();
    bool fleedComplete();

};



#endif //PROJECT_GAME_CHARACTER_H
