#pragma once
#include"config.h"
class CardManager
{
public:
	CardManager();
	~CardManager();
private:
	//カードの配列
	int Card[CARD_TOTAL];
	int CardIndex;
public:
	//カードの初期化
	void initializeCards();
	//カードのシャッフル
	void shuffleCards();
	//追加の一枚を引く
	int drawCard();

};

