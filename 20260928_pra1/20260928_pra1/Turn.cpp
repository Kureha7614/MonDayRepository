#include "Turn.h"
#include <iostream>

Turn::Turn()
{
}

void Turn::PlayerTurn(Player* player, CardManager& cardManager)
{
    //プレイヤーのターン
    std::cout << "\n--- Playerのターン ---\n";
    while (true)
    {
        //条件分岐
        if (player->isTwentyOne())
        {
            std::cout << "Playerは21です。ターンを終了します。\n";
            return;
        }
        if (player->isBurst())
        {
            std::cout << "Playerがバーストしました。\n";
            return;
        }

        std::cout << "Playerの合計：" << player->getScore()
                  << "\nカードを引きますか？\n0：Yes\n1：No\n> " << std::flush;
        //カードを引くか引かないかの入力
        int choice = player->inputDraw();
        //入力に応じた処理
        if (choice == INPUT_DRAW)
        {
            //カードを引く場合の処理
            int drawnCard = cardManager.drawCard();
            player->addScore(drawnCard);
            std::cout << "Playerが引いたカード：" << drawnCard
                      << " / 合計：" << player->getScore() << "\n";
        }
        else if (choice == INPUT_NOT_DRAW)
        {
            //カードを引かない場合の処理
            std::cout << "Playerはカードを引かずにターンを終了します。\n";
            return;
        }
        else
        {
            std::cout << "無効な入力です。0か1を入力してください。\n";
        }
    }
}

void Turn::CpuTurn(CPU* cpu, Player* player, CardManager& cardManager)
{
    //CPUのターン
    std::cout << "\n--- CPUのターン ---\n";
    //カードを引くか引かないかの判断
    while (cpu->isDraw(player->getScore()))
    {
        int drawnCard = cardManager.drawCard();
        cpu->addScore(drawnCard);
        std::cout << "CPUが引いたカード：" << drawnCard
                  << " / 合計：" << cpu->getScore() << "\n";
    }
    if (cpu->isBurst())
    {
        std::cout << "CPUがバーストしました。\n";
    }
    else
    {
        std::cout << "CPUは合計" << cpu->getScore() << "でターンを終了します。\n";
    }
}