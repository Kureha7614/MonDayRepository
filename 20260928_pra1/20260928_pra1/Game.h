#pragma once
#include "config.h"
#include "Player.h"
#include "CPU.h"
class Game
{
private:
	//カードの配列
	int Card[CARD_TOTAL];
	//カードのインデックス
	int CardIndex = INIT_SCORE;
public:
	Game();
	~Game();
	
	//カードを初期化する
	void initializeCards();

	//カードのシャッフル
	void shuffleCards();

	//カードをぷれいやーとCPUに配る
	void dealCards(Player& player, CPU& cpu);

	//ぷれいやーのターン
	void playerTurn(Player& player);

	//CPUのターン
	void cpuTurn(CPU& cpu, int playerScore);

	//ゲームの勝敗を判定する
	void judgeGame();
};

