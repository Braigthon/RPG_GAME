//
// Created by brayan on 13/02/24.
//


#include "Player.h"
#include <iostream>
#include "../Utils.h"
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;
using namespace combat_utils;

bool compareSpeed(Enemy *a, Enemy *b) {
    return a->getSpeed() > b->getSpeed();
}

Player::Player(char* name, int health, int attack, int defense, int speed) : Character(name, health, attack, defense, speed, true) {
    experience = 0;
    level = 1;
}



void Player::doAttack(Character *target) {
    int rolledAttack = getRolledAttack(getAttack());
    int trueDamage = target->getDefense() > rolledAttack ? 0 : rolledAttack - target->getDefense();
    target->takeDamage(trueDamage);
    if (target->getHealth() < 0){
        gainExperience(experience);
    }

}

void Player::takeDamage(int damage) {
    totalDamage += damage;
    setHealth(health - damage);
    cout<<"You have taken " << damage << " damage" << endl;
    if (health <= 0) {
        cout<<"You have died"<<endl;
    }
}

bool Player::flee(vector<Enemy*> enemies) {
    std::sort(enemies.begin(), enemies.end(), compareSpeed);
    Enemy* fastestEnemy = enemies[0];
    bool fleed = false;
    if(this->getSpeed() > fastestEnemy->getSpeed()) {
        fleed =  true;
        cout<<"you have fleed"<<endl;
    }
    else {
        srand(time(NULL));
        int chance = rand() % 100;
        cout<< "chance: " << chance << endl;
        fleed = chance > 80;
        if(fleed == true){
            cout<< getName() << " you have fleed"<<endl;
        } else{
            cout<< getName() << " try flee"<<endl;
        }
    }

    return this->fleed = fleed;
}

void Player::emote() {
    cout<<"Jokes on you" << endl;
}

void Player::levelUp() {
    level++;
    setHealth(getHealth() + 10);
    setAttack(getAttack() + 5);
    setDefense(getDefense() + 5);
    setSpeed(getSpeed() + 5);
}

void Player::gainExperience(int exp) {
    exp = 100;
    experience += exp;
    cout << "Experience you get: " << experience << " exp" << endl;
    if (experience >= 100) {
        levelUp();
        cout << "you level up!" << endl;
        cout << "Level: " << level << endl;
        cout << "new stats: " << "\nHealth: " << getHealth() + totalDamage  << "\nAttack: " << getAttack() << "\nDefense: " << getDefense() << "\nSpeed: " << getSpeed() <<endl;
        experience = 0;
    };
}

Character* Player::getTarget(vector<Enemy *> enemies) {
    cout << "Choose a target" << endl;
    int targetIndex = 0;
    for(int i = 0; i < enemies.size(); i++) {
        cout << i << ". " << enemies[i]->getName() << endl;
    }
    cin >> targetIndex;
    //TODO: Add input validation
    return enemies[targetIndex];
}

Action Player::takeAction(vector<Enemy*> enemies) {
    int option = 0;
    cout<<"Choose an action"<<endl;
    cout<<"1. Attack"<<endl;
    cout<<"2. Flee"<<endl;
    cin >> option;
    Character* target = nullptr;

    Action myAction;

    myAction.speed = this->getSpeed();
    myAction.subscriber = this;

    switch(option) {
        case 1:
            target = getTarget(enemies);
            myAction.target = target;

            myAction.action = [this, target]() {
                doAttack(target);
            };
            break;
        case 2:
            myAction.action = [this, enemies]() {
                flee(enemies);
            };
            break;
        default:
            cout<<"Invalid option"<<endl;
            break;
    }

    return myAction;
}

char* Player::serialize() {
    char* iterator = buffer;
    memcpy(iterator, name, sizeof name);
    iterator += sizeof name;

    memcpy(iterator, &health, sizeof health);
    iterator += sizeof health;

    memcpy(iterator, &attack, sizeof attack);
    iterator += sizeof attack;

    memcpy(iterator, &defense, sizeof defense);
    iterator += sizeof defense;

    memcpy(iterator, &speed, sizeof speed);
    iterator += sizeof speed;

    memcpy(iterator, &isPlayer, sizeof isPlayer);
    iterator += sizeof isPlayer;

    memcpy(iterator, &experience, sizeof experience);
    iterator += sizeof experience;

    memcpy(iterator, &level, sizeof level);

    return buffer;
}

Player* Player::unserialize(char* buffer){
    char* iterator = buffer;
    char* name[30];
    int health;
    int attack;
    int defense;
    int speed;
    bool isPlayer;
    int experience;
    int level;

    memcpy(iterator, name, sizeof name);
    iterator += sizeof name;

    memcpy(iterator, &health, sizeof health);
    iterator += sizeof health;

    memcpy(iterator, &attack, sizeof attack);
    iterator += sizeof attack;

    memcpy(iterator, &defense, sizeof defense);
    iterator += sizeof defense;

    memcpy(iterator, &speed, sizeof speed);
    iterator += sizeof speed;

    memcpy(iterator, &isPlayer, sizeof isPlayer);
    iterator += sizeof isPlayer;

    memcpy(iterator, &experience, sizeof experience);
    iterator += sizeof experience;

    memcpy(iterator, &level, sizeof level);

}
