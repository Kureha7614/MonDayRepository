#include "Animal.h"
#include<iostream>
Animal::Animal(std::string name)
{
	this->name = name;
}

std::string Animal::GetName()
{
	return name;
}

void Animal::Speak()
{
	std::cout << "動物の鳴き声" << std::endl;
}
