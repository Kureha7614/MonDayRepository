#include<iostream>
#include"Enemy.h"
int main(void)
{
	//スマートポインタでEnemyを作る
	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();

	//Enemyの更新と描画
	enemy->Update();
	enemy->Draw();

	return 0;
}