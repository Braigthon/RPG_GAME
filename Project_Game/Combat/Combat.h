//
// Created by brayan on 20/02/24.
//

#ifndef PROJECT_GAME_COMBAT_H
#define PROJECT_GAME_COMBAT_H
#pragma once
#include "../Character/Character.h"
#include "../Player/Player.h"
#include "../Enemy/Enemy.h"
#include "Action.h"
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

class Combat {
private:
    vector<Character*> participants;
    vector<Player*> teamMembers;
    vector<Enemy*> enemies;
    priority_queue<Action> actions;


    void prepareCombat();
    Character* getTarget(Character* target);
    void registerActions();
    void executeActions();
    void eraseAction();

    void checkParticipantStatus(Character* participants);
    void checkForFlee(Character* character);


public:
    Combat(vector<Character*> _participants);
    Combat(vector<Player*> _teamMembers, vector<Enemy*> _enemies);
    Combat();
    void addParticipant(Character *participant);
    void doCombat();
    string participantsToString();
    void endCombat(){};
};

#endif //PROJECT_GAME_COMBAT_H
