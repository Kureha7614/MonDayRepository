#include "Enemy.h"
#include <iostream>

Enemy::Enemy()
{
	std::cout << "Enemy‚ð¶¬‚µ‚Ü‚µ‚½" << std::endl;
}

Enemy::~Enemy()
{
	std::cout << "Enemy‚ð”jŠü‚µ‚Ü‚µ‚½" << std::endl;
}

void Enemy::Update()
{
	std::cout << "Enemy‚ðXV‚µ‚Ü‚µ‚½" << std::endl;
}

void Enemy::Draw()
{
	std::cout << "Enemy‚ð•`‰æ‚µ‚Ü‚µ‚½" << std::endl;
}
