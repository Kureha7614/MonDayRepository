#pragma once
#include "Player.h"
#include "CPU.h"
#include "CardManager.h"

class Turn
{
public:
    Turn();
    // Šeƒ^[ƒ“‚Ìˆ—
    void PlayerTurn(Player* player, CardManager& cardManager);
    void CpuTurn(CPU* cpu, Player* player, CardManager& cardManager);
};