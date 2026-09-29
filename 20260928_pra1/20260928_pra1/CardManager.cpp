#include "CardManager.h"
#include "config.h"
#include <cstdlib>
#include <ctime>

CardManager::CardManager()
{
}

CardManager::~CardManager()
{
}

void CardManager::initializeCards()
{
    CardIndex = INIT_SCORE;
    // カードの数字を初期化
    for (int i = 0; i < CARD_NUM; i++)
    {
        for (int j = 0; j < MAX_CARD; j++)
        {
            Card[CardIndex] = j + 1  /* 今のカードの数字 */;
            CardIndex++;
        }
    }
}

void CardManager::shuffleCards()
{
    CardIndex = INIT_SCORE;
    srand((unsigned int)time(NULL));
    for (int i = 0; i < CARD_TOTAL; i++)
    {
        int shuffleNum = rand() % (i + 1);
        int tmp = Card[i];
        Card[i] = Card[shuffleNum];
        Card[shuffleNum] = tmp;
    }
}

int CardManager::drawCard()
{
    return Card[CardIndex++];
}
