#include "Boss.h"
#include<iostream>
Boss::Boss(std::string name) :Character(name)
{
	std::cout << "ƒ{ƒX‚Ì–¼‘O‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;
	std::cin >> name;
}

void Boss::Attack()
{
	std::cout << GetName() << "‚Í‚ß‚ñ‚Ç‚­‚³‚»‚¤‚É‹­—Í‚È•KŽE‹Z‚ð•ú‚Á‚½" << std::endl;
}
