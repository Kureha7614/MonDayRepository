#include<iostream>
#include"Enemy.h"
int main(void)
{
	//スマートポインタでEnemyを作る
	std::unique_ptr<Enemy> enemy = std::make_unique<Enemy>();

	Enemy* enemy2 = new Enemy();

	//Enemyの更新と描画
	enemy->Update();
	enemy->Draw();

	enemy2->Update();
	enemy2->Draw();

	//Enemyの破棄
	delete enemy2;

	return 0;
}