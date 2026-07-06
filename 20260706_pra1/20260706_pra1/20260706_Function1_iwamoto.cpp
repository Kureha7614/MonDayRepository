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
	//乱数の初期化
	srand((unsigned int)time(NULL));

	cout << "プレイヤーのHPは100です。" << endl;

	//ランダムにプレイヤーのHPを設定する
	playerHp = rand() % 101;

	//プレイヤーのHPを表示する
	cout << "プレイヤーのHPは" << playerHp << "です。" << endl;

	//プレイヤーのHPを回復する or しない
	Heal(playerHp);

	//プレイヤーのHPを表示する
	cout << "プレイヤーのHPは" << playerHp << "です。" << endl;

}