#include "Enemy.h"
#include<iostream>
Enemy::Enemy(std::string name) :Character(name)
{
	std::cout << "“G‚Ì–¼‘O‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;
	std::cin >> name;
}

void Enemy::Attack()
{
	std::cout<< "‚©‚Ý‚Â‚«UŒ‚I" << std::endl;
}
