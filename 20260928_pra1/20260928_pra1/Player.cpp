#include "Player.h"
#include"config.h"
#include<iostream>

Player::Player()
{
	//初期化
	PlayerScore = INIT_SCORE;
}

Player::~Player()
{
	//デストラクタ
}


int Player::inputDraw()
{
	std::cin >> Input;
	//カードを引くか引かないかの入力
	if (Input == INPUT_DRAW)
	{
		return INPUT_DRAW;
	}
	else if (Input == INPUT_NOT_DRAW)
	{
		return INPUT_NOT_DRAW;
	}
	else
	{
		return -1;
	}
	return 0;
}

void Player::addScore(int add)
{
	PlayerScore += add;
}

