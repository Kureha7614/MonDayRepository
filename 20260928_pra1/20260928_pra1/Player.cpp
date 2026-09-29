#include "Player.h"
#include <iostream>
#include <sstream>
#include <string>

Player::Player()
{
    //初期化
    Input = INPUT_NOT_DRAW;
    PlayerScore = INIT_SCORE;
}

Player::~Player()
{
    //デストラクタ
}

//カードを引くか引かないかの入力
int Player::inputDraw()
{
    // 0か1だけが入力されたか確認する
    std::string line;
    if (!std::getline(std::cin, line))
    {
        // 入力が終わった場合は引かない
        return INPUT_NOT_DRAW;
    }
    std::istringstream input(line);
    char extra;
    if (!(input >> Input) || (input >> extra))
    {
        return -1;
    }
    if (Input == INPUT_DRAW || Input == INPUT_NOT_DRAW)
    {
        return Input;
    }
    return -1;
}

//得点を加算
void Player::addScore(int add)
{
    PlayerScore += add;
}