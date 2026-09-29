#include "Turn.h"
#include"config.h"

Turn::Turn()
{

}

void Turn::PlayerTurn(Player* player)
{
	//プレイヤーのターン
	//カードを引くか引かないかの入力
	int choice = player->inputDraw();

}

void Turn::CpuTurn(CPU* cpu, Player* player)
{
	//CPUのターン
	//カードを引くか引かないかの入力
	int CpuChoice = cpu->isDraw(player->getScore());
}
