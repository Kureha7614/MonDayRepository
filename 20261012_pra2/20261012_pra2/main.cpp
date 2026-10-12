#include<iostream>
#include"Character.h"
#include"Boss.h"
#include"Player.h"
#include"Enemy.h"
using namespace std;
int main(void)
{
	//コンストラクタ
	Character character("眠い");
	Boss boss("名前");
	Player player("名前");
	Enemy enemy("名前");
	//名前の表示と攻撃
	//キャラクター
	cout << character.GetName() << endl;
	character.Attack();
	//ボス
	cout << boss.GetName() << endl;
	boss.Attack();
	//プレイヤー
	cout << player.GetName() << endl;
	player.Attack();
	//敵
	cout << enemy.GetName() << endl;
	enemy.Attack();
	return 0;
}