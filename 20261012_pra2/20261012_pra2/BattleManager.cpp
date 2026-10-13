#include "BattleManager.h"
#include <iostream>

BattleManager::BattleManager()
{
}

void BattleManager::StartBattle(Character* player, Character* enemy, Character* boss)
{
	std::cout << "勇者の名前" << player->GetName() << std::endl;
	void(player->Attack());
	std::cout << "敵の名前" << enemy->GetName() << std::endl;
	void(enemy->Attack());
	std::cout << "ボスの名前" << boss->GetName() << std::endl;
	void(boss->Attack());
}
