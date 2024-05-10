//
// Created by brayan on 13/02/24.
//


#include "Player.h"
#include <iostream>
#include "../Utils.h"
#include <vector>
#include <algorithm>
#include <string.h>
#include "../Enemy/Enemy.h"


using namespace std;
using namespace combat_utils;

bool compareSpeed(Enemy *a, Enemy *b) {
    return a->getSpeed() > b->getSpeed();
}

Player::Player(char* name, int health, int attack, int defense, int speed) : Character(name, health, attack, defense, speed, true) {
    experience = 0;
    level = 1;
}

Player::Player(char* _name, int _health, int _attack, int _defense, int _speed, bool _isPlayer, int _experience, int _level): Character(_name, _health, _attack, _defense,
                                                                                                                                        _speed, _isPlayer) {
    experience = _experience;
    level = _level;
}

void Player::doAttack(Character *target) {
    int rolledAttack = getRolledAttack(getAttack());
    int trueDamage = target->getDefense() > rolledAttack ? 0 : rolledAttack - target->getDefense();
    target->takeDamage(trueDamage);
    if (target->getHealth() < 0) {
        gainExperience(experience, target);
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

void levelUpEnemies(std::vector<Enemy*>* enemies) {
    for (Enemy* enemy : *enemies) {
        enemy->levelUp();
    }
}

void Player::gainExperience(int exp, Character *target) {
    exp = 100;
    experience += exp;
    cout << "Experience you get: " << experience << " exp" << endl;
    if (experience >= 100) {
        Player::levelUp();
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

            myAction.action = [this, target, enemies]() {
                doAttack(target);
                if (level > enemyLevel ) {
                    if (target->getHealth() <= 0) {
                        for (Enemy *otherEnemy: enemies) {
                            if (otherEnemy != target) {
                                otherEnemy->levelUp();
                                enemyLevel++;
                                cout << otherEnemy->getName() << " leveled up!" << " level: " << enemyLevel << endl;
                            }
                        }
                    }
                }
            };
            break;
        case 2:
            myAction.action = [this, enemies]() {
                flee(enemies);
            };
            break;
        default:
            cout<<"Invalid option"<<endl;
            myAction.action = [this, enemies](){};
            break;
    }

    return myAction;
}


char* Player::serialize() {
    char* iterator = buffer;
    memcpy(iterator, &name, sizeof name);
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

Player* Player::unserialize(char* _buffer){
    char* iterator = _buffer;
    char _name[30];
    int _health;
    int _attack;
    int _defense;
    int _speed;
    bool _isPlayer;
    int _experience;
    int _level;

    memcpy(&_name, iterator, sizeof _name);
    iterator += sizeof _name;

    memcpy(&_health, iterator, sizeof _health);
    iterator += sizeof _health;

    memcpy(&_attack,iterator, sizeof _attack);
    iterator += sizeof _attack;

    memcpy(&_defense, iterator, sizeof _defense);
    iterator += sizeof _defense;

    memcpy(&_speed,iterator, sizeof _speed);
    iterator += sizeof _speed;

    memcpy(&_isPlayer,iterator, sizeof _isPlayer);
    iterator += sizeof _isPlayer;

    memcpy(&_experience,iterator, sizeof _experience);
    iterator += sizeof _experience;

    memcpy(&_level, iterator, sizeof _level);

    return new Player(_name , _health, _attack, _defense, _speed, _isPlayer, _experience, _level);
}

void Player::levelUp() {
    Character::levelUp();
    cout << "you level up!" << endl;
    cout << "Level: " << level << endl;
    cout << "new stats: " << "\nHealth: " << getHealth() + totalDamage  << "\nAttack: " << getAttack() << "\nDefense: " << getDefense() << "\nSpeed: " << getSpeed() <<endl;
}
