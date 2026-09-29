#include "Game.h"
#include <iostream>

void Game::run()
{
    player = Player();
    cpu = CPU();
    cardManager.initializeCards();
    cardManager.shuffleCards();

    std::cout << "=== 21を目指すカードゲーム ===\n";
    dealCards();

    // プレイヤーがバーストしたらCPUのターンには進まない
    turn.PlayerTurn(&player, cardManager);
    if (player.isBurst())
    {
        judgeGame();
        return;
    }

    turn.CpuTurn(&cpu, &player, cardManager);
    judgeGame();
}

void Game::dealCards()
{
    std::cout << "最初に2枚ずつ配ります。\n";
    for (int i = 0; i < INIT_CARD; i++)
    {
        int playerCard = cardManager.drawCard();
        player.addScore(playerCard);
        int cpuCard = cardManager.drawCard();
        cpu.addScore(cpuCard);
        std::cout << "Player：" << playerCard << " / CPU：" << cpuCard << "\n";
    }
    std::cout << "Playerの合計：" << player.getScore()
              << "\nCPUの合計：" << cpu.getScore() << "\n";
}

void Game::judgeGame() const
{
    std::cout << "\n--- 最終結果 ---\n"
              << "Player：" << player.getScore() << "\n"
              << "CPU：" << cpu.getScore() << "\n";

    // バーストを点数の大小より先に判定する
    if (player.isBurst())
    {
        std::cout << "Playerの負け（バースト）。CPUの勝ち！\n";
    }
    else if (cpu.isBurst())
    {
        std::cout << "CPUの負け（バースト）。Playerの勝ち！\n";
    }
    else if (player.getScore() > cpu.getScore())
    {
        std::cout << "Playerの勝ち！\n";
    }
    else if (player.getScore() < cpu.getScore())
    {
        std::cout << "CPUの勝ち！\n";
    }
    else
    {
        std::cout << "引き分け！\n";
    }
}