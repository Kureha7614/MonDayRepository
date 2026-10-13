#include<iostream>
#include"Boss.h"
#include"Player.h"
#include"Enemy.h"
#include"BattleManager.h"
using namespace std;
int main(void)
{
	//名前を入力してもらう
	string playerName;
	cout << "プレイヤーの名前を入力してください" << endl;
	cin >> playerName;

	string name;
	cout << "ボスの名前を入力してください" << endl;
	cin >> name;
	

	string enemyName;
	cout << "敵の名前を入力してください" << endl;
	cin >> enemyName;

	//ボス
	Boss boss(name);
	//プレイヤー
	Player player(playerName);
	//敵
	Enemy enemy(enemyName);

	BattleManager battleManager;
	battleManager.StartBattle(&player, &enemy, &boss);

	return 0;
}