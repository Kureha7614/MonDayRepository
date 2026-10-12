#include "Character.h"
#include <iostream>

Character::Character(std::string name)
{
	this->name = name;
}

std::string Character::GetName()
{
	return name;
}

void Character::Attack()
{
	std::cout << "‚ÍUŒ‚‚µ‚½" << std::endl;
}
