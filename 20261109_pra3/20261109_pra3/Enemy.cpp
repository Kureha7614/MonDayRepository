#include "Enemy.h"
#include <iostream>

Enemy::Enemy()
{
	std::cout << "Enemyì¬" << std::endl;
}

Enemy::~Enemy()
{
	std::cout << "Enemy”jŠü" << std::endl;
}

int Enemy::GetHp()const
{
	return hp;
}

void Enemy::Draw()
{
	std::cout << "HP = " << GetHp() << std::endl;
}
