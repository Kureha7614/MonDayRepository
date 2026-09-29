#include "CardManager.h"
#include <cstdlib>
#include <stdexcept>

CardManager::CardManager()
{
    initializeCards();
}

CardManager::~CardManager()
{
}

void CardManager::initializeCards()
{
    // 山札を作る位置と、配る位置を分ける
    int index = 0;
    // カードの数字を初期化
    for (int i = 0; i < CARD_NUM; i++)
    {
        for (int j = 0; j < MAX_CARD; j++)
        {
            Card[index] = j + MIN_CARD;  /* 今のカードの数字 */
            index++;
        }
    }
    CardIndex = 0;
}

void CardManager::shuffleCards()
{
    for (int i = CARD_TOTAL - 1; i > 0; i--)
    {
        int shuffleNum = rand() % (i + 1);
        int tmp = Card[i];
        Card[i] = Card[shuffleNum];
        Card[shuffleNum] = tmp;
    }
    CardIndex = 0;
}

int CardManager::drawCard()
{
    if (CardIndex >= CARD_TOTAL)
    {
        throw std::out_of_range("山札にカードがありません。");
    }
    return Card[CardIndex++];
}