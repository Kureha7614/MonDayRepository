#pragma once
#include"Player.h"
#include"Enemy.h"
#include"Boss.h"

class BattleManager
{
public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	BattleManager();
	/// <summary>
	/// 戦闘を開始する
	/// </summary>
	void StartBattle(Character* player, Character* enemy, Character* boss);
};

