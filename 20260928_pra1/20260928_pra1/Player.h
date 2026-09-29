#pragma once
#include "config.h"

class Player
{
private:
    //ぷれいやーの入力
    int Input;
    //プレイヤーの得点
    int PlayerScore;
public:
    //コンストラクタ
    Player();
    ~Player();
    //カードを引くか引かないかの入力
    int inputDraw();
    //得点を加算
    void addScore(int add);
    //ぷれいやーの得点が21の場合trueを返す
    bool isTwentyOne() const
    {
        return PlayerScore == WIN_SCORE;
    }
    //ぷれいやーの得点が22以上の場合trueを返す
    bool isBurst() const
    {
        return PlayerScore >= BURST_SCORE;
    }
    //ぷれいやーの得点を返す
    int getScore() const
    {
        return PlayerScore;
    }
};