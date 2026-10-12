#include<iostream>
#include"Boss.h"
#include"Player.h"
#include"Enemy.h"
using namespace std;
int main(void)
{
	//名前を入力してもらう
	string playerName;
	cout << "プレイヤーの名前を入力してください" << endl;
	cin >> playerName;

	string bossName;
	cout << "ボスの名前を入力してください" << endl;
	cin >> bossName;

	string enemyName;
	cout << "敵の名前を入力してください" << endl;
	cin >> enemyName;

	//ボス
	Boss boss(bossName);
	cout << boss.GetName() << endl;
	boss.Attack();
	//プレイヤー
	Player player(playerName);		
	cout << player.GetName() << endl;
	player.Attack();
	//敵
	Enemy enemy(enemyName);
	cout << enemy.GetName() << endl;
	enemy.Attack();
	return 0;
}