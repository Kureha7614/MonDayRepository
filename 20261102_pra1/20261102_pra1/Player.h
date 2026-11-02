#pragma once
#include"Config.h"
class Enemy;
#include"TurnManager.h"
#include<iostream>
class Player
{
private:
	int hp;
	int heal;
	int reduction;
	int damage;
public:
	Player();
	void Attack(Enemy* target);
	void Heal();
	void Reduce();
	void TakeDamage(int damage);
	void ShowHP();
	int GetHP();
};

