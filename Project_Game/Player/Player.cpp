//
// Created by brayan on 13/02/24.
//

#include "Player.h"
#include "iostream"

using namespace std;

Player::Player(string name, int health, int attack, int defense, int speed) : Character(name, health, attack, defense, speed) {
    experencie = 0;
    level = 1;
}

void Player::doAttack(Character *target) {
    int trueDamage = getAttack() - target->getDefense();
    target ->takeDamage(trueDamage);
}

void Player::takeDamage(int damage) {
    setHealth(health - damage);
    if(health <= 0) {
        cout <<"You have died\n" << endl;
    }
    else{
        cout<<"You have taken damage "<< damage <<" damage\n" << endl;
    }
}

void Player::flee() {
    //TODO: implement flee
    cout<< "work in progress" <<endl;
}

void Player::emote() {
    cout<< "jokes on you" <<endl;
}

void Player::levelUp() {
    level ++;
    setHealth(getHealth() + 10);
    setAttack(getAttack() + 5);
    setDefense(getDefense() + 5);
    setSpeed(getSpeed() + 5);
}

void Player::gainExperencie(int exp) {
    experencie += exp;
    if (experencie >= 100) {
        levelUp();
        experencie = 0;
    }
}