#include<iostream>
#include "Enemy.h"
int main(void)
{
	std::cout << "GameŠJn" << std::endl;

	// Enemy‚ğ¶¬
	Enemy* enemy = new Enemy();
	enemy->Update();
	enemy->Draw();
	// Enemy‚ğ”jŠü
	delete enemy;
	enemy = nullptr;
	std::cout << "GameI—¹" << std::endl;

	return 0;
}