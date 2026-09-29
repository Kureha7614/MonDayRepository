#pragma once
#include "Player.h"
#include "CPU.h"
#include "CardManager.h"
#include "Turn.h"

class Game
{
private:
    Player player;
    CPU cpu;
    CardManager cardManager;
    Turn turn;

    void dealCards();
    void judgeGame() const;
public:
    void run();
};