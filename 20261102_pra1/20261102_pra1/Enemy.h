#pragma once
class Player;
#include "Config.h"
#include "TurnManager.h"
#include <iostream>
class Enemy
{
private:
	int hp;
	int heal;
	int reduction;
	int damage;
public:
	Enemy();
	void Attack(Player* target);
	void Reduce();
	void TakeDamage(int damage);
	void ShowHP();
	int GetHP();
};

