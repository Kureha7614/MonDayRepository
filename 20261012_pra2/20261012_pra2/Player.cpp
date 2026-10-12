#include "Player.h"
#include<iostream>
Player::Player(std::string name) :Character(name)
{
	std::cout << "プレイヤーの名前を入力してください" << std::endl;
	std::cin >> name;
}

void Player::Attack()
{
	std::cout << GetName() << "は剣で攻撃した" << std::endl;
}
