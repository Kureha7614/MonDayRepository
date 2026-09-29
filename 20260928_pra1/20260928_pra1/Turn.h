#pragma once
#include"Player.h"
#include"CPU.h"

class Turn
{
public:
	Turn();
	
	void PlayerTurn(Player* player);
	void CpuTurn(CPU* cpu, Player* player);
};

