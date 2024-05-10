//
// Created by brayan on 13/02/24.
//

#include <cstring>
#include "Character.h"

Character::Character(char* _name, int _health, int _attack, int _defense, int _speed, bool _isPlayer) {
    strcpy(name, _name);
    health = _health;
    attack = _attack;
    defense = _defense;
    speed = _defense;
    speed = _speed;
    isPlayer = _isPlayer;
    fleed = false;
}

void Character::setName(const char* newName) {
    int i = 0;
    while (newName[i] != '\0' && i < 29) {
        name[i] = newName[i];
        i++;
    }
    name[i] = '\0';
}


string Character::getName() {
    return std::string(this->name);
}

void Character::setHealth(int _health) {
    health = _health;
}

int Character::getHealth() {
    return health;
}

void Character::setAttack(int _attack) {
    attack = _attack;
}

int Character::getAttack() {
    return attack;
}

void Character::setDefense(int _defense) {
    defense = _defense;
}

int Character::getDefense() {
    return defense;
}

void Character::setSpeed(int _speed) {
    speed = _speed;
}
int Character::getSpeed() {
    return speed;
}

string Character::toString() {
    return "name: " + std::string(name) + "\nHealth: " + to_string(health) + "\nAttack: " + to_string(attack) + "\nDefense: " + to_string(defense) + "\nSpeed: " + to_string(speed);
}

bool Character::getIsPlayer() {
    return isPlayer;
}

bool Character::fleedComplete() {
    return fleed;
}

void Character::levelUp() {
    level++;
    setHealth(getHealth() + 10);
    setAttack(getAttack() + 5);
    setDefense(getDefense() +3);
    setSpeed(getSpeed() + 5);
}
