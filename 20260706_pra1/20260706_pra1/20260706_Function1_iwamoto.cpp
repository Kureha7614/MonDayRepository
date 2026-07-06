#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260706_Header1_iwamoto.h"
using namespace std;

int InputChoise(int min,int max)
{
	//変数
	int choice;
	//入力チェック
	while (true)
	{
		//０か1を入力させる
		cin >> choice;
		if (choice >= min && choice <= max)
		{
			break;
		}
		else
		{
			cout << min << "から" << max << "を入力してください" << endl;
		}
	}
	return choice;
}


void Heal(int& Hp)
{
	//変数
	int choice;

	cout << "回復しますか？？（Yes：1、No：2）" << endl;
	choice = InputChoise(Min, Max);
	if (choice == 1)
	{
		//回復
		Hp += 20;
		cout << "HPを２０回復しました" << endl;
	}
	else
	{
		cout << "回復しませんでした" << endl;
	}
}

void Game()
{
	//変数
	int playerHp = 0;
	int enemyAttack = 0;
	int Judge = 0;
	int choice = 0;
	//乱数の初期化
	srand((unsigned int)time(NULL));

	cout << "プレイヤーのHPは100です。" << endl;

	//ランダムにプレイヤーのHPを設定する
	playerHp = rand() % 101;
	choice = rand() % 4;
	Judge = rand() % 4;
	
	//プレイヤーのHPを表示する
	cout << "プレイヤーのHPは" << playerHp << "です。" << "\n";

	//プレイヤーのHPを回復する or しない
	Heal(playerHp);

	//四分の一で連続行動
	if (choice == Judge)
	{
		cout << "プレイヤーは連続行動を行った!" << "\n";
		Heal(playerHp);
	}
	else
	{
		cout << "プレイヤーは連続行動を行わなかった!" << "\n";
	}

	//プレイヤーのHPを表示する
	cout << "プレイヤーのHPは" << playerHp << "です。" << "\n";

	//もう一度数をランダムに設定する
	choice = rand() % 4;
	Judge = rand() % 4;
	//敵の攻撃
	enemyAttack = rand() % 101;
	cout << "敵の攻撃!" << "\n";
	cout << "プレイヤーは" << enemyAttack << "のダメージを受けた!" << "\n";
	

	//プレイヤーのHPを減らす
	playerHp -= enemyAttack;
	//プレイヤーのHPを表示する
	cout << "プレイヤーのHPは" << playerHp << "です。" << "\n";

	//四分の一で連続行動
	if (choice == Judge)
	{
		cout << "敵はは連続行動を行った!" << "\n";
		cout << "敵の攻撃!" << "\n";
		enemyAttack = rand() % 101;
		cout << "プレイヤーは" << enemyAttack << "のダメージを受けた!" << "\n";
		//プレイヤーのHPを減らす
		playerHp -= enemyAttack;
		//プレイヤーのHPを表示する
		cout << "プレイヤーのHPは" << playerHp << "です。" << "\n";
	}
	

	//プレイヤーのHPが0以下の場合、ゲームオーバー
	if (playerHp <= 0)
	{
		cout << "ゲームオーバー" << endl;
	}
	else
	{
		cout << "ゲームクリア" << endl;
	}
}

