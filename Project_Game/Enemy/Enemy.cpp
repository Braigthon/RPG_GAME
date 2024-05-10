//
// Created by brayan on 18/02/24.
//

#include "Enemy.h"
#include "../Character/Character.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

Enemy::Enemy(char name[30], int health, int attack, int defense, int speed) : Character( name, health, attack, defense, speed, false) {
}

bool compareSpeed(Player *a, Player *b) {
    return a->getSpeed() > b->getSpeed();
}

//TODO: Check the circular dependency
int getRolledAttack(int attack) {
    int lowerLimit = attack * .80;
    return (rand() % (attack - lowerLimit)) + lowerLimit;
}

void Enemy::doAttack(Character *target) {
    int rolledAttack = getRolledAttack(getAttack());
    int trueDamage = target->getDefense() > rolledAttack ? 0 : rolledAttack - target->getDefense();
    target->takeDamage(trueDamage);
}

void Enemy::takeDamage(int damage) {

    accumulatedDamage += damage;

    setHealth(getHealth() - damage);
    if(getHealth() <= 0) {
        cout<<getName()<<" has died"<<endl;
    }
    else {
        cout<<getName()<<" has taken " << damage << " damage" << endl;
    }
}

Character* Enemy::getTarget(vector<Player *> teamMembers) {
    // Obtiene el miembro del equipo con menos vida
    int targetIndex = 0;
    int lowestHealth = INT_MAX;
    for(int i=0; i < teamMembers.size(); i++) {
        if(teamMembers[i]->getHealth() < lowestHealth) {
            lowestHealth = teamMembers[i]->getHealth();
            targetIndex = i;
        }
    }

    return teamMembers[targetIndex];
}

bool Enemy::flee(vector<Player *> players) {
    std::sort(players.begin(), players.end(), compareSpeed);
    Player *fastestPlayer = players[0];
    bool fleed = false;
    if(this->getHealth() > 0) {
        if (this->getSpeed() > fastestPlayer->getSpeed()) {
            fleed = true;
        } else {
            srand(time(NULL));
            int chance = rand() % 100;
            cout << "chance: " << chance << endl;
            fleed = chance > 50;
            if (fleed) {
                fleed = true;
                cout << getName() << " has fleed the combat" << endl;
            } else {
                cout << getName() << " try flee" << endl;
            }
        }
    }
    this->fleed = fleed;
    return fleed;
}


Action Enemy::takeAction(const vector<Player*>&players) {

    Character* target = nullptr;

    if(fleed){
        return Action();
    }

    Action myAction;

    myAction.speed = this->getSpeed();
    myAction.subscriber = this;

    if (getHealth() < (accumulatedDamage + getHealth()) * 0.50) {
            myAction.action = [this, players]() {
                flee(players);
            };
        }else{
            target = getTarget(players);
            myAction.target = target;

            myAction.action = [this, target]() {
                doAttack(target);
            };
    }
    return myAction;


}
void Enemy::levelUp() {
    Character::levelUp();
    }


