#pragma once
#include "config.h"

class CardManager
{
private:
    //カードの配列
    int Card[CARD_TOTAL];
    // 次に取り出すカードの位置
    int CardIndex;
public:
    CardManager();
    ~CardManager();
    //カードの初期化
    void initializeCards();
    //カードのシャッフル
    void shuffleCards();
    //追加の一枚を引く
    int drawCard();
};