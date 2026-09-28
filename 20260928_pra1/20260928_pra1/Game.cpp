#include "Game.h"
#include<cstdlib>
#include<ctime>
Game::Game()
{

}
Game::~Game()
{

}
/// <summary>
/// カードを初期化する
/// </summary>
void Game::initializeCards()
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
/// <summary>
/// カードをシャッフルする
/// </summary>
void Game::shuffleCards()
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
/// <summary>
/// カードを配る
/// </summary>
/// <param name="player"></param>
/// <param name="cpu"></param>
void Game::dealCards(Player& player, CPU& cpu)
{
}
/// <summary>
/// プレイヤーのターン
/// </summary>
/// <param name="player"></param>
void Game::playerTurn(Player& player)
{
}
/// <summary>
/// CPUのターン
/// </summary>
/// <param name="cpu"></param>
/// <param name="playerScore"></param>
void Game::cpuTurn(CPU& cpu, int playerScore)
{
}
/// <summary>
/// ゲームの勝敗を判定する
/// </summary>
void Game::judgeGame()
{
}
